#include "recomp.h"

/* FUN_1000d6d0 @ 0x127ed6d0 (10 bytes, 5 insns) */
void f_127ed6d0(void) {
  FTRACE(0x127ed6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ed6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 127ed6d1 mov ebp, esp */
  EBP = (ESP);
  /* 127ed6d3 mov eax, dword ptr [0x12813c94] */
  EAX = (r32((uint32_t)(0x12813c94)));
  /* 127ed6d8 pop ebp */
  EBP = (pop32());
  /* 127ed6d9 ret  */
  ESPCHK(0x127ed6d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d6e0 @ 0x127ed6e0 (31 bytes, 11 insns) */
void f_127ed6e0(void) {
  FTRACE(0x127ed6e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ed6e0 push ebp */
  push32((uint32_t)(EBP));
  /* 127ed6e1 mov ebp, esp */
  EBP = (ESP);
  /* 127ed6e3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ed6ea jbe 0x127ed6f0 */
  if ((C.cf||C.zf)) goto L_127ed6f0;
  /* 127ed6ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127ed6ee jmp 0x127ed6fd */
  goto L_127ed6fd;
L_127ed6f0:;
  /* 127ed6f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ed6f3 mov dword ptr [0x12813c94], eax */
  w32((uint32_t)(0x12813c94), (EAX));
  /* 127ed6f8 mov eax, 1 */
  EAX = (0x1u);
L_127ed6fd:;
  /* 127ed6fd pop ebp */
  EBP = (pop32());
  /* 127ed6fe ret  */
  ESPCHK(0x127ed6e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d700 @ 0x127ed700 (89 bytes, 20 insns) */
void f_127ed700(void) {
  FTRACE(0x127ed700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ed700 push ebp */
  push32((uint32_t)(EBP));
  /* 127ed701 mov ebp, esp */
  EBP = (ESP);
  /* 127ed703 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 127ed708 push 0 */
  push32((uint32_t)(0x0u));
  /* 127ed70a mov eax, dword ptr [0x128171ac] */
  EAX = (r32((uint32_t)(0x128171ac)));
  /* 127ed70f push eax */
  push32((uint32_t)(EAX));
  /* 127ed710 call dword ptr [0x12818308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12818308))), 0x127ed716u);
  /* 127ed716 mov dword ptr [0x128171a8], eax */
  w32((uint32_t)(0x128171a8), (EAX));
  /* 127ed71b cmp dword ptr [0x128171a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128171a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ed722 jne 0x127ed728 */
  if (!C.zf) goto L_127ed728;
  /* 127ed724 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127ed726 jmp 0x127ed757 */
  goto L_127ed757;
L_127ed728:;
  /* 127ed728 mov ecx, dword ptr [0x128171a8] */
  ECX = (r32((uint32_t)(0x128171a8)));
  /* 127ed72e mov dword ptr [0x1281719c], ecx */
  w32((uint32_t)(0x1281719c), (ECX));
  /* 127ed734 mov dword ptr [0x128171a0], 0 */
  w32((uint32_t)(0x128171a0), (0x0u));
  /* 127ed73e mov dword ptr [0x128171a4], 0 */
  w32((uint32_t)(0x128171a4), (0x0u));
  /* 127ed748 mov dword ptr [0x12817188], 0x10 */
  w32((uint32_t)(0x12817188), (0x10u));
  /* 127ed752 mov eax, 1 */
  EAX = (0x1u);
L_127ed757:;
  /* 127ed757 pop ebp */
  EBP = (pop32());
  /* 127ed758 ret  */
  ESPCHK(0x127ed700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d760 @ 0x127ed760 (85 bytes, 29 insns) */
void f_127ed760(void) {
  FTRACE(0x127ed760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ed760 push ebp */
  push32((uint32_t)(EBP));
  /* 127ed761 mov ebp, esp */
  EBP = (ESP);
  /* 127ed763 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ed766 mov eax, dword ptr [0x128171a4] */
  EAX = (r32((uint32_t)(0x128171a4)));
  /* 127ed76b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127ed76e mov ecx, dword ptr [0x128171a8] */
  ECX = (r32((uint32_t)(0x128171a8)));
  /* 127ed774 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ed776 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127ed779 mov edx, dword ptr [0x128171a8] */
  EDX = (r32((uint32_t)(0x128171a8)));
  /* 127ed77f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_127ed782:;
  /* 127ed782 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ed785 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ed788 jae 0x127ed7af */
  if (!C.cf) goto L_127ed7af;
  /* 127ed78a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ed78d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ed790 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ed793 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127ed796 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ed79d jae 0x127ed7a4 */
  if (!C.cf) goto L_127ed7a4;
  /* 127ed79f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ed7a2 jmp 0x127ed7b1 */
  goto L_127ed7b1;
L_127ed7a4:;
  /* 127ed7a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ed7a7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ed7aa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127ed7ad jmp 0x127ed782 */
  goto L_127ed782;
L_127ed7af:;
  /* 127ed7af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127ed7b1:;
  /* 127ed7b1 mov esp, ebp */
  ESP = (EBP);
  /* 127ed7b3 pop ebp */
  EBP = (pop32());
  /* 127ed7b4 ret  */
  ESPCHK(0x127ed760u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d7c0 @ 0x127ed7c0 (95 bytes, 33 insns) */
void f_127ed7c0(void) {
  FTRACE(0x127ed7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ed7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 127ed7c1 mov ebp, esp */
  EBP = (ESP);
  /* 127ed7c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ed7c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ed7c9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127ed7cc sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ed7cf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127ed7d2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ed7d5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 127ed7d8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127ed7db mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 127ed7e0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ed7e3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 127ed7e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ed7e8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 127ed7eb and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 127ed7ed test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127ed7ef jne 0x127ed811 */
  if (!C.zf) goto L_127ed811;
  /* 127ed7f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ed7f4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 127ed7f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127ed7f9 jne 0x127ed811 */
  if (!C.zf) goto L_127ed811;
  /* 127ed7fb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ed7fe and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 127ed804 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127ed806 je 0x127ed811 */
  if (C.zf) goto L_127ed811;
  /* 127ed808 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 127ed80f jmp 0x127ed818 */
  goto L_127ed818;
L_127ed811:;
  /* 127ed811 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_127ed818:;
  /* 127ed818 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ed81b mov esp, ebp */
  ESP = (EBP);
  /* 127ed81d pop ebp */
  EBP = (pop32());
  /* 127ed81e ret  */
  ESPCHK(0x127ed7c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d820 @ 0x127ed820 (1485 bytes, 453 insns) */
void f_127ed820(void) {
  FTRACE(0x127ed820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ed820 push ebp */
  push32((uint32_t)(EBP));
  /* 127ed821 mov ebp, esp */
  EBP = (ESP);
  /* 127ed823 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ed826 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ed829 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127ed82c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 127ed82f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ed832 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127ed835 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ed838 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 127ed83b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ed83e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 127ed841 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127ed844 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ed847 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127ed84d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127ed850 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 127ed857 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127ed85a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127ed85d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ed860 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 127ed863 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127ed866 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127ed868 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ed86b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 127ed86e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127ed871 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ed874 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 127ed877 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 127ed87a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127ed87c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 127ed87f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127ed882 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 127ed885 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127ed888 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127ed88b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 127ed88e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127ed890 jne 0x127ed9b8 */
  if (!C.zf) goto L_127ed9b8;
  /* 127ed896 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127ed899 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 127ed89c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ed89f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 127ed8a2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ed8a6 jbe 0x127ed8af */
  if ((C.cf||C.zf)) goto L_127ed8af;
  /* 127ed8a8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_127ed8af:;
  /* 127ed8af mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 127ed8b2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 127ed8b5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 127ed8b8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ed8bb jne 0x127ed991 */
  if (!C.zf) goto L_127ed991;
  /* 127ed8c1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ed8c5 jae 0x127ed926 */
  if (!C.cf) goto L_127ed926;
  /* 127ed8c7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 127ed8cc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127ed8cf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 127ed8d1 not eax */
  EAX = (~(EAX));
  /* 127ed8d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ed8d6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127ed8d9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 127ed8dd and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127ed8df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ed8e2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127ed8e5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 127ed8e9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127ed8ec add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ed8ef mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 127ed8f2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 127ed8f5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127ed8f8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ed8fb mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 127ed8fe mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127ed901 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ed904 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 127ed908 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127ed90a jne 0x127ed924 */
  if (!C.zf) goto L_127ed924;
  /* 127ed90c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 127ed911 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127ed914 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 127ed916 not eax */
  EAX = (~(EAX));
  /* 127ed918 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ed91b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127ed91d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 127ed91f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ed922 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_127ed924:;
  /* 127ed924 jmp 0x127ed991 */
  goto L_127ed991;
L_127ed926:;
  /* 127ed926 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127ed929 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ed92c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127ed931 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127ed933 not edx */
  EDX = (~(EDX));
  /* 127ed935 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ed938 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127ed93b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 127ed942 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 127ed944 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ed947 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127ed94a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 127ed951 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127ed954 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ed957 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 127ed95a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 127ed95d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127ed960 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ed963 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 127ed966 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127ed969 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ed96c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 127ed970 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127ed972 jne 0x127ed991 */
  if (!C.zf) goto L_127ed991;
  /* 127ed974 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127ed977 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ed97a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127ed97f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127ed981 not edx */
  EDX = (~(EDX));
  /* 127ed983 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ed986 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 127ed989 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 127ed98b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ed98e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_127ed991:;
  /* 127ed991 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 127ed994 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 127ed997 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 127ed99a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 127ed99d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 127ed9a0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 127ed9a3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 127ed9a6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 127ed9a9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 127ed9ac mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 127ed9af mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127ed9b2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ed9b5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_127ed9b8:;
  /* 127ed9b8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127ed9bb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 127ed9be sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ed9c1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 127ed9c4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ed9c8 jbe 0x127ed9d1 */
  if ((C.cf||C.zf)) goto L_127ed9d1;
  /* 127ed9ca mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_127ed9d1:;
  /* 127ed9d1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ed9d4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 127ed9d7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127ed9d9 jne 0x127edb35 */
  if (!C.zf) goto L_127edb35;
  /* 127ed9df mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127ed9e2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ed9e5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 127ed9e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ed9eb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 127ed9ee sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ed9f1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 127ed9f4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ed9f8 jbe 0x127eda01 */
  if ((C.cf||C.zf)) goto L_127eda01;
  /* 127ed9fa mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_127eda01:;
  /* 127eda01 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 127eda04 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127eda07 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 127eda0a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127eda0d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 127eda10 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127eda13 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 127eda16 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127eda1a jbe 0x127eda23 */
  if ((C.cf||C.zf)) goto L_127eda23;
  /* 127eda1c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_127eda23:;
  /* 127eda23 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127eda26 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127eda29 je 0x127edb2f */
  if (C.zf) goto L_127edb2f;
  /* 127eda2f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 127eda32 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 127eda35 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 127eda38 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127eda3b jne 0x127edb11 */
  if (!C.zf) goto L_127edb11;
  /* 127eda41 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127eda45 jae 0x127edaa6 */
  if (!C.cf) goto L_127edaa6;
  /* 127eda47 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127eda4c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127eda4f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127eda51 not edx */
  EDX = (~(EDX));
  /* 127eda53 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127eda56 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127eda59 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 127eda5d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 127eda5f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127eda62 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127eda65 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 127eda69 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127eda6c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127eda6f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 127eda72 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 127eda75 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127eda78 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127eda7b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 127eda7e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127eda81 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127eda84 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 127eda88 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127eda8a jne 0x127edaa4 */
  if (!C.zf) goto L_127edaa4;
  /* 127eda8c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127eda91 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127eda94 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127eda96 not edx */
  EDX = (~(EDX));
  /* 127eda98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127eda9b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127eda9d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 127eda9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127edaa2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_127edaa4:;
  /* 127edaa4 jmp 0x127edb11 */
  goto L_127edb11;
L_127edaa6:;
  /* 127edaa6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127edaa9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127edaac mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 127edab1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 127edab3 not eax */
  EAX = (~(EAX));
  /* 127edab5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127edab8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127edabb mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 127edac2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127edac4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127edac7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127edaca mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 127edad1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127edad4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127edad7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 127edada sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 127edadd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127edae0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127edae3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 127edae6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127edae9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127edaec movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 127edaf0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127edaf2 jne 0x127edb11 */
  if (!C.zf) goto L_127edb11;
  /* 127edaf4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127edaf7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127edafa mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 127edaff shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 127edb01 not eax */
  EAX = (~(EAX));
  /* 127edb03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127edb06 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 127edb09 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 127edb0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127edb0e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_127edb11:;
  /* 127edb11 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 127edb14 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 127edb17 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 127edb1a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 127edb1d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 127edb20 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 127edb23 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 127edb26 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 127edb29 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 127edb2c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_127edb2f:;
  /* 127edb2f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 127edb32 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_127edb35:;
  /* 127edb35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127edb38 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 127edb3b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127edb3d jne 0x127edb4b */
  if (!C.zf) goto L_127edb4b;
  /* 127edb3f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127edb42 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127edb45 je 0x127edc5b */
  if (C.zf) goto L_127edc5b;
L_127edb4b:;
  /* 127edb4b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 127edb4e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127edb51 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 127edb54 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 127edb57 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127edb5a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127edb5d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 127edb60 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 127edb63 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127edb66 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127edb69 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 127edb6c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 127edb6f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127edb72 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 127edb75 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127edb78 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 127edb7b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127edb7e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 127edb81 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127edb84 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127edb87 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 127edb8a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127edb8d jne 0x127edc5b */
  if (!C.zf) goto L_127edc5b;
  /* 127edb93 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127edb97 jae 0x127edbf4 */
  if (!C.cf) goto L_127edbf4;
  /* 127edb99 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127edb9c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127edb9f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 127edba3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127edba6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127edba9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 127edbac add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 127edbaf mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127edbb2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127edbb5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 127edbb8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127edbba jne 0x127edbd2 */
  if (!C.zf) goto L_127edbd2;
  /* 127edbbc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127edbc1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 127edbc4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127edbc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127edbc9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127edbcb or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 127edbcd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127edbd0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_127edbd2:;
  /* 127edbd2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 127edbd7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 127edbda shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 127edbdc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127edbdf mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127edbe2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 127edbe6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127edbe8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127edbeb mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127edbee mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 127edbf2 jmp 0x127edc5b */
  goto L_127edc5b;
L_127edbf4:;
  /* 127edbf4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127edbf7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127edbfa movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 127edbfe mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127edc01 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127edc04 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 127edc07 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 127edc0a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127edc0d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127edc10 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 127edc13 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127edc15 jne 0x127edc32 */
  if (!C.zf) goto L_127edc32;
  /* 127edc17 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 127edc1a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127edc1d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127edc22 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127edc24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127edc27 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 127edc2a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 127edc2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127edc2f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_127edc32:;
  /* 127edc32 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 127edc35 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127edc38 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 127edc3d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 127edc3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127edc42 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127edc45 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 127edc4c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127edc4e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127edc51 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127edc54 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_127edc5b:;
  /* 127edc5b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127edc5e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127edc61 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 127edc63 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127edc66 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127edc69 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 127edc6c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 127edc6f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127edc72 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127edc74 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127edc77 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127edc7a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 127edc7c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127edc7f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127edc82 jne 0x127edde9 */
  if (!C.zf) goto L_127edde9;
  /* 127edc88 cmp dword ptr [0x128171a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128171a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127edc8f je 0x127eddd8 */
  if (C.zf) goto L_127eddd8;
  /* 127edc95 mov eax, dword ptr [0x12817198] */
  EAX = (r32((uint32_t)(0x12817198)));
  /* 127edc9a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 127edc9d mov ecx, dword ptr [0x128171a0] */
  ECX = (r32((uint32_t)(0x128171a0)));
  /* 127edca3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 127edca6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127edca8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 127edcab push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 127edcb0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 127edcb5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127edcb8 push eax */
  push32((uint32_t)(EAX));
  /* 127edcb9 call dword ptr [0x12818324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12818324))), 0x127edcbfu);
  /* 127edcbf mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127edcc4 mov ecx, dword ptr [0x12817198] */
  ECX = (r32((uint32_t)(0x12817198)));
  /* 127edcca shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127edccc mov eax, dword ptr [0x128171a0] */
  EAX = (r32((uint32_t)(0x128171a0)));
  /* 127edcd1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 127edcd4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 127edcd6 mov edx, dword ptr [0x128171a0] */
  EDX = (r32((uint32_t)(0x128171a0)));
  /* 127edcdc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 127edcdf mov eax, dword ptr [0x128171a0] */
  EAX = (r32((uint32_t)(0x128171a0)));
  /* 127edce4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127edce7 mov edx, dword ptr [0x12817198] */
  EDX = (r32((uint32_t)(0x12817198)));
  /* 127edced mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 127edcf8 mov eax, dword ptr [0x128171a0] */
  EAX = (r32((uint32_t)(0x128171a0)));
  /* 127edcfd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127edd00 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 127edd03 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 127edd06 mov eax, dword ptr [0x128171a0] */
  EAX = (r32((uint32_t)(0x128171a0)));
  /* 127edd0b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127edd0e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 127edd11 mov edx, dword ptr [0x128171a0] */
  EDX = (r32((uint32_t)(0x128171a0)));
  /* 127edd17 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 127edd1a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 127edd1e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127edd20 jne 0x127edd36 */
  if (!C.zf) goto L_127edd36;
  /* 127edd22 mov edx, dword ptr [0x128171a0] */
  EDX = (r32((uint32_t)(0x128171a0)));
  /* 127edd28 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 127edd2b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 127edd2d mov ecx, dword ptr [0x128171a0] */
  ECX = (r32((uint32_t)(0x128171a0)));
  /* 127edd33 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_127edd36:;
  /* 127edd36 mov edx, dword ptr [0x128171a0] */
  EDX = (r32((uint32_t)(0x128171a0)));
  /* 127edd3c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127edd40 jne 0x127eddd8 */
  if (!C.zf) goto L_127eddd8;
  /* 127edd46 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 127edd4b push 0 */
  push32((uint32_t)(0x0u));
  /* 127edd4d mov eax, dword ptr [0x128171a0] */
  EAX = (r32((uint32_t)(0x128171a0)));
  /* 127edd52 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 127edd55 push ecx */
  push32((uint32_t)(ECX));
  /* 127edd56 call dword ptr [0x12818324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12818324))), 0x127edd5cu);
  /* 127edd5c mov edx, dword ptr [0x128171a0] */
  EDX = (r32((uint32_t)(0x128171a0)));
  /* 127edd62 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 127edd65 push eax */
  push32((uint32_t)(EAX));
  /* 127edd66 push 0 */
  push32((uint32_t)(0x0u));
  /* 127edd68 mov ecx, dword ptr [0x128171ac] */
  ECX = (r32((uint32_t)(0x128171ac)));
  /* 127edd6e push ecx */
  push32((uint32_t)(ECX));
  /* 127edd6f call dword ptr [0x12818328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12818328))), 0x127edd75u);
  /* 127edd75 mov edx, dword ptr [0x128171a4] */
  EDX = (r32((uint32_t)(0x128171a4)));
  /* 127edd7b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127edd7e mov eax, dword ptr [0x128171a8] */
  EAX = (r32((uint32_t)(0x128171a8)));
  /* 127edd83 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127edd85 mov ecx, dword ptr [0x128171a0] */
  ECX = (r32((uint32_t)(0x128171a0)));
  /* 127edd8b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127edd8e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127edd90 push eax */
  push32((uint32_t)(EAX));
  /* 127edd91 mov edx, dword ptr [0x128171a0] */
  EDX = (r32((uint32_t)(0x128171a0)));
  /* 127edd97 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127edd9a push edx */
  push32((uint32_t)(EDX));
  /* 127edd9b mov eax, dword ptr [0x128171a0] */
  EAX = (r32((uint32_t)(0x128171a0)));
  /* 127edda0 push eax */
  push32((uint32_t)(EAX));
  /* 127edda1 call 0x127f1350 */
  push32(0x127edda6u); f_127f1350();
  /* 127edda6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127edda9 mov ecx, dword ptr [0x128171a4] */
  ECX = (r32((uint32_t)(0x128171a4)));
  /* 127eddaf sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127eddb2 mov dword ptr [0x128171a4], ecx */
  w32((uint32_t)(0x128171a4), (ECX));
  /* 127eddb8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127eddbb cmp edx, dword ptr [0x128171a0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x128171a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127eddc1 jbe 0x127eddcc */
  if ((C.cf||C.zf)) goto L_127eddcc;
  /* 127eddc3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127eddc6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127eddc9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_127eddcc:;
  /* 127eddcc mov ecx, dword ptr [0x128171a8] */
  ECX = (r32((uint32_t)(0x128171a8)));
  /* 127eddd2 mov dword ptr [0x1281719c], ecx */
  w32((uint32_t)(0x1281719c), (ECX));
L_127eddd8:;
  /* 127eddd8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127edddb mov dword ptr [0x128171a0], edx */
  w32((uint32_t)(0x128171a0), (EDX));
  /* 127edde1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127edde4 mov dword ptr [0x12817198], eax */
  w32((uint32_t)(0x12817198), (EAX));
L_127edde9:;
  /* 127edde9 mov esp, ebp */
  ESP = (EBP);
  /* 127eddeb pop ebp */
  EBP = (pop32());
  /* 127eddec ret  */
  ESPCHK(0x127ed820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ddf0 @ 0x127eddf0 (1334 bytes, 427 insns) */
void f_127eddf0(void) {
  FTRACE(0x127eddf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127eddf0 push ebp */
  push32((uint32_t)(EBP));
  /* 127eddf1 mov ebp, esp */
  EBP = (ESP);
  /* 127eddf3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127eddf6 push esi */
  push32((uint32_t)(ESI));
  /* 127eddf7 mov eax, dword ptr [0x128171a4] */
  EAX = (r32((uint32_t)(0x128171a4)));
  /* 127eddfc imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127eddff mov ecx, dword ptr [0x128171a8] */
  ECX = (r32((uint32_t)(0x128171a8)));
  /* 127ede05 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ede07 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 127ede0a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ede0d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ede10 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 127ede13 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 127ede16 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 127ede19 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 127ede1c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ede1f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 127ede22 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ede26 jge 0x127ede3c */
  if ((C.sf==C.of)) goto L_127ede3c;
  /* 127ede28 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 127ede2b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127ede2e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127ede30 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 127ede33 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 127ede3a jmp 0x127ede51 */
  goto L_127ede51;
L_127ede3c:;
  /* 127ede3c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 127ede43 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127ede46 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ede49 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127ede4c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 127ede4e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_127ede51:;
  /* 127ede51 mov ecx, dword ptr [0x1281719c] */
  ECX = (r32((uint32_t)(0x1281719c)));
  /* 127ede57 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_127ede5a:;
  /* 127ede5a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127ede5d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ede60 jae 0x127ede86 */
  if (!C.cf) goto L_127ede86;
  /* 127ede62 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127ede65 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127ede68 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 127ede6a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127ede6d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 127ede70 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 127ede73 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127ede75 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127ede77 je 0x127ede7b */
  if (C.zf) goto L_127ede7b;
  /* 127ede79 jmp 0x127ede86 */
  goto L_127ede86;
L_127ede7b:;
  /* 127ede7b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127ede7e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ede81 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 127ede84 jmp 0x127ede5a */
  goto L_127ede5a;
L_127ede86:;
  /* 127ede86 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127ede89 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ede8c jne 0x127edf6d */
  if (!C.zf) goto L_127edf6d;
  /* 127ede92 mov eax, dword ptr [0x128171a8] */
  EAX = (r32((uint32_t)(0x128171a8)));
  /* 127ede97 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_127ede9a:;
  /* 127ede9a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127ede9d cmp ecx, dword ptr [0x1281719c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1281719c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127edea3 jae 0x127edec9 */
  if (!C.cf) goto L_127edec9;
  /* 127edea5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127edea8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127edeab and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 127edead mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127edeb0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 127edeb3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 127edeb6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 127edeb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127edeba je 0x127edebe */
  if (C.zf) goto L_127edebe;
  /* 127edebc jmp 0x127edec9 */
  goto L_127edec9;
L_127edebe:;
  /* 127edebe mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127edec1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127edec4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 127edec7 jmp 0x127ede9a */
  goto L_127ede9a;
L_127edec9:;
  /* 127edec9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127edecc cmp ecx, dword ptr [0x1281719c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1281719c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127eded2 jne 0x127edf6d */
  if (!C.zf) goto L_127edf6d;
L_127eded8:;
  /* 127eded8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127ededb cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127edede jae 0x127edef6 */
  if (!C.cf) goto L_127edef6;
  /* 127edee0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127edee3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127edee7 je 0x127edeeb */
  if (C.zf) goto L_127edeeb;
  /* 127edee9 jmp 0x127edef6 */
  goto L_127edef6;
L_127edeeb:;
  /* 127edeeb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127edeee add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127edef1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 127edef4 jmp 0x127eded8 */
  goto L_127eded8;
L_127edef6:;
  /* 127edef6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127edef9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127edefc jne 0x127edf47 */
  if (!C.zf) goto L_127edf47;
  /* 127edefe mov eax, dword ptr [0x128171a8] */
  EAX = (r32((uint32_t)(0x128171a8)));
  /* 127edf03 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_127edf06:;
  /* 127edf06 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127edf09 cmp ecx, dword ptr [0x1281719c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1281719c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127edf0f jae 0x127edf27 */
  if (!C.cf) goto L_127edf27;
  /* 127edf11 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127edf14 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127edf18 je 0x127edf1c */
  if (C.zf) goto L_127edf1c;
  /* 127edf1a jmp 0x127edf27 */
  goto L_127edf27;
L_127edf1c:;
  /* 127edf1c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127edf1f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127edf22 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 127edf25 jmp 0x127edf06 */
  goto L_127edf06;
L_127edf27:;
  /* 127edf27 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127edf2a cmp ecx, dword ptr [0x1281719c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1281719c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127edf30 jne 0x127edf47 */
  if (!C.zf) goto L_127edf47;
  /* 127edf32 call 0x127ee330 */
  push32(0x127edf37u); f_127ee330();
  /* 127edf37 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 127edf3a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127edf3e jne 0x127edf47 */
  if (!C.zf) goto L_127edf47;
  /* 127edf40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127edf42 jmp 0x127ee321 */
  goto L_127ee321;
L_127edf47:;
  /* 127edf47 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127edf4a push edx */
  push32((uint32_t)(EDX));
  /* 127edf4b call 0x127ee440 */
  push32(0x127edf50u); f_127ee440();
  /* 127edf50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127edf53 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127edf56 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 127edf59 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 127edf5b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127edf5e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127edf61 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127edf64 jne 0x127edf6d */
  if (!C.zf) goto L_127edf6d;
  /* 127edf66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127edf68 jmp 0x127ee321 */
  goto L_127ee321;
L_127edf6d:;
  /* 127edf6d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127edf70 mov dword ptr [0x1281719c], edx */
  w32((uint32_t)(0x1281719c), (EDX));
  /* 127edf76 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127edf79 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127edf7c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 127edf7f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 127edf82 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127edf84 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 127edf87 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127edf8b je 0x127edfb0 */
  if (C.zf) goto L_127edfb0;
  /* 127edf8d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 127edf90 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 127edf93 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127edf96 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 127edf9a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 127edf9d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 127edfa0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 127edfa3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 127edfaa or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 127edfac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127edfae jne 0x127edfe5 */
  if (!C.zf) goto L_127edfe5;
L_127edfb0:;
  /* 127edfb0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_127edfb7:;
  /* 127edfb7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127edfba mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 127edfbd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 127edfc0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 127edfc4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127edfc7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 127edfca mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 127edfcd and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 127edfd4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 127edfd6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127edfd8 jne 0x127edfe5 */
  if (!C.zf) goto L_127edfe5;
  /* 127edfda mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127edfdd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127edfe0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 127edfe3 jmp 0x127edfb7 */
  goto L_127edfb7;
L_127edfe5:;
  /* 127edfe5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127edfe8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127edfee mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 127edff1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 127edff8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127edffb mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 127ee002 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127ee005 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 127ee008 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 127ee00b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 127ee00f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 127ee012 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ee016 jne 0x127ee032 */
  if (!C.zf) goto L_127ee032;
  /* 127ee018 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 127ee01f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127ee022 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 127ee025 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 127ee028 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 127ee02f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_127ee032:;
  /* 127ee032 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ee036 jl 0x127ee04b */
  if ((C.sf!=C.of)) goto L_127ee04b;
  /* 127ee038 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127ee03b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 127ee03d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 127ee040 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127ee043 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee046 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 127ee049 jmp 0x127ee032 */
  goto L_127ee032;
L_127ee04b:;
  /* 127ee04b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 127ee04e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ee051 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 127ee055 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 127ee058 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ee05b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127ee05d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ee060 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127ee063 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ee066 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 127ee069 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ee06c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 127ee06f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ee073 jle 0x127ee07c */
  if ((C.zf||C.sf!=C.of)) goto L_127ee07c;
  /* 127ee075 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_127ee07c:;
  /* 127ee07c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127ee07f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ee082 je 0x127ee2a0 */
  if (C.zf) goto L_127ee2a0;
  /* 127ee088 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ee08b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ee08e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 127ee091 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ee094 jne 0x127ee16a */
  if (!C.zf) goto L_127ee16a;
  /* 127ee09a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ee09e jge 0x127ee0ff */
  if ((C.sf==C.of)) goto L_127ee0ff;
  /* 127ee0a0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 127ee0a5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127ee0a8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 127ee0aa not eax */
  EAX = (~(EAX));
  /* 127ee0ac mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 127ee0af mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 127ee0b2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 127ee0b6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127ee0b8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127ee0bb mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 127ee0be mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 127ee0c2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 127ee0c5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee0c8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 127ee0cb sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 127ee0ce mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 127ee0d1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee0d4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 127ee0d7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 127ee0da add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee0dd movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 127ee0e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127ee0e3 jne 0x127ee0fd */
  if (!C.zf) goto L_127ee0fd;
  /* 127ee0e5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 127ee0ea mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127ee0ed shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 127ee0ef not eax */
  EAX = (~(EAX));
  /* 127ee0f1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127ee0f4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127ee0f6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 127ee0f8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127ee0fb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_127ee0fd:;
  /* 127ee0fd jmp 0x127ee16a */
  goto L_127ee16a;
L_127ee0ff:;
  /* 127ee0ff mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127ee102 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ee105 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127ee10a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127ee10c not edx */
  EDX = (~(EDX));
  /* 127ee10e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127ee111 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 127ee114 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 127ee11b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 127ee11d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 127ee120 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 127ee123 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 127ee12a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 127ee12d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee130 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 127ee133 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 127ee136 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 127ee139 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee13c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 127ee13f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 127ee142 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee145 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 127ee149 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127ee14b jne 0x127ee16a */
  if (!C.zf) goto L_127ee16a;
  /* 127ee14d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127ee150 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ee153 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127ee158 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127ee15a not edx */
  EDX = (~(EDX));
  /* 127ee15c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127ee15f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 127ee162 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 127ee164 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127ee167 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_127ee16a:;
  /* 127ee16a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ee16d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 127ee170 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ee173 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 127ee176 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 127ee179 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ee17c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 127ee17f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ee182 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 127ee185 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 127ee188 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ee18c je 0x127ee2a0 */
  if (C.zf) goto L_127ee2a0;
  /* 127ee192 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127ee195 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ee198 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 127ee19b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127ee19e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ee1a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ee1a4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 127ee1a7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 127ee1aa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ee1ad mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ee1b0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 127ee1b3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ee1b6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ee1b9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 127ee1bc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ee1bf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 127ee1c2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ee1c5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 127ee1c8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ee1cb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ee1ce mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 127ee1d1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ee1d4 jne 0x127ee2a0 */
  if (!C.zf) goto L_127ee2a0;
  /* 127ee1da cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ee1de jge 0x127ee23a */
  if ((C.sf==C.of)) goto L_127ee23a;
  /* 127ee1e0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 127ee1e3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee1e6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 127ee1ea mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 127ee1ed add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee1f0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 127ee1f3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 127ee1f5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 127ee1f8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee1fb mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 127ee1fe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127ee200 jne 0x127ee218 */
  if (!C.zf) goto L_127ee218;
  /* 127ee202 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 127ee207 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127ee20a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 127ee20c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127ee20f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127ee211 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 127ee213 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127ee216 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_127ee218:;
  /* 127ee218 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127ee21d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127ee220 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127ee222 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127ee225 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 127ee228 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 127ee22c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 127ee22e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 127ee231 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 127ee234 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 127ee238 jmp 0x127ee2a0 */
  goto L_127ee2a0;
L_127ee23a:;
  /* 127ee23a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 127ee23d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee240 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 127ee244 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 127ee247 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee24a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 127ee24d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 127ee24f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 127ee252 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee255 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 127ee258 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127ee25a jne 0x127ee277 */
  if (!C.zf) goto L_127ee277;
  /* 127ee25c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127ee25f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ee262 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 127ee267 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 127ee269 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127ee26c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 127ee26f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 127ee271 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127ee274 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_127ee277:;
  /* 127ee277 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127ee27a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ee27d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127ee282 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127ee284 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127ee287 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 127ee28a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 127ee291 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 127ee293 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 127ee296 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 127ee299 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_127ee2a0:;
  /* 127ee2a0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ee2a4 je 0x127ee2ba */
  if (C.zf) goto L_127ee2ba;
  /* 127ee2a6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ee2a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ee2ac mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 127ee2ae mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ee2b1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee2b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ee2b7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_127ee2ba:;
  /* 127ee2ba mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ee2bd add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee2c0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 127ee2c3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 127ee2c6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee2c9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ee2cc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 127ee2ce mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 127ee2d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee2d4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ee2d7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee2da mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 127ee2dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ee2e0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127ee2e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ee2e5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127ee2e7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee2ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ee2ed mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 127ee2ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127ee2f1 jne 0x127ee313 */
  if (!C.zf) goto L_127ee313;
  /* 127ee2f3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127ee2f6 cmp eax, dword ptr [0x128171a0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x128171a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ee2fc jne 0x127ee313 */
  if (!C.zf) goto L_127ee313;
  /* 127ee2fe mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 127ee301 cmp ecx, dword ptr [0x12817198] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12817198))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ee307 jne 0x127ee313 */
  if (!C.zf) goto L_127ee313;
  /* 127ee309 mov dword ptr [0x128171a0], 0 */
  w32((uint32_t)(0x128171a0), (0x0u));
L_127ee313:;
  /* 127ee313 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 127ee316 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127ee319 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 127ee31b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ee31e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_127ee321:;
  /* 127ee321 pop esi */
  ESI = (pop32());
  /* 127ee322 mov esp, ebp */
  ESP = (EBP);
  /* 127ee324 pop ebp */
  EBP = (pop32());
  /* 127ee325 ret  */
  ESPCHK(0x127eddf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e330 @ 0x127ee330 (271 bytes, 78 insns) */
void f_127ee330(void) {
  FTRACE(0x127ee330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ee330 push ebp */
  push32((uint32_t)(EBP));
  /* 127ee331 mov ebp, esp */
  EBP = (ESP);
  /* 127ee333 push ecx */
  push32((uint32_t)(ECX));
  /* 127ee334 mov eax, dword ptr [0x128171a4] */
  EAX = (r32((uint32_t)(0x128171a4)));
  /* 127ee339 cmp eax, dword ptr [0x12817188] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12817188))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ee33f jne 0x127ee38b */
  if (!C.zf) goto L_127ee38b;
  /* 127ee341 mov ecx, dword ptr [0x12817188] */
  ECX = (r32((uint32_t)(0x12817188)));
  /* 127ee347 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee34a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127ee34d push ecx */
  push32((uint32_t)(ECX));
  /* 127ee34e mov edx, dword ptr [0x128171a8] */
  EDX = (r32((uint32_t)(0x128171a8)));
  /* 127ee354 push edx */
  push32((uint32_t)(EDX));
  /* 127ee355 push 0 */
  push32((uint32_t)(0x0u));
  /* 127ee357 mov eax, dword ptr [0x128171ac] */
  EAX = (r32((uint32_t)(0x128171ac)));
  /* 127ee35c push eax */
  push32((uint32_t)(EAX));
  /* 127ee35d call dword ptr [0x12818304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12818304))), 0x127ee363u);
  /* 127ee363 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127ee366 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ee36a jne 0x127ee373 */
  if (!C.zf) goto L_127ee373;
  /* 127ee36c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127ee36e jmp 0x127ee43b */
  goto L_127ee43b;
L_127ee373:;
  /* 127ee373 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ee376 mov dword ptr [0x128171a8], ecx */
  w32((uint32_t)(0x128171a8), (ECX));
  /* 127ee37c mov edx, dword ptr [0x12817188] */
  EDX = (r32((uint32_t)(0x12817188)));
  /* 127ee382 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee385 mov dword ptr [0x12817188], edx */
  w32((uint32_t)(0x12817188), (EDX));
L_127ee38b:;
  /* 127ee38b mov eax, dword ptr [0x128171a4] */
  EAX = (r32((uint32_t)(0x128171a4)));
  /* 127ee390 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127ee393 mov ecx, dword ptr [0x128171a8] */
  ECX = (r32((uint32_t)(0x128171a8)));
  /* 127ee399 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee39b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127ee39e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 127ee3a3 push 8 */
  push32((uint32_t)(0x8u));
  /* 127ee3a5 mov edx, dword ptr [0x128171ac] */
  EDX = (r32((uint32_t)(0x128171ac)));
  /* 127ee3ab push edx */
  push32((uint32_t)(EDX));
  /* 127ee3ac call dword ptr [0x12818308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12818308))), 0x127ee3b2u);
  /* 127ee3b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ee3b5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 127ee3b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ee3bb cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ee3bf jne 0x127ee3c5 */
  if (!C.zf) goto L_127ee3c5;
  /* 127ee3c1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127ee3c3 jmp 0x127ee43b */
  goto L_127ee43b;
L_127ee3c5:;
  /* 127ee3c5 push 4 */
  push32((uint32_t)(0x4u));
  /* 127ee3c7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 127ee3cc push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 127ee3d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 127ee3d3 call dword ptr [0x12818300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12818300))), 0x127ee3d9u);
  /* 127ee3d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ee3dc mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 127ee3df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ee3e2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ee3e6 jne 0x127ee402 */
  if (!C.zf) goto L_127ee402;
  /* 127ee3e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ee3eb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127ee3ee push ecx */
  push32((uint32_t)(ECX));
  /* 127ee3ef push 0 */
  push32((uint32_t)(0x0u));
  /* 127ee3f1 mov edx, dword ptr [0x128171ac] */
  EDX = (r32((uint32_t)(0x128171ac)));
  /* 127ee3f7 push edx */
  push32((uint32_t)(EDX));
  /* 127ee3f8 call dword ptr [0x12818328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12818328))), 0x127ee3feu);
  /* 127ee3fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127ee400 jmp 0x127ee43b */
  goto L_127ee43b;
L_127ee402:;
  /* 127ee402 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ee405 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 127ee40b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ee40e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 127ee415 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ee418 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 127ee41f mov eax, dword ptr [0x128171a4] */
  EAX = (r32((uint32_t)(0x128171a4)));
  /* 127ee424 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee427 mov dword ptr [0x128171a4], eax */
  w32((uint32_t)(0x128171a4), (EAX));
  /* 127ee42c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ee42f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 127ee432 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 127ee438 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_127ee43b:;
  /* 127ee43b mov esp, ebp */
  ESP = (EBP);
  /* 127ee43d pop ebp */
  EBP = (pop32());
  /* 127ee43e ret  */
  ESPCHK(0x127ee330u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e440 @ 0x127ee440 (494 bytes, 149 insns) */
void f_127ee440(void) {
  FTRACE(0x127ee440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ee440 push ebp */
  push32((uint32_t)(EBP));
  /* 127ee441 mov ebp, esp */
  EBP = (ESP);
  /* 127ee443 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ee446 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ee449 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127ee44c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 127ee44f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ee452 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 127ee455 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127ee458 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_127ee45f:;
  /* 127ee45f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ee463 jl 0x127ee478 */
  if ((C.sf!=C.of)) goto L_127ee478;
  /* 127ee465 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ee468 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 127ee46a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127ee46d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 127ee470 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee473 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 127ee476 jmp 0x127ee45f */
  goto L_127ee45f;
L_127ee478:;
  /* 127ee478 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 127ee47b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127ee481 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127ee484 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 127ee48b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 127ee48e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 127ee495 jmp 0x127ee4a0 */
  goto L_127ee4a0;
L_127ee497:;
  /* 127ee497 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 127ee49a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee49d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_127ee4a0:;
  /* 127ee4a0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ee4a4 jge 0x127ee4c6 */
  if ((C.sf==C.of)) goto L_127ee4c6;
  /* 127ee4a6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127ee4a9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ee4ac lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 127ee4af mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 127ee4b2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127ee4b5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127ee4b8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 127ee4bb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127ee4be mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127ee4c1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 127ee4c4 jmp 0x127ee497 */
  goto L_127ee497;
L_127ee4c6:;
  /* 127ee4c6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 127ee4c9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 127ee4cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ee4cf mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 127ee4d2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee4d4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 127ee4d7 push 4 */
  push32((uint32_t)(0x4u));
  /* 127ee4d9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 127ee4de push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 127ee4e3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ee4e6 push edx */
  push32((uint32_t)(EDX));
  /* 127ee4e7 call dword ptr [0x12818300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12818300))), 0x127ee4edu);
  /* 127ee4ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127ee4ef jne 0x127ee4f9 */
  if (!C.zf) goto L_127ee4f9;
  /* 127ee4f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127ee4f4 jmp 0x127ee62a */
  goto L_127ee62a;
L_127ee4f9:;
  /* 127ee4f9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ee4fc add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee501 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 127ee504 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ee507 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127ee50a jmp 0x127ee518 */
  goto L_127ee518;
L_127ee50c:;
  /* 127ee50c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ee50f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee515 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_127ee518:;
  /* 127ee518 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ee51b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ee51e ja 0x127ee57d */
  if ((!C.cf&&!C.zf)) goto L_127ee57d;
  /* 127ee520 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ee523 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 127ee52a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ee52d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 127ee537 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ee53a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee53d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 127ee540 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127ee543 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 127ee549 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127ee54c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee552 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127ee555 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 127ee558 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127ee55b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ee561 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127ee564 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 127ee567 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127ee56a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee56f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 127ee572 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127ee575 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 127ee57b jmp 0x127ee50c */
  goto L_127ee50c;
L_127ee57d:;
  /* 127ee57d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ee580 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee586 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 127ee589 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ee58c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee58f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127ee592 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 127ee595 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127ee598 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 127ee59b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 127ee59e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127ee5a1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127ee5a4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 127ee5a7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127ee5aa add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee5ad mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127ee5b0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 127ee5b3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127ee5b6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 127ee5b9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 127ee5bc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127ee5bf mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127ee5c2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 127ee5c5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 127ee5c8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127ee5cb mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 127ee5d3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 127ee5d6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127ee5d9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 127ee5e4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127ee5e7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 127ee5eb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127ee5ee mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 127ee5f1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 127ee5f4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127ee5f7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 127ee5fa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127ee5fc jne 0x127ee60d */
  if (!C.zf) goto L_127ee60d;
  /* 127ee5fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ee601 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 127ee604 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 127ee607 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ee60a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_127ee60d:;
  /* 127ee60d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127ee612 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 127ee615 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127ee617 not edx */
  EDX = (~(EDX));
  /* 127ee619 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ee61c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 127ee61f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 127ee621 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ee624 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 127ee627 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_127ee62a:;
  /* 127ee62a mov esp, ebp */
  ESP = (EBP);
  /* 127ee62c pop ebp */
  EBP = (pop32());
  /* 127ee62d ret  */
  ESPCHK(0x127ee440u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e630 @ 0x127ee630 (1515 bytes, 489 insns) */
void f_127ee630(void) {
  FTRACE(0x127ee630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ee630 push ebp */
  push32((uint32_t)(EBP));
  /* 127ee631 mov ebp, esp */
  EBP = (ESP);
  /* 127ee633 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ee636 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127ee639 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee63c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 127ee63e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 127ee641 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ee644 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 127ee647 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 127ee64a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ee64d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127ee650 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ee653 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127ee656 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ee659 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 127ee65c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127ee65f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ee662 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127ee668 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 127ee66b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 127ee672 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 127ee675 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127ee678 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ee67b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 127ee67e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127ee681 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127ee683 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ee686 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 127ee689 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127ee68c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee68f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 127ee692 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127ee695 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127ee697 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 127ee69a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127ee69d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ee6a0 jle 0x127ee956 */
  if ((C.zf||C.sf!=C.of)) goto L_127ee956;
  /* 127ee6a6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ee6a9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 127ee6ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127ee6ae jne 0x127ee6bb */
  if (!C.zf) goto L_127ee6bb;
  /* 127ee6b0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 127ee6b3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee6b6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ee6b9 jle 0x127ee6c2 */
  if ((C.zf||C.sf!=C.of)) goto L_127ee6c2;
L_127ee6bb:;
  /* 127ee6bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127ee6bd jmp 0x127eec17 */
  goto L_127eec17;
L_127ee6c2:;
  /* 127ee6c2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ee6c5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 127ee6c8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ee6cb mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 127ee6ce cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ee6d2 jbe 0x127ee6db */
  if ((C.cf||C.zf)) goto L_127ee6db;
  /* 127ee6d4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_127ee6db:;
  /* 127ee6db mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127ee6de mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127ee6e1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 127ee6e4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ee6e7 jne 0x127ee7bd */
  if (!C.zf) goto L_127ee7bd;
  /* 127ee6ed cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ee6f1 jae 0x127ee752 */
  if (!C.cf) goto L_127ee752;
  /* 127ee6f3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127ee6f8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127ee6fb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127ee6fd not edx */
  EDX = (~(EDX));
  /* 127ee6ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ee702 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 127ee705 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 127ee709 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 127ee70b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ee70e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127ee711 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 127ee715 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127ee718 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee71b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 127ee71e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 127ee721 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127ee724 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee727 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 127ee72a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127ee72d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee730 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 127ee734 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127ee736 jne 0x127ee750 */
  if (!C.zf) goto L_127ee750;
  /* 127ee738 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127ee73d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127ee740 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127ee742 not edx */
  EDX = (~(EDX));
  /* 127ee744 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ee747 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127ee749 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 127ee74b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ee74e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_127ee750:;
  /* 127ee750 jmp 0x127ee7bd */
  goto L_127ee7bd;
L_127ee752:;
  /* 127ee752 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127ee755 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ee758 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 127ee75d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 127ee75f not eax */
  EAX = (~(EAX));
  /* 127ee761 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ee764 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127ee767 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 127ee76e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127ee770 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ee773 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127ee776 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 127ee77d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 127ee780 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee783 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 127ee786 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 127ee789 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127ee78c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee78f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 127ee792 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 127ee795 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee798 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 127ee79c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127ee79e jne 0x127ee7bd */
  if (!C.zf) goto L_127ee7bd;
  /* 127ee7a0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127ee7a3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ee7a6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 127ee7ab shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 127ee7ad not eax */
  EAX = (~(EAX));
  /* 127ee7af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ee7b2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 127ee7b5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 127ee7b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ee7ba mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_127ee7bd:;
  /* 127ee7bd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127ee7c0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 127ee7c3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127ee7c6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 127ee7c9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 127ee7cc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127ee7cf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 127ee7d2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127ee7d5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 127ee7d8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 127ee7db mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 127ee7de add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee7e1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ee7e4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 127ee7e7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ee7eb jle 0x127ee937 */
  if ((C.zf||C.sf!=C.of)) goto L_127ee937;
  /* 127ee7f1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127ee7f4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee7f7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 127ee7fa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ee7fd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 127ee800 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ee803 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 127ee806 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ee80a jbe 0x127ee813 */
  if ((C.cf||C.zf)) goto L_127ee813;
  /* 127ee80c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_127ee813:;
  /* 127ee813 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 127ee816 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ee819 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 127ee81c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 127ee81f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127ee822 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127ee825 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 127ee828 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 127ee82b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127ee82e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127ee831 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 127ee834 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127ee837 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127ee83a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 127ee83d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127ee840 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 127ee843 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127ee846 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 127ee849 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127ee84c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127ee84f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 127ee852 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ee855 jne 0x127ee923 */
  if (!C.zf) goto L_127ee923;
  /* 127ee85b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ee85f jae 0x127ee8bc */
  if (!C.cf) goto L_127ee8bc;
  /* 127ee861 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 127ee864 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee867 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 127ee86b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127ee86e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee871 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 127ee874 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 127ee877 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127ee87a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee87d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 127ee880 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127ee882 jne 0x127ee89a */
  if (!C.zf) goto L_127ee89a;
  /* 127ee884 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127ee889 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127ee88c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127ee88e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ee891 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127ee893 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 127ee895 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ee898 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_127ee89a:;
  /* 127ee89a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 127ee89f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127ee8a2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 127ee8a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ee8a7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127ee8aa mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 127ee8ae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127ee8b0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ee8b3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127ee8b6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 127ee8ba jmp 0x127ee923 */
  goto L_127ee923;
L_127ee8bc:;
  /* 127ee8bc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 127ee8bf add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee8c2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 127ee8c6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127ee8c9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee8cc mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 127ee8cf add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 127ee8d2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127ee8d5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee8d8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 127ee8db test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127ee8dd jne 0x127ee8fa */
  if (!C.zf) goto L_127ee8fa;
  /* 127ee8df mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127ee8e2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ee8e5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127ee8ea shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127ee8ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ee8ef mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 127ee8f2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 127ee8f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ee8f7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_127ee8fa:;
  /* 127ee8fa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127ee8fd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ee900 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 127ee905 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 127ee907 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ee90a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127ee90d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 127ee914 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127ee916 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ee919 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127ee91c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_127ee923:;
  /* 127ee923 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127ee926 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ee929 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 127ee92b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127ee92e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee931 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ee934 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_127ee937:;
  /* 127ee937 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127ee93a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee93d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127ee940 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 127ee942 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127ee945 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee948 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127ee94b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee94e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 127ee951 jmp 0x127eec12 */
  goto L_127eec12;
L_127ee956:;
  /* 127ee956 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127ee959 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ee95c jge 0x127eec12 */
  if ((C.sf==C.of)) goto L_127eec12;
  /* 127ee962 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127ee965 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee968 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127ee96b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 127ee96d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127ee970 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee973 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127ee976 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee979 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 127ee97c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127ee97f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ee982 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 127ee985 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 127ee988 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ee98b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 127ee98e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 127ee991 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 127ee994 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ee997 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 127ee99a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ee99e jbe 0x127ee9a7 */
  if ((C.cf||C.zf)) goto L_127ee9a7;
  /* 127ee9a0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_127ee9a7:;
  /* 127ee9a7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ee9aa and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 127ee9ad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127ee9af jne 0x127eeaf0 */
  if (!C.zf) goto L_127eeaf0;
  /* 127ee9b5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ee9b8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 127ee9bb sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ee9be mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 127ee9c1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ee9c5 jbe 0x127ee9ce */
  if ((C.cf||C.zf)) goto L_127ee9ce;
  /* 127ee9c7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_127ee9ce:;
  /* 127ee9ce mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127ee9d1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127ee9d4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 127ee9d7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ee9da jne 0x127eeab0 */
  if (!C.zf) goto L_127eeab0;
  /* 127ee9e0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ee9e4 jae 0x127eea45 */
  if (!C.cf) goto L_127eea45;
  /* 127ee9e6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127ee9eb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127ee9ee shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127ee9f0 not edx */
  EDX = (~(EDX));
  /* 127ee9f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ee9f5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 127ee9f8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 127ee9fc and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 127ee9fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127eea01 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127eea04 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 127eea08 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127eea0b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127eea0e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 127eea11 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 127eea14 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127eea17 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127eea1a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 127eea1d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127eea20 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127eea23 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 127eea27 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127eea29 jne 0x127eea43 */
  if (!C.zf) goto L_127eea43;
  /* 127eea2b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127eea30 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127eea33 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127eea35 not edx */
  EDX = (~(EDX));
  /* 127eea37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127eea3a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127eea3c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 127eea3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127eea41 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_127eea43:;
  /* 127eea43 jmp 0x127eeab0 */
  goto L_127eeab0;
L_127eea45:;
  /* 127eea45 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127eea48 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127eea4b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 127eea50 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 127eea52 not eax */
  EAX = (~(EAX));
  /* 127eea54 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127eea57 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127eea5a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 127eea61 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127eea63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127eea66 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127eea69 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 127eea70 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 127eea73 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127eea76 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 127eea79 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 127eea7c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127eea7f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127eea82 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 127eea85 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 127eea88 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127eea8b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 127eea8f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127eea91 jne 0x127eeab0 */
  if (!C.zf) goto L_127eeab0;
  /* 127eea93 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127eea96 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127eea99 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 127eea9e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 127eeaa0 not eax */
  EAX = (~(EAX));
  /* 127eeaa2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127eeaa5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 127eeaa8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 127eeaaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127eeaad mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_127eeab0:;
  /* 127eeab0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127eeab3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 127eeab6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127eeab9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 127eeabc mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 127eeabf mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127eeac2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 127eeac5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127eeac8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 127eeacb mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 127eeace mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 127eead1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127eead4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 127eead7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 127eeada sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 127eeadd sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127eeae0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 127eeae3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127eeae7 jbe 0x127eeaf0 */
  if ((C.cf||C.zf)) goto L_127eeaf0;
  /* 127eeae9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_127eeaf0:;
  /* 127eeaf0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 127eeaf3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127eeaf6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 127eeaf9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 127eeafc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127eeaff mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127eeb02 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 127eeb05 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 127eeb08 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127eeb0b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127eeb0e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 127eeb11 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127eeb14 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127eeb17 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 127eeb1a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127eeb1d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 127eeb20 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127eeb23 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 127eeb26 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127eeb29 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127eeb2c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 127eeb2f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127eeb32 jne 0x127eebfe */
  if (!C.zf) goto L_127eebfe;
  /* 127eeb38 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127eeb3c jae 0x127eeb98 */
  if (!C.cf) goto L_127eeb98;
  /* 127eeb3e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127eeb41 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127eeb44 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 127eeb48 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127eeb4b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127eeb4e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 127eeb51 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 127eeb53 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127eeb56 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127eeb59 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 127eeb5c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127eeb5e jne 0x127eeb76 */
  if (!C.zf) goto L_127eeb76;
  /* 127eeb60 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 127eeb65 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127eeb68 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 127eeb6a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127eeb6d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127eeb6f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 127eeb71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127eeb74 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_127eeb76:;
  /* 127eeb76 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127eeb7b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127eeb7e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127eeb80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127eeb83 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 127eeb86 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 127eeb8a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 127eeb8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127eeb8f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127eeb92 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 127eeb96 jmp 0x127eebfe */
  goto L_127eebfe;
L_127eeb98:;
  /* 127eeb98 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127eeb9b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127eeb9e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 127eeba2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127eeba5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127eeba8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 127eebab add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 127eebad mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127eebb0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127eebb3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 127eebb6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127eebb8 jne 0x127eebd5 */
  if (!C.zf) goto L_127eebd5;
  /* 127eebba mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127eebbd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127eebc0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 127eebc5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 127eebc7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127eebca mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 127eebcd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 127eebcf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127eebd2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_127eebd5:;
  /* 127eebd5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127eebd8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127eebdb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127eebe0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127eebe2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127eebe5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 127eebe8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 127eebef or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 127eebf1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127eebf4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127eebf7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_127eebfe:;
  /* 127eebfe mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127eec01 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 127eec04 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 127eec06 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127eec09 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127eec0c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 127eec0f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_127eec12:;
  /* 127eec12 mov eax, 1 */
  EAX = (0x1u);
L_127eec17:;
  /* 127eec17 mov esp, ebp */
  ESP = (EBP);
  /* 127eec19 pop ebp */
  EBP = (pop32());
  /* 127eec1a ret  */
  ESPCHK(0x127ee630u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec20 @ 0x127eec20 (304 bytes, 79 insns) */
void f_127eec20(void) {
  FTRACE(0x127eec20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127eec20 push ebp */
  push32((uint32_t)(EBP));
  /* 127eec21 mov ebp, esp */
  EBP = (ESP);
  /* 127eec23 push ecx */
  push32((uint32_t)(ECX));
  /* 127eec24 cmp dword ptr [0x128171a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128171a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127eec2b je 0x127eed4c */
  if (C.zf) goto L_127eed4c;
  /* 127eec31 mov eax, dword ptr [0x12817198] */
  EAX = (r32((uint32_t)(0x12817198)));
  /* 127eec36 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 127eec39 mov ecx, dword ptr [0x128171a0] */
  ECX = (r32((uint32_t)(0x128171a0)));
  /* 127eec3f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 127eec42 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127eec44 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127eec47 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 127eec4c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 127eec51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127eec54 push eax */
  push32((uint32_t)(EAX));
  /* 127eec55 call dword ptr [0x12818324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12818324))), 0x127eec5bu);
  /* 127eec5b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127eec60 mov ecx, dword ptr [0x12817198] */
  ECX = (r32((uint32_t)(0x12817198)));
  /* 127eec66 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127eec68 mov eax, dword ptr [0x128171a0] */
  EAX = (r32((uint32_t)(0x128171a0)));
  /* 127eec6d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 127eec70 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 127eec72 mov edx, dword ptr [0x128171a0] */
  EDX = (r32((uint32_t)(0x128171a0)));
  /* 127eec78 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 127eec7b mov eax, dword ptr [0x128171a0] */
  EAX = (r32((uint32_t)(0x128171a0)));
  /* 127eec80 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127eec83 mov edx, dword ptr [0x12817198] */
  EDX = (r32((uint32_t)(0x12817198)));
  /* 127eec89 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 127eec94 mov eax, dword ptr [0x128171a0] */
  EAX = (r32((uint32_t)(0x128171a0)));
  /* 127eec99 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127eec9c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 127eec9f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 127eeca2 mov eax, dword ptr [0x128171a0] */
  EAX = (r32((uint32_t)(0x128171a0)));
  /* 127eeca7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127eecaa mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 127eecad mov edx, dword ptr [0x128171a0] */
  EDX = (r32((uint32_t)(0x128171a0)));
  /* 127eecb3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 127eecb6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 127eecba test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127eecbc jne 0x127eecd2 */
  if (!C.zf) goto L_127eecd2;
  /* 127eecbe mov edx, dword ptr [0x128171a0] */
  EDX = (r32((uint32_t)(0x128171a0)));
  /* 127eecc4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 127eecc7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 127eecc9 mov ecx, dword ptr [0x128171a0] */
  ECX = (r32((uint32_t)(0x128171a0)));
  /* 127eeccf mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_127eecd2:;
  /* 127eecd2 mov edx, dword ptr [0x128171a0] */
  EDX = (r32((uint32_t)(0x128171a0)));
  /* 127eecd8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127eecdc jne 0x127eed42 */
  if (!C.zf) goto L_127eed42;
  /* 127eecde cmp dword ptr [0x128171a4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x128171a4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127eece5 jle 0x127eed42 */
  if ((C.zf||C.sf!=C.of)) goto L_127eed42;
  /* 127eece7 mov eax, dword ptr [0x128171a0] */
  EAX = (r32((uint32_t)(0x128171a0)));
  /* 127eecec mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127eecef push ecx */
  push32((uint32_t)(ECX));
  /* 127eecf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 127eecf2 mov edx, dword ptr [0x128171ac] */
  EDX = (r32((uint32_t)(0x128171ac)));
  /* 127eecf8 push edx */
  push32((uint32_t)(EDX));
  /* 127eecf9 call dword ptr [0x12818328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12818328))), 0x127eecffu);
  /* 127eecff mov eax, dword ptr [0x128171a4] */
  EAX = (r32((uint32_t)(0x128171a4)));
  /* 127eed04 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127eed07 mov ecx, dword ptr [0x128171a8] */
  ECX = (r32((uint32_t)(0x128171a8)));
  /* 127eed0d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127eed0f mov edx, dword ptr [0x128171a0] */
  EDX = (r32((uint32_t)(0x128171a0)));
  /* 127eed15 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127eed18 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127eed1a push ecx */
  push32((uint32_t)(ECX));
  /* 127eed1b mov eax, dword ptr [0x128171a0] */
  EAX = (r32((uint32_t)(0x128171a0)));
  /* 127eed20 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127eed23 push eax */
  push32((uint32_t)(EAX));
  /* 127eed24 mov ecx, dword ptr [0x128171a0] */
  ECX = (r32((uint32_t)(0x128171a0)));
  /* 127eed2a push ecx */
  push32((uint32_t)(ECX));
  /* 127eed2b call 0x127f1350 */
  push32(0x127eed30u); f_127f1350();
  /* 127eed30 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127eed33 mov edx, dword ptr [0x128171a4] */
  EDX = (r32((uint32_t)(0x128171a4)));
  /* 127eed39 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127eed3c mov dword ptr [0x128171a4], edx */
  w32((uint32_t)(0x128171a4), (EDX));
L_127eed42:;
  /* 127eed42 mov dword ptr [0x128171a0], 0 */
  w32((uint32_t)(0x128171a0), (0x0u));
L_127eed4c:;
  /* 127eed4c mov esp, ebp */
  ESP = (EBP);
  /* 127eed4e pop ebp */
  EBP = (pop32());
  /* 127eed4f ret  */
  ESPCHK(0x127eec20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed50 @ 0x127eed50 (1565 bytes, 343 insns) */
void f_127eed50(void) {
  FTRACE(0x127eed50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127eed50 push ebp */
  push32((uint32_t)(EBP));
  /* 127eed51 mov ebp, esp */
  EBP = (ESP);
  /* 127eed53 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127eed59 mov eax, dword ptr [0x128171a4] */
  EAX = (r32((uint32_t)(0x128171a4)));
  /* 127eed5e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127eed61 push eax */
  push32((uint32_t)(EAX));
  /* 127eed62 mov ecx, dword ptr [0x128171a8] */
  ECX = (r32((uint32_t)(0x128171a8)));
  /* 127eed68 push ecx */
  push32((uint32_t)(ECX));
  /* 127eed69 call dword ptr [0x12818390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12818390))), 0x127eed6fu);
  /* 127eed6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127eed71 je 0x127eed7b */
  if (C.zf) goto L_127eed7b;
  /* 127eed73 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127eed76 jmp 0x127ef369 */
  goto L_127ef369;
L_127eed7b:;
  /* 127eed7b mov edx, dword ptr [0x128171a8] */
  EDX = (r32((uint32_t)(0x128171a8)));
  /* 127eed81 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 127eed87 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 127eed91 jmp 0x127eeda2 */
  goto L_127eeda2;
L_127eed93:;
  /* 127eed93 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 127eed99 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127eed9c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_127eeda2:;
  /* 127eeda2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 127eeda8 cmp ecx, dword ptr [0x128171a4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x128171a4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127eedae jge 0x127ef367 */
  if ((C.sf==C.of)) goto L_127ef367;
  /* 127eedb4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 127eedba mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 127eedbd mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 127eedc3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 127eedc8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 127eedce push ecx */
  push32((uint32_t)(ECX));
  /* 127eedcf call dword ptr [0x12818390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12818390))), 0x127eedd5u);
  /* 127eedd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127eedd7 je 0x127eede3 */
  if (C.zf) goto L_127eede3;
  /* 127eedd9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 127eedde jmp 0x127ef369 */
  goto L_127ef369;
L_127eede3:;
  /* 127eede3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 127eede9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 127eedec mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 127eedf2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 127eedf8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127eedfe mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 127eee01 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 127eee07 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 127eee0a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127eee0d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 127eee17 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 127eee21 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 127eee28 jmp 0x127eee33 */
  goto L_127eee33;
L_127eee2a:;
  /* 127eee2a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127eee2d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127eee30 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_127eee33:;
  /* 127eee33 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127eee37 jge 0x127ef32b */
  if ((C.sf==C.of)) goto L_127ef32b;
  /* 127eee3d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 127eee47 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 127eee51 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 127eee5b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 127eee65 jmp 0x127eee76 */
  goto L_127eee76;
L_127eee67:;
  /* 127eee67 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 127eee6d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127eee70 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_127eee76:;
  /* 127eee76 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127eee7d jge 0x127eee92 */
  if ((C.sf==C.of)) goto L_127eee92;
  /* 127eee7f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 127eee85 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 127eee90 jmp 0x127eee67 */
  goto L_127eee67;
L_127eee92:;
  /* 127eee92 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127eee96 jl 0x127ef2cd */
  if ((C.sf!=C.of)) goto L_127ef2cd;
  /* 127eee9c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 127eeea1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 127eeea7 push ecx */
  push32((uint32_t)(ECX));
  /* 127eeea8 call dword ptr [0x12818390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12818390))), 0x127eeeaeu);
  /* 127eeeae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127eeeb0 je 0x127eeebc */
  if (C.zf) goto L_127eeebc;
  /* 127eeeb2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 127eeeb7 jmp 0x127ef369 */
  goto L_127ef369;
L_127eeebc:;
  /* 127eeebc mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 127eeec2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 127eeec5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 127eeecf jmp 0x127eeee0 */
  goto L_127eeee0;
L_127eeed1:;
  /* 127eeed1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 127eeed7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127eeeda mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_127eeee0:;
  /* 127eeee0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127eeee7 jge 0x127ef064 */
  if ((C.sf==C.of)) goto L_127ef064;
  /* 127eeeed mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127eeef0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127eeef3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 127eeef9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 127eeeff add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127eef05 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 127eef0b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 127eef11 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127eef15 jne 0x127eef22 */
  if (!C.zf) goto L_127eef22;
  /* 127eef17 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 127eef1d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127eef20 je 0x127eef2c */
  if (C.zf) goto L_127eef2c;
L_127eef22:;
  /* 127eef22 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 127eef27 jmp 0x127ef369 */
  goto L_127ef369;
L_127eef2c:;
  /* 127eef2c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 127eef32 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127eef34 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 127eef3a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 127eef40 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 127eef46 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 127eef4c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 127eef4f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127eef51 je 0x127eef89 */
  if (C.zf) goto L_127eef89;
  /* 127eef53 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 127eef59 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127eef5c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 127eef62 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127eef6c jle 0x127eef78 */
  if ((C.zf||C.sf!=C.of)) goto L_127eef78;
  /* 127eef6e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 127eef73 jmp 0x127ef369 */
  goto L_127ef369;
L_127eef78:;
  /* 127eef78 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 127eef7e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127eef81 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 127eef87 jmp 0x127eefcb */
  goto L_127eefcb;
L_127eef89:;
  /* 127eef89 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 127eef8f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 127eef92 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127eef95 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 127eef9b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127eefa2 jle 0x127eefae */
  if ((C.zf||C.sf!=C.of)) goto L_127eefae;
  /* 127eefa4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_127eefae:;
  /* 127eefae mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 127eefb4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 127eefbb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127eefbe mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 127eefc4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_127eefcb:;
  /* 127eefcb cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127eefd2 jl 0x127eefed */
  if ((C.sf!=C.of)) goto L_127eefed;
  /* 127eefd4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 127eefda and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 127eefdd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127eefdf jne 0x127eefed */
  if (!C.zf) goto L_127eefed;
  /* 127eefe1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127eefeb jle 0x127eeff7 */
  if ((C.zf||C.sf!=C.of)) goto L_127eeff7;
L_127eefed:;
  /* 127eefed mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 127eeff2 jmp 0x127ef369 */
  goto L_127ef369;
L_127eeff7:;
  /* 127eeff7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 127eeffd add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ef003 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 127ef006 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef00c je 0x127ef018 */
  if (C.zf) goto L_127ef018;
  /* 127ef00e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 127ef013 jmp 0x127ef369 */
  goto L_127ef369;
L_127ef018:;
  /* 127ef018 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 127ef01e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ef024 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 127ef02a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 127ef030 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef036 jb 0x127eef2c */
  if (C.cf) goto L_127eef2c;
  /* 127ef03c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 127ef042 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef048 je 0x127ef054 */
  if (C.zf) goto L_127ef054;
  /* 127ef04a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 127ef04f jmp 0x127ef369 */
  goto L_127ef369;
L_127ef054:;
  /* 127ef054 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ef057 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ef05c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127ef05f jmp 0x127eeed1 */
  goto L_127eeed1;
L_127ef064:;
  /* 127ef064 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127ef067 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127ef069 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef06f je 0x127ef07b */
  if (C.zf) goto L_127ef07b;
  /* 127ef071 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 127ef076 jmp 0x127ef369 */
  goto L_127ef369;
L_127ef07b:;
  /* 127ef07b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127ef07e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 127ef084 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 127ef08b jmp 0x127ef096 */
  goto L_127ef096;
L_127ef08d:;
  /* 127ef08d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127ef090 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ef093 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_127ef096:;
  /* 127ef096 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef09a jge 0x127ef2cd */
  if ((C.sf==C.of)) goto L_127ef2cd;
  /* 127ef0a0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 127ef0aa mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 127ef0b0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_127ef0b6:;
  /* 127ef0b6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 127ef0bc mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 127ef0bf mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 127ef0c5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 127ef0cb cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef0d1 je 0x127ef1fa */
  if (C.zf) goto L_127ef1fa;
  /* 127ef0d7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127ef0da mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 127ef0e0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef0e7 je 0x127ef1fa */
  if (C.zf) goto L_127ef1fa;
  /* 127ef0ed mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 127ef0f3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef0f9 jb 0x127ef10e */
  if (C.cf) goto L_127ef10e;
  /* 127ef0fb mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 127ef101 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ef106 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef10c jb 0x127ef118 */
  if (C.cf) goto L_127ef118;
L_127ef10e:;
  /* 127ef10e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 127ef113 jmp 0x127ef369 */
  goto L_127ef369;
L_127ef118:;
  /* 127ef118 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 127ef11e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 127ef124 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 127ef12a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 127ef130 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ef133 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 127ef136 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ef139 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ef13e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_127ef144:;
  /* 127ef144 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ef147 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef14d je 0x127ef16e */
  if (C.zf) goto L_127ef16e;
  /* 127ef14f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ef152 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef158 jne 0x127ef15c */
  if (!C.zf) goto L_127ef15c;
  /* 127ef15a jmp 0x127ef16e */
  goto L_127ef16e;
L_127ef15c:;
  /* 127ef15c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ef15f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127ef161 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 127ef164 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ef167 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ef169 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 127ef16c jmp 0x127ef144 */
  goto L_127ef144;
L_127ef16e:;
  /* 127ef16e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ef171 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef177 jne 0x127ef183 */
  if (!C.zf) goto L_127ef183;
  /* 127ef179 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 127ef17e jmp 0x127ef369 */
  goto L_127ef369;
L_127ef183:;
  /* 127ef183 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 127ef189 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127ef18b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 127ef18e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ef191 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 127ef197 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef19e jle 0x127ef1aa */
  if ((C.zf||C.sf!=C.of)) goto L_127ef1aa;
  /* 127ef1a0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_127ef1aa:;
  /* 127ef1aa mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 127ef1b0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef1b3 je 0x127ef1bf */
  if (C.zf) goto L_127ef1bf;
  /* 127ef1b5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 127ef1ba jmp 0x127ef369 */
  goto L_127ef369;
L_127ef1bf:;
  /* 127ef1bf mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 127ef1c5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 127ef1c8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef1ce je 0x127ef1da */
  if (C.zf) goto L_127ef1da;
  /* 127ef1d0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 127ef1d5 jmp 0x127ef369 */
  goto L_127ef369;
L_127ef1da:;
  /* 127ef1da mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 127ef1e0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 127ef1e6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 127ef1ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ef1ef mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 127ef1f5 jmp 0x127ef0b6 */
  goto L_127ef0b6;
L_127ef1fa:;
  /* 127ef1fa cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef201 je 0x127ef271 */
  if (C.zf) goto L_127ef271;
  /* 127ef203 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef207 jge 0x127ef23b */
  if ((C.sf==C.of)) goto L_127ef23b;
  /* 127ef209 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127ef20e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127ef211 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127ef213 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 127ef219 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 127ef21b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 127ef221 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127ef226 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127ef229 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127ef22b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 127ef231 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 127ef233 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 127ef239 jmp 0x127ef271 */
  goto L_127ef271;
L_127ef23b:;
  /* 127ef23b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127ef23e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ef241 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127ef246 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127ef248 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 127ef24e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 127ef250 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 127ef256 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127ef259 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ef25c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127ef261 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127ef263 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 127ef269 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 127ef26b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_127ef271:;
  /* 127ef271 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 127ef277 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 127ef27a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef280 jne 0x127ef294 */
  if (!C.zf) goto L_127ef294;
  /* 127ef282 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127ef285 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 127ef28b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef292 je 0x127ef29e */
  if (C.zf) goto L_127ef29e;
L_127ef294:;
  /* 127ef294 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 127ef299 jmp 0x127ef369 */
  goto L_127ef369;
L_127ef29e:;
  /* 127ef29e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 127ef2a4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 127ef2a7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef2ad je 0x127ef2b9 */
  if (C.zf) goto L_127ef2b9;
  /* 127ef2af mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 127ef2b4 jmp 0x127ef369 */
  goto L_127ef369;
L_127ef2b9:;
  /* 127ef2b9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 127ef2bf add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ef2c2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 127ef2c8 jmp 0x127ef08d */
  goto L_127ef08d;
L_127ef2cd:;
  /* 127ef2cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ef2d0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 127ef2d6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 127ef2dc cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef2e0 jne 0x127ef2fa */
  if (!C.zf) goto L_127ef2fa;
  /* 127ef2e2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ef2e5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 127ef2eb mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 127ef2f1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef2f8 je 0x127ef301 */
  if (C.zf) goto L_127ef301;
L_127ef2fa:;
  /* 127ef2fa mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 127ef2ff jmp 0x127ef369 */
  goto L_127ef369;
L_127ef301:;
  /* 127ef301 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 127ef307 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ef30d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 127ef313 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127ef316 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ef31b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 127ef31e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ef321 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 127ef323 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127ef326 jmp 0x127eee2a */
  goto L_127eee2a;
L_127ef32b:;
  /* 127ef32b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 127ef331 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 127ef337 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef339 jne 0x127ef34c */
  if (!C.zf) goto L_127ef34c;
  /* 127ef33b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 127ef341 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 127ef347 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef34a je 0x127ef353 */
  if (C.zf) goto L_127ef353;
L_127ef34c:;
  /* 127ef34c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 127ef351 jmp 0x127ef369 */
  goto L_127ef369;
L_127ef353:;
  /* 127ef353 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 127ef359 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ef35c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 127ef362 jmp 0x127eed93 */
  goto L_127eed93;
L_127ef367:;
  /* 127ef367 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127ef369:;
  /* 127ef369 mov esp, ebp */
  ESP = (EBP);
  /* 127ef36b pop ebp */
  EBP = (pop32());
  /* 127ef36c ret  */
  ESPCHK(0x127eed50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f370 @ 0x127ef370 (250 bytes, 92 insns) */
void f_127ef370(void) {
  FTRACE(0x127ef370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ef370 push ebp */
  push32((uint32_t)(EBP));
  /* 127ef371 mov ebp, esp */
  EBP = (ESP);
  /* 127ef373 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ef376 push ebx */
  push32((uint32_t)(EBX));
  /* 127ef377 push esi */
  push32((uint32_t)(ESI));
  /* 127ef378 push edi */
  push32((uint32_t)(EDI));
  /* 127ef379 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 127ef37c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 127ef37f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 127ef382 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_127ef385:;
  /* 127ef385 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef389 jne 0x127ef3a9 */
  if (!C.zf) goto L_127ef3a9;
  /* 127ef38b push 0x128110dc */
  push32((uint32_t)(0x128110dcu));
  /* 127ef390 push 0 */
  push32((uint32_t)(0x0u));
  /* 127ef392 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 127ef394 push 0x128110d0 */
  push32((uint32_t)(0x128110d0u));
  /* 127ef399 push 2 */
  push32((uint32_t)(0x2u));
  /* 127ef39b call 0x127e8520 */
  push32(0x127ef3a0u); f_127e8520();
  /* 127ef3a0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ef3a3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef3a6 jne 0x127ef3a9 */
  if (!C.zf) goto L_127ef3a9;
  /* 127ef3a8 int3  */
  x86_unimpl("int3 @ 0x127ef3a8");
L_127ef3a9:;
  /* 127ef3a9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127ef3ab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127ef3ad jne 0x127ef385 */
  if (!C.zf) goto L_127ef385;
L_127ef3af:;
  /* 127ef3af cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef3b3 jne 0x127ef3d3 */
  if (!C.zf) goto L_127ef3d3;
  /* 127ef3b5 push 0x128110c0 */
  push32((uint32_t)(0x128110c0u));
  /* 127ef3ba push 0 */
  push32((uint32_t)(0x0u));
  /* 127ef3bc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 127ef3be push 0x128110d0 */
  push32((uint32_t)(0x128110d0u));
  /* 127ef3c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 127ef3c5 call 0x127e8520 */
  push32(0x127ef3cau); f_127e8520();
  /* 127ef3ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ef3cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef3d0 jne 0x127ef3d3 */
  if (!C.zf) goto L_127ef3d3;
  /* 127ef3d2 int3  */
  x86_unimpl("int3 @ 0x127ef3d2");
L_127ef3d3:;
  /* 127ef3d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127ef3d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127ef3d7 jne 0x127ef3af */
  if (!C.zf) goto L_127ef3af;
  /* 127ef3d9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127ef3dc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 127ef3e3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 127ef3e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ef3e9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 127ef3ec mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127ef3ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ef3f2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 127ef3f4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127ef3f7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 127ef3fe mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127ef401 push ecx */
  push32((uint32_t)(ECX));
  /* 127ef402 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127ef405 push edx */
  push32((uint32_t)(EDX));
  /* 127ef406 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127ef409 push eax */
  push32((uint32_t)(EAX));
  /* 127ef40a call 0x127f03f0 */
  push32(0x127ef40fu); f_127f03f0();
  /* 127ef40f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ef412 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 127ef415 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127ef418 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 127ef41b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ef41e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127ef421 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 127ef424 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127ef427 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef42b jl 0x127ef44f */
  if ((C.sf!=C.of)) goto L_127ef44f;
  /* 127ef42d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 127ef430 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127ef432 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 127ef435 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127ef437 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 127ef43d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 127ef440 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 127ef443 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127ef445 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ef448 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127ef44b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 127ef44d jmp 0x127ef460 */
  goto L_127ef460;
L_127ef44f:;
  /* 127ef44f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 127ef452 push edx */
  push32((uint32_t)(EDX));
  /* 127ef453 push 0 */
  push32((uint32_t)(0x0u));
  /* 127ef455 call 0x127f0170 */
  push32(0x127ef45au); f_127f0170();
  /* 127ef45a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ef45d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_127ef460:;
  /* 127ef460 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 127ef463 pop edi */
  EDI = (pop32());
  /* 127ef464 pop esi */
  ESI = (pop32());
  /* 127ef465 pop ebx */
  EBX = (pop32());
  /* 127ef466 mov esp, ebp */
  ESP = (EBP);
  /* 127ef468 pop ebp */
  EBP = (pop32());
  /* 127ef469 ret  */
  ESPCHK(0x127ef370u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f470 @ 0x127ef470 (183 bytes, 58 insns) */
void f_127ef470(void) {
  FTRACE(0x127ef470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ef470 push ebp */
  push32((uint32_t)(EBP));
  /* 127ef471 mov ebp, esp */
  EBP = (ESP);
  /* 127ef473 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ef476 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ef479 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ef47c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef481 ja 0x127ef49a */
  if ((!C.cf&&!C.zf)) goto L_127ef49a;
  /* 127ef483 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ef486 mov edx, dword ptr [0x12813c98] */
  EDX = (r32((uint32_t)(0x12813c98)));
  /* 127ef48c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127ef48e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 127ef492 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 127ef495 jmp 0x127ef523 */
  goto L_127ef523;
L_127ef49a:;
  /* 127ef49a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ef49d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 127ef4a0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 127ef4a6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 127ef4ac mov edx, dword ptr [0x12813c98] */
  EDX = (r32((uint32_t)(0x12813c98)));
  /* 127ef4b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127ef4b4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 127ef4b8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 127ef4bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127ef4bf je 0x127ef4e3 */
  if (C.zf) goto L_127ef4e3;
  /* 127ef4c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ef4c4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 127ef4c7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 127ef4cd mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 127ef4d0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 127ef4d3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 127ef4d6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 127ef4da mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 127ef4e1 jmp 0x127ef4f4 */
  goto L_127ef4f4;
L_127ef4e3:;
  /* 127ef4e3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 127ef4e6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 127ef4e9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 127ef4ed mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_127ef4f4:;
  /* 127ef4f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 127ef4f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 127ef4f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 127ef4fa lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 127ef4fd push ecx */
  push32((uint32_t)(ECX));
  /* 127ef4fe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ef501 push edx */
  push32((uint32_t)(EDX));
  /* 127ef502 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 127ef505 push eax */
  push32((uint32_t)(EAX));
  /* 127ef506 push 1 */
  push32((uint32_t)(0x1u));
  /* 127ef508 call 0x127f1690 */
  push32(0x127ef50du); f_127f1690();
  /* 127ef50d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ef510 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127ef512 jne 0x127ef518 */
  if (!C.zf) goto L_127ef518;
  /* 127ef514 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127ef516 jmp 0x127ef523 */
  goto L_127ef523;
L_127ef518:;
  /* 127ef518 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ef51b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127ef520 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_127ef523:;
  /* 127ef523 mov esp, ebp */
  ESP = (EBP);
  /* 127ef525 pop ebp */
  EBP = (pop32());
  /* 127ef526 ret  */
  ESPCHK(0x127ef470u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f530 @ 0x127ef530 (836 bytes, 238 insns) */
void f_127ef530(void) {
  FTRACE(0x127ef530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ef530 push ebp */
  push32((uint32_t)(EBP));
  /* 127ef531 mov ebp, esp */
  EBP = (ESP);
  /* 127ef533 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ef536 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 127ef538 call 0x127ece60 */
  push32(0x127ef53du); f_127ece60();
  /* 127ef53d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ef540 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ef543 push eax */
  push32((uint32_t)(EAX));
  /* 127ef544 call 0x127ef880 */
  push32(0x127ef549u); f_127ef880();
  /* 127ef549 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ef54c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 127ef54f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ef552 cmp ecx, dword ptr [0x12816ee4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12816ee4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef558 jne 0x127ef56b */
  if (!C.zf) goto L_127ef56b;
  /* 127ef55a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 127ef55c call 0x127ecf00 */
  push32(0x127ef561u); f_127ecf00();
  /* 127ef561 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ef564 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127ef566 jmp 0x127ef870 */
  goto L_127ef870;
L_127ef56b:;
  /* 127ef56b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef56f jne 0x127ef58c */
  if (!C.zf) goto L_127ef58c;
  /* 127ef571 call 0x127ef960 */
  push32(0x127ef576u); f_127ef960();
  /* 127ef576 call 0x127ef9e0 */
  push32(0x127ef57bu); f_127ef9e0();
  /* 127ef57b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 127ef57d call 0x127ecf00 */
  push32(0x127ef582u); f_127ecf00();
  /* 127ef582 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ef585 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127ef587 jmp 0x127ef870 */
  goto L_127ef870;
L_127ef58c:;
  /* 127ef58c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127ef593 jmp 0x127ef59e */
  goto L_127ef59e;
L_127ef595:;
  /* 127ef595 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ef598 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ef59b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_127ef59e:;
  /* 127ef59e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef5a2 jae 0x127ef6ef */
  if (!C.cf) goto L_127ef6ef;
  /* 127ef5a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ef5ab imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127ef5ae mov ecx, dword ptr [eax + 0x12813eb8] */
  ECX = (r32((uint32_t)(EAX + 0x12813eb8)));
  /* 127ef5b4 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef5b7 jne 0x127ef6ea */
  if (!C.zf) goto L_127ef6ea;
  /* 127ef5bd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 127ef5c4 jmp 0x127ef5cf */
  goto L_127ef5cf;
L_127ef5c6:;
  /* 127ef5c6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 127ef5c9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ef5cc mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_127ef5cf:;
  /* 127ef5cf cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef5d6 jae 0x127ef5e4 */
  if (!C.cf) goto L_127ef5e4;
  /* 127ef5d8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127ef5db mov byte ptr [eax + 0x12817080], 0 */
  w8((uint32_t)(EAX + 0x12817080), (0x0u));
  /* 127ef5e2 jmp 0x127ef5c6 */
  goto L_127ef5c6;
L_127ef5e4:;
  /* 127ef5e4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 127ef5eb jmp 0x127ef5f6 */
  goto L_127ef5f6;
L_127ef5ed:;
  /* 127ef5ed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ef5f0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ef5f3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_127ef5f6:;
  /* 127ef5f6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef5fa jae 0x127ef677 */
  if (!C.cf) goto L_127ef677;
  /* 127ef5fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ef5ff imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127ef602 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ef605 lea ecx, [edx + eax*8 + 0x12813ec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x12813ec8));
  /* 127ef60c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127ef60f jmp 0x127ef61a */
  goto L_127ef61a;
L_127ef611:;
  /* 127ef611 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ef614 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ef617 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_127ef61a:;
  /* 127ef61a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ef61d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127ef61f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127ef621 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127ef623 je 0x127ef672 */
  if (C.zf) goto L_127ef672;
  /* 127ef625 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ef628 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127ef62a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 127ef62d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127ef62f je 0x127ef672 */
  if (C.zf) goto L_127ef672;
  /* 127ef631 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ef634 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127ef636 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127ef638 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 127ef63b jmp 0x127ef646 */
  goto L_127ef646;
L_127ef63d:;
  /* 127ef63d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127ef640 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ef643 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_127ef646:;
  /* 127ef646 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ef649 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127ef64b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 127ef64e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef651 ja 0x127ef670 */
  if ((!C.cf&&!C.zf)) goto L_127ef670;
  /* 127ef653 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127ef656 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ef659 mov dl, byte ptr [eax + 0x12817081] */
  DL = (r8((uint32_t)(EAX + 0x12817081)));
  /* 127ef65f or dl, byte ptr [ecx + 0x12813eb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x12813eb0))); DL = (_r); fl_logic(_r,8); }
  /* 127ef665 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127ef668 mov byte ptr [eax + 0x12817081], dl */
  w8((uint32_t)(EAX + 0x12817081), (DL));
  /* 127ef66e jmp 0x127ef63d */
  goto L_127ef63d;
L_127ef670:;
  /* 127ef670 jmp 0x127ef611 */
  goto L_127ef611;
L_127ef672:;
  /* 127ef672 jmp 0x127ef5ed */
  goto L_127ef5ed;
L_127ef677:;
  /* 127ef677 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ef67a mov dword ptr [0x12816ee4], ecx */
  w32((uint32_t)(0x12816ee4), (ECX));
  /* 127ef680 mov dword ptr [0x12816f6c], 1 */
  w32((uint32_t)(0x12816f6c), (0x1u));
  /* 127ef68a mov edx, dword ptr [0x12816ee4] */
  EDX = (r32((uint32_t)(0x12816ee4)));
  /* 127ef690 push edx */
  push32((uint32_t)(EDX));
  /* 127ef691 call 0x127ef8e0 */
  push32(0x127ef696u); f_127ef8e0();
  /* 127ef696 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ef699 mov dword ptr [0x12817184], eax */
  w32((uint32_t)(0x12817184), (EAX));
  /* 127ef69e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 127ef6a5 jmp 0x127ef6b0 */
  goto L_127ef6b0;
L_127ef6a7:;
  /* 127ef6a7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ef6aa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ef6ad mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_127ef6b0:;
  /* 127ef6b0 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef6b4 jae 0x127ef6d4 */
  if (!C.cf) goto L_127ef6d4;
  /* 127ef6b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ef6b9 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127ef6bc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ef6bf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ef6c2 mov cx, word ptr [ecx + eax*2 + 0x12813ebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x12813ebc)));
  /* 127ef6ca mov word ptr [edx*2 + 0x12816f60], cx */
  w16((uint32_t)(EDX*2 + 0x12816f60), (CX));
  /* 127ef6d2 jmp 0x127ef6a7 */
  goto L_127ef6a7;
L_127ef6d4:;
  /* 127ef6d4 call 0x127ef9e0 */
  push32(0x127ef6d9u); f_127ef9e0();
  /* 127ef6d9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 127ef6db call 0x127ecf00 */
  push32(0x127ef6e0u); f_127ecf00();
  /* 127ef6e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ef6e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127ef6e5 jmp 0x127ef870 */
  goto L_127ef870;
L_127ef6ea:;
  /* 127ef6ea jmp 0x127ef595 */
  goto L_127ef595;
L_127ef6ef:;
  /* 127ef6ef lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 127ef6f2 push edx */
  push32((uint32_t)(EDX));
  /* 127ef6f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ef6f6 push eax */
  push32((uint32_t)(EAX));
  /* 127ef6f7 call dword ptr [0x128182fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182fc))), 0x127ef6fdu);
  /* 127ef6fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef700 jne 0x127ef842 */
  if (!C.zf) goto L_127ef842;
  /* 127ef706 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 127ef70d jmp 0x127ef718 */
  goto L_127ef718;
L_127ef70f:;
  /* 127ef70f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127ef712 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ef715 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_127ef718:;
  /* 127ef718 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef71f jae 0x127ef72d */
  if (!C.cf) goto L_127ef72d;
  /* 127ef721 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 127ef724 mov byte ptr [edx + 0x12817080], 0 */
  w8((uint32_t)(EDX + 0x12817080), (0x0u));
  /* 127ef72b jmp 0x127ef70f */
  goto L_127ef70f;
L_127ef72d:;
  /* 127ef72d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ef730 mov dword ptr [0x12816ee4], eax */
  w32((uint32_t)(0x12816ee4), (EAX));
  /* 127ef735 mov dword ptr [0x12817184], 0 */
  w32((uint32_t)(0x12817184), (0x0u));
  /* 127ef73f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef743 jbe 0x127ef7fe */
  if ((C.cf||C.zf)) goto L_127ef7fe;
  /* 127ef749 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 127ef74c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 127ef74f jmp 0x127ef75a */
  goto L_127ef75a;
L_127ef751:;
  /* 127ef751 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 127ef754 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ef757 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_127ef75a:;
  /* 127ef75a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 127ef75d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127ef75f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127ef761 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127ef763 je 0x127ef7ac */
  if (C.zf) goto L_127ef7ac;
  /* 127ef765 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 127ef768 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127ef76a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 127ef76d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127ef76f je 0x127ef7ac */
  if (C.zf) goto L_127ef7ac;
  /* 127ef771 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 127ef774 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127ef776 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127ef778 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 127ef77b jmp 0x127ef786 */
  goto L_127ef786;
L_127ef77d:;
  /* 127ef77d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127ef780 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ef783 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_127ef786:;
  /* 127ef786 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 127ef789 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127ef78b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 127ef78e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef791 ja 0x127ef7aa */
  if ((!C.cf&&!C.zf)) goto L_127ef7aa;
  /* 127ef793 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127ef796 mov cl, byte ptr [eax + 0x12817081] */
  CL = (r8((uint32_t)(EAX + 0x12817081)));
  /* 127ef79c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 127ef79f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 127ef7a2 mov byte ptr [edx + 0x12817081], cl */
  w8((uint32_t)(EDX + 0x12817081), (CL));
  /* 127ef7a8 jmp 0x127ef77d */
  goto L_127ef77d;
L_127ef7aa:;
  /* 127ef7aa jmp 0x127ef751 */
  goto L_127ef751;
L_127ef7ac:;
  /* 127ef7ac mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 127ef7b3 jmp 0x127ef7be */
  goto L_127ef7be;
L_127ef7b5:;
  /* 127ef7b5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127ef7b8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ef7bb mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_127ef7be:;
  /* 127ef7be cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef7c5 jae 0x127ef7de */
  if (!C.cf) goto L_127ef7de;
  /* 127ef7c7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127ef7ca mov dl, byte ptr [ecx + 0x12817081] */
  DL = (r8((uint32_t)(ECX + 0x12817081)));
  /* 127ef7d0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 127ef7d3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127ef7d6 mov byte ptr [eax + 0x12817081], dl */
  w8((uint32_t)(EAX + 0x12817081), (DL));
  /* 127ef7dc jmp 0x127ef7b5 */
  goto L_127ef7b5;
L_127ef7de:;
  /* 127ef7de mov ecx, dword ptr [0x12816ee4] */
  ECX = (r32((uint32_t)(0x12816ee4)));
  /* 127ef7e4 push ecx */
  push32((uint32_t)(ECX));
  /* 127ef7e5 call 0x127ef8e0 */
  push32(0x127ef7eau); f_127ef8e0();
  /* 127ef7ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ef7ed mov dword ptr [0x12817184], eax */
  w32((uint32_t)(0x12817184), (EAX));
  /* 127ef7f2 mov dword ptr [0x12816f6c], 1 */
  w32((uint32_t)(0x12816f6c), (0x1u));
  /* 127ef7fc jmp 0x127ef808 */
  goto L_127ef808;
L_127ef7fe:;
  /* 127ef7fe mov dword ptr [0x12816f6c], 0 */
  w32((uint32_t)(0x12816f6c), (0x0u));
L_127ef808:;
  /* 127ef808 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 127ef80f jmp 0x127ef81a */
  goto L_127ef81a;
L_127ef811:;
  /* 127ef811 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ef814 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ef817 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_127ef81a:;
  /* 127ef81a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef81e jae 0x127ef82f */
  if (!C.cf) goto L_127ef82f;
  /* 127ef820 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ef823 mov word ptr [eax*2 + 0x12816f60], 0 */
  w16((uint32_t)(EAX*2 + 0x12816f60), (0x0u));
  /* 127ef82d jmp 0x127ef811 */
  goto L_127ef811;
L_127ef82f:;
  /* 127ef82f call 0x127ef9e0 */
  push32(0x127ef834u); f_127ef9e0();
  /* 127ef834 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 127ef836 call 0x127ecf00 */
  push32(0x127ef83bu); f_127ecf00();
  /* 127ef83b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ef83e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127ef840 jmp 0x127ef870 */
  goto L_127ef870;
L_127ef842:;
  /* 127ef842 cmp dword ptr [0x128159f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128159f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef849 je 0x127ef863 */
  if (C.zf) goto L_127ef863;
  /* 127ef84b call 0x127ef960 */
  push32(0x127ef850u); f_127ef960();
  /* 127ef850 call 0x127ef9e0 */
  push32(0x127ef855u); f_127ef9e0();
  /* 127ef855 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 127ef857 call 0x127ecf00 */
  push32(0x127ef85cu); f_127ecf00();
  /* 127ef85c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ef85f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127ef861 jmp 0x127ef870 */
  goto L_127ef870;
L_127ef863:;
  /* 127ef863 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 127ef865 call 0x127ecf00 */
  push32(0x127ef86au); f_127ecf00();
  /* 127ef86a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ef86d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_127ef870:;
  /* 127ef870 mov esp, ebp */
  ESP = (EBP);
  /* 127ef872 pop ebp */
  EBP = (pop32());
  /* 127ef873 ret  */
  ESPCHK(0x127ef530u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x127ef880 (89 bytes, 21 insns) */
void f_127ef880(void) {
  FTRACE(0x127ef880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ef880 push ebp */
  push32((uint32_t)(EBP));
  /* 127ef881 mov ebp, esp */
  EBP = (ESP);
  /* 127ef883 mov dword ptr [0x128159f0], 0 */
  w32((uint32_t)(0x128159f0), (0x0u));
  /* 127ef88d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef891 jne 0x127ef8a5 */
  if (!C.zf) goto L_127ef8a5;
  /* 127ef893 mov dword ptr [0x128159f0], 1 */
  w32((uint32_t)(0x128159f0), (0x1u));
  /* 127ef89d call dword ptr [0x128182f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182f4))), 0x127ef8a3u);
  /* 127ef8a3 jmp 0x127ef8d7 */
  goto L_127ef8d7;
L_127ef8a5:;
  /* 127ef8a5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef8a9 jne 0x127ef8bd */
  if (!C.zf) goto L_127ef8bd;
  /* 127ef8ab mov dword ptr [0x128159f0], 1 */
  w32((uint32_t)(0x128159f0), (0x1u));
  /* 127ef8b5 call dword ptr [0x128182f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182f8))), 0x127ef8bbu);
  /* 127ef8bb jmp 0x127ef8d7 */
  goto L_127ef8d7;
L_127ef8bd:;
  /* 127ef8bd cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef8c1 jne 0x127ef8d4 */
  if (!C.zf) goto L_127ef8d4;
  /* 127ef8c3 mov dword ptr [0x128159f0], 1 */
  w32((uint32_t)(0x128159f0), (0x1u));
  /* 127ef8cd mov eax, dword ptr [0x12815a10] */
  EAX = (r32((uint32_t)(0x12815a10)));
  /* 127ef8d2 jmp 0x127ef8d7 */
  goto L_127ef8d7;
L_127ef8d4:;
  /* 127ef8d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_127ef8d7:;
  /* 127ef8d7 pop ebp */
  EBP = (pop32());
  /* 127ef8d8 ret  */
  ESPCHK(0x127ef880u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f8e0 @ 0x127ef8e0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_127ef8e0(void) {
  FTRACE(0x127ef8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ef8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 127ef8e1 mov ebp, esp */
  EBP = (ESP);
  /* 127ef8e3 push ecx */
  push32((uint32_t)(ECX));
  /* 127ef8e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ef8e7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127ef8ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ef8ed sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ef8f3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127ef8f6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef8fa ja 0x127ef92a */
  if ((!C.cf&&!C.zf)) goto L_127ef92a;
  /* 127ef8fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ef8ff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127ef901 mov dl, byte ptr [eax + 0x127ef944] */
  DL = (r8((uint32_t)(EAX + 0x127ef944)));
  /* 127ef907 jmp dword ptr [edx*4 + 0x127ef930] */
  switch (EDX) {
    case 0: goto L_127ef90e;
    case 1: goto L_127ef915;
    case 2: goto L_127ef91c;
    case 3: goto L_127ef923;
    case 4: goto L_127ef92a;
    default: x86_unimpl("switch@0x127ef907 out of table"); return;
  }
L_127ef90e:;
  /* 127ef90e mov eax, 0x411 */
  EAX = (0x411u);
  /* 127ef913 jmp 0x127ef92c */
  goto L_127ef92c;
L_127ef915:;
  /* 127ef915 mov eax, 0x804 */
  EAX = (0x804u);
  /* 127ef91a jmp 0x127ef92c */
  goto L_127ef92c;
L_127ef91c:;
  /* 127ef91c mov eax, 0x412 */
  EAX = (0x412u);
  /* 127ef921 jmp 0x127ef92c */
  goto L_127ef92c;
L_127ef923:;
  /* 127ef923 mov eax, 0x404 */
  EAX = (0x404u);
  /* 127ef928 jmp 0x127ef92c */
  goto L_127ef92c;
L_127ef92a:;
  /* 127ef92a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127ef92c:;
  /* 127ef92c mov esp, ebp */
  ESP = (EBP);
  /* 127ef92e pop ebp */
  EBP = (pop32());
  /* 127ef92f ret  */
  ESPCHK(0x127ef8e0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x127ef960 (116 bytes, 29 insns) */
void f_127ef960(void) {
  FTRACE(0x127ef960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ef960 push ebp */
  push32((uint32_t)(EBP));
  /* 127ef961 mov ebp, esp */
  EBP = (ESP);
  /* 127ef963 push ecx */
  push32((uint32_t)(ECX));
  /* 127ef964 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127ef96b jmp 0x127ef976 */
  goto L_127ef976;
L_127ef96d:;
  /* 127ef96d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ef970 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ef973 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127ef976:;
  /* 127ef976 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef97d jge 0x127ef98b */
  if ((C.sf==C.of)) goto L_127ef98b;
  /* 127ef97f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ef982 mov byte ptr [ecx + 0x12817080], 0 */
  w8((uint32_t)(ECX + 0x12817080), (0x0u));
  /* 127ef989 jmp 0x127ef96d */
  goto L_127ef96d;
L_127ef98b:;
  /* 127ef98b mov dword ptr [0x12816ee4], 0 */
  w32((uint32_t)(0x12816ee4), (0x0u));
  /* 127ef995 mov dword ptr [0x12816f6c], 0 */
  w32((uint32_t)(0x12816f6c), (0x0u));
  /* 127ef99f mov dword ptr [0x12817184], 0 */
  w32((uint32_t)(0x12817184), (0x0u));
  /* 127ef9a9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127ef9b0 jmp 0x127ef9bb */
  goto L_127ef9bb;
L_127ef9b2:;
  /* 127ef9b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ef9b5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ef9b8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_127ef9bb:;
  /* 127ef9bb cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ef9bf jge 0x127ef9d0 */
  if ((C.sf==C.of)) goto L_127ef9d0;
  /* 127ef9c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ef9c4 mov word ptr [eax*2 + 0x12816f60], 0 */
  w16((uint32_t)(EAX*2 + 0x12816f60), (0x0u));
  /* 127ef9ce jmp 0x127ef9b2 */
  goto L_127ef9b2;
L_127ef9d0:;
  /* 127ef9d0 mov esp, ebp */
  ESP = (EBP);
  /* 127ef9d2 pop ebp */
  EBP = (pop32());
  /* 127ef9d3 ret  */
  ESPCHK(0x127ef960u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f9e0 @ 0x127ef9e0 (770 bytes, 175 insns) */
void f_127ef9e0(void) {
  FTRACE(0x127ef9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ef9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 127ef9e1 mov ebp, esp */
  EBP = (ESP);
  /* 127ef9e3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ef9e9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 127ef9ef push eax */
  push32((uint32_t)(EAX));
  /* 127ef9f0 mov ecx, dword ptr [0x12816ee4] */
  ECX = (r32((uint32_t)(0x12816ee4)));
  /* 127ef9f6 push ecx */
  push32((uint32_t)(ECX));
  /* 127ef9f7 call dword ptr [0x128182fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182fc))), 0x127ef9fdu);
  /* 127ef9fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127efa00 jne 0x127efc19 */
  if (!C.zf) goto L_127efc19;
  /* 127efa06 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 127efa10 jmp 0x127efa21 */
  goto L_127efa21;
L_127efa12:;
  /* 127efa12 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127efa18 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127efa1b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_127efa21:;
  /* 127efa21 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127efa2b jae 0x127efa42 */
  if (!C.cf) goto L_127efa42;
  /* 127efa2d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127efa33 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 127efa39 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 127efa40 jmp 0x127efa12 */
  goto L_127efa12;
L_127efa42:;
  /* 127efa42 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 127efa49 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 127efa4f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127efa52 jmp 0x127efa5d */
  goto L_127efa5d;
L_127efa54:;
  /* 127efa54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127efa57 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127efa5a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127efa5d:;
  /* 127efa5d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127efa60 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127efa62 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127efa64 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127efa66 je 0x127efaa8 */
  if (C.zf) goto L_127efaa8;
  /* 127efa68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127efa6b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127efa6d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127efa6f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 127efa75 jmp 0x127efa86 */
  goto L_127efa86;
L_127efa77:;
  /* 127efa77 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127efa7d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127efa80 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_127efa86:;
  /* 127efa86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127efa89 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127efa8b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 127efa8e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127efa94 ja 0x127efaa6 */
  if ((!C.cf&&!C.zf)) goto L_127efaa6;
  /* 127efa96 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127efa9c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 127efaa4 jmp 0x127efa77 */
  goto L_127efa77;
L_127efaa6:;
  /* 127efaa6 jmp 0x127efa54 */
  goto L_127efa54;
L_127efaa8:;
  /* 127efaa8 push 0 */
  push32((uint32_t)(0x0u));
  /* 127efaaa mov eax, dword ptr [0x12817184] */
  EAX = (r32((uint32_t)(0x12817184)));
  /* 127efaaf push eax */
  push32((uint32_t)(EAX));
  /* 127efab0 mov ecx, dword ptr [0x12816ee4] */
  ECX = (r32((uint32_t)(0x12816ee4)));
  /* 127efab6 push ecx */
  push32((uint32_t)(ECX));
  /* 127efab7 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 127efabd push edx */
  push32((uint32_t)(EDX));
  /* 127efabe push 0x100 */
  push32((uint32_t)(0x100u));
  /* 127efac3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 127efac9 push eax */
  push32((uint32_t)(EAX));
  /* 127efaca push 1 */
  push32((uint32_t)(0x1u));
  /* 127efacc call 0x127f1690 */
  push32(0x127efad1u); f_127f1690();
  /* 127efad1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127efad4 push 0 */
  push32((uint32_t)(0x0u));
  /* 127efad6 mov ecx, dword ptr [0x12816ee4] */
  ECX = (r32((uint32_t)(0x12816ee4)));
  /* 127efadc push ecx */
  push32((uint32_t)(ECX));
  /* 127efadd push 0x100 */
  push32((uint32_t)(0x100u));
  /* 127efae2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 127efae8 push edx */
  push32((uint32_t)(EDX));
  /* 127efae9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 127efaee lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 127efaf4 push eax */
  push32((uint32_t)(EAX));
  /* 127efaf5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 127efafa mov ecx, dword ptr [0x12817184] */
  ECX = (r32((uint32_t)(0x12817184)));
  /* 127efb00 push ecx */
  push32((uint32_t)(ECX));
  /* 127efb01 call 0x127f1850 */
  push32(0x127efb06u); f_127f1850();
  /* 127efb06 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127efb09 push 0 */
  push32((uint32_t)(0x0u));
  /* 127efb0b mov edx, dword ptr [0x12816ee4] */
  EDX = (r32((uint32_t)(0x12816ee4)));
  /* 127efb11 push edx */
  push32((uint32_t)(EDX));
  /* 127efb12 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 127efb17 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 127efb1d push eax */
  push32((uint32_t)(EAX));
  /* 127efb1e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 127efb23 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 127efb29 push ecx */
  push32((uint32_t)(ECX));
  /* 127efb2a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 127efb2f mov edx, dword ptr [0x12817184] */
  EDX = (r32((uint32_t)(0x12817184)));
  /* 127efb35 push edx */
  push32((uint32_t)(EDX));
  /* 127efb36 call 0x127f1850 */
  push32(0x127efb3bu); f_127f1850();
  /* 127efb3b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127efb3e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 127efb48 jmp 0x127efb59 */
  goto L_127efb59;
L_127efb4a:;
  /* 127efb4a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127efb50 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127efb53 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_127efb59:;
  /* 127efb59 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127efb63 jae 0x127efc14 */
  if (!C.cf) goto L_127efc14;
  /* 127efb69 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127efb6f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127efb71 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 127efb79 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 127efb7c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127efb7e je 0x127efbb6 */
  if (C.zf) goto L_127efbb6;
  /* 127efb80 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127efb86 mov cl, byte ptr [eax + 0x12817081] */
  CL = (r8((uint32_t)(EAX + 0x12817081)));
  /* 127efb8c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 127efb8f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127efb95 mov byte ptr [edx + 0x12817081], cl */
  w8((uint32_t)(EDX + 0x12817081), (CL));
  /* 127efb9b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127efba1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127efba7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 127efbae mov byte ptr [eax + 0x12816f80], dl */
  w8((uint32_t)(EAX + 0x12816f80), (DL));
  /* 127efbb4 jmp 0x127efc0f */
  goto L_127efc0f;
L_127efbb6:;
  /* 127efbb6 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127efbbc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127efbbe mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 127efbc6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 127efbc9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127efbcb je 0x127efc02 */
  if (C.zf) goto L_127efc02;
  /* 127efbcd mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127efbd3 mov al, byte ptr [edx + 0x12817081] */
  AL = (r8((uint32_t)(EDX + 0x12817081)));
  /* 127efbd9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 127efbdb mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127efbe1 mov byte ptr [ecx + 0x12817081], al */
  w8((uint32_t)(ECX + 0x12817081), (AL));
  /* 127efbe7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127efbed mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127efbf3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 127efbfa mov byte ptr [edx + 0x12816f80], cl */
  w8((uint32_t)(EDX + 0x12816f80), (CL));
  /* 127efc00 jmp 0x127efc0f */
  goto L_127efc0f;
L_127efc02:;
  /* 127efc02 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127efc08 mov byte ptr [edx + 0x12816f80], 0 */
  w8((uint32_t)(EDX + 0x12816f80), (0x0u));
L_127efc0f:;
  /* 127efc0f jmp 0x127efb4a */
  goto L_127efb4a;
L_127efc14:;
  /* 127efc14 jmp 0x127efcde */
  goto L_127efcde;
L_127efc19:;
  /* 127efc19 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 127efc23 jmp 0x127efc34 */
  goto L_127efc34;
L_127efc25:;
  /* 127efc25 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127efc2b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127efc2e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_127efc34:;
  /* 127efc34 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127efc3e jae 0x127efcde */
  if (!C.cf) goto L_127efcde;
  /* 127efc44 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127efc4b jb 0x127efc88 */
  if (C.cf) goto L_127efc88;
  /* 127efc4d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127efc54 ja 0x127efc88 */
  if ((!C.cf&&!C.zf)) goto L_127efc88;
  /* 127efc56 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127efc5c mov dl, byte ptr [ecx + 0x12817081] */
  DL = (r8((uint32_t)(ECX + 0x12817081)));
  /* 127efc62 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 127efc65 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127efc6b mov byte ptr [eax + 0x12817081], dl */
  w8((uint32_t)(EAX + 0x12817081), (DL));
  /* 127efc71 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127efc77 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127efc7a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127efc80 mov byte ptr [edx + 0x12816f80], cl */
  w8((uint32_t)(EDX + 0x12816f80), (CL));
  /* 127efc86 jmp 0x127efcd9 */
  goto L_127efcd9;
L_127efc88:;
  /* 127efc88 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127efc8f jb 0x127efccc */
  if (C.cf) goto L_127efccc;
  /* 127efc91 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127efc98 ja 0x127efccc */
  if ((!C.cf&&!C.zf)) goto L_127efccc;
  /* 127efc9a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127efca0 mov cl, byte ptr [eax + 0x12817081] */
  CL = (r8((uint32_t)(EAX + 0x12817081)));
  /* 127efca6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 127efca9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127efcaf mov byte ptr [edx + 0x12817081], cl */
  w8((uint32_t)(EDX + 0x12817081), (CL));
  /* 127efcb5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127efcbb sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127efcbe mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127efcc4 mov byte ptr [ecx + 0x12816f80], al */
  w8((uint32_t)(ECX + 0x12816f80), (AL));
  /* 127efcca jmp 0x127efcd9 */
  goto L_127efcd9;
L_127efccc:;
  /* 127efccc mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127efcd2 mov byte ptr [edx + 0x12816f80], 0 */
  w8((uint32_t)(EDX + 0x12816f80), (0x0u));
L_127efcd9:;
  /* 127efcd9 jmp 0x127efc25 */
  goto L_127efc25;
L_127efcde:;
  /* 127efcde mov esp, ebp */
  ESP = (EBP);
  /* 127efce0 pop ebp */
  EBP = (pop32());
  /* 127efce1 ret  */
  ESPCHK(0x127ef9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fcf0 @ 0x127efcf0 (23 bytes, 9 insns) */
void f_127efcf0(void) {
  FTRACE(0x127efcf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127efcf0 push ebp */
  push32((uint32_t)(EBP));
  /* 127efcf1 mov ebp, esp */
  EBP = (ESP);
  /* 127efcf3 cmp dword ptr [0x12816f6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12816f6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127efcfa je 0x127efd03 */
  if (C.zf) goto L_127efd03;
  /* 127efcfc mov eax, dword ptr [0x12816ee4] */
  EAX = (r32((uint32_t)(0x12816ee4)));
  /* 127efd01 jmp 0x127efd05 */
  goto L_127efd05;
L_127efd03:;
  /* 127efd03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127efd05:;
  /* 127efd05 pop ebp */
  EBP = (pop32());
  /* 127efd06 ret  */
  ESPCHK(0x127efcf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd10 @ 0x127efd10 (34 bytes, 10 insns) */
void f_127efd10(void) {
  FTRACE(0x127efd10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127efd10 push ebp */
  push32((uint32_t)(EBP));
  /* 127efd11 mov ebp, esp */
  EBP = (ESP);
  /* 127efd13 cmp dword ptr [0x12817330], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12817330))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127efd1a jne 0x127efd30 */
  if (!C.zf) goto L_127efd30;
  /* 127efd1c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 127efd1e call 0x127ef530 */
  push32(0x127efd23u); f_127ef530();
  /* 127efd23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127efd26 mov dword ptr [0x12817330], 1 */
  w32((uint32_t)(0x12817330), (0x1u));
L_127efd30:;
  /* 127efd30 pop ebp */
  EBP = (pop32());
  /* 127efd31 ret  */
  ESPCHK(0x127efd10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd40 @ 0x127efd40 (664 bytes, 265 insns) [15 switch table(s)] */
void f_127efd40(void) {
  FTRACE(0x127efd40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127efd40 push ebp */
  push32((uint32_t)(EBP));
  /* 127efd41 mov ebp, esp */
  EBP = (ESP);
  /* 127efd43 push edi */
  push32((uint32_t)(EDI));
  /* 127efd44 push esi */
  push32((uint32_t)(ESI));
  /* 127efd45 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 127efd48 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127efd4b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 127efd4e mov eax, ecx */
  EAX = (ECX);
  /* 127efd50 mov edx, ecx */
  EDX = (ECX);
  /* 127efd52 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127efd54 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127efd56 jbe 0x127efd60 */
  if ((C.cf||C.zf)) goto L_127efd60;
  /* 127efd58 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127efd5a jb 0x127efed8 */
  if (C.cf) goto L_127efed8;
L_127efd60:;
  /* 127efd60 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 127efd66 jne 0x127efd7c */
  if (!C.zf) goto L_127efd7c;
  /* 127efd68 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 127efd6b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 127efd6e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127efd71 jb 0x127efd9c */
  if (C.cf) goto L_127efd9c;
  /* 127efd73 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 127efd75 jmp dword ptr [edx*4 + 0x127efe88] */
  switch (EDX) {
    case 0: goto L_127efe98;
    case 1: goto L_127efea0;
    case 2: goto L_127efeac;
    case 3: goto L_127efec0;
    default: x86_unimpl("switch@0x127efd75 out of table"); return;
  }
L_127efd7c:;
  /* 127efd7c mov eax, edi */
  EAX = (EDI);
  /* 127efd7e mov edx, 3 */
  EDX = (0x3u);
  /* 127efd83 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127efd86 jb 0x127efd94 */
  if (C.cf) goto L_127efd94;
  /* 127efd88 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 127efd8b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127efd8d jmp dword ptr [eax*4 + 0x127efda0] */
  switch (EAX) {
    case 1: goto L_127efdb0;
    case 2: goto L_127efddc;
    case 3: goto L_127efe00;
    default: x86_unimpl("switch@0x127efd8d out of table"); return;
  }
L_127efd94:;
  /* 127efd94 jmp dword ptr [ecx*4 + 0x127efe98] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x127efe98)))); return;
  /* 127efd9b nop  */
  /* nop */
L_127efd9c:;
  /* 127efd9c jmp dword ptr [ecx*4 + 0x127efe1c] */
  switch (ECX) {
    case 0: goto L_127efe7f;
    case 1: goto L_127efe6c;
    case 2: goto L_127efe64;
    case 3: goto L_127efe5c;
    case 4: goto L_127efe54;
    case 5: goto L_127efe4c;
    case 6: goto L_127efe44;
    case 7: goto L_127efe3c;
    default: x86_unimpl("switch@0x127efd9c out of table"); return;
  }
  /* 127efda3 nop  */
  /* nop */
L_127efdb0:;
  /* 127efdb0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 127efdb2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 127efdb4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 127efdb6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 127efdb9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 127efdbc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 127efdbf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 127efdc2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 127efdc5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 127efdc8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 127efdcb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127efdce jb 0x127efd9c */
  if (C.cf) goto L_127efd9c;
  /* 127efdd0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 127efdd2 jmp dword ptr [edx*4 + 0x127efe88] */
  switch (EDX) {
    case 0: goto L_127efe98;
    case 1: goto L_127efea0;
    case 2: goto L_127efeac;
    case 3: goto L_127efec0;
    default: x86_unimpl("switch@0x127efdd2 out of table"); return;
  }
  /* 127efdd9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_127efddc:;
  /* 127efddc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 127efdde mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 127efde0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 127efde2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 127efde5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 127efde8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 127efdeb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 127efdee add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 127efdf1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127efdf4 jb 0x127efd9c */
  if (C.cf) goto L_127efd9c;
  /* 127efdf6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 127efdf8 jmp dword ptr [edx*4 + 0x127efe88] */
  switch (EDX) {
    case 0: goto L_127efe98;
    case 1: goto L_127efea0;
    case 2: goto L_127efeac;
    case 3: goto L_127efec0;
    default: x86_unimpl("switch@0x127efdf8 out of table"); return;
  }
  /* 127efdff nop  */
  /* nop */
L_127efe00:;
  /* 127efe00 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 127efe02 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 127efe04 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 127efe06 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 127efe07 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 127efe0a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 127efe0b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127efe0e jb 0x127efd9c */
  if (C.cf) goto L_127efd9c;
  /* 127efe10 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 127efe12 jmp dword ptr [edx*4 + 0x127efe88] */
  switch (EDX) {
    case 0: goto L_127efe98;
    case 1: goto L_127efea0;
    case 2: goto L_127efeac;
    case 3: goto L_127efec0;
    default: x86_unimpl("switch@0x127efe12 out of table"); return;
  }
  /* 127efe19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_127efe3c:;
  /* 127efe3c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 127efe40 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_127efe44:;
  /* 127efe44 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 127efe48 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_127efe4c:;
  /* 127efe4c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 127efe50 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_127efe54:;
  /* 127efe54 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 127efe58 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_127efe5c:;
  /* 127efe5c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 127efe60 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_127efe64:;
  /* 127efe64 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 127efe68 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_127efe6c:;
  /* 127efe6c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 127efe70 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 127efe74 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 127efe7b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 127efe7d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_127efe7f:;
  /* 127efe7f jmp dword ptr [edx*4 + 0x127efe88] */
  switch (EDX) {
    case 0: goto L_127efe98;
    case 1: goto L_127efea0;
    case 2: goto L_127efeac;
    case 3: goto L_127efec0;
    default: x86_unimpl("switch@0x127efe7f out of table"); return;
  }
  /* 127efe86 mov edi, edi */
  EDI = (EDI);
L_127efe98:;
  /* 127efe98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127efe9b pop esi */
  ESI = (pop32());
  /* 127efe9c pop edi */
  EDI = (pop32());
  /* 127efe9d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 127efe9e ret  */
  ESPCHK(0x127efd40u, _esp0);
  ESP += 4; return;
  /* 127efe9f nop  */
  /* nop */
L_127efea0:;
  /* 127efea0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 127efea2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 127efea4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127efea7 pop esi */
  ESI = (pop32());
  /* 127efea8 pop edi */
  EDI = (pop32());
  /* 127efea9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 127efeaa ret  */
  ESPCHK(0x127efd40u, _esp0);
  ESP += 4; return;
  /* 127efeab nop  */
  /* nop */
L_127efeac:;
  /* 127efeac mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 127efeae mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 127efeb0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 127efeb3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 127efeb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127efeb9 pop esi */
  ESI = (pop32());
  /* 127efeba pop edi */
  EDI = (pop32());
  /* 127efebb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 127efebc ret  */
  ESPCHK(0x127efd40u, _esp0);
  ESP += 4; return;
  /* 127efebd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_127efec0:;
  /* 127efec0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 127efec2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 127efec4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 127efec7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 127efeca mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 127efecd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 127efed0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127efed3 pop esi */
  ESI = (pop32());
  /* 127efed4 pop edi */
  EDI = (pop32());
  /* 127efed5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 127efed6 ret  */
  ESPCHK(0x127efd40u, _esp0);
  ESP += 4; return;
  /* 127efed7 nop  */
  /* nop */
L_127efed8:;
  /* 127efed8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 127efedc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 127efee0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 127efee6 jne 0x127eff0c */
  if (!C.zf) goto L_127eff0c;
  /* 127efee8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 127efeeb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 127efeee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127efef1 jb 0x127eff00 */
  if (C.cf) goto L_127eff00;
  /* 127efef3 std  */
  C.df=1;
  /* 127efef4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 127efef6 cld  */
  C.df=0;
  /* 127efef7 jmp dword ptr [edx*4 + 0x127f0020] */
  switch (EDX) {
    case 0: goto L_127f0030;
    case 1: goto L_127f0038;
    case 2: goto L_127f0048;
    case 3: goto L_127f005c;
    default: x86_unimpl("switch@0x127efef7 out of table"); return;
  }
  /* 127efefe mov edi, edi */
  EDI = (EDI);
L_127eff00:;
  /* 127eff00 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 127eff02 jmp dword ptr [ecx*4 + 0x127effd0] */
  switch (ECX) {
    case 0: goto L_127f0017;
    default: x86_unimpl("switch@0x127eff02 out of table"); return;
  }
  /* 127eff09 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_127eff0c:;
  /* 127eff0c mov eax, edi */
  EAX = (EDI);
  /* 127eff0e mov edx, 3 */
  EDX = (0x3u);
  /* 127eff13 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127eff16 jb 0x127eff24 */
  if (C.cf) goto L_127eff24;
  /* 127eff18 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 127eff1b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127eff1d jmp dword ptr [eax*4 + 0x127eff28] */
  switch (EAX) {
    case 1: goto L_127eff38;
    case 2: goto L_127eff58;
    case 3: goto L_127eff80;
    default: x86_unimpl("switch@0x127eff1d out of table"); return;
  }
L_127eff24:;
  /* 127eff24 jmp dword ptr [ecx*4 + 0x127f0020] */
  switch (ECX) {
    case 0: goto L_127f0030;
    case 1: goto L_127f0038;
    case 2: goto L_127f0048;
    case 3: goto L_127f005c;
    default: x86_unimpl("switch@0x127eff24 out of table"); return;
  }
  /* 127eff2b nop  */
  /* nop */
L_127eff38:;
  /* 127eff38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 127eff3b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 127eff3d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 127eff40 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 127eff41 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 127eff44 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 127eff45 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127eff48 jb 0x127eff00 */
  if (C.cf) goto L_127eff00;
  /* 127eff4a std  */
  C.df=1;
  /* 127eff4b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 127eff4d cld  */
  C.df=0;
  /* 127eff4e jmp dword ptr [edx*4 + 0x127f0020] */
  switch (EDX) {
    case 0: goto L_127f0030;
    case 1: goto L_127f0038;
    case 2: goto L_127f0048;
    case 3: goto L_127f005c;
    default: x86_unimpl("switch@0x127eff4e out of table"); return;
  }
  /* 127eff55 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_127eff58:;
  /* 127eff58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 127eff5b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 127eff5d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 127eff60 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 127eff63 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 127eff66 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 127eff69 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 127eff6c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 127eff6f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127eff72 jb 0x127eff00 */
  if (C.cf) goto L_127eff00;
  /* 127eff74 std  */
  C.df=1;
  /* 127eff75 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 127eff77 cld  */
  C.df=0;
  /* 127eff78 jmp dword ptr [edx*4 + 0x127f0020] */
  switch (EDX) {
    case 0: goto L_127f0030;
    case 1: goto L_127f0038;
    case 2: goto L_127f0048;
    case 3: goto L_127f005c;
    default: x86_unimpl("switch@0x127eff78 out of table"); return;
  }
  /* 127eff7f nop  */
  /* nop */
L_127eff80:;
  /* 127eff80 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 127eff83 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 127eff85 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 127eff88 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 127eff8b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 127eff8e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 127eff91 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 127eff94 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 127eff97 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 127eff9a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 127eff9d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127effa0 jb 0x127eff00 */
  if (C.cf) goto L_127eff00;
  /* 127effa6 std  */
  C.df=1;
  /* 127effa7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 127effa9 cld  */
  C.df=0;
  /* 127effaa jmp dword ptr [edx*4 + 0x127f0020] */
  switch (EDX) {
    case 0: goto L_127f0030;
    case 1: goto L_127f0038;
    case 2: goto L_127f0048;
    case 3: goto L_127f005c;
    default: x86_unimpl("switch@0x127effaa out of table"); return;
  }
  /* 127effb1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 127effb4 aam 0xff */
  x86_unimpl("aam @ 0x127effb4");
  /* 127effb6 jle 0x127effca */
  if ((C.zf||C.sf!=C.of)) goto L_127effca;
  /* 127effb8 fdiv st(7), st(0) */
  FPU_ST(7) = FPU_ST(7) / FPU_ST(0);
  /* 127effba jle 0x127effce */
  if ((C.zf||C.sf!=C.of)) goto L_127effce;
  /* 127effbc in al, 0xff */
  x86_unimpl("in @ 0x127effbc");
  /* 127effbe jle 0x127effd2 */
  if ((C.zf||C.sf!=C.of)) goto L_127effd2;
  /* 127effc0 in al, dx */
  x86_unimpl("in @ 0x127effc0");
  /* 127effc2 jle 0x127effd6 */
  if ((C.zf||C.sf!=C.of)) goto L_127effd6;
  /* 127effc4 hlt  */
  x86_unimpl("hlt @ 0x127effc4");
  /* 127effc6 jle 0x127effda */
  if ((C.zf||C.sf!=C.of)) goto L_127effda;
  /* 127effc8 cld  */
  C.df=0;
L_127effca:;
  /* 127effca jle 0x127effde */
  if ((C.zf||C.sf!=C.of)) goto L_127effde;
  /* 127effcc add al, 0 */
  { uint32_t _a=(AL),_b=(0x0u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_127effce:;
  /* 127effce jg 0x127effe2 */
  if ((!C.zf&&C.sf==C.of)) goto L_127effe2;
  /* 127effd4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 127effd8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 127effdc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 127effe0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 127effe4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 127effe8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 127effec mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 127efff0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 127efff4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 127efff8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 127efffc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 127f0000 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 127f0004 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 127f0008 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 127f000c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 127f0013 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 127f0015 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_127f0017:;
  /* 127f0017 jmp dword ptr [edx*4 + 0x127f0020] */
  switch (EDX) {
    case 0: goto L_127f0030;
    case 1: goto L_127f0038;
    case 2: goto L_127f0048;
    case 3: goto L_127f005c;
    default: x86_unimpl("switch@0x127f0017 out of table"); return;
  }
  /* 127f001e mov edi, edi */
  EDI = (EDI);
L_127f0030:;
  /* 127f0030 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f0033 pop esi */
  ESI = (pop32());
  /* 127f0034 pop edi */
  EDI = (pop32());
  /* 127f0035 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 127f0036 ret  */
  ESPCHK(0x127efd40u, _esp0);
  ESP += 4; return;
  /* 127f0037 nop  */
  /* nop */
L_127f0038:;
  /* 127f0038 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 127f003b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 127f003e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f0041 pop esi */
  ESI = (pop32());
  /* 127f0042 pop edi */
  EDI = (pop32());
  /* 127f0043 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 127f0044 ret  */
  ESPCHK(0x127efd40u, _esp0);
  ESP += 4; return;
  /* 127f0045 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_127f0048:;
  /* 127f0048 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 127f004b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 127f004e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 127f0051 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 127f0054 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f0057 pop esi */
  ESI = (pop32());
  /* 127f0058 pop edi */
  EDI = (pop32());
  /* 127f0059 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 127f005a ret  */
  ESPCHK(0x127efd40u, _esp0);
  ESP += 4; return;
  /* 127f005b nop  */
  /* nop */
L_127f005c:;
  /* 127f005c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 127f005f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 127f0062 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 127f0065 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 127f0068 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 127f006b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 127f006e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f0071 pop esi */
  ESI = (pop32());
  /* 127f0072 pop edi */
  EDI = (pop32());
  /* 127f0073 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 127f0074 ret  */
  ESPCHK(0x127efd40u, _esp0);
  ESP += 4; return;
L_127effd2: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x127effd2 (unresolved jump table)"); return;
L_127effd6: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x127effd6 (unresolved jump table)"); return;
L_127effda: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x127effda (unresolved jump table)"); return;
L_127effde: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x127effde (unresolved jump table)"); return;
L_127effe2: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x127effe2 (unresolved jump table)"); return;
}

/* __aulldiv @ 0x127f0080 (104 bytes, 43 insns) */
void f_127f0080(void) {
  FTRACE(0x127f0080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f0080 push ebx */
  push32((uint32_t)(EBX));
  /* 127f0081 push esi */
  push32((uint32_t)(ESI));
  /* 127f0082 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 127f0086 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f0088 jne 0x127f00a2 */
  if (!C.zf) goto L_127f00a2;
  /* 127f008a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 127f008e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 127f0092 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127f0094 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127f0096 mov ebx, eax */
  EBX = (EAX);
  /* 127f0098 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 127f009c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127f009e mov edx, ebx */
  EDX = (EBX);
  /* 127f00a0 jmp 0x127f00e3 */
  goto L_127f00e3;
L_127f00a2:;
  /* 127f00a2 mov ecx, eax */
  ECX = (EAX);
  /* 127f00a4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 127f00a8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 127f00ac mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_127f00b0:;
  /* 127f00b0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 127f00b2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 127f00b4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 127f00b6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 127f00b8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127f00ba jne 0x127f00b0 */
  if (!C.zf) goto L_127f00b0;
  /* 127f00bc div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127f00be mov esi, eax */
  ESI = (EAX);
  /* 127f00c0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 127f00c4 mov ecx, eax */
  ECX = (EAX);
  /* 127f00c6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 127f00ca mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 127f00cc add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f00ce jb 0x127f00de */
  if (C.cf) goto L_127f00de;
  /* 127f00d0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f00d4 ja 0x127f00de */
  if ((!C.cf&&!C.zf)) goto L_127f00de;
  /* 127f00d6 jb 0x127f00df */
  if (C.cf) goto L_127f00df;
  /* 127f00d8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f00dc jbe 0x127f00df */
  if ((C.cf||C.zf)) goto L_127f00df;
L_127f00de:;
  /* 127f00de dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_127f00df:;
  /* 127f00df xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127f00e1 mov eax, esi */
  EAX = (ESI);
L_127f00e3:;
  /* 127f00e3 pop esi */
  ESI = (pop32());
  /* 127f00e4 pop ebx */
  EBX = (pop32());
  /* 127f00e5 ret 0x10 */
  ESPCHK(0x127f0080u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x127f00f0 (117 bytes, 44 insns) */
void f_127f00f0(void) {
  FTRACE(0x127f00f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f00f0 push ebx */
  push32((uint32_t)(EBX));
  /* 127f00f1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 127f00f5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f00f7 jne 0x127f0111 */
  if (!C.zf) goto L_127f0111;
  /* 127f00f9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 127f00fd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 127f0101 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127f0103 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127f0105 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 127f0109 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127f010b mov eax, edx */
  EAX = (EDX);
  /* 127f010d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127f010f jmp 0x127f0161 */
  goto L_127f0161;
L_127f0111:;
  /* 127f0111 mov ecx, eax */
  ECX = (EAX);
  /* 127f0113 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 127f0117 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 127f011b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_127f011f:;
  /* 127f011f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 127f0121 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 127f0123 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 127f0125 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 127f0127 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127f0129 jne 0x127f011f */
  if (!C.zf) goto L_127f011f;
  /* 127f012b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127f012d mov ecx, eax */
  ECX = (EAX);
  /* 127f012f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 127f0133 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 127f0134 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 127f0138 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f013a jb 0x127f014a */
  if (C.cf) goto L_127f014a;
  /* 127f013c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f0140 ja 0x127f014a */
  if ((!C.cf&&!C.zf)) goto L_127f014a;
  /* 127f0142 jb 0x127f0152 */
  if (C.cf) goto L_127f0152;
  /* 127f0144 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f0148 jbe 0x127f0152 */
  if ((C.cf||C.zf)) goto L_127f0152;
L_127f014a:;
  /* 127f014a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f014e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_127f0152:;
  /* 127f0152 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f0156 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f015a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 127f015c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 127f015e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_127f0161:;
  /* 127f0161 pop ebx */
  EBX = (pop32());
  /* 127f0162 ret 0x10 */
  ESPCHK(0x127f00f0u, _esp0);
  ESP += 20; return;
}

/* FUN_10010170 @ 0x127f0170 (628 bytes, 214 insns) */
void f_127f0170(void) {
  FTRACE(0x127f0170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f0170 push ebp */
  push32((uint32_t)(EBP));
  /* 127f0171 mov ebp, esp */
  EBP = (ESP);
  /* 127f0173 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f0176 push ebx */
  push32((uint32_t)(EBX));
  /* 127f0177 push esi */
  push32((uint32_t)(ESI));
  /* 127f0178 push edi */
  push32((uint32_t)(EDI));
L_127f0179:;
  /* 127f0179 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f017d jne 0x127f019d */
  if (!C.zf) goto L_127f019d;
  /* 127f017f push 0x12811188 */
  push32((uint32_t)(0x12811188u));
  /* 127f0184 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f0186 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 127f0188 push 0x1281117c */
  push32((uint32_t)(0x1281117cu));
  /* 127f018d push 2 */
  push32((uint32_t)(0x2u));
  /* 127f018f call 0x127e8520 */
  push32(0x127f0194u); f_127e8520();
  /* 127f0194 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f0197 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f019a jne 0x127f019d */
  if (!C.zf) goto L_127f019d;
  /* 127f019c int3  */
  x86_unimpl("int3 @ 0x127f019c");
L_127f019d:;
  /* 127f019d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f019f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f01a1 jne 0x127f0179 */
  if (!C.zf) goto L_127f0179;
  /* 127f01a3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f01a6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127f01a9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f01ac mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 127f01af mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 127f01b2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f01b5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 127f01b8 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 127f01be test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f01c0 je 0x127f01cf */
  if (C.zf) goto L_127f01cf;
  /* 127f01c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f01c5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 127f01c8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 127f01cb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127f01cd je 0x127f01e5 */
  if (C.zf) goto L_127f01e5;
L_127f01cf:;
  /* 127f01cf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f01d2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 127f01d5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 127f01d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f01da mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 127f01dd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f01e0 jmp 0x127f03dd */
  goto L_127f03dd;
L_127f01e5:;
  /* 127f01e5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f01e8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 127f01eb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 127f01ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f01f0 je 0x127f023c */
  if (C.zf) goto L_127f023c;
  /* 127f01f2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f01f5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 127f01fc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f01ff mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 127f0202 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 127f0205 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f0207 je 0x127f0225 */
  if (C.zf) goto L_127f0225;
  /* 127f0209 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f020c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f020f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 127f0212 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 127f0214 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f0217 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 127f021a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 127f021d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f0220 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 127f0223 jmp 0x127f023c */
  goto L_127f023c;
L_127f0225:;
  /* 127f0225 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f0228 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 127f022b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 127f022e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f0231 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 127f0234 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f0237 jmp 0x127f03dd */
  goto L_127f03dd;
L_127f023c:;
  /* 127f023c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f023f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 127f0242 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 127f0245 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f0248 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 127f024b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f024e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 127f0251 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 127f0254 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f0257 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 127f025a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f025d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 127f0264 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127f026b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f026e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 127f0271 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f0274 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 127f0277 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 127f027d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127f027f jne 0x127f02af */
  if (!C.zf) goto L_127f02af;
  /* 127f0281 cmp dword ptr [ebp - 8], 0x12814140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12814140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f0288 je 0x127f0293 */
  if (C.zf) goto L_127f0293;
  /* 127f028a cmp dword ptr [ebp - 8], 0x12814160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12814160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f0291 jne 0x127f02a3 */
  if (!C.zf) goto L_127f02a3;
L_127f0293:;
  /* 127f0293 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f0296 push edx */
  push32((uint32_t)(EDX));
  /* 127f0297 call 0x127f20e0 */
  push32(0x127f029cu); f_127f20e0();
  /* 127f029c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f029f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f02a1 jne 0x127f02af */
  if (!C.zf) goto L_127f02af;
L_127f02a3:;
  /* 127f02a3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f02a6 push eax */
  push32((uint32_t)(EAX));
  /* 127f02a7 call 0x127f2010 */
  push32(0x127f02acu); f_127f2010();
  /* 127f02ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127f02af:;
  /* 127f02af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f02b2 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 127f02b5 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 127f02bb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f02bd je 0x127f039b */
  if (C.zf) goto L_127f039b;
L_127f02c3:;
  /* 127f02c3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f02c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f02c9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 127f02cb sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f02ce test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f02d0 jge 0x127f02f3 */
  if ((C.sf==C.of)) goto L_127f02f3;
  /* 127f02d2 push 0x1281113c */
  push32((uint32_t)(0x1281113cu));
  /* 127f02d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f02d9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 127f02de push 0x1281117c */
  push32((uint32_t)(0x1281117cu));
  /* 127f02e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f02e5 call 0x127e8520 */
  push32(0x127f02eau); f_127e8520();
  /* 127f02ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f02ed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f02f0 jne 0x127f02f3 */
  if (!C.zf) goto L_127f02f3;
  /* 127f02f2 int3  */
  x86_unimpl("int3 @ 0x127f02f2");
L_127f02f3:;
  /* 127f02f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f02f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f02f7 jne 0x127f02c3 */
  if (!C.zf) goto L_127f02c3;
  /* 127f02f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f02fc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f02ff mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 127f0301 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f0304 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127f0307 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f030a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 127f030d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f0310 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f0313 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 127f0315 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f0318 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 127f031b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f031e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f0321 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 127f0324 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f0328 jle 0x127f0346 */
  if ((C.zf||C.sf!=C.of)) goto L_127f0346;
  /* 127f032a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f032d push ecx */
  push32((uint32_t)(ECX));
  /* 127f032e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f0331 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 127f0334 push eax */
  push32((uint32_t)(EAX));
  /* 127f0335 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f0338 push ecx */
  push32((uint32_t)(ECX));
  /* 127f0339 call 0x127f1d00 */
  push32(0x127f033eu); f_127f1d00();
  /* 127f033e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f0341 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127f0344 jmp 0x127f038e */
  goto L_127f038e;
L_127f0346:;
  /* 127f0346 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f034a je 0x127f0369 */
  if (C.zf) goto L_127f0369;
  /* 127f034c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f034f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 127f0352 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f0355 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 127f0358 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f035b mov ecx, dword ptr [edx*4 + 0x128171e0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x128171e0)));
  /* 127f0362 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f0364 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 127f0367 jmp 0x127f0370 */
  goto L_127f0370;
L_127f0369:;
  /* 127f0369 mov dword ptr [ebp - 0x14], 0x12813a60 */
  w32((uint32_t)(EBP + -0x14), (0x12813a60u));
L_127f0370:;
  /* 127f0370 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f0373 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 127f0377 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 127f037a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f037c je 0x127f038e */
  if (C.zf) goto L_127f038e;
  /* 127f037e push 2 */
  push32((uint32_t)(0x2u));
  /* 127f0380 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f0382 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f0385 push ecx */
  push32((uint32_t)(ECX));
  /* 127f0386 call 0x127f1bb0 */
  push32(0x127f038bu); f_127f1bb0();
  /* 127f038b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127f038e:;
  /* 127f038e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f0391 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 127f0394 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 127f0397 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 127f0399 jmp 0x127f03b9 */
  goto L_127f03b9;
L_127f039b:;
  /* 127f039b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 127f03a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f03a5 push edx */
  push32((uint32_t)(EDX));
  /* 127f03a6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 127f03a9 push eax */
  push32((uint32_t)(EAX));
  /* 127f03aa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f03ad push ecx */
  push32((uint32_t)(ECX));
  /* 127f03ae call 0x127f1d00 */
  push32(0x127f03b3u); f_127f1d00();
  /* 127f03b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f03b6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_127f03b9:;
  /* 127f03b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f03bc cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f03bf je 0x127f03d5 */
  if (C.zf) goto L_127f03d5;
  /* 127f03c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f03c4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 127f03c7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 127f03ca mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f03cd mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 127f03d0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f03d3 jmp 0x127f03dd */
  goto L_127f03dd;
L_127f03d5:;
  /* 127f03d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f03d8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_127f03dd:;
  /* 127f03dd pop edi */
  EDI = (pop32());
  /* 127f03de pop esi */
  ESI = (pop32());
  /* 127f03df pop ebx */
  EBX = (pop32());
  /* 127f03e0 mov esp, ebp */
  ESP = (EBP);
  /* 127f03e2 pop ebp */
  EBP = (pop32());
  /* 127f03e3 ret  */
  ESPCHK(0x127f0170u, _esp0);
  ESP += 4; return;
}

/* FUN_100103f0 @ 0x127f03f0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_127f03f0(void) {
  FTRACE(0x127f03f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f03f0 push ebp */
  push32((uint32_t)(EBP));
  /* 127f03f1 mov ebp, esp */
  EBP = (ESP);
  /* 127f03f3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f03f9 push ebx */
  push32((uint32_t)(EBX));
  /* 127f03fa push esi */
  push32((uint32_t)(ESI));
  /* 127f03fb push edi */
  push32((uint32_t)(EDI));
  /* 127f03fc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 127f0403 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 127f040d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_127f0414:;
  /* 127f0414 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f0417 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127f0419 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 127f041c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 127f0420 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f0423 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f0426 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 127f0429 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f042b je 0x127f1007 */
  if (C.zf) goto L_127f1007;
  /* 127f0431 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f0438 jl 0x127f1007 */
  if ((C.sf!=C.of)) goto L_127f1007;
  /* 127f043e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 127f0442 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f0445 jl 0x127f0466 */
  if ((C.sf!=C.of)) goto L_127f0466;
  /* 127f0447 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 127f044b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f044e jg 0x127f0466 */
  if ((!C.zf&&C.sf==C.of)) goto L_127f0466;
  /* 127f0450 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 127f0454 movsx ecx, byte ptr [eax + 0x12811174] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x12811174))));
  /* 127f045b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 127f045e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 127f0464 jmp 0x127f0470 */
  goto L_127f0470;
L_127f0466:;
  /* 127f0466 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_127f0470:;
  /* 127f0470 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 127f0476 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 127f0479 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f047c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127f047f movsx edx, byte ptr [ecx + eax*8 + 0x12811194] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x12811194))));
  /* 127f0487 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 127f048a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 127f048d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127f0490 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 127f0496 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f049d ja 0x127f1002 */
  if ((!C.cf&&!C.zf)) goto L_127f1002;
  /* 127f04a3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 127f04a9 jmp dword ptr [ecx*4 + 0x127f1014] */
  switch (ECX) {
    case 0: goto L_127f04b0;
    case 1: goto L_127f054a;
    case 2: goto L_127f058c;
    case 3: goto L_127f05fb;
    case 4: goto L_127f0653;
    case 5: goto L_127f0662;
    case 6: goto L_127f06ae;
    case 7: goto L_127f0741;
    case 8: goto L_127f05d8;
    case 9: goto L_127f05e3;
    case 10: goto L_127f05ce;
    case 11: goto L_127f05c3;
    case 12: goto L_127f05ee;
    case 13: goto L_127f05f6;
    default: x86_unimpl("switch@0x127f04a9 out of table"); return;
  }
L_127f04b0:;
  /* 127f04b0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 127f04b7 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 127f04ba and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 127f04c0 mov eax, dword ptr [0x12813c98] */
  EAX = (r32((uint32_t)(0x12813c98)));
  /* 127f04c5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127f04c7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 127f04cb and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 127f04d1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127f04d3 je 0x127f052d */
  if (C.zf) goto L_127f052d;
  /* 127f04d5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 127f04db push edx */
  push32((uint32_t)(EDX));
  /* 127f04dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f04df push eax */
  push32((uint32_t)(EAX));
  /* 127f04e0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 127f04e4 push ecx */
  push32((uint32_t)(ECX));
  /* 127f04e5 call 0x127f1120 */
  push32(0x127f04eau); f_127f1120();
  /* 127f04ea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f04ed mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f04f0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127f04f2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 127f04f5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f04f8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f04fb mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_127f04fe:;
  /* 127f04fe movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 127f0502 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f0504 jne 0x127f0527 */
  if (!C.zf) goto L_127f0527;
  /* 127f0506 push 0x12811214 */
  push32((uint32_t)(0x12811214u));
  /* 127f050b push 0 */
  push32((uint32_t)(0x0u));
  /* 127f050d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 127f0512 push 0x12811208 */
  push32((uint32_t)(0x12811208u));
  /* 127f0517 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f0519 call 0x127e8520 */
  push32(0x127f051eu); f_127e8520();
  /* 127f051e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f0521 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f0524 jne 0x127f0527 */
  if (!C.zf) goto L_127f0527;
  /* 127f0526 int3  */
  x86_unimpl("int3 @ 0x127f0526");
L_127f0527:;
  /* 127f0527 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f0529 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f052b jne 0x127f04fe */
  if (!C.zf) goto L_127f04fe;
L_127f052d:;
  /* 127f052d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 127f0533 push ecx */
  push32((uint32_t)(ECX));
  /* 127f0534 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f0537 push edx */
  push32((uint32_t)(EDX));
  /* 127f0538 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 127f053c push eax */
  push32((uint32_t)(EAX));
  /* 127f053d call 0x127f1120 */
  push32(0x127f0542u); f_127f1120();
  /* 127f0542 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f0545 jmp 0x127f1002 */
  goto L_127f1002;
L_127f054a:;
  /* 127f054a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 127f0551 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f0554 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 127f055a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 127f0560 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 127f0566 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 127f056c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 127f056f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127f0576 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 127f0580 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 127f0587 jmp 0x127f1002 */
  goto L_127f1002;
L_127f058c:;
  /* 127f058c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 127f0590 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 127f0596 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 127f059c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f059f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 127f05a5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f05ac ja 0x127f05f6 */
  if ((!C.cf&&!C.zf)) goto L_127f05f6;
  /* 127f05ae mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 127f05b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f05b6 mov al, byte ptr [ecx + 0x127f104c] */
  AL = (r8((uint32_t)(ECX + 0x127f104c)));
  /* 127f05bc jmp dword ptr [eax*4 + 0x127f1034] */
  switch (EAX) {
    case 0: goto L_127f05d8;
    case 1: goto L_127f05e3;
    case 2: goto L_127f05ce;
    case 3: goto L_127f05c3;
    case 4: goto L_127f05ee;
    case 5: goto L_127f05f6;
    default: x86_unimpl("switch@0x127f05bc out of table"); return;
  }
L_127f05c3:;
  /* 127f05c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f05c6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 127f05c9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127f05cc jmp 0x127f05f6 */
  goto L_127f05f6;
L_127f05ce:;
  /* 127f05ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f05d1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 127f05d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127f05d6 jmp 0x127f05f6 */
  goto L_127f05f6;
L_127f05d8:;
  /* 127f05d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f05db or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 127f05de mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127f05e1 jmp 0x127f05f6 */
  goto L_127f05f6;
L_127f05e3:;
  /* 127f05e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f05e6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 127f05e9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127f05ec jmp 0x127f05f6 */
  goto L_127f05f6;
L_127f05ee:;
  /* 127f05ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f05f1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 127f05f3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127f05f6:;
  /* 127f05f6 jmp 0x127f1002 */
  goto L_127f1002;
L_127f05fb:;
  /* 127f05fb movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 127f05ff cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f0602 jne 0x127f0637 */
  if (!C.zf) goto L_127f0637;
  /* 127f0604 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 127f0607 push edx */
  push32((uint32_t)(EDX));
  /* 127f0608 call 0x127f1230 */
  push32(0x127f060du); f_127f1230();
  /* 127f060d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f0610 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 127f0616 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f061d jge 0x127f0635 */
  if ((C.sf==C.of)) goto L_127f0635;
  /* 127f061f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f0622 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 127f0624 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127f0627 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 127f062d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 127f062f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_127f0635:;
  /* 127f0635 jmp 0x127f064e */
  goto L_127f064e;
L_127f0637:;
  /* 127f0637 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 127f063d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f0640 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 127f0644 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 127f0648 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_127f064e:;
  /* 127f064e jmp 0x127f1002 */
  goto L_127f1002;
L_127f0653:;
  /* 127f0653 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 127f065d jmp 0x127f1002 */
  goto L_127f1002;
L_127f0662:;
  /* 127f0662 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 127f0666 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f0669 jne 0x127f0692 */
  if (!C.zf) goto L_127f0692;
  /* 127f066b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 127f066e push eax */
  push32((uint32_t)(EAX));
  /* 127f066f call 0x127f1230 */
  push32(0x127f0674u); f_127f1230();
  /* 127f0674 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f0677 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 127f067d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f0684 jge 0x127f0690 */
  if ((C.sf==C.of)) goto L_127f0690;
  /* 127f0686 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_127f0690:;
  /* 127f0690 jmp 0x127f06a9 */
  goto L_127f06a9;
L_127f0692:;
  /* 127f0692 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 127f0698 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f069b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 127f069f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 127f06a3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_127f06a9:;
  /* 127f06a9 jmp 0x127f1002 */
  goto L_127f1002;
L_127f06ae:;
  /* 127f06ae movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 127f06b2 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 127f06b8 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 127f06be sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f06c1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 127f06c7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f06ce ja 0x127f073c */
  if ((!C.cf&&!C.zf)) goto L_127f073c;
  /* 127f06d0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 127f06d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f06d8 mov al, byte ptr [ecx + 0x127f1071] */
  AL = (r8((uint32_t)(ECX + 0x127f1071)));
  /* 127f06de jmp dword ptr [eax*4 + 0x127f105d] */
  switch (EAX) {
    case 0: goto L_127f06f0;
    case 1: goto L_127f0729;
    case 2: goto L_127f06e5;
    case 3: goto L_127f0733;
    case 4: goto L_127f073c;
    default: x86_unimpl("switch@0x127f06de out of table"); return;
  }
L_127f06e5:;
  /* 127f06e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f06e8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 127f06eb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127f06ee jmp 0x127f073c */
  goto L_127f073c;
L_127f06f0:;
  /* 127f06f0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f06f3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127f06f6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f06f9 jne 0x127f071b */
  if (!C.zf) goto L_127f071b;
  /* 127f06fb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f06fe movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 127f0702 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f0705 jne 0x127f071b */
  if (!C.zf) goto L_127f071b;
  /* 127f0707 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f070a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f070d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 127f0710 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f0713 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 127f0716 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127f0719 jmp 0x127f0727 */
  goto L_127f0727;
L_127f071b:;
  /* 127f071b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 127f0722 jmp 0x127f04b0 */
  goto L_127f04b0;
L_127f0727:;
  /* 127f0727 jmp 0x127f073c */
  goto L_127f073c;
L_127f0729:;
  /* 127f0729 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f072c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 127f072e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127f0731 jmp 0x127f073c */
  goto L_127f073c;
L_127f0733:;
  /* 127f0733 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f0736 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 127f0739 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_127f073c:;
  /* 127f073c jmp 0x127f1002 */
  goto L_127f1002;
L_127f0741:;
  /* 127f0741 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 127f0745 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 127f074b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 127f0751 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f0754 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 127f075a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f0761 ja 0x127f0e27 */
  if ((!C.cf&&!C.zf)) goto L_127f0e27;
  /* 127f0767 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 127f076d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127f076f mov cl, byte ptr [edx + 0x127f10dc] */
  CL = (r8((uint32_t)(EDX + 0x127f10dc)));
  /* 127f0775 jmp dword ptr [ecx*4 + 0x127f10a0] */
  switch (ECX) {
    case 0: goto L_127f077c;
    case 1: goto L_127f0a10;
    case 2: goto L_127f08a0;
    case 3: goto L_127f0b49;
    case 4: goto L_127f080b;
    case 5: goto L_127f0791;
    case 6: goto L_127f0b1b;
    case 7: goto L_127f0a20;
    case 8: goto L_127f09c5;
    case 9: goto L_127f0b95;
    case 10: goto L_127f0b3f;
    case 11: goto L_127f08b6;
    case 12: goto L_127f0b33;
    case 13: goto L_127f0b55;
    case 14: goto L_127f0e27;
    default: x86_unimpl("switch@0x127f0775 out of table"); return;
  }
L_127f077c:;
  /* 127f077c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f077f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 127f0784 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f0786 jne 0x127f0791 */
  if (!C.zf) goto L_127f0791;
  /* 127f0788 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f078b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 127f078e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_127f0791:;
  /* 127f0791 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f0794 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 127f079a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f079c je 0x127f07d7 */
  if (C.zf) goto L_127f07d7;
  /* 127f079e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 127f07a1 push eax */
  push32((uint32_t)(EAX));
  /* 127f07a2 call 0x127f1270 */
  push32(0x127f07a7u); f_127f1270();
  /* 127f07a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f07aa mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 127f07ae mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 127f07b2 push ecx */
  push32((uint32_t)(ECX));
  /* 127f07b3 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 127f07b9 push edx */
  push32((uint32_t)(EDX));
  /* 127f07ba call 0x127f2350 */
  push32(0x127f07bfu); f_127f2350();
  /* 127f07bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f07c2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 127f07c5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f07c9 jge 0x127f07d5 */
  if ((C.sf==C.of)) goto L_127f07d5;
  /* 127f07cb mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_127f07d5:;
  /* 127f07d5 jmp 0x127f07fd */
  goto L_127f07fd;
L_127f07d7:;
  /* 127f07d7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 127f07da push eax */
  push32((uint32_t)(EAX));
  /* 127f07db call 0x127f1230 */
  push32(0x127f07e0u); f_127f1230();
  /* 127f07e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f07e3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 127f07ea mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 127f07f0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 127f07f6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_127f07fd:;
  /* 127f07fd lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 127f0803 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 127f0806 jmp 0x127f0e27 */
  goto L_127f0e27;
L_127f080b:;
  /* 127f080b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 127f080e push eax */
  push32((uint32_t)(EAX));
  /* 127f080f call 0x127f1230 */
  push32(0x127f0814u); f_127f1230();
  /* 127f0814 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f0817 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 127f081d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f0824 je 0x127f0832 */
  if (C.zf) goto L_127f0832;
  /* 127f0826 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 127f082c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f0830 jne 0x127f084c */
  if (!C.zf) goto L_127f084c;
L_127f0832:;
  /* 127f0832 mov edx, dword ptr [0x12813fb0] */
  EDX = (r32((uint32_t)(0x12813fb0)));
  /* 127f0838 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 127f083b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 127f083e push eax */
  push32((uint32_t)(EAX));
  /* 127f083f call 0x127ec290 */
  push32(0x127f0844u); f_127ec290();
  /* 127f0844 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f0847 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 127f084a jmp 0x127f089b */
  goto L_127f089b;
L_127f084c:;
  /* 127f084c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f084f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 127f0855 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127f0857 je 0x127f087c */
  if (C.zf) goto L_127f087c;
  /* 127f0859 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 127f085f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 127f0862 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 127f0865 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 127f086b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 127f086e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 127f0870 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 127f0873 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 127f087a jmp 0x127f089b */
  goto L_127f089b;
L_127f087c:;
  /* 127f087c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 127f0883 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 127f0889 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 127f088c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 127f088f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 127f0895 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 127f0898 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_127f089b:;
  /* 127f089b jmp 0x127f0e27 */
  goto L_127f0e27;
L_127f08a0:;
  /* 127f08a0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f08a3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 127f08a9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127f08ab jne 0x127f08b6 */
  if (!C.zf) goto L_127f08b6;
  /* 127f08ad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f08b0 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 127f08b3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_127f08b6:;
  /* 127f08b6 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f08bd jne 0x127f08cb */
  if (!C.zf) goto L_127f08cb;
  /* 127f08bf mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 127f08c9 jmp 0x127f08d7 */
  goto L_127f08d7;
L_127f08cb:;
  /* 127f08cb mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 127f08d1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_127f08d7:;
  /* 127f08d7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 127f08dd mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 127f08e3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 127f08e6 push edx */
  push32((uint32_t)(EDX));
  /* 127f08e7 call 0x127f1230 */
  push32(0x127f08ecu); f_127f1230();
  /* 127f08ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f08ef mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 127f08f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f08f5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 127f08fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f08fc je 0x127f0966 */
  if (C.zf) goto L_127f0966;
  /* 127f08fe cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f0902 jne 0x127f090d */
  if (!C.zf) goto L_127f090d;
  /* 127f0904 mov ecx, dword ptr [0x12813fb4] */
  ECX = (r32((uint32_t)(0x12813fb4)));
  /* 127f090a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_127f090d:;
  /* 127f090d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 127f0914 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 127f0917 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_127f091d:;
  /* 127f091d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 127f0923 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 127f0929 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f092c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 127f0932 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f0934 je 0x127f0956 */
  if (C.zf) goto L_127f0956;
  /* 127f0936 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 127f093c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f093e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 127f0941 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f0943 je 0x127f0956 */
  if (C.zf) goto L_127f0956;
  /* 127f0945 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 127f094b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f094e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 127f0954 jmp 0x127f091d */
  goto L_127f091d;
L_127f0956:;
  /* 127f0956 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 127f095c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f095f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 127f0961 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 127f0964 jmp 0x127f09c0 */
  goto L_127f09c0;
L_127f0966:;
  /* 127f0966 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f096a jne 0x127f0974 */
  if (!C.zf) goto L_127f0974;
  /* 127f096c mov eax, dword ptr [0x12813fb0] */
  EAX = (r32((uint32_t)(0x12813fb0)));
  /* 127f0971 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_127f0974:;
  /* 127f0974 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127f0977 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_127f097d:;
  /* 127f097d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 127f0983 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 127f0989 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f098c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 127f0992 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f0994 je 0x127f09b4 */
  if (C.zf) goto L_127f09b4;
  /* 127f0996 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 127f099c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127f099f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f09a1 je 0x127f09b4 */
  if (C.zf) goto L_127f09b4;
  /* 127f09a3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 127f09a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f09ac mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 127f09b2 jmp 0x127f097d */
  goto L_127f097d;
L_127f09b4:;
  /* 127f09b4 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 127f09ba sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f09bd mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_127f09c0:;
  /* 127f09c0 jmp 0x127f0e27 */
  goto L_127f0e27;
L_127f09c5:;
  /* 127f09c5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 127f09c8 push edx */
  push32((uint32_t)(EDX));
  /* 127f09c9 call 0x127f1230 */
  push32(0x127f09ceu); f_127f1230();
  /* 127f09ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f09d1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 127f09d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f09da and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 127f09dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f09df je 0x127f09f3 */
  if (C.zf) goto L_127f09f3;
  /* 127f09e1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 127f09e7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 127f09ee mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 127f09f1 jmp 0x127f0a01 */
  goto L_127f0a01;
L_127f09f3:;
  /* 127f09f3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 127f09f9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 127f09ff mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_127f0a01:;
  /* 127f0a01 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 127f0a0b jmp 0x127f0e27 */
  goto L_127f0e27;
L_127f0a10:;
  /* 127f0a10 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 127f0a17 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 127f0a1a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 127f0a1d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_127f0a20:;
  /* 127f0a20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f0a23 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 127f0a25 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127f0a28 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 127f0a2e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 127f0a31 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f0a38 jge 0x127f0a46 */
  if ((C.sf==C.of)) goto L_127f0a46;
  /* 127f0a3a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 127f0a44 jmp 0x127f0a62 */
  goto L_127f0a62;
L_127f0a46:;
  /* 127f0a46 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f0a4d jne 0x127f0a62 */
  if (!C.zf) goto L_127f0a62;
  /* 127f0a4f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 127f0a53 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f0a56 jne 0x127f0a62 */
  if (!C.zf) goto L_127f0a62;
  /* 127f0a58 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_127f0a62:;
  /* 127f0a62 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f0a65 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f0a68 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 127f0a6b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f0a6e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f0a71 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127f0a73 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 127f0a76 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 127f0a7c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 127f0a82 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f0a85 push ecx */
  push32((uint32_t)(ECX));
  /* 127f0a86 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 127f0a8c push edx */
  push32((uint32_t)(EDX));
  /* 127f0a8d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 127f0a91 push eax */
  push32((uint32_t)(EAX));
  /* 127f0a92 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127f0a95 push ecx */
  push32((uint32_t)(ECX));
  /* 127f0a96 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 127f0a9c push edx */
  push32((uint32_t)(EDX));
  /* 127f0a9d call dword ptr [0x128143a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128143a0))), 0x127f0aa3u);
  /* 127f0aa3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f0aa6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f0aa9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 127f0aae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f0ab0 je 0x127f0ac8 */
  if (C.zf) goto L_127f0ac8;
  /* 127f0ab2 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f0ab9 jne 0x127f0ac8 */
  if (!C.zf) goto L_127f0ac8;
  /* 127f0abb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127f0abe push ecx */
  push32((uint32_t)(ECX));
  /* 127f0abf call dword ptr [0x128143ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x128143ac))), 0x127f0ac5u);
  /* 127f0ac5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127f0ac8:;
  /* 127f0ac8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 127f0acc cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f0acf jne 0x127f0aea */
  if (!C.zf) goto L_127f0aea;
  /* 127f0ad1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f0ad4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 127f0ad9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f0adb jne 0x127f0aea */
  if (!C.zf) goto L_127f0aea;
  /* 127f0add mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127f0ae0 push ecx */
  push32((uint32_t)(ECX));
  /* 127f0ae1 call dword ptr [0x128143a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128143a4))), 0x127f0ae7u);
  /* 127f0ae7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127f0aea:;
  /* 127f0aea mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 127f0aed movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127f0af0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f0af3 jne 0x127f0b07 */
  if (!C.zf) goto L_127f0b07;
  /* 127f0af5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f0af8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 127f0afb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127f0afe mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 127f0b01 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f0b04 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_127f0b07:;
  /* 127f0b07 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 127f0b0a push eax */
  push32((uint32_t)(EAX));
  /* 127f0b0b call 0x127ec290 */
  push32(0x127f0b10u); f_127ec290();
  /* 127f0b10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f0b13 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 127f0b16 jmp 0x127f0e27 */
  goto L_127f0e27;
L_127f0b1b:;
  /* 127f0b1b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f0b1e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 127f0b21 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127f0b24 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 127f0b2e jmp 0x127f0bb5 */
  goto L_127f0bb5;
L_127f0b33:;
  /* 127f0b33 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 127f0b3d jmp 0x127f0bb5 */
  goto L_127f0bb5;
L_127f0b3f:;
  /* 127f0b3f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_127f0b49:;
  /* 127f0b49 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 127f0b53 jmp 0x127f0b5f */
  goto L_127f0b5f;
L_127f0b55:;
  /* 127f0b55 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_127f0b5f:;
  /* 127f0b5f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 127f0b69 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f0b6c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 127f0b72 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f0b74 je 0x127f0b93 */
  if (C.zf) goto L_127f0b93;
  /* 127f0b76 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 127f0b7d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 127f0b83 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f0b86 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 127f0b8c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_127f0b93:;
  /* 127f0b93 jmp 0x127f0bb5 */
  goto L_127f0bb5;
L_127f0b95:;
  /* 127f0b95 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 127f0b9f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f0ba2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 127f0ba8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127f0baa je 0x127f0bb5 */
  if (C.zf) goto L_127f0bb5;
  /* 127f0bac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f0baf or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 127f0bb2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_127f0bb5:;
  /* 127f0bb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f0bb8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 127f0bbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f0bbf je 0x127f0bde */
  if (C.zf) goto L_127f0bde;
  /* 127f0bc1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 127f0bc4 push ecx */
  push32((uint32_t)(ECX));
  /* 127f0bc5 call 0x127f1250 */
  push32(0x127f0bcau); f_127f1250();
  /* 127f0bca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f0bcd mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 127f0bd3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 127f0bd9 jmp 0x127f0c6f */
  goto L_127f0c6f;
L_127f0bde:;
  /* 127f0bde mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f0be1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 127f0be4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f0be6 je 0x127f0c30 */
  if (C.zf) goto L_127f0c30;
  /* 127f0be8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f0beb and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 127f0bee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f0bf0 je 0x127f0c10 */
  if (C.zf) goto L_127f0c10;
  /* 127f0bf2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 127f0bf5 push ecx */
  push32((uint32_t)(ECX));
  /* 127f0bf6 call 0x127f1230 */
  push32(0x127f0bfbu); f_127f1230();
  /* 127f0bfb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f0bfe movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 127f0c01 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127f0c02 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 127f0c08 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 127f0c0e jmp 0x127f0c2e */
  goto L_127f0c2e;
L_127f0c10:;
  /* 127f0c10 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 127f0c13 push edx */
  push32((uint32_t)(EDX));
  /* 127f0c14 call 0x127f1230 */
  push32(0x127f0c19u); f_127f1230();
  /* 127f0c19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f0c1c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f0c21 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127f0c22 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 127f0c28 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_127f0c2e:;
  /* 127f0c2e jmp 0x127f0c6f */
  goto L_127f0c6f;
L_127f0c30:;
  /* 127f0c30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f0c33 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 127f0c36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f0c38 je 0x127f0c55 */
  if (C.zf) goto L_127f0c55;
  /* 127f0c3a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 127f0c3d push ecx */
  push32((uint32_t)(ECX));
  /* 127f0c3e call 0x127f1230 */
  push32(0x127f0c43u); f_127f1230();
  /* 127f0c43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f0c46 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127f0c47 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 127f0c4d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 127f0c53 jmp 0x127f0c6f */
  goto L_127f0c6f;
L_127f0c55:;
  /* 127f0c55 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 127f0c58 push edx */
  push32((uint32_t)(EDX));
  /* 127f0c59 call 0x127f1230 */
  push32(0x127f0c5eu); f_127f1230();
  /* 127f0c5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f0c61 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127f0c63 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 127f0c69 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_127f0c6f:;
  /* 127f0c6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f0c72 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 127f0c75 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f0c77 je 0x127f0cb7 */
  if (C.zf) goto L_127f0cb7;
  /* 127f0c79 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f0c80 jg 0x127f0cb7 */
  if ((!C.zf&&C.sf==C.of)) goto L_127f0cb7;
  /* 127f0c82 jl 0x127f0c8d */
  if ((C.sf!=C.of)) goto L_127f0c8d;
  /* 127f0c84 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f0c8b jae 0x127f0cb7 */
  if (!C.cf) goto L_127f0cb7;
L_127f0c8d:;
  /* 127f0c8d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 127f0c93 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 127f0c95 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 127f0c9b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f0c9e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 127f0ca0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 127f0ca6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 127f0cac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f0caf or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 127f0cb2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127f0cb5 jmp 0x127f0ccf */
  goto L_127f0ccf;
L_127f0cb7:;
  /* 127f0cb7 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 127f0cbd mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 127f0cc3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 127f0cc9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_127f0ccf:;
  /* 127f0ccf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f0cd2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 127f0cd8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f0cda jne 0x127f0cf7 */
  if (!C.zf) goto L_127f0cf7;
  /* 127f0cdc mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 127f0ce2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 127f0ce8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 127f0ceb mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 127f0cf1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_127f0cf7:;
  /* 127f0cf7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f0cfe jge 0x127f0d0c */
  if ((C.sf==C.of)) goto L_127f0d0c;
  /* 127f0d00 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 127f0d0a jmp 0x127f0d15 */
  goto L_127f0d15;
L_127f0d0c:;
  /* 127f0d0c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f0d0f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 127f0d12 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_127f0d15:;
  /* 127f0d15 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 127f0d1b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 127f0d21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f0d23 jne 0x127f0d2c */
  if (!C.zf) goto L_127f0d2c;
  /* 127f0d25 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_127f0d2c:;
  /* 127f0d2c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 127f0d2f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_127f0d32:;
  /* 127f0d32 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 127f0d38 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 127f0d3e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f0d41 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 127f0d47 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f0d49 jg 0x127f0d5f */
  if ((!C.zf&&C.sf==C.of)) goto L_127f0d5f;
  /* 127f0d4b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 127f0d51 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 127f0d57 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127f0d59 je 0x127f0de0 */
  if (C.zf) goto L_127f0de0;
L_127f0d5f:;
  /* 127f0d5f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 127f0d65 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127f0d66 push edx */
  push32((uint32_t)(EDX));
  /* 127f0d67 push eax */
  push32((uint32_t)(EAX));
  /* 127f0d68 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 127f0d6e push edx */
  push32((uint32_t)(EDX));
  /* 127f0d6f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 127f0d75 push eax */
  push32((uint32_t)(EAX));
  /* 127f0d76 call 0x127f00f0 */
  push32(0x127f0d7bu); f_127f00f0();
  /* 127f0d7b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f0d7e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 127f0d84 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 127f0d8a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127f0d8b push edx */
  push32((uint32_t)(EDX));
  /* 127f0d8c push eax */
  push32((uint32_t)(EAX));
  /* 127f0d8d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 127f0d93 push ecx */
  push32((uint32_t)(ECX));
  /* 127f0d94 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 127f0d9a push edx */
  push32((uint32_t)(EDX));
  /* 127f0d9b call 0x127f0080 */
  push32(0x127f0da0u); f_127f0080();
  /* 127f0da0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 127f0da6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 127f0dac cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f0db3 jle 0x127f0dc7 */
  if ((C.zf||C.sf!=C.of)) goto L_127f0dc7;
  /* 127f0db5 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 127f0dbb add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f0dc1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_127f0dc7:;
  /* 127f0dc7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127f0dca mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 127f0dd0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 127f0dd2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 127f0dd5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f0dd8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 127f0ddb jmp 0x127f0d32 */
  goto L_127f0d32;
L_127f0de0:;
  /* 127f0de0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 127f0de3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f0de6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 127f0de9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 127f0dec add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f0def mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 127f0df2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f0df5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 127f0dfa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f0dfc je 0x127f0e27 */
  if (C.zf) goto L_127f0e27;
  /* 127f0dfe mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127f0e01 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127f0e04 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f0e07 jne 0x127f0e0f */
  if (!C.zf) goto L_127f0e0f;
  /* 127f0e09 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f0e0d jne 0x127f0e27 */
  if (!C.zf) goto L_127f0e27;
L_127f0e0f:;
  /* 127f0e0f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 127f0e12 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f0e15 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 127f0e18 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127f0e1b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 127f0e1e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 127f0e21 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f0e24 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_127f0e27:;
  /* 127f0e27 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f0e2e jne 0x127f1002 */
  if (!C.zf) goto L_127f1002;
  /* 127f0e34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f0e37 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 127f0e3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f0e3c je 0x127f0e8d */
  if (C.zf) goto L_127f0e8d;
  /* 127f0e3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f0e41 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 127f0e47 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127f0e49 je 0x127f0e5b */
  if (C.zf) goto L_127f0e5b;
  /* 127f0e4b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 127f0e52 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 127f0e59 jmp 0x127f0e8d */
  goto L_127f0e8d;
L_127f0e5b:;
  /* 127f0e5b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f0e5e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 127f0e61 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f0e63 je 0x127f0e75 */
  if (C.zf) goto L_127f0e75;
  /* 127f0e65 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 127f0e6c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 127f0e73 jmp 0x127f0e8d */
  goto L_127f0e8d;
L_127f0e75:;
  /* 127f0e75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f0e78 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 127f0e7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f0e7d je 0x127f0e8d */
  if (C.zf) goto L_127f0e8d;
  /* 127f0e7f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 127f0e86 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_127f0e8d:;
  /* 127f0e8d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 127f0e93 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f0e96 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f0e99 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 127f0e9f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f0ea2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 127f0ea5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f0ea7 jne 0x127f0ec5 */
  if (!C.zf) goto L_127f0ec5;
  /* 127f0ea9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 127f0eaf push eax */
  push32((uint32_t)(EAX));
  /* 127f0eb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f0eb3 push ecx */
  push32((uint32_t)(ECX));
  /* 127f0eb4 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 127f0eba push edx */
  push32((uint32_t)(EDX));
  /* 127f0ebb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 127f0ebd call 0x127f11a0 */
  push32(0x127f0ec2u); f_127f11a0();
  /* 127f0ec2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127f0ec5:;
  /* 127f0ec5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 127f0ecb push eax */
  push32((uint32_t)(EAX));
  /* 127f0ecc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f0ecf push ecx */
  push32((uint32_t)(ECX));
  /* 127f0ed0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f0ed3 push edx */
  push32((uint32_t)(EDX));
  /* 127f0ed4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 127f0eda push eax */
  push32((uint32_t)(EAX));
  /* 127f0edb call 0x127f11e0 */
  push32(0x127f0ee0u); f_127f11e0();
  /* 127f0ee0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f0ee3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f0ee6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 127f0ee9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127f0eeb je 0x127f0f13 */
  if (C.zf) goto L_127f0f13;
  /* 127f0eed mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f0ef0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 127f0ef3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f0ef5 jne 0x127f0f13 */
  if (!C.zf) goto L_127f0f13;
  /* 127f0ef7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 127f0efd push eax */
  push32((uint32_t)(EAX));
  /* 127f0efe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f0f01 push ecx */
  push32((uint32_t)(ECX));
  /* 127f0f02 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 127f0f08 push edx */
  push32((uint32_t)(EDX));
  /* 127f0f09 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 127f0f0b call 0x127f11a0 */
  push32(0x127f0f10u); f_127f11a0();
  /* 127f0f10 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127f0f13:;
  /* 127f0f13 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f0f17 je 0x127f0fc1 */
  if (C.zf) goto L_127f0fc1;
  /* 127f0f1d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f0f21 jle 0x127f0fc1 */
  if ((C.zf||C.sf!=C.of)) goto L_127f0fc1;
  /* 127f0f27 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 127f0f2a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 127f0f30 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127f0f33 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_127f0f39:;
  /* 127f0f39 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 127f0f3f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 127f0f45 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f0f48 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 127f0f4e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f0f50 je 0x127f0fbf */
  if (C.zf) goto L_127f0fbf;
  /* 127f0f52 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 127f0f58 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 127f0f5b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 127f0f62 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 127f0f69 push eax */
  push32((uint32_t)(EAX));
  /* 127f0f6a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 127f0f70 push ecx */
  push32((uint32_t)(ECX));
  /* 127f0f71 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 127f0f77 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f0f7a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 127f0f80 call 0x127f2350 */
  push32(0x127f0f85u); f_127f2350();
  /* 127f0f85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f0f88 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 127f0f8e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f0f95 jg 0x127f0f99 */
  if ((!C.zf&&C.sf==C.of)) goto L_127f0f99;
  /* 127f0f97 jmp 0x127f0fbf */
  goto L_127f0fbf;
L_127f0f99:;
  /* 127f0f99 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 127f0f9f push eax */
  push32((uint32_t)(EAX));
  /* 127f0fa0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f0fa3 push ecx */
  push32((uint32_t)(ECX));
  /* 127f0fa4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 127f0faa push edx */
  push32((uint32_t)(EDX));
  /* 127f0fab lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 127f0fb1 push eax */
  push32((uint32_t)(EAX));
  /* 127f0fb2 call 0x127f11e0 */
  push32(0x127f0fb7u); f_127f11e0();
  /* 127f0fb7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f0fba jmp 0x127f0f39 */
  goto L_127f0f39;
L_127f0fbf:;
  /* 127f0fbf jmp 0x127f0fdc */
  goto L_127f0fdc;
L_127f0fc1:;
  /* 127f0fc1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 127f0fc7 push ecx */
  push32((uint32_t)(ECX));
  /* 127f0fc8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f0fcb push edx */
  push32((uint32_t)(EDX));
  /* 127f0fcc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127f0fcf push eax */
  push32((uint32_t)(EAX));
  /* 127f0fd0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127f0fd3 push ecx */
  push32((uint32_t)(ECX));
  /* 127f0fd4 call 0x127f11e0 */
  push32(0x127f0fd9u); f_127f11e0();
  /* 127f0fd9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127f0fdc:;
  /* 127f0fdc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f0fdf and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 127f0fe2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f0fe4 je 0x127f1002 */
  if (C.zf) goto L_127f1002;
  /* 127f0fe6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 127f0fec push eax */
  push32((uint32_t)(EAX));
  /* 127f0fed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f0ff0 push ecx */
  push32((uint32_t)(ECX));
  /* 127f0ff1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 127f0ff7 push edx */
  push32((uint32_t)(EDX));
  /* 127f0ff8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 127f0ffa call 0x127f11a0 */
  push32(0x127f0fffu); f_127f11a0();
  /* 127f0fff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127f1002:;
  /* 127f1002 jmp 0x127f0414 */
  goto L_127f0414;
L_127f1007:;
  /* 127f1007 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 127f100d pop edi */
  EDI = (pop32());
  /* 127f100e pop esi */
  ESI = (pop32());
  /* 127f100f pop ebx */
  EBX = (pop32());
  /* 127f1010 mov esp, ebp */
  ESP = (EBP);
  /* 127f1012 pop ebp */
  EBP = (pop32());
  /* 127f1013 ret  */
  ESPCHK(0x127f03f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011120 @ 0x127f1120 (119 bytes, 44 insns) */
void f_127f1120(void) {
  FTRACE(0x127f1120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f1120 push ebp */
  push32((uint32_t)(EBP));
  /* 127f1121 mov ebp, esp */
  EBP = (ESP);
  /* 127f1123 push ecx */
  push32((uint32_t)(ECX));
  /* 127f1124 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f1127 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 127f112a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f112d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f1130 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 127f1133 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f1136 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f113a jl 0x127f1162 */
  if ((C.sf!=C.of)) goto L_127f1162;
  /* 127f113c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f113f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127f1141 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 127f1144 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 127f1146 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 127f114a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 127f1150 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127f1153 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f1156 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127f1158 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f115b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f115e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 127f1160 jmp 0x127f1175 */
  goto L_127f1175;
L_127f1162:;
  /* 127f1162 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f1165 push edx */
  push32((uint32_t)(EDX));
  /* 127f1166 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f1169 push eax */
  push32((uint32_t)(EAX));
  /* 127f116a call 0x127f0170 */
  push32(0x127f116fu); f_127f0170();
  /* 127f116f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f1172 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127f1175:;
  /* 127f1175 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f1179 jne 0x127f1186 */
  if (!C.zf) goto L_127f1186;
  /* 127f117b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f117e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 127f1184 jmp 0x127f1193 */
  goto L_127f1193;
L_127f1186:;
  /* 127f1186 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f1189 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127f118b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f118e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f1191 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_127f1193:;
  /* 127f1193 mov esp, ebp */
  ESP = (EBP);
  /* 127f1195 pop ebp */
  EBP = (pop32());
  /* 127f1196 ret  */
  ESPCHK(0x127f1120u, _esp0);
  ESP += 4; return;
}

/* FUN_100111a0 @ 0x127f11a0 (53 bytes, 23 insns) */
void f_127f11a0(void) {
  FTRACE(0x127f11a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f11a0 push ebp */
  push32((uint32_t)(EBP));
  /* 127f11a1 mov ebp, esp */
  EBP = (ESP);
L_127f11a3:;
  /* 127f11a3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f11a6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f11a9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f11ac mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 127f11af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f11b1 jle 0x127f11d3 */
  if ((C.zf||C.sf!=C.of)) goto L_127f11d3;
  /* 127f11b3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f11b6 push edx */
  push32((uint32_t)(EDX));
  /* 127f11b7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f11ba push eax */
  push32((uint32_t)(EAX));
  /* 127f11bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f11be push ecx */
  push32((uint32_t)(ECX));
  /* 127f11bf call 0x127f1120 */
  push32(0x127f11c4u); f_127f1120();
  /* 127f11c4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f11c7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f11ca cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f11cd jne 0x127f11d1 */
  if (!C.zf) goto L_127f11d1;
  /* 127f11cf jmp 0x127f11d3 */
  goto L_127f11d3;
L_127f11d1:;
  /* 127f11d1 jmp 0x127f11a3 */
  goto L_127f11a3;
L_127f11d3:;
  /* 127f11d3 pop ebp */
  EBP = (pop32());
  /* 127f11d4 ret  */
  ESPCHK(0x127f11a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100111e0 @ 0x127f11e0 (74 bytes, 31 insns) */
void f_127f11e0(void) {
  FTRACE(0x127f11e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f11e0 push ebp */
  push32((uint32_t)(EBP));
  /* 127f11e1 mov ebp, esp */
  EBP = (ESP);
  /* 127f11e3 push ecx */
  push32((uint32_t)(ECX));
L_127f11e4:;
  /* 127f11e4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f11e7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f11ea sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f11ed mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 127f11f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f11f2 jle 0x127f1226 */
  if ((C.zf||C.sf!=C.of)) goto L_127f1226;
  /* 127f11f4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f11f7 push edx */
  push32((uint32_t)(EDX));
  /* 127f11f8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f11fb push eax */
  push32((uint32_t)(EAX));
  /* 127f11fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f11ff movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127f1202 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127f1205 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f1208 push eax */
  push32((uint32_t)(EAX));
  /* 127f1209 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f120c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f120f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 127f1212 call 0x127f1120 */
  push32(0x127f1217u); f_127f1120();
  /* 127f1217 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f121a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f121d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f1220 jne 0x127f1224 */
  if (!C.zf) goto L_127f1224;
  /* 127f1222 jmp 0x127f1226 */
  goto L_127f1226;
L_127f1224:;
  /* 127f1224 jmp 0x127f11e4 */
  goto L_127f11e4;
L_127f1226:;
  /* 127f1226 mov esp, ebp */
  ESP = (EBP);
  /* 127f1228 pop ebp */
  EBP = (pop32());
  /* 127f1229 ret  */
  ESPCHK(0x127f11e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011230 @ 0x127f1230 (26 bytes, 12 insns) */
void f_127f1230(void) {
  FTRACE(0x127f1230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f1230 push ebp */
  push32((uint32_t)(EBP));
  /* 127f1231 mov ebp, esp */
  EBP = (ESP);
  /* 127f1233 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f1236 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127f1238 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f123b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f123e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 127f1240 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f1243 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127f1245 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 127f1248 pop ebp */
  EBP = (pop32());
  /* 127f1249 ret  */
  ESPCHK(0x127f1230u, _esp0);
  ESP += 4; return;
}

/* FUN_10011250 @ 0x127f1250 (31 bytes, 14 insns) */
void f_127f1250(void) {
  FTRACE(0x127f1250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f1250 push ebp */
  push32((uint32_t)(EBP));
  /* 127f1251 mov ebp, esp */
  EBP = (ESP);
  /* 127f1253 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f1256 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127f1258 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f125b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f125e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 127f1260 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f1263 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127f1265 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f1268 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 127f126a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 127f126d pop ebp */
  EBP = (pop32());
  /* 127f126e ret  */
  ESPCHK(0x127f1250u, _esp0);
  ESP += 4; return;
}

/* FUN_10011270 @ 0x127f1270 (27 bytes, 12 insns) */
void f_127f1270(void) {
  FTRACE(0x127f1270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f1270 push ebp */
  push32((uint32_t)(EBP));
  /* 127f1271 mov ebp, esp */
  EBP = (ESP);
  /* 127f1273 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f1276 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127f1278 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f127b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f127e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 127f1280 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f1283 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127f1285 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 127f1289 pop ebp */
  EBP = (pop32());
  /* 127f128a ret  */
  ESPCHK(0x127f1270u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x127f1290 (145 bytes, 42 insns) */
void f_127f1290(void) {
  FTRACE(0x127f1290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f1290 push ebp */
  push32((uint32_t)(EBP));
  /* 127f1291 mov ebp, esp */
  EBP = (ESP);
  /* 127f1293 push ecx */
  push32((uint32_t)(ECX));
  /* 127f1294 call 0x127f1340 */
  push32(0x127f1299u); f_127f1340();
  /* 127f1299 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f129c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 127f129e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127f12a5 jmp 0x127f12b0 */
  goto L_127f12b0;
L_127f12a7:;
  /* 127f12a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f12aa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f12ad mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_127f12b0:;
  /* 127f12b0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f12b4 jae 0x127f12da */
  if (!C.cf) goto L_127f12da;
  /* 127f12b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f12b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f12bc cmp ecx, dword ptr [eax*8 + 0x12813fb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12813fb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f12c3 jne 0x127f12d8 */
  if (!C.zf) goto L_127f12d8;
  /* 127f12c5 call 0x127f1330 */
  push32(0x127f12cau); f_127f1330();
  /* 127f12ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f12cd mov ecx, dword ptr [edx*8 + 0x12813fbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x12813fbc)));
  /* 127f12d4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 127f12d6 jmp 0x127f131d */
  goto L_127f131d;
L_127f12d8:;
  /* 127f12d8 jmp 0x127f12a7 */
  goto L_127f12a7;
L_127f12da:;
  /* 127f12da cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f12de jb 0x127f12f3 */
  if (C.cf) goto L_127f12f3;
  /* 127f12e0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f12e4 ja 0x127f12f3 */
  if ((!C.cf&&!C.zf)) goto L_127f12f3;
  /* 127f12e6 call 0x127f1330 */
  push32(0x127f12ebu); f_127f1330();
  /* 127f12eb mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 127f12f1 jmp 0x127f131d */
  goto L_127f131d;
L_127f12f3:;
  /* 127f12f3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f12fa jb 0x127f1312 */
  if (C.cf) goto L_127f1312;
  /* 127f12fc cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f1303 ja 0x127f1312 */
  if ((!C.cf&&!C.zf)) goto L_127f1312;
  /* 127f1305 call 0x127f1330 */
  push32(0x127f130au); f_127f1330();
  /* 127f130a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 127f1310 jmp 0x127f131d */
  goto L_127f131d;
L_127f1312:;
  /* 127f1312 call 0x127f1330 */
  push32(0x127f1317u); f_127f1330();
  /* 127f1317 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_127f131d:;
  /* 127f131d mov esp, ebp */
  ESP = (EBP);
  /* 127f131f pop ebp */
  EBP = (pop32());
  /* 127f1320 ret  */
  ESPCHK(0x127f1290u, _esp0);
  ESP += 4; return;
}

/* FUN_10011330 @ 0x127f1330 (13 bytes, 6 insns) */
void f_127f1330(void) {
  FTRACE(0x127f1330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f1330 push ebp */
  push32((uint32_t)(EBP));
  /* 127f1331 mov ebp, esp */
  EBP = (ESP);
  /* 127f1333 call 0x127e8ea0 */
  push32(0x127f1338u); f_127e8ea0();
  /* 127f1338 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f133b pop ebp */
  EBP = (pop32());
  /* 127f133c ret  */
  ESPCHK(0x127f1330u, _esp0);
  ESP += 4; return;
}

/* FUN_10011340 @ 0x127f1340 (13 bytes, 6 insns) */
void f_127f1340(void) {
  FTRACE(0x127f1340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f1340 push ebp */
  push32((uint32_t)(EBP));
  /* 127f1341 mov ebp, esp */
  EBP = (ESP);
  /* 127f1343 call 0x127e8ea0 */
  push32(0x127f1348u); f_127e8ea0();
  /* 127f1348 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f134b pop ebp */
  EBP = (pop32());
  /* 127f134c ret  */
  ESPCHK(0x127f1340u, _esp0);
  ESP += 4; return;
}

/* FUN_10011350 @ 0x127f1350 (664 bytes, 263 insns) [15 switch table(s)] */
void f_127f1350(void) {
  FTRACE(0x127f1350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f1350 push ebp */
  push32((uint32_t)(EBP));
  /* 127f1351 mov ebp, esp */
  EBP = (ESP);
  /* 127f1353 push edi */
  push32((uint32_t)(EDI));
  /* 127f1354 push esi */
  push32((uint32_t)(ESI));
  /* 127f1355 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 127f1358 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f135b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 127f135e mov eax, ecx */
  EAX = (ECX);
  /* 127f1360 mov edx, ecx */
  EDX = (ECX);
  /* 127f1362 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f1364 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f1366 jbe 0x127f1370 */
  if ((C.cf||C.zf)) goto L_127f1370;
  /* 127f1368 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f136a jb 0x127f14e8 */
  if (C.cf) goto L_127f14e8;
L_127f1370:;
  /* 127f1370 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 127f1376 jne 0x127f138c */
  if (!C.zf) goto L_127f138c;
  /* 127f1378 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 127f137b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 127f137e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f1381 jb 0x127f13ac */
  if (C.cf) goto L_127f13ac;
  /* 127f1383 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 127f1385 jmp dword ptr [edx*4 + 0x127f1498] */
  switch (EDX) {
    case 0: goto L_127f14a8;
    case 1: goto L_127f14b0;
    case 2: goto L_127f14bc;
    case 3: goto L_127f14d0;
    default: x86_unimpl("switch@0x127f1385 out of table"); return;
  }
L_127f138c:;
  /* 127f138c mov eax, edi */
  EAX = (EDI);
  /* 127f138e mov edx, 3 */
  EDX = (0x3u);
  /* 127f1393 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f1396 jb 0x127f13a4 */
  if (C.cf) goto L_127f13a4;
  /* 127f1398 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 127f139b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f139d jmp dword ptr [eax*4 + 0x127f13b0] */
  switch (EAX) {
    case 1: goto L_127f13c0;
    case 2: goto L_127f13ec;
    case 3: goto L_127f1410;
    default: x86_unimpl("switch@0x127f139d out of table"); return;
  }
L_127f13a4:;
  /* 127f13a4 jmp dword ptr [ecx*4 + 0x127f14a8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x127f14a8)))); return;
  /* 127f13ab nop  */
  /* nop */
L_127f13ac:;
  /* 127f13ac jmp dword ptr [ecx*4 + 0x127f142c] */
  switch (ECX) {
    case 0: goto L_127f148f;
    case 1: goto L_127f147c;
    case 2: goto L_127f1474;
    case 3: goto L_127f146c;
    case 4: goto L_127f1464;
    case 5: goto L_127f145c;
    case 6: goto L_127f1454;
    case 7: goto L_127f144c;
    default: x86_unimpl("switch@0x127f13ac out of table"); return;
  }
  /* 127f13b3 nop  */
  /* nop */
L_127f13c0:;
  /* 127f13c0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 127f13c2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 127f13c4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 127f13c6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 127f13c9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 127f13cc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 127f13cf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 127f13d2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 127f13d5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 127f13d8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 127f13db cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f13de jb 0x127f13ac */
  if (C.cf) goto L_127f13ac;
  /* 127f13e0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 127f13e2 jmp dword ptr [edx*4 + 0x127f1498] */
  switch (EDX) {
    case 0: goto L_127f14a8;
    case 1: goto L_127f14b0;
    case 2: goto L_127f14bc;
    case 3: goto L_127f14d0;
    default: x86_unimpl("switch@0x127f13e2 out of table"); return;
  }
  /* 127f13e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_127f13ec:;
  /* 127f13ec and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 127f13ee mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 127f13f0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 127f13f2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 127f13f5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 127f13f8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 127f13fb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 127f13fe add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 127f1401 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f1404 jb 0x127f13ac */
  if (C.cf) goto L_127f13ac;
  /* 127f1406 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 127f1408 jmp dword ptr [edx*4 + 0x127f1498] */
  switch (EDX) {
    case 0: goto L_127f14a8;
    case 1: goto L_127f14b0;
    case 2: goto L_127f14bc;
    case 3: goto L_127f14d0;
    default: x86_unimpl("switch@0x127f1408 out of table"); return;
  }
  /* 127f140f nop  */
  /* nop */
L_127f1410:;
  /* 127f1410 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 127f1412 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 127f1414 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 127f1416 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 127f1417 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 127f141a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 127f141b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f141e jb 0x127f13ac */
  if (C.cf) goto L_127f13ac;
  /* 127f1420 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 127f1422 jmp dword ptr [edx*4 + 0x127f1498] */
  switch (EDX) {
    case 0: goto L_127f14a8;
    case 1: goto L_127f14b0;
    case 2: goto L_127f14bc;
    case 3: goto L_127f14d0;
    default: x86_unimpl("switch@0x127f1422 out of table"); return;
  }
  /* 127f1429 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_127f144c:;
  /* 127f144c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 127f1450 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_127f1454:;
  /* 127f1454 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 127f1458 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_127f145c:;
  /* 127f145c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 127f1460 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_127f1464:;
  /* 127f1464 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 127f1468 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_127f146c:;
  /* 127f146c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 127f1470 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_127f1474:;
  /* 127f1474 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 127f1478 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_127f147c:;
  /* 127f147c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 127f1480 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 127f1484 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 127f148b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 127f148d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_127f148f:;
  /* 127f148f jmp dword ptr [edx*4 + 0x127f1498] */
  switch (EDX) {
    case 0: goto L_127f14a8;
    case 1: goto L_127f14b0;
    case 2: goto L_127f14bc;
    case 3: goto L_127f14d0;
    default: x86_unimpl("switch@0x127f148f out of table"); return;
  }
  /* 127f1496 mov edi, edi */
  EDI = (EDI);
L_127f14a8:;
  /* 127f14a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f14ab pop esi */
  ESI = (pop32());
  /* 127f14ac pop edi */
  EDI = (pop32());
  /* 127f14ad leave  */
  ESP = EBP;
  EBP = pop32();
  /* 127f14ae ret  */
  ESPCHK(0x127f1350u, _esp0);
  ESP += 4; return;
  /* 127f14af nop  */
  /* nop */
L_127f14b0:;
  /* 127f14b0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 127f14b2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 127f14b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f14b7 pop esi */
  ESI = (pop32());
  /* 127f14b8 pop edi */
  EDI = (pop32());
  /* 127f14b9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 127f14ba ret  */
  ESPCHK(0x127f1350u, _esp0);
  ESP += 4; return;
  /* 127f14bb nop  */
  /* nop */
L_127f14bc:;
  /* 127f14bc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 127f14be mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 127f14c0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 127f14c3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 127f14c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f14c9 pop esi */
  ESI = (pop32());
  /* 127f14ca pop edi */
  EDI = (pop32());
  /* 127f14cb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 127f14cc ret  */
  ESPCHK(0x127f1350u, _esp0);
  ESP += 4; return;
  /* 127f14cd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_127f14d0:;
  /* 127f14d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 127f14d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 127f14d4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 127f14d7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 127f14da mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 127f14dd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 127f14e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f14e3 pop esi */
  ESI = (pop32());
  /* 127f14e4 pop edi */
  EDI = (pop32());
  /* 127f14e5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 127f14e6 ret  */
  ESPCHK(0x127f1350u, _esp0);
  ESP += 4; return;
  /* 127f14e7 nop  */
  /* nop */
L_127f14e8:;
  /* 127f14e8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 127f14ec lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 127f14f0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 127f14f6 jne 0x127f151c */
  if (!C.zf) goto L_127f151c;
  /* 127f14f8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 127f14fb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 127f14fe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f1501 jb 0x127f1510 */
  if (C.cf) goto L_127f1510;
  /* 127f1503 std  */
  C.df=1;
  /* 127f1504 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 127f1506 cld  */
  C.df=0;
  /* 127f1507 jmp dword ptr [edx*4 + 0x127f1630] */
  switch (EDX) {
    case 0: goto L_127f1640;
    case 1: goto L_127f1648;
    case 2: goto L_127f1658;
    case 3: goto L_127f166c;
    default: x86_unimpl("switch@0x127f1507 out of table"); return;
  }
  /* 127f150e mov edi, edi */
  EDI = (EDI);
L_127f1510:;
  /* 127f1510 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 127f1512 jmp dword ptr [ecx*4 + 0x127f15e0] */
  switch (ECX) {
    case 0: goto L_127f1627;
    default: x86_unimpl("switch@0x127f1512 out of table"); return;
  }
  /* 127f1519 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_127f151c:;
  /* 127f151c mov eax, edi */
  EAX = (EDI);
  /* 127f151e mov edx, 3 */
  EDX = (0x3u);
  /* 127f1523 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f1526 jb 0x127f1534 */
  if (C.cf) goto L_127f1534;
  /* 127f1528 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 127f152b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f152d jmp dword ptr [eax*4 + 0x127f1538] */
  switch (EAX) {
    case 1: goto L_127f1548;
    case 2: goto L_127f1568;
    case 3: goto L_127f1590;
    default: x86_unimpl("switch@0x127f152d out of table"); return;
  }
L_127f1534:;
  /* 127f1534 jmp dword ptr [ecx*4 + 0x127f1630] */
  switch (ECX) {
    case 0: goto L_127f1640;
    case 1: goto L_127f1648;
    case 2: goto L_127f1658;
    case 3: goto L_127f166c;
    default: x86_unimpl("switch@0x127f1534 out of table"); return;
  }
  /* 127f153b nop  */
  /* nop */
L_127f1548:;
  /* 127f1548 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 127f154b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 127f154d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 127f1550 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 127f1551 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 127f1554 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 127f1555 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f1558 jb 0x127f1510 */
  if (C.cf) goto L_127f1510;
  /* 127f155a std  */
  C.df=1;
  /* 127f155b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 127f155d cld  */
  C.df=0;
  /* 127f155e jmp dword ptr [edx*4 + 0x127f1630] */
  switch (EDX) {
    case 0: goto L_127f1640;
    case 1: goto L_127f1648;
    case 2: goto L_127f1658;
    case 3: goto L_127f166c;
    default: x86_unimpl("switch@0x127f155e out of table"); return;
  }
  /* 127f1565 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_127f1568:;
  /* 127f1568 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 127f156b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 127f156d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 127f1570 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 127f1573 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 127f1576 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 127f1579 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f157c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f157f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f1582 jb 0x127f1510 */
  if (C.cf) goto L_127f1510;
  /* 127f1584 std  */
  C.df=1;
  /* 127f1585 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 127f1587 cld  */
  C.df=0;
  /* 127f1588 jmp dword ptr [edx*4 + 0x127f1630] */
  switch (EDX) {
    case 0: goto L_127f1640;
    case 1: goto L_127f1648;
    case 2: goto L_127f1658;
    case 3: goto L_127f166c;
    default: x86_unimpl("switch@0x127f1588 out of table"); return;
  }
  /* 127f158f nop  */
  /* nop */
L_127f1590:;
  /* 127f1590 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 127f1593 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 127f1595 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 127f1598 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 127f159b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 127f159e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 127f15a1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 127f15a4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 127f15a7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f15aa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f15ad cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f15b0 jb 0x127f1510 */
  if (C.cf) goto L_127f1510;
  /* 127f15b6 std  */
  C.df=1;
  /* 127f15b7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 127f15b9 cld  */
  C.df=0;
  /* 127f15ba jmp dword ptr [edx*4 + 0x127f1630] */
  switch (EDX) {
    case 0: goto L_127f1640;
    case 1: goto L_127f1648;
    case 2: goto L_127f1658;
    case 3: goto L_127f166c;
    default: x86_unimpl("switch@0x127f15ba out of table"); return;
  }
  /* 127f15c1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 127f15c4 in al, 0x15 */
  x86_unimpl("in @ 0x127f15c4");
  /* 127f15c6 jg 0x127f15da */
  if ((!C.zf&&C.sf==C.of)) goto L_127f15da;
  /* 127f15c8 in al, dx */
  x86_unimpl("in @ 0x127f15c8");
  /* 127f15c9 adc eax, 0x15f4127f */
  { uint32_t _a=(EAX),_b=(0x15f4127fu),_r=_a+_b+C.cf; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f15ce jg 0x127f15e2 */
  if ((!C.zf&&C.sf==C.of)) goto L_127f15e2;
  /* 127f15d0 cld  */
  C.df=0;
  /* 127f15d1 adc eax, 0x1604127f */
  { uint32_t _a=(EAX),_b=(0x1604127fu),_r=_a+_b+C.cf; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f15d6 jg 0x127f15ea */
  if ((!C.zf&&C.sf==C.of)) goto L_127f15ea;
  /* 127f15d8 or al, 0x16 */
  { uint32_t _r=(AL)|(0x16u); AL = (_r); fl_logic(_r,8); }
L_127f15da:;
  /* 127f15da jg 0x127f15ee */
  if ((!C.zf&&C.sf==C.of)) goto L_127f15ee;
  /* 127f15dc adc al, 0x16 */
  { uint32_t _a=(AL),_b=(0x16u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 127f15de jg 0x127f15f2 */
  if ((!C.zf&&C.sf==C.of)) goto L_127f15f2;
  /* 127f15e4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 127f15e8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 127f15ec mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 127f15f0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 127f15f4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 127f15f8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 127f15fc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 127f1600 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 127f1604 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 127f1608 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 127f160c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 127f1610 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 127f1614 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 127f1618 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 127f161c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 127f1623 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 127f1625 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_127f1627:;
  /* 127f1627 jmp dword ptr [edx*4 + 0x127f1630] */
  switch (EDX) {
    case 0: goto L_127f1640;
    case 1: goto L_127f1648;
    case 2: goto L_127f1658;
    case 3: goto L_127f166c;
    default: x86_unimpl("switch@0x127f1627 out of table"); return;
  }
  /* 127f162e mov edi, edi */
  EDI = (EDI);
L_127f1640:;
  /* 127f1640 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f1643 pop esi */
  ESI = (pop32());
  /* 127f1644 pop edi */
  EDI = (pop32());
  /* 127f1645 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 127f1646 ret  */
  ESPCHK(0x127f1350u, _esp0);
  ESP += 4; return;
  /* 127f1647 nop  */
  /* nop */
L_127f1648:;
  /* 127f1648 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 127f164b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 127f164e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f1651 pop esi */
  ESI = (pop32());
  /* 127f1652 pop edi */
  EDI = (pop32());
  /* 127f1653 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 127f1654 ret  */
  ESPCHK(0x127f1350u, _esp0);
  ESP += 4; return;
  /* 127f1655 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_127f1658:;
  /* 127f1658 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 127f165b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 127f165e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 127f1661 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 127f1664 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f1667 pop esi */
  ESI = (pop32());
  /* 127f1668 pop edi */
  EDI = (pop32());
  /* 127f1669 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 127f166a ret  */
  ESPCHK(0x127f1350u, _esp0);
  ESP += 4; return;
  /* 127f166b nop  */
  /* nop */
L_127f166c:;
  /* 127f166c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 127f166f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 127f1672 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 127f1675 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 127f1678 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 127f167b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 127f167e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f1681 pop esi */
  ESI = (pop32());
  /* 127f1682 pop edi */
  EDI = (pop32());
  /* 127f1683 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 127f1684 ret  */
  ESPCHK(0x127f1350u, _esp0);
  ESP += 4; return;
L_127f15e2: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x127f15e2 (unresolved jump table)"); return;
L_127f15ea: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x127f15ea (unresolved jump table)"); return;
L_127f15ee: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x127f15ee (unresolved jump table)"); return;
L_127f15f2: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x127f15f2 (unresolved jump table)"); return;
}

/* FUN_10011690 @ 0x127f1690 (421 bytes, 148 insns) */
void f_127f1690(void) {
  FTRACE(0x127f1690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f1690 push ebp */
  push32((uint32_t)(EBP));
  /* 127f1691 mov ebp, esp */
  EBP = (ESP);
  /* 127f1693 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 127f1695 push 0x12811230 */
  push32((uint32_t)(0x12811230u));
  /* 127f169a push 0x127f2568 */
  push32((uint32_t)(0x127f2568u));
  /* 127f169f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 127f16a5 push eax */
  push32((uint32_t)(EAX));
  /* 127f16a6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 127f16ad add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f16b0 push ebx */
  push32((uint32_t)(EBX));
  /* 127f16b1 push esi */
  push32((uint32_t)(ESI));
  /* 127f16b2 push edi */
  push32((uint32_t)(EDI));
  /* 127f16b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 127f16b6 cmp dword ptr [0x128159f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128159f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f16bd jne 0x127f170e */
  if (!C.zf) goto L_127f170e;
  /* 127f16bf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 127f16c2 push eax */
  push32((uint32_t)(EAX));
  /* 127f16c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f16c5 push 0x12811228 */
  push32((uint32_t)(0x12811228u));
  /* 127f16ca push 1 */
  push32((uint32_t)(0x1u));
  /* 127f16cc call dword ptr [0x128182e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182e8))), 0x127f16d2u);
  /* 127f16d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f16d4 je 0x127f16e2 */
  if (C.zf) goto L_127f16e2;
  /* 127f16d6 mov dword ptr [0x128159f4], 1 */
  w32((uint32_t)(0x128159f4), (0x1u));
  /* 127f16e0 jmp 0x127f170e */
  goto L_127f170e;
L_127f16e2:;
  /* 127f16e2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 127f16e5 push ecx */
  push32((uint32_t)(ECX));
  /* 127f16e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f16e8 push 0x12811224 */
  push32((uint32_t)(0x12811224u));
  /* 127f16ed push 1 */
  push32((uint32_t)(0x1u));
  /* 127f16ef push 0 */
  push32((uint32_t)(0x0u));
  /* 127f16f1 call dword ptr [0x128182ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182ec))), 0x127f16f7u);
  /* 127f16f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f16f9 je 0x127f1707 */
  if (C.zf) goto L_127f1707;
  /* 127f16fb mov dword ptr [0x128159f4], 2 */
  w32((uint32_t)(0x128159f4), (0x2u));
  /* 127f1705 jmp 0x127f170e */
  goto L_127f170e;
L_127f1707:;
  /* 127f1707 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f1709 jmp 0x127f1838 */
  goto L_127f1838;
L_127f170e:;
  /* 127f170e cmp dword ptr [0x128159f4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x128159f4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f1715 jne 0x127f1745 */
  if (!C.zf) goto L_127f1745;
  /* 127f1717 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f171b jne 0x127f1726 */
  if (!C.zf) goto L_127f1726;
  /* 127f171d mov edx, dword ptr [0x12815a00] */
  EDX = (r32((uint32_t)(0x12815a00)));
  /* 127f1723 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_127f1726:;
  /* 127f1726 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f1729 push eax */
  push32((uint32_t)(EAX));
  /* 127f172a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f172d push ecx */
  push32((uint32_t)(ECX));
  /* 127f172e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f1731 push edx */
  push32((uint32_t)(EDX));
  /* 127f1732 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f1735 push eax */
  push32((uint32_t)(EAX));
  /* 127f1736 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 127f1739 push ecx */
  push32((uint32_t)(ECX));
  /* 127f173a call dword ptr [0x128182ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182ec))), 0x127f1740u);
  /* 127f1740 jmp 0x127f1838 */
  goto L_127f1838;
L_127f1745:;
  /* 127f1745 cmp dword ptr [0x128159f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x128159f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f174c jne 0x127f1836 */
  if (!C.zf) goto L_127f1836;
  /* 127f1752 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f1756 jne 0x127f1761 */
  if (!C.zf) goto L_127f1761;
  /* 127f1758 mov edx, dword ptr [0x12815a10] */
  EDX = (r32((uint32_t)(0x12815a10)));
  /* 127f175e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_127f1761:;
  /* 127f1761 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f1763 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f1765 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f1768 push eax */
  push32((uint32_t)(EAX));
  /* 127f1769 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f176c push ecx */
  push32((uint32_t)(ECX));
  /* 127f176d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 127f1770 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 127f1772 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f1774 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 127f1777 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f177a push edx */
  push32((uint32_t)(EDX));
  /* 127f177b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127f177e push eax */
  push32((uint32_t)(EAX));
  /* 127f177f call dword ptr [0x128182f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182f0))), 0x127f1785u);
  /* 127f1785 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 127f1788 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f178c jne 0x127f1795 */
  if (!C.zf) goto L_127f1795;
  /* 127f178e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f1790 jmp 0x127f1838 */
  goto L_127f1838;
L_127f1795:;
  /* 127f1795 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127f179c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 127f179f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 127f17a1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f17a4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 127f17a6 call 0x127ec600 */
  push32(0x127f17abu); f_127ec600();
  /* 127f17ab mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 127f17ae mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 127f17b1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127f17b4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 127f17b7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 127f17ba shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 127f17bc push edx */
  push32((uint32_t)(EDX));
  /* 127f17bd push 0 */
  push32((uint32_t)(0x0u));
  /* 127f17bf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127f17c2 push eax */
  push32((uint32_t)(EAX));
  /* 127f17c3 call 0x127ed1d0 */
  push32(0x127f17c8u); f_127ed1d0();
  /* 127f17c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f17cb mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 127f17d2 jmp 0x127f17eb */
  goto L_127f17eb;
  /* 127f17d4 mov eax, 1 */
  EAX = (0x1u);
  /* 127f17d9 ret  */
  ESPCHK(0x127f1690u, _esp0);
  ESP += 4; return;
  /* 127f17da mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 127f17dd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 127f17e4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_127f17eb:;
  /* 127f17eb cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f17ef jne 0x127f17f5 */
  if (!C.zf) goto L_127f17f5;
  /* 127f17f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f17f3 jmp 0x127f1838 */
  goto L_127f1838;
L_127f17f5:;
  /* 127f17f5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127f17f8 push ecx */
  push32((uint32_t)(ECX));
  /* 127f17f9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 127f17fc push edx */
  push32((uint32_t)(EDX));
  /* 127f17fd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f1800 push eax */
  push32((uint32_t)(EAX));
  /* 127f1801 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f1804 push ecx */
  push32((uint32_t)(ECX));
  /* 127f1805 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f1807 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127f180a push edx */
  push32((uint32_t)(EDX));
  /* 127f180b call dword ptr [0x128182f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182f0))), 0x127f1811u);
  /* 127f1811 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 127f1814 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f1818 jne 0x127f181e */
  if (!C.zf) goto L_127f181e;
  /* 127f181a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f181c jmp 0x127f1838 */
  goto L_127f1838;
L_127f181e:;
  /* 127f181e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f1821 push eax */
  push32((uint32_t)(EAX));
  /* 127f1822 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 127f1825 push ecx */
  push32((uint32_t)(ECX));
  /* 127f1826 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 127f1829 push edx */
  push32((uint32_t)(EDX));
  /* 127f182a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f182d push eax */
  push32((uint32_t)(EAX));
  /* 127f182e call dword ptr [0x128182e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182e8))), 0x127f1834u);
  /* 127f1834 jmp 0x127f1838 */
  goto L_127f1838;
L_127f1836:;
  /* 127f1836 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127f1838:;
  /* 127f1838 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 127f183b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f183e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 127f1845 pop edi */
  EDI = (pop32());
  /* 127f1846 pop esi */
  ESI = (pop32());
  /* 127f1847 pop ebx */
  EBX = (pop32());
  /* 127f1848 mov esp, ebp */
  ESP = (EBP);
  /* 127f184a pop ebp */
  EBP = (pop32());
  /* 127f184b ret  */
  ESPCHK(0x127f1690u, _esp0);
  ESP += 4; return;
}

/* FUN_10011850 @ 0x127f1850 (727 bytes, 263 insns) */
void f_127f1850(void) {
  FTRACE(0x127f1850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f1850 push ebp */
  push32((uint32_t)(EBP));
  /* 127f1851 mov ebp, esp */
  EBP = (ESP);
  /* 127f1853 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 127f1855 push 0x12811240 */
  push32((uint32_t)(0x12811240u));
  /* 127f185a push 0x127f2568 */
  push32((uint32_t)(0x127f2568u));
  /* 127f185f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 127f1865 push eax */
  push32((uint32_t)(EAX));
  /* 127f1866 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 127f186d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f1870 push ebx */
  push32((uint32_t)(EBX));
  /* 127f1871 push esi */
  push32((uint32_t)(ESI));
  /* 127f1872 push edi */
  push32((uint32_t)(EDI));
  /* 127f1873 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 127f1876 cmp dword ptr [0x12815a18], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815a18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f187d jne 0x127f18d6 */
  if (!C.zf) goto L_127f18d6;
  /* 127f187f push 0 */
  push32((uint32_t)(0x0u));
  /* 127f1881 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f1883 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f1885 push 0x12811228 */
  push32((uint32_t)(0x12811228u));
  /* 127f188a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 127f188f push 0 */
  push32((uint32_t)(0x0u));
  /* 127f1891 call dword ptr [0x128182e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182e0))), 0x127f1897u);
  /* 127f1897 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f1899 je 0x127f18a7 */
  if (C.zf) goto L_127f18a7;
  /* 127f189b mov dword ptr [0x12815a18], 1 */
  w32((uint32_t)(0x12815a18), (0x1u));
  /* 127f18a5 jmp 0x127f18d6 */
  goto L_127f18d6;
L_127f18a7:;
  /* 127f18a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f18a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f18ab push 1 */
  push32((uint32_t)(0x1u));
  /* 127f18ad push 0x12811224 */
  push32((uint32_t)(0x12811224u));
  /* 127f18b2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 127f18b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f18b9 call dword ptr [0x128182e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182e4))), 0x127f18bfu);
  /* 127f18bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f18c1 je 0x127f18cf */
  if (C.zf) goto L_127f18cf;
  /* 127f18c3 mov dword ptr [0x12815a18], 2 */
  w32((uint32_t)(0x12815a18), (0x2u));
  /* 127f18cd jmp 0x127f18d6 */
  goto L_127f18d6;
L_127f18cf:;
  /* 127f18cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f18d1 jmp 0x127f1b41 */
  goto L_127f1b41;
L_127f18d6:;
  /* 127f18d6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f18da jle 0x127f18ef */
  if ((C.zf||C.sf!=C.of)) goto L_127f18ef;
  /* 127f18dc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f18df push eax */
  push32((uint32_t)(EAX));
  /* 127f18e0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f18e3 push ecx */
  push32((uint32_t)(ECX));
  /* 127f18e4 call 0x127f1b60 */
  push32(0x127f18e9u); f_127f1b60();
  /* 127f18e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f18ec mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_127f18ef:;
  /* 127f18ef cmp dword ptr [0x12815a18], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12815a18))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f18f6 jne 0x127f191b */
  if (!C.zf) goto L_127f191b;
  /* 127f18f8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 127f18fb push edx */
  push32((uint32_t)(EDX));
  /* 127f18fc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127f18ff push eax */
  push32((uint32_t)(EAX));
  /* 127f1900 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f1903 push ecx */
  push32((uint32_t)(ECX));
  /* 127f1904 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f1907 push edx */
  push32((uint32_t)(EDX));
  /* 127f1908 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f190b push eax */
  push32((uint32_t)(EAX));
  /* 127f190c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f190f push ecx */
  push32((uint32_t)(ECX));
  /* 127f1910 call dword ptr [0x128182e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182e4))), 0x127f1916u);
  /* 127f1916 jmp 0x127f1b41 */
  goto L_127f1b41;
L_127f191b:;
  /* 127f191b cmp dword ptr [0x12815a18], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12815a18))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f1922 jne 0x127f1b3f */
  if (!C.zf) goto L_127f1b3f;
  /* 127f1928 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f192c jne 0x127f1937 */
  if (!C.zf) goto L_127f1937;
  /* 127f192e mov edx, dword ptr [0x12815a10] */
  EDX = (r32((uint32_t)(0x12815a10)));
  /* 127f1934 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_127f1937:;
  /* 127f1937 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f1939 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f193b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f193e push eax */
  push32((uint32_t)(EAX));
  /* 127f193f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f1942 push ecx */
  push32((uint32_t)(ECX));
  /* 127f1943 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 127f1946 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 127f1948 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f194a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 127f194d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f1950 push edx */
  push32((uint32_t)(EDX));
  /* 127f1951 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 127f1954 push eax */
  push32((uint32_t)(EAX));
  /* 127f1955 call dword ptr [0x128182f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182f0))), 0x127f195bu);
  /* 127f195b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 127f195e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f1962 jne 0x127f196b */
  if (!C.zf) goto L_127f196b;
  /* 127f1964 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f1966 jmp 0x127f1b41 */
  goto L_127f1b41;
L_127f196b:;
  /* 127f196b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127f1972 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127f1975 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 127f1977 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f197a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 127f197c call 0x127ec600 */
  push32(0x127f1981u); f_127ec600();
  /* 127f1981 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 127f1984 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 127f1987 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 127f198a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 127f198d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 127f1994 jmp 0x127f19ad */
  goto L_127f19ad;
  /* 127f1996 mov eax, 1 */
  EAX = (0x1u);
  /* 127f199b ret  */
  ESPCHK(0x127f1850u, _esp0);
  ESP += 4; return;
  /* 127f199c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 127f199f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 127f19a6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_127f19ad:;
  /* 127f19ad cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f19b1 jne 0x127f19ba */
  if (!C.zf) goto L_127f19ba;
  /* 127f19b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f19b5 jmp 0x127f1b41 */
  goto L_127f1b41;
L_127f19ba:;
  /* 127f19ba mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127f19bd push edx */
  push32((uint32_t)(EDX));
  /* 127f19be mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127f19c1 push eax */
  push32((uint32_t)(EAX));
  /* 127f19c2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f19c5 push ecx */
  push32((uint32_t)(ECX));
  /* 127f19c6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f19c9 push edx */
  push32((uint32_t)(EDX));
  /* 127f19ca push 1 */
  push32((uint32_t)(0x1u));
  /* 127f19cc mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 127f19cf push eax */
  push32((uint32_t)(EAX));
  /* 127f19d0 call dword ptr [0x128182f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182f0))), 0x127f19d6u);
  /* 127f19d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f19d8 jne 0x127f19e1 */
  if (!C.zf) goto L_127f19e1;
  /* 127f19da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f19dc jmp 0x127f1b41 */
  goto L_127f1b41;
L_127f19e1:;
  /* 127f19e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f19e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f19e5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127f19e8 push ecx */
  push32((uint32_t)(ECX));
  /* 127f19e9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 127f19ec push edx */
  push32((uint32_t)(EDX));
  /* 127f19ed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f19f0 push eax */
  push32((uint32_t)(EAX));
  /* 127f19f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f19f4 push ecx */
  push32((uint32_t)(ECX));
  /* 127f19f5 call dword ptr [0x128182e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182e0))), 0x127f19fbu);
  /* 127f19fb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 127f19fe cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f1a02 jne 0x127f1a0b */
  if (!C.zf) goto L_127f1a0b;
  /* 127f1a04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f1a06 jmp 0x127f1b41 */
  goto L_127f1b41;
L_127f1a0b:;
  /* 127f1a0b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f1a0e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 127f1a14 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f1a16 je 0x127f1a5b */
  if (C.zf) goto L_127f1a5b;
  /* 127f1a18 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f1a1c je 0x127f1a56 */
  if (C.zf) goto L_127f1a56;
  /* 127f1a1e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 127f1a21 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f1a24 jle 0x127f1a2d */
  if ((C.zf||C.sf!=C.of)) goto L_127f1a2d;
  /* 127f1a26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f1a28 jmp 0x127f1b41 */
  goto L_127f1b41;
L_127f1a2d:;
  /* 127f1a2d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 127f1a30 push ecx */
  push32((uint32_t)(ECX));
  /* 127f1a31 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127f1a34 push edx */
  push32((uint32_t)(EDX));
  /* 127f1a35 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127f1a38 push eax */
  push32((uint32_t)(EAX));
  /* 127f1a39 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127f1a3c push ecx */
  push32((uint32_t)(ECX));
  /* 127f1a3d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f1a40 push edx */
  push32((uint32_t)(EDX));
  /* 127f1a41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f1a44 push eax */
  push32((uint32_t)(EAX));
  /* 127f1a45 call dword ptr [0x128182e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182e0))), 0x127f1a4bu);
  /* 127f1a4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f1a4d jne 0x127f1a56 */
  if (!C.zf) goto L_127f1a56;
  /* 127f1a4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f1a51 jmp 0x127f1b41 */
  goto L_127f1b41;
L_127f1a56:;
  /* 127f1a56 jmp 0x127f1b3a */
  goto L_127f1b3a;
L_127f1a5b:;
  /* 127f1a5b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 127f1a5e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 127f1a61 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 127f1a68 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127f1a6b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 127f1a6d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f1a70 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 127f1a72 call 0x127ec600 */
  push32(0x127f1a77u); f_127ec600();
  /* 127f1a77 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 127f1a7a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 127f1a7d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 127f1a80 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 127f1a83 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 127f1a8a jmp 0x127f1aa3 */
  goto L_127f1aa3;
  /* 127f1a8c mov eax, 1 */
  EAX = (0x1u);
  /* 127f1a91 ret  */
  ESPCHK(0x127f1850u, _esp0);
  ESP += 4; return;
  /* 127f1a92 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 127f1a95 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 127f1a9c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_127f1aa3:;
  /* 127f1aa3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f1aa7 jne 0x127f1ab0 */
  if (!C.zf) goto L_127f1ab0;
  /* 127f1aa9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f1aab jmp 0x127f1b41 */
  goto L_127f1b41;
L_127f1ab0:;
  /* 127f1ab0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127f1ab3 push eax */
  push32((uint32_t)(EAX));
  /* 127f1ab4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127f1ab7 push ecx */
  push32((uint32_t)(ECX));
  /* 127f1ab8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127f1abb push edx */
  push32((uint32_t)(EDX));
  /* 127f1abc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127f1abf push eax */
  push32((uint32_t)(EAX));
  /* 127f1ac0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f1ac3 push ecx */
  push32((uint32_t)(ECX));
  /* 127f1ac4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f1ac7 push edx */
  push32((uint32_t)(EDX));
  /* 127f1ac8 call dword ptr [0x128182e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182e0))), 0x127f1aceu);
  /* 127f1ace test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f1ad0 jne 0x127f1ad6 */
  if (!C.zf) goto L_127f1ad6;
  /* 127f1ad2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f1ad4 jmp 0x127f1b41 */
  goto L_127f1b41;
L_127f1ad6:;
  /* 127f1ad6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f1ada jne 0x127f1b0a */
  if (!C.zf) goto L_127f1b0a;
  /* 127f1adc push 0 */
  push32((uint32_t)(0x0u));
  /* 127f1ade push 0 */
  push32((uint32_t)(0x0u));
  /* 127f1ae0 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f1ae2 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f1ae4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127f1ae7 push eax */
  push32((uint32_t)(EAX));
  /* 127f1ae8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127f1aeb push ecx */
  push32((uint32_t)(ECX));
  /* 127f1aec push 0x220 */
  push32((uint32_t)(0x220u));
  /* 127f1af1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 127f1af4 push edx */
  push32((uint32_t)(EDX));
  /* 127f1af5 call dword ptr [0x128183a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128183a4))), 0x127f1afbu);
  /* 127f1afb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 127f1afe cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f1b02 jne 0x127f1b08 */
  if (!C.zf) goto L_127f1b08;
  /* 127f1b04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f1b06 jmp 0x127f1b41 */
  goto L_127f1b41;
L_127f1b08:;
  /* 127f1b08 jmp 0x127f1b3a */
  goto L_127f1b3a;
L_127f1b0a:;
  /* 127f1b0a push 0 */
  push32((uint32_t)(0x0u));
  /* 127f1b0c push 0 */
  push32((uint32_t)(0x0u));
  /* 127f1b0e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 127f1b11 push eax */
  push32((uint32_t)(EAX));
  /* 127f1b12 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 127f1b15 push ecx */
  push32((uint32_t)(ECX));
  /* 127f1b16 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127f1b19 push edx */
  push32((uint32_t)(EDX));
  /* 127f1b1a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 127f1b1d push eax */
  push32((uint32_t)(EAX));
  /* 127f1b1e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 127f1b23 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 127f1b26 push ecx */
  push32((uint32_t)(ECX));
  /* 127f1b27 call dword ptr [0x128183a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128183a4))), 0x127f1b2du);
  /* 127f1b2d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 127f1b30 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f1b34 jne 0x127f1b3a */
  if (!C.zf) goto L_127f1b3a;
  /* 127f1b36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f1b38 jmp 0x127f1b41 */
  goto L_127f1b41;
L_127f1b3a:;
  /* 127f1b3a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 127f1b3d jmp 0x127f1b41 */
  goto L_127f1b41;
L_127f1b3f:;
  /* 127f1b3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127f1b41:;
  /* 127f1b41 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 127f1b44 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f1b47 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 127f1b4e pop edi */
  EDI = (pop32());
  /* 127f1b4f pop esi */
  ESI = (pop32());
  /* 127f1b50 pop ebx */
  EBX = (pop32());
  /* 127f1b51 mov esp, ebp */
  ESP = (EBP);
  /* 127f1b53 pop ebp */
  EBP = (pop32());
  /* 127f1b54 ret  */
  ESPCHK(0x127f1850u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b60 @ 0x127f1b60 (80 bytes, 32 insns) */
void f_127f1b60(void) {
  FTRACE(0x127f1b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f1b60 push ebp */
  push32((uint32_t)(EBP));
  /* 127f1b61 mov ebp, esp */
  EBP = (ESP);
  /* 127f1b63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f1b66 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f1b69 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127f1b6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f1b6f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_127f1b72:;
  /* 127f1b72 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f1b75 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f1b78 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f1b7b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127f1b7e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f1b80 je 0x127f1b97 */
  if (C.zf) goto L_127f1b97;
  /* 127f1b82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f1b85 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127f1b88 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f1b8a je 0x127f1b97 */
  if (C.zf) goto L_127f1b97;
  /* 127f1b8c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f1b8f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f1b92 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127f1b95 jmp 0x127f1b72 */
  goto L_127f1b72;
L_127f1b97:;
  /* 127f1b97 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f1b9a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127f1b9d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f1b9f jne 0x127f1ba9 */
  if (!C.zf) goto L_127f1ba9;
  /* 127f1ba1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f1ba4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f1ba7 jmp 0x127f1bac */
  goto L_127f1bac;
L_127f1ba9:;
  /* 127f1ba9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_127f1bac:;
  /* 127f1bac mov esp, ebp */
  ESP = (EBP);
  /* 127f1bae pop ebp */
  EBP = (pop32());
  /* 127f1baf ret  */
  ESPCHK(0x127f1b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10011bb0 @ 0x127f1bb0 (130 bytes, 43 insns) */
void f_127f1bb0(void) {
  FTRACE(0x127f1bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f1bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 127f1bb1 mov ebp, esp */
  EBP = (ESP);
  /* 127f1bb3 push ecx */
  push32((uint32_t)(ECX));
  /* 127f1bb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f1bb7 cmp eax, dword ptr [0x1281731c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1281731c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f1bbd jae 0x127f1be1 */
  if (!C.cf) goto L_127f1be1;
  /* 127f1bbf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f1bc2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 127f1bc5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f1bc8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 127f1bcb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f1bce mov eax, dword ptr [ecx*4 + 0x128171e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x128171e0)));
  /* 127f1bd5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 127f1bda and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 127f1bdd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127f1bdf jne 0x127f1bfc */
  if (!C.zf) goto L_127f1bfc;
L_127f1be1:;
  /* 127f1be1 call 0x127f1330 */
  push32(0x127f1be6u); f_127f1330();
  /* 127f1be6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 127f1bec call 0x127f1340 */
  push32(0x127f1bf1u); f_127f1340();
  /* 127f1bf1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 127f1bf7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f1bfa jmp 0x127f1c2e */
  goto L_127f1c2e;
L_127f1bfc:;
  /* 127f1bfc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f1bff push edx */
  push32((uint32_t)(EDX));
  /* 127f1c00 call 0x127f2b50 */
  push32(0x127f1c05u); f_127f2b50();
  /* 127f1c05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f1c08 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f1c0b push eax */
  push32((uint32_t)(EAX));
  /* 127f1c0c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f1c0f push ecx */
  push32((uint32_t)(ECX));
  /* 127f1c10 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f1c13 push edx */
  push32((uint32_t)(EDX));
  /* 127f1c14 call 0x127f1c40 */
  push32(0x127f1c19u); f_127f1c40();
  /* 127f1c19 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f1c1c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127f1c1f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f1c22 push eax */
  push32((uint32_t)(EAX));
  /* 127f1c23 call 0x127f2be0 */
  push32(0x127f1c28u); f_127f2be0();
  /* 127f1c28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f1c2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_127f1c2e:;
  /* 127f1c2e mov esp, ebp */
  ESP = (EBP);
  /* 127f1c30 pop ebp */
  EBP = (pop32());
  /* 127f1c31 ret  */
  ESPCHK(0x127f1bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c40 @ 0x127f1c40 (178 bytes, 56 insns) */
void f_127f1c40(void) {
  FTRACE(0x127f1c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f1c40 push ebp */
  push32((uint32_t)(EBP));
  /* 127f1c41 mov ebp, esp */
  EBP = (ESP);
  /* 127f1c43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f1c46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f1c49 push eax */
  push32((uint32_t)(EAX));
  /* 127f1c4a call 0x127f29d0 */
  push32(0x127f1c4fu); f_127f29d0();
  /* 127f1c4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f1c52 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127f1c55 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f1c59 jne 0x127f1c6e */
  if (!C.zf) goto L_127f1c6e;
  /* 127f1c5b call 0x127f1330 */
  push32(0x127f1c60u); f_127f1330();
  /* 127f1c60 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 127f1c66 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f1c69 jmp 0x127f1cee */
  goto L_127f1cee;
L_127f1c6e:;
  /* 127f1c6e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f1c71 push ecx */
  push32((uint32_t)(ECX));
  /* 127f1c72 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f1c74 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f1c77 push edx */
  push32((uint32_t)(EDX));
  /* 127f1c78 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f1c7b push eax */
  push32((uint32_t)(EAX));
  /* 127f1c7c call dword ptr [0x128182dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182dc))), 0x127f1c82u);
  /* 127f1c82 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127f1c85 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f1c89 jne 0x127f1c96 */
  if (!C.zf) goto L_127f1c96;
  /* 127f1c8b call dword ptr [0x12818378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12818378))), 0x127f1c91u);
  /* 127f1c91 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127f1c94 jmp 0x127f1c9d */
  goto L_127f1c9d;
L_127f1c96:;
  /* 127f1c96 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_127f1c9d:;
  /* 127f1c9d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f1ca1 je 0x127f1cb4 */
  if (C.zf) goto L_127f1cb4;
  /* 127f1ca3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f1ca6 push ecx */
  push32((uint32_t)(ECX));
  /* 127f1ca7 call 0x127f1290 */
  push32(0x127f1cacu); f_127f1290();
  /* 127f1cac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f1caf or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f1cb2 jmp 0x127f1cee */
  goto L_127f1cee;
L_127f1cb4:;
  /* 127f1cb4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f1cb7 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 127f1cba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f1cbd and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 127f1cc0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f1cc3 mov ecx, dword ptr [edx*4 + 0x128171e0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x128171e0)));
  /* 127f1cca mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 127f1cce and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 127f1cd1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f1cd4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 127f1cd7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f1cda and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 127f1cdd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f1ce0 mov eax, dword ptr [eax*4 + 0x128171e0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x128171e0)));
  /* 127f1ce7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 127f1ceb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_127f1cee:;
  /* 127f1cee mov esp, ebp */
  ESP = (EBP);
  /* 127f1cf0 pop ebp */
  EBP = (pop32());
  /* 127f1cf1 ret  */
  ESPCHK(0x127f1c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d00 @ 0x127f1d00 (130 bytes, 43 insns) */
void f_127f1d00(void) {
  FTRACE(0x127f1d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f1d00 push ebp */
  push32((uint32_t)(EBP));
  /* 127f1d01 mov ebp, esp */
  EBP = (ESP);
  /* 127f1d03 push ecx */
  push32((uint32_t)(ECX));
  /* 127f1d04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f1d07 cmp eax, dword ptr [0x1281731c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1281731c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f1d0d jae 0x127f1d31 */
  if (!C.cf) goto L_127f1d31;
  /* 127f1d0f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f1d12 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 127f1d15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f1d18 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 127f1d1b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f1d1e mov eax, dword ptr [ecx*4 + 0x128171e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x128171e0)));
  /* 127f1d25 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 127f1d2a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 127f1d2d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127f1d2f jne 0x127f1d4c */
  if (!C.zf) goto L_127f1d4c;
L_127f1d31:;
  /* 127f1d31 call 0x127f1330 */
  push32(0x127f1d36u); f_127f1330();
  /* 127f1d36 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 127f1d3c call 0x127f1340 */
  push32(0x127f1d41u); f_127f1340();
  /* 127f1d41 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 127f1d47 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f1d4a jmp 0x127f1d7e */
  goto L_127f1d7e;
L_127f1d4c:;
  /* 127f1d4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f1d4f push edx */
  push32((uint32_t)(EDX));
  /* 127f1d50 call 0x127f2b50 */
  push32(0x127f1d55u); f_127f2b50();
  /* 127f1d55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f1d58 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f1d5b push eax */
  push32((uint32_t)(EAX));
  /* 127f1d5c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f1d5f push ecx */
  push32((uint32_t)(ECX));
  /* 127f1d60 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f1d63 push edx */
  push32((uint32_t)(EDX));
  /* 127f1d64 call 0x127f1d90 */
  push32(0x127f1d69u); f_127f1d90();
  /* 127f1d69 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f1d6c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127f1d6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f1d72 push eax */
  push32((uint32_t)(EAX));
  /* 127f1d73 call 0x127f2be0 */
  push32(0x127f1d78u); f_127f2be0();
  /* 127f1d78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f1d7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_127f1d7e:;
  /* 127f1d7e mov esp, ebp */
  ESP = (EBP);
  /* 127f1d80 pop ebp */
  EBP = (pop32());
  /* 127f1d81 ret  */
  ESPCHK(0x127f1d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d90 @ 0x127f1d90 (627 bytes, 182 insns) */
void f_127f1d90(void) {
  FTRACE(0x127f1d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f1d90 push ebp */
  push32((uint32_t)(EBP));
  /* 127f1d91 mov ebp, esp */
  EBP = (ESP);
  /* 127f1d93 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f1d99 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 127f1da0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f1da3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 127f1da9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f1dad jne 0x127f1db6 */
  if (!C.zf) goto L_127f1db6;
  /* 127f1daf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f1db1 jmp 0x127f1fff */
  goto L_127f1fff;
L_127f1db6:;
  /* 127f1db6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f1db9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 127f1dbc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f1dbf and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 127f1dc2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f1dc5 mov eax, dword ptr [ecx*4 + 0x128171e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x128171e0)));
  /* 127f1dcc movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 127f1dd1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 127f1dd4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127f1dd6 je 0x127f1de8 */
  if (C.zf) goto L_127f1de8;
  /* 127f1dd8 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f1dda push 0 */
  push32((uint32_t)(0x0u));
  /* 127f1ddc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f1ddf push edx */
  push32((uint32_t)(EDX));
  /* 127f1de0 call 0x127f1c40 */
  push32(0x127f1de5u); f_127f1c40();
  /* 127f1de5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127f1de8:;
  /* 127f1de8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f1deb sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 127f1dee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f1df1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 127f1df4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f1df7 mov edx, dword ptr [eax*4 + 0x128171e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x128171e0)));
  /* 127f1dfe movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 127f1e03 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 127f1e08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f1e0a je 0x127f1f1c */
  if (C.zf) goto L_127f1f1c;
  /* 127f1e10 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f1e13 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127f1e16 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_127f1e1d:;
  /* 127f1e1d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f1e20 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f1e23 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f1e26 jae 0x127f1f1a */
  if (!C.cf) goto L_127f1f1a;
  /* 127f1e2c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 127f1e32 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_127f1e35:;
  /* 127f1e35 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f1e38 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 127f1e3e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f1e40 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f1e46 jge 0x127f1ea7 */
  if ((C.sf==C.of)) goto L_127f1ea7;
  /* 127f1e48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f1e4b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f1e4e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f1e51 jae 0x127f1ea7 */
  if (!C.cf) goto L_127f1ea7;
  /* 127f1e53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f1e56 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127f1e58 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 127f1e5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f1e61 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f1e64 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127f1e67 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 127f1e6e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f1e71 jne 0x127f1e91 */
  if (!C.zf) goto L_127f1e91;
  /* 127f1e73 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 127f1e79 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f1e7c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 127f1e82 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f1e85 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 127f1e88 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f1e8b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f1e8e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_127f1e91:;
  /* 127f1e91 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f1e94 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 127f1e9a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 127f1e9c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f1e9f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f1ea2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127f1ea5 jmp 0x127f1e35 */
  goto L_127f1e35;
L_127f1ea7:;
  /* 127f1ea7 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f1ea9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 127f1eaf push edx */
  push32((uint32_t)(EDX));
  /* 127f1eb0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f1eb3 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 127f1eb9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f1ebb push eax */
  push32((uint32_t)(EAX));
  /* 127f1ebc lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 127f1ec2 push edx */
  push32((uint32_t)(EDX));
  /* 127f1ec3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f1ec6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 127f1ec9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f1ecc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 127f1ecf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f1ed2 mov edx, dword ptr [eax*4 + 0x128171e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x128171e0)));
  /* 127f1ed9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 127f1edc push eax */
  push32((uint32_t)(EAX));
  /* 127f1edd call dword ptr [0x1281833c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1281833c))), 0x127f1ee3u);
  /* 127f1ee3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f1ee5 je 0x127f1f0a */
  if (C.zf) goto L_127f1f0a;
  /* 127f1ee7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f1eea add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f1ef0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 127f1ef3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f1ef6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 127f1efc sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f1efe cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f1f04 jge 0x127f1f08 */
  if ((C.sf==C.of)) goto L_127f1f08;
  /* 127f1f06 jmp 0x127f1f1a */
  goto L_127f1f1a;
L_127f1f08:;
  /* 127f1f08 jmp 0x127f1f15 */
  goto L_127f1f15;
L_127f1f0a:;
  /* 127f1f0a call dword ptr [0x12818378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12818378))), 0x127f1f10u);
  /* 127f1f10 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127f1f13 jmp 0x127f1f1a */
  goto L_127f1f1a;
L_127f1f15:;
  /* 127f1f15 jmp 0x127f1e1d */
  goto L_127f1e1d;
L_127f1f1a:;
  /* 127f1f1a jmp 0x127f1f6c */
  goto L_127f1f6c;
L_127f1f1c:;
  /* 127f1f1c push 0 */
  push32((uint32_t)(0x0u));
  /* 127f1f1e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 127f1f24 push ecx */
  push32((uint32_t)(ECX));
  /* 127f1f25 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f1f28 push edx */
  push32((uint32_t)(EDX));
  /* 127f1f29 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f1f2c push eax */
  push32((uint32_t)(EAX));
  /* 127f1f2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f1f30 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 127f1f33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f1f36 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 127f1f39 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f1f3c mov eax, dword ptr [ecx*4 + 0x128171e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x128171e0)));
  /* 127f1f43 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 127f1f46 push ecx */
  push32((uint32_t)(ECX));
  /* 127f1f47 call dword ptr [0x1281833c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1281833c))), 0x127f1f4du);
  /* 127f1f4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f1f4f je 0x127f1f63 */
  if (C.zf) goto L_127f1f63;
  /* 127f1f51 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 127f1f58 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 127f1f5e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 127f1f61 jmp 0x127f1f6c */
  goto L_127f1f6c;
L_127f1f63:;
  /* 127f1f63 call dword ptr [0x12818378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12818378))), 0x127f1f69u);
  /* 127f1f69 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_127f1f6c:;
  /* 127f1f6c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f1f70 jne 0x127f1ff6 */
  if (!C.zf) goto L_127f1ff6;
  /* 127f1f76 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f1f7a je 0x127f1faa */
  if (C.zf) goto L_127f1faa;
  /* 127f1f7c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f1f80 jne 0x127f1f99 */
  if (!C.zf) goto L_127f1f99;
  /* 127f1f82 call 0x127f1330 */
  push32(0x127f1f87u); f_127f1330();
  /* 127f1f87 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 127f1f8d call 0x127f1340 */
  push32(0x127f1f92u); f_127f1340();
  /* 127f1f92 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f1f95 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 127f1f97 jmp 0x127f1fa5 */
  goto L_127f1fa5;
L_127f1f99:;
  /* 127f1f99 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f1f9c push edx */
  push32((uint32_t)(EDX));
  /* 127f1f9d call 0x127f1290 */
  push32(0x127f1fa2u); f_127f1290();
  /* 127f1fa2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127f1fa5:;
  /* 127f1fa5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f1fa8 jmp 0x127f1fff */
  goto L_127f1fff;
L_127f1faa:;
  /* 127f1faa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f1fad sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 127f1fb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f1fb3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 127f1fb6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f1fb9 mov edx, dword ptr [eax*4 + 0x128171e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x128171e0)));
  /* 127f1fc0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 127f1fc5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 127f1fc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f1fca je 0x127f1fdb */
  if (C.zf) goto L_127f1fdb;
  /* 127f1fcc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f1fcf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127f1fd2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f1fd5 jne 0x127f1fdb */
  if (!C.zf) goto L_127f1fdb;
  /* 127f1fd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f1fd9 jmp 0x127f1fff */
  goto L_127f1fff;
L_127f1fdb:;
  /* 127f1fdb call 0x127f1330 */
  push32(0x127f1fe0u); f_127f1330();
  /* 127f1fe0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 127f1fe6 call 0x127f1340 */
  push32(0x127f1febu); f_127f1340();
  /* 127f1feb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 127f1ff1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f1ff4 jmp 0x127f1fff */
  goto L_127f1fff;
L_127f1ff6:;
  /* 127f1ff6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f1ff9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_127f1fff:;
  /* 127f1fff mov esp, ebp */
  ESP = (EBP);
  /* 127f2001 pop ebp */
  EBP = (pop32());
  /* 127f2002 ret  */
  ESPCHK(0x127f1d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10012010 @ 0x127f2010 (199 bytes, 68 insns) */
void f_127f2010(void) {
  FTRACE(0x127f2010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f2010 push ebp */
  push32((uint32_t)(EBP));
  /* 127f2011 mov ebp, esp */
  EBP = (ESP);
  /* 127f2013 push ecx */
  push32((uint32_t)(ECX));
  /* 127f2014 push ebx */
  push32((uint32_t)(EBX));
  /* 127f2015 push esi */
  push32((uint32_t)(ESI));
  /* 127f2016 push edi */
  push32((uint32_t)(EDI));
L_127f2017:;
  /* 127f2017 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f201b jne 0x127f203b */
  if (!C.zf) goto L_127f203b;
  /* 127f201d push 0x12811188 */
  push32((uint32_t)(0x12811188u));
  /* 127f2022 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f2024 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 127f2026 push 0x12811258 */
  push32((uint32_t)(0x12811258u));
  /* 127f202b push 2 */
  push32((uint32_t)(0x2u));
  /* 127f202d call 0x127e8520 */
  push32(0x127f2032u); f_127e8520();
  /* 127f2032 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f2035 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f2038 jne 0x127f203b */
  if (!C.zf) goto L_127f203b;
  /* 127f203a int3  */
  x86_unimpl("int3 @ 0x127f203a");
L_127f203b:;
  /* 127f203b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f203d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f203f jne 0x127f2017 */
  if (!C.zf) goto L_127f2017;
  /* 127f2041 mov ecx, dword ptr [0x12815a1c] */
  ECX = (r32((uint32_t)(0x12815a1c)));
  /* 127f2047 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f204a mov dword ptr [0x12815a1c], ecx */
  w32((uint32_t)(0x12815a1c), (ECX));
  /* 127f2050 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f2053 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127f2056 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 127f2058 push 0x12811258 */
  push32((uint32_t)(0x12811258u));
  /* 127f205d push 2 */
  push32((uint32_t)(0x2u));
  /* 127f205f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 127f2064 call 0x127e9460 */
  push32(0x127f2069u); f_127e9460();
  /* 127f2069 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f206c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f206f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 127f2072 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f2075 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f2079 je 0x127f2096 */
  if (C.zf) goto L_127f2096;
  /* 127f207b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f207e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 127f2081 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 127f2084 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f2087 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 127f208a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f208d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 127f2094 jmp 0x127f20bb */
  goto L_127f20bb;
L_127f2096:;
  /* 127f2096 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f2099 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 127f209c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 127f209f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f20a2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 127f20a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f20a8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f20ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f20ae mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 127f20b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f20b4 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_127f20bb:;
  /* 127f20bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f20be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f20c1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 127f20c4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 127f20c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f20c9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 127f20d0 pop edi */
  EDI = (pop32());
  /* 127f20d1 pop esi */
  ESI = (pop32());
  /* 127f20d2 pop ebx */
  EBX = (pop32());
  /* 127f20d3 mov esp, ebp */
  ESP = (EBP);
  /* 127f20d5 pop ebp */
  EBP = (pop32());
  /* 127f20d6 ret  */
  ESPCHK(0x127f2010u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x127f20e0 (50 bytes, 17 insns) */
void f_127f20e0(void) {
  FTRACE(0x127f20e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f20e0 push ebp */
  push32((uint32_t)(EBP));
  /* 127f20e1 mov ebp, esp */
  EBP = (ESP);
  /* 127f20e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f20e6 cmp eax, dword ptr [0x1281731c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1281731c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f20ec jb 0x127f20f2 */
  if (C.cf) goto L_127f20f2;
  /* 127f20ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f20f0 jmp 0x127f2110 */
  goto L_127f2110;
L_127f20f2:;
  /* 127f20f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f20f5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 127f20f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f20fb and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 127f20fe imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f2101 mov eax, dword ptr [ecx*4 + 0x128171e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x128171e0)));
  /* 127f2108 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 127f210d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_127f2110:;
  /* 127f2110 pop ebp */
  EBP = (pop32());
  /* 127f2111 ret  */
  ESPCHK(0x127f20e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012120 @ 0x127f2120 (300 bytes, 80 insns) */
void f_127f2120(void) {
  FTRACE(0x127f2120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f2120 push ebp */
  push32((uint32_t)(EBP));
  /* 127f2121 mov ebp, esp */
  EBP = (ESP);
  /* 127f2123 push ecx */
  push32((uint32_t)(ECX));
  /* 127f2124 cmp dword ptr [0x12816ee0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12816ee0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f212b jne 0x127f2139 */
  if (!C.zf) goto L_127f2139;
  /* 127f212d mov dword ptr [0x12816ee0], 0x200 */
  w32((uint32_t)(0x12816ee0), (0x200u));
  /* 127f2137 jmp 0x127f214c */
  goto L_127f214c;
L_127f2139:;
  /* 127f2139 cmp dword ptr [0x12816ee0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x12816ee0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f2140 jge 0x127f214c */
  if ((C.sf==C.of)) goto L_127f214c;
  /* 127f2142 mov dword ptr [0x12816ee0], 0x14 */
  w32((uint32_t)(0x12816ee0), (0x14u));
L_127f214c:;
  /* 127f214c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 127f2151 push 0x12811264 */
  push32((uint32_t)(0x12811264u));
  /* 127f2156 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f2158 push 4 */
  push32((uint32_t)(0x4u));
  /* 127f215a mov eax, dword ptr [0x12816ee0] */
  EAX = (r32((uint32_t)(0x12816ee0)));
  /* 127f215f push eax */
  push32((uint32_t)(EAX));
  /* 127f2160 call 0x127e9870 */
  push32(0x127f2165u); f_127e9870();
  /* 127f2165 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f2168 mov dword ptr [0x12815b90], eax */
  w32((uint32_t)(0x12815b90), (EAX));
  /* 127f216d cmp dword ptr [0x12815b90], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815b90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f2174 jne 0x127f21b5 */
  if (!C.zf) goto L_127f21b5;
  /* 127f2176 mov dword ptr [0x12816ee0], 0x14 */
  w32((uint32_t)(0x12816ee0), (0x14u));
  /* 127f2180 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 127f2185 push 0x12811264 */
  push32((uint32_t)(0x12811264u));
  /* 127f218a push 2 */
  push32((uint32_t)(0x2u));
  /* 127f218c push 4 */
  push32((uint32_t)(0x4u));
  /* 127f218e mov ecx, dword ptr [0x12816ee0] */
  ECX = (r32((uint32_t)(0x12816ee0)));
  /* 127f2194 push ecx */
  push32((uint32_t)(ECX));
  /* 127f2195 call 0x127e9870 */
  push32(0x127f219au); f_127e9870();
  /* 127f219a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f219d mov dword ptr [0x12815b90], eax */
  w32((uint32_t)(0x12815b90), (EAX));
  /* 127f21a2 cmp dword ptr [0x12815b90], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815b90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f21a9 jne 0x127f21b5 */
  if (!C.zf) goto L_127f21b5;
  /* 127f21ab push 0x1a */
  push32((uint32_t)(0x1au));
  /* 127f21ad call 0x127e83d0 */
  push32(0x127f21b2u); f_127e83d0();
  /* 127f21b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127f21b5:;
  /* 127f21b5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127f21bc jmp 0x127f21c7 */
  goto L_127f21c7;
L_127f21be:;
  /* 127f21be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f21c1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f21c4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_127f21c7:;
  /* 127f21c7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f21cb jge 0x127f21e6 */
  if ((C.sf==C.of)) goto L_127f21e6;
  /* 127f21cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f21d0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 127f21d3 add eax, 0x12814120 */
  { uint32_t _a=(EAX),_b=(0x12814120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f21d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f21db mov edx, dword ptr [0x12815b90] */
  EDX = (r32((uint32_t)(0x12815b90)));
  /* 127f21e1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 127f21e4 jmp 0x127f21be */
  goto L_127f21be;
L_127f21e6:;
  /* 127f21e6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127f21ed jmp 0x127f21f8 */
  goto L_127f21f8;
L_127f21ef:;
  /* 127f21ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f21f2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f21f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127f21f8:;
  /* 127f21f8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f21fc jge 0x127f2248 */
  if ((C.sf==C.of)) goto L_127f2248;
  /* 127f21fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f2201 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 127f2204 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f2207 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 127f220a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f220d mov eax, dword ptr [ecx*4 + 0x128171e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x128171e0)));
  /* 127f2214 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f2218 je 0x127f2236 */
  if (C.zf) goto L_127f2236;
  /* 127f221a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f221d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 127f2220 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f2223 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 127f2226 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f2229 mov eax, dword ptr [ecx*4 + 0x128171e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x128171e0)));
  /* 127f2230 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f2234 jne 0x127f2246 */
  if (!C.zf) goto L_127f2246;
L_127f2236:;
  /* 127f2236 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f2239 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 127f223c mov dword ptr [ecx + 0x12814130], 0xffffffff */
  w32((uint32_t)(ECX + 0x12814130), (0xffffffffu));
L_127f2246:;
  /* 127f2246 jmp 0x127f21ef */
  goto L_127f21ef;
L_127f2248:;
  /* 127f2248 mov esp, ebp */
  ESP = (EBP);
  /* 127f224a pop ebp */
  EBP = (pop32());
  /* 127f224b ret  */
  ESPCHK(0x127f2120u, _esp0);
  ESP += 4; return;
}

/* FUN_10012250 @ 0x127f2250 (26 bytes, 9 insns) */
void f_127f2250(void) {
  FTRACE(0x127f2250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f2250 push ebp */
  push32((uint32_t)(EBP));
  /* 127f2251 mov ebp, esp */
  EBP = (ESP);
  /* 127f2253 call 0x127f2e50 */
  push32(0x127f2258u); f_127f2e50();
  /* 127f2258 movsx eax, byte ptr [0x12815838] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x12815838))));
  /* 127f225f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f2261 je 0x127f2268 */
  if (C.zf) goto L_127f2268;
  /* 127f2263 call 0x127f2c10 */
  push32(0x127f2268u); f_127f2c10();
L_127f2268:;
  /* 127f2268 pop ebp */
  EBP = (pop32());
  /* 127f2269 ret  */
  ESPCHK(0x127f2250u, _esp0);
  ESP += 4; return;
}

/* FUN_10012270 @ 0x127f2270 (61 bytes, 20 insns) */
void f_127f2270(void) {
  FTRACE(0x127f2270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f2270 push ebp */
  push32((uint32_t)(EBP));
  /* 127f2271 mov ebp, esp */
  EBP = (ESP);
  /* 127f2273 cmp dword ptr [ebp + 8], 0x12814120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12814120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f227a jb 0x127f229e */
  if (C.cf) goto L_127f229e;
  /* 127f227c cmp dword ptr [ebp + 8], 0x12814380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12814380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f2283 ja 0x127f229e */
  if ((!C.cf&&!C.zf)) goto L_127f229e;
  /* 127f2285 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f2288 sub eax, 0x12814120 */
  { uint32_t _a=(EAX),_b=(0x12814120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f228d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 127f2290 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f2293 push eax */
  push32((uint32_t)(EAX));
  /* 127f2294 call 0x127ece60 */
  push32(0x127f2299u); f_127ece60();
  /* 127f2299 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f229c jmp 0x127f22ab */
  goto L_127f22ab;
L_127f229e:;
  /* 127f229e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f22a1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f22a4 push ecx */
  push32((uint32_t)(ECX));
  /* 127f22a5 call dword ptr [0x12818318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12818318))), 0x127f22abu);
L_127f22ab:;
  /* 127f22ab pop ebp */
  EBP = (pop32());
  /* 127f22ac ret  */
  ESPCHK(0x127f2270u, _esp0);
  ESP += 4; return;
}

/* FUN_100122b0 @ 0x127f22b0 (41 bytes, 16 insns) */
void f_127f22b0(void) {
  FTRACE(0x127f22b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f22b0 push ebp */
  push32((uint32_t)(EBP));
  /* 127f22b1 mov ebp, esp */
  EBP = (ESP);
  /* 127f22b3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f22b7 jge 0x127f22ca */
  if ((C.sf==C.of)) goto L_127f22ca;
  /* 127f22b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f22bc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f22bf push eax */
  push32((uint32_t)(EAX));
  /* 127f22c0 call 0x127ece60 */
  push32(0x127f22c5u); f_127ece60();
  /* 127f22c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f22c8 jmp 0x127f22d7 */
  goto L_127f22d7;
L_127f22ca:;
  /* 127f22ca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f22cd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f22d0 push ecx */
  push32((uint32_t)(ECX));
  /* 127f22d1 call dword ptr [0x12818318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12818318))), 0x127f22d7u);
L_127f22d7:;
  /* 127f22d7 pop ebp */
  EBP = (pop32());
  /* 127f22d8 ret  */
  ESPCHK(0x127f22b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100122e0 @ 0x127f22e0 (61 bytes, 20 insns) */
void f_127f22e0(void) {
  FTRACE(0x127f22e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f22e0 push ebp */
  push32((uint32_t)(EBP));
  /* 127f22e1 mov ebp, esp */
  EBP = (ESP);
  /* 127f22e3 cmp dword ptr [ebp + 8], 0x12814120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12814120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f22ea jb 0x127f230e */
  if (C.cf) goto L_127f230e;
  /* 127f22ec cmp dword ptr [ebp + 8], 0x12814380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12814380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f22f3 ja 0x127f230e */
  if ((!C.cf&&!C.zf)) goto L_127f230e;
  /* 127f22f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f22f8 sub eax, 0x12814120 */
  { uint32_t _a=(EAX),_b=(0x12814120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f22fd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 127f2300 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f2303 push eax */
  push32((uint32_t)(EAX));
  /* 127f2304 call 0x127ecf00 */
  push32(0x127f2309u); f_127ecf00();
  /* 127f2309 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f230c jmp 0x127f231b */
  goto L_127f231b;
L_127f230e:;
  /* 127f230e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f2311 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f2314 push ecx */
  push32((uint32_t)(ECX));
  /* 127f2315 call dword ptr [0x12818314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12818314))), 0x127f231bu);
L_127f231b:;
  /* 127f231b pop ebp */
  EBP = (pop32());
  /* 127f231c ret  */
  ESPCHK(0x127f22e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012320 @ 0x127f2320 (41 bytes, 16 insns) */
void f_127f2320(void) {
  FTRACE(0x127f2320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f2320 push ebp */
  push32((uint32_t)(EBP));
  /* 127f2321 mov ebp, esp */
  EBP = (ESP);
  /* 127f2323 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f2327 jge 0x127f233a */
  if ((C.sf==C.of)) goto L_127f233a;
  /* 127f2329 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f232c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f232f push eax */
  push32((uint32_t)(EAX));
  /* 127f2330 call 0x127ecf00 */
  push32(0x127f2335u); f_127ecf00();
  /* 127f2335 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f2338 jmp 0x127f2347 */
  goto L_127f2347;
L_127f233a:;
  /* 127f233a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f233d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f2340 push ecx */
  push32((uint32_t)(ECX));
  /* 127f2341 call dword ptr [0x12818314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12818314))), 0x127f2347u);
L_127f2347:;
  /* 127f2347 pop ebp */
  EBP = (pop32());
  /* 127f2348 ret  */
  ESPCHK(0x127f2320u, _esp0);
  ESP += 4; return;
}

/* FUN_10012350 @ 0x127f2350 (119 bytes, 34 insns) */
void f_127f2350(void) {
  FTRACE(0x127f2350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f2350 push ebp */
  push32((uint32_t)(EBP));
  /* 127f2351 mov ebp, esp */
  EBP = (ESP);
  /* 127f2353 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f2356 push 0x12815b8c */
  push32((uint32_t)(0x12815b8cu));
  /* 127f235b call dword ptr [0x12818350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12818350))), 0x127f2361u);
  /* 127f2361 cmp dword ptr [0x12815b7c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815b7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f2368 je 0x127f2388 */
  if (C.zf) goto L_127f2388;
  /* 127f236a push 0x12815b8c */
  push32((uint32_t)(0x12815b8cu));
  /* 127f236f call dword ptr [0x12818340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12818340))), 0x127f2375u);
  /* 127f2375 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 127f2377 call 0x127ece60 */
  push32(0x127f237cu); f_127ece60();
  /* 127f237c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f237f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 127f2386 jmp 0x127f238f */
  goto L_127f238f;
L_127f2388:;
  /* 127f2388 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_127f238f:;
  /* 127f238f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 127f2393 push eax */
  push32((uint32_t)(EAX));
  /* 127f2394 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f2397 push ecx */
  push32((uint32_t)(ECX));
  /* 127f2398 call 0x127f23d0 */
  push32(0x127f239du); f_127f23d0();
  /* 127f239d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f23a0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127f23a3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f23a7 je 0x127f23b5 */
  if (C.zf) goto L_127f23b5;
  /* 127f23a9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 127f23ab call 0x127ecf00 */
  push32(0x127f23b0u); f_127ecf00();
  /* 127f23b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f23b3 jmp 0x127f23c0 */
  goto L_127f23c0;
L_127f23b5:;
  /* 127f23b5 push 0x12815b8c */
  push32((uint32_t)(0x12815b8cu));
  /* 127f23ba call dword ptr [0x12818340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12818340))), 0x127f23c0u);
L_127f23c0:;
  /* 127f23c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f23c3 mov esp, ebp */
  ESP = (EBP);
  /* 127f23c5 pop ebp */
  EBP = (pop32());
  /* 127f23c6 ret  */
  ESPCHK(0x127f2350u, _esp0);
  ESP += 4; return;
}

/* FUN_100123d0 @ 0x127f23d0 (160 bytes, 50 insns) */
void f_127f23d0(void) {
  FTRACE(0x127f23d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f23d0 push ebp */
  push32((uint32_t)(EBP));
  /* 127f23d1 mov ebp, esp */
  EBP = (ESP);
  /* 127f23d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f23d6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f23da jne 0x127f23e3 */
  if (!C.zf) goto L_127f23e3;
  /* 127f23dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f23de jmp 0x127f246c */
  goto L_127f246c;
L_127f23e3:;
  /* 127f23e3 cmp dword ptr [0x12815a00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815a00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f23ea jne 0x127f241a */
  if (!C.zf) goto L_127f241a;
  /* 127f23ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f23ef and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f23f4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f23f9 jle 0x127f240b */
  if ((C.zf||C.sf!=C.of)) goto L_127f240b;
  /* 127f23fb call 0x127f1330 */
  push32(0x127f2400u); f_127f1330();
  /* 127f2400 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 127f2406 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f2409 jmp 0x127f246c */
  goto L_127f246c;
L_127f240b:;
  /* 127f240b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f240e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 127f2411 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 127f2413 mov eax, 1 */
  EAX = (0x1u);
  /* 127f2418 jmp 0x127f246c */
  goto L_127f246c;
L_127f241a:;
  /* 127f241a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 127f2421 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 127f2424 push eax */
  push32((uint32_t)(EAX));
  /* 127f2425 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f2427 mov ecx, dword ptr [0x12813ea4] */
  ECX = (r32((uint32_t)(0x12813ea4)));
  /* 127f242d push ecx */
  push32((uint32_t)(ECX));
  /* 127f242e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f2431 push edx */
  push32((uint32_t)(EDX));
  /* 127f2432 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f2434 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 127f2437 push eax */
  push32((uint32_t)(EAX));
  /* 127f2438 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 127f243d mov ecx, dword ptr [0x12815a10] */
  ECX = (r32((uint32_t)(0x12815a10)));
  /* 127f2443 push ecx */
  push32((uint32_t)(ECX));
  /* 127f2444 call dword ptr [0x128183a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128183a4))), 0x127f244au);
  /* 127f244a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127f244d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f2451 je 0x127f2459 */
  if (C.zf) goto L_127f2459;
  /* 127f2453 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f2457 je 0x127f2469 */
  if (C.zf) goto L_127f2469;
L_127f2459:;
  /* 127f2459 call 0x127f1330 */
  push32(0x127f245eu); f_127f1330();
  /* 127f245e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 127f2464 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f2467 jmp 0x127f246c */
  goto L_127f246c;
L_127f2469:;
  /* 127f2469 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_127f246c:;
  /* 127f246c mov esp, ebp */
  ESP = (EBP);
  /* 127f246e pop ebp */
  EBP = (pop32());
  /* 127f246f ret  */
  ESPCHK(0x127f23d0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x127f2470 (32 bytes, 18 insns) */
void f_127f2470(void) {
  FTRACE(0x127f2470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f2470 push ebp */
  push32((uint32_t)(EBP));
  /* 127f2471 mov ebp, esp */
  EBP = (ESP);
  /* 127f2473 push ebx */
  push32((uint32_t)(EBX));
  /* 127f2474 push esi */
  push32((uint32_t)(ESI));
  /* 127f2475 push edi */
  push32((uint32_t)(EDI));
  /* 127f2476 push ebp */
  push32((uint32_t)(EBP));
  /* 127f2477 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f2479 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f247b push 0x127f2488 */
  push32((uint32_t)(0x127f2488u));
  /* 127f2480 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 127f2483 call 0x127f9bbc */
  push32(0x127f2488u); f_127f9bbc();
  /* 127f2488 pop ebp */
  EBP = (pop32());
  /* 127f2489 pop edi */
  EDI = (pop32());
  /* 127f248a pop esi */
  ESI = (pop32());
  /* 127f248b pop ebx */
  EBX = (pop32());
  /* 127f248c mov esp, ebp */
  ESP = (EBP);
  /* 127f248e pop ebp */
  EBP = (pop32());
  /* 127f248f ret  */
  ESPCHK(0x127f2470u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x127f24b2 (104 bytes, 33 insns) */
void f_127f24b2(void) {
  FTRACE(0x127f24b2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f24b2 push ebx */
  push32((uint32_t)(EBX));
  /* 127f24b3 push esi */
  push32((uint32_t)(ESI));
  /* 127f24b4 push edi */
  push32((uint32_t)(EDI));
  /* 127f24b5 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 127f24b9 push eax */
  push32((uint32_t)(EAX));
  /* 127f24ba push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 127f24bc push 0x127f2490 */
  push32((uint32_t)(0x127f2490u));
  /* 127f24c1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 127f24c8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_127f24cf:;
  /* 127f24cf mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 127f24d3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 127f24d6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 127f24d9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f24dc je 0x127f250c */
  if (C.zf) goto L_127f250c;
  /* 127f24de cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f24e2 je 0x127f250c */
  if (C.zf) goto L_127f250c;
  /* 127f24e4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 127f24e7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 127f24ea mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 127f24ee mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 127f24f1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f24f6 jne 0x127f250a */
  if (!C.zf) goto L_127f250a;
  /* 127f24f8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 127f24fd mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 127f2501 call 0x127f2546 */
  push32(0x127f2506u); f_127f2546();
  /* 127f2506 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x127f250au);
L_127f250a:;
  /* 127f250a jmp 0x127f24cf */
  goto L_127f24cf;
L_127f250c:;
  /* 127f250c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 127f2513 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f2516 pop edi */
  EDI = (pop32());
  /* 127f2517 pop esi */
  ESI = (pop32());
  /* 127f2518 pop ebx */
  EBX = (pop32());
  /* 127f2519 ret  */
  ESPCHK(0x127f24b2u, _esp0);
  ESP += 4; return;
}

/* FUN_10012546 @ 0x127f2546 (24 bytes, 10 insns) */
void f_127f2546(void) {
  FTRACE(0x127f2546u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f2546 push ebx */
  push32((uint32_t)(EBX));
  /* 127f2547 push ecx */
  push32((uint32_t)(ECX));
  /* 127f2548 mov ebx, 0x128143b8 */
  EBX = (0x128143b8u);
  /* 127f254d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f2550 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 127f2553 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 127f2556 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 127f2559 pop ecx */
  ECX = (pop32());
  /* 127f255a pop ebx */
  EBX = (pop32());
  /* 127f255b ret 4 */
  ESPCHK(0x127f2546u, _esp0);
  ESP += 8; return;
}

/* FUN_10012625 @ 0x127f2625 (27 bytes, 11 insns) */
void f_127f2625(void) {
  FTRACE(0x127f2625u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f2625 push ebp */
  push32((uint32_t)(EBP));
  /* 127f2626 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 127f262a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 127f262c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 127f262f push eax */
  push32((uint32_t)(EAX));
  /* 127f2630 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 127f2633 push eax */
  push32((uint32_t)(EAX));
  /* 127f2634 call 0x127f24b2 */
  push32(0x127f2639u); f_127f24b2();
  /* 127f2639 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f263c pop ebp */
  EBP = (pop32());
  /* 127f263d ret 4 */
  ESPCHK(0x127f2625u, _esp0);
  ESP += 8; return;
}

/* FUN_10012640 @ 0x127f2640 (482 bytes, 138 insns) */
void f_127f2640(void) {
  FTRACE(0x127f2640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f2640 push ebp */
  push32((uint32_t)(EBP));
  /* 127f2641 mov ebp, esp */
  EBP = (ESP);
  /* 127f2643 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f2646 push esi */
  push32((uint32_t)(ESI));
  /* 127f2647 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 127f264e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 127f2650 call 0x127ece60 */
  push32(0x127f2655u); f_127ece60();
  /* 127f2655 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f2658 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 127f265f jmp 0x127f266a */
  goto L_127f266a;
L_127f2661:;
  /* 127f2661 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f2664 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f2667 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_127f266a:;
  /* 127f266a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f266e jge 0x127f2810 */
  if ((C.sf==C.of)) goto L_127f2810;
  /* 127f2674 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f2677 cmp dword ptr [ecx*4 + 0x128171e0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x128171e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f267f je 0x127f2776 */
  if (C.zf) goto L_127f2776;
  /* 127f2685 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f2688 mov eax, dword ptr [edx*4 + 0x128171e0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x128171e0)));
  /* 127f268f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127f2692 jmp 0x127f269d */
  goto L_127f269d;
L_127f2694:;
  /* 127f2694 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f2697 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f269a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_127f269d:;
  /* 127f269d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f26a0 mov eax, dword ptr [edx*4 + 0x128171e0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x128171e0)));
  /* 127f26a7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f26ac cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f26af jae 0x127f2766 */
  if (!C.cf) goto L_127f2766;
  /* 127f26b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f26b8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 127f26bc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 127f26bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f26c1 jne 0x127f2761 */
  if (!C.zf) goto L_127f2761;
  /* 127f26c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f26ca cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f26ce jne 0x127f2709 */
  if (!C.zf) goto L_127f2709;
  /* 127f26d0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 127f26d2 call 0x127ece60 */
  push32(0x127f26d7u); f_127ece60();
  /* 127f26d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f26da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f26dd cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f26e1 jne 0x127f26ff */
  if (!C.zf) goto L_127f26ff;
  /* 127f26e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f26e6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f26e9 push edx */
  push32((uint32_t)(EDX));
  /* 127f26ea call dword ptr [0x1281831c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1281831c))), 0x127f26f0u);
  /* 127f26f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f26f3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 127f26f6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f26f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f26fc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_127f26ff:;
  /* 127f26ff push 0x11 */
  push32((uint32_t)(0x11u));
  /* 127f2701 call 0x127ecf00 */
  push32(0x127f2706u); f_127ecf00();
  /* 127f2706 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127f2709:;
  /* 127f2709 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f270c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f270f push eax */
  push32((uint32_t)(EAX));
  /* 127f2710 call dword ptr [0x12818318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12818318))), 0x127f2716u);
  /* 127f2716 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f2719 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 127f271d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 127f2720 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f2722 je 0x127f2736 */
  if (C.zf) goto L_127f2736;
  /* 127f2724 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f2727 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f272a push eax */
  push32((uint32_t)(EAX));
  /* 127f272b call dword ptr [0x12818314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12818314))), 0x127f2731u);
  /* 127f2731 jmp 0x127f2694 */
  goto L_127f2694;
L_127f2736:;
  /* 127f2736 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f2739 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 127f273f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f2742 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 127f2745 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f2748 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f274b sub eax, dword ptr [edx*4 + 0x128171e0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x128171e0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f2752 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127f2753 mov esi, 0x24 */
  ESI = (0x24u);
  /* 127f2758 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127f275a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f275c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127f275f jmp 0x127f2766 */
  goto L_127f2766;
L_127f2761:;
  /* 127f2761 jmp 0x127f2694 */
  goto L_127f2694;
L_127f2766:;
  /* 127f2766 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f276a je 0x127f2771 */
  if (C.zf) goto L_127f2771;
  /* 127f276c jmp 0x127f2810 */
  goto L_127f2810;
L_127f2771:;
  /* 127f2771 jmp 0x127f280b */
  goto L_127f280b;
L_127f2776:;
  /* 127f2776 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 127f2778 push 0x1281126c */
  push32((uint32_t)(0x1281126cu));
  /* 127f277d push 2 */
  push32((uint32_t)(0x2u));
  /* 127f277f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 127f2784 call 0x127e9460 */
  push32(0x127f2789u); f_127e9460();
  /* 127f2789 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f278c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127f278f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f2793 je 0x127f2809 */
  if (C.zf) goto L_127f2809;
  /* 127f2795 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f2798 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f279b mov dword ptr [eax*4 + 0x128171e0], ecx */
  w32((uint32_t)(EAX*4 + 0x128171e0), (ECX));
  /* 127f27a2 mov edx, dword ptr [0x1281731c] */
  EDX = (r32((uint32_t)(0x1281731c)));
  /* 127f27a8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f27ab mov dword ptr [0x1281731c], edx */
  w32((uint32_t)(0x1281731c), (EDX));
  /* 127f27b1 jmp 0x127f27bc */
  goto L_127f27bc;
L_127f27b3:;
  /* 127f27b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f27b6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f27b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127f27bc:;
  /* 127f27bc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f27bf mov edx, dword ptr [ecx*4 + 0x128171e0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x128171e0)));
  /* 127f27c6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f27cc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f27cf jae 0x127f27f4 */
  if (!C.cf) goto L_127f27f4;
  /* 127f27d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f27d4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 127f27d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f27db mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 127f27e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f27e4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 127f27e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f27eb mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 127f27f2 jmp 0x127f27b3 */
  goto L_127f27b3;
L_127f27f4:;
  /* 127f27f4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f27f7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 127f27fa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127f27fd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f2800 push edx */
  push32((uint32_t)(EDX));
  /* 127f2801 call 0x127f2b50 */
  push32(0x127f2806u); f_127f2b50();
  /* 127f2806 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127f2809:;
  /* 127f2809 jmp 0x127f2810 */
  goto L_127f2810;
L_127f280b:;
  /* 127f280b jmp 0x127f2661 */
  goto L_127f2661;
L_127f2810:;
  /* 127f2810 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 127f2812 call 0x127ecf00 */
  push32(0x127f2817u); f_127ecf00();
  /* 127f2817 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f281a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f281d pop esi */
  ESI = (pop32());
  /* 127f281e mov esp, ebp */
  ESP = (EBP);
  /* 127f2820 pop ebp */
  EBP = (pop32());
  /* 127f2821 ret  */
  ESPCHK(0x127f2640u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x127f2830 (183 bytes, 57 insns) */
void f_127f2830(void) {
  FTRACE(0x127f2830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f2830 push ebp */
  push32((uint32_t)(EBP));
  /* 127f2831 mov ebp, esp */
  EBP = (ESP);
  /* 127f2833 push ecx */
  push32((uint32_t)(ECX));
  /* 127f2834 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f2837 cmp eax, dword ptr [0x1281731c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1281731c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f283d jae 0x127f28ca */
  if (!C.cf) goto L_127f28ca;
  /* 127f2843 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f2846 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 127f2849 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f284c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 127f284f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f2852 mov eax, dword ptr [ecx*4 + 0x128171e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x128171e0)));
  /* 127f2859 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f285d jne 0x127f28ca */
  if (!C.zf) goto L_127f28ca;
  /* 127f285f cmp dword ptr [0x128157f8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x128157f8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f2866 jne 0x127f28aa */
  if (!C.zf) goto L_127f28aa;
  /* 127f2868 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f286b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127f286e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f2872 je 0x127f2882 */
  if (C.zf) goto L_127f2882;
  /* 127f2874 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f2878 je 0x127f2890 */
  if (C.zf) goto L_127f2890;
  /* 127f287a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f287e je 0x127f289e */
  if (C.zf) goto L_127f289e;
  /* 127f2880 jmp 0x127f28aa */
  goto L_127f28aa;
L_127f2882:;
  /* 127f2882 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f2885 push edx */
  push32((uint32_t)(EDX));
  /* 127f2886 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 127f2888 call dword ptr [0x128182d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182d4))), 0x127f288eu);
  /* 127f288e jmp 0x127f28aa */
  goto L_127f28aa;
L_127f2890:;
  /* 127f2890 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f2893 push eax */
  push32((uint32_t)(EAX));
  /* 127f2894 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 127f2896 call dword ptr [0x128182d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182d4))), 0x127f289cu);
  /* 127f289c jmp 0x127f28aa */
  goto L_127f28aa;
L_127f289e:;
  /* 127f289e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f28a1 push ecx */
  push32((uint32_t)(ECX));
  /* 127f28a2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 127f28a4 call dword ptr [0x128182d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182d4))), 0x127f28aau);
L_127f28aa:;
  /* 127f28aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f28ad sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 127f28b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f28b3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 127f28b6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f28b9 mov ecx, dword ptr [edx*4 + 0x128171e0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x128171e0)));
  /* 127f28c0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f28c3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 127f28c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f28c8 jmp 0x127f28e3 */
  goto L_127f28e3;
L_127f28ca:;
  /* 127f28ca call 0x127f1330 */
  push32(0x127f28cfu); f_127f1330();
  /* 127f28cf mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 127f28d5 call 0x127f1340 */
  push32(0x127f28dau); f_127f1340();
  /* 127f28da mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 127f28e0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_127f28e3:;
  /* 127f28e3 mov esp, ebp */
  ESP = (EBP);
  /* 127f28e5 pop ebp */
  EBP = (pop32());
  /* 127f28e6 ret  */
  ESPCHK(0x127f2830u, _esp0);
  ESP += 4; return;
}

/* FUN_100128f0 @ 0x127f28f0 (216 bytes, 63 insns) */
void f_127f28f0(void) {
  FTRACE(0x127f28f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f28f0 push ebp */
  push32((uint32_t)(EBP));
  /* 127f28f1 mov ebp, esp */
  EBP = (ESP);
  /* 127f28f3 push ecx */
  push32((uint32_t)(ECX));
  /* 127f28f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f28f7 cmp eax, dword ptr [0x1281731c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1281731c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f28fd jae 0x127f29ab */
  if (!C.cf) goto L_127f29ab;
  /* 127f2903 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f2906 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 127f2909 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f290c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 127f290f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f2912 mov eax, dword ptr [ecx*4 + 0x128171e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x128171e0)));
  /* 127f2919 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 127f291e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 127f2921 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127f2923 je 0x127f29ab */
  if (C.zf) goto L_127f29ab;
  /* 127f2929 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f292c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 127f292f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f2932 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 127f2935 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f2938 mov ecx, dword ptr [edx*4 + 0x128171e0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x128171e0)));
  /* 127f293f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f2943 je 0x127f29ab */
  if (C.zf) goto L_127f29ab;
  /* 127f2945 cmp dword ptr [0x128157f8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x128157f8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f294c jne 0x127f298a */
  if (!C.zf) goto L_127f298a;
  /* 127f294e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f2951 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127f2954 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f2958 je 0x127f2968 */
  if (C.zf) goto L_127f2968;
  /* 127f295a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f295e je 0x127f2974 */
  if (C.zf) goto L_127f2974;
  /* 127f2960 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f2964 je 0x127f2980 */
  if (C.zf) goto L_127f2980;
  /* 127f2966 jmp 0x127f298a */
  goto L_127f298a;
L_127f2968:;
  /* 127f2968 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f296a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 127f296c call dword ptr [0x128182d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182d4))), 0x127f2972u);
  /* 127f2972 jmp 0x127f298a */
  goto L_127f298a;
L_127f2974:;
  /* 127f2974 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f2976 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 127f2978 call dword ptr [0x128182d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182d4))), 0x127f297eu);
  /* 127f297e jmp 0x127f298a */
  goto L_127f298a;
L_127f2980:;
  /* 127f2980 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f2982 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 127f2984 call dword ptr [0x128182d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182d4))), 0x127f298au);
L_127f298a:;
  /* 127f298a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f298d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 127f2990 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f2993 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 127f2996 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f2999 mov edx, dword ptr [eax*4 + 0x128171e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x128171e0)));
  /* 127f29a0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 127f29a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f29a9 jmp 0x127f29c4 */
  goto L_127f29c4;
L_127f29ab:;
  /* 127f29ab call 0x127f1330 */
  push32(0x127f29b0u); f_127f1330();
  /* 127f29b0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 127f29b6 call 0x127f1340 */
  push32(0x127f29bbu); f_127f1340();
  /* 127f29bb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 127f29c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_127f29c4:;
  /* 127f29c4 mov esp, ebp */
  ESP = (EBP);
  /* 127f29c6 pop ebp */
  EBP = (pop32());
  /* 127f29c7 ret  */
  ESPCHK(0x127f28f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100129d0 @ 0x127f29d0 (102 bytes, 30 insns) */
void f_127f29d0(void) {
  FTRACE(0x127f29d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f29d0 push ebp */
  push32((uint32_t)(EBP));
  /* 127f29d1 mov ebp, esp */
  EBP = (ESP);
  /* 127f29d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f29d6 cmp eax, dword ptr [0x1281731c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1281731c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f29dc jae 0x127f2a1b */
  if (!C.cf) goto L_127f2a1b;
  /* 127f29de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f29e1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 127f29e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f29e7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 127f29ea imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f29ed mov eax, dword ptr [ecx*4 + 0x128171e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x128171e0)));
  /* 127f29f4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 127f29f9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 127f29fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127f29fe je 0x127f2a1b */
  if (C.zf) goto L_127f2a1b;
  /* 127f2a00 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f2a03 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 127f2a06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f2a09 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 127f2a0c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f2a0f mov ecx, dword ptr [edx*4 + 0x128171e0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x128171e0)));
  /* 127f2a16 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 127f2a19 jmp 0x127f2a34 */
  goto L_127f2a34;
L_127f2a1b:;
  /* 127f2a1b call 0x127f1330 */
  push32(0x127f2a20u); f_127f1330();
  /* 127f2a20 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 127f2a26 call 0x127f1340 */
  push32(0x127f2a2bu); f_127f1340();
  /* 127f2a2b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 127f2a31 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_127f2a34:;
  /* 127f2a34 pop ebp */
  EBP = (pop32());
  /* 127f2a35 ret  */
  ESPCHK(0x127f29d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a40 @ 0x127f2a40 (260 bytes, 83 insns) */
void f_127f2a40(void) {
  FTRACE(0x127f2a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f2a40 push ebp */
  push32((uint32_t)(EBP));
  /* 127f2a41 mov ebp, esp */
  EBP = (ESP);
  /* 127f2a43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f2a46 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 127f2a4a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f2a4d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 127f2a50 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f2a52 je 0x127f2a5d */
  if (C.zf) goto L_127f2a5d;
  /* 127f2a54 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 127f2a57 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 127f2a5a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_127f2a5d:;
  /* 127f2a5d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f2a60 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 127f2a66 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f2a68 je 0x127f2a72 */
  if (C.zf) goto L_127f2a72;
  /* 127f2a6a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 127f2a6d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 127f2a6f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_127f2a72:;
  /* 127f2a72 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f2a75 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 127f2a7b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127f2a7d je 0x127f2a88 */
  if (C.zf) goto L_127f2a88;
  /* 127f2a7f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 127f2a82 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 127f2a85 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_127f2a88:;
  /* 127f2a88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f2a8b push eax */
  push32((uint32_t)(EAX));
  /* 127f2a8c call dword ptr [0x12818384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12818384))), 0x127f2a92u);
  /* 127f2a92 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127f2a95 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f2a99 jne 0x127f2ab2 */
  if (!C.zf) goto L_127f2ab2;
  /* 127f2a9b call dword ptr [0x12818378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12818378))), 0x127f2aa1u);
  /* 127f2aa1 push eax */
  push32((uint32_t)(EAX));
  /* 127f2aa2 call 0x127f1290 */
  push32(0x127f2aa7u); f_127f1290();
  /* 127f2aa7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f2aaa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f2aad jmp 0x127f2b40 */
  goto L_127f2b40;
L_127f2ab2:;
  /* 127f2ab2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f2ab6 jne 0x127f2ac3 */
  if (!C.zf) goto L_127f2ac3;
  /* 127f2ab8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 127f2abb or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 127f2abe mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 127f2ac1 jmp 0x127f2ad2 */
  goto L_127f2ad2;
L_127f2ac3:;
  /* 127f2ac3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f2ac7 jne 0x127f2ad2 */
  if (!C.zf) goto L_127f2ad2;
  /* 127f2ac9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 127f2acc or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 127f2acf mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_127f2ad2:;
  /* 127f2ad2 call 0x127f2640 */
  push32(0x127f2ad7u); f_127f2640();
  /* 127f2ad7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127f2ada cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f2ade jne 0x127f2afb */
  if (!C.zf) goto L_127f2afb;
  /* 127f2ae0 call 0x127f1330 */
  push32(0x127f2ae5u); f_127f1330();
  /* 127f2ae5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 127f2aeb call 0x127f1340 */
  push32(0x127f2af0u); f_127f1340();
  /* 127f2af0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 127f2af6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f2af9 jmp 0x127f2b40 */
  goto L_127f2b40;
L_127f2afb:;
  /* 127f2afb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f2afe push eax */
  push32((uint32_t)(EAX));
  /* 127f2aff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f2b02 push ecx */
  push32((uint32_t)(ECX));
  /* 127f2b03 call 0x127f2830 */
  push32(0x127f2b08u); f_127f2830();
  /* 127f2b08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f2b0b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 127f2b0e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 127f2b11 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 127f2b14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f2b17 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 127f2b1a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f2b1d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 127f2b20 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f2b23 mov edx, dword ptr [eax*4 + 0x128171e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x128171e0)));
  /* 127f2b2a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 127f2b2d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 127f2b31 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f2b34 push ecx */
  push32((uint32_t)(ECX));
  /* 127f2b35 call 0x127f2be0 */
  push32(0x127f2b3au); f_127f2be0();
  /* 127f2b3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f2b3d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_127f2b40:;
  /* 127f2b40 mov esp, ebp */
  ESP = (EBP);
  /* 127f2b42 pop ebp */
  EBP = (pop32());
  /* 127f2b43 ret  */
  ESPCHK(0x127f2a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b50 @ 0x127f2b50 (134 bytes, 44 insns) */
void f_127f2b50(void) {
  FTRACE(0x127f2b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f2b50 push ebp */
  push32((uint32_t)(EBP));
  /* 127f2b51 mov ebp, esp */
  EBP = (ESP);
  /* 127f2b53 push ecx */
  push32((uint32_t)(ECX));
  /* 127f2b54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f2b57 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 127f2b5a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f2b5d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 127f2b60 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f2b63 mov edx, dword ptr [eax*4 + 0x128171e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x128171e0)));
  /* 127f2b6a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f2b6c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127f2b6f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f2b72 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f2b76 jne 0x127f2bb1 */
  if (!C.zf) goto L_127f2bb1;
  /* 127f2b78 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 127f2b7a call 0x127ece60 */
  push32(0x127f2b7fu); f_127ece60();
  /* 127f2b7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f2b82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f2b85 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f2b89 jne 0x127f2ba7 */
  if (!C.zf) goto L_127f2ba7;
  /* 127f2b8b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f2b8e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f2b91 push edx */
  push32((uint32_t)(EDX));
  /* 127f2b92 call dword ptr [0x1281831c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1281831c))), 0x127f2b98u);
  /* 127f2b98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f2b9b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 127f2b9e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f2ba1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f2ba4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_127f2ba7:;
  /* 127f2ba7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 127f2ba9 call 0x127ecf00 */
  push32(0x127f2baeu); f_127ecf00();
  /* 127f2bae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127f2bb1:;
  /* 127f2bb1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f2bb4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 127f2bb7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f2bba and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 127f2bbd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f2bc0 mov edx, dword ptr [eax*4 + 0x128171e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x128171e0)));
  /* 127f2bc7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 127f2bcb push eax */
  push32((uint32_t)(EAX));
  /* 127f2bcc call dword ptr [0x12818318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12818318))), 0x127f2bd2u);
  /* 127f2bd2 mov esp, ebp */
  ESP = (EBP);
  /* 127f2bd4 pop ebp */
  EBP = (pop32());
  /* 127f2bd5 ret  */
  ESPCHK(0x127f2b50u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x127f2be0 (38 bytes, 13 insns) */
void f_127f2be0(void) {
  FTRACE(0x127f2be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f2be0 push ebp */
  push32((uint32_t)(EBP));
  /* 127f2be1 mov ebp, esp */
  EBP = (ESP);
  /* 127f2be3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f2be6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 127f2be9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f2bec and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 127f2bef imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f2bf2 mov edx, dword ptr [eax*4 + 0x128171e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x128171e0)));
  /* 127f2bf9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 127f2bfd push eax */
  push32((uint32_t)(EAX));
  /* 127f2bfe call dword ptr [0x12818314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12818314))), 0x127f2c04u);
  /* 127f2c04 pop ebp */
  EBP = (pop32());
  /* 127f2c05 ret  */
  ESPCHK(0x127f2be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c10 @ 0x127f2c10 (218 bytes, 63 insns) */
void f_127f2c10(void) {
  FTRACE(0x127f2c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f2c10 push ebp */
  push32((uint32_t)(EBP));
  /* 127f2c11 mov ebp, esp */
  EBP = (ESP);
  /* 127f2c13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f2c16 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127f2c1d push 2 */
  push32((uint32_t)(0x2u));
  /* 127f2c1f call 0x127ece60 */
  push32(0x127f2c24u); f_127ece60();
  /* 127f2c24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f2c27 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 127f2c2e jmp 0x127f2c39 */
  goto L_127f2c39;
L_127f2c30:;
  /* 127f2c30 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f2c33 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f2c36 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_127f2c39:;
  /* 127f2c39 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f2c3c cmp ecx, dword ptr [0x12816ee0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12816ee0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f2c42 jge 0x127f2cd9 */
  if ((C.sf==C.of)) goto L_127f2cd9;
  /* 127f2c48 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f2c4b mov eax, dword ptr [0x12815b90] */
  EAX = (r32((uint32_t)(0x12815b90)));
  /* 127f2c50 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f2c54 je 0x127f2cd4 */
  if (C.zf) goto L_127f2cd4;
  /* 127f2c56 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f2c59 mov edx, dword ptr [0x12815b90] */
  EDX = (r32((uint32_t)(0x12815b90)));
  /* 127f2c5f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 127f2c62 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 127f2c65 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 127f2c6b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127f2c6d je 0x127f2c91 */
  if (C.zf) goto L_127f2c91;
  /* 127f2c6f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f2c72 mov eax, dword ptr [0x12815b90] */
  EAX = (r32((uint32_t)(0x12815b90)));
  /* 127f2c77 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 127f2c7a push ecx */
  push32((uint32_t)(ECX));
  /* 127f2c7b call 0x127f3a00 */
  push32(0x127f2c80u); f_127f3a00();
  /* 127f2c80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f2c83 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f2c86 je 0x127f2c91 */
  if (C.zf) goto L_127f2c91;
  /* 127f2c88 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f2c8b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f2c8e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_127f2c91:;
  /* 127f2c91 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f2c95 jl 0x127f2cd4 */
  if ((C.sf!=C.of)) goto L_127f2cd4;
  /* 127f2c97 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f2c9a mov ecx, dword ptr [0x12815b90] */
  ECX = (r32((uint32_t)(0x12815b90)));
  /* 127f2ca0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 127f2ca3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f2ca6 push edx */
  push32((uint32_t)(EDX));
  /* 127f2ca7 call dword ptr [0x1281838c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1281838c))), 0x127f2cadu);
  /* 127f2cad push 2 */
  push32((uint32_t)(0x2u));
  /* 127f2caf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f2cb2 mov ecx, dword ptr [0x12815b90] */
  ECX = (r32((uint32_t)(0x12815b90)));
  /* 127f2cb8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 127f2cbb push edx */
  push32((uint32_t)(EDX));
  /* 127f2cbc call 0x127e9ef0 */
  push32(0x127f2cc1u); f_127e9ef0();
  /* 127f2cc1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f2cc4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f2cc7 mov ecx, dword ptr [0x12815b90] */
  ECX = (r32((uint32_t)(0x12815b90)));
  /* 127f2ccd mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_127f2cd4:;
  /* 127f2cd4 jmp 0x127f2c30 */
  goto L_127f2c30;
L_127f2cd9:;
  /* 127f2cd9 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f2cdb call 0x127ecf00 */
  push32(0x127f2ce0u); f_127ecf00();
  /* 127f2ce0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f2ce3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f2ce6 mov esp, ebp */
  ESP = (EBP);
  /* 127f2ce8 pop ebp */
  EBP = (pop32());
  /* 127f2ce9 ret  */
  ESPCHK(0x127f2c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10012cf0 @ 0x127f2cf0 (68 bytes, 26 insns) */
void f_127f2cf0(void) {
  FTRACE(0x127f2cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f2cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 127f2cf1 mov ebp, esp */
  EBP = (ESP);
  /* 127f2cf3 push ecx */
  push32((uint32_t)(ECX));
  /* 127f2cf4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f2cf8 jne 0x127f2d06 */
  if (!C.zf) goto L_127f2d06;
  /* 127f2cfa push 0 */
  push32((uint32_t)(0x0u));
  /* 127f2cfc call 0x127f2e60 */
  push32(0x127f2d01u); f_127f2e60();
  /* 127f2d01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f2d04 jmp 0x127f2d30 */
  goto L_127f2d30;
L_127f2d06:;
  /* 127f2d06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f2d09 push eax */
  push32((uint32_t)(EAX));
  /* 127f2d0a call 0x127f2270 */
  push32(0x127f2d0fu); f_127f2270();
  /* 127f2d0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f2d12 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f2d15 push ecx */
  push32((uint32_t)(ECX));
  /* 127f2d16 call 0x127f2d40 */
  push32(0x127f2d1bu); f_127f2d40();
  /* 127f2d1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f2d1e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127f2d21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f2d24 push edx */
  push32((uint32_t)(EDX));
  /* 127f2d25 call 0x127f22e0 */
  push32(0x127f2d2au); f_127f22e0();
  /* 127f2d2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f2d2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_127f2d30:;
  /* 127f2d30 mov esp, ebp */
  ESP = (EBP);
  /* 127f2d32 pop ebp */
  EBP = (pop32());
  /* 127f2d33 ret  */
  ESPCHK(0x127f2cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d40 @ 0x127f2d40 (65 bytes, 26 insns) */
void f_127f2d40(void) {
  FTRACE(0x127f2d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f2d40 push ebp */
  push32((uint32_t)(EBP));
  /* 127f2d41 mov ebp, esp */
  EBP = (ESP);
  /* 127f2d43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f2d46 push eax */
  push32((uint32_t)(EAX));
  /* 127f2d47 call 0x127f2d90 */
  push32(0x127f2d4cu); f_127f2d90();
  /* 127f2d4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f2d4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f2d51 je 0x127f2d58 */
  if (C.zf) goto L_127f2d58;
  /* 127f2d53 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f2d56 jmp 0x127f2d7f */
  goto L_127f2d7f;
L_127f2d58:;
  /* 127f2d58 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f2d5b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 127f2d5e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 127f2d64 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f2d66 je 0x127f2d7d */
  if (C.zf) goto L_127f2d7d;
  /* 127f2d68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f2d6b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127f2d6e push ecx */
  push32((uint32_t)(ECX));
  /* 127f2d6f call 0x127f3b50 */
  push32(0x127f2d74u); f_127f3b50();
  /* 127f2d74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f2d77 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 127f2d79 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f2d7b jmp 0x127f2d7f */
  goto L_127f2d7f;
L_127f2d7d:;
  /* 127f2d7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127f2d7f:;
  /* 127f2d7f pop ebp */
  EBP = (pop32());
  /* 127f2d80 ret  */
  ESPCHK(0x127f2d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d90 @ 0x127f2d90 (183 bytes, 62 insns) */
void f_127f2d90(void) {
  FTRACE(0x127f2d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f2d90 push ebp */
  push32((uint32_t)(EBP));
  /* 127f2d91 mov ebp, esp */
  EBP = (ESP);
  /* 127f2d93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f2d96 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127f2d9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f2da0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127f2da3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f2da6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 127f2da9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 127f2dac cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f2daf jne 0x127f2e2b */
  if (!C.zf) goto L_127f2e2b;
  /* 127f2db1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f2db4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 127f2db7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 127f2dbd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127f2dbf je 0x127f2e2b */
  if (C.zf) goto L_127f2e2b;
  /* 127f2dc1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f2dc4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f2dc7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 127f2dc9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f2dcc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f2dcf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f2dd3 jle 0x127f2e2b */
  if ((C.zf||C.sf!=C.of)) goto L_127f2e2b;
  /* 127f2dd5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f2dd8 push edx */
  push32((uint32_t)(EDX));
  /* 127f2dd9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f2ddc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 127f2ddf push ecx */
  push32((uint32_t)(ECX));
  /* 127f2de0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f2de3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 127f2de6 push eax */
  push32((uint32_t)(EAX));
  /* 127f2de7 call 0x127f1d00 */
  push32(0x127f2decu); f_127f1d00();
  /* 127f2dec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f2def cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f2df2 jne 0x127f2e15 */
  if (!C.zf) goto L_127f2e15;
  /* 127f2df4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f2df7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 127f2dfa and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 127f2e00 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f2e02 je 0x127f2e13 */
  if (C.zf) goto L_127f2e13;
  /* 127f2e04 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f2e07 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 127f2e0a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 127f2e0d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f2e10 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_127f2e13:;
  /* 127f2e13 jmp 0x127f2e2b */
  goto L_127f2e2b;
L_127f2e15:;
  /* 127f2e15 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f2e18 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 127f2e1b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 127f2e1e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f2e21 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 127f2e24 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_127f2e2b:;
  /* 127f2e2b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f2e2e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f2e31 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 127f2e34 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 127f2e36 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f2e39 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 127f2e40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f2e43 mov esp, ebp */
  ESP = (EBP);
  /* 127f2e45 pop ebp */
  EBP = (pop32());
  /* 127f2e46 ret  */
  ESPCHK(0x127f2d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10012e50 @ 0x127f2e50 (15 bytes, 7 insns) */
void f_127f2e50(void) {
  FTRACE(0x127f2e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f2e50 push ebp */
  push32((uint32_t)(EBP));
  /* 127f2e51 mov ebp, esp */
  EBP = (ESP);
  /* 127f2e53 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f2e55 call 0x127f2e60 */
  push32(0x127f2e5au); f_127f2e60();
  /* 127f2e5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f2e5d pop ebp */
  EBP = (pop32());
  /* 127f2e5e ret  */
  ESPCHK(0x127f2e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10012e60 @ 0x127f2e60 (319 bytes, 94 insns) */
void f_127f2e60(void) {
  FTRACE(0x127f2e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f2e60 push ebp */
  push32((uint32_t)(EBP));
  /* 127f2e61 mov ebp, esp */
  EBP = (ESP);
  /* 127f2e63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f2e66 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127f2e6d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 127f2e74 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f2e76 call 0x127ece60 */
  push32(0x127f2e7bu); f_127ece60();
  /* 127f2e7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f2e7e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 127f2e85 jmp 0x127f2e90 */
  goto L_127f2e90;
L_127f2e87:;
  /* 127f2e87 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f2e8a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f2e8d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_127f2e90:;
  /* 127f2e90 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f2e93 cmp ecx, dword ptr [0x12816ee0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12816ee0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f2e99 jge 0x127f2f83 */
  if ((C.sf==C.of)) goto L_127f2f83;
  /* 127f2e9f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f2ea2 mov eax, dword ptr [0x12815b90] */
  EAX = (r32((uint32_t)(0x12815b90)));
  /* 127f2ea7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f2eab je 0x127f2f7e */
  if (C.zf) goto L_127f2f7e;
  /* 127f2eb1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f2eb4 mov edx, dword ptr [0x12815b90] */
  EDX = (r32((uint32_t)(0x12815b90)));
  /* 127f2eba mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 127f2ebd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 127f2ec0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 127f2ec6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127f2ec8 je 0x127f2f7e */
  if (C.zf) goto L_127f2f7e;
  /* 127f2ece mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f2ed1 mov eax, dword ptr [0x12815b90] */
  EAX = (r32((uint32_t)(0x12815b90)));
  /* 127f2ed6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 127f2ed9 push ecx */
  push32((uint32_t)(ECX));
  /* 127f2eda mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f2edd push edx */
  push32((uint32_t)(EDX));
  /* 127f2ede call 0x127f22b0 */
  push32(0x127f2ee3u); f_127f22b0();
  /* 127f2ee3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f2ee6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f2ee9 mov ecx, dword ptr [0x12815b90] */
  ECX = (r32((uint32_t)(0x12815b90)));
  /* 127f2eef mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 127f2ef2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 127f2ef5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 127f2efa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f2efc je 0x127f2f65 */
  if (C.zf) goto L_127f2f65;
  /* 127f2efe cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f2f02 jne 0x127f2f29 */
  if (!C.zf) goto L_127f2f29;
  /* 127f2f04 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f2f07 mov edx, dword ptr [0x12815b90] */
  EDX = (r32((uint32_t)(0x12815b90)));
  /* 127f2f0d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 127f2f10 push eax */
  push32((uint32_t)(EAX));
  /* 127f2f11 call 0x127f2d40 */
  push32(0x127f2f16u); f_127f2d40();
  /* 127f2f16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f2f19 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f2f1c je 0x127f2f27 */
  if (C.zf) goto L_127f2f27;
  /* 127f2f1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f2f21 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f2f24 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_127f2f27:;
  /* 127f2f27 jmp 0x127f2f65 */
  goto L_127f2f65;
L_127f2f29:;
  /* 127f2f29 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f2f2d jne 0x127f2f65 */
  if (!C.zf) goto L_127f2f65;
  /* 127f2f2f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f2f32 mov eax, dword ptr [0x12815b90] */
  EAX = (r32((uint32_t)(0x12815b90)));
  /* 127f2f37 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 127f2f3a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 127f2f3d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 127f2f40 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f2f42 je 0x127f2f65 */
  if (C.zf) goto L_127f2f65;
  /* 127f2f44 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f2f47 mov ecx, dword ptr [0x12815b90] */
  ECX = (r32((uint32_t)(0x12815b90)));
  /* 127f2f4d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 127f2f50 push edx */
  push32((uint32_t)(EDX));
  /* 127f2f51 call 0x127f2d40 */
  push32(0x127f2f56u); f_127f2d40();
  /* 127f2f56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f2f59 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f2f5c jne 0x127f2f65 */
  if (!C.zf) goto L_127f2f65;
  /* 127f2f5e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_127f2f65:;
  /* 127f2f65 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f2f68 mov ecx, dword ptr [0x12815b90] */
  ECX = (r32((uint32_t)(0x12815b90)));
  /* 127f2f6e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 127f2f71 push edx */
  push32((uint32_t)(EDX));
  /* 127f2f72 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f2f75 push eax */
  push32((uint32_t)(EAX));
  /* 127f2f76 call 0x127f2320 */
  push32(0x127f2f7bu); f_127f2320();
  /* 127f2f7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127f2f7e:;
  /* 127f2f7e jmp 0x127f2e87 */
  goto L_127f2e87;
L_127f2f83:;
  /* 127f2f83 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f2f85 call 0x127ecf00 */
  push32(0x127f2f8au); f_127ecf00();
  /* 127f2f8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f2f8d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f2f91 jne 0x127f2f98 */
  if (!C.zf) goto L_127f2f98;
  /* 127f2f93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f2f96 jmp 0x127f2f9b */
  goto L_127f2f9b;
L_127f2f98:;
  /* 127f2f98 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_127f2f9b:;
  /* 127f2f9b mov esp, ebp */
  ESP = (EBP);
  /* 127f2f9d pop ebp */
  EBP = (pop32());
  /* 127f2f9e ret  */
  ESPCHK(0x127f2e60u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x127f2fa0 (15 bytes, 7 insns) */
void f_127f2fa0(void) {
  FTRACE(0x127f2fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f2fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 127f2fa1 mov ebp, esp */
  EBP = (ESP);
  /* 127f2fa3 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f2fa5 call 0x127e83d0 */
  push32(0x127f2faau); f_127e83d0();
  /* 127f2faa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f2fad pop ebp */
  EBP = (pop32());
  /* 127f2fae ret  */
  ESPCHK(0x127f2fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012fb0 @ 0x127f2fb0 (1007 bytes, 269 insns) */
void f_127f2fb0(void) {
  FTRACE(0x127f2fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f2fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 127f2fb1 mov ebp, esp */
  EBP = (ESP);
  /* 127f2fb3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f2fb9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f2fbd jl 0x127f2fc5 */
  if ((C.sf!=C.of)) goto L_127f2fc5;
  /* 127f2fbf cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f2fc3 jle 0x127f2fcc */
  if ((C.zf||C.sf!=C.of)) goto L_127f2fcc;
L_127f2fc5:;
  /* 127f2fc5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f2fc7 jmp 0x127f339b */
  goto L_127f339b;
L_127f2fcc:;
  /* 127f2fcc push 0x13 */
  push32((uint32_t)(0x13u));
  /* 127f2fce call 0x127ece60 */
  push32(0x127f2fd3u); f_127ece60();
  /* 127f2fd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f2fd6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 127f2fdd mov eax, dword ptr [0x12815b7c] */
  EAX = (r32((uint32_t)(0x12815b7c)));
  /* 127f2fe2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f2fe5 mov dword ptr [0x12815b7c], eax */
  w32((uint32_t)(0x12815b7c), (EAX));
L_127f2fea:;
  /* 127f2fea cmp dword ptr [0x12815b8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815b8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f2ff1 je 0x127f2ffd */
  if (C.zf) goto L_127f2ffd;
  /* 127f2ff3 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f2ff5 call dword ptr [0x128182d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182d0))), 0x127f2ffbu);
  /* 127f2ffb jmp 0x127f2fea */
  goto L_127f2fea;
L_127f2ffd:;
  /* 127f2ffd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f3001 je 0x127f3041 */
  if (C.zf) goto L_127f3041;
  /* 127f3003 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f3007 je 0x127f3021 */
  if (C.zf) goto L_127f3021;
  /* 127f3009 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f300c push ecx */
  push32((uint32_t)(ECX));
  /* 127f300d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3010 push edx */
  push32((uint32_t)(EDX));
  /* 127f3011 call 0x127f33a0 */
  push32(0x127f3016u); f_127f33a0();
  /* 127f3016 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3019 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 127f301f jmp 0x127f3033 */
  goto L_127f3033;
L_127f3021:;
  /* 127f3021 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3024 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f3027 mov ecx, dword ptr [eax + 0x128144dc] */
  ECX = (r32((uint32_t)(EAX + 0x128144dc)));
  /* 127f302d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_127f3033:;
  /* 127f3033 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 127f3039 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 127f303c jmp 0x127f337b */
  goto L_127f337b;
L_127f3041:;
  /* 127f3041 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 127f3048 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 127f304f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f3053 je 0x127f3373 */
  if (C.zf) goto L_127f3373;
  /* 127f3059 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f305c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127f305f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f3062 jne 0x127f3284 */
  if (!C.zf) goto L_127f3284;
  /* 127f3068 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f306b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 127f306f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f3072 jne 0x127f3284 */
  if (!C.zf) goto L_127f3284;
  /* 127f3078 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f307b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 127f307f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f3082 jne 0x127f3284 */
  if (!C.zf) goto L_127f3284;
  /* 127f3088 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f308b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_127f3091:;
  /* 127f3091 push 0x128112bc */
  push32((uint32_t)(0x128112bcu));
  /* 127f3096 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 127f309c push ecx */
  push32((uint32_t)(ECX));
  /* 127f309d call 0x127f5200 */
  push32(0x127f30a2u); f_127f5200();
  /* 127f30a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f30a5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 127f30ab cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f30b2 je 0x127f30dd */
  if (C.zf) goto L_127f30dd;
  /* 127f30b4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 127f30ba sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f30c0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 127f30c6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f30cd je 0x127f30dd */
  if (C.zf) goto L_127f30dd;
  /* 127f30cf mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 127f30d5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127f30d8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f30db jne 0x127f3103 */
  if (!C.zf) goto L_127f3103;
L_127f30dd:;
  /* 127f30dd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f30e1 je 0x127f30fc */
  if (C.zf) goto L_127f30fc;
  /* 127f30e3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 127f30e5 call 0x127ecf00 */
  push32(0x127f30eau); f_127ecf00();
  /* 127f30ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f30ed mov edx, dword ptr [0x12815b7c] */
  EDX = (r32((uint32_t)(0x12815b7c)));
  /* 127f30f3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f30f6 mov dword ptr [0x12815b7c], edx */
  w32((uint32_t)(0x12815b7c), (EDX));
L_127f30fc:;
  /* 127f30fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f30fe jmp 0x127f339b */
  goto L_127f339b;
L_127f3103:;
  /* 127f3103 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 127f310a jmp 0x127f3115 */
  goto L_127f3115;
L_127f310c:;
  /* 127f310c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f310f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3112 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_127f3115:;
  /* 127f3115 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f3119 jg 0x127f3163 */
  if ((!C.zf&&C.sf==C.of)) goto L_127f3163;
  /* 127f311b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 127f3121 push ecx */
  push32((uint32_t)(ECX));
  /* 127f3122 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 127f3128 push edx */
  push32((uint32_t)(EDX));
  /* 127f3129 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f312c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f312f mov ecx, dword ptr [eax + 0x128144d8] */
  ECX = (r32((uint32_t)(EAX + 0x128144d8)));
  /* 127f3135 push ecx */
  push32((uint32_t)(ECX));
  /* 127f3136 call 0x127f51c0 */
  push32(0x127f313bu); f_127f51c0();
  /* 127f313b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f313e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f3140 jne 0x127f3161 */
  if (!C.zf) goto L_127f3161;
  /* 127f3142 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f3145 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f3148 mov eax, dword ptr [edx + 0x128144d8] */
  EAX = (r32((uint32_t)(EDX + 0x128144d8)));
  /* 127f314e push eax */
  push32((uint32_t)(EAX));
  /* 127f314f call 0x127ec290 */
  push32(0x127f3154u); f_127ec290();
  /* 127f3154 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3157 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f315d jne 0x127f3161 */
  if (!C.zf) goto L_127f3161;
  /* 127f315f jmp 0x127f3163 */
  goto L_127f3163;
L_127f3161:;
  /* 127f3161 jmp 0x127f310c */
  goto L_127f310c;
L_127f3163:;
  /* 127f3163 push 0x128112b8 */
  push32((uint32_t)(0x128112b8u));
  /* 127f3168 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 127f316e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3171 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 127f3177 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 127f317d push edx */
  push32((uint32_t)(EDX));
  /* 127f317e call 0x127f5180 */
  push32(0x127f3183u); f_127f5180();
  /* 127f3183 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3186 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 127f318c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f3193 jne 0x127f31c9 */
  if (!C.zf) goto L_127f31c9;
  /* 127f3195 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 127f319b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127f319e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f31a1 je 0x127f31c9 */
  if (C.zf) goto L_127f31c9;
  /* 127f31a3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f31a7 je 0x127f31c2 */
  if (C.zf) goto L_127f31c2;
  /* 127f31a9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 127f31ab call 0x127ecf00 */
  push32(0x127f31b0u); f_127ecf00();
  /* 127f31b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f31b3 mov edx, dword ptr [0x12815b7c] */
  EDX = (r32((uint32_t)(0x12815b7c)));
  /* 127f31b9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f31bc mov dword ptr [0x12815b7c], edx */
  w32((uint32_t)(0x12815b7c), (EDX));
L_127f31c2:;
  /* 127f31c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f31c4 jmp 0x127f339b */
  goto L_127f339b;
L_127f31c9:;
  /* 127f31c9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f31cd jg 0x127f321a */
  if ((!C.zf&&C.sf==C.of)) goto L_127f321a;
  /* 127f31cf mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 127f31d5 push eax */
  push32((uint32_t)(EAX));
  /* 127f31d6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 127f31dc push ecx */
  push32((uint32_t)(ECX));
  /* 127f31dd lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 127f31e3 push edx */
  push32((uint32_t)(EDX));
  /* 127f31e4 call 0x127ecc80 */
  push32(0x127f31e9u); f_127ecc80();
  /* 127f31e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f31ec mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 127f31f2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 127f31fa lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 127f3200 push ecx */
  push32((uint32_t)(ECX));
  /* 127f3201 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f3204 push edx */
  push32((uint32_t)(EDX));
  /* 127f3205 call 0x127f33a0 */
  push32(0x127f320au); f_127f33a0();
  /* 127f320a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f320d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f320f je 0x127f321a */
  if (C.zf) goto L_127f321a;
  /* 127f3211 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f3214 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3217 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_127f321a:;
  /* 127f321a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 127f3220 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3226 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 127f322c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 127f3232 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127f3235 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f3237 je 0x127f3248 */
  if (C.zf) goto L_127f3248;
  /* 127f3239 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 127f323f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3242 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_127f3248:;
  /* 127f3248 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 127f324e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127f3251 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f3253 jne 0x127f3091 */
  if (!C.zf) goto L_127f3091;
  /* 127f3259 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f325d je 0x127f326c */
  if (C.zf) goto L_127f326c;
  /* 127f325f call 0x127f3540 */
  push32(0x127f3264u); f_127f3540();
  /* 127f3264 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 127f326a jmp 0x127f3276 */
  goto L_127f3276;
L_127f326c:;
  /* 127f326c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_127f3276:;
  /* 127f3276 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 127f327c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127f327f jmp 0x127f3371 */
  goto L_127f3371;
L_127f3284:;
  /* 127f3284 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3287 push edx */
  push32((uint32_t)(EDX));
  /* 127f3288 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f328a push 0 */
  push32((uint32_t)(0x0u));
  /* 127f328c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 127f3292 push eax */
  push32((uint32_t)(EAX));
  /* 127f3293 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f3296 push ecx */
  push32((uint32_t)(ECX));
  /* 127f3297 call 0x127f3640 */
  push32(0x127f329cu); f_127f3640();
  /* 127f329c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f329f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127f32a2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f32a6 je 0x127f3371 */
  if (C.zf) goto L_127f3371;
  /* 127f32ac mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 127f32b3 jmp 0x127f32be */
  goto L_127f32be;
L_127f32b5:;
  /* 127f32b5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f32b8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f32bb mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_127f32be:;
  /* 127f32be cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f32c2 jg 0x127f3320 */
  if ((!C.zf&&C.sf==C.of)) goto L_127f3320;
  /* 127f32c4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f32c8 je 0x127f331e */
  if (C.zf) goto L_127f331e;
  /* 127f32ca mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f32cd imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f32d0 mov ecx, dword ptr [eax + 0x128144dc] */
  ECX = (r32((uint32_t)(EAX + 0x128144dc)));
  /* 127f32d6 push ecx */
  push32((uint32_t)(ECX));
  /* 127f32d7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 127f32dd push edx */
  push32((uint32_t)(EDX));
  /* 127f32de call 0x127f50f0 */
  push32(0x127f32e3u); f_127f50f0();
  /* 127f32e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f32e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f32e8 je 0x127f3315 */
  if (C.zf) goto L_127f3315;
  /* 127f32ea lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 127f32f0 push eax */
  push32((uint32_t)(EAX));
  /* 127f32f1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f32f4 push ecx */
  push32((uint32_t)(ECX));
  /* 127f32f5 call 0x127f33a0 */
  push32(0x127f32fau); f_127f33a0();
  /* 127f32fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f32fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f32ff je 0x127f330c */
  if (C.zf) goto L_127f330c;
  /* 127f3301 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f3304 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3307 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 127f330a jmp 0x127f3313 */
  goto L_127f3313;
L_127f330c:;
  /* 127f330c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_127f3313:;
  /* 127f3313 jmp 0x127f331e */
  goto L_127f331e;
L_127f3315:;
  /* 127f3315 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f3318 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f331b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_127f331e:;
  /* 127f331e jmp 0x127f32b5 */
  goto L_127f32b5;
L_127f3320:;
  /* 127f3320 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f3324 je 0x127f334b */
  if (C.zf) goto L_127f334b;
  /* 127f3326 call 0x127f3540 */
  push32(0x127f332bu); f_127f3540();
  /* 127f332b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127f332e push 2 */
  push32((uint32_t)(0x2u));
  /* 127f3330 mov ecx, dword ptr [0x128144dc] */
  ECX = (r32((uint32_t)(0x128144dc)));
  /* 127f3336 push ecx */
  push32((uint32_t)(ECX));
  /* 127f3337 call 0x127e9ef0 */
  push32(0x127f333cu); f_127e9ef0();
  /* 127f333c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f333f mov dword ptr [0x128144dc], 0 */
  w32((uint32_t)(0x128144dc), (0x0u));
  /* 127f3349 jmp 0x127f3371 */
  goto L_127f3371;
L_127f334b:;
  /* 127f334b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f334f je 0x127f335e */
  if (C.zf) goto L_127f335e;
  /* 127f3351 call 0x127f3540 */
  push32(0x127f3356u); f_127f3540();
  /* 127f3356 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 127f335c jmp 0x127f3368 */
  goto L_127f3368;
L_127f335e:;
  /* 127f335e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_127f3368:;
  /* 127f3368 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 127f336e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_127f3371:;
  /* 127f3371 jmp 0x127f337b */
  goto L_127f337b;
L_127f3373:;
  /* 127f3373 call 0x127f3540 */
  push32(0x127f3378u); f_127f3540();
  /* 127f3378 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_127f337b:;
  /* 127f337b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f337f je 0x127f3398 */
  if (C.zf) goto L_127f3398;
  /* 127f3381 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 127f3383 call 0x127ecf00 */
  push32(0x127f3388u); f_127ecf00();
  /* 127f3388 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f338b mov eax, dword ptr [0x12815b7c] */
  EAX = (r32((uint32_t)(0x12815b7c)));
  /* 127f3390 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f3393 mov dword ptr [0x12815b7c], eax */
  w32((uint32_t)(0x12815b7c), (EAX));
L_127f3398:;
  /* 127f3398 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_127f339b:;
  /* 127f339b mov esp, ebp */
  ESP = (EBP);
  /* 127f339d pop ebp */
  EBP = (pop32());
  /* 127f339e ret  */
  ESPCHK(0x127f2fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_100133a0 @ 0x127f33a0 (403 bytes, 117 insns) */
void f_127f33a0(void) {
  FTRACE(0x127f33a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f33a0 push ebp */
  push32((uint32_t)(EBP));
  /* 127f33a1 mov ebp, esp */
  EBP = (ESP);
  /* 127f33a3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f33a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f33ac push eax */
  push32((uint32_t)(EAX));
  /* 127f33ad lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 127f33b3 push ecx */
  push32((uint32_t)(ECX));
  /* 127f33b4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 127f33ba push edx */
  push32((uint32_t)(EDX));
  /* 127f33bb lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 127f33c1 push eax */
  push32((uint32_t)(EAX));
  /* 127f33c2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f33c5 push ecx */
  push32((uint32_t)(ECX));
  /* 127f33c6 call 0x127f3640 */
  push32(0x127f33cbu); f_127f3640();
  /* 127f33cb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f33ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f33d0 jne 0x127f33d9 */
  if (!C.zf) goto L_127f33d9;
  /* 127f33d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f33d4 jmp 0x127f352f */
  goto L_127f352f;
L_127f33d9:;
  /* 127f33d9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 127f33de push 0x128112c0 */
  push32((uint32_t)(0x128112c0u));
  /* 127f33e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f33e5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 127f33eb push edx */
  push32((uint32_t)(EDX));
  /* 127f33ec call 0x127ec290 */
  push32(0x127f33f1u); f_127ec290();
  /* 127f33f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f33f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f33f7 push eax */
  push32((uint32_t)(EAX));
  /* 127f33f8 call 0x127e9460 */
  push32(0x127f33fdu); f_127e9460();
  /* 127f33fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3400 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127f3403 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f3407 jne 0x127f3410 */
  if (!C.zf) goto L_127f3410;
  /* 127f3409 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f340b jmp 0x127f352f */
  goto L_127f352f;
L_127f3410:;
  /* 127f3410 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3413 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f3416 mov ecx, dword ptr [eax + 0x128144dc] */
  ECX = (r32((uint32_t)(EAX + 0x128144dc)));
  /* 127f341c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f341f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3422 mov eax, dword ptr [edx*4 + 0x128159f8] */
  EAX = (r32((uint32_t)(EDX*4 + 0x128159f8)));
  /* 127f3429 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127f342c push 6 */
  push32((uint32_t)(0x6u));
  /* 127f342e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3431 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f3434 add ecx, 0x12815a48 */
  { uint32_t _a=(ECX),_b=(0x12815a48u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f343a push ecx */
  push32((uint32_t)(ECX));
  /* 127f343b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 127f343e push edx */
  push32((uint32_t)(EDX));
  /* 127f343f call 0x127efd40 */
  push32(0x127f3444u); f_127efd40();
  /* 127f3444 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3447 mov eax, dword ptr [0x12815a10] */
  EAX = (r32((uint32_t)(0x12815a10)));
  /* 127f344c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 127f344f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 127f3455 push ecx */
  push32((uint32_t)(ECX));
  /* 127f3456 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f3459 push edx */
  push32((uint32_t)(EDX));
  /* 127f345a call 0x127ec410 */
  push32(0x127f345fu); f_127ec410();
  /* 127f345f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3462 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3465 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f3468 mov dword ptr [ecx + 0x128144dc], eax */
  w32((uint32_t)(ECX + 0x128144dc), (EAX));
  /* 127f346e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 127f3474 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 127f347a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f347d mov dword ptr [eax*4 + 0x128159f8], edx */
  w32((uint32_t)(EAX*4 + 0x128159f8), (EDX));
  /* 127f3484 push 6 */
  push32((uint32_t)(0x6u));
  /* 127f3486 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 127f348c push ecx */
  push32((uint32_t)(ECX));
  /* 127f348d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3490 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f3493 add edx, 0x12815a48 */
  { uint32_t _a=(EDX),_b=(0x12815a48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3499 push edx */
  push32((uint32_t)(EDX));
  /* 127f349a call 0x127efd40 */
  push32(0x127f349fu); f_127efd40();
  /* 127f349f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f34a2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f34a6 jne 0x127f34b3 */
  if (!C.zf) goto L_127f34b3;
  /* 127f34a8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 127f34ae mov dword ptr [0x12815a10], eax */
  w32((uint32_t)(0x12815a10), (EAX));
L_127f34b3:;
  /* 127f34b3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f34b7 jne 0x127f34c5 */
  if (!C.zf) goto L_127f34c5;
  /* 127f34b9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 127f34bf mov dword ptr [0x12815a14], ecx */
  w32((uint32_t)(0x12815a14), (ECX));
L_127f34c5:;
  /* 127f34c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f34c8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f34cb call dword ptr [edx + 0x128144e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x128144e0))), 0x127f34d1u);
  /* 127f34d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f34d3 je 0x127f350c */
  if (C.zf) goto L_127f350c;
  /* 127f34d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f34d8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f34db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f34de mov dword ptr [eax + 0x128144dc], ecx */
  w32((uint32_t)(EAX + 0x128144dc), (ECX));
  /* 127f34e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f34e6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f34e9 push edx */
  push32((uint32_t)(EDX));
  /* 127f34ea call 0x127e9ef0 */
  push32(0x127f34efu); f_127e9ef0();
  /* 127f34ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f34f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f34f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f34f8 mov dword ptr [eax*4 + 0x128159f8], ecx */
  w32((uint32_t)(EAX*4 + 0x128159f8), (ECX));
  /* 127f34ff mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127f3502 mov dword ptr [0x12815a10], edx */
  w32((uint32_t)(0x12815a10), (EDX));
  /* 127f3508 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f350a jmp 0x127f352f */
  goto L_127f352f;
L_127f350c:;
  /* 127f350c cmp dword ptr [ebp - 0xc], 0x128143c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x128143c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f3513 je 0x127f3523 */
  if (C.zf) goto L_127f3523;
  /* 127f3515 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f3517 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f351a push eax */
  push32((uint32_t)(EAX));
  /* 127f351b call 0x127e9ef0 */
  push32(0x127f3520u); f_127e9ef0();
  /* 127f3520 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127f3523:;
  /* 127f3523 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3526 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f3529 mov eax, dword ptr [ecx + 0x128144dc] */
  EAX = (r32((uint32_t)(ECX + 0x128144dc)));
L_127f352f:;
  /* 127f352f mov esp, ebp */
  ESP = (EBP);
  /* 127f3531 pop ebp */
  EBP = (pop32());
  /* 127f3532 ret  */
  ESPCHK(0x127f33a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013540 @ 0x127f3540 (256 bytes, 72 insns) */
void f_127f3540(void) {
  FTRACE(0x127f3540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f3540 push ebp */
  push32((uint32_t)(EBP));
  /* 127f3541 mov ebp, esp */
  EBP = (ESP);
  /* 127f3543 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f3546 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 127f354d cmp dword ptr [0x128144dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128144dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f3554 jne 0x127f3574 */
  if (!C.zf) goto L_127f3574;
  /* 127f3556 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 127f355b push 0x128112c0 */
  push32((uint32_t)(0x128112c0u));
  /* 127f3560 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f3562 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 127f3567 call 0x127e9460 */
  push32(0x127f356cu); f_127e9460();
  /* 127f356c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f356f mov dword ptr [0x128144dc], eax */
  w32((uint32_t)(0x128144dc), (EAX));
L_127f3574:;
  /* 127f3574 mov eax, dword ptr [0x128144dc] */
  EAX = (r32((uint32_t)(0x128144dc)));
  /* 127f3579 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 127f357c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 127f3583 jmp 0x127f358e */
  goto L_127f358e;
L_127f3585:;
  /* 127f3585 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f3588 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f358b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_127f358e:;
  /* 127f358e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f3591 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f3594 mov eax, dword ptr [edx + 0x128144dc] */
  EAX = (r32((uint32_t)(EDX + 0x128144dc)));
  /* 127f359a push eax */
  push32((uint32_t)(EAX));
  /* 127f359b push 0x128112cc */
  push32((uint32_t)(0x128112ccu));
  /* 127f35a0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f35a3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f35a6 mov edx, dword ptr [ecx + 0x128144d8] */
  EDX = (r32((uint32_t)(ECX + 0x128144d8)));
  /* 127f35ac push edx */
  push32((uint32_t)(EDX));
  /* 127f35ad push 3 */
  push32((uint32_t)(0x3u));
  /* 127f35af mov eax, dword ptr [0x128144dc] */
  EAX = (r32((uint32_t)(0x128144dc)));
  /* 127f35b4 push eax */
  push32((uint32_t)(EAX));
  /* 127f35b5 call 0x127f37e0 */
  push32(0x127f35bau); f_127f37e0();
  /* 127f35ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f35bd cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f35c1 jge 0x127f3609 */
  if ((C.sf==C.of)) goto L_127f3609;
  /* 127f35c3 push 0x128112b8 */
  push32((uint32_t)(0x128112b8u));
  /* 127f35c8 mov ecx, dword ptr [0x128144dc] */
  ECX = (r32((uint32_t)(0x128144dc)));
  /* 127f35ce push ecx */
  push32((uint32_t)(ECX));
  /* 127f35cf call 0x127ec420 */
  push32(0x127f35d4u); f_127ec420();
  /* 127f35d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f35d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f35da add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f35dd imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f35e0 mov eax, dword ptr [edx + 0x128144dc] */
  EAX = (r32((uint32_t)(EDX + 0x128144dc)));
  /* 127f35e6 push eax */
  push32((uint32_t)(EAX));
  /* 127f35e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f35ea imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f35ed mov edx, dword ptr [ecx + 0x128144dc] */
  EDX = (r32((uint32_t)(ECX + 0x128144dc)));
  /* 127f35f3 push edx */
  push32((uint32_t)(EDX));
  /* 127f35f4 call 0x127f50f0 */
  push32(0x127f35f9u); f_127f50f0();
  /* 127f35f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f35fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f35fe je 0x127f3607 */
  if (C.zf) goto L_127f3607;
  /* 127f3600 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_127f3607:;
  /* 127f3607 jmp 0x127f3637 */
  goto L_127f3637;
L_127f3609:;
  /* 127f3609 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f360d jne 0x127f3616 */
  if (!C.zf) goto L_127f3616;
  /* 127f360f mov eax, dword ptr [0x128144dc] */
  EAX = (r32((uint32_t)(0x128144dc)));
  /* 127f3614 jmp 0x127f363c */
  goto L_127f363c;
L_127f3616:;
  /* 127f3616 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f3618 mov eax, dword ptr [0x128144dc] */
  EAX = (r32((uint32_t)(0x128144dc)));
  /* 127f361d push eax */
  push32((uint32_t)(EAX));
  /* 127f361e call 0x127e9ef0 */
  push32(0x127f3623u); f_127e9ef0();
  /* 127f3623 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3626 mov dword ptr [0x128144dc], 0 */
  w32((uint32_t)(0x128144dc), (0x0u));
  /* 127f3630 mov eax, dword ptr [0x128144f4] */
  EAX = (r32((uint32_t)(0x128144f4)));
  /* 127f3635 jmp 0x127f363c */
  goto L_127f363c;
L_127f3637:;
  /* 127f3637 jmp 0x127f3585 */
  goto L_127f3585;
L_127f363c:;
  /* 127f363c mov esp, ebp */
  ESP = (EBP);
  /* 127f363e pop ebp */
  EBP = (pop32());
  /* 127f363f ret  */
  ESPCHK(0x127f3540u, _esp0);
  ESP += 4; return;
}

/* FUN_10013640 @ 0x127f3640 (388 bytes, 115 insns) */
void f_127f3640(void) {
  FTRACE(0x127f3640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f3640 push ebp */
  push32((uint32_t)(EBP));
  /* 127f3641 mov ebp, esp */
  EBP = (ESP);
  /* 127f3643 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f3649 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f364d jne 0x127f3656 */
  if (!C.zf) goto L_127f3656;
  /* 127f364f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f3651 jmp 0x127f37c0 */
  goto L_127f37c0;
L_127f3656:;
  /* 127f3656 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3659 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127f365c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f365f jne 0x127f36b0 */
  if (!C.zf) goto L_127f36b0;
  /* 127f3661 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3664 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 127f3668 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f366a jne 0x127f36b0 */
  if (!C.zf) goto L_127f36b0;
  /* 127f366c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f366f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 127f3672 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f3675 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 127f3679 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f367d je 0x127f3699 */
  if (C.zf) goto L_127f3699;
  /* 127f367f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f3682 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 127f3687 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f368a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 127f3690 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f3693 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_127f3699:;
  /* 127f3699 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f369d je 0x127f36a8 */
  if (C.zf) goto L_127f36a8;
  /* 127f369f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f36a2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_127f36a8:;
  /* 127f36a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f36ab jmp 0x127f37c0 */
  goto L_127f37c0;
L_127f36b0:;
  /* 127f36b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f36b3 push ecx */
  push32((uint32_t)(ECX));
  /* 127f36b4 push 0x12814450 */
  push32((uint32_t)(0x12814450u));
  /* 127f36b9 call 0x127f50f0 */
  push32(0x127f36beu); f_127f50f0();
  /* 127f36be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f36c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f36c3 je 0x127f3778 */
  if (C.zf) goto L_127f3778;
  /* 127f36c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f36cc push edx */
  push32((uint32_t)(EDX));
  /* 127f36cd push 0x128143cc */
  push32((uint32_t)(0x128143ccu));
  /* 127f36d2 call 0x127f50f0 */
  push32(0x127f36d7u); f_127f50f0();
  /* 127f36d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f36da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f36dc je 0x127f3778 */
  if (C.zf) goto L_127f3778;
  /* 127f36e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f36e5 push eax */
  push32((uint32_t)(EAX));
  /* 127f36e6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 127f36ec push ecx */
  push32((uint32_t)(ECX));
  /* 127f36ed call 0x127f3830 */
  push32(0x127f36f2u); f_127f3830();
  /* 127f36f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f36f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f36f7 je 0x127f3700 */
  if (C.zf) goto L_127f3700;
  /* 127f36f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f36fb jmp 0x127f37c0 */
  goto L_127f37c0;
L_127f3700:;
  /* 127f3700 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 127f3706 push edx */
  push32((uint32_t)(EDX));
  /* 127f3707 push 0x12815a20 */
  push32((uint32_t)(0x12815a20u));
  /* 127f370c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 127f3712 push eax */
  push32((uint32_t)(EAX));
  /* 127f3713 call 0x127f5240 */
  push32(0x127f3718u); f_127f5240();
  /* 127f3718 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f371b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f371d jne 0x127f3726 */
  if (!C.zf) goto L_127f3726;
  /* 127f371f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f3721 jmp 0x127f37c0 */
  goto L_127f37c0;
L_127f3726:;
  /* 127f3726 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127f3728 mov cx, word ptr [0x12815a24] */
  CX = (r16((uint32_t)(0x12815a24)));
  /* 127f372f mov dword ptr [0x12815a28], ecx */
  w32((uint32_t)(0x12815a28), (ECX));
  /* 127f3735 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 127f373b push edx */
  push32((uint32_t)(EDX));
  /* 127f373c push 0x12814450 */
  push32((uint32_t)(0x12814450u));
  /* 127f3741 call 0x127f3990 */
  push32(0x127f3746u); f_127f3990();
  /* 127f3746 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3749 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f374c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127f374f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127f3751 je 0x127f3766 */
  if (C.zf) goto L_127f3766;
  /* 127f3753 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3756 push edx */
  push32((uint32_t)(EDX));
  /* 127f3757 push 0x128143cc */
  push32((uint32_t)(0x128143ccu));
  /* 127f375c call 0x127ec410 */
  push32(0x127f3761u); f_127ec410();
  /* 127f3761 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3764 jmp 0x127f3778 */
  goto L_127f3778;
L_127f3766:;
  /* 127f3766 push 0x12814450 */
  push32((uint32_t)(0x12814450u));
  /* 127f376b push 0x128143cc */
  push32((uint32_t)(0x128143ccu));
  /* 127f3770 call 0x127ec410 */
  push32(0x127f3775u); f_127ec410();
  /* 127f3775 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127f3778:;
  /* 127f3778 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f377c je 0x127f3791 */
  if (C.zf) goto L_127f3791;
  /* 127f377e push 6 */
  push32((uint32_t)(0x6u));
  /* 127f3780 push 0x12815a20 */
  push32((uint32_t)(0x12815a20u));
  /* 127f3785 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f3788 push eax */
  push32((uint32_t)(EAX));
  /* 127f3789 call 0x127efd40 */
  push32(0x127f378eu); f_127efd40();
  /* 127f378e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127f3791:;
  /* 127f3791 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f3795 je 0x127f37aa */
  if (C.zf) goto L_127f37aa;
  /* 127f3797 push 4 */
  push32((uint32_t)(0x4u));
  /* 127f3799 push 0x12815a28 */
  push32((uint32_t)(0x12815a28u));
  /* 127f379e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f37a1 push ecx */
  push32((uint32_t)(ECX));
  /* 127f37a2 call 0x127efd40 */
  push32(0x127f37a7u); f_127efd40();
  /* 127f37a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127f37aa:;
  /* 127f37aa push 0x12814450 */
  push32((uint32_t)(0x12814450u));
  /* 127f37af mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f37b2 push edx */
  push32((uint32_t)(EDX));
  /* 127f37b3 call 0x127ec410 */
  push32(0x127f37b8u); f_127ec410();
  /* 127f37b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f37bb mov eax, 0x12814450 */
  EAX = (0x12814450u);
L_127f37c0:;
  /* 127f37c0 mov esp, ebp */
  ESP = (EBP);
  /* 127f37c2 pop ebp */
  EBP = (pop32());
  /* 127f37c3 ret  */
  ESPCHK(0x127f3640u, _esp0);
  ESP += 4; return;
}

/* FUN_100137d0 @ 0x127f37d0 (7 bytes, 5 insns) */
void f_127f37d0(void) {
  FTRACE(0x127f37d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f37d0 push ebp */
  push32((uint32_t)(EBP));
  /* 127f37d1 mov ebp, esp */
  EBP = (ESP);
  /* 127f37d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f37d5 pop ebp */
  EBP = (pop32());
  /* 127f37d6 ret  */
  ESPCHK(0x127f37d0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x127f37e0 (79 bytes, 28 insns) */
void f_127f37e0(void) {
  FTRACE(0x127f37e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f37e0 push ebp */
  push32((uint32_t)(EBP));
  /* 127f37e1 mov ebp, esp */
  EBP = (ESP);
  /* 127f37e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f37e6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 127f37e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127f37ec mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 127f37f3 jmp 0x127f37fe */
  goto L_127f37fe;
L_127f37f5:;
  /* 127f37f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f37f8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f37fb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_127f37fe:;
  /* 127f37fe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f3801 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f3804 jge 0x127f3824 */
  if ((C.sf==C.of)) goto L_127f3824;
  /* 127f3806 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f3809 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f380c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127f380f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f3812 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 127f3815 push edx */
  push32((uint32_t)(EDX));
  /* 127f3816 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3819 push eax */
  push32((uint32_t)(EAX));
  /* 127f381a call 0x127ec420 */
  push32(0x127f381fu); f_127ec420();
  /* 127f381f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3822 jmp 0x127f37f5 */
  goto L_127f37f5;
L_127f3824:;
  /* 127f3824 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127f382b mov esp, ebp */
  ESP = (EBP);
  /* 127f382d pop ebp */
  EBP = (pop32());
  /* 127f382e ret  */
  ESPCHK(0x127f37e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013830 @ 0x127f3830 (349 bytes, 122 insns) */
void f_127f3830(void) {
  FTRACE(0x127f3830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f3830 push ebp */
  push32((uint32_t)(EBP));
  /* 127f3831 mov ebp, esp */
  EBP = (ESP);
  /* 127f3833 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f3836 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 127f383b push 0 */
  push32((uint32_t)(0x0u));
  /* 127f383d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3840 push eax */
  push32((uint32_t)(EAX));
  /* 127f3841 call 0x127ed1d0 */
  push32(0x127f3846u); f_127ed1d0();
  /* 127f3846 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3849 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f384c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127f384f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f3851 jne 0x127f385a */
  if (!C.zf) goto L_127f385a;
  /* 127f3853 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f3855 jmp 0x127f3989 */
  goto L_127f3989;
L_127f385a:;
  /* 127f385a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f385d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127f3860 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f3863 jne 0x127f3890 */
  if (!C.zf) goto L_127f3890;
  /* 127f3865 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f3868 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 127f386c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f386e je 0x127f3890 */
  if (C.zf) goto L_127f3890;
  /* 127f3870 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f3873 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3876 push ecx */
  push32((uint32_t)(ECX));
  /* 127f3877 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f387a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3880 push edx */
  push32((uint32_t)(EDX));
  /* 127f3881 call 0x127ec410 */
  push32(0x127f3886u); f_127ec410();
  /* 127f3886 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3889 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f388b jmp 0x127f3989 */
  goto L_127f3989;
L_127f3890:;
  /* 127f3890 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127f3897 jmp 0x127f38a2 */
  goto L_127f38a2;
L_127f3899:;
  /* 127f3899 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f389c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f389f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127f38a2:;
  /* 127f38a2 push 0x128112d0 */
  push32((uint32_t)(0x128112d0u));
  /* 127f38a7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f38aa push ecx */
  push32((uint32_t)(ECX));
  /* 127f38ab call 0x127f5180 */
  push32(0x127f38b0u); f_127f5180();
  /* 127f38b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f38b3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127f38b6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f38ba jne 0x127f38c4 */
  if (!C.zf) goto L_127f38c4;
  /* 127f38bc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f38bf jmp 0x127f3989 */
  goto L_127f3989;
L_127f38c4:;
  /* 127f38c4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f38c7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f38ca mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127f38cc mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 127f38cf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f38d3 jne 0x127f38fa */
  if (!C.zf) goto L_127f38fa;
  /* 127f38d5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f38d9 jge 0x127f38fa */
  if ((C.sf==C.of)) goto L_127f38fa;
  /* 127f38db movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 127f38df cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f38e2 je 0x127f38fa */
  if (C.zf) goto L_127f38fa;
  /* 127f38e4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f38e7 push edx */
  push32((uint32_t)(EDX));
  /* 127f38e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f38eb push eax */
  push32((uint32_t)(EAX));
  /* 127f38ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f38ef push ecx */
  push32((uint32_t)(ECX));
  /* 127f38f0 call 0x127ecc80 */
  push32(0x127f38f5u); f_127ecc80();
  /* 127f38f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f38f8 jmp 0x127f3960 */
  goto L_127f3960;
L_127f38fa:;
  /* 127f38fa cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f38fe jne 0x127f3928 */
  if (!C.zf) goto L_127f3928;
  /* 127f3900 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f3904 jge 0x127f3928 */
  if ((C.sf==C.of)) goto L_127f3928;
  /* 127f3906 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 127f390a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f390d je 0x127f3928 */
  if (C.zf) goto L_127f3928;
  /* 127f390f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f3912 push eax */
  push32((uint32_t)(EAX));
  /* 127f3913 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f3916 push ecx */
  push32((uint32_t)(ECX));
  /* 127f3917 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f391a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f391d push edx */
  push32((uint32_t)(EDX));
  /* 127f391e call 0x127ecc80 */
  push32(0x127f3923u); f_127ecc80();
  /* 127f3923 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3926 jmp 0x127f3960 */
  goto L_127f3960;
L_127f3928:;
  /* 127f3928 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f392c jne 0x127f395b */
  if (!C.zf) goto L_127f395b;
  /* 127f392e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 127f3932 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f3934 je 0x127f393f */
  if (C.zf) goto L_127f393f;
  /* 127f3936 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 127f393a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f393d jne 0x127f395b */
  if (!C.zf) goto L_127f395b;
L_127f393f:;
  /* 127f393f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f3942 push edx */
  push32((uint32_t)(EDX));
  /* 127f3943 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f3946 push eax */
  push32((uint32_t)(EAX));
  /* 127f3947 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f394a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3950 push ecx */
  push32((uint32_t)(ECX));
  /* 127f3951 call 0x127ecc80 */
  push32(0x127f3956u); f_127ecc80();
  /* 127f3956 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3959 jmp 0x127f3960 */
  goto L_127f3960;
L_127f395b:;
  /* 127f395b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f395e jmp 0x127f3989 */
  goto L_127f3989;
L_127f3960:;
  /* 127f3960 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 127f3964 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f3967 jne 0x127f396b */
  if (!C.zf) goto L_127f396b;
  /* 127f3969 jmp 0x127f3987 */
  goto L_127f3987;
L_127f396b:;
  /* 127f396b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 127f396f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f3971 jne 0x127f3975 */
  if (!C.zf) goto L_127f3975;
  /* 127f3973 jmp 0x127f3987 */
  goto L_127f3987;
L_127f3975:;
  /* 127f3975 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f3978 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f397b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 127f397f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 127f3982 jmp 0x127f3899 */
  goto L_127f3899;
L_127f3987:;
  /* 127f3987 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127f3989:;
  /* 127f3989 mov esp, ebp */
  ESP = (EBP);
  /* 127f398b pop ebp */
  EBP = (pop32());
  /* 127f398c ret  */
  ESPCHK(0x127f3830u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x127f3990 (101 bytes, 36 insns) */
void f_127f3990(void) {
  FTRACE(0x127f3990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f3990 push ebp */
  push32((uint32_t)(EBP));
  /* 127f3991 mov ebp, esp */
  EBP = (ESP);
  /* 127f3993 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f3996 push eax */
  push32((uint32_t)(EAX));
  /* 127f3997 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f399a push ecx */
  push32((uint32_t)(ECX));
  /* 127f399b call 0x127ec410 */
  push32(0x127f39a0u); f_127ec410();
  /* 127f39a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f39a3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f39a6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 127f39aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f39ac je 0x127f39c8 */
  if (C.zf) goto L_127f39c8;
  /* 127f39ae mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f39b1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f39b4 push ecx */
  push32((uint32_t)(ECX));
  /* 127f39b5 push 0x128112d8 */
  push32((uint32_t)(0x128112d8u));
  /* 127f39ba push 2 */
  push32((uint32_t)(0x2u));
  /* 127f39bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f39bf push edx */
  push32((uint32_t)(EDX));
  /* 127f39c0 call 0x127f37e0 */
  push32(0x127f39c5u); f_127f37e0();
  /* 127f39c5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127f39c8:;
  /* 127f39c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f39cb movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 127f39d2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127f39d4 je 0x127f39f3 */
  if (C.zf) goto L_127f39f3;
  /* 127f39d6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f39d9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f39df push edx */
  push32((uint32_t)(EDX));
  /* 127f39e0 push 0x128112d4 */
  push32((uint32_t)(0x128112d4u));
  /* 127f39e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f39e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f39ea push eax */
  push32((uint32_t)(EAX));
  /* 127f39eb call 0x127f37e0 */
  push32(0x127f39f0u); f_127f37e0();
  /* 127f39f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127f39f3:;
  /* 127f39f3 pop ebp */
  EBP = (pop32());
  /* 127f39f4 ret  */
  ESPCHK(0x127f3990u, _esp0);
  ESP += 4; return;
}

/* FUN_10013a00 @ 0x127f3a00 (130 bytes, 50 insns) */
void f_127f3a00(void) {
  FTRACE(0x127f3a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f3a00 push ebp */
  push32((uint32_t)(EBP));
  /* 127f3a01 mov ebp, esp */
  EBP = (ESP);
  /* 127f3a03 push ecx */
  push32((uint32_t)(ECX));
  /* 127f3a04 push ebx */
  push32((uint32_t)(EBX));
  /* 127f3a05 push esi */
  push32((uint32_t)(ESI));
  /* 127f3a06 push edi */
  push32((uint32_t)(EDI));
  /* 127f3a07 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_127f3a0e:;
  /* 127f3a0e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f3a12 jne 0x127f3a32 */
  if (!C.zf) goto L_127f3a32;
  /* 127f3a14 push 0x128112e8 */
  push32((uint32_t)(0x128112e8u));
  /* 127f3a19 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f3a1b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 127f3a1d push 0x128112dc */
  push32((uint32_t)(0x128112dcu));
  /* 127f3a22 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f3a24 call 0x127e8520 */
  push32(0x127f3a29u); f_127e8520();
  /* 127f3a29 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3a2c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f3a2f jne 0x127f3a32 */
  if (!C.zf) goto L_127f3a32;
  /* 127f3a31 int3  */
  x86_unimpl("int3 @ 0x127f3a31");
L_127f3a32:;
  /* 127f3a32 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f3a34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f3a36 jne 0x127f3a0e */
  if (!C.zf) goto L_127f3a0e;
  /* 127f3a38 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3a3b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 127f3a3e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 127f3a41 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f3a43 je 0x127f3a51 */
  if (C.zf) goto L_127f3a51;
  /* 127f3a45 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3a48 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 127f3a4f jmp 0x127f3a78 */
  goto L_127f3a78;
L_127f3a51:;
  /* 127f3a51 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3a54 push ecx */
  push32((uint32_t)(ECX));
  /* 127f3a55 call 0x127f2270 */
  push32(0x127f3a5au); f_127f2270();
  /* 127f3a5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3a5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3a60 push edx */
  push32((uint32_t)(EDX));
  /* 127f3a61 call 0x127f3a90 */
  push32(0x127f3a66u); f_127f3a90();
  /* 127f3a66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3a69 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127f3a6c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3a6f push eax */
  push32((uint32_t)(EAX));
  /* 127f3a70 call 0x127f22e0 */
  push32(0x127f3a75u); f_127f22e0();
  /* 127f3a75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127f3a78:;
  /* 127f3a78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f3a7b pop edi */
  EDI = (pop32());
  /* 127f3a7c pop esi */
  ESI = (pop32());
  /* 127f3a7d pop ebx */
  EBX = (pop32());
  /* 127f3a7e mov esp, ebp */
  ESP = (EBP);
  /* 127f3a80 pop ebp */
  EBP = (pop32());
  /* 127f3a81 ret  */
  ESPCHK(0x127f3a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10013a90 @ 0x127f3a90 (190 bytes, 67 insns) */
void f_127f3a90(void) {
  FTRACE(0x127f3a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f3a90 push ebp */
  push32((uint32_t)(EBP));
  /* 127f3a91 mov ebp, esp */
  EBP = (ESP);
  /* 127f3a93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f3a96 push ebx */
  push32((uint32_t)(EBX));
  /* 127f3a97 push esi */
  push32((uint32_t)(ESI));
  /* 127f3a98 push edi */
  push32((uint32_t)(EDI));
  /* 127f3a99 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 127f3aa0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3aa3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_127f3aa6:;
  /* 127f3aa6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f3aaa jne 0x127f3aca */
  if (!C.zf) goto L_127f3aca;
  /* 127f3aac push 0x12811188 */
  push32((uint32_t)(0x12811188u));
  /* 127f3ab1 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f3ab3 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 127f3ab5 push 0x128112dc */
  push32((uint32_t)(0x128112dcu));
  /* 127f3aba push 2 */
  push32((uint32_t)(0x2u));
  /* 127f3abc call 0x127e8520 */
  push32(0x127f3ac1u); f_127e8520();
  /* 127f3ac1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3ac4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f3ac7 jne 0x127f3aca */
  if (!C.zf) goto L_127f3aca;
  /* 127f3ac9 int3  */
  x86_unimpl("int3 @ 0x127f3ac9");
L_127f3aca:;
  /* 127f3aca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127f3acc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127f3ace jne 0x127f3aa6 */
  if (!C.zf) goto L_127f3aa6;
  /* 127f3ad0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f3ad3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 127f3ad6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 127f3adb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f3add je 0x127f3b3a */
  if (C.zf) goto L_127f3b3a;
  /* 127f3adf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f3ae2 push ecx */
  push32((uint32_t)(ECX));
  /* 127f3ae3 call 0x127f2d90 */
  push32(0x127f3ae8u); f_127f2d90();
  /* 127f3ae8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3aeb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127f3aee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f3af1 push edx */
  push32((uint32_t)(EDX));
  /* 127f3af2 call 0x127f6110 */
  push32(0x127f3af7u); f_127f6110();
  /* 127f3af7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3afa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f3afd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127f3b00 push ecx */
  push32((uint32_t)(ECX));
  /* 127f3b01 call 0x127f5fe0 */
  push32(0x127f3b06u); f_127f5fe0();
  /* 127f3b06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3b09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f3b0b jge 0x127f3b16 */
  if ((C.sf==C.of)) goto L_127f3b16;
  /* 127f3b0d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 127f3b14 jmp 0x127f3b3a */
  goto L_127f3b3a;
L_127f3b16:;
  /* 127f3b16 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f3b19 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f3b1d je 0x127f3b3a */
  if (C.zf) goto L_127f3b3a;
  /* 127f3b1f push 2 */
  push32((uint32_t)(0x2u));
  /* 127f3b21 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f3b24 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 127f3b27 push ecx */
  push32((uint32_t)(ECX));
  /* 127f3b28 call 0x127e9ef0 */
  push32(0x127f3b2du); f_127e9ef0();
  /* 127f3b2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3b30 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f3b33 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_127f3b3a:;
  /* 127f3b3a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f3b3d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 127f3b44 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f3b47 pop edi */
  EDI = (pop32());
  /* 127f3b48 pop esi */
  ESI = (pop32());
  /* 127f3b49 pop ebx */
  EBX = (pop32());
  /* 127f3b4a mov esp, ebp */
  ESP = (EBP);
  /* 127f3b4c pop ebp */
  EBP = (pop32());
  /* 127f3b4d ret  */
  ESPCHK(0x127f3a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b50 @ 0x127f3b50 (210 bytes, 63 insns) */
void f_127f3b50(void) {
  FTRACE(0x127f3b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f3b50 push ebp */
  push32((uint32_t)(EBP));
  /* 127f3b51 mov ebp, esp */
  EBP = (ESP);
  /* 127f3b53 push ecx */
  push32((uint32_t)(ECX));
  /* 127f3b54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3b57 cmp eax, dword ptr [0x1281731c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1281731c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f3b5d jae 0x127f3b81 */
  if (!C.cf) goto L_127f3b81;
  /* 127f3b5f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3b62 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 127f3b65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3b68 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 127f3b6b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f3b6e mov eax, dword ptr [ecx*4 + 0x128171e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x128171e0)));
  /* 127f3b75 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 127f3b7a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 127f3b7d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127f3b7f jne 0x127f3b94 */
  if (!C.zf) goto L_127f3b94;
L_127f3b81:;
  /* 127f3b81 call 0x127f1330 */
  push32(0x127f3b86u); f_127f1330();
  /* 127f3b86 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 127f3b8c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f3b8f jmp 0x127f3c1e */
  goto L_127f3c1e;
L_127f3b94:;
  /* 127f3b94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3b97 push edx */
  push32((uint32_t)(EDX));
  /* 127f3b98 call 0x127f2b50 */
  push32(0x127f3b9du); f_127f2b50();
  /* 127f3b9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3ba0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3ba3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 127f3ba6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3ba9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 127f3bac imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f3baf mov edx, dword ptr [eax*4 + 0x128171e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x128171e0)));
  /* 127f3bb6 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 127f3bbb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 127f3bbe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f3bc0 je 0x127f3bfd */
  if (C.zf) goto L_127f3bfd;
  /* 127f3bc2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3bc5 push ecx */
  push32((uint32_t)(ECX));
  /* 127f3bc6 call 0x127f29d0 */
  push32(0x127f3bcbu); f_127f29d0();
  /* 127f3bcb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3bce push eax */
  push32((uint32_t)(EAX));
  /* 127f3bcf call dword ptr [0x128182cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182cc))), 0x127f3bd5u);
  /* 127f3bd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f3bd7 jne 0x127f3be4 */
  if (!C.zf) goto L_127f3be4;
  /* 127f3bd9 call dword ptr [0x12818378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12818378))), 0x127f3bdfu);
  /* 127f3bdf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127f3be2 jmp 0x127f3beb */
  goto L_127f3beb;
L_127f3be4:;
  /* 127f3be4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_127f3beb:;
  /* 127f3beb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f3bef jne 0x127f3bf3 */
  if (!C.zf) goto L_127f3bf3;
  /* 127f3bf1 jmp 0x127f3c0f */
  goto L_127f3c0f;
L_127f3bf3:;
  /* 127f3bf3 call 0x127f1340 */
  push32(0x127f3bf8u); f_127f1340();
  /* 127f3bf8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f3bfb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_127f3bfd:;
  /* 127f3bfd call 0x127f1330 */
  push32(0x127f3c02u); f_127f1330();
  /* 127f3c02 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 127f3c08 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_127f3c0f:;
  /* 127f3c0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3c12 push eax */
  push32((uint32_t)(EAX));
  /* 127f3c13 call 0x127f2be0 */
  push32(0x127f3c18u); f_127f2be0();
  /* 127f3c18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3c1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_127f3c1e:;
  /* 127f3c1e mov esp, ebp */
  ESP = (EBP);
  /* 127f3c20 pop ebp */
  EBP = (pop32());
  /* 127f3c21 ret  */
  ESPCHK(0x127f3b50u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x127f3c30 (219 bytes, 64 insns) */
void f_127f3c30(void) {
  FTRACE(0x127f3c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f3c30 push ebp */
  push32((uint32_t)(EBP));
  /* 127f3c31 mov ebp, esp */
  EBP = (ESP);
  /* 127f3c33 push ecx */
  push32((uint32_t)(ECX));
  /* 127f3c34 cmp dword ptr [0x12815a0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815a0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f3c3b je 0x127f3cd1 */
  if (C.zf) goto L_127f3cd1;
  /* 127f3c41 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 127f3c43 push 0x128112f8 */
  push32((uint32_t)(0x128112f8u));
  /* 127f3c48 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f3c4a push 0xac */
  push32((uint32_t)(0xacu));
  /* 127f3c4f push 1 */
  push32((uint32_t)(0x1u));
  /* 127f3c51 call 0x127e9870 */
  push32(0x127f3c56u); f_127e9870();
  /* 127f3c56 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3c59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127f3c5c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f3c60 jne 0x127f3c6c */
  if (!C.zf) goto L_127f3c6c;
  /* 127f3c62 mov eax, 1 */
  EAX = (0x1u);
  /* 127f3c67 jmp 0x127f3d07 */
  goto L_127f3d07;
L_127f3c6c:;
  /* 127f3c6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f3c6f push eax */
  push32((uint32_t)(EAX));
  /* 127f3c70 call 0x127f3d10 */
  push32(0x127f3c75u); f_127f3d10();
  /* 127f3c75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3c78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f3c7a je 0x127f3c9d */
  if (C.zf) goto L_127f3c9d;
  /* 127f3c7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f3c7f push ecx */
  push32((uint32_t)(ECX));
  /* 127f3c80 call 0x127f42a0 */
  push32(0x127f3c85u); f_127f42a0();
  /* 127f3c85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3c88 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f3c8a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f3c8d push edx */
  push32((uint32_t)(EDX));
  /* 127f3c8e call 0x127e9ef0 */
  push32(0x127f3c93u); f_127e9ef0();
  /* 127f3c93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3c96 mov eax, 1 */
  EAX = (0x1u);
  /* 127f3c9b jmp 0x127f3d07 */
  goto L_127f3d07;
L_127f3c9d:;
  /* 127f3c9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f3ca0 mov dword ptr [0x12814c98], eax */
  w32((uint32_t)(0x12814c98), (EAX));
  /* 127f3ca5 mov ecx, dword ptr [0x12815a2c] */
  ECX = (r32((uint32_t)(0x12815a2c)));
  /* 127f3cab push ecx */
  push32((uint32_t)(ECX));
  /* 127f3cac call 0x127f42a0 */
  push32(0x127f3cb1u); f_127f42a0();
  /* 127f3cb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3cb4 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f3cb6 mov edx, dword ptr [0x12815a2c] */
  EDX = (r32((uint32_t)(0x12815a2c)));
  /* 127f3cbc push edx */
  push32((uint32_t)(EDX));
  /* 127f3cbd call 0x127e9ef0 */
  push32(0x127f3cc2u); f_127e9ef0();
  /* 127f3cc2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3cc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f3cc8 mov dword ptr [0x12815a2c], eax */
  w32((uint32_t)(0x12815a2c), (EAX));
  /* 127f3ccd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f3ccf jmp 0x127f3d07 */
  goto L_127f3d07;
L_127f3cd1:;
  /* 127f3cd1 mov dword ptr [0x12814c98], 0x12814ca0 */
  w32((uint32_t)(0x12814c98), (0x12814ca0u));
  /* 127f3cdb mov ecx, dword ptr [0x12815a2c] */
  ECX = (r32((uint32_t)(0x12815a2c)));
  /* 127f3ce1 push ecx */
  push32((uint32_t)(ECX));
  /* 127f3ce2 call 0x127f42a0 */
  push32(0x127f3ce7u); f_127f42a0();
  /* 127f3ce7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3cea push 2 */
  push32((uint32_t)(0x2u));
  /* 127f3cec mov edx, dword ptr [0x12815a2c] */
  EDX = (r32((uint32_t)(0x12815a2c)));
  /* 127f3cf2 push edx */
  push32((uint32_t)(EDX));
  /* 127f3cf3 call 0x127e9ef0 */
  push32(0x127f3cf8u); f_127e9ef0();
  /* 127f3cf8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3cfb mov dword ptr [0x12815a2c], 0 */
  w32((uint32_t)(0x12815a2c), (0x0u));
  /* 127f3d05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127f3d07:;
  /* 127f3d07 mov esp, ebp */
  ESP = (EBP);
  /* 127f3d09 pop ebp */
  EBP = (pop32());
  /* 127f3d0a ret  */
  ESPCHK(0x127f3c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10013d10 @ 0x127f3d10 (1423 bytes, 533 insns) */
void f_127f3d10(void) {
  FTRACE(0x127f3d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f3d10 push ebp */
  push32((uint32_t)(EBP));
  /* 127f3d11 mov ebp, esp */
  EBP = (ESP);
  /* 127f3d13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f3d16 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 127f3d1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f3d1f mov ax, word ptr [0x12815a66] */
  AX = (r16((uint32_t)(0x12815a66)));
  /* 127f3d25 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127f3d28 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127f3d2a mov cx, word ptr [0x12815a68] */
  CX = (r16((uint32_t)(0x12815a68)));
  /* 127f3d31 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127f3d34 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f3d38 jne 0x127f3d42 */
  if (!C.zf) goto L_127f3d42;
  /* 127f3d3a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f3d3d jmp 0x127f429b */
  goto L_127f429b;
L_127f3d42:;
  /* 127f3d42 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3d45 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3d48 push edx */
  push32((uint32_t)(EDX));
  /* 127f3d49 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 127f3d4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f3d4e push eax */
  push32((uint32_t)(EAX));
  /* 127f3d4f push 1 */
  push32((uint32_t)(0x1u));
  /* 127f3d51 call 0x127f7620 */
  push32(0x127f3d56u); f_127f7620();
  /* 127f3d56 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3d59 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f3d5c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f3d5e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f3d61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3d64 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3d67 push edx */
  push32((uint32_t)(EDX));
  /* 127f3d68 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 127f3d6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f3d6d push eax */
  push32((uint32_t)(EAX));
  /* 127f3d6e push 1 */
  push32((uint32_t)(0x1u));
  /* 127f3d70 call 0x127f7620 */
  push32(0x127f3d75u); f_127f7620();
  /* 127f3d75 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3d78 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f3d7b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f3d7d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f3d80 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3d83 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3d86 push edx */
  push32((uint32_t)(EDX));
  /* 127f3d87 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 127f3d89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f3d8c push eax */
  push32((uint32_t)(EAX));
  /* 127f3d8d push 1 */
  push32((uint32_t)(0x1u));
  /* 127f3d8f call 0x127f7620 */
  push32(0x127f3d94u); f_127f7620();
  /* 127f3d94 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3d97 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f3d9a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f3d9c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f3d9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3da2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3da5 push edx */
  push32((uint32_t)(EDX));
  /* 127f3da6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 127f3da8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f3dab push eax */
  push32((uint32_t)(EAX));
  /* 127f3dac push 1 */
  push32((uint32_t)(0x1u));
  /* 127f3dae call 0x127f7620 */
  push32(0x127f3db3u); f_127f7620();
  /* 127f3db3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3db6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f3db9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f3dbb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f3dbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3dc1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3dc4 push edx */
  push32((uint32_t)(EDX));
  /* 127f3dc5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 127f3dc7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f3dca push eax */
  push32((uint32_t)(EAX));
  /* 127f3dcb push 1 */
  push32((uint32_t)(0x1u));
  /* 127f3dcd call 0x127f7620 */
  push32(0x127f3dd2u); f_127f7620();
  /* 127f3dd2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3dd5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f3dd8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f3dda mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f3ddd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3de0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3de3 push edx */
  push32((uint32_t)(EDX));
  /* 127f3de4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 127f3de6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f3de9 push eax */
  push32((uint32_t)(EAX));
  /* 127f3dea push 1 */
  push32((uint32_t)(0x1u));
  /* 127f3dec call 0x127f7620 */
  push32(0x127f3df1u); f_127f7620();
  /* 127f3df1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3df4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f3df7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f3df9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f3dfc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3dff push edx */
  push32((uint32_t)(EDX));
  /* 127f3e00 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 127f3e02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f3e05 push eax */
  push32((uint32_t)(EAX));
  /* 127f3e06 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f3e08 call 0x127f7620 */
  push32(0x127f3e0du); f_127f7620();
  /* 127f3e0d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3e10 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f3e13 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f3e15 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f3e18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3e1b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3e1e push edx */
  push32((uint32_t)(EDX));
  /* 127f3e1f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 127f3e21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f3e24 push eax */
  push32((uint32_t)(EAX));
  /* 127f3e25 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f3e27 call 0x127f7620 */
  push32(0x127f3e2cu); f_127f7620();
  /* 127f3e2c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3e2f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f3e32 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f3e34 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f3e37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3e3a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3e3d push edx */
  push32((uint32_t)(EDX));
  /* 127f3e3e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 127f3e40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f3e43 push eax */
  push32((uint32_t)(EAX));
  /* 127f3e44 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f3e46 call 0x127f7620 */
  push32(0x127f3e4bu); f_127f7620();
  /* 127f3e4b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3e4e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f3e51 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f3e53 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f3e56 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3e59 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3e5c push edx */
  push32((uint32_t)(EDX));
  /* 127f3e5d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 127f3e5f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f3e62 push eax */
  push32((uint32_t)(EAX));
  /* 127f3e63 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f3e65 call 0x127f7620 */
  push32(0x127f3e6au); f_127f7620();
  /* 127f3e6a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3e6d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f3e70 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f3e72 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f3e75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3e78 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3e7b push edx */
  push32((uint32_t)(EDX));
  /* 127f3e7c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 127f3e7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f3e81 push eax */
  push32((uint32_t)(EAX));
  /* 127f3e82 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f3e84 call 0x127f7620 */
  push32(0x127f3e89u); f_127f7620();
  /* 127f3e89 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3e8c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f3e8f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f3e91 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f3e94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3e97 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3e9a push edx */
  push32((uint32_t)(EDX));
  /* 127f3e9b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 127f3e9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f3ea0 push eax */
  push32((uint32_t)(EAX));
  /* 127f3ea1 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f3ea3 call 0x127f7620 */
  push32(0x127f3ea8u); f_127f7620();
  /* 127f3ea8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3eab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f3eae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f3eb0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f3eb3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3eb6 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3eb9 push edx */
  push32((uint32_t)(EDX));
  /* 127f3eba push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 127f3ebc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f3ebf push eax */
  push32((uint32_t)(EAX));
  /* 127f3ec0 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f3ec2 call 0x127f7620 */
  push32(0x127f3ec7u); f_127f7620();
  /* 127f3ec7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3eca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f3ecd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f3ecf mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f3ed2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3ed5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3ed8 push edx */
  push32((uint32_t)(EDX));
  /* 127f3ed9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 127f3edb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f3ede push eax */
  push32((uint32_t)(EAX));
  /* 127f3edf push 1 */
  push32((uint32_t)(0x1u));
  /* 127f3ee1 call 0x127f7620 */
  push32(0x127f3ee6u); f_127f7620();
  /* 127f3ee6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3ee9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f3eec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f3eee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f3ef1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3ef4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3ef7 push edx */
  push32((uint32_t)(EDX));
  /* 127f3ef8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 127f3efa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f3efd push eax */
  push32((uint32_t)(EAX));
  /* 127f3efe push 1 */
  push32((uint32_t)(0x1u));
  /* 127f3f00 call 0x127f7620 */
  push32(0x127f3f05u); f_127f7620();
  /* 127f3f05 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3f08 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f3f0b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f3f0d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f3f10 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3f13 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3f16 push edx */
  push32((uint32_t)(EDX));
  /* 127f3f17 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 127f3f19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f3f1c push eax */
  push32((uint32_t)(EAX));
  /* 127f3f1d push 1 */
  push32((uint32_t)(0x1u));
  /* 127f3f1f call 0x127f7620 */
  push32(0x127f3f24u); f_127f7620();
  /* 127f3f24 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3f27 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f3f2a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f3f2c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f3f2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3f32 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3f35 push edx */
  push32((uint32_t)(EDX));
  /* 127f3f36 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 127f3f38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f3f3b push eax */
  push32((uint32_t)(EAX));
  /* 127f3f3c push 1 */
  push32((uint32_t)(0x1u));
  /* 127f3f3e call 0x127f7620 */
  push32(0x127f3f43u); f_127f7620();
  /* 127f3f43 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3f46 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f3f49 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f3f4b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f3f4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3f51 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3f54 push edx */
  push32((uint32_t)(EDX));
  /* 127f3f55 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 127f3f57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f3f5a push eax */
  push32((uint32_t)(EAX));
  /* 127f3f5b push 1 */
  push32((uint32_t)(0x1u));
  /* 127f3f5d call 0x127f7620 */
  push32(0x127f3f62u); f_127f7620();
  /* 127f3f62 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3f65 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f3f68 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f3f6a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f3f6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3f70 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3f73 push edx */
  push32((uint32_t)(EDX));
  /* 127f3f74 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 127f3f76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f3f79 push eax */
  push32((uint32_t)(EAX));
  /* 127f3f7a push 1 */
  push32((uint32_t)(0x1u));
  /* 127f3f7c call 0x127f7620 */
  push32(0x127f3f81u); f_127f7620();
  /* 127f3f81 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3f84 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f3f87 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f3f89 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f3f8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3f8f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3f92 push edx */
  push32((uint32_t)(EDX));
  /* 127f3f93 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 127f3f95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f3f98 push eax */
  push32((uint32_t)(EAX));
  /* 127f3f99 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f3f9b call 0x127f7620 */
  push32(0x127f3fa0u); f_127f7620();
  /* 127f3fa0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3fa3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f3fa6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f3fa8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f3fab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3fae add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3fb1 push edx */
  push32((uint32_t)(EDX));
  /* 127f3fb2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 127f3fb4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f3fb7 push eax */
  push32((uint32_t)(EAX));
  /* 127f3fb8 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f3fba call 0x127f7620 */
  push32(0x127f3fbfu); f_127f7620();
  /* 127f3fbf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3fc2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f3fc5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f3fc7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f3fca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3fcd add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3fd0 push edx */
  push32((uint32_t)(EDX));
  /* 127f3fd1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 127f3fd3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f3fd6 push eax */
  push32((uint32_t)(EAX));
  /* 127f3fd7 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f3fd9 call 0x127f7620 */
  push32(0x127f3fdeu); f_127f7620();
  /* 127f3fde add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3fe1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f3fe4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f3fe6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f3fe9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f3fec add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f3fef push edx */
  push32((uint32_t)(EDX));
  /* 127f3ff0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 127f3ff2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f3ff5 push eax */
  push32((uint32_t)(EAX));
  /* 127f3ff6 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f3ff8 call 0x127f7620 */
  push32(0x127f3ffdu); f_127f7620();
  /* 127f3ffd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4000 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f4003 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f4005 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f4008 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f400b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f400e push edx */
  push32((uint32_t)(EDX));
  /* 127f400f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 127f4011 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f4014 push eax */
  push32((uint32_t)(EAX));
  /* 127f4015 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f4017 call 0x127f7620 */
  push32(0x127f401cu); f_127f7620();
  /* 127f401c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f401f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f4022 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f4024 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f4027 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f402a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f402d push edx */
  push32((uint32_t)(EDX));
  /* 127f402e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 127f4030 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f4033 push eax */
  push32((uint32_t)(EAX));
  /* 127f4034 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f4036 call 0x127f7620 */
  push32(0x127f403bu); f_127f7620();
  /* 127f403b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f403e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f4041 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f4043 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f4046 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4049 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f404c push edx */
  push32((uint32_t)(EDX));
  /* 127f404d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 127f404f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f4052 push eax */
  push32((uint32_t)(EAX));
  /* 127f4053 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f4055 call 0x127f7620 */
  push32(0x127f405au); f_127f7620();
  /* 127f405a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f405d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f4060 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f4062 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f4065 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4068 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f406b push edx */
  push32((uint32_t)(EDX));
  /* 127f406c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 127f406e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f4071 push eax */
  push32((uint32_t)(EAX));
  /* 127f4072 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f4074 call 0x127f7620 */
  push32(0x127f4079u); f_127f7620();
  /* 127f4079 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f407c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f407f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f4081 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f4084 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4087 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f408a push edx */
  push32((uint32_t)(EDX));
  /* 127f408b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 127f408d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f4090 push eax */
  push32((uint32_t)(EAX));
  /* 127f4091 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f4093 call 0x127f7620 */
  push32(0x127f4098u); f_127f7620();
  /* 127f4098 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f409b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f409e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f40a0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f40a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f40a6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f40a9 push edx */
  push32((uint32_t)(EDX));
  /* 127f40aa push 0x3a */
  push32((uint32_t)(0x3au));
  /* 127f40ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f40af push eax */
  push32((uint32_t)(EAX));
  /* 127f40b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f40b2 call 0x127f7620 */
  push32(0x127f40b7u); f_127f7620();
  /* 127f40b7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f40ba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f40bd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f40bf mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f40c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f40c5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f40c8 push edx */
  push32((uint32_t)(EDX));
  /* 127f40c9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 127f40cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f40ce push eax */
  push32((uint32_t)(EAX));
  /* 127f40cf push 1 */
  push32((uint32_t)(0x1u));
  /* 127f40d1 call 0x127f7620 */
  push32(0x127f40d6u); f_127f7620();
  /* 127f40d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f40d9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f40dc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f40de mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f40e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f40e4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f40e7 push edx */
  push32((uint32_t)(EDX));
  /* 127f40e8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 127f40ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f40ed push eax */
  push32((uint32_t)(EAX));
  /* 127f40ee push 1 */
  push32((uint32_t)(0x1u));
  /* 127f40f0 call 0x127f7620 */
  push32(0x127f40f5u); f_127f7620();
  /* 127f40f5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f40f8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f40fb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f40fd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f4100 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4103 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4106 push edx */
  push32((uint32_t)(EDX));
  /* 127f4107 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 127f4109 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f410c push eax */
  push32((uint32_t)(EAX));
  /* 127f410d push 1 */
  push32((uint32_t)(0x1u));
  /* 127f410f call 0x127f7620 */
  push32(0x127f4114u); f_127f7620();
  /* 127f4114 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4117 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f411a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f411c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f411f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4122 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4128 push edx */
  push32((uint32_t)(EDX));
  /* 127f4129 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 127f412b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f412e push eax */
  push32((uint32_t)(EAX));
  /* 127f412f push 1 */
  push32((uint32_t)(0x1u));
  /* 127f4131 call 0x127f7620 */
  push32(0x127f4136u); f_127f7620();
  /* 127f4136 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4139 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f413c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f413e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f4141 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4144 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f414a push edx */
  push32((uint32_t)(EDX));
  /* 127f414b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 127f414d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f4150 push eax */
  push32((uint32_t)(EAX));
  /* 127f4151 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f4153 call 0x127f7620 */
  push32(0x127f4158u); f_127f7620();
  /* 127f4158 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f415b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f415e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f4160 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f4163 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4166 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f416c push edx */
  push32((uint32_t)(EDX));
  /* 127f416d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 127f416f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f4172 push eax */
  push32((uint32_t)(EAX));
  /* 127f4173 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f4175 call 0x127f7620 */
  push32(0x127f417au); f_127f7620();
  /* 127f417a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f417d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f4180 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f4182 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f4185 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4188 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f418e push edx */
  push32((uint32_t)(EDX));
  /* 127f418f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 127f4191 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f4194 push eax */
  push32((uint32_t)(EAX));
  /* 127f4195 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f4197 call 0x127f7620 */
  push32(0x127f419cu); f_127f7620();
  /* 127f419c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f419f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f41a2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f41a4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f41a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f41aa add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f41b0 push edx */
  push32((uint32_t)(EDX));
  /* 127f41b1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 127f41b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f41b6 push eax */
  push32((uint32_t)(EAX));
  /* 127f41b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f41b9 call 0x127f7620 */
  push32(0x127f41beu); f_127f7620();
  /* 127f41be add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f41c1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f41c4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f41c6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f41c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f41cc add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f41d2 push edx */
  push32((uint32_t)(EDX));
  /* 127f41d3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 127f41d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f41d8 push eax */
  push32((uint32_t)(EAX));
  /* 127f41d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f41db call 0x127f7620 */
  push32(0x127f41e0u); f_127f7620();
  /* 127f41e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f41e3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f41e6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f41e8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f41eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f41ee add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f41f4 push edx */
  push32((uint32_t)(EDX));
  /* 127f41f5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 127f41f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f41fa push eax */
  push32((uint32_t)(EAX));
  /* 127f41fb push 1 */
  push32((uint32_t)(0x1u));
  /* 127f41fd call 0x127f7620 */
  push32(0x127f4202u); f_127f7620();
  /* 127f4202 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4205 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f4208 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f420a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f420d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4210 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4216 push edx */
  push32((uint32_t)(EDX));
  /* 127f4217 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 127f4219 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f421c push eax */
  push32((uint32_t)(EAX));
  /* 127f421d push 1 */
  push32((uint32_t)(0x1u));
  /* 127f421f call 0x127f7620 */
  push32(0x127f4224u); f_127f7620();
  /* 127f4224 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4227 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f422a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f422c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f422f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4232 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4238 push edx */
  push32((uint32_t)(EDX));
  /* 127f4239 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 127f423b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f423e push eax */
  push32((uint32_t)(EAX));
  /* 127f423f push 1 */
  push32((uint32_t)(0x1u));
  /* 127f4241 call 0x127f7620 */
  push32(0x127f4246u); f_127f7620();
  /* 127f4246 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4249 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f424c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f424e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f4251 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4254 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f425a push edx */
  push32((uint32_t)(EDX));
  /* 127f425b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 127f425d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f4260 push eax */
  push32((uint32_t)(EAX));
  /* 127f4261 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f4263 call 0x127f7620 */
  push32(0x127f4268u); f_127f7620();
  /* 127f4268 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f426b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f426e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f4270 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f4273 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4276 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f427c push edx */
  push32((uint32_t)(EDX));
  /* 127f427d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 127f4282 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f4285 push eax */
  push32((uint32_t)(EAX));
  /* 127f4286 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f4288 call 0x127f7620 */
  push32(0x127f428du); f_127f7620();
  /* 127f428d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4290 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f4293 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f4295 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127f4298 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_127f429b:;
  /* 127f429b mov esp, ebp */
  ESP = (EBP);
  /* 127f429d pop ebp */
  EBP = (pop32());
  /* 127f429e ret  */
  ESPCHK(0x127f3d10u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x127f42a0 (779 bytes, 265 insns) */
void f_127f42a0(void) {
  FTRACE(0x127f42a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f42a0 push ebp */
  push32((uint32_t)(EBP));
  /* 127f42a1 mov ebp, esp */
  EBP = (ESP);
  /* 127f42a3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f42a7 jne 0x127f42ae */
  if (!C.zf) goto L_127f42ae;
  /* 127f42a9 jmp 0x127f45a9 */
  goto L_127f45a9;
L_127f42ae:;
  /* 127f42ae push 2 */
  push32((uint32_t)(0x2u));
  /* 127f42b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f42b3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 127f42b6 push ecx */
  push32((uint32_t)(ECX));
  /* 127f42b7 call 0x127e9ef0 */
  push32(0x127f42bcu); f_127e9ef0();
  /* 127f42bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f42bf push 2 */
  push32((uint32_t)(0x2u));
  /* 127f42c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f42c4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 127f42c7 push eax */
  push32((uint32_t)(EAX));
  /* 127f42c8 call 0x127e9ef0 */
  push32(0x127f42cdu); f_127e9ef0();
  /* 127f42cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f42d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f42d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f42d5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 127f42d8 push edx */
  push32((uint32_t)(EDX));
  /* 127f42d9 call 0x127e9ef0 */
  push32(0x127f42deu); f_127e9ef0();
  /* 127f42de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f42e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f42e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f42e6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127f42e9 push ecx */
  push32((uint32_t)(ECX));
  /* 127f42ea call 0x127e9ef0 */
  push32(0x127f42efu); f_127e9ef0();
  /* 127f42ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f42f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f42f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f42f7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 127f42fa push eax */
  push32((uint32_t)(EAX));
  /* 127f42fb call 0x127e9ef0 */
  push32(0x127f4300u); f_127e9ef0();
  /* 127f4300 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4303 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f4305 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4308 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 127f430b push edx */
  push32((uint32_t)(EDX));
  /* 127f430c call 0x127e9ef0 */
  push32(0x127f4311u); f_127e9ef0();
  /* 127f4311 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4314 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f4316 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4319 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127f431b push ecx */
  push32((uint32_t)(ECX));
  /* 127f431c call 0x127e9ef0 */
  push32(0x127f4321u); f_127e9ef0();
  /* 127f4321 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4324 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f4326 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4329 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 127f432c push eax */
  push32((uint32_t)(EAX));
  /* 127f432d call 0x127e9ef0 */
  push32(0x127f4332u); f_127e9ef0();
  /* 127f4332 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4335 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f4337 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f433a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 127f433d push edx */
  push32((uint32_t)(EDX));
  /* 127f433e call 0x127e9ef0 */
  push32(0x127f4343u); f_127e9ef0();
  /* 127f4343 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4346 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f4348 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f434b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 127f434e push ecx */
  push32((uint32_t)(ECX));
  /* 127f434f call 0x127e9ef0 */
  push32(0x127f4354u); f_127e9ef0();
  /* 127f4354 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4357 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f4359 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f435c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 127f435f push eax */
  push32((uint32_t)(EAX));
  /* 127f4360 call 0x127e9ef0 */
  push32(0x127f4365u); f_127e9ef0();
  /* 127f4365 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4368 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f436a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f436d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 127f4370 push edx */
  push32((uint32_t)(EDX));
  /* 127f4371 call 0x127e9ef0 */
  push32(0x127f4376u); f_127e9ef0();
  /* 127f4376 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4379 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f437b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f437e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 127f4381 push ecx */
  push32((uint32_t)(ECX));
  /* 127f4382 call 0x127e9ef0 */
  push32(0x127f4387u); f_127e9ef0();
  /* 127f4387 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f438a push 2 */
  push32((uint32_t)(0x2u));
  /* 127f438c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f438f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 127f4392 push eax */
  push32((uint32_t)(EAX));
  /* 127f4393 call 0x127e9ef0 */
  push32(0x127f4398u); f_127e9ef0();
  /* 127f4398 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f439b push 2 */
  push32((uint32_t)(0x2u));
  /* 127f439d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f43a0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 127f43a3 push edx */
  push32((uint32_t)(EDX));
  /* 127f43a4 call 0x127e9ef0 */
  push32(0x127f43a9u); f_127e9ef0();
  /* 127f43a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f43ac push 2 */
  push32((uint32_t)(0x2u));
  /* 127f43ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f43b1 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 127f43b4 push ecx */
  push32((uint32_t)(ECX));
  /* 127f43b5 call 0x127e9ef0 */
  push32(0x127f43bau); f_127e9ef0();
  /* 127f43ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f43bd push 2 */
  push32((uint32_t)(0x2u));
  /* 127f43bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f43c2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 127f43c5 push eax */
  push32((uint32_t)(EAX));
  /* 127f43c6 call 0x127e9ef0 */
  push32(0x127f43cbu); f_127e9ef0();
  /* 127f43cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f43ce push 2 */
  push32((uint32_t)(0x2u));
  /* 127f43d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f43d3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 127f43d6 push edx */
  push32((uint32_t)(EDX));
  /* 127f43d7 call 0x127e9ef0 */
  push32(0x127f43dcu); f_127e9ef0();
  /* 127f43dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f43df push 2 */
  push32((uint32_t)(0x2u));
  /* 127f43e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f43e4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 127f43e7 push ecx */
  push32((uint32_t)(ECX));
  /* 127f43e8 call 0x127e9ef0 */
  push32(0x127f43edu); f_127e9ef0();
  /* 127f43ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f43f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f43f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f43f5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 127f43f8 push eax */
  push32((uint32_t)(EAX));
  /* 127f43f9 call 0x127e9ef0 */
  push32(0x127f43feu); f_127e9ef0();
  /* 127f43fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4401 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f4403 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4406 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 127f4409 push edx */
  push32((uint32_t)(EDX));
  /* 127f440a call 0x127e9ef0 */
  push32(0x127f440fu); f_127e9ef0();
  /* 127f440f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4412 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f4414 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4417 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 127f441a push ecx */
  push32((uint32_t)(ECX));
  /* 127f441b call 0x127e9ef0 */
  push32(0x127f4420u); f_127e9ef0();
  /* 127f4420 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4423 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f4425 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4428 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 127f442b push eax */
  push32((uint32_t)(EAX));
  /* 127f442c call 0x127e9ef0 */
  push32(0x127f4431u); f_127e9ef0();
  /* 127f4431 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4434 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f4436 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4439 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 127f443c push edx */
  push32((uint32_t)(EDX));
  /* 127f443d call 0x127e9ef0 */
  push32(0x127f4442u); f_127e9ef0();
  /* 127f4442 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4445 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f4447 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f444a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 127f444d push ecx */
  push32((uint32_t)(ECX));
  /* 127f444e call 0x127e9ef0 */
  push32(0x127f4453u); f_127e9ef0();
  /* 127f4453 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4456 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f4458 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f445b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 127f445e push eax */
  push32((uint32_t)(EAX));
  /* 127f445f call 0x127e9ef0 */
  push32(0x127f4464u); f_127e9ef0();
  /* 127f4464 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4467 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f4469 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f446c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 127f446f push edx */
  push32((uint32_t)(EDX));
  /* 127f4470 call 0x127e9ef0 */
  push32(0x127f4475u); f_127e9ef0();
  /* 127f4475 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4478 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f447a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f447d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 127f4480 push ecx */
  push32((uint32_t)(ECX));
  /* 127f4481 call 0x127e9ef0 */
  push32(0x127f4486u); f_127e9ef0();
  /* 127f4486 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4489 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f448b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f448e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 127f4491 push eax */
  push32((uint32_t)(EAX));
  /* 127f4492 call 0x127e9ef0 */
  push32(0x127f4497u); f_127e9ef0();
  /* 127f4497 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f449a push 2 */
  push32((uint32_t)(0x2u));
  /* 127f449c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f449f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 127f44a2 push edx */
  push32((uint32_t)(EDX));
  /* 127f44a3 call 0x127e9ef0 */
  push32(0x127f44a8u); f_127e9ef0();
  /* 127f44a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f44ab push 2 */
  push32((uint32_t)(0x2u));
  /* 127f44ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f44b0 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 127f44b3 push ecx */
  push32((uint32_t)(ECX));
  /* 127f44b4 call 0x127e9ef0 */
  push32(0x127f44b9u); f_127e9ef0();
  /* 127f44b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f44bc push 2 */
  push32((uint32_t)(0x2u));
  /* 127f44be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f44c1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 127f44c4 push eax */
  push32((uint32_t)(EAX));
  /* 127f44c5 call 0x127e9ef0 */
  push32(0x127f44cau); f_127e9ef0();
  /* 127f44ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f44cd push 2 */
  push32((uint32_t)(0x2u));
  /* 127f44cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f44d2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 127f44d8 push edx */
  push32((uint32_t)(EDX));
  /* 127f44d9 call 0x127e9ef0 */
  push32(0x127f44deu); f_127e9ef0();
  /* 127f44de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f44e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f44e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f44e6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 127f44ec push ecx */
  push32((uint32_t)(ECX));
  /* 127f44ed call 0x127e9ef0 */
  push32(0x127f44f2u); f_127e9ef0();
  /* 127f44f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f44f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f44f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f44fa mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 127f4500 push eax */
  push32((uint32_t)(EAX));
  /* 127f4501 call 0x127e9ef0 */
  push32(0x127f4506u); f_127e9ef0();
  /* 127f4506 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4509 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f450b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f450e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 127f4514 push edx */
  push32((uint32_t)(EDX));
  /* 127f4515 call 0x127e9ef0 */
  push32(0x127f451au); f_127e9ef0();
  /* 127f451a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f451d push 2 */
  push32((uint32_t)(0x2u));
  /* 127f451f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4522 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 127f4528 push ecx */
  push32((uint32_t)(ECX));
  /* 127f4529 call 0x127e9ef0 */
  push32(0x127f452eu); f_127e9ef0();
  /* 127f452e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4531 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f4533 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4536 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 127f453c push eax */
  push32((uint32_t)(EAX));
  /* 127f453d call 0x127e9ef0 */
  push32(0x127f4542u); f_127e9ef0();
  /* 127f4542 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4545 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f4547 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f454a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 127f4550 push edx */
  push32((uint32_t)(EDX));
  /* 127f4551 call 0x127e9ef0 */
  push32(0x127f4556u); f_127e9ef0();
  /* 127f4556 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4559 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f455b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f455e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 127f4564 push ecx */
  push32((uint32_t)(ECX));
  /* 127f4565 call 0x127e9ef0 */
  push32(0x127f456au); f_127e9ef0();
  /* 127f456a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f456d push 2 */
  push32((uint32_t)(0x2u));
  /* 127f456f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4572 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 127f4578 push eax */
  push32((uint32_t)(EAX));
  /* 127f4579 call 0x127e9ef0 */
  push32(0x127f457eu); f_127e9ef0();
  /* 127f457e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4581 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f4583 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4586 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 127f458c push edx */
  push32((uint32_t)(EDX));
  /* 127f458d call 0x127e9ef0 */
  push32(0x127f4592u); f_127e9ef0();
  /* 127f4592 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4595 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f4597 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f459a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 127f45a0 push ecx */
  push32((uint32_t)(ECX));
  /* 127f45a1 call 0x127e9ef0 */
  push32(0x127f45a6u); f_127e9ef0();
  /* 127f45a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127f45a9:;
  /* 127f45a9 pop ebp */
  EBP = (pop32());
  /* 127f45aa ret  */
  ESPCHK(0x127f42a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100145b0 @ 0x127f45b0 (678 bytes, 180 insns) */
void f_127f45b0(void) {
  FTRACE(0x127f45b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f45b0 push ebp */
  push32((uint32_t)(EBP));
  /* 127f45b1 mov ebp, esp */
  EBP = (ESP);
  /* 127f45b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f45b6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 127f45bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f45bf mov ax, word ptr [0x12815a62] */
  AX = (r16((uint32_t)(0x12815a62)));
  /* 127f45c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127f45c8 cmp dword ptr [0x12815a08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815a08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f45cf je 0x127f472a */
  if (C.zf) goto L_127f472a;
  /* 127f45d5 push 0x12815a30 */
  push32((uint32_t)(0x12815a30u));
  /* 127f45da push 0xe */
  push32((uint32_t)(0xeu));
  /* 127f45dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f45df push ecx */
  push32((uint32_t)(ECX));
  /* 127f45e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f45e2 call 0x127f7620 */
  push32(0x127f45e7u); f_127f7620();
  /* 127f45e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f45ea mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f45ed or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 127f45ef mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 127f45f2 push 0x12815a34 */
  push32((uint32_t)(0x12815a34u));
  /* 127f45f7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 127f45f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f45fc push eax */
  push32((uint32_t)(EAX));
  /* 127f45fd push 1 */
  push32((uint32_t)(0x1u));
  /* 127f45ff call 0x127f7620 */
  push32(0x127f4604u); f_127f7620();
  /* 127f4604 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4607 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f460a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f460c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127f460f push 0x12815a38 */
  push32((uint32_t)(0x12815a38u));
  /* 127f4614 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 127f4616 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f4619 push edx */
  push32((uint32_t)(EDX));
  /* 127f461a push 1 */
  push32((uint32_t)(0x1u));
  /* 127f461c call 0x127f7620 */
  push32(0x127f4621u); f_127f7620();
  /* 127f4621 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4624 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f4627 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f4629 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127f462c mov edx, dword ptr [0x12815a38] */
  EDX = (r32((uint32_t)(0x12815a38)));
  /* 127f4632 push edx */
  push32((uint32_t)(EDX));
  /* 127f4633 call 0x127f4860 */
  push32(0x127f4638u); f_127f4860();
  /* 127f4638 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f463b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f463f je 0x127f4699 */
  if (C.zf) goto L_127f4699;
  /* 127f4641 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f4643 mov eax, dword ptr [0x12815a30] */
  EAX = (r32((uint32_t)(0x12815a30)));
  /* 127f4648 push eax */
  push32((uint32_t)(EAX));
  /* 127f4649 call 0x127e9ef0 */
  push32(0x127f464eu); f_127e9ef0();
  /* 127f464e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4651 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f4653 mov ecx, dword ptr [0x12815a34] */
  ECX = (r32((uint32_t)(0x12815a34)));
  /* 127f4659 push ecx */
  push32((uint32_t)(ECX));
  /* 127f465a call 0x127e9ef0 */
  push32(0x127f465fu); f_127e9ef0();
  /* 127f465f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4662 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f4664 mov edx, dword ptr [0x12815a38] */
  EDX = (r32((uint32_t)(0x12815a38)));
  /* 127f466a push edx */
  push32((uint32_t)(EDX));
  /* 127f466b call 0x127e9ef0 */
  push32(0x127f4670u); f_127e9ef0();
  /* 127f4670 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4673 mov dword ptr [0x12815a30], 0 */
  w32((uint32_t)(0x12815a30), (0x0u));
  /* 127f467d mov dword ptr [0x12815a34], 0 */
  w32((uint32_t)(0x12815a34), (0x0u));
  /* 127f4687 mov dword ptr [0x12815a38], 0 */
  w32((uint32_t)(0x12815a38), (0x0u));
  /* 127f4691 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f4694 jmp 0x127f4852 */
  goto L_127f4852;
L_127f4699:;
  /* 127f4699 mov eax, dword ptr [0x12814d88] */
  EAX = (r32((uint32_t)(0x12814d88)));
  /* 127f469e cmp dword ptr [eax], 0x12814d50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x12814d50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f46a4 je 0x127f46e0 */
  if (C.zf) goto L_127f46e0;
  /* 127f46a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f46a8 mov ecx, dword ptr [0x12814d88] */
  ECX = (r32((uint32_t)(0x12814d88)));
  /* 127f46ae mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127f46b0 push edx */
  push32((uint32_t)(EDX));
  /* 127f46b1 call 0x127e9ef0 */
  push32(0x127f46b6u); f_127e9ef0();
  /* 127f46b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f46b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f46bb mov eax, dword ptr [0x12814d88] */
  EAX = (r32((uint32_t)(0x12814d88)));
  /* 127f46c0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 127f46c3 push ecx */
  push32((uint32_t)(ECX));
  /* 127f46c4 call 0x127e9ef0 */
  push32(0x127f46c9u); f_127e9ef0();
  /* 127f46c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f46cc push 2 */
  push32((uint32_t)(0x2u));
  /* 127f46ce mov edx, dword ptr [0x12814d88] */
  EDX = (r32((uint32_t)(0x12814d88)));
  /* 127f46d4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 127f46d7 push eax */
  push32((uint32_t)(EAX));
  /* 127f46d8 call 0x127e9ef0 */
  push32(0x127f46ddu); f_127e9ef0();
  /* 127f46dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127f46e0:;
  /* 127f46e0 mov ecx, dword ptr [0x12814d88] */
  ECX = (r32((uint32_t)(0x12814d88)));
  /* 127f46e6 mov edx, dword ptr [0x12815a30] */
  EDX = (r32((uint32_t)(0x12815a30)));
  /* 127f46ec mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 127f46ee mov eax, dword ptr [0x12814d88] */
  EAX = (r32((uint32_t)(0x12814d88)));
  /* 127f46f3 mov ecx, dword ptr [0x12815a34] */
  ECX = (r32((uint32_t)(0x12815a34)));
  /* 127f46f9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 127f46fc mov edx, dword ptr [0x12814d88] */
  EDX = (r32((uint32_t)(0x12814d88)));
  /* 127f4702 mov eax, dword ptr [0x12815a38] */
  EAX = (r32((uint32_t)(0x12815a38)));
  /* 127f4707 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 127f470a mov ecx, dword ptr [0x12814d88] */
  ECX = (r32((uint32_t)(0x12814d88)));
  /* 127f4710 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127f4712 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127f4714 mov byte ptr [0x12813ea8], al */
  w8((uint32_t)(0x12813ea8), (AL));
  /* 127f4719 mov dword ptr [0x12813eac], 1 */
  w32((uint32_t)(0x12813eac), (0x1u));
  /* 127f4723 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f4725 jmp 0x127f4852 */
  goto L_127f4852;
L_127f472a:;
  /* 127f472a push 2 */
  push32((uint32_t)(0x2u));
  /* 127f472c mov ecx, dword ptr [0x12815a30] */
  ECX = (r32((uint32_t)(0x12815a30)));
  /* 127f4732 push ecx */
  push32((uint32_t)(ECX));
  /* 127f4733 call 0x127e9ef0 */
  push32(0x127f4738u); f_127e9ef0();
  /* 127f4738 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f473b push 2 */
  push32((uint32_t)(0x2u));
  /* 127f473d mov edx, dword ptr [0x12815a34] */
  EDX = (r32((uint32_t)(0x12815a34)));
  /* 127f4743 push edx */
  push32((uint32_t)(EDX));
  /* 127f4744 call 0x127e9ef0 */
  push32(0x127f4749u); f_127e9ef0();
  /* 127f4749 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f474c push 2 */
  push32((uint32_t)(0x2u));
  /* 127f474e mov eax, dword ptr [0x12815a38] */
  EAX = (r32((uint32_t)(0x12815a38)));
  /* 127f4753 push eax */
  push32((uint32_t)(EAX));
  /* 127f4754 call 0x127e9ef0 */
  push32(0x127f4759u); f_127e9ef0();
  /* 127f4759 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f475c mov dword ptr [0x12815a30], 0 */
  w32((uint32_t)(0x12815a30), (0x0u));
  /* 127f4766 mov dword ptr [0x12815a34], 0 */
  w32((uint32_t)(0x12815a34), (0x0u));
  /* 127f4770 mov dword ptr [0x12815a38], 0 */
  w32((uint32_t)(0x12815a38), (0x0u));
  /* 127f477a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 127f477f push 0x12811304 */
  push32((uint32_t)(0x12811304u));
  /* 127f4784 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f4786 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f4788 call 0x127e9460 */
  push32(0x127f478du); f_127e9460();
  /* 127f478d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4790 mov ecx, dword ptr [0x12814d88] */
  ECX = (r32((uint32_t)(0x12814d88)));
  /* 127f4796 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 127f4798 mov edx, dword ptr [0x12814d88] */
  EDX = (r32((uint32_t)(0x12814d88)));
  /* 127f479e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f47a1 jne 0x127f47ab */
  if (!C.zf) goto L_127f47ab;
  /* 127f47a3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f47a6 jmp 0x127f4852 */
  goto L_127f4852;
L_127f47ab:;
  /* 127f47ab push 0x128112d4 */
  push32((uint32_t)(0x128112d4u));
  /* 127f47b0 mov eax, dword ptr [0x12814d88] */
  EAX = (r32((uint32_t)(0x12814d88)));
  /* 127f47b5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127f47b7 push ecx */
  push32((uint32_t)(ECX));
  /* 127f47b8 call 0x127ec410 */
  push32(0x127f47bdu); f_127ec410();
  /* 127f47bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f47c0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 127f47c5 push 0x12811304 */
  push32((uint32_t)(0x12811304u));
  /* 127f47ca push 2 */
  push32((uint32_t)(0x2u));
  /* 127f47cc push 2 */
  push32((uint32_t)(0x2u));
  /* 127f47ce call 0x127e9460 */
  push32(0x127f47d3u); f_127e9460();
  /* 127f47d3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f47d6 mov edx, dword ptr [0x12814d88] */
  EDX = (r32((uint32_t)(0x12814d88)));
  /* 127f47dc mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 127f47df mov eax, dword ptr [0x12814d88] */
  EAX = (r32((uint32_t)(0x12814d88)));
  /* 127f47e4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f47e8 jne 0x127f47ef */
  if (!C.zf) goto L_127f47ef;
  /* 127f47ea or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f47ed jmp 0x127f4852 */
  goto L_127f4852;
L_127f47ef:;
  /* 127f47ef mov ecx, dword ptr [0x12814d88] */
  ECX = (r32((uint32_t)(0x12814d88)));
  /* 127f47f5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 127f47f8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 127f47fb push 0x92 */
  push32((uint32_t)(0x92u));
  /* 127f4800 push 0x12811304 */
  push32((uint32_t)(0x12811304u));
  /* 127f4805 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f4807 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f4809 call 0x127e9460 */
  push32(0x127f480eu); f_127e9460();
  /* 127f480e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4811 mov ecx, dword ptr [0x12814d88] */
  ECX = (r32((uint32_t)(0x12814d88)));
  /* 127f4817 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 127f481a mov edx, dword ptr [0x12814d88] */
  EDX = (r32((uint32_t)(0x12814d88)));
  /* 127f4820 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f4824 jne 0x127f482b */
  if (!C.zf) goto L_127f482b;
  /* 127f4826 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f4829 jmp 0x127f4852 */
  goto L_127f4852;
L_127f482b:;
  /* 127f482b mov eax, dword ptr [0x12814d88] */
  EAX = (r32((uint32_t)(0x12814d88)));
  /* 127f4830 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 127f4833 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 127f4836 mov edx, dword ptr [0x12814d88] */
  EDX = (r32((uint32_t)(0x12814d88)));
  /* 127f483c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127f483e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127f4840 mov byte ptr [0x12813ea8], cl */
  w8((uint32_t)(0x12813ea8), (CL));
  /* 127f4846 mov dword ptr [0x12813eac], 1 */
  w32((uint32_t)(0x12813eac), (0x1u));
  /* 127f4850 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127f4852:;
  /* 127f4852 mov esp, ebp */
  ESP = (EBP);
  /* 127f4854 pop ebp */
  EBP = (pop32());
  /* 127f4855 ret  */
  ESPCHK(0x127f45b0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x127f4860 (125 bytes, 49 insns) */
void f_127f4860(void) {
  FTRACE(0x127f4860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f4860 push ebp */
  push32((uint32_t)(EBP));
  /* 127f4861 mov ebp, esp */
  EBP = (ESP);
  /* 127f4863 push ecx */
  push32((uint32_t)(ECX));
L_127f4864:;
  /* 127f4864 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4867 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127f486a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127f486c je 0x127f48d9 */
  if (C.zf) goto L_127f48d9;
  /* 127f486e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4871 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127f4874 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f4877 jl 0x127f489d */
  if ((C.sf!=C.of)) goto L_127f489d;
  /* 127f4879 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f487c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127f487f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f4882 jg 0x127f489d */
  if ((!C.zf&&C.sf==C.of)) goto L_127f489d;
  /* 127f4884 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4887 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127f488a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f488d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4890 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 127f4892 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4895 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4898 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 127f489b jmp 0x127f48d7 */
  goto L_127f48d7;
L_127f489d:;
  /* 127f489d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f48a0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127f48a3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f48a6 jne 0x127f48ce */
  if (!C.zf) goto L_127f48ce;
  /* 127f48a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f48ab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127f48ae:;
  /* 127f48ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f48b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f48b4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 127f48b7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 127f48b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f48bc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f48bf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127f48c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f48c5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127f48c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f48ca jne 0x127f48ae */
  if (!C.zf) goto L_127f48ae;
  /* 127f48cc jmp 0x127f48d7 */
  goto L_127f48d7;
L_127f48ce:;
  /* 127f48ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f48d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f48d4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_127f48d7:;
  /* 127f48d7 jmp 0x127f4864 */
  goto L_127f4864;
L_127f48d9:;
  /* 127f48d9 mov esp, ebp */
  ESP = (EBP);
  /* 127f48db pop ebp */
  EBP = (pop32());
  /* 127f48dc ret  */
  ESPCHK(0x127f4860u, _esp0);
  ESP += 4; return;
}

/* FUN_100148e0 @ 0x127f48e0 (304 bytes, 85 insns) */
void f_127f48e0(void) {
  FTRACE(0x127f48e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f48e0 push ebp */
  push32((uint32_t)(EBP));
  /* 127f48e1 mov ebp, esp */
  EBP = (ESP);
  /* 127f48e3 push ecx */
  push32((uint32_t)(ECX));
  /* 127f48e4 cmp dword ptr [0x12815a04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815a04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f48eb je 0x127f49ac */
  if (C.zf) goto L_127f49ac;
  /* 127f48f1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 127f48f3 push 0x12811310 */
  push32((uint32_t)(0x12811310u));
  /* 127f48f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f48fa push 0x30 */
  push32((uint32_t)(0x30u));
  /* 127f48fc push 1 */
  push32((uint32_t)(0x1u));
  /* 127f48fe call 0x127e9870 */
  push32(0x127f4903u); f_127e9870();
  /* 127f4903 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4906 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127f4909 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f490d jne 0x127f4919 */
  if (!C.zf) goto L_127f4919;
  /* 127f490f mov eax, 1 */
  EAX = (0x1u);
  /* 127f4914 jmp 0x127f4a0c */
  goto L_127f4a0c;
L_127f4919:;
  /* 127f4919 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f491c push eax */
  push32((uint32_t)(EAX));
  /* 127f491d call 0x127f4a10 */
  push32(0x127f4922u); f_127f4a10();
  /* 127f4922 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4925 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f4927 je 0x127f494d */
  if (C.zf) goto L_127f494d;
  /* 127f4929 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f492c push ecx */
  push32((uint32_t)(ECX));
  /* 127f492d call 0x127f4ca0 */
  push32(0x127f4932u); f_127f4ca0();
  /* 127f4932 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4935 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f4937 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f493a push edx */
  push32((uint32_t)(EDX));
  /* 127f493b call 0x127e9ef0 */
  push32(0x127f4940u); f_127e9ef0();
  /* 127f4940 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4943 mov eax, 1 */
  EAX = (0x1u);
  /* 127f4948 jmp 0x127f4a0c */
  goto L_127f4a0c;
L_127f494d:;
  /* 127f494d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f4950 mov ecx, dword ptr [0x12814d88] */
  ECX = (r32((uint32_t)(0x12814d88)));
  /* 127f4956 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127f4958 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 127f495a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f495d mov ecx, dword ptr [0x12814d88] */
  ECX = (r32((uint32_t)(0x12814d88)));
  /* 127f4963 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 127f4966 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 127f4969 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f496c mov ecx, dword ptr [0x12814d88] */
  ECX = (r32((uint32_t)(0x12814d88)));
  /* 127f4972 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 127f4975 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 127f4978 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f497b mov dword ptr [0x12814d88], eax */
  w32((uint32_t)(0x12814d88), (EAX));
  /* 127f4980 mov ecx, dword ptr [0x12815a3c] */
  ECX = (r32((uint32_t)(0x12815a3c)));
  /* 127f4986 push ecx */
  push32((uint32_t)(ECX));
  /* 127f4987 call 0x127f4ca0 */
  push32(0x127f498cu); f_127f4ca0();
  /* 127f498c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f498f push 2 */
  push32((uint32_t)(0x2u));
  /* 127f4991 mov edx, dword ptr [0x12815a3c] */
  EDX = (r32((uint32_t)(0x12815a3c)));
  /* 127f4997 push edx */
  push32((uint32_t)(EDX));
  /* 127f4998 call 0x127e9ef0 */
  push32(0x127f499du); f_127e9ef0();
  /* 127f499d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f49a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f49a3 mov dword ptr [0x12815a3c], eax */
  w32((uint32_t)(0x12815a3c), (EAX));
  /* 127f49a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f49aa jmp 0x127f4a0c */
  goto L_127f4a0c;
L_127f49ac:;
  /* 127f49ac mov ecx, dword ptr [0x12814d88] */
  ECX = (r32((uint32_t)(0x12814d88)));
  /* 127f49b2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127f49b4 mov dword ptr [0x12814d58], edx */
  w32((uint32_t)(0x12814d58), (EDX));
  /* 127f49ba mov eax, dword ptr [0x12814d88] */
  EAX = (r32((uint32_t)(0x12814d88)));
  /* 127f49bf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 127f49c2 mov dword ptr [0x12814d5c], ecx */
  w32((uint32_t)(0x12814d5c), (ECX));
  /* 127f49c8 mov edx, dword ptr [0x12814d88] */
  EDX = (r32((uint32_t)(0x12814d88)));
  /* 127f49ce mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 127f49d1 mov dword ptr [0x12814d60], eax */
  w32((uint32_t)(0x12814d60), (EAX));
  /* 127f49d6 mov dword ptr [0x12814d88], 0x12814d58 */
  w32((uint32_t)(0x12814d88), (0x12814d58u));
  /* 127f49e0 mov ecx, dword ptr [0x12815a3c] */
  ECX = (r32((uint32_t)(0x12815a3c)));
  /* 127f49e6 push ecx */
  push32((uint32_t)(ECX));
  /* 127f49e7 call 0x127f4ca0 */
  push32(0x127f49ecu); f_127f4ca0();
  /* 127f49ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f49ef push 2 */
  push32((uint32_t)(0x2u));
  /* 127f49f1 mov edx, dword ptr [0x12815a3c] */
  EDX = (r32((uint32_t)(0x12815a3c)));
  /* 127f49f7 push edx */
  push32((uint32_t)(EDX));
  /* 127f49f8 call 0x127e9ef0 */
  push32(0x127f49fdu); f_127e9ef0();
  /* 127f49fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4a00 mov dword ptr [0x12815a3c], 0 */
  w32((uint32_t)(0x12815a3c), (0x0u));
  /* 127f4a0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127f4a0c:;
  /* 127f4a0c mov esp, ebp */
  ESP = (EBP);
  /* 127f4a0e pop ebp */
  EBP = (pop32());
  /* 127f4a0f ret  */
  ESPCHK(0x127f48e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014a10 @ 0x127f4a10 (525 bytes, 200 insns) */
void f_127f4a10(void) {
  FTRACE(0x127f4a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f4a10 push ebp */
  push32((uint32_t)(EBP));
  /* 127f4a11 mov ebp, esp */
  EBP = (ESP);
  /* 127f4a13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f4a16 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 127f4a1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f4a1f mov ax, word ptr [0x12815a5c] */
  AX = (r16((uint32_t)(0x12815a5c)));
  /* 127f4a25 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127f4a28 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f4a2c jne 0x127f4a36 */
  if (!C.zf) goto L_127f4a36;
  /* 127f4a2e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f4a31 jmp 0x127f4c19 */
  goto L_127f4c19;
L_127f4a36:;
  /* 127f4a36 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4a39 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4a3c push ecx */
  push32((uint32_t)(ECX));
  /* 127f4a3d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 127f4a3f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f4a42 push edx */
  push32((uint32_t)(EDX));
  /* 127f4a43 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f4a45 call 0x127f7620 */
  push32(0x127f4a4au); f_127f7620();
  /* 127f4a4a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4a4d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f4a50 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f4a52 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127f4a55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4a58 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4a5b push edx */
  push32((uint32_t)(EDX));
  /* 127f4a5c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 127f4a5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f4a61 push eax */
  push32((uint32_t)(EAX));
  /* 127f4a62 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f4a64 call 0x127f7620 */
  push32(0x127f4a69u); f_127f7620();
  /* 127f4a69 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4a6c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f4a6f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f4a71 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127f4a74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4a77 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4a7a push edx */
  push32((uint32_t)(EDX));
  /* 127f4a7b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 127f4a7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f4a80 push eax */
  push32((uint32_t)(EAX));
  /* 127f4a81 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f4a83 call 0x127f7620 */
  push32(0x127f4a88u); f_127f7620();
  /* 127f4a88 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4a8b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f4a8e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f4a90 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127f4a93 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4a96 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4a99 push edx */
  push32((uint32_t)(EDX));
  /* 127f4a9a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 127f4a9c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f4a9f push eax */
  push32((uint32_t)(EAX));
  /* 127f4aa0 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f4aa2 call 0x127f7620 */
  push32(0x127f4aa7u); f_127f7620();
  /* 127f4aa7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4aaa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f4aad or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f4aaf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127f4ab2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4ab5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4ab8 push edx */
  push32((uint32_t)(EDX));
  /* 127f4ab9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 127f4abb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f4abe push eax */
  push32((uint32_t)(EAX));
  /* 127f4abf push 1 */
  push32((uint32_t)(0x1u));
  /* 127f4ac1 call 0x127f7620 */
  push32(0x127f4ac6u); f_127f7620();
  /* 127f4ac6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4ac9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f4acc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f4ace mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127f4ad1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4ad4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 127f4ad7 push eax */
  push32((uint32_t)(EAX));
  /* 127f4ad8 call 0x127f4c20 */
  push32(0x127f4addu); f_127f4c20();
  /* 127f4add add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4ae0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4ae3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4ae6 push ecx */
  push32((uint32_t)(ECX));
  /* 127f4ae7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 127f4ae9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f4aec push edx */
  push32((uint32_t)(EDX));
  /* 127f4aed push 1 */
  push32((uint32_t)(0x1u));
  /* 127f4aef call 0x127f7620 */
  push32(0x127f4af4u); f_127f7620();
  /* 127f4af4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4af7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f4afa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f4afc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127f4aff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4b02 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4b05 push edx */
  push32((uint32_t)(EDX));
  /* 127f4b06 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 127f4b08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f4b0b push eax */
  push32((uint32_t)(EAX));
  /* 127f4b0c push 1 */
  push32((uint32_t)(0x1u));
  /* 127f4b0e call 0x127f7620 */
  push32(0x127f4b13u); f_127f7620();
  /* 127f4b13 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4b16 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f4b19 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f4b1b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127f4b1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4b21 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4b24 push edx */
  push32((uint32_t)(EDX));
  /* 127f4b25 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 127f4b27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f4b2a push eax */
  push32((uint32_t)(EAX));
  /* 127f4b2b push 0 */
  push32((uint32_t)(0x0u));
  /* 127f4b2d call 0x127f7620 */
  push32(0x127f4b32u); f_127f7620();
  /* 127f4b32 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4b35 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f4b38 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f4b3a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127f4b3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4b40 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4b43 push edx */
  push32((uint32_t)(EDX));
  /* 127f4b44 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 127f4b46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f4b49 push eax */
  push32((uint32_t)(EAX));
  /* 127f4b4a push 0 */
  push32((uint32_t)(0x0u));
  /* 127f4b4c call 0x127f7620 */
  push32(0x127f4b51u); f_127f7620();
  /* 127f4b51 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4b54 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f4b57 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f4b59 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127f4b5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4b5f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4b62 push edx */
  push32((uint32_t)(EDX));
  /* 127f4b63 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 127f4b65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f4b68 push eax */
  push32((uint32_t)(EAX));
  /* 127f4b69 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f4b6b call 0x127f7620 */
  push32(0x127f4b70u); f_127f7620();
  /* 127f4b70 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4b73 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f4b76 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f4b78 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127f4b7b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4b7e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4b81 push edx */
  push32((uint32_t)(EDX));
  /* 127f4b82 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 127f4b84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f4b87 push eax */
  push32((uint32_t)(EAX));
  /* 127f4b88 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f4b8a call 0x127f7620 */
  push32(0x127f4b8fu); f_127f7620();
  /* 127f4b8f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4b92 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f4b95 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f4b97 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127f4b9a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4b9d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4ba0 push edx */
  push32((uint32_t)(EDX));
  /* 127f4ba1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 127f4ba3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f4ba6 push eax */
  push32((uint32_t)(EAX));
  /* 127f4ba7 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f4ba9 call 0x127f7620 */
  push32(0x127f4baeu); f_127f7620();
  /* 127f4bae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4bb1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f4bb4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f4bb6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127f4bb9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4bbc add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4bbf push edx */
  push32((uint32_t)(EDX));
  /* 127f4bc0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 127f4bc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f4bc5 push eax */
  push32((uint32_t)(EAX));
  /* 127f4bc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f4bc8 call 0x127f7620 */
  push32(0x127f4bcdu); f_127f7620();
  /* 127f4bcd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4bd0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f4bd3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f4bd5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127f4bd8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4bdb add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4bde push edx */
  push32((uint32_t)(EDX));
  /* 127f4bdf push 0x52 */
  push32((uint32_t)(0x52u));
  /* 127f4be1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f4be4 push eax */
  push32((uint32_t)(EAX));
  /* 127f4be5 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f4be7 call 0x127f7620 */
  push32(0x127f4becu); f_127f7620();
  /* 127f4bec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4bef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f4bf2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f4bf4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127f4bf7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4bfa add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4bfd push edx */
  push32((uint32_t)(EDX));
  /* 127f4bfe push 0x53 */
  push32((uint32_t)(0x53u));
  /* 127f4c00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f4c03 push eax */
  push32((uint32_t)(EAX));
  /* 127f4c04 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f4c06 call 0x127f7620 */
  push32(0x127f4c0bu); f_127f7620();
  /* 127f4c0b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4c0e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f4c11 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127f4c13 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127f4c16 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_127f4c19:;
  /* 127f4c19 mov esp, ebp */
  ESP = (EBP);
  /* 127f4c1b pop ebp */
  EBP = (pop32());
  /* 127f4c1c ret  */
  ESPCHK(0x127f4a10u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x127f4c20 (125 bytes, 49 insns) */
void f_127f4c20(void) {
  FTRACE(0x127f4c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f4c20 push ebp */
  push32((uint32_t)(EBP));
  /* 127f4c21 mov ebp, esp */
  EBP = (ESP);
  /* 127f4c23 push ecx */
  push32((uint32_t)(ECX));
L_127f4c24:;
  /* 127f4c24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4c27 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127f4c2a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127f4c2c je 0x127f4c99 */
  if (C.zf) goto L_127f4c99;
  /* 127f4c2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4c31 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127f4c34 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f4c37 jl 0x127f4c5d */
  if ((C.sf!=C.of)) goto L_127f4c5d;
  /* 127f4c39 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4c3c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127f4c3f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f4c42 jg 0x127f4c5d */
  if ((!C.zf&&C.sf==C.of)) goto L_127f4c5d;
  /* 127f4c44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4c47 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127f4c4a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f4c4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4c50 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 127f4c52 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4c55 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4c58 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 127f4c5b jmp 0x127f4c97 */
  goto L_127f4c97;
L_127f4c5d:;
  /* 127f4c5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4c60 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127f4c63 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f4c66 jne 0x127f4c8e */
  if (!C.zf) goto L_127f4c8e;
  /* 127f4c68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4c6b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127f4c6e:;
  /* 127f4c6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f4c71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f4c74 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 127f4c77 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 127f4c79 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f4c7c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4c7f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127f4c82 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f4c85 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127f4c88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f4c8a jne 0x127f4c6e */
  if (!C.zf) goto L_127f4c6e;
  /* 127f4c8c jmp 0x127f4c97 */
  goto L_127f4c97;
L_127f4c8e:;
  /* 127f4c8e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4c91 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4c94 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_127f4c97:;
  /* 127f4c97 jmp 0x127f4c24 */
  goto L_127f4c24;
L_127f4c99:;
  /* 127f4c99 mov esp, ebp */
  ESP = (EBP);
  /* 127f4c9b pop ebp */
  EBP = (pop32());
  /* 127f4c9c ret  */
  ESPCHK(0x127f4c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10014ca0 @ 0x127f4ca0 (147 bytes, 52 insns) */
void f_127f4ca0(void) {
  FTRACE(0x127f4ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f4ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 127f4ca1 mov ebp, esp */
  EBP = (ESP);
  /* 127f4ca3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f4ca7 jne 0x127f4cae */
  if (!C.zf) goto L_127f4cae;
  /* 127f4ca9 jmp 0x127f4d31 */
  goto L_127f4d31;
L_127f4cae:;
  /* 127f4cae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4cb1 cmp dword ptr [eax + 0xc], 0x12815a98 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x12815a98u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f4cb8 je 0x127f4d31 */
  if (C.zf) goto L_127f4d31;
  /* 127f4cba push 2 */
  push32((uint32_t)(0x2u));
  /* 127f4cbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4cbf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 127f4cc2 push edx */
  push32((uint32_t)(EDX));
  /* 127f4cc3 call 0x127e9ef0 */
  push32(0x127f4cc8u); f_127e9ef0();
  /* 127f4cc8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4ccb push 2 */
  push32((uint32_t)(0x2u));
  /* 127f4ccd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4cd0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127f4cd3 push ecx */
  push32((uint32_t)(ECX));
  /* 127f4cd4 call 0x127e9ef0 */
  push32(0x127f4cd9u); f_127e9ef0();
  /* 127f4cd9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4cdc push 2 */
  push32((uint32_t)(0x2u));
  /* 127f4cde mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4ce1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 127f4ce4 push eax */
  push32((uint32_t)(EAX));
  /* 127f4ce5 call 0x127e9ef0 */
  push32(0x127f4ceau); f_127e9ef0();
  /* 127f4cea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4ced push 2 */
  push32((uint32_t)(0x2u));
  /* 127f4cef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4cf2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 127f4cf5 push edx */
  push32((uint32_t)(EDX));
  /* 127f4cf6 call 0x127e9ef0 */
  push32(0x127f4cfbu); f_127e9ef0();
  /* 127f4cfb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4cfe push 2 */
  push32((uint32_t)(0x2u));
  /* 127f4d00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4d03 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 127f4d06 push ecx */
  push32((uint32_t)(ECX));
  /* 127f4d07 call 0x127e9ef0 */
  push32(0x127f4d0cu); f_127e9ef0();
  /* 127f4d0c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4d0f push 2 */
  push32((uint32_t)(0x2u));
  /* 127f4d11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4d14 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 127f4d17 push eax */
  push32((uint32_t)(EAX));
  /* 127f4d18 call 0x127e9ef0 */
  push32(0x127f4d1du); f_127e9ef0();
  /* 127f4d1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4d20 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f4d22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f4d25 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 127f4d28 push edx */
  push32((uint32_t)(EDX));
  /* 127f4d29 call 0x127e9ef0 */
  push32(0x127f4d2eu); f_127e9ef0();
  /* 127f4d2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127f4d31:;
  /* 127f4d31 pop ebp */
  EBP = (pop32());
  /* 127f4d32 ret  */
  ESPCHK(0x127f4ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014d40 @ 0x127f4d40 (928 bytes, 284 insns) */
void f_127f4d40(void) {
  FTRACE(0x127f4d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f4d40 push ebp */
  push32((uint32_t)(EBP));
  /* 127f4d41 mov ebp, esp */
  EBP = (ESP);
  /* 127f4d43 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f4d46 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 127f4d4d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 127f4d54 cmp dword ptr [0x12815a00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815a00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f4d5b je 0x127f5091 */
  if (C.zf) goto L_127f5091;
  /* 127f4d61 cmp dword ptr [0x12815a10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815a10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f4d68 jne 0x127f4d90 */
  if (!C.zf) goto L_127f4d90;
  /* 127f4d6a push 0x12815a10 */
  push32((uint32_t)(0x12815a10u));
  /* 127f4d6f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 127f4d74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f4d76 mov ax, word ptr [0x12815a54] */
  AX = (r16((uint32_t)(0x12815a54)));
  /* 127f4d7c push eax */
  push32((uint32_t)(EAX));
  /* 127f4d7d push 0 */
  push32((uint32_t)(0x0u));
  /* 127f4d7f call 0x127f7620 */
  push32(0x127f4d84u); f_127f7620();
  /* 127f4d84 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4d87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f4d89 je 0x127f4d90 */
  if (C.zf) goto L_127f4d90;
  /* 127f4d8b jmp 0x127f5052 */
  goto L_127f5052;
L_127f4d90:;
  /* 127f4d90 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 127f4d92 push 0x1281131c */
  push32((uint32_t)(0x1281131cu));
  /* 127f4d97 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f4d99 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 127f4d9e call 0x127e9460 */
  push32(0x127f4da3u); f_127e9460();
  /* 127f4da3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4da6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 127f4da9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 127f4dab push 0x1281131c */
  push32((uint32_t)(0x1281131cu));
  /* 127f4db0 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f4db2 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 127f4db7 call 0x127e9460 */
  push32(0x127f4dbcu); f_127e9460();
  /* 127f4dbc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4dbf mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 127f4dc2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 127f4dc4 push 0x1281131c */
  push32((uint32_t)(0x1281131cu));
  /* 127f4dc9 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f4dcb push 0x101 */
  push32((uint32_t)(0x101u));
  /* 127f4dd0 call 0x127e9460 */
  push32(0x127f4dd5u); f_127e9460();
  /* 127f4dd5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4dd8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 127f4ddb push 0x62 */
  push32((uint32_t)(0x62u));
  /* 127f4ddd push 0x1281131c */
  push32((uint32_t)(0x1281131cu));
  /* 127f4de2 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f4de4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 127f4de9 call 0x127e9460 */
  push32(0x127f4deeu); f_127e9460();
  /* 127f4dee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4df1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 127f4df4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f4df8 je 0x127f4e0c */
  if (C.zf) goto L_127f4e0c;
  /* 127f4dfa cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f4dfe je 0x127f4e0c */
  if (C.zf) goto L_127f4e0c;
  /* 127f4e00 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f4e04 je 0x127f4e0c */
  if (C.zf) goto L_127f4e0c;
  /* 127f4e06 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f4e0a jne 0x127f4e11 */
  if (!C.zf) goto L_127f4e11;
L_127f4e0c:;
  /* 127f4e0c jmp 0x127f5052 */
  goto L_127f5052;
L_127f4e11:;
  /* 127f4e11 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127f4e14 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 127f4e17 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 127f4e1e jmp 0x127f4e29 */
  goto L_127f4e29;
L_127f4e20:;
  /* 127f4e20 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 127f4e23 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4e26 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_127f4e29:;
  /* 127f4e29 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f4e30 jge 0x127f4e45 */
  if ((C.sf==C.of)) goto L_127f4e45;
  /* 127f4e32 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127f4e35 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 127f4e38 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 127f4e3a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127f4e3d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4e40 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 127f4e43 jmp 0x127f4e20 */
  goto L_127f4e20;
L_127f4e45:;
  /* 127f4e45 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 127f4e48 push eax */
  push32((uint32_t)(EAX));
  /* 127f4e49 mov ecx, dword ptr [0x12815a10] */
  ECX = (r32((uint32_t)(0x12815a10)));
  /* 127f4e4f push ecx */
  push32((uint32_t)(ECX));
  /* 127f4e50 call dword ptr [0x128182fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182fc))), 0x127f4e56u);
  /* 127f4e56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f4e58 jne 0x127f4e5f */
  if (!C.zf) goto L_127f4e5f;
  /* 127f4e5a jmp 0x127f5052 */
  goto L_127f5052;
L_127f4e5f:;
  /* 127f4e5f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f4e63 jbe 0x127f4e6a */
  if ((C.cf||C.zf)) goto L_127f4e6a;
  /* 127f4e65 jmp 0x127f5052 */
  goto L_127f5052;
L_127f4e6a:;
  /* 127f4e6a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f4e6d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 127f4e73 mov dword ptr [0x12813ea4], edx */
  w32((uint32_t)(0x12813ea4), (EDX));
  /* 127f4e79 cmp dword ptr [0x12813ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12813ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f4e80 jle 0x127f4ed9 */
  if ((C.zf||C.sf!=C.of)) goto L_127f4ed9;
  /* 127f4e82 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 127f4e85 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 127f4e88 jmp 0x127f4e93 */
  goto L_127f4e93;
L_127f4e8a:;
  /* 127f4e8a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127f4e8d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4e90 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_127f4e93:;
  /* 127f4e93 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127f4e96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f4e98 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127f4e9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f4e9c je 0x127f4ed9 */
  if (C.zf) goto L_127f4ed9;
  /* 127f4e9e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127f4ea1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127f4ea3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 127f4ea6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f4ea8 je 0x127f4ed9 */
  if (C.zf) goto L_127f4ed9;
  /* 127f4eaa mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127f4ead xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127f4eaf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127f4eb1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 127f4eb4 jmp 0x127f4ebf */
  goto L_127f4ebf;
L_127f4eb6:;
  /* 127f4eb6 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 127f4eb9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4ebc mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_127f4ebf:;
  /* 127f4ebf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127f4ec2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127f4ec4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 127f4ec7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f4eca jg 0x127f4ed7 */
  if ((!C.zf&&C.sf==C.of)) goto L_127f4ed7;
  /* 127f4ecc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127f4ecf add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4ed2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 127f4ed5 jmp 0x127f4eb6 */
  goto L_127f4eb6;
L_127f4ed7:;
  /* 127f4ed7 jmp 0x127f4e8a */
  goto L_127f4e8a;
L_127f4ed9:;
  /* 127f4ed9 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f4edb push 0 */
  push32((uint32_t)(0x0u));
  /* 127f4edd push 0 */
  push32((uint32_t)(0x0u));
  /* 127f4edf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127f4ee2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4ee5 push eax */
  push32((uint32_t)(EAX));
  /* 127f4ee6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 127f4eeb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127f4eee push ecx */
  push32((uint32_t)(ECX));
  /* 127f4eef push 1 */
  push32((uint32_t)(0x1u));
  /* 127f4ef1 call 0x127f1690 */
  push32(0x127f4ef6u); f_127f1690();
  /* 127f4ef6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4ef9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f4efb jne 0x127f4f02 */
  if (!C.zf) goto L_127f4f02;
  /* 127f4efd jmp 0x127f5052 */
  goto L_127f5052;
L_127f4f02:;
  /* 127f4f02 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127f4f05 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 127f4f0a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 127f4f0d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 127f4f10 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 127f4f17 jmp 0x127f4f22 */
  goto L_127f4f22;
L_127f4f19:;
  /* 127f4f19 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127f4f1c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4f1f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_127f4f22:;
  /* 127f4f22 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f4f29 jge 0x127f4f40 */
  if ((C.sf==C.of)) goto L_127f4f40;
  /* 127f4f2b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 127f4f2e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 127f4f32 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 127f4f35 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127f4f38 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4f3b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 127f4f3e jmp 0x127f4f19 */
  goto L_127f4f19;
L_127f4f40:;
  /* 127f4f40 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f4f42 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f4f44 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127f4f47 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4f4a push edx */
  push32((uint32_t)(EDX));
  /* 127f4f4b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 127f4f50 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 127f4f53 push eax */
  push32((uint32_t)(EAX));
  /* 127f4f54 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f4f56 call 0x127f78c0 */
  push32(0x127f4f5bu); f_127f78c0();
  /* 127f4f5b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4f5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f4f60 jne 0x127f4f67 */
  if (!C.zf) goto L_127f4f67;
  /* 127f4f62 jmp 0x127f5052 */
  goto L_127f5052;
L_127f4f67:;
  /* 127f4f67 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127f4f6a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 127f4f6f cmp dword ptr [0x12813ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12813ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f4f76 jle 0x127f4fd3 */
  if ((C.zf||C.sf!=C.of)) goto L_127f4fd3;
  /* 127f4f78 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 127f4f7b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 127f4f7e jmp 0x127f4f89 */
  goto L_127f4f89;
L_127f4f80:;
  /* 127f4f80 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127f4f83 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4f86 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_127f4f89:;
  /* 127f4f89 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127f4f8c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127f4f8e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127f4f90 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f4f92 je 0x127f4fd3 */
  if (C.zf) goto L_127f4fd3;
  /* 127f4f94 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127f4f97 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127f4f99 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 127f4f9c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127f4f9e je 0x127f4fd3 */
  if (C.zf) goto L_127f4fd3;
  /* 127f4fa0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127f4fa3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f4fa5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127f4fa7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 127f4faa jmp 0x127f4fb5 */
  goto L_127f4fb5;
L_127f4fac:;
  /* 127f4fac mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127f4faf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4fb2 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_127f4fb5:;
  /* 127f4fb5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127f4fb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f4fba mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 127f4fbd cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f4fc0 jg 0x127f4fd1 */
  if ((!C.zf&&C.sf==C.of)) goto L_127f4fd1;
  /* 127f4fc2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127f4fc5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127f4fc8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 127f4fcf jmp 0x127f4fac */
  goto L_127f4fac;
L_127f4fd1:;
  /* 127f4fd1 jmp 0x127f4f80 */
  goto L_127f4f80;
L_127f4fd3:;
  /* 127f4fd3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127f4fd6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4fd9 mov dword ptr [0x12813c98], eax */
  w32((uint32_t)(0x12813c98), (EAX));
  /* 127f4fde mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127f4fe1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f4fe4 mov dword ptr [0x12813c9c], ecx */
  w32((uint32_t)(0x12813c9c), (ECX));
  /* 127f4fea cmp dword ptr [0x12815a40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815a40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f4ff1 je 0x127f5004 */
  if (C.zf) goto L_127f5004;
  /* 127f4ff3 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f4ff5 mov edx, dword ptr [0x12815a40] */
  EDX = (r32((uint32_t)(0x12815a40)));
  /* 127f4ffb push edx */
  push32((uint32_t)(EDX));
  /* 127f4ffc call 0x127e9ef0 */
  push32(0x127f5001u); f_127e9ef0();
  /* 127f5001 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127f5004:;
  /* 127f5004 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127f5007 mov dword ptr [0x12815a40], eax */
  w32((uint32_t)(0x12815a40), (EAX));
  /* 127f500c cmp dword ptr [0x12815a44], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815a44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f5013 je 0x127f5026 */
  if (C.zf) goto L_127f5026;
  /* 127f5015 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f5017 mov ecx, dword ptr [0x12815a44] */
  ECX = (r32((uint32_t)(0x12815a44)));
  /* 127f501d push ecx */
  push32((uint32_t)(ECX));
  /* 127f501e call 0x127e9ef0 */
  push32(0x127f5023u); f_127e9ef0();
  /* 127f5023 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127f5026:;
  /* 127f5026 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127f5029 mov dword ptr [0x12815a44], edx */
  w32((uint32_t)(0x12815a44), (EDX));
  /* 127f502f push 2 */
  push32((uint32_t)(0x2u));
  /* 127f5031 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127f5034 push eax */
  push32((uint32_t)(EAX));
  /* 127f5035 call 0x127e9ef0 */
  push32(0x127f503au); f_127e9ef0();
  /* 127f503a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f503d push 2 */
  push32((uint32_t)(0x2u));
  /* 127f503f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 127f5042 push ecx */
  push32((uint32_t)(ECX));
  /* 127f5043 call 0x127e9ef0 */
  push32(0x127f5048u); f_127e9ef0();
  /* 127f5048 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f504b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f504d jmp 0x127f50dc */
  goto L_127f50dc;
L_127f5052:;
  /* 127f5052 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f5054 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127f5057 push edx */
  push32((uint32_t)(EDX));
  /* 127f5058 call 0x127e9ef0 */
  push32(0x127f505du); f_127e9ef0();
  /* 127f505d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f5060 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f5062 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127f5065 push eax */
  push32((uint32_t)(EAX));
  /* 127f5066 call 0x127e9ef0 */
  push32(0x127f506bu); f_127e9ef0();
  /* 127f506b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f506e push 2 */
  push32((uint32_t)(0x2u));
  /* 127f5070 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127f5073 push ecx */
  push32((uint32_t)(ECX));
  /* 127f5074 call 0x127e9ef0 */
  push32(0x127f5079u); f_127e9ef0();
  /* 127f5079 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f507c push 2 */
  push32((uint32_t)(0x2u));
  /* 127f507e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 127f5081 push edx */
  push32((uint32_t)(EDX));
  /* 127f5082 call 0x127e9ef0 */
  push32(0x127f5087u); f_127e9ef0();
  /* 127f5087 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f508a mov eax, 1 */
  EAX = (0x1u);
  /* 127f508f jmp 0x127f50dc */
  goto L_127f50dc;
L_127f5091:;
  /* 127f5091 mov dword ptr [0x12813c98], 0x12813ca2 */
  w32((uint32_t)(0x12813c98), (0x12813ca2u));
  /* 127f509b mov dword ptr [0x12813c9c], 0x12813ca2 */
  w32((uint32_t)(0x12813c9c), (0x12813ca2u));
  /* 127f50a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f50a7 mov eax, dword ptr [0x12815a40] */
  EAX = (r32((uint32_t)(0x12815a40)));
  /* 127f50ac push eax */
  push32((uint32_t)(EAX));
  /* 127f50ad call 0x127e9ef0 */
  push32(0x127f50b2u); f_127e9ef0();
  /* 127f50b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f50b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 127f50b7 mov ecx, dword ptr [0x12815a44] */
  ECX = (r32((uint32_t)(0x12815a44)));
  /* 127f50bd push ecx */
  push32((uint32_t)(ECX));
  /* 127f50be call 0x127e9ef0 */
  push32(0x127f50c3u); f_127e9ef0();
  /* 127f50c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f50c6 mov dword ptr [0x12815a40], 0 */
  w32((uint32_t)(0x12815a40), (0x0u));
  /* 127f50d0 mov dword ptr [0x12815a44], 0 */
  w32((uint32_t)(0x12815a44), (0x0u));
  /* 127f50da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127f50dc:;
  /* 127f50dc mov esp, ebp */
  ESP = (EBP);
  /* 127f50de pop ebp */
  EBP = (pop32());
  /* 127f50df ret  */
  ESPCHK(0x127f4d40u, _esp0);
  ESP += 4; return;
}

/* FUN_100150e0 @ 0x127f50e0 (7 bytes, 5 insns) */
void f_127f50e0(void) {
  FTRACE(0x127f50e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f50e0 push ebp */
  push32((uint32_t)(EBP));
  /* 127f50e1 mov ebp, esp */
  EBP = (ESP);
  /* 127f50e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f50e5 pop ebp */
  EBP = (pop32());
  /* 127f50e6 ret  */
  ESPCHK(0x127f50e0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x127f50f0 (129 bytes, 56 insns) */
void f_127f50f0(void) {
  FTRACE(0x127f50f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f50f0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 127f50f4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 127f50f8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 127f50fe jne 0x127f513c */
  if (!C.zf) goto L_127f513c;
L_127f5100:;
  /* 127f5100 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127f5102 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127f5104 jne 0x127f5134 */
  if (!C.zf) goto L_127f5134;
  /* 127f5106 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 127f5108 je 0x127f5130 */
  if (C.zf) goto L_127f5130;
  /* 127f510a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127f510d jne 0x127f5134 */
  if (!C.zf) goto L_127f5134;
  /* 127f510f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 127f5111 je 0x127f5130 */
  if (C.zf) goto L_127f5130;
  /* 127f5113 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 127f5116 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127f5119 jne 0x127f5134 */
  if (!C.zf) goto L_127f5134;
  /* 127f511b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 127f511d je 0x127f5130 */
  if (C.zf) goto L_127f5130;
  /* 127f511f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127f5122 jne 0x127f5134 */
  if (!C.zf) goto L_127f5134;
  /* 127f5124 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f5127 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f512a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 127f512c jne 0x127f5100 */
  if (!C.zf) goto L_127f5100;
  /* 127f512e mov edi, edi */
  EDI = (EDI);
L_127f5130:;
  /* 127f5130 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f5132 ret  */
  ESPCHK(0x127f50f0u, _esp0);
  ESP += 4; return;
  /* 127f5133 nop  */
  /* nop */
L_127f5134:;
  /* 127f5134 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f5136 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 127f5138 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 127f5139 ret  */
  ESPCHK(0x127f50f0u, _esp0);
  ESP += 4; return;
  /* 127f513a mov edi, edi */
  EDI = (EDI);
L_127f513c:;
  /* 127f513c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 127f5142 je 0x127f5158 */
  if (C.zf) goto L_127f5158;
  /* 127f5144 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127f5146 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 127f5147 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127f5149 jne 0x127f5134 */
  if (!C.zf) goto L_127f5134;
  /* 127f514b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 127f514c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 127f514e je 0x127f5130 */
  if (C.zf) goto L_127f5130;
  /* 127f5150 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 127f5156 je 0x127f5100 */
  if (C.zf) goto L_127f5100;
L_127f5158:;
  /* 127f5158 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 127f515b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f515e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127f5160 jne 0x127f5134 */
  if (!C.zf) goto L_127f5134;
  /* 127f5162 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 127f5164 je 0x127f5130 */
  if (C.zf) goto L_127f5130;
  /* 127f5166 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127f5169 jne 0x127f5134 */
  if (!C.zf) goto L_127f5134;
  /* 127f516b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 127f516d je 0x127f5130 */
  if (C.zf) goto L_127f5130;
  /* 127f516f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f5172 jmp 0x127f5100 */
  goto L_127f5100;
}

/* FUN_10015180 @ 0x127f5180 (62 bytes, 35 insns) */
void f_127f5180(void) {
  FTRACE(0x127f5180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f5180 push ebp */
  push32((uint32_t)(EBP));
  /* 127f5181 mov ebp, esp */
  EBP = (ESP);
  /* 127f5183 push esi */
  push32((uint32_t)(ESI));
  /* 127f5184 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f5186 push eax */
  push32((uint32_t)(EAX));
  /* 127f5187 push eax */
  push32((uint32_t)(EAX));
  /* 127f5188 push eax */
  push32((uint32_t)(EAX));
  /* 127f5189 push eax */
  push32((uint32_t)(EAX));
  /* 127f518a push eax */
  push32((uint32_t)(EAX));
  /* 127f518b push eax */
  push32((uint32_t)(EAX));
  /* 127f518c push eax */
  push32((uint32_t)(EAX));
  /* 127f518d push eax */
  push32((uint32_t)(EAX));
  /* 127f518e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f5191 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_127f5194:;
  /* 127f5194 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127f5196 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 127f5198 je 0x127f51a1 */
  if (C.zf) goto L_127f51a1;
  /* 127f519a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 127f519b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x127f519b");
  /* 127f519f jmp 0x127f5194 */
  goto L_127f5194;
L_127f51a1:;
  /* 127f51a1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 127f51a4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 127f51a7 nop  */
  /* nop */
L_127f51a8:;
  /* 127f51a8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 127f51a9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 127f51ab or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 127f51ad je 0x127f51b6 */
  if (C.zf) goto L_127f51b6;
  /* 127f51af inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 127f51b0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x127f51b0");
  /* 127f51b4 jae 0x127f51a8 */
  if (!C.cf) goto L_127f51a8;
L_127f51b6:;
  /* 127f51b6 mov eax, ecx */
  EAX = (ECX);
  /* 127f51b8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f51bb pop esi */
  ESI = (pop32());
  /* 127f51bc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 127f51bd ret  */
  ESPCHK(0x127f5180u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x127f51c0 (56 bytes, 31 insns) */
void f_127f51c0(void) {
  FTRACE(0x127f51c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f51c0 push ebp */
  push32((uint32_t)(EBP));
  /* 127f51c1 mov ebp, esp */
  EBP = (ESP);
  /* 127f51c3 push edi */
  push32((uint32_t)(EDI));
  /* 127f51c4 push esi */
  push32((uint32_t)(ESI));
  /* 127f51c5 push ebx */
  push32((uint32_t)(EBX));
  /* 127f51c6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f51c9 jecxz 0x127f51f1 */
  x86_unimpl("jecxz @ 0x127f51c9");
  /* 127f51cb mov ebx, ecx */
  EBX = (ECX);
  /* 127f51cd mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 127f51d0 mov esi, edi */
  ESI = (EDI);
  /* 127f51d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f51d4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 127f51d6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 127f51d8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f51da mov edi, esi */
  EDI = (ESI);
  /* 127f51dc mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 127f51df repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 127f51e1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 127f51e4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127f51e6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127f51e9 ja 0x127f51ef */
  if ((!C.cf&&!C.zf)) goto L_127f51ef;
  /* 127f51eb je 0x127f51f1 */
  if (C.zf) goto L_127f51f1;
  /* 127f51ed dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 127f51ee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_127f51ef:;
  /* 127f51ef not ecx */
  ECX = (~(ECX));
L_127f51f1:;
  /* 127f51f1 mov eax, ecx */
  EAX = (ECX);
  /* 127f51f3 pop ebx */
  EBX = (pop32());
  /* 127f51f4 pop esi */
  ESI = (pop32());
  /* 127f51f5 pop edi */
  EDI = (pop32());
  /* 127f51f6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 127f51f7 ret  */
  ESPCHK(0x127f51c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015200 @ 0x127f5200 (58 bytes, 32 insns) */
void f_127f5200(void) {
  FTRACE(0x127f5200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f5200 push ebp */
  push32((uint32_t)(EBP));
  /* 127f5201 mov ebp, esp */
  EBP = (ESP);
  /* 127f5203 push esi */
  push32((uint32_t)(ESI));
  /* 127f5204 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f5206 push eax */
  push32((uint32_t)(EAX));
  /* 127f5207 push eax */
  push32((uint32_t)(EAX));
  /* 127f5208 push eax */
  push32((uint32_t)(EAX));
  /* 127f5209 push eax */
  push32((uint32_t)(EAX));
  /* 127f520a push eax */
  push32((uint32_t)(EAX));
  /* 127f520b push eax */
  push32((uint32_t)(EAX));
  /* 127f520c push eax */
  push32((uint32_t)(EAX));
  /* 127f520d push eax */
  push32((uint32_t)(EAX));
  /* 127f520e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f5211 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_127f5214:;
  /* 127f5214 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127f5216 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 127f5218 je 0x127f5221 */
  if (C.zf) goto L_127f5221;
  /* 127f521a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 127f521b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x127f521b");
  /* 127f521f jmp 0x127f5214 */
  goto L_127f5214;
L_127f5221:;
  /* 127f5221 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_127f5224:;
  /* 127f5224 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 127f5226 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 127f5228 je 0x127f5234 */
  if (C.zf) goto L_127f5234;
  /* 127f522a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 127f522b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x127f522b");
  /* 127f522f jae 0x127f5224 */
  if (!C.cf) goto L_127f5224;
  /* 127f5231 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_127f5234:;
  /* 127f5234 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f5237 pop esi */
  ESI = (pop32());
  /* 127f5238 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 127f5239 ret  */
  ESPCHK(0x127f5200u, _esp0);
  ESP += 4; return;
}

/* FUN_10015240 @ 0x127f5240 (512 bytes, 147 insns) */
void f_127f5240(void) {
  FTRACE(0x127f5240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f5240 push ebp */
  push32((uint32_t)(EBP));
  /* 127f5241 mov ebp, esp */
  EBP = (ESP);
  /* 127f5243 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f5246 cmp dword ptr [0x12815a8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815a8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f524d jne 0x127f5272 */
  if (!C.zf) goto L_127f5272;
  /* 127f524f call 0x127f5d10 */
  push32(0x127f5254u); f_127f5d10();
  /* 127f5254 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f5256 je 0x127f5262 */
  if (C.zf) goto L_127f5262;
  /* 127f5258 mov eax, dword ptr [0x128182c0] */
  EAX = (r32((uint32_t)(0x128182c0)));
  /* 127f525d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127f5260 jmp 0x127f5269 */
  goto L_127f5269;
L_127f5262:;
  /* 127f5262 mov dword ptr [ebp - 8], 0x127f5d60 */
  w32((uint32_t)(EBP + -0x8), (0x127f5d60u));
L_127f5269:;
  /* 127f5269 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f526c mov dword ptr [0x12815a8c], ecx */
  w32((uint32_t)(0x12815a8c), (ECX));
L_127f5272:;
  /* 127f5272 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f5276 jne 0x127f5282 */
  if (!C.zf) goto L_127f5282;
  /* 127f5278 call 0x127f5b60 */
  push32(0x127f527du); f_127f5b60();
  /* 127f527d jmp 0x127f534e */
  goto L_127f534e;
L_127f5282:;
  /* 127f5282 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f5285 mov dword ptr [0x12815a7c], edx */
  w32((uint32_t)(0x12815a7c), (EDX));
  /* 127f528b cmp dword ptr [0x12815a7c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815a7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f5292 je 0x127f52b4 */
  if (C.zf) goto L_127f52b4;
  /* 127f5294 mov eax, dword ptr [0x12815a7c] */
  EAX = (r32((uint32_t)(0x12815a7c)));
  /* 127f5299 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127f529c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127f529e je 0x127f52b4 */
  if (C.zf) goto L_127f52b4;
  /* 127f52a0 push 0x12815a7c */
  push32((uint32_t)(0x12815a7cu));
  /* 127f52a5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 127f52a7 push 0x12814a90 */
  push32((uint32_t)(0x12814a90u));
  /* 127f52ac call 0x127f5440 */
  push32(0x127f52b1u); f_127f5440();
  /* 127f52b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127f52b4:;
  /* 127f52b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f52b7 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f52ba mov dword ptr [0x12815a80], edx */
  w32((uint32_t)(0x12815a80), (EDX));
  /* 127f52c0 cmp dword ptr [0x12815a80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815a80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f52c7 je 0x127f52e9 */
  if (C.zf) goto L_127f52e9;
  /* 127f52c9 mov eax, dword ptr [0x12815a80] */
  EAX = (r32((uint32_t)(0x12815a80)));
  /* 127f52ce movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127f52d1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127f52d3 je 0x127f52e9 */
  if (C.zf) goto L_127f52e9;
  /* 127f52d5 push 0x12815a80 */
  push32((uint32_t)(0x12815a80u));
  /* 127f52da push 0x16 */
  push32((uint32_t)(0x16u));
  /* 127f52dc push 0x128149d8 */
  push32((uint32_t)(0x128149d8u));
  /* 127f52e1 call 0x127f5440 */
  push32(0x127f52e6u); f_127f5440();
  /* 127f52e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127f52e9:;
  /* 127f52e9 mov dword ptr [0x12815a84], 0 */
  w32((uint32_t)(0x12815a84), (0x0u));
  /* 127f52f3 cmp dword ptr [0x12815a7c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815a7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f52fa je 0x127f532d */
  if (C.zf) goto L_127f532d;
  /* 127f52fc mov edx, dword ptr [0x12815a7c] */
  EDX = (r32((uint32_t)(0x12815a7c)));
  /* 127f5302 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127f5305 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f5307 je 0x127f532d */
  if (C.zf) goto L_127f532d;
  /* 127f5309 cmp dword ptr [0x12815a80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815a80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f5310 je 0x127f5326 */
  if (C.zf) goto L_127f5326;
  /* 127f5312 mov ecx, dword ptr [0x12815a80] */
  ECX = (r32((uint32_t)(0x12815a80)));
  /* 127f5318 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127f531b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f531d je 0x127f5326 */
  if (C.zf) goto L_127f5326;
  /* 127f531f call 0x127f54d0 */
  push32(0x127f5324u); f_127f54d0();
  /* 127f5324 jmp 0x127f532b */
  goto L_127f532b;
L_127f5326:;
  /* 127f5326 call 0x127f58c0 */
  push32(0x127f532bu); f_127f58c0();
L_127f532b:;
  /* 127f532b jmp 0x127f534e */
  goto L_127f534e;
L_127f532d:;
  /* 127f532d cmp dword ptr [0x12815a80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815a80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f5334 je 0x127f5349 */
  if (C.zf) goto L_127f5349;
  /* 127f5336 mov eax, dword ptr [0x12815a80] */
  EAX = (r32((uint32_t)(0x12815a80)));
  /* 127f533b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127f533e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127f5340 je 0x127f5349 */
  if (C.zf) goto L_127f5349;
  /* 127f5342 call 0x127f5a60 */
  push32(0x127f5347u); f_127f5a60();
  /* 127f5347 jmp 0x127f534e */
  goto L_127f534e;
L_127f5349:;
  /* 127f5349 call 0x127f5b60 */
  push32(0x127f534eu); f_127f5b60();
L_127f534e:;
  /* 127f534e cmp dword ptr [0x12815a84], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815a84))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f5355 jne 0x127f535e */
  if (!C.zf) goto L_127f535e;
  /* 127f5357 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f5359 jmp 0x127f543c */
  goto L_127f543c;
L_127f535e:;
  /* 127f535e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f5361 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f5367 push edx */
  push32((uint32_t)(EDX));
  /* 127f5368 call 0x127f5b90 */
  push32(0x127f536du); f_127f5b90();
  /* 127f536d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f5370 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127f5373 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f5377 je 0x127f538c */
  if (C.zf) goto L_127f538c;
  /* 127f5379 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f537c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f5381 push eax */
  push32((uint32_t)(EAX));
  /* 127f5382 call dword ptr [0x128182c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182c4))), 0x127f5388u);
  /* 127f5388 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f538a jne 0x127f5393 */
  if (!C.zf) goto L_127f5393;
L_127f538c:;
  /* 127f538c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f538e jmp 0x127f543c */
  goto L_127f543c;
L_127f5393:;
  /* 127f5393 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f5395 mov ecx, dword ptr [0x12815a6c] */
  ECX = (r32((uint32_t)(0x12815a6c)));
  /* 127f539b push ecx */
  push32((uint32_t)(ECX));
  /* 127f539c call dword ptr [0x128182c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182c8))), 0x127f53a2u);
  /* 127f53a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f53a4 jne 0x127f53ad */
  if (!C.zf) goto L_127f53ad;
  /* 127f53a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f53a8 jmp 0x127f543c */
  goto L_127f543c;
L_127f53ad:;
  /* 127f53ad cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f53b1 je 0x127f53d8 */
  if (C.zf) goto L_127f53d8;
  /* 127f53b3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f53b6 mov ax, word ptr [0x12815a6c] */
  AX = (r16((uint32_t)(0x12815a6c)));
  /* 127f53bc mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 127f53bf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f53c2 mov dx, word ptr [0x12815a88] */
  DX = (r16((uint32_t)(0x12815a88)));
  /* 127f53c9 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 127f53cd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f53d0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 127f53d4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_127f53d8:;
  /* 127f53d8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f53dc je 0x127f5437 */
  if (C.zf) goto L_127f5437;
  /* 127f53de push 0x40 */
  push32((uint32_t)(0x40u));
  /* 127f53e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f53e3 push edx */
  push32((uint32_t)(EDX));
  /* 127f53e4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 127f53e9 mov eax, dword ptr [0x12815a6c] */
  EAX = (r32((uint32_t)(0x12815a6c)));
  /* 127f53ee push eax */
  push32((uint32_t)(EAX));
  /* 127f53ef call dword ptr [0x12815a8c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12815a8c))), 0x127f53f5u);
  /* 127f53f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f53f7 jne 0x127f53fd */
  if (!C.zf) goto L_127f53fd;
  /* 127f53f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f53fb jmp 0x127f543c */
  goto L_127f543c;
L_127f53fd:;
  /* 127f53fd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 127f53ff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f5402 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f5405 push ecx */
  push32((uint32_t)(ECX));
  /* 127f5406 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 127f540b mov edx, dword ptr [0x12815a88] */
  EDX = (r32((uint32_t)(0x12815a88)));
  /* 127f5411 push edx */
  push32((uint32_t)(EDX));
  /* 127f5412 call dword ptr [0x12815a8c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12815a8c))), 0x127f5418u);
  /* 127f5418 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f541a jne 0x127f5420 */
  if (!C.zf) goto L_127f5420;
  /* 127f541c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f541e jmp 0x127f543c */
  goto L_127f543c;
L_127f5420:;
  /* 127f5420 push 0xa */
  push32((uint32_t)(0xau));
  /* 127f5422 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f5425 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f542a push eax */
  push32((uint32_t)(EAX));
  /* 127f542b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f542e push ecx */
  push32((uint32_t)(ECX));
  /* 127f542f call 0x127ebfa0 */
  push32(0x127f5434u); f_127ebfa0();
  /* 127f5434 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127f5437:;
  /* 127f5437 mov eax, 1 */
  EAX = (0x1u);
L_127f543c:;
  /* 127f543c mov esp, ebp */
  ESP = (EBP);
  /* 127f543e pop ebp */
  EBP = (pop32());
  /* 127f543f ret  */
  ESPCHK(0x127f5240u, _esp0);
  ESP += 4; return;
}

/* FUN_10015440 @ 0x127f5440 (130 bytes, 47 insns) */
void f_127f5440(void) {
  FTRACE(0x127f5440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f5440 push ebp */
  push32((uint32_t)(EBP));
  /* 127f5441 mov ebp, esp */
  EBP = (ESP);
  /* 127f5443 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f5446 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 127f544d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_127f5454:;
  /* 127f5454 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f5457 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f545a jg 0x127f54be */
  if ((!C.zf&&C.sf==C.of)) goto L_127f54be;
  /* 127f545c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f5460 je 0x127f54be */
  if (C.zf) goto L_127f54be;
  /* 127f5462 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f5465 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f5468 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127f5469 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f546b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 127f546d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127f5470 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f5473 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f5476 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 127f5479 push eax */
  push32((uint32_t)(EAX));
  /* 127f547a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f547d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127f547f push edx */
  push32((uint32_t)(EDX));
  /* 127f5480 call 0x127f7b30 */
  push32(0x127f5485u); f_127f7b30();
  /* 127f5485 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f5488 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127f548b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f548f jne 0x127f54a2 */
  if (!C.zf) goto L_127f54a2;
  /* 127f5491 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f5494 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f5497 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 127f549b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f549e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 127f54a0 jmp 0x127f54bc */
  goto L_127f54bc;
L_127f54a2:;
  /* 127f54a2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f54a6 jge 0x127f54b3 */
  if ((C.sf==C.of)) goto L_127f54b3;
  /* 127f54a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f54ab sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f54ae mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 127f54b1 jmp 0x127f54bc */
  goto L_127f54bc;
L_127f54b3:;
  /* 127f54b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f54b6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f54b9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_127f54bc:;
  /* 127f54bc jmp 0x127f5454 */
  goto L_127f5454;
L_127f54be:;
  /* 127f54be mov esp, ebp */
  ESP = (EBP);
  /* 127f54c0 pop ebp */
  EBP = (pop32());
  /* 127f54c1 ret  */
  ESPCHK(0x127f5440u, _esp0);
  ESP += 4; return;
}

/* FUN_100154d0 @ 0x127f54d0 (186 bytes, 50 insns) */
void f_127f54d0(void) {
  FTRACE(0x127f54d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f54d0 push ebp */
  push32((uint32_t)(EBP));
  /* 127f54d1 mov ebp, esp */
  EBP = (ESP);
  /* 127f54d3 push ecx */
  push32((uint32_t)(ECX));
  /* 127f54d4 mov eax, dword ptr [0x12815a7c] */
  EAX = (r32((uint32_t)(0x12815a7c)));
  /* 127f54d9 push eax */
  push32((uint32_t)(EAX));
  /* 127f54da call 0x127ec290 */
  push32(0x127f54dfu); f_127ec290();
  /* 127f54df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f54e2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127f54e4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f54e7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 127f54ea mov dword ptr [0x12815a78], ecx */
  w32((uint32_t)(0x12815a78), (ECX));
  /* 127f54f0 mov edx, dword ptr [0x12815a80] */
  EDX = (r32((uint32_t)(0x12815a80)));
  /* 127f54f6 push edx */
  push32((uint32_t)(EDX));
  /* 127f54f7 call 0x127ec290 */
  push32(0x127f54fcu); f_127ec290();
  /* 127f54fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f54ff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127f5501 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f5504 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 127f5507 mov dword ptr [0x12815a70], ecx */
  w32((uint32_t)(0x12815a70), (ECX));
  /* 127f550d mov dword ptr [0x12815a6c], 0 */
  w32((uint32_t)(0x12815a6c), (0x0u));
  /* 127f5517 cmp dword ptr [0x12815a78], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815a78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f551e je 0x127f5529 */
  if (C.zf) goto L_127f5529;
  /* 127f5520 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 127f5527 jmp 0x127f553b */
  goto L_127f553b;
L_127f5529:;
  /* 127f5529 mov edx, dword ptr [0x12815a7c] */
  EDX = (r32((uint32_t)(0x12815a7c)));
  /* 127f552f push edx */
  push32((uint32_t)(EDX));
  /* 127f5530 call 0x127f5f70 */
  push32(0x127f5535u); f_127f5f70();
  /* 127f5535 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f5538 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127f553b:;
  /* 127f553b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f553e mov dword ptr [0x12815a74], eax */
  w32((uint32_t)(0x12815a74), (EAX));
  /* 127f5543 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f5545 push 0x127f5590 */
  push32((uint32_t)(0x127f5590u));
  /* 127f554a call dword ptr [0x128182bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182bc))), 0x127f5550u);
  /* 127f5550 mov ecx, dword ptr [0x12815a84] */
  ECX = (r32((uint32_t)(0x12815a84)));
  /* 127f5556 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 127f555c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127f555e je 0x127f557c */
  if (C.zf) goto L_127f557c;
  /* 127f5560 mov edx, dword ptr [0x12815a84] */
  EDX = (r32((uint32_t)(0x12815a84)));
  /* 127f5566 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 127f556c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f556e je 0x127f557c */
  if (C.zf) goto L_127f557c;
  /* 127f5570 mov eax, dword ptr [0x12815a84] */
  EAX = (r32((uint32_t)(0x12815a84)));
  /* 127f5575 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 127f5578 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f557a jne 0x127f5586 */
  if (!C.zf) goto L_127f5586;
L_127f557c:;
  /* 127f557c mov dword ptr [0x12815a84], 0 */
  w32((uint32_t)(0x12815a84), (0x0u));
L_127f5586:;
  /* 127f5586 mov esp, ebp */
  ESP = (EBP);
  /* 127f5588 pop ebp */
  EBP = (pop32());
  /* 127f5589 ret  */
  ESPCHK(0x127f54d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015590 @ 0x127f5590 (804 bytes, 220 insns) */
void f_127f5590(void) {
  FTRACE(0x127f5590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f5590 push ebp */
  push32((uint32_t)(EBP));
  /* 127f5591 mov ebp, esp */
  EBP = (ESP);
  /* 127f5593 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f5596 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f5599 push eax */
  push32((uint32_t)(EAX));
  /* 127f559a call 0x127f5ef0 */
  push32(0x127f559fu); f_127f5ef0();
  /* 127f559f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f55a2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 127f55a5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 127f55a7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 127f55aa push ecx */
  push32((uint32_t)(ECX));
  /* 127f55ab mov edx, dword ptr [0x12815a70] */
  EDX = (r32((uint32_t)(0x12815a70)));
  /* 127f55b1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 127f55b3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f55b5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 127f55bb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f55c1 push edx */
  push32((uint32_t)(EDX));
  /* 127f55c2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127f55c5 push eax */
  push32((uint32_t)(EAX));
  /* 127f55c6 call dword ptr [0x12815a8c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12815a8c))), 0x127f55ccu);
  /* 127f55cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f55ce jne 0x127f55e4 */
  if (!C.zf) goto L_127f55e4;
  /* 127f55d0 mov dword ptr [0x12815a84], 0 */
  w32((uint32_t)(0x12815a84), (0x0u));
  /* 127f55da mov eax, 1 */
  EAX = (0x1u);
  /* 127f55df jmp 0x127f58ae */
  goto L_127f58ae;
L_127f55e4:;
  /* 127f55e4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 127f55e7 push ecx */
  push32((uint32_t)(ECX));
  /* 127f55e8 mov edx, dword ptr [0x12815a80] */
  EDX = (r32((uint32_t)(0x12815a80)));
  /* 127f55ee push edx */
  push32((uint32_t)(EDX));
  /* 127f55ef call 0x127f7b30 */
  push32(0x127f55f4u); f_127f7b30();
  /* 127f55f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f55f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f55f9 jne 0x127f571f */
  if (!C.zf) goto L_127f571f;
  /* 127f55ff push 0x78 */
  push32((uint32_t)(0x78u));
  /* 127f5601 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 127f5604 push eax */
  push32((uint32_t)(EAX));
  /* 127f5605 mov ecx, dword ptr [0x12815a78] */
  ECX = (r32((uint32_t)(0x12815a78)));
  /* 127f560b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 127f560d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f560f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 127f5615 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f561b push ecx */
  push32((uint32_t)(ECX));
  /* 127f561c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127f561f push edx */
  push32((uint32_t)(EDX));
  /* 127f5620 call dword ptr [0x12815a8c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12815a8c))), 0x127f5626u);
  /* 127f5626 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f5628 jne 0x127f563e */
  if (!C.zf) goto L_127f563e;
  /* 127f562a mov dword ptr [0x12815a84], 0 */
  w32((uint32_t)(0x12815a84), (0x0u));
  /* 127f5634 mov eax, 1 */
  EAX = (0x1u);
  /* 127f5639 jmp 0x127f58ae */
  goto L_127f58ae;
L_127f563e:;
  /* 127f563e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 127f5641 push eax */
  push32((uint32_t)(EAX));
  /* 127f5642 mov ecx, dword ptr [0x12815a7c] */
  ECX = (r32((uint32_t)(0x12815a7c)));
  /* 127f5648 push ecx */
  push32((uint32_t)(ECX));
  /* 127f5649 call 0x127f7b30 */
  push32(0x127f564eu); f_127f7b30();
  /* 127f564e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f5651 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f5653 jne 0x127f5680 */
  if (!C.zf) goto L_127f5680;
  /* 127f5655 mov edx, dword ptr [0x12815a84] */
  EDX = (r32((uint32_t)(0x12815a84)));
  /* 127f565b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 127f5661 mov dword ptr [0x12815a84], edx */
  w32((uint32_t)(0x12815a84), (EDX));
  /* 127f5667 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127f566a mov dword ptr [0x12815a88], eax */
  w32((uint32_t)(0x12815a88), (EAX));
  /* 127f566f mov ecx, dword ptr [0x12815a88] */
  ECX = (r32((uint32_t)(0x12815a88)));
  /* 127f5675 mov dword ptr [0x12815a6c], ecx */
  w32((uint32_t)(0x12815a6c), (ECX));
  /* 127f567b jmp 0x127f571f */
  goto L_127f571f;
L_127f5680:;
  /* 127f5680 mov edx, dword ptr [0x12815a84] */
  EDX = (r32((uint32_t)(0x12815a84)));
  /* 127f5686 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 127f5689 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f568b jne 0x127f571f */
  if (!C.zf) goto L_127f571f;
  /* 127f5691 cmp dword ptr [0x12815a74], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815a74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f5698 je 0x127f56ed */
  if (C.zf) goto L_127f56ed;
  /* 127f569a mov eax, dword ptr [0x12815a74] */
  EAX = (r32((uint32_t)(0x12815a74)));
  /* 127f569f push eax */
  push32((uint32_t)(EAX));
  /* 127f56a0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 127f56a3 push ecx */
  push32((uint32_t)(ECX));
  /* 127f56a4 mov edx, dword ptr [0x12815a7c] */
  EDX = (r32((uint32_t)(0x12815a7c)));
  /* 127f56aa push edx */
  push32((uint32_t)(EDX));
  /* 127f56ab call 0x127f7c00 */
  push32(0x127f56b0u); f_127f7c00();
  /* 127f56b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f56b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f56b5 jne 0x127f56ed */
  if (!C.zf) goto L_127f56ed;
  /* 127f56b7 mov eax, dword ptr [0x12815a84] */
  EAX = (r32((uint32_t)(0x12815a84)));
  /* 127f56bc or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 127f56be mov dword ptr [0x12815a84], eax */
  w32((uint32_t)(0x12815a84), (EAX));
  /* 127f56c3 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127f56c6 mov dword ptr [0x12815a88], ecx */
  w32((uint32_t)(0x12815a88), (ECX));
  /* 127f56cc mov edx, dword ptr [0x12815a7c] */
  EDX = (r32((uint32_t)(0x12815a7c)));
  /* 127f56d2 push edx */
  push32((uint32_t)(EDX));
  /* 127f56d3 call 0x127ec290 */
  push32(0x127f56d8u); f_127ec290();
  /* 127f56d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f56db cmp eax, dword ptr [0x12815a74] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12815a74))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f56e1 jne 0x127f56eb */
  if (!C.zf) goto L_127f56eb;
  /* 127f56e3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127f56e6 mov dword ptr [0x12815a6c], eax */
  w32((uint32_t)(0x12815a6c), (EAX));
L_127f56eb:;
  /* 127f56eb jmp 0x127f571f */
  goto L_127f571f;
L_127f56ed:;
  /* 127f56ed mov ecx, dword ptr [0x12815a84] */
  ECX = (r32((uint32_t)(0x12815a84)));
  /* 127f56f3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 127f56f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127f56f8 jne 0x127f571f */
  if (!C.zf) goto L_127f571f;
  /* 127f56fa mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127f56fd push edx */
  push32((uint32_t)(EDX));
  /* 127f56fe call 0x127f5c30 */
  push32(0x127f5703u); f_127f5c30();
  /* 127f5703 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f5706 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f5708 je 0x127f571f */
  if (C.zf) goto L_127f571f;
  /* 127f570a mov eax, dword ptr [0x12815a84] */
  EAX = (r32((uint32_t)(0x12815a84)));
  /* 127f570f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 127f5711 mov dword ptr [0x12815a84], eax */
  w32((uint32_t)(0x12815a84), (EAX));
  /* 127f5716 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127f5719 mov dword ptr [0x12815a88], ecx */
  w32((uint32_t)(0x12815a88), (ECX));
L_127f571f:;
  /* 127f571f mov edx, dword ptr [0x12815a84] */
  EDX = (r32((uint32_t)(0x12815a84)));
  /* 127f5725 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 127f572b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f5731 je 0x127f58a1 */
  if (C.zf) goto L_127f58a1;
  /* 127f5737 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 127f5739 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 127f573c push eax */
  push32((uint32_t)(EAX));
  /* 127f573d mov ecx, dword ptr [0x12815a78] */
  ECX = (r32((uint32_t)(0x12815a78)));
  /* 127f5743 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 127f5745 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f5747 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 127f574d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f5753 push ecx */
  push32((uint32_t)(ECX));
  /* 127f5754 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127f5757 push edx */
  push32((uint32_t)(EDX));
  /* 127f5758 call dword ptr [0x12815a8c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12815a8c))), 0x127f575eu);
  /* 127f575e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f5760 jne 0x127f5776 */
  if (!C.zf) goto L_127f5776;
  /* 127f5762 mov dword ptr [0x12815a84], 0 */
  w32((uint32_t)(0x12815a84), (0x0u));
  /* 127f576c mov eax, 1 */
  EAX = (0x1u);
  /* 127f5771 jmp 0x127f58ae */
  goto L_127f58ae;
L_127f5776:;
  /* 127f5776 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 127f5779 push eax */
  push32((uint32_t)(EAX));
  /* 127f577a mov ecx, dword ptr [0x12815a7c] */
  ECX = (r32((uint32_t)(0x12815a7c)));
  /* 127f5780 push ecx */
  push32((uint32_t)(ECX));
  /* 127f5781 call 0x127f7b30 */
  push32(0x127f5786u); f_127f7b30();
  /* 127f5786 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f5789 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f578b jne 0x127f5840 */
  if (!C.zf) goto L_127f5840;
  /* 127f5791 mov edx, dword ptr [0x12815a84] */
  EDX = (r32((uint32_t)(0x12815a84)));
  /* 127f5797 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 127f579a mov dword ptr [0x12815a84], edx */
  w32((uint32_t)(0x12815a84), (EDX));
  /* 127f57a0 cmp dword ptr [0x12815a78], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815a78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f57a7 je 0x127f57ca */
  if (C.zf) goto L_127f57ca;
  /* 127f57a9 mov eax, dword ptr [0x12815a84] */
  EAX = (r32((uint32_t)(0x12815a84)));
  /* 127f57ae or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 127f57b1 mov dword ptr [0x12815a84], eax */
  w32((uint32_t)(0x12815a84), (EAX));
  /* 127f57b6 cmp dword ptr [0x12815a6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815a6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f57bd jne 0x127f57c8 */
  if (!C.zf) goto L_127f57c8;
  /* 127f57bf mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127f57c2 mov dword ptr [0x12815a6c], ecx */
  w32((uint32_t)(0x12815a6c), (ECX));
L_127f57c8:;
  /* 127f57c8 jmp 0x127f583e */
  goto L_127f583e;
L_127f57ca:;
  /* 127f57ca cmp dword ptr [0x12815a74], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815a74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f57d1 je 0x127f581f */
  if (C.zf) goto L_127f581f;
  /* 127f57d3 mov edx, dword ptr [0x12815a7c] */
  EDX = (r32((uint32_t)(0x12815a7c)));
  /* 127f57d9 push edx */
  push32((uint32_t)(EDX));
  /* 127f57da call 0x127ec290 */
  push32(0x127f57dfu); f_127ec290();
  /* 127f57df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f57e2 cmp eax, dword ptr [0x12815a74] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12815a74))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f57e8 jne 0x127f581f */
  if (!C.zf) goto L_127f581f;
  /* 127f57ea push 1 */
  push32((uint32_t)(0x1u));
  /* 127f57ec mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127f57ef push eax */
  push32((uint32_t)(EAX));
  /* 127f57f0 call 0x127f5c80 */
  push32(0x127f57f5u); f_127f5c80();
  /* 127f57f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f57f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f57fa je 0x127f581d */
  if (C.zf) goto L_127f581d;
  /* 127f57fc mov ecx, dword ptr [0x12815a84] */
  ECX = (r32((uint32_t)(0x12815a84)));
  /* 127f5802 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 127f5805 mov dword ptr [0x12815a84], ecx */
  w32((uint32_t)(0x12815a84), (ECX));
  /* 127f580b cmp dword ptr [0x12815a6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815a6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f5812 jne 0x127f581d */
  if (!C.zf) goto L_127f581d;
  /* 127f5814 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127f5817 mov dword ptr [0x12815a6c], edx */
  w32((uint32_t)(0x12815a6c), (EDX));
L_127f581d:;
  /* 127f581d jmp 0x127f583e */
  goto L_127f583e;
L_127f581f:;
  /* 127f581f mov eax, dword ptr [0x12815a84] */
  EAX = (r32((uint32_t)(0x12815a84)));
  /* 127f5824 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 127f5827 mov dword ptr [0x12815a84], eax */
  w32((uint32_t)(0x12815a84), (EAX));
  /* 127f582c cmp dword ptr [0x12815a6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815a6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f5833 jne 0x127f583e */
  if (!C.zf) goto L_127f583e;
  /* 127f5835 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127f5838 mov dword ptr [0x12815a6c], ecx */
  w32((uint32_t)(0x12815a6c), (ECX));
L_127f583e:;
  /* 127f583e jmp 0x127f58a1 */
  goto L_127f58a1;
L_127f5840:;
  /* 127f5840 cmp dword ptr [0x12815a78], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815a78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f5847 jne 0x127f58a1 */
  if (!C.zf) goto L_127f58a1;
  /* 127f5849 cmp dword ptr [0x12815a74], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815a74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f5850 je 0x127f58a1 */
  if (C.zf) goto L_127f58a1;
  /* 127f5852 mov edx, dword ptr [0x12815a74] */
  EDX = (r32((uint32_t)(0x12815a74)));
  /* 127f5858 push edx */
  push32((uint32_t)(EDX));
  /* 127f5859 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 127f585c push eax */
  push32((uint32_t)(EAX));
  /* 127f585d mov ecx, dword ptr [0x12815a7c] */
  ECX = (r32((uint32_t)(0x12815a7c)));
  /* 127f5863 push ecx */
  push32((uint32_t)(ECX));
  /* 127f5864 call 0x127f7c00 */
  push32(0x127f5869u); f_127f7c00();
  /* 127f5869 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f586c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f586e jne 0x127f58a1 */
  if (!C.zf) goto L_127f58a1;
  /* 127f5870 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f5872 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127f5875 push edx */
  push32((uint32_t)(EDX));
  /* 127f5876 call 0x127f5c80 */
  push32(0x127f587bu); f_127f5c80();
  /* 127f587b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f587e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f5880 je 0x127f58a1 */
  if (C.zf) goto L_127f58a1;
  /* 127f5882 mov eax, dword ptr [0x12815a84] */
  EAX = (r32((uint32_t)(0x12815a84)));
  /* 127f5887 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 127f588a mov dword ptr [0x12815a84], eax */
  w32((uint32_t)(0x12815a84), (EAX));
  /* 127f588f cmp dword ptr [0x12815a6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815a6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f5896 jne 0x127f58a1 */
  if (!C.zf) goto L_127f58a1;
  /* 127f5898 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127f589b mov dword ptr [0x12815a6c], ecx */
  w32((uint32_t)(0x12815a6c), (ECX));
L_127f58a1:;
  /* 127f58a1 mov eax, dword ptr [0x12815a84] */
  EAX = (r32((uint32_t)(0x12815a84)));
  /* 127f58a6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 127f58a9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 127f58ab sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f58ad inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_127f58ae:;
  /* 127f58ae mov esp, ebp */
  ESP = (EBP);
  /* 127f58b0 pop ebp */
  EBP = (pop32());
  /* 127f58b1 ret 4 */
  ESPCHK(0x127f5590u, _esp0);
  ESP += 8; return;
}

/* FUN_100158c0 @ 0x127f58c0 (116 bytes, 33 insns) */
void f_127f58c0(void) {
  FTRACE(0x127f58c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f58c0 push ebp */
  push32((uint32_t)(EBP));
  /* 127f58c1 mov ebp, esp */
  EBP = (ESP);
  /* 127f58c3 push ecx */
  push32((uint32_t)(ECX));
  /* 127f58c4 mov eax, dword ptr [0x12815a7c] */
  EAX = (r32((uint32_t)(0x12815a7c)));
  /* 127f58c9 push eax */
  push32((uint32_t)(EAX));
  /* 127f58ca call 0x127ec290 */
  push32(0x127f58cfu); f_127ec290();
  /* 127f58cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f58d2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127f58d4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f58d7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 127f58da mov dword ptr [0x12815a78], ecx */
  w32((uint32_t)(0x12815a78), (ECX));
  /* 127f58e0 cmp dword ptr [0x12815a78], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815a78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f58e7 je 0x127f58f2 */
  if (C.zf) goto L_127f58f2;
  /* 127f58e9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 127f58f0 jmp 0x127f5904 */
  goto L_127f5904;
L_127f58f2:;
  /* 127f58f2 mov edx, dword ptr [0x12815a7c] */
  EDX = (r32((uint32_t)(0x12815a7c)));
  /* 127f58f8 push edx */
  push32((uint32_t)(EDX));
  /* 127f58f9 call 0x127f5f70 */
  push32(0x127f58feu); f_127f5f70();
  /* 127f58fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f5901 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127f5904:;
  /* 127f5904 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f5907 mov dword ptr [0x12815a74], eax */
  w32((uint32_t)(0x12815a74), (EAX));
  /* 127f590c push 1 */
  push32((uint32_t)(0x1u));
  /* 127f590e push 0x127f5940 */
  push32((uint32_t)(0x127f5940u));
  /* 127f5913 call dword ptr [0x128182bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182bc))), 0x127f5919u);
  /* 127f5919 mov ecx, dword ptr [0x12815a84] */
  ECX = (r32((uint32_t)(0x12815a84)));
  /* 127f591f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 127f5922 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127f5924 jne 0x127f5930 */
  if (!C.zf) goto L_127f5930;
  /* 127f5926 mov dword ptr [0x12815a84], 0 */
  w32((uint32_t)(0x12815a84), (0x0u));
L_127f5930:;
  /* 127f5930 mov esp, ebp */
  ESP = (EBP);
  /* 127f5932 pop ebp */
  EBP = (pop32());
  /* 127f5933 ret  */
  ESPCHK(0x127f58c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015940 @ 0x127f5940 (287 bytes, 86 insns) */
void f_127f5940(void) {
  FTRACE(0x127f5940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f5940 push ebp */
  push32((uint32_t)(EBP));
  /* 127f5941 mov ebp, esp */
  EBP = (ESP);
  /* 127f5943 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f5946 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f5949 push eax */
  push32((uint32_t)(EAX));
  /* 127f594a call 0x127f5ef0 */
  push32(0x127f594fu); f_127f5ef0();
  /* 127f594f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f5952 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 127f5955 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 127f5957 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 127f595a push ecx */
  push32((uint32_t)(ECX));
  /* 127f595b mov edx, dword ptr [0x12815a78] */
  EDX = (r32((uint32_t)(0x12815a78)));
  /* 127f5961 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 127f5963 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f5965 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 127f596b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f5971 push edx */
  push32((uint32_t)(EDX));
  /* 127f5972 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127f5975 push eax */
  push32((uint32_t)(EAX));
  /* 127f5976 call dword ptr [0x12815a8c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12815a8c))), 0x127f597cu);
  /* 127f597c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f597e jne 0x127f5994 */
  if (!C.zf) goto L_127f5994;
  /* 127f5980 mov dword ptr [0x12815a84], 0 */
  w32((uint32_t)(0x12815a84), (0x0u));
  /* 127f598a mov eax, 1 */
  EAX = (0x1u);
  /* 127f598f jmp 0x127f5a59 */
  goto L_127f5a59;
L_127f5994:;
  /* 127f5994 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 127f5997 push ecx */
  push32((uint32_t)(ECX));
  /* 127f5998 mov edx, dword ptr [0x12815a7c] */
  EDX = (r32((uint32_t)(0x12815a7c)));
  /* 127f599e push edx */
  push32((uint32_t)(EDX));
  /* 127f599f call 0x127f7b30 */
  push32(0x127f59a4u); f_127f7b30();
  /* 127f59a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f59a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f59a9 jne 0x127f59e9 */
  if (!C.zf) goto L_127f59e9;
  /* 127f59ab cmp dword ptr [0x12815a78], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815a78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f59b2 jne 0x127f59c6 */
  if (!C.zf) goto L_127f59c6;
  /* 127f59b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f59b6 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127f59b9 push eax */
  push32((uint32_t)(EAX));
  /* 127f59ba call 0x127f5c80 */
  push32(0x127f59bfu); f_127f5c80();
  /* 127f59bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f59c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f59c4 je 0x127f59e7 */
  if (C.zf) goto L_127f59e7;
L_127f59c6:;
  /* 127f59c6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127f59c9 mov dword ptr [0x12815a88], ecx */
  w32((uint32_t)(0x12815a88), (ECX));
  /* 127f59cf mov edx, dword ptr [0x12815a88] */
  EDX = (r32((uint32_t)(0x12815a88)));
  /* 127f59d5 mov dword ptr [0x12815a6c], edx */
  w32((uint32_t)(0x12815a6c), (EDX));
  /* 127f59db mov eax, dword ptr [0x12815a84] */
  EAX = (r32((uint32_t)(0x12815a84)));
  /* 127f59e0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 127f59e2 mov dword ptr [0x12815a84], eax */
  w32((uint32_t)(0x12815a84), (EAX));
L_127f59e7:;
  /* 127f59e7 jmp 0x127f5a4c */
  goto L_127f5a4c;
L_127f59e9:;
  /* 127f59e9 cmp dword ptr [0x12815a78], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815a78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f59f0 jne 0x127f5a4c */
  if (!C.zf) goto L_127f5a4c;
  /* 127f59f2 cmp dword ptr [0x12815a74], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12815a74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f59f9 je 0x127f5a4c */
  if (C.zf) goto L_127f5a4c;
  /* 127f59fb mov ecx, dword ptr [0x12815a74] */
  ECX = (r32((uint32_t)(0x12815a74)));
  /* 127f5a01 push ecx */
  push32((uint32_t)(ECX));
  /* 127f5a02 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 127f5a05 push edx */
  push32((uint32_t)(EDX));
  /* 127f5a06 mov eax, dword ptr [0x12815a7c] */
  EAX = (r32((uint32_t)(0x12815a7c)));
  /* 127f5a0b push eax */
  push32((uint32_t)(EAX));
  /* 127f5a0c call 0x127f7c00 */
  push32(0x127f5a11u); f_127f7c00();
  /* 127f5a11 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f5a14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f5a16 jne 0x127f5a4c */
  if (!C.zf) goto L_127f5a4c;
  /* 127f5a18 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f5a1a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127f5a1d push ecx */
  push32((uint32_t)(ECX));
  /* 127f5a1e call 0x127f5c80 */
  push32(0x127f5a23u); f_127f5c80();
  /* 127f5a23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f5a26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f5a28 je 0x127f5a4c */
  if (C.zf) goto L_127f5a4c;
  /* 127f5a2a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127f5a2d mov dword ptr [0x12815a88], edx */
  w32((uint32_t)(0x12815a88), (EDX));
  /* 127f5a33 mov eax, dword ptr [0x12815a88] */
  EAX = (r32((uint32_t)(0x12815a88)));
  /* 127f5a38 mov dword ptr [0x12815a6c], eax */
  w32((uint32_t)(0x12815a6c), (EAX));
  /* 127f5a3d mov ecx, dword ptr [0x12815a84] */
  ECX = (r32((uint32_t)(0x12815a84)));
  /* 127f5a43 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 127f5a46 mov dword ptr [0x12815a84], ecx */
  w32((uint32_t)(0x12815a84), (ECX));
L_127f5a4c:;
  /* 127f5a4c mov eax, dword ptr [0x12815a84] */
  EAX = (r32((uint32_t)(0x12815a84)));
  /* 127f5a51 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 127f5a54 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 127f5a56 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f5a58 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_127f5a59:;
  /* 127f5a59 mov esp, ebp */
  ESP = (EBP);
  /* 127f5a5b pop ebp */
  EBP = (pop32());
  /* 127f5a5c ret 4 */
  ESPCHK(0x127f5940u, _esp0);
  ESP += 8; return;
}

/* FUN_10015a60 @ 0x127f5a60 (69 bytes, 20 insns) */
void f_127f5a60(void) {
  FTRACE(0x127f5a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f5a60 push ebp */
  push32((uint32_t)(EBP));
  /* 127f5a61 mov ebp, esp */
  EBP = (ESP);
  /* 127f5a63 mov eax, dword ptr [0x12815a80] */
  EAX = (r32((uint32_t)(0x12815a80)));
  /* 127f5a68 push eax */
  push32((uint32_t)(EAX));
  /* 127f5a69 call 0x127ec290 */
  push32(0x127f5a6eu); f_127ec290();
  /* 127f5a6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f5a71 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127f5a73 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f5a76 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 127f5a79 mov dword ptr [0x12815a70], ecx */
  w32((uint32_t)(0x12815a70), (ECX));
  /* 127f5a7f push 1 */
  push32((uint32_t)(0x1u));
  /* 127f5a81 push 0x127f5ab0 */
  push32((uint32_t)(0x127f5ab0u));
  /* 127f5a86 call dword ptr [0x128182bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182bc))), 0x127f5a8cu);
  /* 127f5a8c mov edx, dword ptr [0x12815a84] */
  EDX = (r32((uint32_t)(0x12815a84)));
  /* 127f5a92 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 127f5a95 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f5a97 jne 0x127f5aa3 */
  if (!C.zf) goto L_127f5aa3;
  /* 127f5a99 mov dword ptr [0x12815a84], 0 */
  w32((uint32_t)(0x12815a84), (0x0u));
L_127f5aa3:;
  /* 127f5aa3 pop ebp */
  EBP = (pop32());
  /* 127f5aa4 ret  */
  ESPCHK(0x127f5a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10015ab0 @ 0x127f5ab0 (172 bytes, 54 insns) */
void f_127f5ab0(void) {
  FTRACE(0x127f5ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f5ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 127f5ab1 mov ebp, esp */
  EBP = (ESP);
  /* 127f5ab3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f5ab6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f5ab9 push eax */
  push32((uint32_t)(EAX));
  /* 127f5aba call 0x127f5ef0 */
  push32(0x127f5abfu); f_127f5ef0();
  /* 127f5abf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f5ac2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 127f5ac5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 127f5ac7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 127f5aca push ecx */
  push32((uint32_t)(ECX));
  /* 127f5acb mov edx, dword ptr [0x12815a70] */
  EDX = (r32((uint32_t)(0x12815a70)));
  /* 127f5ad1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 127f5ad3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f5ad5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 127f5adb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f5ae1 push edx */
  push32((uint32_t)(EDX));
  /* 127f5ae2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127f5ae5 push eax */
  push32((uint32_t)(EAX));
  /* 127f5ae6 call dword ptr [0x12815a8c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12815a8c))), 0x127f5aecu);
  /* 127f5aec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f5aee jne 0x127f5b01 */
  if (!C.zf) goto L_127f5b01;
  /* 127f5af0 mov dword ptr [0x12815a84], 0 */
  w32((uint32_t)(0x12815a84), (0x0u));
  /* 127f5afa mov eax, 1 */
  EAX = (0x1u);
  /* 127f5aff jmp 0x127f5b56 */
  goto L_127f5b56;
L_127f5b01:;
  /* 127f5b01 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 127f5b04 push ecx */
  push32((uint32_t)(ECX));
  /* 127f5b05 mov edx, dword ptr [0x12815a80] */
  EDX = (r32((uint32_t)(0x12815a80)));
  /* 127f5b0b push edx */
  push32((uint32_t)(EDX));
  /* 127f5b0c call 0x127f7b30 */
  push32(0x127f5b11u); f_127f7b30();
  /* 127f5b11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f5b14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f5b16 jne 0x127f5b49 */
  if (!C.zf) goto L_127f5b49;
  /* 127f5b18 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127f5b1b push eax */
  push32((uint32_t)(EAX));
  /* 127f5b1c call 0x127f5c30 */
  push32(0x127f5b21u); f_127f5c30();
  /* 127f5b21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f5b24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f5b26 je 0x127f5b49 */
  if (C.zf) goto L_127f5b49;
  /* 127f5b28 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127f5b2b mov dword ptr [0x12815a88], ecx */
  w32((uint32_t)(0x12815a88), (ECX));
  /* 127f5b31 mov edx, dword ptr [0x12815a88] */
  EDX = (r32((uint32_t)(0x12815a88)));
  /* 127f5b37 mov dword ptr [0x12815a6c], edx */
  w32((uint32_t)(0x12815a6c), (EDX));
  /* 127f5b3d mov eax, dword ptr [0x12815a84] */
  EAX = (r32((uint32_t)(0x12815a84)));
  /* 127f5b42 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 127f5b44 mov dword ptr [0x12815a84], eax */
  w32((uint32_t)(0x12815a84), (EAX));
L_127f5b49:;
  /* 127f5b49 mov eax, dword ptr [0x12815a84] */
  EAX = (r32((uint32_t)(0x12815a84)));
  /* 127f5b4e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 127f5b51 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 127f5b53 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f5b55 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_127f5b56:;
  /* 127f5b56 mov esp, ebp */
  ESP = (EBP);
  /* 127f5b58 pop ebp */
  EBP = (pop32());
  /* 127f5b59 ret 4 */
  ESPCHK(0x127f5ab0u, _esp0);
  ESP += 8; return;
}

/* FUN_10015b60 @ 0x127f5b60 (43 bytes, 11 insns) */
void f_127f5b60(void) {
  FTRACE(0x127f5b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f5b60 push ebp */
  push32((uint32_t)(EBP));
  /* 127f5b61 mov ebp, esp */
  EBP = (ESP);
  /* 127f5b63 mov eax, dword ptr [0x12815a84] */
  EAX = (r32((uint32_t)(0x12815a84)));
  /* 127f5b68 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 127f5b6d mov dword ptr [0x12815a84], eax */
  w32((uint32_t)(0x12815a84), (EAX));
  /* 127f5b72 call dword ptr [0x128182b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182b8))), 0x127f5b78u);
  /* 127f5b78 mov dword ptr [0x12815a88], eax */
  w32((uint32_t)(0x12815a88), (EAX));
  /* 127f5b7d mov ecx, dword ptr [0x12815a88] */
  ECX = (r32((uint32_t)(0x12815a88)));
  /* 127f5b83 mov dword ptr [0x12815a6c], ecx */
  w32((uint32_t)(0x12815a6c), (ECX));
  /* 127f5b89 pop ebp */
  EBP = (pop32());
  /* 127f5b8a ret  */
  ESPCHK(0x127f5b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10015b90 @ 0x127f5b90 (155 bytes, 57 insns) */
void f_127f5b90(void) {
  FTRACE(0x127f5b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f5b90 push ebp */
  push32((uint32_t)(EBP));
  /* 127f5b91 mov ebp, esp */
  EBP = (ESP);
  /* 127f5b93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f5b96 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f5b9a je 0x127f5bbb */
  if (C.zf) goto L_127f5bbb;
  /* 127f5b9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f5b9f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127f5ba2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127f5ba4 je 0x127f5bbb */
  if (C.zf) goto L_127f5bbb;
  /* 127f5ba6 push 0x128119ac */
  push32((uint32_t)(0x128119acu));
  /* 127f5bab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f5bae push edx */
  push32((uint32_t)(EDX));
  /* 127f5baf call 0x127f50f0 */
  push32(0x127f5bb4u); f_127f50f0();
  /* 127f5bb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f5bb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f5bb9 jne 0x127f5be3 */
  if (!C.zf) goto L_127f5be3;
L_127f5bbb:;
  /* 127f5bbb push 8 */
  push32((uint32_t)(0x8u));
  /* 127f5bbd lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 127f5bc0 push eax */
  push32((uint32_t)(EAX));
  /* 127f5bc1 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 127f5bc6 mov ecx, dword ptr [0x12815a88] */
  ECX = (r32((uint32_t)(0x12815a88)));
  /* 127f5bcc push ecx */
  push32((uint32_t)(ECX));
  /* 127f5bcd call dword ptr [0x12815a8c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12815a8c))), 0x127f5bd3u);
  /* 127f5bd3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f5bd5 jne 0x127f5bdb */
  if (!C.zf) goto L_127f5bdb;
  /* 127f5bd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f5bd9 jmp 0x127f5c27 */
  goto L_127f5c27;
L_127f5bdb:;
  /* 127f5bdb lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 127f5bde mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 127f5be1 jmp 0x127f5c1b */
  goto L_127f5c1b;
L_127f5be3:;
  /* 127f5be3 push 0x128119a8 */
  push32((uint32_t)(0x128119a8u));
  /* 127f5be8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f5beb push eax */
  push32((uint32_t)(EAX));
  /* 127f5bec call 0x127f50f0 */
  push32(0x127f5bf1u); f_127f50f0();
  /* 127f5bf1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f5bf4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f5bf6 jne 0x127f5c1b */
  if (!C.zf) goto L_127f5c1b;
  /* 127f5bf8 push 8 */
  push32((uint32_t)(0x8u));
  /* 127f5bfa lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 127f5bfd push ecx */
  push32((uint32_t)(ECX));
  /* 127f5bfe push 0xb */
  push32((uint32_t)(0xbu));
  /* 127f5c00 mov edx, dword ptr [0x12815a88] */
  EDX = (r32((uint32_t)(0x12815a88)));
  /* 127f5c06 push edx */
  push32((uint32_t)(EDX));
  /* 127f5c07 call dword ptr [0x12815a8c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12815a8c))), 0x127f5c0du);
  /* 127f5c0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f5c0f jne 0x127f5c15 */
  if (!C.zf) goto L_127f5c15;
  /* 127f5c11 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f5c13 jmp 0x127f5c27 */
  goto L_127f5c27;
L_127f5c15:;
  /* 127f5c15 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 127f5c18 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_127f5c1b:;
  /* 127f5c1b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f5c1e push ecx */
  push32((uint32_t)(ECX));
  /* 127f5c1f call 0x127f7d10 */
  push32(0x127f5c24u); f_127f7d10();
  /* 127f5c24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127f5c27:;
  /* 127f5c27 mov esp, ebp */
  ESP = (EBP);
  /* 127f5c29 pop ebp */
  EBP = (pop32());
  /* 127f5c2a ret  */
  ESPCHK(0x127f5b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10015c30 @ 0x127f5c30 (79 bytes, 26 insns) */
void f_127f5c30(void) {
  FTRACE(0x127f5c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f5c30 push ebp */
  push32((uint32_t)(EBP));
  /* 127f5c31 mov ebp, esp */
  EBP = (ESP);
  /* 127f5c33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f5c36 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 127f5c3a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 127f5c3e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 127f5c45 jmp 0x127f5c50 */
  goto L_127f5c50;
L_127f5c47:;
  /* 127f5c47 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f5c4a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f5c4d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_127f5c50:;
  /* 127f5c50 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f5c54 jae 0x127f5c76 */
  if (!C.cf) goto L_127f5c76;
  /* 127f5c56 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f5c59 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 127f5c5f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f5c62 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127f5c64 mov cx, word ptr [eax*2 + 0x128149c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x128149c4)));
  /* 127f5c6c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f5c6e jne 0x127f5c74 */
  if (!C.zf) goto L_127f5c74;
  /* 127f5c70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f5c72 jmp 0x127f5c7b */
  goto L_127f5c7b;
L_127f5c74:;
  /* 127f5c74 jmp 0x127f5c47 */
  goto L_127f5c47;
L_127f5c76:;
  /* 127f5c76 mov eax, 1 */
  EAX = (0x1u);
L_127f5c7b:;
  /* 127f5c7b mov esp, ebp */
  ESP = (EBP);
  /* 127f5c7d pop ebp */
  EBP = (pop32());
  /* 127f5c7e ret  */
  ESPCHK(0x127f5c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10015c80 @ 0x127f5c80 (135 bytes, 48 insns) */
void f_127f5c80(void) {
  FTRACE(0x127f5c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f5c80 push ebp */
  push32((uint32_t)(EBP));
  /* 127f5c81 mov ebp, esp */
  EBP = (ESP);
  /* 127f5c83 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f5c86 push esi */
  push32((uint32_t)(ESI));
  /* 127f5c87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f5c8a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f5c8f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f5c94 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f5c99 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 127f5c9c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f5ca1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127f5ca4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 127f5ca6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 127f5ca9 push ecx */
  push32((uint32_t)(ECX));
  /* 127f5caa push 1 */
  push32((uint32_t)(0x1u));
  /* 127f5cac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f5caf push edx */
  push32((uint32_t)(EDX));
  /* 127f5cb0 call dword ptr [0x12815a8c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12815a8c))), 0x127f5cb6u);
  /* 127f5cb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f5cb8 jne 0x127f5cbe */
  if (!C.zf) goto L_127f5cbe;
  /* 127f5cba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f5cbc jmp 0x127f5d02 */
  goto L_127f5d02;
L_127f5cbe:;
  /* 127f5cbe lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 127f5cc1 push eax */
  push32((uint32_t)(EAX));
  /* 127f5cc2 call 0x127f5ef0 */
  push32(0x127f5cc7u); f_127f5ef0();
  /* 127f5cc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f5cca cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f5ccd je 0x127f5cfd */
  if (C.zf) goto L_127f5cfd;
  /* 127f5ccf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f5cd3 je 0x127f5cfd */
  if (C.zf) goto L_127f5cfd;
  /* 127f5cd5 mov ecx, dword ptr [0x12815a7c] */
  ECX = (r32((uint32_t)(0x12815a7c)));
  /* 127f5cdb push ecx */
  push32((uint32_t)(ECX));
  /* 127f5cdc call 0x127f5f70 */
  push32(0x127f5ce1u); f_127f5f70();
  /* 127f5ce1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f5ce4 mov esi, eax */
  ESI = (EAX);
  /* 127f5ce6 mov edx, dword ptr [0x12815a7c] */
  EDX = (r32((uint32_t)(0x12815a7c)));
  /* 127f5cec push edx */
  push32((uint32_t)(EDX));
  /* 127f5ced call 0x127ec290 */
  push32(0x127f5cf2u); f_127ec290();
  /* 127f5cf2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f5cf5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f5cf7 jne 0x127f5cfd */
  if (!C.zf) goto L_127f5cfd;
  /* 127f5cf9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f5cfb jmp 0x127f5d02 */
  goto L_127f5d02;
L_127f5cfd:;
  /* 127f5cfd mov eax, 1 */
  EAX = (0x1u);
L_127f5d02:;
  /* 127f5d02 pop esi */
  ESI = (pop32());
  /* 127f5d03 mov esp, ebp */
  ESP = (EBP);
  /* 127f5d05 pop ebp */
  EBP = (pop32());
  /* 127f5d06 ret  */
  ESPCHK(0x127f5c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10015d10 @ 0x127f5d10 (77 bytes, 18 insns) */
void f_127f5d10(void) {
  FTRACE(0x127f5d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f5d10 push ebp */
  push32((uint32_t)(EBP));
  /* 127f5d11 mov ebp, esp */
  EBP = (ESP);
  /* 127f5d13 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f5d19 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 127f5d23 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 127f5d29 push eax */
  push32((uint32_t)(EAX));
  /* 127f5d2a call dword ptr [0x128182b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182b4))), 0x127f5d30u);
  /* 127f5d30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f5d32 je 0x127f5d49 */
  if (C.zf) goto L_127f5d49;
  /* 127f5d34 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f5d3b jne 0x127f5d49 */
  if (!C.zf) goto L_127f5d49;
  /* 127f5d3d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 127f5d47 jmp 0x127f5d53 */
  goto L_127f5d53;
L_127f5d49:;
  /* 127f5d49 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_127f5d53:;
  /* 127f5d53 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 127f5d59 mov esp, ebp */
  ESP = (EBP);
  /* 127f5d5b pop ebp */
  EBP = (pop32());
  /* 127f5d5c ret  */
  ESPCHK(0x127f5d10u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x127f5d60 (388 bytes, 118 insns) */
void f_127f5d60(void) {
  FTRACE(0x127f5d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f5d60 push ebp */
  push32((uint32_t)(EBP));
  /* 127f5d61 mov ebp, esp */
  EBP = (ESP);
  /* 127f5d63 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f5d66 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 127f5d6d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 127f5d74 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_127f5d7b:;
  /* 127f5d7b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f5d7e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f5d81 jg 0x127f5ec8 */
  if ((!C.zf&&C.sf==C.of)) goto L_127f5ec8;
  /* 127f5d87 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f5d8a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f5d8d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127f5d8e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f5d90 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 127f5d92 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127f5d95 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f5d98 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f5d9b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f5d9e cmp edx, dword ptr [ecx + 0x12814520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x12814520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f5da4 jne 0x127f5e9e */
  if (!C.zf) goto L_127f5e9e;
  /* 127f5daa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f5dad mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 127f5db0 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f5db4 ja 0x127f5dd7 */
  if ((!C.cf&&!C.zf)) goto L_127f5dd7;
  /* 127f5db6 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f5dba je 0x127f5e49 */
  if (C.zf) goto L_127f5e49;
  /* 127f5dc0 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f5dc4 je 0x127f5df4 */
  if (C.zf) goto L_127f5df4;
  /* 127f5dc6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f5dca je 0x127f5e16 */
  if (C.zf) goto L_127f5e16;
  /* 127f5dcc cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f5dd0 je 0x127f5e38 */
  if (C.zf) goto L_127f5e38;
  /* 127f5dd2 jmp 0x127f5e68 */
  goto L_127f5e68;
L_127f5dd7:;
  /* 127f5dd7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f5dde je 0x127f5e05 */
  if (C.zf) goto L_127f5e05;
  /* 127f5de0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f5de7 je 0x127f5e27 */
  if (C.zf) goto L_127f5e27;
  /* 127f5de9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f5df0 je 0x127f5e5a */
  if (C.zf) goto L_127f5e5a;
  /* 127f5df2 jmp 0x127f5e68 */
  goto L_127f5e68;
L_127f5df4:;
  /* 127f5df4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f5df7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f5dfa add ecx, 0x12814524 */
  { uint32_t _a=(ECX),_b=(0x12814524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f5e00 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127f5e03 jmp 0x127f5e68 */
  goto L_127f5e68;
L_127f5e05:;
  /* 127f5e05 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f5e08 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f5e0b mov eax, dword ptr [edx + 0x1281452c] */
  EAX = (r32((uint32_t)(EDX + 0x1281452c)));
  /* 127f5e11 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127f5e14 jmp 0x127f5e68 */
  goto L_127f5e68;
L_127f5e16:;
  /* 127f5e16 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f5e19 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f5e1c add ecx, 0x12814530 */
  { uint32_t _a=(ECX),_b=(0x12814530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f5e22 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127f5e25 jmp 0x127f5e68 */
  goto L_127f5e68;
L_127f5e27:;
  /* 127f5e27 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f5e2a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f5e2d mov eax, dword ptr [edx + 0x12814534] */
  EAX = (r32((uint32_t)(EDX + 0x12814534)));
  /* 127f5e33 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127f5e36 jmp 0x127f5e68 */
  goto L_127f5e68;
L_127f5e38:;
  /* 127f5e38 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f5e3b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f5e3e add ecx, 0x12814538 */
  { uint32_t _a=(ECX),_b=(0x12814538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f5e44 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127f5e47 jmp 0x127f5e68 */
  goto L_127f5e68;
L_127f5e49:;
  /* 127f5e49 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f5e4c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f5e4f add edx, 0x1281453c */
  { uint32_t _a=(EDX),_b=(0x1281453cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f5e55 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 127f5e58 jmp 0x127f5e68 */
  goto L_127f5e68;
L_127f5e5a:;
  /* 127f5e5a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f5e5d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f5e60 add eax, 0x12814544 */
  { uint32_t _a=(EAX),_b=(0x12814544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f5e65 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_127f5e68:;
  /* 127f5e68 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f5e6c je 0x127f5e74 */
  if (C.zf) goto L_127f5e74;
  /* 127f5e6e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f5e72 jge 0x127f5e76 */
  if ((C.sf==C.of)) goto L_127f5e76;
L_127f5e74:;
  /* 127f5e74 jmp 0x127f5ec8 */
  goto L_127f5ec8;
L_127f5e76:;
  /* 127f5e76 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f5e79 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f5e7c push ecx */
  push32((uint32_t)(ECX));
  /* 127f5e7d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f5e80 push edx */
  push32((uint32_t)(EDX));
  /* 127f5e81 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f5e84 push eax */
  push32((uint32_t)(EAX));
  /* 127f5e85 call 0x127ecc80 */
  push32(0x127f5e8au); f_127ecc80();
  /* 127f5e8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f5e8d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f5e90 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f5e93 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 127f5e97 mov eax, 1 */
  EAX = (0x1u);
  /* 127f5e9c jmp 0x127f5ede */
  goto L_127f5ede;
L_127f5e9e:;
  /* 127f5e9e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f5ea1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f5ea4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f5ea7 cmp eax, dword ptr [edx + 0x12814520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x12814520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f5ead jae 0x127f5eba */
  if (!C.cf) goto L_127f5eba;
  /* 127f5eaf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f5eb2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f5eb5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127f5eb8 jmp 0x127f5ec3 */
  goto L_127f5ec3;
L_127f5eba:;
  /* 127f5eba mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f5ebd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f5ec0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_127f5ec3:;
  /* 127f5ec3 jmp 0x127f5d7b */
  goto L_127f5d7b;
L_127f5ec8:;
  /* 127f5ec8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f5ecb push eax */
  push32((uint32_t)(EAX));
  /* 127f5ecc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f5ecf push ecx */
  push32((uint32_t)(ECX));
  /* 127f5ed0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f5ed3 push edx */
  push32((uint32_t)(EDX));
  /* 127f5ed4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f5ed7 push eax */
  push32((uint32_t)(EAX));
  /* 127f5ed8 call dword ptr [0x128182c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182c0))), 0x127f5edeu);
L_127f5ede:;
  /* 127f5ede mov esp, ebp */
  ESP = (EBP);
  /* 127f5ee0 pop ebp */
  EBP = (pop32());
  /* 127f5ee1 ret 0x10 */
  ESPCHK(0x127f5d60u, _esp0);
  ESP += 20; return;
}

/* FUN_10015ef0 @ 0x127f5ef0 (118 bytes, 42 insns) */
void f_127f5ef0(void) {
  FTRACE(0x127f5ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f5ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 127f5ef1 mov ebp, esp */
  EBP = (ESP);
  /* 127f5ef3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f5ef6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_127f5efd:;
  /* 127f5efd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f5f00 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127f5f02 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 127f5f05 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 127f5f09 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f5f0c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f5f0f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 127f5f12 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f5f14 je 0x127f5f5f */
  if (C.zf) goto L_127f5f5f;
  /* 127f5f16 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 127f5f1a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f5f1d jl 0x127f5f32 */
  if ((C.sf!=C.of)) goto L_127f5f32;
  /* 127f5f1f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 127f5f23 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f5f26 jg 0x127f5f32 */
  if ((!C.zf&&C.sf==C.of)) goto L_127f5f32;
  /* 127f5f28 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 127f5f2b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 127f5f2d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 127f5f30 jmp 0x127f5f4c */
  goto L_127f5f4c;
L_127f5f32:;
  /* 127f5f32 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 127f5f36 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f5f39 jl 0x127f5f4c */
  if ((C.sf!=C.of)) goto L_127f5f4c;
  /* 127f5f3b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 127f5f3f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f5f42 jg 0x127f5f4c */
  if ((!C.zf&&C.sf==C.of)) goto L_127f5f4c;
  /* 127f5f44 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 127f5f47 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 127f5f49 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_127f5f4c:;
  /* 127f5f4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f5f4f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 127f5f52 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 127f5f56 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 127f5f5a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127f5f5d jmp 0x127f5efd */
  goto L_127f5efd;
L_127f5f5f:;
  /* 127f5f5f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f5f62 mov esp, ebp */
  ESP = (EBP);
  /* 127f5f64 pop ebp */
  EBP = (pop32());
  /* 127f5f65 ret  */
  ESPCHK(0x127f5ef0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x127f5f70 (101 bytes, 36 insns) */
void f_127f5f70(void) {
  FTRACE(0x127f5f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f5f70 push ebp */
  push32((uint32_t)(EBP));
  /* 127f5f71 mov ebp, esp */
  EBP = (ESP);
  /* 127f5f73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f5f76 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 127f5f7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f5f80 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127f5f82 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 127f5f85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f5f88 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f5f8b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_127f5f8e:;
  /* 127f5f8e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 127f5f92 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f5f95 jl 0x127f5fa0 */
  if ((C.sf!=C.of)) goto L_127f5fa0;
  /* 127f5f97 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 127f5f9b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f5f9e jle 0x127f5fb2 */
  if ((C.zf||C.sf!=C.of)) goto L_127f5fb2;
L_127f5fa0:;
  /* 127f5fa0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 127f5fa4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f5fa7 jl 0x127f5fce */
  if ((C.sf!=C.of)) goto L_127f5fce;
  /* 127f5fa9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 127f5fad cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f5fb0 jg 0x127f5fce */
  if ((!C.zf&&C.sf==C.of)) goto L_127f5fce;
L_127f5fb2:;
  /* 127f5fb2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f5fb5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f5fb8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127f5fbb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f5fbe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127f5fc0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 127f5fc3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f5fc6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f5fc9 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 127f5fcc jmp 0x127f5f8e */
  goto L_127f5f8e;
L_127f5fce:;
  /* 127f5fce mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f5fd1 mov esp, ebp */
  ESP = (EBP);
  /* 127f5fd3 pop ebp */
  EBP = (pop32());
  /* 127f5fd4 ret  */
  ESPCHK(0x127f5f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10015fe0 @ 0x127f5fe0 (122 bytes, 39 insns) */
void f_127f5fe0(void) {
  FTRACE(0x127f5fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f5fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 127f5fe1 mov ebp, esp */
  EBP = (ESP);
  /* 127f5fe3 push ecx */
  push32((uint32_t)(ECX));
  /* 127f5fe4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f5fe7 cmp eax, dword ptr [0x1281731c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1281731c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f5fed jae 0x127f6011 */
  if (!C.cf) goto L_127f6011;
  /* 127f5fef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f5ff2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 127f5ff5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f5ff8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 127f5ffb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f5ffe mov eax, dword ptr [ecx*4 + 0x128171e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x128171e0)));
  /* 127f6005 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 127f600a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 127f600d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127f600f jne 0x127f602c */
  if (!C.zf) goto L_127f602c;
L_127f6011:;
  /* 127f6011 call 0x127f1330 */
  push32(0x127f6016u); f_127f1330();
  /* 127f6016 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 127f601c call 0x127f1340 */
  push32(0x127f6021u); f_127f1340();
  /* 127f6021 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 127f6027 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f602a jmp 0x127f6056 */
  goto L_127f6056;
L_127f602c:;
  /* 127f602c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f602f push edx */
  push32((uint32_t)(EDX));
  /* 127f6030 call 0x127f2b50 */
  push32(0x127f6035u); f_127f2b50();
  /* 127f6035 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6038 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f603b push eax */
  push32((uint32_t)(EAX));
  /* 127f603c call 0x127f6060 */
  push32(0x127f6041u); f_127f6060();
  /* 127f6041 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6044 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127f6047 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f604a push ecx */
  push32((uint32_t)(ECX));
  /* 127f604b call 0x127f2be0 */
  push32(0x127f6050u); f_127f2be0();
  /* 127f6050 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6053 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_127f6056:;
  /* 127f6056 mov esp, ebp */
  ESP = (EBP);
  /* 127f6058 pop ebp */
  EBP = (pop32());
  /* 127f6059 ret  */
  ESPCHK(0x127f5fe0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x127f6060 (170 bytes, 59 insns) */
void f_127f6060(void) {
  FTRACE(0x127f6060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f6060 push ebp */
  push32((uint32_t)(EBP));
  /* 127f6061 mov ebp, esp */
  EBP = (ESP);
  /* 127f6063 push ecx */
  push32((uint32_t)(ECX));
  /* 127f6064 push esi */
  push32((uint32_t)(ESI));
  /* 127f6065 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f6068 push eax */
  push32((uint32_t)(EAX));
  /* 127f6069 call 0x127f29d0 */
  push32(0x127f606eu); f_127f29d0();
  /* 127f606e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6071 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f6074 je 0x127f60b3 */
  if (C.zf) goto L_127f60b3;
  /* 127f6076 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f607a je 0x127f6082 */
  if (C.zf) goto L_127f6082;
  /* 127f607c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f6080 jne 0x127f609c */
  if (!C.zf) goto L_127f609c;
L_127f6082:;
  /* 127f6082 push 1 */
  push32((uint32_t)(0x1u));
  /* 127f6084 call 0x127f29d0 */
  push32(0x127f6089u); f_127f29d0();
  /* 127f6089 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f608c mov esi, eax */
  ESI = (EAX);
  /* 127f608e push 2 */
  push32((uint32_t)(0x2u));
  /* 127f6090 call 0x127f29d0 */
  push32(0x127f6095u); f_127f29d0();
  /* 127f6095 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6098 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f609a je 0x127f60b3 */
  if (C.zf) goto L_127f60b3;
L_127f609c:;
  /* 127f609c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f609f push ecx */
  push32((uint32_t)(ECX));
  /* 127f60a0 call 0x127f29d0 */
  push32(0x127f60a5u); f_127f29d0();
  /* 127f60a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f60a8 push eax */
  push32((uint32_t)(EAX));
  /* 127f60a9 call dword ptr [0x128182b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128182b0))), 0x127f60afu);
  /* 127f60af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f60b1 je 0x127f60bc */
  if (C.zf) goto L_127f60bc;
L_127f60b3:;
  /* 127f60b3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127f60ba jmp 0x127f60c5 */
  goto L_127f60c5;
L_127f60bc:;
  /* 127f60bc call dword ptr [0x12818378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12818378))), 0x127f60c2u);
  /* 127f60c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127f60c5:;
  /* 127f60c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f60c8 push edx */
  push32((uint32_t)(EDX));
  /* 127f60c9 call 0x127f28f0 */
  push32(0x127f60ceu); f_127f28f0();
  /* 127f60ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f60d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f60d4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 127f60d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f60da and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 127f60dd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127f60e0 mov edx, dword ptr [eax*4 + 0x128171e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x128171e0)));
  /* 127f60e7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 127f60ec cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f60f0 je 0x127f6103 */
  if (C.zf) goto L_127f6103;
  /* 127f60f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f60f5 push eax */
  push32((uint32_t)(EAX));
  /* 127f60f6 call 0x127f1290 */
  push32(0x127f60fbu); f_127f1290();
  /* 127f60fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f60fe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127f6101 jmp 0x127f6105 */
  goto L_127f6105;
L_127f6103:;
  /* 127f6103 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127f6105:;
  /* 127f6105 pop esi */
  ESI = (pop32());
  /* 127f6106 mov esp, ebp */
  ESP = (EBP);
  /* 127f6108 pop ebp */
  EBP = (pop32());
  /* 127f6109 ret  */
  ESPCHK(0x127f6060u, _esp0);
  ESP += 4; return;
}

/* FUN_10016110 @ 0x127f6110 (146 bytes, 52 insns) */
void f_127f6110(void) {
  FTRACE(0x127f6110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f6110 push ebp */
  push32((uint32_t)(EBP));
  /* 127f6111 mov ebp, esp */
  EBP = (ESP);
  /* 127f6113 push ebx */
  push32((uint32_t)(EBX));
  /* 127f6114 push esi */
  push32((uint32_t)(ESI));
  /* 127f6115 push edi */
  push32((uint32_t)(EDI));
L_127f6116:;
  /* 127f6116 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f611a jne 0x127f613a */
  if (!C.zf) goto L_127f613a;
  /* 127f611c push 0x128112e8 */
  push32((uint32_t)(0x128112e8u));
  /* 127f6121 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f6123 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 127f6125 push 0x128119b0 */
  push32((uint32_t)(0x128119b0u));
  /* 127f612a push 2 */
  push32((uint32_t)(0x2u));
  /* 127f612c call 0x127e8520 */
  push32(0x127f6131u); f_127e8520();
  /* 127f6131 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6134 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f6137 jne 0x127f613a */
  if (!C.zf) goto L_127f613a;
  /* 127f6139 int3  */
  x86_unimpl("int3 @ 0x127f6139");
L_127f613a:;
  /* 127f613a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127f613c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127f613e jne 0x127f6116 */
  if (!C.zf) goto L_127f6116;
  /* 127f6140 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f6143 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 127f6146 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 127f614c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127f614e je 0x127f619d */
  if (C.zf) goto L_127f619d;
  /* 127f6150 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f6153 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 127f6156 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 127f6159 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127f615b je 0x127f619d */
  if (C.zf) goto L_127f619d;
  /* 127f615d push 2 */
  push32((uint32_t)(0x2u));
  /* 127f615f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f6162 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 127f6165 push eax */
  push32((uint32_t)(EAX));
  /* 127f6166 call 0x127e9ef0 */
  push32(0x127f616bu); f_127e9ef0();
  /* 127f616b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f616e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f6171 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 127f6174 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 127f617a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f617d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 127f6180 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f6183 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 127f6189 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f618c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 127f6193 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f6196 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_127f619d:;
  /* 127f619d pop edi */
  EDI = (pop32());
  /* 127f619e pop esi */
  ESI = (pop32());
  /* 127f619f pop ebx */
  EBX = (pop32());
  /* 127f61a0 pop ebp */
  EBP = (pop32());
  /* 127f61a1 ret  */
  ESPCHK(0x127f6110u, _esp0);
  ESP += 4; return;
}

/* FUN_100161b0 @ 0x127f61b0 (289 bytes, 97 insns) */
void f_127f61b0(void) {
  FTRACE(0x127f61b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f61b0 push ebp */
  push32((uint32_t)(EBP));
  /* 127f61b1 mov ebp, esp */
  EBP = (ESP);
  /* 127f61b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f61b6 push esi */
  push32((uint32_t)(ESI));
  /* 127f61b7 mov eax, dword ptr [0x12814c98] */
  EAX = (r32((uint32_t)(0x12814c98)));
  /* 127f61bc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127f61bf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 127f61c6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 127f61cd jmp 0x127f61d8 */
  goto L_127f61d8;
L_127f61cf:;
  /* 127f61cf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f61d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f61d5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_127f61d8:;
  /* 127f61d8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f61dc jae 0x127f6211 */
  if (!C.cf) goto L_127f6211;
  /* 127f61de mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f61e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f61e4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 127f61e7 push ecx */
  push32((uint32_t)(ECX));
  /* 127f61e8 call 0x127ec290 */
  push32(0x127f61edu); f_127ec290();
  /* 127f61ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f61f0 mov esi, eax */
  ESI = (EAX);
  /* 127f61f2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f61f5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f61f8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 127f61fc push ecx */
  push32((uint32_t)(ECX));
  /* 127f61fd call 0x127ec290 */
  push32(0x127f6202u); f_127ec290();
  /* 127f6202 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6205 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6208 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 127f620c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 127f620f jmp 0x127f61cf */
  goto L_127f61cf;
L_127f6211:;
  /* 127f6211 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f6214 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6217 push eax */
  push32((uint32_t)(EAX));
  /* 127f6218 call 0x127e9440 */
  push32(0x127f621du); f_127e9440();
  /* 127f621d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6220 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127f6223 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f6227 je 0x127f62c9 */
  if (C.zf) goto L_127f62c9;
  /* 127f622d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f6230 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 127f6233 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 127f623a jmp 0x127f6245 */
  goto L_127f6245;
L_127f623c:;
  /* 127f623c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f623f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6242 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_127f6245:;
  /* 127f6245 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f6249 jae 0x127f62ba */
  if (!C.cf) goto L_127f62ba;
  /* 127f624b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f624e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 127f6251 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f6254 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6257 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 127f625a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f625d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f6260 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 127f6263 push ecx */
  push32((uint32_t)(ECX));
  /* 127f6264 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f6267 push edx */
  push32((uint32_t)(EDX));
  /* 127f6268 call 0x127ec410 */
  push32(0x127f626du); f_127ec410();
  /* 127f626d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6270 push eax */
  push32((uint32_t)(EAX));
  /* 127f6271 call 0x127ec290 */
  push32(0x127f6276u); f_127ec290();
  /* 127f6276 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6279 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f627c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f627e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 127f6281 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f6284 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 127f6287 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f628a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f628d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 127f6290 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f6293 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f6296 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 127f629a push eax */
  push32((uint32_t)(EAX));
  /* 127f629b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f629e push ecx */
  push32((uint32_t)(ECX));
  /* 127f629f call 0x127ec410 */
  push32(0x127f62a4u); f_127ec410();
  /* 127f62a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f62a7 push eax */
  push32((uint32_t)(EAX));
  /* 127f62a8 call 0x127ec290 */
  push32(0x127f62adu); f_127ec290();
  /* 127f62ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f62b0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f62b3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f62b5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 127f62b8 jmp 0x127f623c */
  goto L_127f623c;
L_127f62ba:;
  /* 127f62ba mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f62bd mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 127f62c0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f62c3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f62c6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_127f62c9:;
  /* 127f62c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f62cc pop esi */
  ESI = (pop32());
  /* 127f62cd mov esp, ebp */
  ESP = (EBP);
  /* 127f62cf pop ebp */
  EBP = (pop32());
  /* 127f62d0 ret  */
  ESPCHK(0x127f61b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100162e0 @ 0x127f62e0 (291 bytes, 97 insns) */
void f_127f62e0(void) {
  FTRACE(0x127f62e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f62e0 push ebp */
  push32((uint32_t)(EBP));
  /* 127f62e1 mov ebp, esp */
  EBP = (ESP);
  /* 127f62e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f62e6 push esi */
  push32((uint32_t)(ESI));
  /* 127f62e7 mov eax, dword ptr [0x12814c98] */
  EAX = (r32((uint32_t)(0x12814c98)));
  /* 127f62ec mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127f62ef mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 127f62f6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 127f62fd jmp 0x127f6308 */
  goto L_127f6308;
L_127f62ff:;
  /* 127f62ff mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f6302 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6305 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_127f6308:;
  /* 127f6308 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f630c jae 0x127f6342 */
  if (!C.cf) goto L_127f6342;
  /* 127f630e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f6311 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f6314 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 127f6318 push ecx */
  push32((uint32_t)(ECX));
  /* 127f6319 call 0x127ec290 */
  push32(0x127f631eu); f_127ec290();
  /* 127f631e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6321 mov esi, eax */
  ESI = (EAX);
  /* 127f6323 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f6326 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f6329 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 127f632d push ecx */
  push32((uint32_t)(ECX));
  /* 127f632e call 0x127ec290 */
  push32(0x127f6333u); f_127ec290();
  /* 127f6333 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6336 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6339 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 127f633d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 127f6340 jmp 0x127f62ff */
  goto L_127f62ff;
L_127f6342:;
  /* 127f6342 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f6345 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6348 push eax */
  push32((uint32_t)(EAX));
  /* 127f6349 call 0x127e9440 */
  push32(0x127f634eu); f_127e9440();
  /* 127f634e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6351 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127f6354 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f6358 je 0x127f63fb */
  if (C.zf) goto L_127f63fb;
  /* 127f635e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f6361 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 127f6364 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 127f636b jmp 0x127f6376 */
  goto L_127f6376;
L_127f636d:;
  /* 127f636d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f6370 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6373 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_127f6376:;
  /* 127f6376 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f637a jae 0x127f63ec */
  if (!C.cf) goto L_127f63ec;
  /* 127f637c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f637f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 127f6382 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f6385 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6388 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 127f638b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f638e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f6391 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 127f6395 push ecx */
  push32((uint32_t)(ECX));
  /* 127f6396 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f6399 push edx */
  push32((uint32_t)(EDX));
  /* 127f639a call 0x127ec410 */
  push32(0x127f639fu); f_127ec410();
  /* 127f639f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f63a2 push eax */
  push32((uint32_t)(EAX));
  /* 127f63a3 call 0x127ec290 */
  push32(0x127f63a8u); f_127ec290();
  /* 127f63a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f63ab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f63ae add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f63b0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 127f63b3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f63b6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 127f63b9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f63bc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f63bf mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 127f63c2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f63c5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f63c8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 127f63cc push eax */
  push32((uint32_t)(EAX));
  /* 127f63cd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f63d0 push ecx */
  push32((uint32_t)(ECX));
  /* 127f63d1 call 0x127ec410 */
  push32(0x127f63d6u); f_127ec410();
  /* 127f63d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f63d9 push eax */
  push32((uint32_t)(EAX));
  /* 127f63da call 0x127ec290 */
  push32(0x127f63dfu); f_127ec290();
  /* 127f63df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f63e2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f63e5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f63e7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 127f63ea jmp 0x127f636d */
  goto L_127f636d;
L_127f63ec:;
  /* 127f63ec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f63ef mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 127f63f2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f63f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f63f8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_127f63fb:;
  /* 127f63fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f63fe pop esi */
  ESI = (pop32());
  /* 127f63ff mov esp, ebp */
  ESP = (EBP);
  /* 127f6401 pop ebp */
  EBP = (pop32());
  /* 127f6402 ret  */
  ESPCHK(0x127f62e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016410 @ 0x127f6410 (878 bytes, 273 insns) */
void f_127f6410(void) {
  FTRACE(0x127f6410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f6410 push ebp */
  push32((uint32_t)(EBP));
  /* 127f6411 mov ebp, esp */
  EBP = (ESP);
  /* 127f6413 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127f6416 push esi */
  push32((uint32_t)(ESI));
  /* 127f6417 mov eax, dword ptr [0x12814c98] */
  EAX = (r32((uint32_t)(0x12814c98)));
  /* 127f641c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127f641f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 127f6426 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 127f642d jmp 0x127f6438 */
  goto L_127f6438;
L_127f642f:;
  /* 127f642f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f6432 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6435 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_127f6438:;
  /* 127f6438 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f643c jae 0x127f6471 */
  if (!C.cf) goto L_127f6471;
  /* 127f643e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f6441 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f6444 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 127f6447 push ecx */
  push32((uint32_t)(ECX));
  /* 127f6448 call 0x127ec290 */
  push32(0x127f644du); f_127ec290();
  /* 127f644d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6450 mov esi, eax */
  ESI = (EAX);
  /* 127f6452 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f6455 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f6458 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 127f645c push ecx */
  push32((uint32_t)(ECX));
  /* 127f645d call 0x127ec290 */
  push32(0x127f6462u); f_127ec290();
  /* 127f6462 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6465 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6468 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 127f646c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 127f646f jmp 0x127f642f */
  goto L_127f642f;
L_127f6471:;
  /* 127f6471 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 127f6478 jmp 0x127f6483 */
  goto L_127f6483;
L_127f647a:;
  /* 127f647a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f647d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6480 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_127f6483:;
  /* 127f6483 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f6487 jae 0x127f64bd */
  if (!C.cf) goto L_127f64bd;
  /* 127f6489 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f648c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f648f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 127f6493 push eax */
  push32((uint32_t)(EAX));
  /* 127f6494 call 0x127ec290 */
  push32(0x127f6499u); f_127ec290();
  /* 127f6499 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f649c mov esi, eax */
  ESI = (EAX);
  /* 127f649e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f64a1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f64a4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 127f64a8 push eax */
  push32((uint32_t)(EAX));
  /* 127f64a9 call 0x127ec290 */
  push32(0x127f64aeu); f_127ec290();
  /* 127f64ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f64b1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f64b4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 127f64b8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127f64bb jmp 0x127f647a */
  goto L_127f647a;
L_127f64bd:;
  /* 127f64bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f64c0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 127f64c6 push eax */
  push32((uint32_t)(EAX));
  /* 127f64c7 call 0x127ec290 */
  push32(0x127f64ccu); f_127ec290();
  /* 127f64cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f64cf mov esi, eax */
  ESI = (EAX);
  /* 127f64d1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f64d4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 127f64da push edx */
  push32((uint32_t)(EDX));
  /* 127f64db call 0x127ec290 */
  push32(0x127f64e0u); f_127ec290();
  /* 127f64e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f64e3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f64e6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 127f64ea mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127f64ed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f64f0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 127f64f6 push edx */
  push32((uint32_t)(EDX));
  /* 127f64f7 call 0x127ec290 */
  push32(0x127f64fcu); f_127ec290();
  /* 127f64fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f64ff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f6502 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 127f6506 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 127f6509 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f650c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 127f6512 push ecx */
  push32((uint32_t)(ECX));
  /* 127f6513 call 0x127ec290 */
  push32(0x127f6518u); f_127ec290();
  /* 127f6518 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f651b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f651e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 127f6522 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127f6525 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f6528 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 127f652e push edx */
  push32((uint32_t)(EDX));
  /* 127f652f call 0x127ec290 */
  push32(0x127f6534u); f_127ec290();
  /* 127f6534 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6537 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f653a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 127f653e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 127f6541 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127f6544 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6549 push eax */
  push32((uint32_t)(EAX));
  /* 127f654a call 0x127e9440 */
  push32(0x127f654fu); f_127e9440();
  /* 127f654f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6552 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127f6555 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f6559 je 0x127f6776 */
  if (C.zf) goto L_127f6776;
  /* 127f655f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f6562 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 127f6565 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f6568 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f656e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 127f6571 push 0xac */
  push32((uint32_t)(0xacu));
  /* 127f6576 mov eax, dword ptr [0x12814c98] */
  EAX = (r32((uint32_t)(0x12814c98)));
  /* 127f657b push eax */
  push32((uint32_t)(EAX));
  /* 127f657c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f657f push ecx */
  push32((uint32_t)(ECX));
  /* 127f6580 call 0x127efd40 */
  push32(0x127f6585u); f_127efd40();
  /* 127f6585 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6588 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 127f658f jmp 0x127f659a */
  goto L_127f659a;
L_127f6591:;
  /* 127f6591 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f6594 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6597 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_127f659a:;
  /* 127f659a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f659e jae 0x127f660e */
  if (!C.cf) goto L_127f660e;
  /* 127f65a0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f65a3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127f65a6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f65a9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 127f65ac mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f65af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f65b2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 127f65b5 push edx */
  push32((uint32_t)(EDX));
  /* 127f65b6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f65b9 push eax */
  push32((uint32_t)(EAX));
  /* 127f65ba call 0x127ec410 */
  push32(0x127f65bfu); f_127ec410();
  /* 127f65bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f65c2 push eax */
  push32((uint32_t)(EAX));
  /* 127f65c3 call 0x127ec290 */
  push32(0x127f65c8u); f_127ec290();
  /* 127f65c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f65cb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f65ce lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 127f65d2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 127f65d5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f65d8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127f65db mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f65de mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 127f65e2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f65e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f65e8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 127f65ec push edx */
  push32((uint32_t)(EDX));
  /* 127f65ed mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f65f0 push eax */
  push32((uint32_t)(EAX));
  /* 127f65f1 call 0x127ec410 */
  push32(0x127f65f6u); f_127ec410();
  /* 127f65f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f65f9 push eax */
  push32((uint32_t)(EAX));
  /* 127f65fa call 0x127ec290 */
  push32(0x127f65ffu); f_127ec290();
  /* 127f65ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6602 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f6605 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 127f6609 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 127f660c jmp 0x127f6591 */
  goto L_127f6591;
L_127f660e:;
  /* 127f660e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 127f6615 jmp 0x127f6620 */
  goto L_127f6620;
L_127f6617:;
  /* 127f6617 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f661a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127f661d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_127f6620:;
  /* 127f6620 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127f6624 jae 0x127f6696 */
  if (!C.cf) goto L_127f6696;
  /* 127f6626 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f6629 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127f662c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f662f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 127f6633 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f6636 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f6639 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 127f663d push eax */
  push32((uint32_t)(EAX));
  /* 127f663e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f6641 push ecx */
  push32((uint32_t)(ECX));
  /* 127f6642 call 0x127ec410 */
  push32(0x127f6647u); f_127ec410();
  /* 127f6647 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f664a push eax */
  push32((uint32_t)(EAX));
  /* 127f664b call 0x127ec290 */
  push32(0x127f6650u); f_127ec290();
  /* 127f6650 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6653 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f6656 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 127f665a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 127f665d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f6660 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127f6663 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f6666 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 127f666a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127f666d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f6670 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 127f6674 push eax */
  push32((uint32_t)(EAX));
  /* 127f6675 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f6678 push ecx */
  push32((uint32_t)(ECX));
  /* 127f6679 call 0x127ec410 */
  push32(0x127f667eu); f_127ec410();
  /* 127f667e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6681 push eax */
  push32((uint32_t)(EAX));
  /* 127f6682 call 0x127ec290 */
  push32(0x127f6687u); f_127ec290();
  /* 127f6687 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f668a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f668d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 127f6691 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 127f6694 jmp 0x127f6617 */
  goto L_127f6617;
L_127f6696:;
  /* 127f6696 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127f6699 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f669c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 127f66a2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f66a5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 127f66ab push ecx */
  push32((uint32_t)(ECX));
  /* 127f66ac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f66af push edx */
  push32((uint32_t)(EDX));
  /* 127f66b0 call 0x127ec410 */
  push32(0x127f66b5u); f_127ec410();
  /* 127f66b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f66b8 push eax */
  push32((uint32_t)(EAX));
  /* 127f66b9 call 0x127ec290 */
  push32(0x127f66beu); f_127ec290();
  /* 127f66be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f66c1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f66c4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 127f66c8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 127f66cb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127f66ce mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f66d1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 127f66d7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f66da mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 127f66e0 push eax */
  push32((uint32_t)(EAX));
  /* 127f66e1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f66e4 push ecx */
  push32((uint32_t)(ECX));
  /* 127f66e5 call 0x127ec410 */
  push32(0x127f66eau); f_127ec410();
  /* 127f66ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f66ed push eax */
  push32((uint32_t)(EAX));
  /* 127f66ee call 0x127ec290 */
  push32(0x127f66f3u); f_127ec290();
  /* 127f66f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f66f6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f66f9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 127f66fd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 127f6700 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127f6703 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f6706 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 127f670c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f670f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 127f6715 push ecx */
  push32((uint32_t)(ECX));
  /* 127f6716 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f6719 push edx */
  push32((uint32_t)(EDX));
  /* 127f671a call 0x127ec410 */
  push32(0x127f671fu); f_127ec410();
  /* 127f671f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6722 push eax */
  push32((uint32_t)(EAX));
  /* 127f6723 call 0x127ec290 */
  push32(0x127f6728u); f_127ec290();
  /* 127f6728 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f672b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f672e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 127f6732 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 127f6735 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127f6738 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f673b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 127f6741 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127f6744 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 127f674a push eax */
  push32((uint32_t)(EAX));
  /* 127f674b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f674e push ecx */
  push32((uint32_t)(ECX));
  /* 127f674f call 0x127ec410 */
  push32(0x127f6754u); f_127ec410();
  /* 127f6754 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6757 push eax */
  push32((uint32_t)(EAX));
  /* 127f6758 call 0x127ec290 */
  push32(0x127f675du); f_127ec290();
  /* 127f675d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f6760 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f6763 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 127f6767 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 127f676a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127f676d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127f6770 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_127f6776:;
  /* 127f6776 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127f6779 pop esi */
  ESI = (pop32());
  /* 127f677a mov esp, ebp */
  ESP = (EBP);
  /* 127f677c pop ebp */
  EBP = (pop32());
  /* 127f677d ret  */
  ESPCHK(0x127f6410u, _esp0);
  ESP += 4; return;
}

/* FUN_10016780 @ 0x127f6780 (31 bytes, 15 insns) */
void f_127f6780(void) {
  FTRACE(0x127f6780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127f6780 push ebp */
  push32((uint32_t)(EBP));
  /* 127f6781 mov ebp, esp */
  EBP = (ESP);
  /* 127f6783 push 0 */
  push32((uint32_t)(0x0u));
  /* 127f6785 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127f6788 push eax */
  push32((uint32_t)(EAX));
  /* 127f6789 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127f678c push ecx */
  push32((uint32_t)(ECX));
  /* 127f678d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127f6790 push edx */
  push32((uint32_t)(EDX));
  /* 127f6791 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127f6794 push eax */
  push32((uint32_t)(EAX));
  /* 127f6795 call 0x127f67a0 */
  push32(0x127f679au); f_127f67a0();
  /* 127f679a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127f679d pop ebp */
  EBP = (pop32());
  /* 127f679e ret  */
  ESPCHK(0x127f6780u, _esp0);
  ESP += 4; return;
}

