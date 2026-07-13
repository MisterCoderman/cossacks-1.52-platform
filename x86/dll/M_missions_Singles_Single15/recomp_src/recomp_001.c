#include "recomp.h"

/* FUN_1000b7d0 @ 0x1115b7d0 (10 bytes, 5 insns) */
void f_1115b7d0(void) {
  FTRACE(0x1115b7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115b7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1115b7d1 mov ebp, esp */
  EBP = (ESP);
  /* 1115b7d3 mov eax, dword ptr [0x11181c94] */
  EAX = (r32((uint32_t)(0x11181c94)));
  /* 1115b7d8 pop ebp */
  EBP = (pop32());
  /* 1115b7d9 ret  */
  ESPCHK(0x1115b7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b7e0 @ 0x1115b7e0 (31 bytes, 11 insns) */
void f_1115b7e0(void) {
  FTRACE(0x1115b7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115b7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1115b7e1 mov ebp, esp */
  EBP = (ESP);
  /* 1115b7e3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b7ea jbe 0x1115b7f0 */
  if ((C.cf||C.zf)) goto L_1115b7f0;
  /* 1115b7ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115b7ee jmp 0x1115b7fd */
  goto L_1115b7fd;
L_1115b7f0:;
  /* 1115b7f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115b7f3 mov dword ptr [0x11181c94], eax */
  w32((uint32_t)(0x11181c94), (EAX));
  /* 1115b7f8 mov eax, 1 */
  EAX = (0x1u);
L_1115b7fd:;
  /* 1115b7fd pop ebp */
  EBP = (pop32());
  /* 1115b7fe ret  */
  ESPCHK(0x1115b7e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b800 @ 0x1115b800 (89 bytes, 20 insns) */
void f_1115b800(void) {
  FTRACE(0x1115b800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115b800 push ebp */
  push32((uint32_t)(EBP));
  /* 1115b801 mov ebp, esp */
  EBP = (ESP);
  /* 1115b803 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1115b808 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115b80a mov eax, dword ptr [0x1118518c] */
  EAX = (r32((uint32_t)(0x1118518c)));
  /* 1115b80f push eax */
  push32((uint32_t)(EAX));
  /* 1115b810 call dword ptr [0x11186358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186358))), 0x1115b816u);
  /* 1115b816 mov dword ptr [0x11185188], eax */
  w32((uint32_t)(0x11185188), (EAX));
  /* 1115b81b cmp dword ptr [0x11185188], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11185188))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b822 jne 0x1115b828 */
  if (!C.zf) goto L_1115b828;
  /* 1115b824 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115b826 jmp 0x1115b857 */
  goto L_1115b857;
L_1115b828:;
  /* 1115b828 mov ecx, dword ptr [0x11185188] */
  ECX = (r32((uint32_t)(0x11185188)));
  /* 1115b82e mov dword ptr [0x1118517c], ecx */
  w32((uint32_t)(0x1118517c), (ECX));
  /* 1115b834 mov dword ptr [0x11185180], 0 */
  w32((uint32_t)(0x11185180), (0x0u));
  /* 1115b83e mov dword ptr [0x11185184], 0 */
  w32((uint32_t)(0x11185184), (0x0u));
  /* 1115b848 mov dword ptr [0x11185168], 0x10 */
  w32((uint32_t)(0x11185168), (0x10u));
  /* 1115b852 mov eax, 1 */
  EAX = (0x1u);
L_1115b857:;
  /* 1115b857 pop ebp */
  EBP = (pop32());
  /* 1115b858 ret  */
  ESPCHK(0x1115b800u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b860 @ 0x1115b860 (85 bytes, 29 insns) */
void f_1115b860(void) {
  FTRACE(0x1115b860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115b860 push ebp */
  push32((uint32_t)(EBP));
  /* 1115b861 mov ebp, esp */
  EBP = (ESP);
  /* 1115b863 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115b866 mov eax, dword ptr [0x11185184] */
  EAX = (r32((uint32_t)(0x11185184)));
  /* 1115b86b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1115b86e mov ecx, dword ptr [0x11185188] */
  ECX = (r32((uint32_t)(0x11185188)));
  /* 1115b874 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b876 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1115b879 mov edx, dword ptr [0x11185188] */
  EDX = (r32((uint32_t)(0x11185188)));
  /* 1115b87f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1115b882:;
  /* 1115b882 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115b885 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b888 jae 0x1115b8af */
  if (!C.cf) goto L_1115b8af;
  /* 1115b88a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115b88d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115b890 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115b893 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1115b896 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b89d jae 0x1115b8a4 */
  if (!C.cf) goto L_1115b8a4;
  /* 1115b89f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115b8a2 jmp 0x1115b8b1 */
  goto L_1115b8b1;
L_1115b8a4:;
  /* 1115b8a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115b8a7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b8aa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1115b8ad jmp 0x1115b882 */
  goto L_1115b882;
L_1115b8af:;
  /* 1115b8af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1115b8b1:;
  /* 1115b8b1 mov esp, ebp */
  ESP = (EBP);
  /* 1115b8b3 pop ebp */
  EBP = (pop32());
  /* 1115b8b4 ret  */
  ESPCHK(0x1115b860u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8c0 @ 0x1115b8c0 (95 bytes, 33 insns) */
void f_1115b8c0(void) {
  FTRACE(0x1115b8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115b8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1115b8c1 mov ebp, esp */
  EBP = (ESP);
  /* 1115b8c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115b8c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115b8c9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115b8cc sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115b8cf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1115b8d2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115b8d5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1115b8d8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1115b8db mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1115b8e0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115b8e3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1115b8e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115b8e8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1115b8eb and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1115b8ed test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115b8ef jne 0x1115b911 */
  if (!C.zf) goto L_1115b911;
  /* 1115b8f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115b8f4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1115b8f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115b8f9 jne 0x1115b911 */
  if (!C.zf) goto L_1115b911;
  /* 1115b8fb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115b8fe and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 1115b904 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1115b906 je 0x1115b911 */
  if (C.zf) goto L_1115b911;
  /* 1115b908 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 1115b90f jmp 0x1115b918 */
  goto L_1115b918;
L_1115b911:;
  /* 1115b911 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1115b918:;
  /* 1115b918 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1115b91b mov esp, ebp */
  ESP = (EBP);
  /* 1115b91d pop ebp */
  EBP = (pop32());
  /* 1115b91e ret  */
  ESPCHK(0x1115b8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b920 @ 0x1115b920 (1485 bytes, 453 insns) */
void f_1115b920(void) {
  FTRACE(0x1115b920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115b920 push ebp */
  push32((uint32_t)(EBP));
  /* 1115b921 mov ebp, esp */
  EBP = (ESP);
  /* 1115b923 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115b926 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115b929 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1115b92c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 1115b92f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115b932 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115b935 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115b938 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1115b93b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115b93e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 1115b941 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1115b944 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115b947 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1115b94d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1115b950 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 1115b957 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1115b95a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115b95d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115b960 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1115b963 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1115b966 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1115b968 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115b96b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1115b96e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1115b971 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b974 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 1115b977 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1115b97a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1115b97c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1115b97f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1115b982 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1115b985 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1115b988 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1115b98b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1115b98e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1115b990 jne 0x1115bab8 */
  if (!C.zf) goto L_1115bab8;
  /* 1115b996 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1115b999 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1115b99c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115b99f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1115b9a2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b9a6 jbe 0x1115b9af */
  if ((C.cf||C.zf)) goto L_1115b9af;
  /* 1115b9a8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1115b9af:;
  /* 1115b9af mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1115b9b2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1115b9b5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1115b9b8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b9bb jne 0x1115ba91 */
  if (!C.zf) goto L_1115ba91;
  /* 1115b9c1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b9c5 jae 0x1115ba26 */
  if (!C.cf) goto L_1115ba26;
  /* 1115b9c7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1115b9cc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115b9cf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1115b9d1 not eax */
  EAX = (~(EAX));
  /* 1115b9d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115b9d6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1115b9d9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1115b9dd and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1115b9df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115b9e2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1115b9e5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1115b9e9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1115b9ec add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b9ef mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1115b9f2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1115b9f5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1115b9f8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b9fb mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1115b9fe mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1115ba01 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115ba04 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1115ba08 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115ba0a jne 0x1115ba24 */
  if (!C.zf) goto L_1115ba24;
  /* 1115ba0c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1115ba11 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115ba14 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1115ba16 not eax */
  EAX = (~(EAX));
  /* 1115ba18 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115ba1b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1115ba1d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1115ba1f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115ba22 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1115ba24:;
  /* 1115ba24 jmp 0x1115ba91 */
  goto L_1115ba91;
L_1115ba26:;
  /* 1115ba26 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115ba29 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115ba2c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1115ba31 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1115ba33 not edx */
  EDX = (~(EDX));
  /* 1115ba35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115ba38 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1115ba3b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1115ba42 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1115ba44 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115ba47 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1115ba4a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1115ba51 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1115ba54 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115ba57 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1115ba5a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1115ba5d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1115ba60 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115ba63 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1115ba66 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1115ba69 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115ba6c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1115ba70 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1115ba72 jne 0x1115ba91 */
  if (!C.zf) goto L_1115ba91;
  /* 1115ba74 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115ba77 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115ba7a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1115ba7f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1115ba81 not edx */
  EDX = (~(EDX));
  /* 1115ba83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115ba86 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1115ba89 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1115ba8b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115ba8e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1115ba91:;
  /* 1115ba91 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1115ba94 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1115ba97 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1115ba9a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1115ba9d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1115baa0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1115baa3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1115baa6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1115baa9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1115baac mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1115baaf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115bab2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115bab5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_1115bab8:;
  /* 1115bab8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115babb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1115babe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115bac1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1115bac4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115bac8 jbe 0x1115bad1 */
  if ((C.cf||C.zf)) goto L_1115bad1;
  /* 1115baca mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1115bad1:;
  /* 1115bad1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1115bad4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1115bad7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1115bad9 jne 0x1115bc35 */
  if (!C.zf) goto L_1115bc35;
  /* 1115badf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1115bae2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115bae5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 1115bae8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1115baeb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1115baee sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115baf1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1115baf4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115baf8 jbe 0x1115bb01 */
  if ((C.cf||C.zf)) goto L_1115bb01;
  /* 1115bafa mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_1115bb01:;
  /* 1115bb01 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115bb04 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115bb07 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1115bb0a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115bb0d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1115bb10 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115bb13 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1115bb16 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115bb1a jbe 0x1115bb23 */
  if ((C.cf||C.zf)) goto L_1115bb23;
  /* 1115bb1c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1115bb23:;
  /* 1115bb23 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1115bb26 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115bb29 je 0x1115bc2f */
  if (C.zf) goto L_1115bc2f;
  /* 1115bb2f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1115bb32 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1115bb35 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1115bb38 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115bb3b jne 0x1115bc11 */
  if (!C.zf) goto L_1115bc11;
  /* 1115bb41 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115bb45 jae 0x1115bba6 */
  if (!C.cf) goto L_1115bba6;
  /* 1115bb47 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1115bb4c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1115bb4f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1115bb51 not edx */
  EDX = (~(EDX));
  /* 1115bb53 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115bb56 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1115bb59 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1115bb5d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1115bb5f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115bb62 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1115bb65 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1115bb69 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1115bb6c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115bb6f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1115bb72 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1115bb75 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1115bb78 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115bb7b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1115bb7e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1115bb81 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115bb84 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1115bb88 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1115bb8a jne 0x1115bba4 */
  if (!C.zf) goto L_1115bba4;
  /* 1115bb8c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1115bb91 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1115bb94 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1115bb96 not edx */
  EDX = (~(EDX));
  /* 1115bb98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115bb9b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1115bb9d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1115bb9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115bba2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1115bba4:;
  /* 1115bba4 jmp 0x1115bc11 */
  goto L_1115bc11;
L_1115bba6:;
  /* 1115bba6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1115bba9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115bbac mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1115bbb1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1115bbb3 not eax */
  EAX = (~(EAX));
  /* 1115bbb5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115bbb8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1115bbbb mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1115bbc2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1115bbc4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115bbc7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1115bbca mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1115bbd1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1115bbd4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115bbd7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1115bbda sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1115bbdd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1115bbe0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115bbe3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1115bbe6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1115bbe9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115bbec movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1115bbf0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115bbf2 jne 0x1115bc11 */
  if (!C.zf) goto L_1115bc11;
  /* 1115bbf4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1115bbf7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115bbfa mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1115bbff shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1115bc01 not eax */
  EAX = (~(EAX));
  /* 1115bc03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115bc06 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1115bc09 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1115bc0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115bc0e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1115bc11:;
  /* 1115bc11 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1115bc14 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1115bc17 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1115bc1a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1115bc1d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1115bc20 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1115bc23 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1115bc26 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1115bc29 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1115bc2c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_1115bc2f:;
  /* 1115bc2f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1115bc32 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_1115bc35:;
  /* 1115bc35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1115bc38 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1115bc3b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1115bc3d jne 0x1115bc4b */
  if (!C.zf) goto L_1115bc4b;
  /* 1115bc3f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1115bc42 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115bc45 je 0x1115bd5b */
  if (C.zf) goto L_1115bd5b;
L_1115bc4b:;
  /* 1115bc4b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1115bc4e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115bc51 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1115bc54 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1115bc57 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1115bc5a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115bc5d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1115bc60 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1115bc63 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1115bc66 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115bc69 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1115bc6c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115bc6f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1115bc72 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1115bc75 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1115bc78 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1115bc7b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1115bc7e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1115bc81 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1115bc84 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1115bc87 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1115bc8a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115bc8d jne 0x1115bd5b */
  if (!C.zf) goto L_1115bd5b;
  /* 1115bc93 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115bc97 jae 0x1115bcf4 */
  if (!C.cf) goto L_1115bcf4;
  /* 1115bc99 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1115bc9c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115bc9f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1115bca3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1115bca6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115bca9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1115bcac add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1115bcaf mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1115bcb2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115bcb5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1115bcb8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115bcba jne 0x1115bcd2 */
  if (!C.zf) goto L_1115bcd2;
  /* 1115bcbc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1115bcc1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1115bcc4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1115bcc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115bcc9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1115bccb or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1115bccd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115bcd0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1115bcd2:;
  /* 1115bcd2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1115bcd7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1115bcda shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1115bcdc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115bcdf mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1115bce2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1115bce6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1115bce8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115bceb mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1115bcee mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1115bcf2 jmp 0x1115bd5b */
  goto L_1115bd5b;
L_1115bcf4:;
  /* 1115bcf4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1115bcf7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115bcfa movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1115bcfe mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1115bd01 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115bd04 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1115bd07 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1115bd0a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1115bd0d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115bd10 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1115bd13 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115bd15 jne 0x1115bd32 */
  if (!C.zf) goto L_1115bd32;
  /* 1115bd17 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1115bd1a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115bd1d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1115bd22 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1115bd24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115bd27 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1115bd2a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1115bd2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115bd2f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1115bd32:;
  /* 1115bd32 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1115bd35 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115bd38 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1115bd3d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1115bd3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115bd42 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1115bd45 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1115bd4c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1115bd4e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115bd51 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1115bd54 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1115bd5b:;
  /* 1115bd5b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1115bd5e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115bd61 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1115bd63 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1115bd66 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115bd69 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115bd6c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 1115bd6f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115bd72 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1115bd74 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115bd77 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115bd7a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1115bd7c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115bd7f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115bd82 jne 0x1115bee9 */
  if (!C.zf) goto L_1115bee9;
  /* 1115bd88 cmp dword ptr [0x11185180], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11185180))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115bd8f je 0x1115bed8 */
  if (C.zf) goto L_1115bed8;
  /* 1115bd95 mov eax, dword ptr [0x11185178] */
  EAX = (r32((uint32_t)(0x11185178)));
  /* 1115bd9a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1115bd9d mov ecx, dword ptr [0x11185180] */
  ECX = (r32((uint32_t)(0x11185180)));
  /* 1115bda3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1115bda6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115bda8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1115bdab push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1115bdb0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1115bdb5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115bdb8 push eax */
  push32((uint32_t)(EAX));
  /* 1115bdb9 call dword ptr [0x11186374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186374))), 0x1115bdbfu);
  /* 1115bdbf mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1115bdc4 mov ecx, dword ptr [0x11185178] */
  ECX = (r32((uint32_t)(0x11185178)));
  /* 1115bdca shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1115bdcc mov eax, dword ptr [0x11185180] */
  EAX = (r32((uint32_t)(0x11185180)));
  /* 1115bdd1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1115bdd4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1115bdd6 mov edx, dword ptr [0x11185180] */
  EDX = (r32((uint32_t)(0x11185180)));
  /* 1115bddc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1115bddf mov eax, dword ptr [0x11185180] */
  EAX = (r32((uint32_t)(0x11185180)));
  /* 1115bde4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1115bde7 mov edx, dword ptr [0x11185178] */
  EDX = (r32((uint32_t)(0x11185178)));
  /* 1115bded mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1115bdf8 mov eax, dword ptr [0x11185180] */
  EAX = (r32((uint32_t)(0x11185180)));
  /* 1115bdfd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1115be00 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1115be03 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1115be06 mov eax, dword ptr [0x11185180] */
  EAX = (r32((uint32_t)(0x11185180)));
  /* 1115be0b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1115be0e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1115be11 mov edx, dword ptr [0x11185180] */
  EDX = (r32((uint32_t)(0x11185180)));
  /* 1115be17 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1115be1a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1115be1e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1115be20 jne 0x1115be36 */
  if (!C.zf) goto L_1115be36;
  /* 1115be22 mov edx, dword ptr [0x11185180] */
  EDX = (r32((uint32_t)(0x11185180)));
  /* 1115be28 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1115be2b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1115be2d mov ecx, dword ptr [0x11185180] */
  ECX = (r32((uint32_t)(0x11185180)));
  /* 1115be33 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1115be36:;
  /* 1115be36 mov edx, dword ptr [0x11185180] */
  EDX = (r32((uint32_t)(0x11185180)));
  /* 1115be3c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115be40 jne 0x1115bed8 */
  if (!C.zf) goto L_1115bed8;
  /* 1115be46 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1115be4b push 0 */
  push32((uint32_t)(0x0u));
  /* 1115be4d mov eax, dword ptr [0x11185180] */
  EAX = (r32((uint32_t)(0x11185180)));
  /* 1115be52 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1115be55 push ecx */
  push32((uint32_t)(ECX));
  /* 1115be56 call dword ptr [0x11186374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186374))), 0x1115be5cu);
  /* 1115be5c mov edx, dword ptr [0x11185180] */
  EDX = (r32((uint32_t)(0x11185180)));
  /* 1115be62 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1115be65 push eax */
  push32((uint32_t)(EAX));
  /* 1115be66 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115be68 mov ecx, dword ptr [0x1118518c] */
  ECX = (r32((uint32_t)(0x1118518c)));
  /* 1115be6e push ecx */
  push32((uint32_t)(ECX));
  /* 1115be6f call dword ptr [0x11186378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186378))), 0x1115be75u);
  /* 1115be75 mov edx, dword ptr [0x11185184] */
  EDX = (r32((uint32_t)(0x11185184)));
  /* 1115be7b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1115be7e mov eax, dword ptr [0x11185188] */
  EAX = (r32((uint32_t)(0x11185188)));
  /* 1115be83 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115be85 mov ecx, dword ptr [0x11185180] */
  ECX = (r32((uint32_t)(0x11185180)));
  /* 1115be8b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115be8e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115be90 push eax */
  push32((uint32_t)(EAX));
  /* 1115be91 mov edx, dword ptr [0x11185180] */
  EDX = (r32((uint32_t)(0x11185180)));
  /* 1115be97 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115be9a push edx */
  push32((uint32_t)(EDX));
  /* 1115be9b mov eax, dword ptr [0x11185180] */
  EAX = (r32((uint32_t)(0x11185180)));
  /* 1115bea0 push eax */
  push32((uint32_t)(EAX));
  /* 1115bea1 call 0x1115f450 */
  push32(0x1115bea6u); f_1115f450();
  /* 1115bea6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115bea9 mov ecx, dword ptr [0x11185184] */
  ECX = (r32((uint32_t)(0x11185184)));
  /* 1115beaf sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115beb2 mov dword ptr [0x11185184], ecx */
  w32((uint32_t)(0x11185184), (ECX));
  /* 1115beb8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115bebb cmp edx, dword ptr [0x11185180] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11185180))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115bec1 jbe 0x1115becc */
  if ((C.cf||C.zf)) goto L_1115becc;
  /* 1115bec3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115bec6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115bec9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1115becc:;
  /* 1115becc mov ecx, dword ptr [0x11185188] */
  ECX = (r32((uint32_t)(0x11185188)));
  /* 1115bed2 mov dword ptr [0x1118517c], ecx */
  w32((uint32_t)(0x1118517c), (ECX));
L_1115bed8:;
  /* 1115bed8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115bedb mov dword ptr [0x11185180], edx */
  w32((uint32_t)(0x11185180), (EDX));
  /* 1115bee1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115bee4 mov dword ptr [0x11185178], eax */
  w32((uint32_t)(0x11185178), (EAX));
L_1115bee9:;
  /* 1115bee9 mov esp, ebp */
  ESP = (EBP);
  /* 1115beeb pop ebp */
  EBP = (pop32());
  /* 1115beec ret  */
  ESPCHK(0x1115b920u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bef0 @ 0x1115bef0 (1334 bytes, 427 insns) */
void f_1115bef0(void) {
  FTRACE(0x1115bef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115bef0 push ebp */
  push32((uint32_t)(EBP));
  /* 1115bef1 mov ebp, esp */
  EBP = (ESP);
  /* 1115bef3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115bef6 push esi */
  push32((uint32_t)(ESI));
  /* 1115bef7 mov eax, dword ptr [0x11185184] */
  EAX = (r32((uint32_t)(0x11185184)));
  /* 1115befc imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1115beff mov ecx, dword ptr [0x11185188] */
  ECX = (r32((uint32_t)(0x11185188)));
  /* 1115bf05 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115bf07 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1115bf0a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115bf0d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115bf10 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1115bf13 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1115bf16 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1115bf19 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1115bf1c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115bf1f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1115bf22 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115bf26 jge 0x1115bf3c */
  if ((C.sf==C.of)) goto L_1115bf3c;
  /* 1115bf28 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1115bf2b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115bf2e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1115bf30 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1115bf33 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 1115bf3a jmp 0x1115bf51 */
  goto L_1115bf51;
L_1115bf3c:;
  /* 1115bf3c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1115bf43 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115bf46 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115bf49 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1115bf4c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1115bf4e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_1115bf51:;
  /* 1115bf51 mov ecx, dword ptr [0x1118517c] */
  ECX = (r32((uint32_t)(0x1118517c)));
  /* 1115bf57 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1115bf5a:;
  /* 1115bf5a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115bf5d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115bf60 jae 0x1115bf86 */
  if (!C.cf) goto L_1115bf86;
  /* 1115bf62 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115bf65 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115bf68 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 1115bf6a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115bf6d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1115bf70 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 1115bf73 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1115bf75 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1115bf77 je 0x1115bf7b */
  if (C.zf) goto L_1115bf7b;
  /* 1115bf79 jmp 0x1115bf86 */
  goto L_1115bf86;
L_1115bf7b:;
  /* 1115bf7b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115bf7e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115bf81 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1115bf84 jmp 0x1115bf5a */
  goto L_1115bf5a;
L_1115bf86:;
  /* 1115bf86 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115bf89 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115bf8c jne 0x1115c06d */
  if (!C.zf) goto L_1115c06d;
  /* 1115bf92 mov eax, dword ptr [0x11185188] */
  EAX = (r32((uint32_t)(0x11185188)));
  /* 1115bf97 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1115bf9a:;
  /* 1115bf9a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115bf9d cmp ecx, dword ptr [0x1118517c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1118517c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115bfa3 jae 0x1115bfc9 */
  if (!C.cf) goto L_1115bfc9;
  /* 1115bfa5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115bfa8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115bfab and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 1115bfad mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115bfb0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1115bfb3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 1115bfb6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1115bfb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115bfba je 0x1115bfbe */
  if (C.zf) goto L_1115bfbe;
  /* 1115bfbc jmp 0x1115bfc9 */
  goto L_1115bfc9;
L_1115bfbe:;
  /* 1115bfbe mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115bfc1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115bfc4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1115bfc7 jmp 0x1115bf9a */
  goto L_1115bf9a;
L_1115bfc9:;
  /* 1115bfc9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115bfcc cmp ecx, dword ptr [0x1118517c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1118517c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115bfd2 jne 0x1115c06d */
  if (!C.zf) goto L_1115c06d;
L_1115bfd8:;
  /* 1115bfd8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115bfdb cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115bfde jae 0x1115bff6 */
  if (!C.cf) goto L_1115bff6;
  /* 1115bfe0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115bfe3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115bfe7 je 0x1115bfeb */
  if (C.zf) goto L_1115bfeb;
  /* 1115bfe9 jmp 0x1115bff6 */
  goto L_1115bff6;
L_1115bfeb:;
  /* 1115bfeb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115bfee add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115bff1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1115bff4 jmp 0x1115bfd8 */
  goto L_1115bfd8;
L_1115bff6:;
  /* 1115bff6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115bff9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115bffc jne 0x1115c047 */
  if (!C.zf) goto L_1115c047;
  /* 1115bffe mov eax, dword ptr [0x11185188] */
  EAX = (r32((uint32_t)(0x11185188)));
  /* 1115c003 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1115c006:;
  /* 1115c006 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115c009 cmp ecx, dword ptr [0x1118517c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1118517c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115c00f jae 0x1115c027 */
  if (!C.cf) goto L_1115c027;
  /* 1115c011 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115c014 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115c018 je 0x1115c01c */
  if (C.zf) goto L_1115c01c;
  /* 1115c01a jmp 0x1115c027 */
  goto L_1115c027;
L_1115c01c:;
  /* 1115c01c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115c01f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c022 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1115c025 jmp 0x1115c006 */
  goto L_1115c006;
L_1115c027:;
  /* 1115c027 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115c02a cmp ecx, dword ptr [0x1118517c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1118517c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115c030 jne 0x1115c047 */
  if (!C.zf) goto L_1115c047;
  /* 1115c032 call 0x1115c430 */
  push32(0x1115c037u); f_1115c430();
  /* 1115c037 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1115c03a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115c03e jne 0x1115c047 */
  if (!C.zf) goto L_1115c047;
  /* 1115c040 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115c042 jmp 0x1115c421 */
  goto L_1115c421;
L_1115c047:;
  /* 1115c047 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115c04a push edx */
  push32((uint32_t)(EDX));
  /* 1115c04b call 0x1115c540 */
  push32(0x1115c050u); f_1115c540();
  /* 1115c050 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c053 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115c056 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1115c059 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1115c05b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115c05e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1115c061 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115c064 jne 0x1115c06d */
  if (!C.zf) goto L_1115c06d;
  /* 1115c066 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115c068 jmp 0x1115c421 */
  goto L_1115c421;
L_1115c06d:;
  /* 1115c06d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115c070 mov dword ptr [0x1118517c], edx */
  w32((uint32_t)(0x1118517c), (EDX));
  /* 1115c076 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115c079 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1115c07c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 1115c07f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1115c082 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1115c084 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1115c087 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115c08b je 0x1115c0b0 */
  if (C.zf) goto L_1115c0b0;
  /* 1115c08d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115c090 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1115c093 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115c096 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 1115c09a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115c09d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1115c0a0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1115c0a3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1115c0aa or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1115c0ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115c0ae jne 0x1115c0e5 */
  if (!C.zf) goto L_1115c0e5;
L_1115c0b0:;
  /* 1115c0b0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_1115c0b7:;
  /* 1115c0b7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115c0ba mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1115c0bd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115c0c0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1115c0c4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115c0c7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1115c0ca mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1115c0cd and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1115c0d4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1115c0d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115c0d8 jne 0x1115c0e5 */
  if (!C.zf) goto L_1115c0e5;
  /* 1115c0da mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115c0dd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c0e0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1115c0e3 jmp 0x1115c0b7 */
  goto L_1115c0b7;
L_1115c0e5:;
  /* 1115c0e5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115c0e8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1115c0ee mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1115c0f1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1115c0f8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1115c0fb mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1115c102 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115c105 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1115c108 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115c10b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1115c10f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1115c112 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115c116 jne 0x1115c132 */
  if (!C.zf) goto L_1115c132;
  /* 1115c118 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 1115c11f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115c122 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1115c125 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1115c128 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 1115c12f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_1115c132:;
  /* 1115c132 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115c136 jl 0x1115c14b */
  if ((C.sf!=C.of)) goto L_1115c14b;
  /* 1115c138 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1115c13b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1115c13d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1115c140 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115c143 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c146 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1115c149 jmp 0x1115c132 */
  goto L_1115c132;
L_1115c14b:;
  /* 1115c14b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115c14e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115c151 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 1115c155 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1115c158 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115c15b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1115c15d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115c160 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1115c163 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115c166 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1115c169 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115c16c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1115c16f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115c173 jle 0x1115c17c */
  if ((C.zf||C.sf!=C.of)) goto L_1115c17c;
  /* 1115c175 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_1115c17c:;
  /* 1115c17c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1115c17f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115c182 je 0x1115c3a0 */
  if (C.zf) goto L_1115c3a0;
  /* 1115c188 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115c18b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115c18e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1115c191 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115c194 jne 0x1115c26a */
  if (!C.zf) goto L_1115c26a;
  /* 1115c19a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115c19e jge 0x1115c1ff */
  if ((C.sf==C.of)) goto L_1115c1ff;
  /* 1115c1a0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1115c1a5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115c1a8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1115c1aa not eax */
  EAX = (~(EAX));
  /* 1115c1ac mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115c1af mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1115c1b2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1115c1b6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1115c1b8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115c1bb mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1115c1be mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1115c1c2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1115c1c5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c1c8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1115c1cb sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1115c1ce mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1115c1d1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c1d4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1115c1d7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1115c1da add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c1dd movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1115c1e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115c1e3 jne 0x1115c1fd */
  if (!C.zf) goto L_1115c1fd;
  /* 1115c1e5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1115c1ea mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115c1ed shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1115c1ef not eax */
  EAX = (~(EAX));
  /* 1115c1f1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115c1f4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1115c1f6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1115c1f8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115c1fb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1115c1fd:;
  /* 1115c1fd jmp 0x1115c26a */
  goto L_1115c26a;
L_1115c1ff:;
  /* 1115c1ff mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115c202 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115c205 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1115c20a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1115c20c not edx */
  EDX = (~(EDX));
  /* 1115c20e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115c211 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1115c214 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1115c21b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1115c21d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115c220 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1115c223 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1115c22a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1115c22d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c230 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1115c233 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1115c236 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1115c239 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c23c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1115c23f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1115c242 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c245 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1115c249 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1115c24b jne 0x1115c26a */
  if (!C.zf) goto L_1115c26a;
  /* 1115c24d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115c250 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115c253 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1115c258 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1115c25a not edx */
  EDX = (~(EDX));
  /* 1115c25c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115c25f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1115c262 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1115c264 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115c267 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1115c26a:;
  /* 1115c26a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115c26d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1115c270 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115c273 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1115c276 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1115c279 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115c27c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1115c27f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115c282 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1115c285 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1115c288 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115c28c je 0x1115c3a0 */
  if (C.zf) goto L_1115c3a0;
  /* 1115c292 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1115c295 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115c298 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1115c29b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1115c29e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115c2a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1115c2a4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1115c2a7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1115c2aa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115c2ad mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1115c2b0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1115c2b3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1115c2b6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115c2b9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1115c2bc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115c2bf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1115c2c2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115c2c5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1115c2c8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115c2cb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115c2ce mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1115c2d1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115c2d4 jne 0x1115c3a0 */
  if (!C.zf) goto L_1115c3a0;
  /* 1115c2da cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115c2de jge 0x1115c33a */
  if ((C.sf==C.of)) goto L_1115c33a;
  /* 1115c2e0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1115c2e3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c2e6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1115c2ea mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1115c2ed add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c2f0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1115c2f3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1115c2f5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1115c2f8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c2fb mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1115c2fe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1115c300 jne 0x1115c318 */
  if (!C.zf) goto L_1115c318;
  /* 1115c302 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1115c307 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1115c30a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1115c30c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115c30f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1115c311 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1115c313 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115c316 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1115c318:;
  /* 1115c318 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1115c31d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1115c320 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1115c322 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115c325 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1115c328 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1115c32c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1115c32e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115c331 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1115c334 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1115c338 jmp 0x1115c3a0 */
  goto L_1115c3a0;
L_1115c33a:;
  /* 1115c33a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1115c33d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c340 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1115c344 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1115c347 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c34a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1115c34d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1115c34f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1115c352 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c355 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1115c358 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1115c35a jne 0x1115c377 */
  if (!C.zf) goto L_1115c377;
  /* 1115c35c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1115c35f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115c362 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1115c367 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1115c369 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115c36c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1115c36f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1115c371 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115c374 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1115c377:;
  /* 1115c377 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1115c37a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115c37d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1115c382 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1115c384 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115c387 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1115c38a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1115c391 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1115c393 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115c396 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1115c399 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1115c3a0:;
  /* 1115c3a0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115c3a4 je 0x1115c3ba */
  if (C.zf) goto L_1115c3ba;
  /* 1115c3a6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115c3a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115c3ac mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1115c3ae mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115c3b1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c3b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115c3b7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1115c3ba:;
  /* 1115c3ba mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115c3bd add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c3c0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1115c3c3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1115c3c6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c3c9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115c3cc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1115c3ce mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1115c3d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c3d4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115c3d7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c3da mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1115c3dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115c3e0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1115c3e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115c3e5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1115c3e7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c3ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115c3ed mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1115c3ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1115c3f1 jne 0x1115c413 */
  if (!C.zf) goto L_1115c413;
  /* 1115c3f3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115c3f6 cmp eax, dword ptr [0x11185180] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11185180))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115c3fc jne 0x1115c413 */
  if (!C.zf) goto L_1115c413;
  /* 1115c3fe mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115c401 cmp ecx, dword ptr [0x11185178] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11185178))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115c407 jne 0x1115c413 */
  if (!C.zf) goto L_1115c413;
  /* 1115c409 mov dword ptr [0x11185180], 0 */
  w32((uint32_t)(0x11185180), (0x0u));
L_1115c413:;
  /* 1115c413 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1115c416 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115c419 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1115c41b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115c41e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1115c421:;
  /* 1115c421 pop esi */
  ESI = (pop32());
  /* 1115c422 mov esp, ebp */
  ESP = (EBP);
  /* 1115c424 pop ebp */
  EBP = (pop32());
  /* 1115c425 ret  */
  ESPCHK(0x1115bef0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c430 @ 0x1115c430 (271 bytes, 78 insns) */
void f_1115c430(void) {
  FTRACE(0x1115c430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115c430 push ebp */
  push32((uint32_t)(EBP));
  /* 1115c431 mov ebp, esp */
  EBP = (ESP);
  /* 1115c433 push ecx */
  push32((uint32_t)(ECX));
  /* 1115c434 mov eax, dword ptr [0x11185184] */
  EAX = (r32((uint32_t)(0x11185184)));
  /* 1115c439 cmp eax, dword ptr [0x11185168] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11185168))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115c43f jne 0x1115c48b */
  if (!C.zf) goto L_1115c48b;
  /* 1115c441 mov ecx, dword ptr [0x11185168] */
  ECX = (r32((uint32_t)(0x11185168)));
  /* 1115c447 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c44a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1115c44d push ecx */
  push32((uint32_t)(ECX));
  /* 1115c44e mov edx, dword ptr [0x11185188] */
  EDX = (r32((uint32_t)(0x11185188)));
  /* 1115c454 push edx */
  push32((uint32_t)(EDX));
  /* 1115c455 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115c457 mov eax, dword ptr [0x1118518c] */
  EAX = (r32((uint32_t)(0x1118518c)));
  /* 1115c45c push eax */
  push32((uint32_t)(EAX));
  /* 1115c45d call dword ptr [0x11186354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186354))), 0x1115c463u);
  /* 1115c463 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1115c466 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115c46a jne 0x1115c473 */
  if (!C.zf) goto L_1115c473;
  /* 1115c46c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115c46e jmp 0x1115c53b */
  goto L_1115c53b;
L_1115c473:;
  /* 1115c473 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115c476 mov dword ptr [0x11185188], ecx */
  w32((uint32_t)(0x11185188), (ECX));
  /* 1115c47c mov edx, dword ptr [0x11185168] */
  EDX = (r32((uint32_t)(0x11185168)));
  /* 1115c482 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c485 mov dword ptr [0x11185168], edx */
  w32((uint32_t)(0x11185168), (EDX));
L_1115c48b:;
  /* 1115c48b mov eax, dword ptr [0x11185184] */
  EAX = (r32((uint32_t)(0x11185184)));
  /* 1115c490 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1115c493 mov ecx, dword ptr [0x11185188] */
  ECX = (r32((uint32_t)(0x11185188)));
  /* 1115c499 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c49b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1115c49e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1115c4a3 push 8 */
  push32((uint32_t)(0x8u));
  /* 1115c4a5 mov edx, dword ptr [0x1118518c] */
  EDX = (r32((uint32_t)(0x1118518c)));
  /* 1115c4ab push edx */
  push32((uint32_t)(EDX));
  /* 1115c4ac call dword ptr [0x11186358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186358))), 0x1115c4b2u);
  /* 1115c4b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115c4b5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 1115c4b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115c4bb cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115c4bf jne 0x1115c4c5 */
  if (!C.zf) goto L_1115c4c5;
  /* 1115c4c1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115c4c3 jmp 0x1115c53b */
  goto L_1115c53b;
L_1115c4c5:;
  /* 1115c4c5 push 4 */
  push32((uint32_t)(0x4u));
  /* 1115c4c7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1115c4cc push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1115c4d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115c4d3 call dword ptr [0x11186350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186350))), 0x1115c4d9u);
  /* 1115c4d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115c4dc mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1115c4df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115c4e2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115c4e6 jne 0x1115c502 */
  if (!C.zf) goto L_1115c502;
  /* 1115c4e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115c4eb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1115c4ee push ecx */
  push32((uint32_t)(ECX));
  /* 1115c4ef push 0 */
  push32((uint32_t)(0x0u));
  /* 1115c4f1 mov edx, dword ptr [0x1118518c] */
  EDX = (r32((uint32_t)(0x1118518c)));
  /* 1115c4f7 push edx */
  push32((uint32_t)(EDX));
  /* 1115c4f8 call dword ptr [0x11186378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186378))), 0x1115c4feu);
  /* 1115c4fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115c500 jmp 0x1115c53b */
  goto L_1115c53b;
L_1115c502:;
  /* 1115c502 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115c505 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1115c50b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115c50e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1115c515 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115c518 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1115c51f mov eax, dword ptr [0x11185184] */
  EAX = (r32((uint32_t)(0x11185184)));
  /* 1115c524 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c527 mov dword ptr [0x11185184], eax */
  w32((uint32_t)(0x11185184), (EAX));
  /* 1115c52c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115c52f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1115c532 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 1115c538 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1115c53b:;
  /* 1115c53b mov esp, ebp */
  ESP = (EBP);
  /* 1115c53d pop ebp */
  EBP = (pop32());
  /* 1115c53e ret  */
  ESPCHK(0x1115c430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c540 @ 0x1115c540 (494 bytes, 149 insns) */
void f_1115c540(void) {
  FTRACE(0x1115c540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115c540 push ebp */
  push32((uint32_t)(EBP));
  /* 1115c541 mov ebp, esp */
  EBP = (ESP);
  /* 1115c543 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115c546 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115c549 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1115c54c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1115c54f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115c552 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1115c555 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1115c558 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_1115c55f:;
  /* 1115c55f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115c563 jl 0x1115c578 */
  if ((C.sf!=C.of)) goto L_1115c578;
  /* 1115c565 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115c568 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1115c56a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1115c56d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1115c570 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c573 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1115c576 jmp 0x1115c55f */
  goto L_1115c55f;
L_1115c578:;
  /* 1115c578 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1115c57b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1115c581 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1115c584 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1115c58b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1115c58e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1115c595 jmp 0x1115c5a0 */
  goto L_1115c5a0;
L_1115c597:;
  /* 1115c597 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115c59a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c59d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1115c5a0:;
  /* 1115c5a0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115c5a4 jge 0x1115c5c6 */
  if ((C.sf==C.of)) goto L_1115c5c6;
  /* 1115c5a6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115c5a9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1115c5ac lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 1115c5af mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1115c5b2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115c5b5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115c5b8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1115c5bb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115c5be mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115c5c1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1115c5c4 jmp 0x1115c597 */
  goto L_1115c597;
L_1115c5c6:;
  /* 1115c5c6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1115c5c9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1115c5cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115c5cf mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1115c5d2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c5d4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1115c5d7 push 4 */
  push32((uint32_t)(0x4u));
  /* 1115c5d9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1115c5de push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1115c5e3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115c5e6 push edx */
  push32((uint32_t)(EDX));
  /* 1115c5e7 call dword ptr [0x11186350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186350))), 0x1115c5edu);
  /* 1115c5ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115c5ef jne 0x1115c5f9 */
  if (!C.zf) goto L_1115c5f9;
  /* 1115c5f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1115c5f4 jmp 0x1115c72a */
  goto L_1115c72a;
L_1115c5f9:;
  /* 1115c5f9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115c5fc add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c601 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1115c604 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115c607 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1115c60a jmp 0x1115c618 */
  goto L_1115c618;
L_1115c60c:;
  /* 1115c60c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115c60f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c615 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1115c618:;
  /* 1115c618 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115c61b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115c61e ja 0x1115c67d */
  if ((!C.cf&&!C.zf)) goto L_1115c67d;
  /* 1115c620 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115c623 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 1115c62a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115c62d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 1115c637 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115c63a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c63d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1115c640 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115c643 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1115c649 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115c64c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c652 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115c655 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1115c658 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115c65b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115c661 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115c664 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1115c667 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115c66a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c66f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1115c672 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115c675 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1115c67b jmp 0x1115c60c */
  goto L_1115c60c;
L_1115c67d:;
  /* 1115c67d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1115c680 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c686 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1115c689 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115c68c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c68f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1115c692 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1115c695 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1115c698 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1115c69b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1115c69e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115c6a1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1115c6a4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1115c6a7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1115c6aa add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c6ad mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1115c6b0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1115c6b3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1115c6b6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1115c6b9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1115c6bc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115c6bf mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1115c6c2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1115c6c5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1115c6c8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1115c6cb mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 1115c6d3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1115c6d6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1115c6d9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 1115c6e4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1115c6e7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 1115c6eb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1115c6ee mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 1115c6f1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1115c6f4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1115c6f7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 1115c6fa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115c6fc jne 0x1115c70d */
  if (!C.zf) goto L_1115c70d;
  /* 1115c6fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115c701 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1115c704 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1115c707 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115c70a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1115c70d:;
  /* 1115c70d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1115c712 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1115c715 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1115c717 not edx */
  EDX = (~(EDX));
  /* 1115c719 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115c71c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1115c71f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1115c721 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115c724 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1115c727 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_1115c72a:;
  /* 1115c72a mov esp, ebp */
  ESP = (EBP);
  /* 1115c72c pop ebp */
  EBP = (pop32());
  /* 1115c72d ret  */
  ESPCHK(0x1115c540u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c730 @ 0x1115c730 (1515 bytes, 489 insns) */
void f_1115c730(void) {
  FTRACE(0x1115c730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115c730 push ebp */
  push32((uint32_t)(EBP));
  /* 1115c731 mov ebp, esp */
  EBP = (ESP);
  /* 1115c733 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115c736 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1115c739 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c73c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1115c73e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1115c741 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115c744 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1115c747 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1115c74a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115c74d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115c750 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115c753 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1115c756 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1115c759 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1115c75c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1115c75f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115c762 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1115c768 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115c76b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1115c772 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1115c775 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115c778 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115c77b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1115c77e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1115c781 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1115c783 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115c786 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1115c789 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1115c78c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c78f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1115c792 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1115c795 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1115c797 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1115c79a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1115c79d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115c7a0 jle 0x1115ca56 */
  if ((C.zf||C.sf!=C.of)) goto L_1115ca56;
  /* 1115c7a6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115c7a9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1115c7ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1115c7ae jne 0x1115c7bb */
  if (!C.zf) goto L_1115c7bb;
  /* 1115c7b0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1115c7b3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c7b6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115c7b9 jle 0x1115c7c2 */
  if ((C.zf||C.sf!=C.of)) goto L_1115c7c2;
L_1115c7bb:;
  /* 1115c7bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115c7bd jmp 0x1115cd17 */
  goto L_1115cd17;
L_1115c7c2:;
  /* 1115c7c2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115c7c5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1115c7c8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115c7cb mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1115c7ce cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115c7d2 jbe 0x1115c7db */
  if ((C.cf||C.zf)) goto L_1115c7db;
  /* 1115c7d4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1115c7db:;
  /* 1115c7db mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1115c7de mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1115c7e1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1115c7e4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115c7e7 jne 0x1115c8bd */
  if (!C.zf) goto L_1115c8bd;
  /* 1115c7ed cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115c7f1 jae 0x1115c852 */
  if (!C.cf) goto L_1115c852;
  /* 1115c7f3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1115c7f8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115c7fb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1115c7fd not edx */
  EDX = (~(EDX));
  /* 1115c7ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115c802 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115c805 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1115c809 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1115c80b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115c80e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115c811 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1115c815 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115c818 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c81b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1115c81e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1115c821 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115c824 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c827 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1115c82a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115c82d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c830 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1115c834 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1115c836 jne 0x1115c850 */
  if (!C.zf) goto L_1115c850;
  /* 1115c838 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1115c83d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115c840 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1115c842 not edx */
  EDX = (~(EDX));
  /* 1115c844 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115c847 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1115c849 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1115c84b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115c84e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1115c850:;
  /* 1115c850 jmp 0x1115c8bd */
  goto L_1115c8bd;
L_1115c852:;
  /* 1115c852 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115c855 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115c858 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1115c85d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1115c85f not eax */
  EAX = (~(EAX));
  /* 1115c861 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115c864 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115c867 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1115c86e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1115c870 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115c873 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115c876 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1115c87d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115c880 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c883 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1115c886 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1115c889 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115c88c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c88f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1115c892 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115c895 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c898 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1115c89c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115c89e jne 0x1115c8bd */
  if (!C.zf) goto L_1115c8bd;
  /* 1115c8a0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115c8a3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115c8a6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1115c8ab shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1115c8ad not eax */
  EAX = (~(EAX));
  /* 1115c8af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115c8b2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1115c8b5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1115c8b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115c8ba mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1115c8bd:;
  /* 1115c8bd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1115c8c0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1115c8c3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1115c8c6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1115c8c9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1115c8cc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1115c8cf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1115c8d2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1115c8d5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1115c8d8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1115c8db mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1115c8de add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c8e1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115c8e4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1115c8e7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115c8eb jle 0x1115ca37 */
  if ((C.zf||C.sf!=C.of)) goto L_1115ca37;
  /* 1115c8f1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1115c8f4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c8f7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1115c8fa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115c8fd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1115c900 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115c903 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1115c906 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115c90a jbe 0x1115c913 */
  if ((C.cf||C.zf)) goto L_1115c913;
  /* 1115c90c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1115c913:;
  /* 1115c913 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115c916 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115c919 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1115c91c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1115c91f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1115c922 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115c925 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1115c928 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1115c92b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1115c92e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115c931 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1115c934 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115c937 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1115c93a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1115c93d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1115c940 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1115c943 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1115c946 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1115c949 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1115c94c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1115c94f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1115c952 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115c955 jne 0x1115ca23 */
  if (!C.zf) goto L_1115ca23;
  /* 1115c95b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115c95f jae 0x1115c9bc */
  if (!C.cf) goto L_1115c9bc;
  /* 1115c961 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115c964 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c967 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1115c96b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115c96e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c971 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1115c974 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1115c977 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115c97a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c97d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1115c980 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115c982 jne 0x1115c99a */
  if (!C.zf) goto L_1115c99a;
  /* 1115c984 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1115c989 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115c98c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1115c98e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115c991 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1115c993 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1115c995 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115c998 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1115c99a:;
  /* 1115c99a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1115c99f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115c9a2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1115c9a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115c9a7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115c9aa mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1115c9ae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1115c9b0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115c9b3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115c9b6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1115c9ba jmp 0x1115ca23 */
  goto L_1115ca23;
L_1115c9bc:;
  /* 1115c9bc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115c9bf add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c9c2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1115c9c6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115c9c9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c9cc mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1115c9cf add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1115c9d2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115c9d5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115c9d8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1115c9db test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115c9dd jne 0x1115c9fa */
  if (!C.zf) goto L_1115c9fa;
  /* 1115c9df mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115c9e2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115c9e5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1115c9ea shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1115c9ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115c9ef mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1115c9f2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1115c9f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115c9f7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1115c9fa:;
  /* 1115c9fa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115c9fd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115ca00 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1115ca05 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1115ca07 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115ca0a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115ca0d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1115ca14 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1115ca16 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115ca19 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115ca1c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1115ca23:;
  /* 1115ca23 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1115ca26 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115ca29 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1115ca2b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1115ca2e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115ca31 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115ca34 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_1115ca37:;
  /* 1115ca37 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1115ca3a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115ca3d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1115ca40 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1115ca42 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1115ca45 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115ca48 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1115ca4b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115ca4e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1115ca51 jmp 0x1115cd12 */
  goto L_1115cd12;
L_1115ca56:;
  /* 1115ca56 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1115ca59 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115ca5c jge 0x1115cd12 */
  if ((C.sf==C.of)) goto L_1115cd12;
  /* 1115ca62 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1115ca65 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115ca68 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1115ca6b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1115ca6d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1115ca70 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115ca73 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1115ca76 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115ca79 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 1115ca7c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1115ca7f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115ca82 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1115ca85 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1115ca88 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115ca8b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1115ca8e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1115ca91 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1115ca94 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115ca97 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1115ca9a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115ca9e jbe 0x1115caa7 */
  if ((C.cf||C.zf)) goto L_1115caa7;
  /* 1115caa0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1115caa7:;
  /* 1115caa7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115caaa and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1115caad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115caaf jne 0x1115cbf0 */
  if (!C.zf) goto L_1115cbf0;
  /* 1115cab5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115cab8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1115cabb sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115cabe mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1115cac1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115cac5 jbe 0x1115cace */
  if ((C.cf||C.zf)) goto L_1115cace;
  /* 1115cac7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1115cace:;
  /* 1115cace mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1115cad1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1115cad4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1115cad7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115cada jne 0x1115cbb0 */
  if (!C.zf) goto L_1115cbb0;
  /* 1115cae0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115cae4 jae 0x1115cb45 */
  if (!C.cf) goto L_1115cb45;
  /* 1115cae6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1115caeb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115caee shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1115caf0 not edx */
  EDX = (~(EDX));
  /* 1115caf2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115caf5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115caf8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1115cafc and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1115cafe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115cb01 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115cb04 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1115cb08 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115cb0b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115cb0e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1115cb11 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1115cb14 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115cb17 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115cb1a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1115cb1d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115cb20 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115cb23 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1115cb27 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1115cb29 jne 0x1115cb43 */
  if (!C.zf) goto L_1115cb43;
  /* 1115cb2b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1115cb30 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115cb33 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1115cb35 not edx */
  EDX = (~(EDX));
  /* 1115cb37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115cb3a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1115cb3c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1115cb3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115cb41 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1115cb43:;
  /* 1115cb43 jmp 0x1115cbb0 */
  goto L_1115cbb0;
L_1115cb45:;
  /* 1115cb45 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115cb48 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115cb4b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1115cb50 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1115cb52 not eax */
  EAX = (~(EAX));
  /* 1115cb54 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115cb57 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115cb5a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1115cb61 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1115cb63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115cb66 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115cb69 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1115cb70 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115cb73 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115cb76 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1115cb79 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1115cb7c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115cb7f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115cb82 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1115cb85 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115cb88 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115cb8b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1115cb8f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115cb91 jne 0x1115cbb0 */
  if (!C.zf) goto L_1115cbb0;
  /* 1115cb93 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115cb96 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115cb99 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1115cb9e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1115cba0 not eax */
  EAX = (~(EAX));
  /* 1115cba2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115cba5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1115cba8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1115cbaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115cbad mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1115cbb0:;
  /* 1115cbb0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1115cbb3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1115cbb6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1115cbb9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1115cbbc mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1115cbbf mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1115cbc2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1115cbc5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1115cbc8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1115cbcb mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1115cbce mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1115cbd1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115cbd4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1115cbd7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1115cbda sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1115cbdd sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115cbe0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1115cbe3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115cbe7 jbe 0x1115cbf0 */
  if ((C.cf||C.zf)) goto L_1115cbf0;
  /* 1115cbe9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1115cbf0:;
  /* 1115cbf0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115cbf3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115cbf6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1115cbf9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1115cbfc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1115cbff mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115cc02 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1115cc05 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1115cc08 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1115cc0b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115cc0e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1115cc11 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115cc14 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1115cc17 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1115cc1a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1115cc1d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1115cc20 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1115cc23 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1115cc26 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1115cc29 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1115cc2c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1115cc2f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115cc32 jne 0x1115ccfe */
  if (!C.zf) goto L_1115ccfe;
  /* 1115cc38 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115cc3c jae 0x1115cc98 */
  if (!C.cf) goto L_1115cc98;
  /* 1115cc3e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115cc41 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115cc44 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1115cc48 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115cc4b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115cc4e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1115cc51 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1115cc53 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115cc56 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115cc59 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1115cc5c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1115cc5e jne 0x1115cc76 */
  if (!C.zf) goto L_1115cc76;
  /* 1115cc60 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1115cc65 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115cc68 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1115cc6a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115cc6d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1115cc6f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1115cc71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115cc74 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1115cc76:;
  /* 1115cc76 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1115cc7b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115cc7e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1115cc80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115cc83 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115cc86 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1115cc8a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1115cc8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115cc8f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115cc92 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1115cc96 jmp 0x1115ccfe */
  goto L_1115ccfe;
L_1115cc98:;
  /* 1115cc98 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115cc9b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115cc9e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1115cca2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115cca5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115cca8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1115ccab add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1115ccad mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115ccb0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115ccb3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1115ccb6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1115ccb8 jne 0x1115ccd5 */
  if (!C.zf) goto L_1115ccd5;
  /* 1115ccba mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115ccbd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115ccc0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1115ccc5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1115ccc7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115ccca mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1115cccd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1115cccf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115ccd2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1115ccd5:;
  /* 1115ccd5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115ccd8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115ccdb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1115cce0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1115cce2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115cce5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115cce8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1115ccef or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1115ccf1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115ccf4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115ccf7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1115ccfe:;
  /* 1115ccfe mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1115cd01 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1115cd04 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1115cd06 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1115cd09 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115cd0c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1115cd0f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1115cd12:;
  /* 1115cd12 mov eax, 1 */
  EAX = (0x1u);
L_1115cd17:;
  /* 1115cd17 mov esp, ebp */
  ESP = (EBP);
  /* 1115cd19 pop ebp */
  EBP = (pop32());
  /* 1115cd1a ret  */
  ESPCHK(0x1115c730u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd20 @ 0x1115cd20 (304 bytes, 79 insns) */
void f_1115cd20(void) {
  FTRACE(0x1115cd20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115cd20 push ebp */
  push32((uint32_t)(EBP));
  /* 1115cd21 mov ebp, esp */
  EBP = (ESP);
  /* 1115cd23 push ecx */
  push32((uint32_t)(ECX));
  /* 1115cd24 cmp dword ptr [0x11185180], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11185180))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115cd2b je 0x1115ce4c */
  if (C.zf) goto L_1115ce4c;
  /* 1115cd31 mov eax, dword ptr [0x11185178] */
  EAX = (r32((uint32_t)(0x11185178)));
  /* 1115cd36 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1115cd39 mov ecx, dword ptr [0x11185180] */
  ECX = (r32((uint32_t)(0x11185180)));
  /* 1115cd3f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1115cd42 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115cd44 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1115cd47 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1115cd4c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1115cd51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115cd54 push eax */
  push32((uint32_t)(EAX));
  /* 1115cd55 call dword ptr [0x11186374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186374))), 0x1115cd5bu);
  /* 1115cd5b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1115cd60 mov ecx, dword ptr [0x11185178] */
  ECX = (r32((uint32_t)(0x11185178)));
  /* 1115cd66 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1115cd68 mov eax, dword ptr [0x11185180] */
  EAX = (r32((uint32_t)(0x11185180)));
  /* 1115cd6d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1115cd70 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1115cd72 mov edx, dword ptr [0x11185180] */
  EDX = (r32((uint32_t)(0x11185180)));
  /* 1115cd78 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1115cd7b mov eax, dword ptr [0x11185180] */
  EAX = (r32((uint32_t)(0x11185180)));
  /* 1115cd80 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1115cd83 mov edx, dword ptr [0x11185178] */
  EDX = (r32((uint32_t)(0x11185178)));
  /* 1115cd89 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1115cd94 mov eax, dword ptr [0x11185180] */
  EAX = (r32((uint32_t)(0x11185180)));
  /* 1115cd99 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1115cd9c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1115cd9f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1115cda2 mov eax, dword ptr [0x11185180] */
  EAX = (r32((uint32_t)(0x11185180)));
  /* 1115cda7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1115cdaa mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1115cdad mov edx, dword ptr [0x11185180] */
  EDX = (r32((uint32_t)(0x11185180)));
  /* 1115cdb3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1115cdb6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1115cdba test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1115cdbc jne 0x1115cdd2 */
  if (!C.zf) goto L_1115cdd2;
  /* 1115cdbe mov edx, dword ptr [0x11185180] */
  EDX = (r32((uint32_t)(0x11185180)));
  /* 1115cdc4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1115cdc7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1115cdc9 mov ecx, dword ptr [0x11185180] */
  ECX = (r32((uint32_t)(0x11185180)));
  /* 1115cdcf mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1115cdd2:;
  /* 1115cdd2 mov edx, dword ptr [0x11185180] */
  EDX = (r32((uint32_t)(0x11185180)));
  /* 1115cdd8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115cddc jne 0x1115ce42 */
  if (!C.zf) goto L_1115ce42;
  /* 1115cdde cmp dword ptr [0x11185184], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11185184))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115cde5 jle 0x1115ce42 */
  if ((C.zf||C.sf!=C.of)) goto L_1115ce42;
  /* 1115cde7 mov eax, dword ptr [0x11185180] */
  EAX = (r32((uint32_t)(0x11185180)));
  /* 1115cdec mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1115cdef push ecx */
  push32((uint32_t)(ECX));
  /* 1115cdf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115cdf2 mov edx, dword ptr [0x1118518c] */
  EDX = (r32((uint32_t)(0x1118518c)));
  /* 1115cdf8 push edx */
  push32((uint32_t)(EDX));
  /* 1115cdf9 call dword ptr [0x11186378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186378))), 0x1115cdffu);
  /* 1115cdff mov eax, dword ptr [0x11185184] */
  EAX = (r32((uint32_t)(0x11185184)));
  /* 1115ce04 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1115ce07 mov ecx, dword ptr [0x11185188] */
  ECX = (r32((uint32_t)(0x11185188)));
  /* 1115ce0d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115ce0f mov edx, dword ptr [0x11185180] */
  EDX = (r32((uint32_t)(0x11185180)));
  /* 1115ce15 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115ce18 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115ce1a push ecx */
  push32((uint32_t)(ECX));
  /* 1115ce1b mov eax, dword ptr [0x11185180] */
  EAX = (r32((uint32_t)(0x11185180)));
  /* 1115ce20 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115ce23 push eax */
  push32((uint32_t)(EAX));
  /* 1115ce24 mov ecx, dword ptr [0x11185180] */
  ECX = (r32((uint32_t)(0x11185180)));
  /* 1115ce2a push ecx */
  push32((uint32_t)(ECX));
  /* 1115ce2b call 0x1115f450 */
  push32(0x1115ce30u); f_1115f450();
  /* 1115ce30 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115ce33 mov edx, dword ptr [0x11185184] */
  EDX = (r32((uint32_t)(0x11185184)));
  /* 1115ce39 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115ce3c mov dword ptr [0x11185184], edx */
  w32((uint32_t)(0x11185184), (EDX));
L_1115ce42:;
  /* 1115ce42 mov dword ptr [0x11185180], 0 */
  w32((uint32_t)(0x11185180), (0x0u));
L_1115ce4c:;
  /* 1115ce4c mov esp, ebp */
  ESP = (EBP);
  /* 1115ce4e pop ebp */
  EBP = (pop32());
  /* 1115ce4f ret  */
  ESPCHK(0x1115cd20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce50 @ 0x1115ce50 (1565 bytes, 343 insns) */
void f_1115ce50(void) {
  FTRACE(0x1115ce50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115ce50 push ebp */
  push32((uint32_t)(EBP));
  /* 1115ce51 mov ebp, esp */
  EBP = (ESP);
  /* 1115ce53 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115ce59 mov eax, dword ptr [0x11185184] */
  EAX = (r32((uint32_t)(0x11185184)));
  /* 1115ce5e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1115ce61 push eax */
  push32((uint32_t)(EAX));
  /* 1115ce62 mov ecx, dword ptr [0x11185188] */
  ECX = (r32((uint32_t)(0x11185188)));
  /* 1115ce68 push ecx */
  push32((uint32_t)(ECX));
  /* 1115ce69 call dword ptr [0x111863a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863a0))), 0x1115ce6fu);
  /* 1115ce6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115ce71 je 0x1115ce7b */
  if (C.zf) goto L_1115ce7b;
  /* 1115ce73 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1115ce76 jmp 0x1115d469 */
  goto L_1115d469;
L_1115ce7b:;
  /* 1115ce7b mov edx, dword ptr [0x11185188] */
  EDX = (r32((uint32_t)(0x11185188)));
  /* 1115ce81 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 1115ce87 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 1115ce91 jmp 0x1115cea2 */
  goto L_1115cea2;
L_1115ce93:;
  /* 1115ce93 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 1115ce99 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115ce9c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_1115cea2:;
  /* 1115cea2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 1115cea8 cmp ecx, dword ptr [0x11185184] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11185184))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115ceae jge 0x1115d467 */
  if ((C.sf==C.of)) goto L_1115d467;
  /* 1115ceb4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1115ceba mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1115cebd mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 1115cec3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1115cec8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1115cece push ecx */
  push32((uint32_t)(ECX));
  /* 1115cecf call dword ptr [0x111863a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863a0))), 0x1115ced5u);
  /* 1115ced5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115ced7 je 0x1115cee3 */
  if (C.zf) goto L_1115cee3;
  /* 1115ced9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1115cede jmp 0x1115d469 */
  goto L_1115d469;
L_1115cee3:;
  /* 1115cee3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1115cee9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1115ceec mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 1115cef2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1115cef8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115cefe mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1115cf01 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1115cf07 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1115cf0a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1115cf0d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 1115cf17 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 1115cf21 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1115cf28 jmp 0x1115cf33 */
  goto L_1115cf33;
L_1115cf2a:;
  /* 1115cf2a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1115cf2d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115cf30 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1115cf33:;
  /* 1115cf33 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115cf37 jge 0x1115d42b */
  if ((C.sf==C.of)) goto L_1115d42b;
  /* 1115cf3d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 1115cf47 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 1115cf51 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 1115cf5b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 1115cf65 jmp 0x1115cf76 */
  goto L_1115cf76;
L_1115cf67:;
  /* 1115cf67 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1115cf6d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115cf70 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_1115cf76:;
  /* 1115cf76 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115cf7d jge 0x1115cf92 */
  if ((C.sf==C.of)) goto L_1115cf92;
  /* 1115cf7f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1115cf85 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 1115cf90 jmp 0x1115cf67 */
  goto L_1115cf67;
L_1115cf92:;
  /* 1115cf92 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115cf96 jl 0x1115d3cd */
  if ((C.sf!=C.of)) goto L_1115d3cd;
  /* 1115cf9c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1115cfa1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 1115cfa7 push ecx */
  push32((uint32_t)(ECX));
  /* 1115cfa8 call dword ptr [0x111863a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863a0))), 0x1115cfaeu);
  /* 1115cfae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115cfb0 je 0x1115cfbc */
  if (C.zf) goto L_1115cfbc;
  /* 1115cfb2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 1115cfb7 jmp 0x1115d469 */
  goto L_1115d469;
L_1115cfbc:;
  /* 1115cfbc mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1115cfc2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1115cfc5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1115cfcf jmp 0x1115cfe0 */
  goto L_1115cfe0;
L_1115cfd1:;
  /* 1115cfd1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 1115cfd7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115cfda mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_1115cfe0:;
  /* 1115cfe0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115cfe7 jge 0x1115d164 */
  if ((C.sf==C.of)) goto L_1115d164;
  /* 1115cfed mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115cff0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115cff3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 1115cff9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1115cfff add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115d005 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 1115d00b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1115d011 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d015 jne 0x1115d022 */
  if (!C.zf) goto L_1115d022;
  /* 1115d017 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 1115d01d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d020 je 0x1115d02c */
  if (C.zf) goto L_1115d02c;
L_1115d022:;
  /* 1115d022 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 1115d027 jmp 0x1115d469 */
  goto L_1115d469;
L_1115d02c:;
  /* 1115d02c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1115d032 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1115d034 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1115d03a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 1115d040 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 1115d046 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 1115d04c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1115d04f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115d051 je 0x1115d089 */
  if (C.zf) goto L_1115d089;
  /* 1115d053 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1115d059 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115d05c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1115d062 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d06c jle 0x1115d078 */
  if ((C.zf||C.sf!=C.of)) goto L_1115d078;
  /* 1115d06e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 1115d073 jmp 0x1115d469 */
  goto L_1115d469;
L_1115d078:;
  /* 1115d078 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1115d07e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115d081 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 1115d087 jmp 0x1115d0cb */
  goto L_1115d0cb;
L_1115d089:;
  /* 1115d089 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1115d08f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1115d092 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115d095 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1115d09b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d0a2 jle 0x1115d0ae */
  if ((C.zf||C.sf!=C.of)) goto L_1115d0ae;
  /* 1115d0a4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1115d0ae:;
  /* 1115d0ae mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1115d0b4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1115d0bb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115d0be mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1115d0c4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1115d0cb:;
  /* 1115d0cb cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d0d2 jl 0x1115d0ed */
  if ((C.sf!=C.of)) goto L_1115d0ed;
  /* 1115d0d4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1115d0da and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1115d0dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115d0df jne 0x1115d0ed */
  if (!C.zf) goto L_1115d0ed;
  /* 1115d0e1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d0eb jle 0x1115d0f7 */
  if ((C.zf||C.sf!=C.of)) goto L_1115d0f7;
L_1115d0ed:;
  /* 1115d0ed mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 1115d0f2 jmp 0x1115d469 */
  goto L_1115d469;
L_1115d0f7:;
  /* 1115d0f7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1115d0fd add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115d103 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1115d106 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d10c je 0x1115d118 */
  if (C.zf) goto L_1115d118;
  /* 1115d10e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1115d113 jmp 0x1115d469 */
  goto L_1115d469;
L_1115d118:;
  /* 1115d118 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1115d11e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115d124 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1115d12a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1115d130 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d136 jb 0x1115d02c */
  if (C.cf) goto L_1115d02c;
  /* 1115d13c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1115d142 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d148 je 0x1115d154 */
  if (C.zf) goto L_1115d154;
  /* 1115d14a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1115d14f jmp 0x1115d469 */
  goto L_1115d469;
L_1115d154:;
  /* 1115d154 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115d157 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115d15c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1115d15f jmp 0x1115cfd1 */
  goto L_1115cfd1;
L_1115d164:;
  /* 1115d164 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115d167 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1115d169 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d16f je 0x1115d17b */
  if (C.zf) goto L_1115d17b;
  /* 1115d171 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 1115d176 jmp 0x1115d469 */
  goto L_1115d469;
L_1115d17b:;
  /* 1115d17b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115d17e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 1115d184 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1115d18b jmp 0x1115d196 */
  goto L_1115d196;
L_1115d18d:;
  /* 1115d18d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1115d190 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115d193 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1115d196:;
  /* 1115d196 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d19a jge 0x1115d3cd */
  if ((C.sf==C.of)) goto L_1115d3cd;
  /* 1115d1a0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1115d1aa mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1115d1b0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_1115d1b6:;
  /* 1115d1b6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1115d1bc mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1115d1bf mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 1115d1c5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1115d1cb cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d1d1 je 0x1115d2fa */
  if (C.zf) goto L_1115d2fa;
  /* 1115d1d7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1115d1da mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1115d1e0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d1e7 je 0x1115d2fa */
  if (C.zf) goto L_1115d2fa;
  /* 1115d1ed mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1115d1f3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d1f9 jb 0x1115d20e */
  if (C.cf) goto L_1115d20e;
  /* 1115d1fb mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 1115d201 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115d206 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d20c jb 0x1115d218 */
  if (C.cf) goto L_1115d218;
L_1115d20e:;
  /* 1115d20e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 1115d213 jmp 0x1115d469 */
  goto L_1115d469;
L_1115d218:;
  /* 1115d218 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1115d21e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 1115d224 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1115d22a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 1115d230 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115d233 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1115d236 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115d239 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115d23e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_1115d244:;
  /* 1115d244 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115d247 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d24d je 0x1115d26e */
  if (C.zf) goto L_1115d26e;
  /* 1115d24f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115d252 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d258 jne 0x1115d25c */
  if (!C.zf) goto L_1115d25c;
  /* 1115d25a jmp 0x1115d26e */
  goto L_1115d26e;
L_1115d25c:;
  /* 1115d25c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115d25f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1115d261 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 1115d264 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115d267 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115d269 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1115d26c jmp 0x1115d244 */
  goto L_1115d244;
L_1115d26e:;
  /* 1115d26e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115d271 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d277 jne 0x1115d283 */
  if (!C.zf) goto L_1115d283;
  /* 1115d279 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1115d27e jmp 0x1115d469 */
  goto L_1115d469;
L_1115d283:;
  /* 1115d283 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1115d289 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1115d28b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1115d28e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115d291 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1115d297 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d29e jle 0x1115d2aa */
  if ((C.zf||C.sf!=C.of)) goto L_1115d2aa;
  /* 1115d2a0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1115d2aa:;
  /* 1115d2aa mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1115d2b0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d2b3 je 0x1115d2bf */
  if (C.zf) goto L_1115d2bf;
  /* 1115d2b5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1115d2ba jmp 0x1115d469 */
  goto L_1115d469;
L_1115d2bf:;
  /* 1115d2bf mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1115d2c5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1115d2c8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d2ce je 0x1115d2da */
  if (C.zf) goto L_1115d2da;
  /* 1115d2d0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 1115d2d5 jmp 0x1115d469 */
  goto L_1115d469;
L_1115d2da:;
  /* 1115d2da mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1115d2e0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1115d2e6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1115d2ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115d2ef mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 1115d2f5 jmp 0x1115d1b6 */
  goto L_1115d1b6;
L_1115d2fa:;
  /* 1115d2fa cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d301 je 0x1115d371 */
  if (C.zf) goto L_1115d371;
  /* 1115d303 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d307 jge 0x1115d33b */
  if ((C.sf==C.of)) goto L_1115d33b;
  /* 1115d309 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1115d30e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1115d311 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1115d313 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1115d319 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1115d31b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 1115d321 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1115d326 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1115d329 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1115d32b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1115d331 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1115d333 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 1115d339 jmp 0x1115d371 */
  goto L_1115d371;
L_1115d33b:;
  /* 1115d33b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1115d33e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115d341 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1115d346 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1115d348 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1115d34e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1115d350 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 1115d356 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1115d359 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115d35c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1115d361 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1115d363 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 1115d369 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1115d36b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_1115d371:;
  /* 1115d371 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1115d377 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1115d37a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d380 jne 0x1115d394 */
  if (!C.zf) goto L_1115d394;
  /* 1115d382 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1115d385 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1115d38b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d392 je 0x1115d39e */
  if (C.zf) goto L_1115d39e;
L_1115d394:;
  /* 1115d394 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 1115d399 jmp 0x1115d469 */
  goto L_1115d469;
L_1115d39e:;
  /* 1115d39e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1115d3a4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1115d3a7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d3ad je 0x1115d3b9 */
  if (C.zf) goto L_1115d3b9;
  /* 1115d3af mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 1115d3b4 jmp 0x1115d469 */
  goto L_1115d469;
L_1115d3b9:;
  /* 1115d3b9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1115d3bf add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115d3c2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 1115d3c8 jmp 0x1115d18d */
  goto L_1115d18d;
L_1115d3cd:;
  /* 1115d3cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1115d3d0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1115d3d6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1115d3dc cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d3e0 jne 0x1115d3fa */
  if (!C.zf) goto L_1115d3fa;
  /* 1115d3e2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1115d3e5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1115d3eb mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 1115d3f1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d3f8 je 0x1115d401 */
  if (C.zf) goto L_1115d401;
L_1115d3fa:;
  /* 1115d3fa mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1115d3ff jmp 0x1115d469 */
  goto L_1115d469;
L_1115d401:;
  /* 1115d401 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1115d407 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115d40d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 1115d413 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115d416 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115d41b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1115d41e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115d421 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1115d423 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1115d426 jmp 0x1115cf2a */
  goto L_1115cf2a;
L_1115d42b:;
  /* 1115d42b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1115d431 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1115d437 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d439 jne 0x1115d44c */
  if (!C.zf) goto L_1115d44c;
  /* 1115d43b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1115d441 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 1115d447 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d44a je 0x1115d453 */
  if (C.zf) goto L_1115d453;
L_1115d44c:;
  /* 1115d44c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 1115d451 jmp 0x1115d469 */
  goto L_1115d469;
L_1115d453:;
  /* 1115d453 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1115d459 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115d45c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 1115d462 jmp 0x1115ce93 */
  goto L_1115ce93;
L_1115d467:;
  /* 1115d467 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1115d469:;
  /* 1115d469 mov esp, ebp */
  ESP = (EBP);
  /* 1115d46b pop ebp */
  EBP = (pop32());
  /* 1115d46c ret  */
  ESPCHK(0x1115ce50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d470 @ 0x1115d470 (250 bytes, 92 insns) */
void f_1115d470(void) {
  FTRACE(0x1115d470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115d470 push ebp */
  push32((uint32_t)(EBP));
  /* 1115d471 mov ebp, esp */
  EBP = (ESP);
  /* 1115d473 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115d476 push ebx */
  push32((uint32_t)(EBX));
  /* 1115d477 push esi */
  push32((uint32_t)(ESI));
  /* 1115d478 push edi */
  push32((uint32_t)(EDI));
  /* 1115d479 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1115d47c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1115d47f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1115d482 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1115d485:;
  /* 1115d485 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d489 jne 0x1115d4a9 */
  if (!C.zf) goto L_1115d4a9;
  /* 1115d48b push 0x1117f2e0 */
  push32((uint32_t)(0x1117f2e0u));
  /* 1115d490 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115d492 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1115d494 push 0x1117f2d4 */
  push32((uint32_t)(0x1117f2d4u));
  /* 1115d499 push 2 */
  push32((uint32_t)(0x2u));
  /* 1115d49b call 0x11156620 */
  push32(0x1115d4a0u); f_11156620();
  /* 1115d4a0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115d4a3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d4a6 jne 0x1115d4a9 */
  if (!C.zf) goto L_1115d4a9;
  /* 1115d4a8 int3  */
  x86_unimpl("int3 @ 0x1115d4a8");
L_1115d4a9:;
  /* 1115d4a9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1115d4ab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115d4ad jne 0x1115d485 */
  if (!C.zf) goto L_1115d485;
L_1115d4af:;
  /* 1115d4af cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d4b3 jne 0x1115d4d3 */
  if (!C.zf) goto L_1115d4d3;
  /* 1115d4b5 push 0x1117f2c4 */
  push32((uint32_t)(0x1117f2c4u));
  /* 1115d4ba push 0 */
  push32((uint32_t)(0x0u));
  /* 1115d4bc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1115d4be push 0x1117f2d4 */
  push32((uint32_t)(0x1117f2d4u));
  /* 1115d4c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1115d4c5 call 0x11156620 */
  push32(0x1115d4cau); f_11156620();
  /* 1115d4ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115d4cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d4d0 jne 0x1115d4d3 */
  if (!C.zf) goto L_1115d4d3;
  /* 1115d4d2 int3  */
  x86_unimpl("int3 @ 0x1115d4d2");
L_1115d4d3:;
  /* 1115d4d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115d4d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115d4d7 jne 0x1115d4af */
  if (!C.zf) goto L_1115d4af;
  /* 1115d4d9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115d4dc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 1115d4e3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115d4e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115d4e9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1115d4ec mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115d4ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115d4f2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1115d4f4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115d4f7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 1115d4fe mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1115d501 push ecx */
  push32((uint32_t)(ECX));
  /* 1115d502 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115d505 push edx */
  push32((uint32_t)(EDX));
  /* 1115d506 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115d509 push eax */
  push32((uint32_t)(EAX));
  /* 1115d50a call 0x1115e4f0 */
  push32(0x1115d50fu); f_1115e4f0();
  /* 1115d50f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115d512 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1115d515 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115d518 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1115d51b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115d51e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115d521 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1115d524 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115d527 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d52b jl 0x1115d54f */
  if ((C.sf!=C.of)) goto L_1115d54f;
  /* 1115d52d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115d530 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1115d532 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1115d535 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1115d537 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1115d53d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1115d540 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115d543 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1115d545 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115d548 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115d54b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1115d54d jmp 0x1115d560 */
  goto L_1115d560;
L_1115d54f:;
  /* 1115d54f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115d552 push edx */
  push32((uint32_t)(EDX));
  /* 1115d553 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115d555 call 0x1115e270 */
  push32(0x1115d55au); f_1115e270();
  /* 1115d55a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115d55d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1115d560:;
  /* 1115d560 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1115d563 pop edi */
  EDI = (pop32());
  /* 1115d564 pop esi */
  ESI = (pop32());
  /* 1115d565 pop ebx */
  EBX = (pop32());
  /* 1115d566 mov esp, ebp */
  ESP = (EBP);
  /* 1115d568 pop ebp */
  EBP = (pop32());
  /* 1115d569 ret  */
  ESPCHK(0x1115d470u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d570 @ 0x1115d570 (183 bytes, 58 insns) */
void f_1115d570(void) {
  FTRACE(0x1115d570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115d570 push ebp */
  push32((uint32_t)(EBP));
  /* 1115d571 mov ebp, esp */
  EBP = (ESP);
  /* 1115d573 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115d576 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115d579 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115d57c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d581 ja 0x1115d59a */
  if ((!C.cf&&!C.zf)) goto L_1115d59a;
  /* 1115d583 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115d586 mov edx, dword ptr [0x11181c98] */
  EDX = (r32((uint32_t)(0x11181c98)));
  /* 1115d58c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115d58e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1115d592 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1115d595 jmp 0x1115d623 */
  goto L_1115d623;
L_1115d59a:;
  /* 1115d59a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115d59d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1115d5a0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1115d5a6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1115d5ac mov edx, dword ptr [0x11181c98] */
  EDX = (r32((uint32_t)(0x11181c98)));
  /* 1115d5b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115d5b4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1115d5b8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1115d5bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115d5bf je 0x1115d5e3 */
  if (C.zf) goto L_1115d5e3;
  /* 1115d5c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115d5c4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1115d5c7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1115d5cd mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1115d5d0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 1115d5d3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 1115d5d6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1115d5da mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 1115d5e1 jmp 0x1115d5f4 */
  goto L_1115d5f4;
L_1115d5e3:;
  /* 1115d5e3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1115d5e6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1115d5e9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1115d5ed mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_1115d5f4:;
  /* 1115d5f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1115d5f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115d5f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115d5fa lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1115d5fd push ecx */
  push32((uint32_t)(ECX));
  /* 1115d5fe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115d601 push edx */
  push32((uint32_t)(EDX));
  /* 1115d602 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1115d605 push eax */
  push32((uint32_t)(EAX));
  /* 1115d606 push 1 */
  push32((uint32_t)(0x1u));
  /* 1115d608 call 0x1115f790 */
  push32(0x1115d60du); f_1115f790();
  /* 1115d60d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115d610 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115d612 jne 0x1115d618 */
  if (!C.zf) goto L_1115d618;
  /* 1115d614 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115d616 jmp 0x1115d623 */
  goto L_1115d623;
L_1115d618:;
  /* 1115d618 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115d61b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1115d620 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_1115d623:;
  /* 1115d623 mov esp, ebp */
  ESP = (EBP);
  /* 1115d625 pop ebp */
  EBP = (pop32());
  /* 1115d626 ret  */
  ESPCHK(0x1115d570u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d630 @ 0x1115d630 (836 bytes, 238 insns) */
void f_1115d630(void) {
  FTRACE(0x1115d630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115d630 push ebp */
  push32((uint32_t)(EBP));
  /* 1115d631 mov ebp, esp */
  EBP = (ESP);
  /* 1115d633 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115d636 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1115d638 call 0x1115af60 */
  push32(0x1115d63du); f_1115af60();
  /* 1115d63d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115d640 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115d643 push eax */
  push32((uint32_t)(EAX));
  /* 1115d644 call 0x1115d980 */
  push32(0x1115d649u); f_1115d980();
  /* 1115d649 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115d64c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1115d64f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115d652 cmp ecx, dword ptr [0x11184ec4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11184ec4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d658 jne 0x1115d66b */
  if (!C.zf) goto L_1115d66b;
  /* 1115d65a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1115d65c call 0x1115b000 */
  push32(0x1115d661u); f_1115b000();
  /* 1115d661 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115d664 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115d666 jmp 0x1115d970 */
  goto L_1115d970;
L_1115d66b:;
  /* 1115d66b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d66f jne 0x1115d68c */
  if (!C.zf) goto L_1115d68c;
  /* 1115d671 call 0x1115da60 */
  push32(0x1115d676u); f_1115da60();
  /* 1115d676 call 0x1115dae0 */
  push32(0x1115d67bu); f_1115dae0();
  /* 1115d67b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1115d67d call 0x1115b000 */
  push32(0x1115d682u); f_1115b000();
  /* 1115d682 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115d685 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115d687 jmp 0x1115d970 */
  goto L_1115d970;
L_1115d68c:;
  /* 1115d68c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1115d693 jmp 0x1115d69e */
  goto L_1115d69e;
L_1115d695:;
  /* 1115d695 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115d698 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115d69b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1115d69e:;
  /* 1115d69e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d6a2 jae 0x1115d7ef */
  if (!C.cf) goto L_1115d7ef;
  /* 1115d6a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115d6ab imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1115d6ae mov ecx, dword ptr [eax + 0x11181eb8] */
  ECX = (r32((uint32_t)(EAX + 0x11181eb8)));
  /* 1115d6b4 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d6b7 jne 0x1115d7ea */
  if (!C.zf) goto L_1115d7ea;
  /* 1115d6bd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1115d6c4 jmp 0x1115d6cf */
  goto L_1115d6cf;
L_1115d6c6:;
  /* 1115d6c6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115d6c9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115d6cc mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1115d6cf:;
  /* 1115d6cf cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d6d6 jae 0x1115d6e4 */
  if (!C.cf) goto L_1115d6e4;
  /* 1115d6d8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115d6db mov byte ptr [eax + 0x11185060], 0 */
  w8((uint32_t)(EAX + 0x11185060), (0x0u));
  /* 1115d6e2 jmp 0x1115d6c6 */
  goto L_1115d6c6;
L_1115d6e4:;
  /* 1115d6e4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1115d6eb jmp 0x1115d6f6 */
  goto L_1115d6f6;
L_1115d6ed:;
  /* 1115d6ed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1115d6f0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115d6f3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1115d6f6:;
  /* 1115d6f6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d6fa jae 0x1115d777 */
  if (!C.cf) goto L_1115d777;
  /* 1115d6fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115d6ff imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1115d702 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1115d705 lea ecx, [edx + eax*8 + 0x11181ec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x11181ec8));
  /* 1115d70c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1115d70f jmp 0x1115d71a */
  goto L_1115d71a;
L_1115d711:;
  /* 1115d711 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115d714 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115d717 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1115d71a:;
  /* 1115d71a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115d71d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1115d71f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1115d721 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1115d723 je 0x1115d772 */
  if (C.zf) goto L_1115d772;
  /* 1115d725 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115d728 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115d72a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1115d72d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115d72f je 0x1115d772 */
  if (C.zf) goto L_1115d772;
  /* 1115d731 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115d734 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1115d736 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1115d738 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1115d73b jmp 0x1115d746 */
  goto L_1115d746;
L_1115d73d:;
  /* 1115d73d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115d740 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115d743 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1115d746:;
  /* 1115d746 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115d749 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1115d74b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1115d74e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d751 ja 0x1115d770 */
  if ((!C.cf&&!C.zf)) goto L_1115d770;
  /* 1115d753 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115d756 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1115d759 mov dl, byte ptr [eax + 0x11185061] */
  DL = (r8((uint32_t)(EAX + 0x11185061)));
  /* 1115d75f or dl, byte ptr [ecx + 0x11181eb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x11181eb0))); DL = (_r); fl_logic(_r,8); }
  /* 1115d765 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115d768 mov byte ptr [eax + 0x11185061], dl */
  w8((uint32_t)(EAX + 0x11185061), (DL));
  /* 1115d76e jmp 0x1115d73d */
  goto L_1115d73d;
L_1115d770:;
  /* 1115d770 jmp 0x1115d711 */
  goto L_1115d711;
L_1115d772:;
  /* 1115d772 jmp 0x1115d6ed */
  goto L_1115d6ed;
L_1115d777:;
  /* 1115d777 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115d77a mov dword ptr [0x11184ec4], ecx */
  w32((uint32_t)(0x11184ec4), (ECX));
  /* 1115d780 mov dword ptr [0x11184f4c], 1 */
  w32((uint32_t)(0x11184f4c), (0x1u));
  /* 1115d78a mov edx, dword ptr [0x11184ec4] */
  EDX = (r32((uint32_t)(0x11184ec4)));
  /* 1115d790 push edx */
  push32((uint32_t)(EDX));
  /* 1115d791 call 0x1115d9e0 */
  push32(0x1115d796u); f_1115d9e0();
  /* 1115d796 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115d799 mov dword ptr [0x11185164], eax */
  w32((uint32_t)(0x11185164), (EAX));
  /* 1115d79e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1115d7a5 jmp 0x1115d7b0 */
  goto L_1115d7b0;
L_1115d7a7:;
  /* 1115d7a7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1115d7aa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115d7ad mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1115d7b0:;
  /* 1115d7b0 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d7b4 jae 0x1115d7d4 */
  if (!C.cf) goto L_1115d7d4;
  /* 1115d7b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115d7b9 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1115d7bc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1115d7bf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1115d7c2 mov cx, word ptr [ecx + eax*2 + 0x11181ebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x11181ebc)));
  /* 1115d7ca mov word ptr [edx*2 + 0x11184f40], cx */
  w16((uint32_t)(EDX*2 + 0x11184f40), (CX));
  /* 1115d7d2 jmp 0x1115d7a7 */
  goto L_1115d7a7;
L_1115d7d4:;
  /* 1115d7d4 call 0x1115dae0 */
  push32(0x1115d7d9u); f_1115dae0();
  /* 1115d7d9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1115d7db call 0x1115b000 */
  push32(0x1115d7e0u); f_1115b000();
  /* 1115d7e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115d7e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115d7e5 jmp 0x1115d970 */
  goto L_1115d970;
L_1115d7ea:;
  /* 1115d7ea jmp 0x1115d695 */
  goto L_1115d695;
L_1115d7ef:;
  /* 1115d7ef lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 1115d7f2 push edx */
  push32((uint32_t)(EDX));
  /* 1115d7f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115d7f6 push eax */
  push32((uint32_t)(EAX));
  /* 1115d7f7 call dword ptr [0x1118634c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118634c))), 0x1115d7fdu);
  /* 1115d7fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d800 jne 0x1115d942 */
  if (!C.zf) goto L_1115d942;
  /* 1115d806 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1115d80d jmp 0x1115d818 */
  goto L_1115d818;
L_1115d80f:;
  /* 1115d80f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115d812 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115d815 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1115d818:;
  /* 1115d818 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d81f jae 0x1115d82d */
  if (!C.cf) goto L_1115d82d;
  /* 1115d821 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115d824 mov byte ptr [edx + 0x11185060], 0 */
  w8((uint32_t)(EDX + 0x11185060), (0x0u));
  /* 1115d82b jmp 0x1115d80f */
  goto L_1115d80f;
L_1115d82d:;
  /* 1115d82d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115d830 mov dword ptr [0x11184ec4], eax */
  w32((uint32_t)(0x11184ec4), (EAX));
  /* 1115d835 mov dword ptr [0x11185164], 0 */
  w32((uint32_t)(0x11185164), (0x0u));
  /* 1115d83f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d843 jbe 0x1115d8fe */
  if ((C.cf||C.zf)) goto L_1115d8fe;
  /* 1115d849 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 1115d84c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1115d84f jmp 0x1115d85a */
  goto L_1115d85a;
L_1115d851:;
  /* 1115d851 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1115d854 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115d857 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1115d85a:;
  /* 1115d85a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1115d85d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1115d85f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1115d861 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1115d863 je 0x1115d8ac */
  if (C.zf) goto L_1115d8ac;
  /* 1115d865 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1115d868 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115d86a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1115d86d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115d86f je 0x1115d8ac */
  if (C.zf) goto L_1115d8ac;
  /* 1115d871 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1115d874 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1115d876 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1115d878 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1115d87b jmp 0x1115d886 */
  goto L_1115d886;
L_1115d87d:;
  /* 1115d87d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115d880 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115d883 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1115d886:;
  /* 1115d886 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1115d889 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1115d88b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1115d88e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d891 ja 0x1115d8aa */
  if ((!C.cf&&!C.zf)) goto L_1115d8aa;
  /* 1115d893 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115d896 mov cl, byte ptr [eax + 0x11185061] */
  CL = (r8((uint32_t)(EAX + 0x11185061)));
  /* 1115d89c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1115d89f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115d8a2 mov byte ptr [edx + 0x11185061], cl */
  w8((uint32_t)(EDX + 0x11185061), (CL));
  /* 1115d8a8 jmp 0x1115d87d */
  goto L_1115d87d;
L_1115d8aa:;
  /* 1115d8aa jmp 0x1115d851 */
  goto L_1115d851;
L_1115d8ac:;
  /* 1115d8ac mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1115d8b3 jmp 0x1115d8be */
  goto L_1115d8be;
L_1115d8b5:;
  /* 1115d8b5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115d8b8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115d8bb mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1115d8be:;
  /* 1115d8be cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d8c5 jae 0x1115d8de */
  if (!C.cf) goto L_1115d8de;
  /* 1115d8c7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115d8ca mov dl, byte ptr [ecx + 0x11185061] */
  DL = (r8((uint32_t)(ECX + 0x11185061)));
  /* 1115d8d0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1115d8d3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115d8d6 mov byte ptr [eax + 0x11185061], dl */
  w8((uint32_t)(EAX + 0x11185061), (DL));
  /* 1115d8dc jmp 0x1115d8b5 */
  goto L_1115d8b5;
L_1115d8de:;
  /* 1115d8de mov ecx, dword ptr [0x11184ec4] */
  ECX = (r32((uint32_t)(0x11184ec4)));
  /* 1115d8e4 push ecx */
  push32((uint32_t)(ECX));
  /* 1115d8e5 call 0x1115d9e0 */
  push32(0x1115d8eau); f_1115d9e0();
  /* 1115d8ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115d8ed mov dword ptr [0x11185164], eax */
  w32((uint32_t)(0x11185164), (EAX));
  /* 1115d8f2 mov dword ptr [0x11184f4c], 1 */
  w32((uint32_t)(0x11184f4c), (0x1u));
  /* 1115d8fc jmp 0x1115d908 */
  goto L_1115d908;
L_1115d8fe:;
  /* 1115d8fe mov dword ptr [0x11184f4c], 0 */
  w32((uint32_t)(0x11184f4c), (0x0u));
L_1115d908:;
  /* 1115d908 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1115d90f jmp 0x1115d91a */
  goto L_1115d91a;
L_1115d911:;
  /* 1115d911 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1115d914 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115d917 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1115d91a:;
  /* 1115d91a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d91e jae 0x1115d92f */
  if (!C.cf) goto L_1115d92f;
  /* 1115d920 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1115d923 mov word ptr [eax*2 + 0x11184f40], 0 */
  w16((uint32_t)(EAX*2 + 0x11184f40), (0x0u));
  /* 1115d92d jmp 0x1115d911 */
  goto L_1115d911;
L_1115d92f:;
  /* 1115d92f call 0x1115dae0 */
  push32(0x1115d934u); f_1115dae0();
  /* 1115d934 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1115d936 call 0x1115b000 */
  push32(0x1115d93bu); f_1115b000();
  /* 1115d93b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115d93e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115d940 jmp 0x1115d970 */
  goto L_1115d970;
L_1115d942:;
  /* 1115d942 cmp dword ptr [0x111839e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111839e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d949 je 0x1115d963 */
  if (C.zf) goto L_1115d963;
  /* 1115d94b call 0x1115da60 */
  push32(0x1115d950u); f_1115da60();
  /* 1115d950 call 0x1115dae0 */
  push32(0x1115d955u); f_1115dae0();
  /* 1115d955 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1115d957 call 0x1115b000 */
  push32(0x1115d95cu); f_1115b000();
  /* 1115d95c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115d95f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115d961 jmp 0x1115d970 */
  goto L_1115d970;
L_1115d963:;
  /* 1115d963 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1115d965 call 0x1115b000 */
  push32(0x1115d96au); f_1115b000();
  /* 1115d96a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115d96d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1115d970:;
  /* 1115d970 mov esp, ebp */
  ESP = (EBP);
  /* 1115d972 pop ebp */
  EBP = (pop32());
  /* 1115d973 ret  */
  ESPCHK(0x1115d630u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x1115d980 (89 bytes, 21 insns) */
void f_1115d980(void) {
  FTRACE(0x1115d980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115d980 push ebp */
  push32((uint32_t)(EBP));
  /* 1115d981 mov ebp, esp */
  EBP = (ESP);
  /* 1115d983 mov dword ptr [0x111839e0], 0 */
  w32((uint32_t)(0x111839e0), (0x0u));
  /* 1115d98d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d991 jne 0x1115d9a5 */
  if (!C.zf) goto L_1115d9a5;
  /* 1115d993 mov dword ptr [0x111839e0], 1 */
  w32((uint32_t)(0x111839e0), (0x1u));
  /* 1115d99d call dword ptr [0x11186344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186344))), 0x1115d9a3u);
  /* 1115d9a3 jmp 0x1115d9d7 */
  goto L_1115d9d7;
L_1115d9a5:;
  /* 1115d9a5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d9a9 jne 0x1115d9bd */
  if (!C.zf) goto L_1115d9bd;
  /* 1115d9ab mov dword ptr [0x111839e0], 1 */
  w32((uint32_t)(0x111839e0), (0x1u));
  /* 1115d9b5 call dword ptr [0x11186348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186348))), 0x1115d9bbu);
  /* 1115d9bb jmp 0x1115d9d7 */
  goto L_1115d9d7;
L_1115d9bd:;
  /* 1115d9bd cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d9c1 jne 0x1115d9d4 */
  if (!C.zf) goto L_1115d9d4;
  /* 1115d9c3 mov dword ptr [0x111839e0], 1 */
  w32((uint32_t)(0x111839e0), (0x1u));
  /* 1115d9cd mov eax, dword ptr [0x11183a00] */
  EAX = (r32((uint32_t)(0x11183a00)));
  /* 1115d9d2 jmp 0x1115d9d7 */
  goto L_1115d9d7;
L_1115d9d4:;
  /* 1115d9d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1115d9d7:;
  /* 1115d9d7 pop ebp */
  EBP = (pop32());
  /* 1115d9d8 ret  */
  ESPCHK(0x1115d980u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d9e0 @ 0x1115d9e0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_1115d9e0(void) {
  FTRACE(0x1115d9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115d9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1115d9e1 mov ebp, esp */
  EBP = (ESP);
  /* 1115d9e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1115d9e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115d9e7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1115d9ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115d9ed sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115d9f3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1115d9f6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115d9fa ja 0x1115da2a */
  if ((!C.cf&&!C.zf)) goto L_1115da2a;
  /* 1115d9fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115d9ff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1115da01 mov dl, byte ptr [eax + 0x1115da44] */
  DL = (r8((uint32_t)(EAX + 0x1115da44)));
  /* 1115da07 jmp dword ptr [edx*4 + 0x1115da30] */
  switch (EDX) {
    case 0: goto L_1115da0e;
    case 1: goto L_1115da15;
    case 2: goto L_1115da1c;
    case 3: goto L_1115da23;
    case 4: goto L_1115da2a;
    default: x86_unimpl("switch@0x1115da07 out of table"); return;
  }
L_1115da0e:;
  /* 1115da0e mov eax, 0x411 */
  EAX = (0x411u);
  /* 1115da13 jmp 0x1115da2c */
  goto L_1115da2c;
L_1115da15:;
  /* 1115da15 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1115da1a jmp 0x1115da2c */
  goto L_1115da2c;
L_1115da1c:;
  /* 1115da1c mov eax, 0x412 */
  EAX = (0x412u);
  /* 1115da21 jmp 0x1115da2c */
  goto L_1115da2c;
L_1115da23:;
  /* 1115da23 mov eax, 0x404 */
  EAX = (0x404u);
  /* 1115da28 jmp 0x1115da2c */
  goto L_1115da2c;
L_1115da2a:;
  /* 1115da2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1115da2c:;
  /* 1115da2c mov esp, ebp */
  ESP = (EBP);
  /* 1115da2e pop ebp */
  EBP = (pop32());
  /* 1115da2f ret  */
  ESPCHK(0x1115d9e0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x1115da60 (116 bytes, 29 insns) */
void f_1115da60(void) {
  FTRACE(0x1115da60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115da60 push ebp */
  push32((uint32_t)(EBP));
  /* 1115da61 mov ebp, esp */
  EBP = (ESP);
  /* 1115da63 push ecx */
  push32((uint32_t)(ECX));
  /* 1115da64 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1115da6b jmp 0x1115da76 */
  goto L_1115da76;
L_1115da6d:;
  /* 1115da6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115da70 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115da73 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1115da76:;
  /* 1115da76 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115da7d jge 0x1115da8b */
  if ((C.sf==C.of)) goto L_1115da8b;
  /* 1115da7f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115da82 mov byte ptr [ecx + 0x11185060], 0 */
  w8((uint32_t)(ECX + 0x11185060), (0x0u));
  /* 1115da89 jmp 0x1115da6d */
  goto L_1115da6d;
L_1115da8b:;
  /* 1115da8b mov dword ptr [0x11184ec4], 0 */
  w32((uint32_t)(0x11184ec4), (0x0u));
  /* 1115da95 mov dword ptr [0x11184f4c], 0 */
  w32((uint32_t)(0x11184f4c), (0x0u));
  /* 1115da9f mov dword ptr [0x11185164], 0 */
  w32((uint32_t)(0x11185164), (0x0u));
  /* 1115daa9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1115dab0 jmp 0x1115dabb */
  goto L_1115dabb;
L_1115dab2:;
  /* 1115dab2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115dab5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115dab8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1115dabb:;
  /* 1115dabb cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115dabf jge 0x1115dad0 */
  if ((C.sf==C.of)) goto L_1115dad0;
  /* 1115dac1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115dac4 mov word ptr [eax*2 + 0x11184f40], 0 */
  w16((uint32_t)(EAX*2 + 0x11184f40), (0x0u));
  /* 1115dace jmp 0x1115dab2 */
  goto L_1115dab2;
L_1115dad0:;
  /* 1115dad0 mov esp, ebp */
  ESP = (EBP);
  /* 1115dad2 pop ebp */
  EBP = (pop32());
  /* 1115dad3 ret  */
  ESPCHK(0x1115da60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dae0 @ 0x1115dae0 (770 bytes, 175 insns) */
void f_1115dae0(void) {
  FTRACE(0x1115dae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115dae0 push ebp */
  push32((uint32_t)(EBP));
  /* 1115dae1 mov ebp, esp */
  EBP = (ESP);
  /* 1115dae3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115dae9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1115daef push eax */
  push32((uint32_t)(EAX));
  /* 1115daf0 mov ecx, dword ptr [0x11184ec4] */
  ECX = (r32((uint32_t)(0x11184ec4)));
  /* 1115daf6 push ecx */
  push32((uint32_t)(ECX));
  /* 1115daf7 call dword ptr [0x1118634c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118634c))), 0x1115dafdu);
  /* 1115dafd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115db00 jne 0x1115dd19 */
  if (!C.zf) goto L_1115dd19;
  /* 1115db06 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1115db10 jmp 0x1115db21 */
  goto L_1115db21;
L_1115db12:;
  /* 1115db12 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1115db18 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115db1b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1115db21:;
  /* 1115db21 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115db2b jae 0x1115db42 */
  if (!C.cf) goto L_1115db42;
  /* 1115db2d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1115db33 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 1115db39 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 1115db40 jmp 0x1115db12 */
  goto L_1115db12;
L_1115db42:;
  /* 1115db42 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 1115db49 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1115db4f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1115db52 jmp 0x1115db5d */
  goto L_1115db5d;
L_1115db54:;
  /* 1115db54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115db57 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115db5a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1115db5d:;
  /* 1115db5d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115db60 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1115db62 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1115db64 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115db66 je 0x1115dba8 */
  if (C.zf) goto L_1115dba8;
  /* 1115db68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115db6b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1115db6d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1115db6f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 1115db75 jmp 0x1115db86 */
  goto L_1115db86;
L_1115db77:;
  /* 1115db77 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1115db7d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115db80 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1115db86:;
  /* 1115db86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115db89 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1115db8b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1115db8e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115db94 ja 0x1115dba6 */
  if ((!C.cf&&!C.zf)) goto L_1115dba6;
  /* 1115db96 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1115db9c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 1115dba4 jmp 0x1115db77 */
  goto L_1115db77;
L_1115dba6:;
  /* 1115dba6 jmp 0x1115db54 */
  goto L_1115db54;
L_1115dba8:;
  /* 1115dba8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115dbaa mov eax, dword ptr [0x11185164] */
  EAX = (r32((uint32_t)(0x11185164)));
  /* 1115dbaf push eax */
  push32((uint32_t)(EAX));
  /* 1115dbb0 mov ecx, dword ptr [0x11184ec4] */
  ECX = (r32((uint32_t)(0x11184ec4)));
  /* 1115dbb6 push ecx */
  push32((uint32_t)(ECX));
  /* 1115dbb7 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1115dbbd push edx */
  push32((uint32_t)(EDX));
  /* 1115dbbe push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1115dbc3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1115dbc9 push eax */
  push32((uint32_t)(EAX));
  /* 1115dbca push 1 */
  push32((uint32_t)(0x1u));
  /* 1115dbcc call 0x1115f790 */
  push32(0x1115dbd1u); f_1115f790();
  /* 1115dbd1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115dbd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115dbd6 mov ecx, dword ptr [0x11184ec4] */
  ECX = (r32((uint32_t)(0x11184ec4)));
  /* 1115dbdc push ecx */
  push32((uint32_t)(ECX));
  /* 1115dbdd push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1115dbe2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1115dbe8 push edx */
  push32((uint32_t)(EDX));
  /* 1115dbe9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1115dbee lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1115dbf4 push eax */
  push32((uint32_t)(EAX));
  /* 1115dbf5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1115dbfa mov ecx, dword ptr [0x11185164] */
  ECX = (r32((uint32_t)(0x11185164)));
  /* 1115dc00 push ecx */
  push32((uint32_t)(ECX));
  /* 1115dc01 call 0x1115f950 */
  push32(0x1115dc06u); f_1115f950();
  /* 1115dc06 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115dc09 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115dc0b mov edx, dword ptr [0x11184ec4] */
  EDX = (r32((uint32_t)(0x11184ec4)));
  /* 1115dc11 push edx */
  push32((uint32_t)(EDX));
  /* 1115dc12 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1115dc17 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 1115dc1d push eax */
  push32((uint32_t)(EAX));
  /* 1115dc1e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1115dc23 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 1115dc29 push ecx */
  push32((uint32_t)(ECX));
  /* 1115dc2a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1115dc2f mov edx, dword ptr [0x11185164] */
  EDX = (r32((uint32_t)(0x11185164)));
  /* 1115dc35 push edx */
  push32((uint32_t)(EDX));
  /* 1115dc36 call 0x1115f950 */
  push32(0x1115dc3bu); f_1115f950();
  /* 1115dc3b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115dc3e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1115dc48 jmp 0x1115dc59 */
  goto L_1115dc59;
L_1115dc4a:;
  /* 1115dc4a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1115dc50 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115dc53 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1115dc59:;
  /* 1115dc59 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115dc63 jae 0x1115dd14 */
  if (!C.cf) goto L_1115dd14;
  /* 1115dc69 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1115dc6f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1115dc71 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 1115dc79 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1115dc7c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115dc7e je 0x1115dcb6 */
  if (C.zf) goto L_1115dcb6;
  /* 1115dc80 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1115dc86 mov cl, byte ptr [eax + 0x11185061] */
  CL = (r8((uint32_t)(EAX + 0x11185061)));
  /* 1115dc8c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1115dc8f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1115dc95 mov byte ptr [edx + 0x11185061], cl */
  w8((uint32_t)(EDX + 0x11185061), (CL));
  /* 1115dc9b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1115dca1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1115dca7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1115dcae mov byte ptr [eax + 0x11184f60], dl */
  w8((uint32_t)(EAX + 0x11184f60), (DL));
  /* 1115dcb4 jmp 0x1115dd0f */
  goto L_1115dd0f;
L_1115dcb6:;
  /* 1115dcb6 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1115dcbc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1115dcbe mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 1115dcc6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1115dcc9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1115dccb je 0x1115dd02 */
  if (C.zf) goto L_1115dd02;
  /* 1115dccd mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1115dcd3 mov al, byte ptr [edx + 0x11185061] */
  AL = (r8((uint32_t)(EDX + 0x11185061)));
  /* 1115dcd9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1115dcdb mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1115dce1 mov byte ptr [ecx + 0x11185061], al */
  w8((uint32_t)(ECX + 0x11185061), (AL));
  /* 1115dce7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1115dced mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1115dcf3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 1115dcfa mov byte ptr [edx + 0x11184f60], cl */
  w8((uint32_t)(EDX + 0x11184f60), (CL));
  /* 1115dd00 jmp 0x1115dd0f */
  goto L_1115dd0f;
L_1115dd02:;
  /* 1115dd02 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1115dd08 mov byte ptr [edx + 0x11184f60], 0 */
  w8((uint32_t)(EDX + 0x11184f60), (0x0u));
L_1115dd0f:;
  /* 1115dd0f jmp 0x1115dc4a */
  goto L_1115dc4a;
L_1115dd14:;
  /* 1115dd14 jmp 0x1115ddde */
  goto L_1115ddde;
L_1115dd19:;
  /* 1115dd19 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1115dd23 jmp 0x1115dd34 */
  goto L_1115dd34;
L_1115dd25:;
  /* 1115dd25 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1115dd2b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115dd2e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1115dd34:;
  /* 1115dd34 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115dd3e jae 0x1115ddde */
  if (!C.cf) goto L_1115ddde;
  /* 1115dd44 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115dd4b jb 0x1115dd88 */
  if (C.cf) goto L_1115dd88;
  /* 1115dd4d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115dd54 ja 0x1115dd88 */
  if ((!C.cf&&!C.zf)) goto L_1115dd88;
  /* 1115dd56 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1115dd5c mov dl, byte ptr [ecx + 0x11185061] */
  DL = (r8((uint32_t)(ECX + 0x11185061)));
  /* 1115dd62 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1115dd65 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1115dd6b mov byte ptr [eax + 0x11185061], dl */
  w8((uint32_t)(EAX + 0x11185061), (DL));
  /* 1115dd71 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1115dd77 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115dd7a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1115dd80 mov byte ptr [edx + 0x11184f60], cl */
  w8((uint32_t)(EDX + 0x11184f60), (CL));
  /* 1115dd86 jmp 0x1115ddd9 */
  goto L_1115ddd9;
L_1115dd88:;
  /* 1115dd88 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115dd8f jb 0x1115ddcc */
  if (C.cf) goto L_1115ddcc;
  /* 1115dd91 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115dd98 ja 0x1115ddcc */
  if ((!C.cf&&!C.zf)) goto L_1115ddcc;
  /* 1115dd9a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1115dda0 mov cl, byte ptr [eax + 0x11185061] */
  CL = (r8((uint32_t)(EAX + 0x11185061)));
  /* 1115dda6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1115dda9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1115ddaf mov byte ptr [edx + 0x11185061], cl */
  w8((uint32_t)(EDX + 0x11185061), (CL));
  /* 1115ddb5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1115ddbb sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115ddbe mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1115ddc4 mov byte ptr [ecx + 0x11184f60], al */
  w8((uint32_t)(ECX + 0x11184f60), (AL));
  /* 1115ddca jmp 0x1115ddd9 */
  goto L_1115ddd9;
L_1115ddcc:;
  /* 1115ddcc mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1115ddd2 mov byte ptr [edx + 0x11184f60], 0 */
  w8((uint32_t)(EDX + 0x11184f60), (0x0u));
L_1115ddd9:;
  /* 1115ddd9 jmp 0x1115dd25 */
  goto L_1115dd25;
L_1115ddde:;
  /* 1115ddde mov esp, ebp */
  ESP = (EBP);
  /* 1115dde0 pop ebp */
  EBP = (pop32());
  /* 1115dde1 ret  */
  ESPCHK(0x1115dae0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ddf0 @ 0x1115ddf0 (23 bytes, 9 insns) */
void f_1115ddf0(void) {
  FTRACE(0x1115ddf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115ddf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1115ddf1 mov ebp, esp */
  EBP = (ESP);
  /* 1115ddf3 cmp dword ptr [0x11184f4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11184f4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115ddfa je 0x1115de03 */
  if (C.zf) goto L_1115de03;
  /* 1115ddfc mov eax, dword ptr [0x11184ec4] */
  EAX = (r32((uint32_t)(0x11184ec4)));
  /* 1115de01 jmp 0x1115de05 */
  goto L_1115de05;
L_1115de03:;
  /* 1115de03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1115de05:;
  /* 1115de05 pop ebp */
  EBP = (pop32());
  /* 1115de06 ret  */
  ESPCHK(0x1115ddf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de10 @ 0x1115de10 (34 bytes, 10 insns) */
void f_1115de10(void) {
  FTRACE(0x1115de10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115de10 push ebp */
  push32((uint32_t)(EBP));
  /* 1115de11 mov ebp, esp */
  EBP = (ESP);
  /* 1115de13 cmp dword ptr [0x11185310], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11185310))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115de1a jne 0x1115de30 */
  if (!C.zf) goto L_1115de30;
  /* 1115de1c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1115de1e call 0x1115d630 */
  push32(0x1115de23u); f_1115d630();
  /* 1115de23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115de26 mov dword ptr [0x11185310], 1 */
  w32((uint32_t)(0x11185310), (0x1u));
L_1115de30:;
  /* 1115de30 pop ebp */
  EBP = (pop32());
  /* 1115de31 ret  */
  ESPCHK(0x1115de10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de40 @ 0x1115de40 (664 bytes, 262 insns) [15 switch table(s)] */
void f_1115de40(void) {
  FTRACE(0x1115de40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115de40 push ebp */
  push32((uint32_t)(EBP));
  /* 1115de41 mov ebp, esp */
  EBP = (ESP);
  /* 1115de43 push edi */
  push32((uint32_t)(EDI));
  /* 1115de44 push esi */
  push32((uint32_t)(ESI));
  /* 1115de45 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1115de48 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1115de4b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1115de4e mov eax, ecx */
  EAX = (ECX);
  /* 1115de50 mov edx, ecx */
  EDX = (ECX);
  /* 1115de52 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115de54 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115de56 jbe 0x1115de60 */
  if ((C.cf||C.zf)) goto L_1115de60;
  /* 1115de58 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115de5a jb 0x1115dfd8 */
  if (C.cf) goto L_1115dfd8;
L_1115de60:;
  /* 1115de60 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1115de66 jne 0x1115de7c */
  if (!C.zf) goto L_1115de7c;
  /* 1115de68 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1115de6b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1115de6e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115de71 jb 0x1115de9c */
  if (C.cf) goto L_1115de9c;
  /* 1115de73 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1115de75 jmp dword ptr [edx*4 + 0x1115df88] */
  switch (EDX) {
    case 0: goto L_1115df98;
    case 1: goto L_1115dfa0;
    case 2: goto L_1115dfac;
    case 3: goto L_1115dfc0;
    default: x86_unimpl("switch@0x1115de75 out of table"); return;
  }
L_1115de7c:;
  /* 1115de7c mov eax, edi */
  EAX = (EDI);
  /* 1115de7e mov edx, 3 */
  EDX = (0x3u);
  /* 1115de83 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115de86 jb 0x1115de94 */
  if (C.cf) goto L_1115de94;
  /* 1115de88 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1115de8b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115de8d jmp dword ptr [eax*4 + 0x1115dea0] */
  switch (EAX) {
    case 1: goto L_1115deb0;
    case 2: goto L_1115dedc;
    case 3: goto L_1115df00;
    default: x86_unimpl("switch@0x1115de8d out of table"); return;
  }
L_1115de94:;
  /* 1115de94 jmp dword ptr [ecx*4 + 0x1115df98] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1115df98)))); return;
  /* 1115de9b nop  */
  /* nop */
L_1115de9c:;
  /* 1115de9c jmp dword ptr [ecx*4 + 0x1115df1c] */
  switch (ECX) {
    case 0: goto L_1115df7f;
    case 1: goto L_1115df6c;
    case 2: goto L_1115df64;
    case 3: goto L_1115df5c;
    case 4: goto L_1115df54;
    case 5: goto L_1115df4c;
    case 6: goto L_1115df44;
    case 7: goto L_1115df3c;
    default: x86_unimpl("switch@0x1115de9c out of table"); return;
  }
  /* 1115dea3 nop  */
  /* nop */
L_1115deb0:;
  /* 1115deb0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1115deb2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1115deb4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1115deb6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1115deb9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1115debc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1115debf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1115dec2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1115dec5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1115dec8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1115decb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115dece jb 0x1115de9c */
  if (C.cf) goto L_1115de9c;
  /* 1115ded0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1115ded2 jmp dword ptr [edx*4 + 0x1115df88] */
  switch (EDX) {
    case 0: goto L_1115df98;
    case 1: goto L_1115dfa0;
    case 2: goto L_1115dfac;
    case 3: goto L_1115dfc0;
    default: x86_unimpl("switch@0x1115ded2 out of table"); return;
  }
  /* 1115ded9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1115dedc:;
  /* 1115dedc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1115dede mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1115dee0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1115dee2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1115dee5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1115dee8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1115deeb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1115deee add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1115def1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115def4 jb 0x1115de9c */
  if (C.cf) goto L_1115de9c;
  /* 1115def6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1115def8 jmp dword ptr [edx*4 + 0x1115df88] */
  switch (EDX) {
    case 0: goto L_1115df98;
    case 1: goto L_1115dfa0;
    case 2: goto L_1115dfac;
    case 3: goto L_1115dfc0;
    default: x86_unimpl("switch@0x1115def8 out of table"); return;
  }
  /* 1115deff nop  */
  /* nop */
L_1115df00:;
  /* 1115df00 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1115df02 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1115df04 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1115df06 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1115df07 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1115df0a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1115df0b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115df0e jb 0x1115de9c */
  if (C.cf) goto L_1115de9c;
  /* 1115df10 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1115df12 jmp dword ptr [edx*4 + 0x1115df88] */
  switch (EDX) {
    case 0: goto L_1115df98;
    case 1: goto L_1115dfa0;
    case 2: goto L_1115dfac;
    case 3: goto L_1115dfc0;
    default: x86_unimpl("switch@0x1115df12 out of table"); return;
  }
  /* 1115df19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1115df3c:;
  /* 1115df3c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1115df40 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1115df44:;
  /* 1115df44 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1115df48 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1115df4c:;
  /* 1115df4c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1115df50 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1115df54:;
  /* 1115df54 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1115df58 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1115df5c:;
  /* 1115df5c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1115df60 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1115df64:;
  /* 1115df64 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1115df68 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1115df6c:;
  /* 1115df6c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1115df70 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1115df74 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1115df7b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1115df7d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1115df7f:;
  /* 1115df7f jmp dword ptr [edx*4 + 0x1115df88] */
  switch (EDX) {
    case 0: goto L_1115df98;
    case 1: goto L_1115dfa0;
    case 2: goto L_1115dfac;
    case 3: goto L_1115dfc0;
    default: x86_unimpl("switch@0x1115df7f out of table"); return;
  }
  /* 1115df86 mov edi, edi */
  EDI = (EDI);
L_1115df98:;
  /* 1115df98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115df9b pop esi */
  ESI = (pop32());
  /* 1115df9c pop edi */
  EDI = (pop32());
  /* 1115df9d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1115df9e ret  */
  ESPCHK(0x1115de40u, _esp0);
  ESP += 4; return;
  /* 1115df9f nop  */
  /* nop */
L_1115dfa0:;
  /* 1115dfa0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1115dfa2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1115dfa4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115dfa7 pop esi */
  ESI = (pop32());
  /* 1115dfa8 pop edi */
  EDI = (pop32());
  /* 1115dfa9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1115dfaa ret  */
  ESPCHK(0x1115de40u, _esp0);
  ESP += 4; return;
  /* 1115dfab nop  */
  /* nop */
L_1115dfac:;
  /* 1115dfac mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1115dfae mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1115dfb0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1115dfb3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1115dfb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115dfb9 pop esi */
  ESI = (pop32());
  /* 1115dfba pop edi */
  EDI = (pop32());
  /* 1115dfbb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1115dfbc ret  */
  ESPCHK(0x1115de40u, _esp0);
  ESP += 4; return;
  /* 1115dfbd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1115dfc0:;
  /* 1115dfc0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1115dfc2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1115dfc4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1115dfc7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1115dfca mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1115dfcd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1115dfd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115dfd3 pop esi */
  ESI = (pop32());
  /* 1115dfd4 pop edi */
  EDI = (pop32());
  /* 1115dfd5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1115dfd6 ret  */
  ESPCHK(0x1115de40u, _esp0);
  ESP += 4; return;
  /* 1115dfd7 nop  */
  /* nop */
L_1115dfd8:;
  /* 1115dfd8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1115dfdc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1115dfe0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1115dfe6 jne 0x1115e00c */
  if (!C.zf) goto L_1115e00c;
  /* 1115dfe8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1115dfeb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1115dfee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115dff1 jb 0x1115e000 */
  if (C.cf) goto L_1115e000;
  /* 1115dff3 std  */
  C.df=1;
  /* 1115dff4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1115dff6 cld  */
  C.df=0;
  /* 1115dff7 jmp dword ptr [edx*4 + 0x1115e120] */
  switch (EDX) {
    case 0: goto L_1115e130;
    case 1: goto L_1115e138;
    case 2: goto L_1115e148;
    case 3: goto L_1115e15c;
    default: x86_unimpl("switch@0x1115dff7 out of table"); return;
  }
  /* 1115dffe mov edi, edi */
  EDI = (EDI);
L_1115e000:;
  /* 1115e000 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1115e002 jmp dword ptr [ecx*4 + 0x1115e0d0] */
  switch (ECX) {
    case 0: goto L_1115e117;
    default: x86_unimpl("switch@0x1115e002 out of table"); return;
  }
  /* 1115e009 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1115e00c:;
  /* 1115e00c mov eax, edi */
  EAX = (EDI);
  /* 1115e00e mov edx, 3 */
  EDX = (0x3u);
  /* 1115e013 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115e016 jb 0x1115e024 */
  if (C.cf) goto L_1115e024;
  /* 1115e018 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1115e01b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115e01d jmp dword ptr [eax*4 + 0x1115e028] */
  switch (EAX) {
    case 1: goto L_1115e038;
    case 2: goto L_1115e058;
    case 3: goto L_1115e080;
    default: x86_unimpl("switch@0x1115e01d out of table"); return;
  }
L_1115e024:;
  /* 1115e024 jmp dword ptr [ecx*4 + 0x1115e120] */
  switch (ECX) {
    case 0: goto L_1115e130;
    case 1: goto L_1115e138;
    case 2: goto L_1115e148;
    case 3: goto L_1115e15c;
    default: x86_unimpl("switch@0x1115e024 out of table"); return;
  }
  /* 1115e02b nop  */
  /* nop */
L_1115e038:;
  /* 1115e038 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1115e03b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1115e03d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1115e040 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1115e041 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1115e044 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1115e045 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115e048 jb 0x1115e000 */
  if (C.cf) goto L_1115e000;
  /* 1115e04a std  */
  C.df=1;
  /* 1115e04b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1115e04d cld  */
  C.df=0;
  /* 1115e04e jmp dword ptr [edx*4 + 0x1115e120] */
  switch (EDX) {
    case 0: goto L_1115e130;
    case 1: goto L_1115e138;
    case 2: goto L_1115e148;
    case 3: goto L_1115e15c;
    default: x86_unimpl("switch@0x1115e04e out of table"); return;
  }
  /* 1115e055 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1115e058:;
  /* 1115e058 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1115e05b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1115e05d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1115e060 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1115e063 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1115e066 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1115e069 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115e06c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115e06f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115e072 jb 0x1115e000 */
  if (C.cf) goto L_1115e000;
  /* 1115e074 std  */
  C.df=1;
  /* 1115e075 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1115e077 cld  */
  C.df=0;
  /* 1115e078 jmp dword ptr [edx*4 + 0x1115e120] */
  switch (EDX) {
    case 0: goto L_1115e130;
    case 1: goto L_1115e138;
    case 2: goto L_1115e148;
    case 3: goto L_1115e15c;
    default: x86_unimpl("switch@0x1115e078 out of table"); return;
  }
  /* 1115e07f nop  */
  /* nop */
L_1115e080:;
  /* 1115e080 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1115e083 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1115e085 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1115e088 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1115e08b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1115e08e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1115e091 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1115e094 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1115e097 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115e09a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115e09d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115e0a0 jb 0x1115e000 */
  if (C.cf) goto L_1115e000;
  /* 1115e0a6 std  */
  C.df=1;
  /* 1115e0a7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1115e0a9 cld  */
  C.df=0;
  /* 1115e0aa jmp dword ptr [edx*4 + 0x1115e120] */
  switch (EDX) {
    case 0: goto L_1115e130;
    case 1: goto L_1115e138;
    case 2: goto L_1115e148;
    case 3: goto L_1115e15c;
    default: x86_unimpl("switch@0x1115e0aa out of table"); return;
  }
  /* 1115e0b1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1115e0b4 aam 0xe0 */
  x86_unimpl("aam @ 0x1115e0b4");
  /* 1115e0b6 adc eax, 0x15e0dc11 */
  { uint32_t _a=(EAX),_b=(0x15e0dc11u),_r=_a+_b+C.cf; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115e0bb adc esp, esp */
  { uint32_t _a=(ESP),_b=(ESP),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115e0bd loopne 0x1115e0d4 */
  x86_unimpl("loopne @ 0x1115e0bd");
  /* 1115e0bf adc esp, ebp */
  { uint32_t _a=(ESP),_b=(EBP),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115e0c1 loopne 0x1115e0d8 */
  x86_unimpl("loopne @ 0x1115e0c1");
  /* 1115e0c3 adc esp, esi */
  { uint32_t _a=(ESP),_b=(ESI),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115e0c5 loopne 0x1115e0dc */
  x86_unimpl("loopne @ 0x1115e0c5");
  /* 1115e0c7 adc esp, edi */
  { uint32_t _a=(ESP),_b=(EDI),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115e0c9 loopne 0x1115e0e0 */
  x86_unimpl("loopne @ 0x1115e0c9");
  /* 1115e0cb adc dword ptr [ecx], eax */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EAX),_r=_a+_b+C.cf; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1115e0d4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1115e0d8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1115e0dc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1115e0e0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1115e0e4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1115e0e8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1115e0ec mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1115e0f0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1115e0f4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1115e0f8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1115e0fc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1115e100 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1115e104 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1115e108 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1115e10c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1115e113 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1115e115 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1115e117:;
  /* 1115e117 jmp dword ptr [edx*4 + 0x1115e120] */
  switch (EDX) {
    case 0: goto L_1115e130;
    case 1: goto L_1115e138;
    case 2: goto L_1115e148;
    case 3: goto L_1115e15c;
    default: x86_unimpl("switch@0x1115e117 out of table"); return;
  }
  /* 1115e11e mov edi, edi */
  EDI = (EDI);
L_1115e130:;
  /* 1115e130 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115e133 pop esi */
  ESI = (pop32());
  /* 1115e134 pop edi */
  EDI = (pop32());
  /* 1115e135 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1115e136 ret  */
  ESPCHK(0x1115de40u, _esp0);
  ESP += 4; return;
  /* 1115e137 nop  */
  /* nop */
L_1115e138:;
  /* 1115e138 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1115e13b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1115e13e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115e141 pop esi */
  ESI = (pop32());
  /* 1115e142 pop edi */
  EDI = (pop32());
  /* 1115e143 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1115e144 ret  */
  ESPCHK(0x1115de40u, _esp0);
  ESP += 4; return;
  /* 1115e145 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1115e148:;
  /* 1115e148 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1115e14b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1115e14e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1115e151 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1115e154 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115e157 pop esi */
  ESI = (pop32());
  /* 1115e158 pop edi */
  EDI = (pop32());
  /* 1115e159 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1115e15a ret  */
  ESPCHK(0x1115de40u, _esp0);
  ESP += 4; return;
  /* 1115e15b nop  */
  /* nop */
L_1115e15c:;
  /* 1115e15c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1115e15f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1115e162 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1115e165 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1115e168 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1115e16b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1115e16e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115e171 pop esi */
  ESI = (pop32());
  /* 1115e172 pop edi */
  EDI = (pop32());
  /* 1115e173 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1115e174 ret  */
  ESPCHK(0x1115de40u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x1115e180 (104 bytes, 43 insns) */
void f_1115e180(void) {
  FTRACE(0x1115e180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115e180 push ebx */
  push32((uint32_t)(EBX));
  /* 1115e181 push esi */
  push32((uint32_t)(ESI));
  /* 1115e182 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1115e186 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115e188 jne 0x1115e1a2 */
  if (!C.zf) goto L_1115e1a2;
  /* 1115e18a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1115e18e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1115e192 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1115e194 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1115e196 mov ebx, eax */
  EBX = (EAX);
  /* 1115e198 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1115e19c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1115e19e mov edx, ebx */
  EDX = (EBX);
  /* 1115e1a0 jmp 0x1115e1e3 */
  goto L_1115e1e3;
L_1115e1a2:;
  /* 1115e1a2 mov ecx, eax */
  ECX = (EAX);
  /* 1115e1a4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1115e1a8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1115e1ac mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1115e1b0:;
  /* 1115e1b0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1115e1b2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1115e1b4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1115e1b6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1115e1b8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1115e1ba jne 0x1115e1b0 */
  if (!C.zf) goto L_1115e1b0;
  /* 1115e1bc div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1115e1be mov esi, eax */
  ESI = (EAX);
  /* 1115e1c0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1115e1c4 mov ecx, eax */
  ECX = (EAX);
  /* 1115e1c6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1115e1ca mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1115e1cc add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115e1ce jb 0x1115e1de */
  if (C.cf) goto L_1115e1de;
  /* 1115e1d0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115e1d4 ja 0x1115e1de */
  if ((!C.cf&&!C.zf)) goto L_1115e1de;
  /* 1115e1d6 jb 0x1115e1df */
  if (C.cf) goto L_1115e1df;
  /* 1115e1d8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115e1dc jbe 0x1115e1df */
  if ((C.cf||C.zf)) goto L_1115e1df;
L_1115e1de:;
  /* 1115e1de dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1115e1df:;
  /* 1115e1df xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1115e1e1 mov eax, esi */
  EAX = (ESI);
L_1115e1e3:;
  /* 1115e1e3 pop esi */
  ESI = (pop32());
  /* 1115e1e4 pop ebx */
  EBX = (pop32());
  /* 1115e1e5 ret 0x10 */
  ESPCHK(0x1115e180u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x1115e1f0 (117 bytes, 44 insns) */
void f_1115e1f0(void) {
  FTRACE(0x1115e1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115e1f0 push ebx */
  push32((uint32_t)(EBX));
  /* 1115e1f1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1115e1f5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115e1f7 jne 0x1115e211 */
  if (!C.zf) goto L_1115e211;
  /* 1115e1f9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1115e1fd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1115e201 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1115e203 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1115e205 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1115e209 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1115e20b mov eax, edx */
  EAX = (EDX);
  /* 1115e20d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1115e20f jmp 0x1115e261 */
  goto L_1115e261;
L_1115e211:;
  /* 1115e211 mov ecx, eax */
  ECX = (EAX);
  /* 1115e213 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1115e217 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1115e21b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1115e21f:;
  /* 1115e21f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1115e221 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1115e223 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1115e225 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1115e227 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1115e229 jne 0x1115e21f */
  if (!C.zf) goto L_1115e21f;
  /* 1115e22b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1115e22d mov ecx, eax */
  ECX = (EAX);
  /* 1115e22f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1115e233 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1115e234 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1115e238 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115e23a jb 0x1115e24a */
  if (C.cf) goto L_1115e24a;
  /* 1115e23c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115e240 ja 0x1115e24a */
  if ((!C.cf&&!C.zf)) goto L_1115e24a;
  /* 1115e242 jb 0x1115e252 */
  if (C.cf) goto L_1115e252;
  /* 1115e244 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115e248 jbe 0x1115e252 */
  if ((C.cf||C.zf)) goto L_1115e252;
L_1115e24a:;
  /* 1115e24a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115e24e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1115e252:;
  /* 1115e252 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115e256 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115e25a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1115e25c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1115e25e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1115e261:;
  /* 1115e261 pop ebx */
  EBX = (pop32());
  /* 1115e262 ret 0x10 */
  ESPCHK(0x1115e1f0u, _esp0);
  ESP += 20; return;
}

/* FUN_1000e270 @ 0x1115e270 (628 bytes, 214 insns) */
void f_1115e270(void) {
  FTRACE(0x1115e270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115e270 push ebp */
  push32((uint32_t)(EBP));
  /* 1115e271 mov ebp, esp */
  EBP = (ESP);
  /* 1115e273 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115e276 push ebx */
  push32((uint32_t)(EBX));
  /* 1115e277 push esi */
  push32((uint32_t)(ESI));
  /* 1115e278 push edi */
  push32((uint32_t)(EDI));
L_1115e279:;
  /* 1115e279 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115e27d jne 0x1115e29d */
  if (!C.zf) goto L_1115e29d;
  /* 1115e27f push 0x1117f38c */
  push32((uint32_t)(0x1117f38cu));
  /* 1115e284 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115e286 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1115e288 push 0x1117f380 */
  push32((uint32_t)(0x1117f380u));
  /* 1115e28d push 2 */
  push32((uint32_t)(0x2u));
  /* 1115e28f call 0x11156620 */
  push32(0x1115e294u); f_11156620();
  /* 1115e294 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115e297 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115e29a jne 0x1115e29d */
  if (!C.zf) goto L_1115e29d;
  /* 1115e29c int3  */
  x86_unimpl("int3 @ 0x1115e29c");
L_1115e29d:;
  /* 1115e29d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115e29f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115e2a1 jne 0x1115e279 */
  if (!C.zf) goto L_1115e279;
  /* 1115e2a3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115e2a6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1115e2a9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115e2ac mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1115e2af mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1115e2b2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115e2b5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1115e2b8 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1115e2be test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115e2c0 je 0x1115e2cf */
  if (C.zf) goto L_1115e2cf;
  /* 1115e2c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115e2c5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1115e2c8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1115e2cb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1115e2cd je 0x1115e2e5 */
  if (C.zf) goto L_1115e2e5;
L_1115e2cf:;
  /* 1115e2cf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115e2d2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1115e2d5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1115e2d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115e2da mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1115e2dd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1115e2e0 jmp 0x1115e4dd */
  goto L_1115e4dd;
L_1115e2e5:;
  /* 1115e2e5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115e2e8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1115e2eb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1115e2ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115e2f0 je 0x1115e33c */
  if (C.zf) goto L_1115e33c;
  /* 1115e2f2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115e2f5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1115e2fc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115e2ff mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1115e302 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1115e305 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115e307 je 0x1115e325 */
  if (C.zf) goto L_1115e325;
  /* 1115e309 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115e30c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115e30f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1115e312 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1115e314 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115e317 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1115e31a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1115e31d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115e320 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1115e323 jmp 0x1115e33c */
  goto L_1115e33c;
L_1115e325:;
  /* 1115e325 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115e328 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1115e32b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1115e32e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115e331 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1115e334 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1115e337 jmp 0x1115e4dd */
  goto L_1115e4dd;
L_1115e33c:;
  /* 1115e33c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115e33f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1115e342 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1115e345 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115e348 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1115e34b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115e34e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1115e351 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 1115e354 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115e357 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1115e35a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115e35d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1115e364 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1115e36b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115e36e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1115e371 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115e374 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1115e377 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1115e37d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1115e37f jne 0x1115e3af */
  if (!C.zf) goto L_1115e3af;
  /* 1115e381 cmp dword ptr [ebp - 8], 0x11182140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11182140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115e388 je 0x1115e393 */
  if (C.zf) goto L_1115e393;
  /* 1115e38a cmp dword ptr [ebp - 8], 0x11182160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11182160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115e391 jne 0x1115e3a3 */
  if (!C.zf) goto L_1115e3a3;
L_1115e393:;
  /* 1115e393 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115e396 push edx */
  push32((uint32_t)(EDX));
  /* 1115e397 call 0x111601e0 */
  push32(0x1115e39cu); f_111601e0();
  /* 1115e39c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115e39f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115e3a1 jne 0x1115e3af */
  if (!C.zf) goto L_1115e3af;
L_1115e3a3:;
  /* 1115e3a3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115e3a6 push eax */
  push32((uint32_t)(EAX));
  /* 1115e3a7 call 0x11160110 */
  push32(0x1115e3acu); f_11160110();
  /* 1115e3ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1115e3af:;
  /* 1115e3af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115e3b2 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1115e3b5 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1115e3bb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115e3bd je 0x1115e49b */
  if (C.zf) goto L_1115e49b;
L_1115e3c3:;
  /* 1115e3c3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115e3c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115e3c9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1115e3cb sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115e3ce test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115e3d0 jge 0x1115e3f3 */
  if ((C.sf==C.of)) goto L_1115e3f3;
  /* 1115e3d2 push 0x1117f340 */
  push32((uint32_t)(0x1117f340u));
  /* 1115e3d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115e3d9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1115e3de push 0x1117f380 */
  push32((uint32_t)(0x1117f380u));
  /* 1115e3e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1115e3e5 call 0x11156620 */
  push32(0x1115e3eau); f_11156620();
  /* 1115e3ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115e3ed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115e3f0 jne 0x1115e3f3 */
  if (!C.zf) goto L_1115e3f3;
  /* 1115e3f2 int3  */
  x86_unimpl("int3 @ 0x1115e3f2");
L_1115e3f3:;
  /* 1115e3f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115e3f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115e3f7 jne 0x1115e3c3 */
  if (!C.zf) goto L_1115e3c3;
  /* 1115e3f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115e3fc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115e3ff mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1115e401 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115e404 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1115e407 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115e40a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1115e40d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115e410 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115e413 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1115e415 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115e418 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1115e41b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115e41e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115e421 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1115e424 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115e428 jle 0x1115e446 */
  if ((C.zf||C.sf!=C.of)) goto L_1115e446;
  /* 1115e42a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115e42d push ecx */
  push32((uint32_t)(ECX));
  /* 1115e42e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115e431 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1115e434 push eax */
  push32((uint32_t)(EAX));
  /* 1115e435 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115e438 push ecx */
  push32((uint32_t)(ECX));
  /* 1115e439 call 0x1115fe00 */
  push32(0x1115e43eu); f_1115fe00();
  /* 1115e43e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115e441 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1115e444 jmp 0x1115e48e */
  goto L_1115e48e;
L_1115e446:;
  /* 1115e446 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115e44a je 0x1115e469 */
  if (C.zf) goto L_1115e469;
  /* 1115e44c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115e44f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1115e452 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115e455 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1115e458 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1115e45b mov ecx, dword ptr [edx*4 + 0x111851c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x111851c0)));
  /* 1115e462 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115e464 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1115e467 jmp 0x1115e470 */
  goto L_1115e470;
L_1115e469:;
  /* 1115e469 mov dword ptr [ebp - 0x14], 0x11181a60 */
  w32((uint32_t)(EBP + -0x14), (0x11181a60u));
L_1115e470:;
  /* 1115e470 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1115e473 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 1115e477 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1115e47a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115e47c je 0x1115e48e */
  if (C.zf) goto L_1115e48e;
  /* 1115e47e push 2 */
  push32((uint32_t)(0x2u));
  /* 1115e480 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115e482 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115e485 push ecx */
  push32((uint32_t)(ECX));
  /* 1115e486 call 0x1115fcb0 */
  push32(0x1115e48bu); f_1115fcb0();
  /* 1115e48b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1115e48e:;
  /* 1115e48e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115e491 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1115e494 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1115e497 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1115e499 jmp 0x1115e4b9 */
  goto L_1115e4b9;
L_1115e49b:;
  /* 1115e49b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1115e4a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115e4a5 push edx */
  push32((uint32_t)(EDX));
  /* 1115e4a6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1115e4a9 push eax */
  push32((uint32_t)(EAX));
  /* 1115e4aa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115e4ad push ecx */
  push32((uint32_t)(ECX));
  /* 1115e4ae call 0x1115fe00 */
  push32(0x1115e4b3u); f_1115fe00();
  /* 1115e4b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115e4b6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1115e4b9:;
  /* 1115e4b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1115e4bc cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115e4bf je 0x1115e4d5 */
  if (C.zf) goto L_1115e4d5;
  /* 1115e4c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115e4c4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1115e4c7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1115e4ca mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115e4cd mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1115e4d0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1115e4d3 jmp 0x1115e4dd */
  goto L_1115e4dd;
L_1115e4d5:;
  /* 1115e4d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115e4d8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1115e4dd:;
  /* 1115e4dd pop edi */
  EDI = (pop32());
  /* 1115e4de pop esi */
  ESI = (pop32());
  /* 1115e4df pop ebx */
  EBX = (pop32());
  /* 1115e4e0 mov esp, ebp */
  ESP = (EBP);
  /* 1115e4e2 pop ebp */
  EBP = (pop32());
  /* 1115e4e3 ret  */
  ESPCHK(0x1115e270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e4f0 @ 0x1115e4f0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_1115e4f0(void) {
  FTRACE(0x1115e4f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115e4f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1115e4f1 mov ebp, esp */
  EBP = (ESP);
  /* 1115e4f3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115e4f9 push ebx */
  push32((uint32_t)(EBX));
  /* 1115e4fa push esi */
  push32((uint32_t)(ESI));
  /* 1115e4fb push edi */
  push32((uint32_t)(EDI));
  /* 1115e4fc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1115e503 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1115e50d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1115e514:;
  /* 1115e514 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115e517 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1115e519 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1115e51c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1115e520 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115e523 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115e526 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1115e529 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115e52b je 0x1115f107 */
  if (C.zf) goto L_1115f107;
  /* 1115e531 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115e538 jl 0x1115f107 */
  if ((C.sf!=C.of)) goto L_1115f107;
  /* 1115e53e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1115e542 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115e545 jl 0x1115e566 */
  if ((C.sf!=C.of)) goto L_1115e566;
  /* 1115e547 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1115e54b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115e54e jg 0x1115e566 */
  if ((!C.zf&&C.sf==C.of)) goto L_1115e566;
  /* 1115e550 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1115e554 movsx ecx, byte ptr [eax + 0x1117f378] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x1117f378))));
  /* 1115e55b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1115e55e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 1115e564 jmp 0x1115e570 */
  goto L_1115e570;
L_1115e566:;
  /* 1115e566 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_1115e570:;
  /* 1115e570 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 1115e576 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1115e579 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1115e57c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115e57f movsx edx, byte ptr [ecx + eax*8 + 0x1117f398] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x1117f398))));
  /* 1115e587 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1115e58a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1115e58d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115e590 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 1115e596 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115e59d ja 0x1115f102 */
  if ((!C.cf&&!C.zf)) goto L_1115f102;
  /* 1115e5a3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 1115e5a9 jmp dword ptr [ecx*4 + 0x1115f114] */
  switch (ECX) {
    case 0: goto L_1115e5b0;
    case 1: goto L_1115e64a;
    case 2: goto L_1115e68c;
    case 3: goto L_1115e6fb;
    case 4: goto L_1115e753;
    case 5: goto L_1115e762;
    case 6: goto L_1115e7ae;
    case 7: goto L_1115e841;
    case 8: goto L_1115e6d8;
    case 9: goto L_1115e6e3;
    case 10: goto L_1115e6ce;
    case 11: goto L_1115e6c3;
    case 12: goto L_1115e6ee;
    case 13: goto L_1115e6f6;
    default: x86_unimpl("switch@0x1115e5a9 out of table"); return;
  }
L_1115e5b0:;
  /* 1115e5b0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1115e5b7 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1115e5ba and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1115e5c0 mov eax, dword ptr [0x11181c98] */
  EAX = (r32((uint32_t)(0x11181c98)));
  /* 1115e5c5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1115e5c7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1115e5cb and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1115e5d1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1115e5d3 je 0x1115e62d */
  if (C.zf) goto L_1115e62d;
  /* 1115e5d5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1115e5db push edx */
  push32((uint32_t)(EDX));
  /* 1115e5dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115e5df push eax */
  push32((uint32_t)(EAX));
  /* 1115e5e0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1115e5e4 push ecx */
  push32((uint32_t)(ECX));
  /* 1115e5e5 call 0x1115f220 */
  push32(0x1115e5eau); f_1115f220();
  /* 1115e5ea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115e5ed mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115e5f0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1115e5f2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 1115e5f5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115e5f8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115e5fb mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1115e5fe:;
  /* 1115e5fe movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1115e602 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115e604 jne 0x1115e627 */
  if (!C.zf) goto L_1115e627;
  /* 1115e606 push 0x1117f418 */
  push32((uint32_t)(0x1117f418u));
  /* 1115e60b push 0 */
  push32((uint32_t)(0x0u));
  /* 1115e60d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 1115e612 push 0x1117f40c */
  push32((uint32_t)(0x1117f40cu));
  /* 1115e617 push 2 */
  push32((uint32_t)(0x2u));
  /* 1115e619 call 0x11156620 */
  push32(0x1115e61eu); f_11156620();
  /* 1115e61e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115e621 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115e624 jne 0x1115e627 */
  if (!C.zf) goto L_1115e627;
  /* 1115e626 int3  */
  x86_unimpl("int3 @ 0x1115e626");
L_1115e627:;
  /* 1115e627 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115e629 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115e62b jne 0x1115e5fe */
  if (!C.zf) goto L_1115e5fe;
L_1115e62d:;
  /* 1115e62d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1115e633 push ecx */
  push32((uint32_t)(ECX));
  /* 1115e634 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115e637 push edx */
  push32((uint32_t)(EDX));
  /* 1115e638 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1115e63c push eax */
  push32((uint32_t)(EAX));
  /* 1115e63d call 0x1115f220 */
  push32(0x1115e642u); f_1115f220();
  /* 1115e642 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115e645 jmp 0x1115f102 */
  goto L_1115f102;
L_1115e64a:;
  /* 1115e64a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1115e651 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115e654 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1115e65a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 1115e660 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 1115e666 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1115e66c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1115e66f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1115e676 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 1115e680 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1115e687 jmp 0x1115f102 */
  goto L_1115f102;
L_1115e68c:;
  /* 1115e68c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1115e690 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 1115e696 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1115e69c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115e69f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 1115e6a5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115e6ac ja 0x1115e6f6 */
  if ((!C.cf&&!C.zf)) goto L_1115e6f6;
  /* 1115e6ae mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 1115e6b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115e6b6 mov al, byte ptr [ecx + 0x1115f14c] */
  AL = (r8((uint32_t)(ECX + 0x1115f14c)));
  /* 1115e6bc jmp dword ptr [eax*4 + 0x1115f134] */
  switch (EAX) {
    case 0: goto L_1115e6d8;
    case 1: goto L_1115e6e3;
    case 2: goto L_1115e6ce;
    case 3: goto L_1115e6c3;
    case 4: goto L_1115e6ee;
    case 5: goto L_1115e6f6;
    default: x86_unimpl("switch@0x1115e6bc out of table"); return;
  }
L_1115e6c3:;
  /* 1115e6c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115e6c6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1115e6c9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1115e6cc jmp 0x1115e6f6 */
  goto L_1115e6f6;
L_1115e6ce:;
  /* 1115e6ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115e6d1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1115e6d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1115e6d6 jmp 0x1115e6f6 */
  goto L_1115e6f6;
L_1115e6d8:;
  /* 1115e6d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115e6db or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1115e6de mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1115e6e1 jmp 0x1115e6f6 */
  goto L_1115e6f6;
L_1115e6e3:;
  /* 1115e6e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115e6e6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 1115e6e9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1115e6ec jmp 0x1115e6f6 */
  goto L_1115e6f6;
L_1115e6ee:;
  /* 1115e6ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115e6f1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1115e6f3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1115e6f6:;
  /* 1115e6f6 jmp 0x1115f102 */
  goto L_1115f102;
L_1115e6fb:;
  /* 1115e6fb movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1115e6ff cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115e702 jne 0x1115e737 */
  if (!C.zf) goto L_1115e737;
  /* 1115e704 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1115e707 push edx */
  push32((uint32_t)(EDX));
  /* 1115e708 call 0x1115f330 */
  push32(0x1115e70du); f_1115f330();
  /* 1115e70d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115e710 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 1115e716 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115e71d jge 0x1115e735 */
  if ((C.sf==C.of)) goto L_1115e735;
  /* 1115e71f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115e722 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1115e724 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1115e727 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1115e72d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1115e72f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1115e735:;
  /* 1115e735 jmp 0x1115e74e */
  goto L_1115e74e;
L_1115e737:;
  /* 1115e737 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1115e73d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1115e740 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1115e744 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 1115e748 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1115e74e:;
  /* 1115e74e jmp 0x1115f102 */
  goto L_1115f102;
L_1115e753:;
  /* 1115e753 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1115e75d jmp 0x1115f102 */
  goto L_1115f102;
L_1115e762:;
  /* 1115e762 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1115e766 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115e769 jne 0x1115e792 */
  if (!C.zf) goto L_1115e792;
  /* 1115e76b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1115e76e push eax */
  push32((uint32_t)(EAX));
  /* 1115e76f call 0x1115f330 */
  push32(0x1115e774u); f_1115f330();
  /* 1115e774 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115e777 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1115e77d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115e784 jge 0x1115e790 */
  if ((C.sf==C.of)) goto L_1115e790;
  /* 1115e786 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_1115e790:;
  /* 1115e790 jmp 0x1115e7a9 */
  goto L_1115e7a9;
L_1115e792:;
  /* 1115e792 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 1115e798 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1115e79b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1115e79f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1115e7a3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_1115e7a9:;
  /* 1115e7a9 jmp 0x1115f102 */
  goto L_1115f102;
L_1115e7ae:;
  /* 1115e7ae movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1115e7b2 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 1115e7b8 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1115e7be sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115e7c1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 1115e7c7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115e7ce ja 0x1115e83c */
  if ((!C.cf&&!C.zf)) goto L_1115e83c;
  /* 1115e7d0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1115e7d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115e7d8 mov al, byte ptr [ecx + 0x1115f171] */
  AL = (r8((uint32_t)(ECX + 0x1115f171)));
  /* 1115e7de jmp dword ptr [eax*4 + 0x1115f15d] */
  switch (EAX) {
    case 0: goto L_1115e7f0;
    case 1: goto L_1115e829;
    case 2: goto L_1115e7e5;
    case 3: goto L_1115e833;
    case 4: goto L_1115e83c;
    default: x86_unimpl("switch@0x1115e7de out of table"); return;
  }
L_1115e7e5:;
  /* 1115e7e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115e7e8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1115e7eb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1115e7ee jmp 0x1115e83c */
  goto L_1115e83c;
L_1115e7f0:;
  /* 1115e7f0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115e7f3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1115e7f6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115e7f9 jne 0x1115e81b */
  if (!C.zf) goto L_1115e81b;
  /* 1115e7fb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115e7fe movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1115e802 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115e805 jne 0x1115e81b */
  if (!C.zf) goto L_1115e81b;
  /* 1115e807 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115e80a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115e80d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1115e810 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115e813 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1115e816 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1115e819 jmp 0x1115e827 */
  goto L_1115e827;
L_1115e81b:;
  /* 1115e81b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1115e822 jmp 0x1115e5b0 */
  goto L_1115e5b0;
L_1115e827:;
  /* 1115e827 jmp 0x1115e83c */
  goto L_1115e83c;
L_1115e829:;
  /* 1115e829 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115e82c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1115e82e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1115e831 jmp 0x1115e83c */
  goto L_1115e83c;
L_1115e833:;
  /* 1115e833 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115e836 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1115e839 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1115e83c:;
  /* 1115e83c jmp 0x1115f102 */
  goto L_1115f102;
L_1115e841:;
  /* 1115e841 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1115e845 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1115e84b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1115e851 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115e854 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1115e85a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115e861 ja 0x1115ef27 */
  if ((!C.cf&&!C.zf)) goto L_1115ef27;
  /* 1115e867 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1115e86d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1115e86f mov cl, byte ptr [edx + 0x1115f1dc] */
  CL = (r8((uint32_t)(EDX + 0x1115f1dc)));
  /* 1115e875 jmp dword ptr [ecx*4 + 0x1115f1a0] */
  switch (ECX) {
    case 0: goto L_1115e87c;
    case 1: goto L_1115eb10;
    case 2: goto L_1115e9a0;
    case 3: goto L_1115ec49;
    case 4: goto L_1115e90b;
    case 5: goto L_1115e891;
    case 6: goto L_1115ec1b;
    case 7: goto L_1115eb20;
    case 8: goto L_1115eac5;
    case 9: goto L_1115ec95;
    case 10: goto L_1115ec3f;
    case 11: goto L_1115e9b6;
    case 12: goto L_1115ec33;
    case 13: goto L_1115ec55;
    case 14: goto L_1115ef27;
    default: x86_unimpl("switch@0x1115e875 out of table"); return;
  }
L_1115e87c:;
  /* 1115e87c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115e87f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 1115e884 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115e886 jne 0x1115e891 */
  if (!C.zf) goto L_1115e891;
  /* 1115e888 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115e88b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1115e88e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1115e891:;
  /* 1115e891 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115e894 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1115e89a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115e89c je 0x1115e8d7 */
  if (C.zf) goto L_1115e8d7;
  /* 1115e89e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1115e8a1 push eax */
  push32((uint32_t)(EAX));
  /* 1115e8a2 call 0x1115f370 */
  push32(0x1115e8a7u); f_1115f370();
  /* 1115e8a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115e8aa mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1115e8ae mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1115e8b2 push ecx */
  push32((uint32_t)(ECX));
  /* 1115e8b3 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1115e8b9 push edx */
  push32((uint32_t)(EDX));
  /* 1115e8ba call 0x11160450 */
  push32(0x1115e8bfu); f_11160450();
  /* 1115e8bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115e8c2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1115e8c5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115e8c9 jge 0x1115e8d5 */
  if ((C.sf==C.of)) goto L_1115e8d5;
  /* 1115e8cb mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_1115e8d5:;
  /* 1115e8d5 jmp 0x1115e8fd */
  goto L_1115e8fd;
L_1115e8d7:;
  /* 1115e8d7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1115e8da push eax */
  push32((uint32_t)(EAX));
  /* 1115e8db call 0x1115f330 */
  push32(0x1115e8e0u); f_1115f330();
  /* 1115e8e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115e8e3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1115e8ea mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 1115e8f0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 1115e8f6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1115e8fd:;
  /* 1115e8fd lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1115e903 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1115e906 jmp 0x1115ef27 */
  goto L_1115ef27;
L_1115e90b:;
  /* 1115e90b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1115e90e push eax */
  push32((uint32_t)(EAX));
  /* 1115e90f call 0x1115f330 */
  push32(0x1115e914u); f_1115f330();
  /* 1115e914 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115e917 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1115e91d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115e924 je 0x1115e932 */
  if (C.zf) goto L_1115e932;
  /* 1115e926 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1115e92c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115e930 jne 0x1115e94c */
  if (!C.zf) goto L_1115e94c;
L_1115e932:;
  /* 1115e932 mov edx, dword ptr [0x11181fb0] */
  EDX = (r32((uint32_t)(0x11181fb0)));
  /* 1115e938 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1115e93b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115e93e push eax */
  push32((uint32_t)(EAX));
  /* 1115e93f call 0x1115a390 */
  push32(0x1115e944u); f_1115a390();
  /* 1115e944 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115e947 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1115e94a jmp 0x1115e99b */
  goto L_1115e99b;
L_1115e94c:;
  /* 1115e94c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115e94f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 1115e955 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1115e957 je 0x1115e97c */
  if (C.zf) goto L_1115e97c;
  /* 1115e959 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1115e95f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1115e962 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1115e965 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1115e96b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1115e96e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1115e970 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1115e973 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1115e97a jmp 0x1115e99b */
  goto L_1115e99b;
L_1115e97c:;
  /* 1115e97c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1115e983 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1115e989 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1115e98c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1115e98f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1115e995 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 1115e998 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1115e99b:;
  /* 1115e99b jmp 0x1115ef27 */
  goto L_1115ef27;
L_1115e9a0:;
  /* 1115e9a0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115e9a3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 1115e9a9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1115e9ab jne 0x1115e9b6 */
  if (!C.zf) goto L_1115e9b6;
  /* 1115e9ad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115e9b0 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1115e9b3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1115e9b6:;
  /* 1115e9b6 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115e9bd jne 0x1115e9cb */
  if (!C.zf) goto L_1115e9cb;
  /* 1115e9bf mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 1115e9c9 jmp 0x1115e9d7 */
  goto L_1115e9d7;
L_1115e9cb:;
  /* 1115e9cb mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1115e9d1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_1115e9d7:;
  /* 1115e9d7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1115e9dd mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1115e9e3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1115e9e6 push edx */
  push32((uint32_t)(EDX));
  /* 1115e9e7 call 0x1115f330 */
  push32(0x1115e9ecu); f_1115f330();
  /* 1115e9ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115e9ef mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1115e9f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115e9f5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1115e9fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115e9fc je 0x1115ea66 */
  if (C.zf) goto L_1115ea66;
  /* 1115e9fe cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115ea02 jne 0x1115ea0d */
  if (!C.zf) goto L_1115ea0d;
  /* 1115ea04 mov ecx, dword ptr [0x11181fb4] */
  ECX = (r32((uint32_t)(0x11181fb4)));
  /* 1115ea0a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1115ea0d:;
  /* 1115ea0d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1115ea14 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115ea17 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1115ea1d:;
  /* 1115ea1d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1115ea23 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1115ea29 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115ea2c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1115ea32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115ea34 je 0x1115ea56 */
  if (C.zf) goto L_1115ea56;
  /* 1115ea36 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1115ea3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115ea3e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1115ea41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115ea43 je 0x1115ea56 */
  if (C.zf) goto L_1115ea56;
  /* 1115ea45 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1115ea4b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115ea4e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1115ea54 jmp 0x1115ea1d */
  goto L_1115ea1d;
L_1115ea56:;
  /* 1115ea56 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1115ea5c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115ea5f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1115ea61 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1115ea64 jmp 0x1115eac0 */
  goto L_1115eac0;
L_1115ea66:;
  /* 1115ea66 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115ea6a jne 0x1115ea74 */
  if (!C.zf) goto L_1115ea74;
  /* 1115ea6c mov eax, dword ptr [0x11181fb0] */
  EAX = (r32((uint32_t)(0x11181fb0)));
  /* 1115ea71 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1115ea74:;
  /* 1115ea74 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115ea77 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1115ea7d:;
  /* 1115ea7d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1115ea83 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1115ea89 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115ea8c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1115ea92 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115ea94 je 0x1115eab4 */
  if (C.zf) goto L_1115eab4;
  /* 1115ea96 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1115ea9c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1115ea9f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115eaa1 je 0x1115eab4 */
  if (C.zf) goto L_1115eab4;
  /* 1115eaa3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1115eaa9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115eaac mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1115eab2 jmp 0x1115ea7d */
  goto L_1115ea7d;
L_1115eab4:;
  /* 1115eab4 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1115eaba sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115eabd mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1115eac0:;
  /* 1115eac0 jmp 0x1115ef27 */
  goto L_1115ef27;
L_1115eac5:;
  /* 1115eac5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1115eac8 push edx */
  push32((uint32_t)(EDX));
  /* 1115eac9 call 0x1115f330 */
  push32(0x1115eaceu); f_1115f330();
  /* 1115eace add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115ead1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1115ead7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115eada and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1115eadd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115eadf je 0x1115eaf3 */
  if (C.zf) goto L_1115eaf3;
  /* 1115eae1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1115eae7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1115eaee mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1115eaf1 jmp 0x1115eb01 */
  goto L_1115eb01;
L_1115eaf3:;
  /* 1115eaf3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1115eaf9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1115eaff mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1115eb01:;
  /* 1115eb01 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1115eb0b jmp 0x1115ef27 */
  goto L_1115ef27;
L_1115eb10:;
  /* 1115eb10 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1115eb17 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1115eb1a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1115eb1d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1115eb20:;
  /* 1115eb20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115eb23 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1115eb25 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1115eb28 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1115eb2e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1115eb31 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115eb38 jge 0x1115eb46 */
  if ((C.sf==C.of)) goto L_1115eb46;
  /* 1115eb3a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1115eb44 jmp 0x1115eb62 */
  goto L_1115eb62;
L_1115eb46:;
  /* 1115eb46 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115eb4d jne 0x1115eb62 */
  if (!C.zf) goto L_1115eb62;
  /* 1115eb4f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1115eb53 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115eb56 jne 0x1115eb62 */
  if (!C.zf) goto L_1115eb62;
  /* 1115eb58 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1115eb62:;
  /* 1115eb62 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1115eb65 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115eb68 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1115eb6b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1115eb6e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115eb71 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1115eb73 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1115eb76 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1115eb7c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1115eb82 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115eb85 push ecx */
  push32((uint32_t)(ECX));
  /* 1115eb86 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1115eb8c push edx */
  push32((uint32_t)(EDX));
  /* 1115eb8d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1115eb91 push eax */
  push32((uint32_t)(EAX));
  /* 1115eb92 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115eb95 push ecx */
  push32((uint32_t)(ECX));
  /* 1115eb96 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1115eb9c push edx */
  push32((uint32_t)(EDX));
  /* 1115eb9d call dword ptr [0x111823a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111823a0))), 0x1115eba3u);
  /* 1115eba3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115eba6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115eba9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1115ebae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115ebb0 je 0x1115ebc8 */
  if (C.zf) goto L_1115ebc8;
  /* 1115ebb2 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115ebb9 jne 0x1115ebc8 */
  if (!C.zf) goto L_1115ebc8;
  /* 1115ebbb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115ebbe push ecx */
  push32((uint32_t)(ECX));
  /* 1115ebbf call dword ptr [0x111823ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x111823ac))), 0x1115ebc5u);
  /* 1115ebc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1115ebc8:;
  /* 1115ebc8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1115ebcc cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115ebcf jne 0x1115ebea */
  if (!C.zf) goto L_1115ebea;
  /* 1115ebd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115ebd4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1115ebd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115ebdb jne 0x1115ebea */
  if (!C.zf) goto L_1115ebea;
  /* 1115ebdd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115ebe0 push ecx */
  push32((uint32_t)(ECX));
  /* 1115ebe1 call dword ptr [0x111823a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111823a4))), 0x1115ebe7u);
  /* 1115ebe7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1115ebea:;
  /* 1115ebea mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115ebed movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1115ebf0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115ebf3 jne 0x1115ec07 */
  if (!C.zf) goto L_1115ec07;
  /* 1115ebf5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115ebf8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1115ebfb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1115ebfe mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115ec01 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115ec04 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1115ec07:;
  /* 1115ec07 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115ec0a push eax */
  push32((uint32_t)(EAX));
  /* 1115ec0b call 0x1115a390 */
  push32(0x1115ec10u); f_1115a390();
  /* 1115ec10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115ec13 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1115ec16 jmp 0x1115ef27 */
  goto L_1115ef27;
L_1115ec1b:;
  /* 1115ec1b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115ec1e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1115ec21 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1115ec24 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1115ec2e jmp 0x1115ecb5 */
  goto L_1115ecb5;
L_1115ec33:;
  /* 1115ec33 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1115ec3d jmp 0x1115ecb5 */
  goto L_1115ecb5;
L_1115ec3f:;
  /* 1115ec3f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1115ec49:;
  /* 1115ec49 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1115ec53 jmp 0x1115ec5f */
  goto L_1115ec5f;
L_1115ec55:;
  /* 1115ec55 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1115ec5f:;
  /* 1115ec5f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1115ec69 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115ec6c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1115ec72 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115ec74 je 0x1115ec93 */
  if (C.zf) goto L_1115ec93;
  /* 1115ec76 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1115ec7d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1115ec83 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115ec86 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1115ec8c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1115ec93:;
  /* 1115ec93 jmp 0x1115ecb5 */
  goto L_1115ecb5;
L_1115ec95:;
  /* 1115ec95 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1115ec9f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115eca2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1115eca8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1115ecaa je 0x1115ecb5 */
  if (C.zf) goto L_1115ecb5;
  /* 1115ecac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115ecaf or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1115ecb2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1115ecb5:;
  /* 1115ecb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115ecb8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1115ecbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115ecbf je 0x1115ecde */
  if (C.zf) goto L_1115ecde;
  /* 1115ecc1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1115ecc4 push ecx */
  push32((uint32_t)(ECX));
  /* 1115ecc5 call 0x1115f350 */
  push32(0x1115eccau); f_1115f350();
  /* 1115ecca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115eccd mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1115ecd3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1115ecd9 jmp 0x1115ed6f */
  goto L_1115ed6f;
L_1115ecde:;
  /* 1115ecde mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115ece1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1115ece4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115ece6 je 0x1115ed30 */
  if (C.zf) goto L_1115ed30;
  /* 1115ece8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115eceb and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1115ecee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115ecf0 je 0x1115ed10 */
  if (C.zf) goto L_1115ed10;
  /* 1115ecf2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1115ecf5 push ecx */
  push32((uint32_t)(ECX));
  /* 1115ecf6 call 0x1115f330 */
  push32(0x1115ecfbu); f_1115f330();
  /* 1115ecfb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115ecfe movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1115ed01 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1115ed02 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1115ed08 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1115ed0e jmp 0x1115ed2e */
  goto L_1115ed2e;
L_1115ed10:;
  /* 1115ed10 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1115ed13 push edx */
  push32((uint32_t)(EDX));
  /* 1115ed14 call 0x1115f330 */
  push32(0x1115ed19u); f_1115f330();
  /* 1115ed19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115ed1c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1115ed21 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1115ed22 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1115ed28 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1115ed2e:;
  /* 1115ed2e jmp 0x1115ed6f */
  goto L_1115ed6f;
L_1115ed30:;
  /* 1115ed30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115ed33 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1115ed36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115ed38 je 0x1115ed55 */
  if (C.zf) goto L_1115ed55;
  /* 1115ed3a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1115ed3d push ecx */
  push32((uint32_t)(ECX));
  /* 1115ed3e call 0x1115f330 */
  push32(0x1115ed43u); f_1115f330();
  /* 1115ed43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115ed46 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1115ed47 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1115ed4d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1115ed53 jmp 0x1115ed6f */
  goto L_1115ed6f;
L_1115ed55:;
  /* 1115ed55 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1115ed58 push edx */
  push32((uint32_t)(EDX));
  /* 1115ed59 call 0x1115f330 */
  push32(0x1115ed5eu); f_1115f330();
  /* 1115ed5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115ed61 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1115ed63 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1115ed69 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1115ed6f:;
  /* 1115ed6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115ed72 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1115ed75 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115ed77 je 0x1115edb7 */
  if (C.zf) goto L_1115edb7;
  /* 1115ed79 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115ed80 jg 0x1115edb7 */
  if ((!C.zf&&C.sf==C.of)) goto L_1115edb7;
  /* 1115ed82 jl 0x1115ed8d */
  if ((C.sf!=C.of)) goto L_1115ed8d;
  /* 1115ed84 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115ed8b jae 0x1115edb7 */
  if (!C.cf) goto L_1115edb7;
L_1115ed8d:;
  /* 1115ed8d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1115ed93 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1115ed95 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1115ed9b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115ed9e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1115eda0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1115eda6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1115edac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115edaf or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1115edb2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1115edb5 jmp 0x1115edcf */
  goto L_1115edcf;
L_1115edb7:;
  /* 1115edb7 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1115edbd mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1115edc3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1115edc9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1115edcf:;
  /* 1115edcf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115edd2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1115edd8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115edda jne 0x1115edf7 */
  if (!C.zf) goto L_1115edf7;
  /* 1115eddc mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1115ede2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1115ede8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1115edeb mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1115edf1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1115edf7:;
  /* 1115edf7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115edfe jge 0x1115ee0c */
  if ((C.sf==C.of)) goto L_1115ee0c;
  /* 1115ee00 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1115ee0a jmp 0x1115ee15 */
  goto L_1115ee15;
L_1115ee0c:;
  /* 1115ee0c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115ee0f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1115ee12 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1115ee15:;
  /* 1115ee15 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1115ee1b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1115ee21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115ee23 jne 0x1115ee2c */
  if (!C.zf) goto L_1115ee2c;
  /* 1115ee25 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1115ee2c:;
  /* 1115ee2c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1115ee2f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1115ee32:;
  /* 1115ee32 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1115ee38 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1115ee3e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115ee41 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1115ee47 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115ee49 jg 0x1115ee5f */
  if ((!C.zf&&C.sf==C.of)) goto L_1115ee5f;
  /* 1115ee4b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1115ee51 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1115ee57 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1115ee59 je 0x1115eee0 */
  if (C.zf) goto L_1115eee0;
L_1115ee5f:;
  /* 1115ee5f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1115ee65 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1115ee66 push edx */
  push32((uint32_t)(EDX));
  /* 1115ee67 push eax */
  push32((uint32_t)(EAX));
  /* 1115ee68 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1115ee6e push edx */
  push32((uint32_t)(EDX));
  /* 1115ee6f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1115ee75 push eax */
  push32((uint32_t)(EAX));
  /* 1115ee76 call 0x1115e1f0 */
  push32(0x1115ee7bu); f_1115e1f0();
  /* 1115ee7b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115ee7e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1115ee84 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1115ee8a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1115ee8b push edx */
  push32((uint32_t)(EDX));
  /* 1115ee8c push eax */
  push32((uint32_t)(EAX));
  /* 1115ee8d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1115ee93 push ecx */
  push32((uint32_t)(ECX));
  /* 1115ee94 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1115ee9a push edx */
  push32((uint32_t)(EDX));
  /* 1115ee9b call 0x1115e180 */
  push32(0x1115eea0u); f_1115e180();
  /* 1115eea0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1115eea6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1115eeac cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115eeb3 jle 0x1115eec7 */
  if ((C.zf||C.sf!=C.of)) goto L_1115eec7;
  /* 1115eeb5 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1115eebb add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115eec1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1115eec7:;
  /* 1115eec7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115eeca mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1115eed0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1115eed2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115eed5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115eed8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1115eedb jmp 0x1115ee32 */
  goto L_1115ee32;
L_1115eee0:;
  /* 1115eee0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1115eee3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115eee6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1115eee9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115eeec add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115eeef mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1115eef2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115eef5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1115eefa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115eefc je 0x1115ef27 */
  if (C.zf) goto L_1115ef27;
  /* 1115eefe mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115ef01 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1115ef04 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115ef07 jne 0x1115ef0f */
  if (!C.zf) goto L_1115ef0f;
  /* 1115ef09 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115ef0d jne 0x1115ef27 */
  if (!C.zf) goto L_1115ef27;
L_1115ef0f:;
  /* 1115ef0f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115ef12 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115ef15 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1115ef18 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115ef1b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1115ef1e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115ef21 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115ef24 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1115ef27:;
  /* 1115ef27 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115ef2e jne 0x1115f102 */
  if (!C.zf) goto L_1115f102;
  /* 1115ef34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115ef37 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1115ef3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115ef3c je 0x1115ef8d */
  if (C.zf) goto L_1115ef8d;
  /* 1115ef3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115ef41 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1115ef47 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1115ef49 je 0x1115ef5b */
  if (C.zf) goto L_1115ef5b;
  /* 1115ef4b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1115ef52 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1115ef59 jmp 0x1115ef8d */
  goto L_1115ef8d;
L_1115ef5b:;
  /* 1115ef5b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115ef5e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1115ef61 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115ef63 je 0x1115ef75 */
  if (C.zf) goto L_1115ef75;
  /* 1115ef65 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1115ef6c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1115ef73 jmp 0x1115ef8d */
  goto L_1115ef8d;
L_1115ef75:;
  /* 1115ef75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115ef78 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1115ef7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115ef7d je 0x1115ef8d */
  if (C.zf) goto L_1115ef8d;
  /* 1115ef7f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1115ef86 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1115ef8d:;
  /* 1115ef8d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1115ef93 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115ef96 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115ef99 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1115ef9f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115efa2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1115efa5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115efa7 jne 0x1115efc5 */
  if (!C.zf) goto L_1115efc5;
  /* 1115efa9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1115efaf push eax */
  push32((uint32_t)(EAX));
  /* 1115efb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115efb3 push ecx */
  push32((uint32_t)(ECX));
  /* 1115efb4 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1115efba push edx */
  push32((uint32_t)(EDX));
  /* 1115efbb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1115efbd call 0x1115f2a0 */
  push32(0x1115efc2u); f_1115f2a0();
  /* 1115efc2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1115efc5:;
  /* 1115efc5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1115efcb push eax */
  push32((uint32_t)(EAX));
  /* 1115efcc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115efcf push ecx */
  push32((uint32_t)(ECX));
  /* 1115efd0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115efd3 push edx */
  push32((uint32_t)(EDX));
  /* 1115efd4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1115efda push eax */
  push32((uint32_t)(EAX));
  /* 1115efdb call 0x1115f2e0 */
  push32(0x1115efe0u); f_1115f2e0();
  /* 1115efe0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115efe3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115efe6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1115efe9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1115efeb je 0x1115f013 */
  if (C.zf) goto L_1115f013;
  /* 1115efed mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115eff0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1115eff3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115eff5 jne 0x1115f013 */
  if (!C.zf) goto L_1115f013;
  /* 1115eff7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1115effd push eax */
  push32((uint32_t)(EAX));
  /* 1115effe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115f001 push ecx */
  push32((uint32_t)(ECX));
  /* 1115f002 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1115f008 push edx */
  push32((uint32_t)(EDX));
  /* 1115f009 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1115f00b call 0x1115f2a0 */
  push32(0x1115f010u); f_1115f2a0();
  /* 1115f010 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1115f013:;
  /* 1115f013 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115f017 je 0x1115f0c1 */
  if (C.zf) goto L_1115f0c1;
  /* 1115f01d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115f021 jle 0x1115f0c1 */
  if ((C.zf||C.sf!=C.of)) goto L_1115f0c1;
  /* 1115f027 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115f02a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1115f030 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115f033 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1115f039:;
  /* 1115f039 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1115f03f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1115f045 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115f048 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1115f04e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115f050 je 0x1115f0bf */
  if (C.zf) goto L_1115f0bf;
  /* 1115f052 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1115f058 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1115f05b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1115f062 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1115f069 push eax */
  push32((uint32_t)(EAX));
  /* 1115f06a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1115f070 push ecx */
  push32((uint32_t)(ECX));
  /* 1115f071 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1115f077 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115f07a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1115f080 call 0x11160450 */
  push32(0x1115f085u); f_11160450();
  /* 1115f085 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115f088 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1115f08e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115f095 jg 0x1115f099 */
  if ((!C.zf&&C.sf==C.of)) goto L_1115f099;
  /* 1115f097 jmp 0x1115f0bf */
  goto L_1115f0bf;
L_1115f099:;
  /* 1115f099 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1115f09f push eax */
  push32((uint32_t)(EAX));
  /* 1115f0a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115f0a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1115f0a4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1115f0aa push edx */
  push32((uint32_t)(EDX));
  /* 1115f0ab lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1115f0b1 push eax */
  push32((uint32_t)(EAX));
  /* 1115f0b2 call 0x1115f2e0 */
  push32(0x1115f0b7u); f_1115f2e0();
  /* 1115f0b7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115f0ba jmp 0x1115f039 */
  goto L_1115f039;
L_1115f0bf:;
  /* 1115f0bf jmp 0x1115f0dc */
  goto L_1115f0dc;
L_1115f0c1:;
  /* 1115f0c1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1115f0c7 push ecx */
  push32((uint32_t)(ECX));
  /* 1115f0c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115f0cb push edx */
  push32((uint32_t)(EDX));
  /* 1115f0cc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115f0cf push eax */
  push32((uint32_t)(EAX));
  /* 1115f0d0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115f0d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1115f0d4 call 0x1115f2e0 */
  push32(0x1115f0d9u); f_1115f2e0();
  /* 1115f0d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1115f0dc:;
  /* 1115f0dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115f0df and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1115f0e2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115f0e4 je 0x1115f102 */
  if (C.zf) goto L_1115f102;
  /* 1115f0e6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1115f0ec push eax */
  push32((uint32_t)(EAX));
  /* 1115f0ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115f0f0 push ecx */
  push32((uint32_t)(ECX));
  /* 1115f0f1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1115f0f7 push edx */
  push32((uint32_t)(EDX));
  /* 1115f0f8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1115f0fa call 0x1115f2a0 */
  push32(0x1115f0ffu); f_1115f2a0();
  /* 1115f0ff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1115f102:;
  /* 1115f102 jmp 0x1115e514 */
  goto L_1115e514;
L_1115f107:;
  /* 1115f107 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1115f10d pop edi */
  EDI = (pop32());
  /* 1115f10e pop esi */
  ESI = (pop32());
  /* 1115f10f pop ebx */
  EBX = (pop32());
  /* 1115f110 mov esp, ebp */
  ESP = (EBP);
  /* 1115f112 pop ebp */
  EBP = (pop32());
  /* 1115f113 ret  */
  ESPCHK(0x1115e4f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f220 @ 0x1115f220 (119 bytes, 44 insns) */
void f_1115f220(void) {
  FTRACE(0x1115f220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115f220 push ebp */
  push32((uint32_t)(EBP));
  /* 1115f221 mov ebp, esp */
  EBP = (ESP);
  /* 1115f223 push ecx */
  push32((uint32_t)(ECX));
  /* 1115f224 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115f227 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1115f22a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115f22d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115f230 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1115f233 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115f236 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115f23a jl 0x1115f262 */
  if ((C.sf!=C.of)) goto L_1115f262;
  /* 1115f23c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115f23f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1115f241 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1115f244 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1115f246 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1115f24a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1115f250 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1115f253 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115f256 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1115f258 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115f25b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115f25e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1115f260 jmp 0x1115f275 */
  goto L_1115f275;
L_1115f262:;
  /* 1115f262 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115f265 push edx */
  push32((uint32_t)(EDX));
  /* 1115f266 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115f269 push eax */
  push32((uint32_t)(EAX));
  /* 1115f26a call 0x1115e270 */
  push32(0x1115f26fu); f_1115e270();
  /* 1115f26f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115f272 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1115f275:;
  /* 1115f275 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115f279 jne 0x1115f286 */
  if (!C.zf) goto L_1115f286;
  /* 1115f27b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1115f27e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1115f284 jmp 0x1115f293 */
  goto L_1115f293;
L_1115f286:;
  /* 1115f286 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1115f289 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1115f28b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115f28e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1115f291 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1115f293:;
  /* 1115f293 mov esp, ebp */
  ESP = (EBP);
  /* 1115f295 pop ebp */
  EBP = (pop32());
  /* 1115f296 ret  */
  ESPCHK(0x1115f220u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f2a0 @ 0x1115f2a0 (53 bytes, 23 insns) */
void f_1115f2a0(void) {
  FTRACE(0x1115f2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115f2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1115f2a1 mov ebp, esp */
  EBP = (ESP);
L_1115f2a3:;
  /* 1115f2a3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115f2a6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115f2a9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115f2ac mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1115f2af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115f2b1 jle 0x1115f2d3 */
  if ((C.zf||C.sf!=C.of)) goto L_1115f2d3;
  /* 1115f2b3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1115f2b6 push edx */
  push32((uint32_t)(EDX));
  /* 1115f2b7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1115f2ba push eax */
  push32((uint32_t)(EAX));
  /* 1115f2bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115f2be push ecx */
  push32((uint32_t)(ECX));
  /* 1115f2bf call 0x1115f220 */
  push32(0x1115f2c4u); f_1115f220();
  /* 1115f2c4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115f2c7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1115f2ca cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115f2cd jne 0x1115f2d1 */
  if (!C.zf) goto L_1115f2d1;
  /* 1115f2cf jmp 0x1115f2d3 */
  goto L_1115f2d3;
L_1115f2d1:;
  /* 1115f2d1 jmp 0x1115f2a3 */
  goto L_1115f2a3;
L_1115f2d3:;
  /* 1115f2d3 pop ebp */
  EBP = (pop32());
  /* 1115f2d4 ret  */
  ESPCHK(0x1115f2a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f2e0 @ 0x1115f2e0 (74 bytes, 31 insns) */
void f_1115f2e0(void) {
  FTRACE(0x1115f2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115f2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1115f2e1 mov ebp, esp */
  EBP = (ESP);
  /* 1115f2e3 push ecx */
  push32((uint32_t)(ECX));
L_1115f2e4:;
  /* 1115f2e4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115f2e7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115f2ea sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115f2ed mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1115f2f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115f2f2 jle 0x1115f326 */
  if ((C.zf||C.sf!=C.of)) goto L_1115f326;
  /* 1115f2f4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1115f2f7 push edx */
  push32((uint32_t)(EDX));
  /* 1115f2f8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1115f2fb push eax */
  push32((uint32_t)(EAX));
  /* 1115f2fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115f2ff movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1115f302 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1115f305 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115f308 push eax */
  push32((uint32_t)(EAX));
  /* 1115f309 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115f30c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115f30f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1115f312 call 0x1115f220 */
  push32(0x1115f317u); f_1115f220();
  /* 1115f317 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115f31a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1115f31d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115f320 jne 0x1115f324 */
  if (!C.zf) goto L_1115f324;
  /* 1115f322 jmp 0x1115f326 */
  goto L_1115f326;
L_1115f324:;
  /* 1115f324 jmp 0x1115f2e4 */
  goto L_1115f2e4;
L_1115f326:;
  /* 1115f326 mov esp, ebp */
  ESP = (EBP);
  /* 1115f328 pop ebp */
  EBP = (pop32());
  /* 1115f329 ret  */
  ESPCHK(0x1115f2e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f330 @ 0x1115f330 (26 bytes, 12 insns) */
void f_1115f330(void) {
  FTRACE(0x1115f330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115f330 push ebp */
  push32((uint32_t)(EBP));
  /* 1115f331 mov ebp, esp */
  EBP = (ESP);
  /* 1115f333 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115f336 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1115f338 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115f33b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115f33e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1115f340 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115f343 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1115f345 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1115f348 pop ebp */
  EBP = (pop32());
  /* 1115f349 ret  */
  ESPCHK(0x1115f330u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f350 @ 0x1115f350 (31 bytes, 14 insns) */
void f_1115f350(void) {
  FTRACE(0x1115f350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115f350 push ebp */
  push32((uint32_t)(EBP));
  /* 1115f351 mov ebp, esp */
  EBP = (ESP);
  /* 1115f353 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115f356 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1115f358 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115f35b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115f35e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1115f360 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115f363 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1115f365 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115f368 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1115f36a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1115f36d pop ebp */
  EBP = (pop32());
  /* 1115f36e ret  */
  ESPCHK(0x1115f350u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f370 @ 0x1115f370 (27 bytes, 12 insns) */
void f_1115f370(void) {
  FTRACE(0x1115f370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115f370 push ebp */
  push32((uint32_t)(EBP));
  /* 1115f371 mov ebp, esp */
  EBP = (ESP);
  /* 1115f373 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115f376 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1115f378 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115f37b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115f37e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1115f380 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115f383 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1115f385 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1115f389 pop ebp */
  EBP = (pop32());
  /* 1115f38a ret  */
  ESPCHK(0x1115f370u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1115f390 (145 bytes, 42 insns) */
void f_1115f390(void) {
  FTRACE(0x1115f390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115f390 push ebp */
  push32((uint32_t)(EBP));
  /* 1115f391 mov ebp, esp */
  EBP = (ESP);
  /* 1115f393 push ecx */
  push32((uint32_t)(ECX));
  /* 1115f394 call 0x1115f440 */
  push32(0x1115f399u); f_1115f440();
  /* 1115f399 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115f39c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1115f39e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1115f3a5 jmp 0x1115f3b0 */
  goto L_1115f3b0;
L_1115f3a7:;
  /* 1115f3a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115f3aa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115f3ad mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1115f3b0:;
  /* 1115f3b0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115f3b4 jae 0x1115f3da */
  if (!C.cf) goto L_1115f3da;
  /* 1115f3b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115f3b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115f3bc cmp ecx, dword ptr [eax*8 + 0x11181fb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11181fb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115f3c3 jne 0x1115f3d8 */
  if (!C.zf) goto L_1115f3d8;
  /* 1115f3c5 call 0x1115f430 */
  push32(0x1115f3cau); f_1115f430();
  /* 1115f3ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115f3cd mov ecx, dword ptr [edx*8 + 0x11181fbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x11181fbc)));
  /* 1115f3d4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1115f3d6 jmp 0x1115f41d */
  goto L_1115f41d;
L_1115f3d8:;
  /* 1115f3d8 jmp 0x1115f3a7 */
  goto L_1115f3a7;
L_1115f3da:;
  /* 1115f3da cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115f3de jb 0x1115f3f3 */
  if (C.cf) goto L_1115f3f3;
  /* 1115f3e0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115f3e4 ja 0x1115f3f3 */
  if ((!C.cf&&!C.zf)) goto L_1115f3f3;
  /* 1115f3e6 call 0x1115f430 */
  push32(0x1115f3ebu); f_1115f430();
  /* 1115f3eb mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1115f3f1 jmp 0x1115f41d */
  goto L_1115f41d;
L_1115f3f3:;
  /* 1115f3f3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115f3fa jb 0x1115f412 */
  if (C.cf) goto L_1115f412;
  /* 1115f3fc cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115f403 ja 0x1115f412 */
  if ((!C.cf&&!C.zf)) goto L_1115f412;
  /* 1115f405 call 0x1115f430 */
  push32(0x1115f40au); f_1115f430();
  /* 1115f40a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1115f410 jmp 0x1115f41d */
  goto L_1115f41d;
L_1115f412:;
  /* 1115f412 call 0x1115f430 */
  push32(0x1115f417u); f_1115f430();
  /* 1115f417 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1115f41d:;
  /* 1115f41d mov esp, ebp */
  ESP = (EBP);
  /* 1115f41f pop ebp */
  EBP = (pop32());
  /* 1115f420 ret  */
  ESPCHK(0x1115f390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f430 @ 0x1115f430 (13 bytes, 6 insns) */
void f_1115f430(void) {
  FTRACE(0x1115f430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115f430 push ebp */
  push32((uint32_t)(EBP));
  /* 1115f431 mov ebp, esp */
  EBP = (ESP);
  /* 1115f433 call 0x11156fa0 */
  push32(0x1115f438u); f_11156fa0();
  /* 1115f438 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115f43b pop ebp */
  EBP = (pop32());
  /* 1115f43c ret  */
  ESPCHK(0x1115f430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f440 @ 0x1115f440 (13 bytes, 6 insns) */
void f_1115f440(void) {
  FTRACE(0x1115f440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115f440 push ebp */
  push32((uint32_t)(EBP));
  /* 1115f441 mov ebp, esp */
  EBP = (ESP);
  /* 1115f443 call 0x11156fa0 */
  push32(0x1115f448u); f_11156fa0();
  /* 1115f448 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115f44b pop ebp */
  EBP = (pop32());
  /* 1115f44c ret  */
  ESPCHK(0x1115f440u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f450 @ 0x1115f450 (664 bytes, 258 insns) [15 switch table(s)] */
void f_1115f450(void) {
  FTRACE(0x1115f450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115f450 push ebp */
  push32((uint32_t)(EBP));
  /* 1115f451 mov ebp, esp */
  EBP = (ESP);
  /* 1115f453 push edi */
  push32((uint32_t)(EDI));
  /* 1115f454 push esi */
  push32((uint32_t)(ESI));
  /* 1115f455 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1115f458 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1115f45b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1115f45e mov eax, ecx */
  EAX = (ECX);
  /* 1115f460 mov edx, ecx */
  EDX = (ECX);
  /* 1115f462 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115f464 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115f466 jbe 0x1115f470 */
  if ((C.cf||C.zf)) goto L_1115f470;
  /* 1115f468 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115f46a jb 0x1115f5e8 */
  if (C.cf) goto L_1115f5e8;
L_1115f470:;
  /* 1115f470 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1115f476 jne 0x1115f48c */
  if (!C.zf) goto L_1115f48c;
  /* 1115f478 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1115f47b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1115f47e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115f481 jb 0x1115f4ac */
  if (C.cf) goto L_1115f4ac;
  /* 1115f483 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1115f485 jmp dword ptr [edx*4 + 0x1115f598] */
  switch (EDX) {
    case 0: goto L_1115f5a8;
    case 1: goto L_1115f5b0;
    case 2: goto L_1115f5bc;
    case 3: goto L_1115f5d0;
    default: x86_unimpl("switch@0x1115f485 out of table"); return;
  }
L_1115f48c:;
  /* 1115f48c mov eax, edi */
  EAX = (EDI);
  /* 1115f48e mov edx, 3 */
  EDX = (0x3u);
  /* 1115f493 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115f496 jb 0x1115f4a4 */
  if (C.cf) goto L_1115f4a4;
  /* 1115f498 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1115f49b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115f49d jmp dword ptr [eax*4 + 0x1115f4b0] */
  switch (EAX) {
    case 1: goto L_1115f4c0;
    case 2: goto L_1115f4ec;
    case 3: goto L_1115f510;
    default: x86_unimpl("switch@0x1115f49d out of table"); return;
  }
L_1115f4a4:;
  /* 1115f4a4 jmp dword ptr [ecx*4 + 0x1115f5a8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1115f5a8)))); return;
  /* 1115f4ab nop  */
  /* nop */
L_1115f4ac:;
  /* 1115f4ac jmp dword ptr [ecx*4 + 0x1115f52c] */
  switch (ECX) {
    case 0: goto L_1115f58f;
    case 1: goto L_1115f57c;
    case 2: goto L_1115f574;
    case 3: goto L_1115f56c;
    case 4: goto L_1115f564;
    case 5: goto L_1115f55c;
    case 6: goto L_1115f554;
    case 7: goto L_1115f54c;
    default: x86_unimpl("switch@0x1115f4ac out of table"); return;
  }
  /* 1115f4b3 nop  */
  /* nop */
L_1115f4c0:;
  /* 1115f4c0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1115f4c2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1115f4c4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1115f4c6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1115f4c9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1115f4cc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1115f4cf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1115f4d2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1115f4d5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1115f4d8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1115f4db cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115f4de jb 0x1115f4ac */
  if (C.cf) goto L_1115f4ac;
  /* 1115f4e0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1115f4e2 jmp dword ptr [edx*4 + 0x1115f598] */
  switch (EDX) {
    case 0: goto L_1115f5a8;
    case 1: goto L_1115f5b0;
    case 2: goto L_1115f5bc;
    case 3: goto L_1115f5d0;
    default: x86_unimpl("switch@0x1115f4e2 out of table"); return;
  }
  /* 1115f4e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1115f4ec:;
  /* 1115f4ec and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1115f4ee mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1115f4f0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1115f4f2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1115f4f5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1115f4f8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1115f4fb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1115f4fe add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1115f501 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115f504 jb 0x1115f4ac */
  if (C.cf) goto L_1115f4ac;
  /* 1115f506 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1115f508 jmp dword ptr [edx*4 + 0x1115f598] */
  switch (EDX) {
    case 0: goto L_1115f5a8;
    case 1: goto L_1115f5b0;
    case 2: goto L_1115f5bc;
    case 3: goto L_1115f5d0;
    default: x86_unimpl("switch@0x1115f508 out of table"); return;
  }
  /* 1115f50f nop  */
  /* nop */
L_1115f510:;
  /* 1115f510 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1115f512 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1115f514 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1115f516 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1115f517 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1115f51a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1115f51b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115f51e jb 0x1115f4ac */
  if (C.cf) goto L_1115f4ac;
  /* 1115f520 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1115f522 jmp dword ptr [edx*4 + 0x1115f598] */
  switch (EDX) {
    case 0: goto L_1115f5a8;
    case 1: goto L_1115f5b0;
    case 2: goto L_1115f5bc;
    case 3: goto L_1115f5d0;
    default: x86_unimpl("switch@0x1115f522 out of table"); return;
  }
  /* 1115f529 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1115f54c:;
  /* 1115f54c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1115f550 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1115f554:;
  /* 1115f554 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1115f558 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1115f55c:;
  /* 1115f55c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1115f560 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1115f564:;
  /* 1115f564 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1115f568 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1115f56c:;
  /* 1115f56c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1115f570 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1115f574:;
  /* 1115f574 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1115f578 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1115f57c:;
  /* 1115f57c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1115f580 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1115f584 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1115f58b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1115f58d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1115f58f:;
  /* 1115f58f jmp dword ptr [edx*4 + 0x1115f598] */
  switch (EDX) {
    case 0: goto L_1115f5a8;
    case 1: goto L_1115f5b0;
    case 2: goto L_1115f5bc;
    case 3: goto L_1115f5d0;
    default: x86_unimpl("switch@0x1115f58f out of table"); return;
  }
  /* 1115f596 mov edi, edi */
  EDI = (EDI);
L_1115f5a8:;
  /* 1115f5a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115f5ab pop esi */
  ESI = (pop32());
  /* 1115f5ac pop edi */
  EDI = (pop32());
  /* 1115f5ad leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1115f5ae ret  */
  ESPCHK(0x1115f450u, _esp0);
  ESP += 4; return;
  /* 1115f5af nop  */
  /* nop */
L_1115f5b0:;
  /* 1115f5b0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1115f5b2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1115f5b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115f5b7 pop esi */
  ESI = (pop32());
  /* 1115f5b8 pop edi */
  EDI = (pop32());
  /* 1115f5b9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1115f5ba ret  */
  ESPCHK(0x1115f450u, _esp0);
  ESP += 4; return;
  /* 1115f5bb nop  */
  /* nop */
L_1115f5bc:;
  /* 1115f5bc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1115f5be mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1115f5c0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1115f5c3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1115f5c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115f5c9 pop esi */
  ESI = (pop32());
  /* 1115f5ca pop edi */
  EDI = (pop32());
  /* 1115f5cb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1115f5cc ret  */
  ESPCHK(0x1115f450u, _esp0);
  ESP += 4; return;
  /* 1115f5cd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1115f5d0:;
  /* 1115f5d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1115f5d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1115f5d4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1115f5d7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1115f5da mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1115f5dd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1115f5e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115f5e3 pop esi */
  ESI = (pop32());
  /* 1115f5e4 pop edi */
  EDI = (pop32());
  /* 1115f5e5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1115f5e6 ret  */
  ESPCHK(0x1115f450u, _esp0);
  ESP += 4; return;
  /* 1115f5e7 nop  */
  /* nop */
L_1115f5e8:;
  /* 1115f5e8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1115f5ec lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1115f5f0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1115f5f6 jne 0x1115f61c */
  if (!C.zf) goto L_1115f61c;
  /* 1115f5f8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1115f5fb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1115f5fe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115f601 jb 0x1115f610 */
  if (C.cf) goto L_1115f610;
  /* 1115f603 std  */
  C.df=1;
  /* 1115f604 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1115f606 cld  */
  C.df=0;
  /* 1115f607 jmp dword ptr [edx*4 + 0x1115f730] */
  switch (EDX) {
    case 0: goto L_1115f740;
    case 1: goto L_1115f748;
    case 2: goto L_1115f758;
    case 3: goto L_1115f76c;
    default: x86_unimpl("switch@0x1115f607 out of table"); return;
  }
  /* 1115f60e mov edi, edi */
  EDI = (EDI);
L_1115f610:;
  /* 1115f610 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1115f612 jmp dword ptr [ecx*4 + 0x1115f6e0] */
  switch (ECX) {
    case 0: goto L_1115f727;
    default: x86_unimpl("switch@0x1115f612 out of table"); return;
  }
  /* 1115f619 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1115f61c:;
  /* 1115f61c mov eax, edi */
  EAX = (EDI);
  /* 1115f61e mov edx, 3 */
  EDX = (0x3u);
  /* 1115f623 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115f626 jb 0x1115f634 */
  if (C.cf) goto L_1115f634;
  /* 1115f628 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1115f62b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115f62d jmp dword ptr [eax*4 + 0x1115f638] */
  switch (EAX) {
    case 1: goto L_1115f648;
    case 2: goto L_1115f668;
    case 3: goto L_1115f690;
    default: x86_unimpl("switch@0x1115f62d out of table"); return;
  }
L_1115f634:;
  /* 1115f634 jmp dword ptr [ecx*4 + 0x1115f730] */
  switch (ECX) {
    case 0: goto L_1115f740;
    case 1: goto L_1115f748;
    case 2: goto L_1115f758;
    case 3: goto L_1115f76c;
    default: x86_unimpl("switch@0x1115f634 out of table"); return;
  }
  /* 1115f63b nop  */
  /* nop */
L_1115f648:;
  /* 1115f648 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1115f64b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1115f64d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1115f650 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1115f651 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1115f654 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1115f655 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115f658 jb 0x1115f610 */
  if (C.cf) goto L_1115f610;
  /* 1115f65a std  */
  C.df=1;
  /* 1115f65b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1115f65d cld  */
  C.df=0;
  /* 1115f65e jmp dword ptr [edx*4 + 0x1115f730] */
  switch (EDX) {
    case 0: goto L_1115f740;
    case 1: goto L_1115f748;
    case 2: goto L_1115f758;
    case 3: goto L_1115f76c;
    default: x86_unimpl("switch@0x1115f65e out of table"); return;
  }
  /* 1115f665 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1115f668:;
  /* 1115f668 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1115f66b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1115f66d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1115f670 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1115f673 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1115f676 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1115f679 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115f67c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115f67f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115f682 jb 0x1115f610 */
  if (C.cf) goto L_1115f610;
  /* 1115f684 std  */
  C.df=1;
  /* 1115f685 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1115f687 cld  */
  C.df=0;
  /* 1115f688 jmp dword ptr [edx*4 + 0x1115f730] */
  switch (EDX) {
    case 0: goto L_1115f740;
    case 1: goto L_1115f748;
    case 2: goto L_1115f758;
    case 3: goto L_1115f76c;
    default: x86_unimpl("switch@0x1115f688 out of table"); return;
  }
  /* 1115f68f nop  */
  /* nop */
L_1115f690:;
  /* 1115f690 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1115f693 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1115f695 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1115f698 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1115f69b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1115f69e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1115f6a1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1115f6a4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1115f6a7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115f6aa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115f6ad cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115f6b0 jb 0x1115f610 */
  if (C.cf) goto L_1115f610;
  /* 1115f6b6 std  */
  C.df=1;
  /* 1115f6b7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1115f6b9 cld  */
  C.df=0;
  /* 1115f6ba jmp dword ptr [edx*4 + 0x1115f730] */
  switch (EDX) {
    case 0: goto L_1115f740;
    case 1: goto L_1115f748;
    case 2: goto L_1115f758;
    case 3: goto L_1115f76c;
    default: x86_unimpl("switch@0x1115f6ba out of table"); return;
  }
  /* 1115f6c1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1115f6c4 in al, 0xf6 */
  x86_unimpl("in @ 0x1115f6c4");
  /* 1115f6c6 adc eax, 0x15f6ec11 */
  { uint32_t _a=(EAX),_b=(0x15f6ec11u),_r=_a+_b+C.cf; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115f6cb adc esp, esi */
  { uint32_t _a=(ESP),_b=(ESI),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115f6cd not byte ptr [0x15f6fc11] */
  w8((uint32_t)(0x15f6fc11), (~(r8((uint32_t)(0x15f6fc11)))));
  /* 1115f6d3 adc dword ptr [edi + esi*8], eax */
  { uint32_t _a=(r32((uint32_t)(EDI + ESI*8))),_b=(EAX),_r=_a+_b+C.cf; w32((uint32_t)(EDI + ESI*8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1115f6d6 adc eax, 0x15f70c11 */
  { uint32_t _a=(EAX),_b=(0x15f70c11u),_r=_a+_b+C.cf; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115f6db adc dword ptr [edi + esi*8], edx */
  { uint32_t _a=(r32((uint32_t)(EDI + ESI*8))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EDI + ESI*8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1115f6e4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1115f6e8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1115f6ec mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1115f6f0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1115f6f4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1115f6f8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1115f6fc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1115f700 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1115f704 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1115f708 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1115f70c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1115f710 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1115f714 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1115f718 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1115f71c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1115f723 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1115f725 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1115f727:;
  /* 1115f727 jmp dword ptr [edx*4 + 0x1115f730] */
  switch (EDX) {
    case 0: goto L_1115f740;
    case 1: goto L_1115f748;
    case 2: goto L_1115f758;
    case 3: goto L_1115f76c;
    default: x86_unimpl("switch@0x1115f727 out of table"); return;
  }
  /* 1115f72e mov edi, edi */
  EDI = (EDI);
L_1115f740:;
  /* 1115f740 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115f743 pop esi */
  ESI = (pop32());
  /* 1115f744 pop edi */
  EDI = (pop32());
  /* 1115f745 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1115f746 ret  */
  ESPCHK(0x1115f450u, _esp0);
  ESP += 4; return;
  /* 1115f747 nop  */
  /* nop */
L_1115f748:;
  /* 1115f748 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1115f74b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1115f74e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115f751 pop esi */
  ESI = (pop32());
  /* 1115f752 pop edi */
  EDI = (pop32());
  /* 1115f753 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1115f754 ret  */
  ESPCHK(0x1115f450u, _esp0);
  ESP += 4; return;
  /* 1115f755 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1115f758:;
  /* 1115f758 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1115f75b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1115f75e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1115f761 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1115f764 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115f767 pop esi */
  ESI = (pop32());
  /* 1115f768 pop edi */
  EDI = (pop32());
  /* 1115f769 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1115f76a ret  */
  ESPCHK(0x1115f450u, _esp0);
  ESP += 4; return;
  /* 1115f76b nop  */
  /* nop */
L_1115f76c:;
  /* 1115f76c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1115f76f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1115f772 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1115f775 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1115f778 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1115f77b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1115f77e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115f781 pop esi */
  ESI = (pop32());
  /* 1115f782 pop edi */
  EDI = (pop32());
  /* 1115f783 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1115f784 ret  */
  ESPCHK(0x1115f450u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f790 @ 0x1115f790 (421 bytes, 148 insns) */
void f_1115f790(void) {
  FTRACE(0x1115f790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115f790 push ebp */
  push32((uint32_t)(EBP));
  /* 1115f791 mov ebp, esp */
  EBP = (ESP);
  /* 1115f793 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1115f795 push 0x1117f430 */
  push32((uint32_t)(0x1117f430u));
  /* 1115f79a push 0x11160668 */
  push32((uint32_t)(0x11160668u));
  /* 1115f79f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1115f7a5 push eax */
  push32((uint32_t)(EAX));
  /* 1115f7a6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1115f7ad add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115f7b0 push ebx */
  push32((uint32_t)(EBX));
  /* 1115f7b1 push esi */
  push32((uint32_t)(ESI));
  /* 1115f7b2 push edi */
  push32((uint32_t)(EDI));
  /* 1115f7b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1115f7b6 cmp dword ptr [0x111839e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111839e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115f7bd jne 0x1115f80e */
  if (!C.zf) goto L_1115f80e;
  /* 1115f7bf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1115f7c2 push eax */
  push32((uint32_t)(EAX));
  /* 1115f7c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1115f7c5 push 0x1117f42c */
  push32((uint32_t)(0x1117f42cu));
  /* 1115f7ca push 1 */
  push32((uint32_t)(0x1u));
  /* 1115f7cc call dword ptr [0x11186338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186338))), 0x1115f7d2u);
  /* 1115f7d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115f7d4 je 0x1115f7e2 */
  if (C.zf) goto L_1115f7e2;
  /* 1115f7d6 mov dword ptr [0x111839e4], 1 */
  w32((uint32_t)(0x111839e4), (0x1u));
  /* 1115f7e0 jmp 0x1115f80e */
  goto L_1115f80e;
L_1115f7e2:;
  /* 1115f7e2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1115f7e5 push ecx */
  push32((uint32_t)(ECX));
  /* 1115f7e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1115f7e8 push 0x1117f428 */
  push32((uint32_t)(0x1117f428u));
  /* 1115f7ed push 1 */
  push32((uint32_t)(0x1u));
  /* 1115f7ef push 0 */
  push32((uint32_t)(0x0u));
  /* 1115f7f1 call dword ptr [0x1118633c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118633c))), 0x1115f7f7u);
  /* 1115f7f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115f7f9 je 0x1115f807 */
  if (C.zf) goto L_1115f807;
  /* 1115f7fb mov dword ptr [0x111839e4], 2 */
  w32((uint32_t)(0x111839e4), (0x2u));
  /* 1115f805 jmp 0x1115f80e */
  goto L_1115f80e;
L_1115f807:;
  /* 1115f807 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115f809 jmp 0x1115f938 */
  goto L_1115f938;
L_1115f80e:;
  /* 1115f80e cmp dword ptr [0x111839e4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x111839e4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115f815 jne 0x1115f845 */
  if (!C.zf) goto L_1115f845;
  /* 1115f817 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115f81b jne 0x1115f826 */
  if (!C.zf) goto L_1115f826;
  /* 1115f81d mov edx, dword ptr [0x111839f0] */
  EDX = (r32((uint32_t)(0x111839f0)));
  /* 1115f823 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1115f826:;
  /* 1115f826 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1115f829 push eax */
  push32((uint32_t)(EAX));
  /* 1115f82a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1115f82d push ecx */
  push32((uint32_t)(ECX));
  /* 1115f82e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115f831 push edx */
  push32((uint32_t)(EDX));
  /* 1115f832 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115f835 push eax */
  push32((uint32_t)(EAX));
  /* 1115f836 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1115f839 push ecx */
  push32((uint32_t)(ECX));
  /* 1115f83a call dword ptr [0x1118633c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118633c))), 0x1115f840u);
  /* 1115f840 jmp 0x1115f938 */
  goto L_1115f938;
L_1115f845:;
  /* 1115f845 cmp dword ptr [0x111839e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111839e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115f84c jne 0x1115f936 */
  if (!C.zf) goto L_1115f936;
  /* 1115f852 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115f856 jne 0x1115f861 */
  if (!C.zf) goto L_1115f861;
  /* 1115f858 mov edx, dword ptr [0x11183a00] */
  EDX = (r32((uint32_t)(0x11183a00)));
  /* 1115f85e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1115f861:;
  /* 1115f861 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115f863 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115f865 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1115f868 push eax */
  push32((uint32_t)(EAX));
  /* 1115f869 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115f86c push ecx */
  push32((uint32_t)(ECX));
  /* 1115f86d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1115f870 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1115f872 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115f874 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1115f877 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115f87a push edx */
  push32((uint32_t)(EDX));
  /* 1115f87b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1115f87e push eax */
  push32((uint32_t)(EAX));
  /* 1115f87f call dword ptr [0x11186340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186340))), 0x1115f885u);
  /* 1115f885 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1115f888 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115f88c jne 0x1115f895 */
  if (!C.zf) goto L_1115f895;
  /* 1115f88e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115f890 jmp 0x1115f938 */
  goto L_1115f938;
L_1115f895:;
  /* 1115f895 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1115f89c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115f89f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1115f8a1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115f8a4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1115f8a6 call 0x1115a700 */
  push32(0x1115f8abu); f_1115a700();
  /* 1115f8ab mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1115f8ae mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1115f8b1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1115f8b4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1115f8b7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115f8ba shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1115f8bc push edx */
  push32((uint32_t)(EDX));
  /* 1115f8bd push 0 */
  push32((uint32_t)(0x0u));
  /* 1115f8bf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115f8c2 push eax */
  push32((uint32_t)(EAX));
  /* 1115f8c3 call 0x1115b2d0 */
  push32(0x1115f8c8u); f_1115b2d0();
  /* 1115f8c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115f8cb mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1115f8d2 jmp 0x1115f8eb */
  goto L_1115f8eb;
  /* 1115f8d4 mov eax, 1 */
  EAX = (0x1u);
  /* 1115f8d9 ret  */
  ESPCHK(0x1115f790u, _esp0);
  ESP += 4; return;
  /* 1115f8da mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1115f8dd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1115f8e4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1115f8eb:;
  /* 1115f8eb cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115f8ef jne 0x1115f8f5 */
  if (!C.zf) goto L_1115f8f5;
  /* 1115f8f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115f8f3 jmp 0x1115f938 */
  goto L_1115f938;
L_1115f8f5:;
  /* 1115f8f5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115f8f8 push ecx */
  push32((uint32_t)(ECX));
  /* 1115f8f9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115f8fc push edx */
  push32((uint32_t)(EDX));
  /* 1115f8fd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1115f900 push eax */
  push32((uint32_t)(EAX));
  /* 1115f901 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115f904 push ecx */
  push32((uint32_t)(ECX));
  /* 1115f905 push 1 */
  push32((uint32_t)(0x1u));
  /* 1115f907 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1115f90a push edx */
  push32((uint32_t)(EDX));
  /* 1115f90b call dword ptr [0x11186340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186340))), 0x1115f911u);
  /* 1115f911 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1115f914 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115f918 jne 0x1115f91e */
  if (!C.zf) goto L_1115f91e;
  /* 1115f91a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115f91c jmp 0x1115f938 */
  goto L_1115f938;
L_1115f91e:;
  /* 1115f91e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1115f921 push eax */
  push32((uint32_t)(EAX));
  /* 1115f922 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1115f925 push ecx */
  push32((uint32_t)(ECX));
  /* 1115f926 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115f929 push edx */
  push32((uint32_t)(EDX));
  /* 1115f92a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115f92d push eax */
  push32((uint32_t)(EAX));
  /* 1115f92e call dword ptr [0x11186338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186338))), 0x1115f934u);
  /* 1115f934 jmp 0x1115f938 */
  goto L_1115f938;
L_1115f936:;
  /* 1115f936 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1115f938:;
  /* 1115f938 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1115f93b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115f93e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1115f945 pop edi */
  EDI = (pop32());
  /* 1115f946 pop esi */
  ESI = (pop32());
  /* 1115f947 pop ebx */
  EBX = (pop32());
  /* 1115f948 mov esp, ebp */
  ESP = (EBP);
  /* 1115f94a pop ebp */
  EBP = (pop32());
  /* 1115f94b ret  */
  ESPCHK(0x1115f790u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f950 @ 0x1115f950 (727 bytes, 263 insns) */
void f_1115f950(void) {
  FTRACE(0x1115f950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115f950 push ebp */
  push32((uint32_t)(EBP));
  /* 1115f951 mov ebp, esp */
  EBP = (ESP);
  /* 1115f953 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1115f955 push 0x1117f440 */
  push32((uint32_t)(0x1117f440u));
  /* 1115f95a push 0x11160668 */
  push32((uint32_t)(0x11160668u));
  /* 1115f95f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1115f965 push eax */
  push32((uint32_t)(EAX));
  /* 1115f966 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1115f96d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115f970 push ebx */
  push32((uint32_t)(EBX));
  /* 1115f971 push esi */
  push32((uint32_t)(ESI));
  /* 1115f972 push edi */
  push32((uint32_t)(EDI));
  /* 1115f973 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1115f976 cmp dword ptr [0x11183a08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183a08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115f97d jne 0x1115f9d6 */
  if (!C.zf) goto L_1115f9d6;
  /* 1115f97f push 0 */
  push32((uint32_t)(0x0u));
  /* 1115f981 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115f983 push 1 */
  push32((uint32_t)(0x1u));
  /* 1115f985 push 0x1117f42c */
  push32((uint32_t)(0x1117f42cu));
  /* 1115f98a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1115f98f push 0 */
  push32((uint32_t)(0x0u));
  /* 1115f991 call dword ptr [0x11186330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186330))), 0x1115f997u);
  /* 1115f997 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115f999 je 0x1115f9a7 */
  if (C.zf) goto L_1115f9a7;
  /* 1115f99b mov dword ptr [0x11183a08], 1 */
  w32((uint32_t)(0x11183a08), (0x1u));
  /* 1115f9a5 jmp 0x1115f9d6 */
  goto L_1115f9d6;
L_1115f9a7:;
  /* 1115f9a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115f9a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115f9ab push 1 */
  push32((uint32_t)(0x1u));
  /* 1115f9ad push 0x1117f428 */
  push32((uint32_t)(0x1117f428u));
  /* 1115f9b2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1115f9b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115f9b9 call dword ptr [0x11186334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186334))), 0x1115f9bfu);
  /* 1115f9bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115f9c1 je 0x1115f9cf */
  if (C.zf) goto L_1115f9cf;
  /* 1115f9c3 mov dword ptr [0x11183a08], 2 */
  w32((uint32_t)(0x11183a08), (0x2u));
  /* 1115f9cd jmp 0x1115f9d6 */
  goto L_1115f9d6;
L_1115f9cf:;
  /* 1115f9cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115f9d1 jmp 0x1115fc41 */
  goto L_1115fc41;
L_1115f9d6:;
  /* 1115f9d6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115f9da jle 0x1115f9ef */
  if ((C.zf||C.sf!=C.of)) goto L_1115f9ef;
  /* 1115f9dc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1115f9df push eax */
  push32((uint32_t)(EAX));
  /* 1115f9e0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1115f9e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1115f9e4 call 0x1115fc60 */
  push32(0x1115f9e9u); f_1115fc60();
  /* 1115f9e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115f9ec mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1115f9ef:;
  /* 1115f9ef cmp dword ptr [0x11183a08], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11183a08))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115f9f6 jne 0x1115fa1b */
  if (!C.zf) goto L_1115fa1b;
  /* 1115f9f8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1115f9fb push edx */
  push32((uint32_t)(EDX));
  /* 1115f9fc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1115f9ff push eax */
  push32((uint32_t)(EAX));
  /* 1115fa00 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1115fa03 push ecx */
  push32((uint32_t)(ECX));
  /* 1115fa04 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1115fa07 push edx */
  push32((uint32_t)(EDX));
  /* 1115fa08 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115fa0b push eax */
  push32((uint32_t)(EAX));
  /* 1115fa0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115fa0f push ecx */
  push32((uint32_t)(ECX));
  /* 1115fa10 call dword ptr [0x11186334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186334))), 0x1115fa16u);
  /* 1115fa16 jmp 0x1115fc41 */
  goto L_1115fc41;
L_1115fa1b:;
  /* 1115fa1b cmp dword ptr [0x11183a08], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11183a08))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115fa22 jne 0x1115fc3f */
  if (!C.zf) goto L_1115fc3f;
  /* 1115fa28 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115fa2c jne 0x1115fa37 */
  if (!C.zf) goto L_1115fa37;
  /* 1115fa2e mov edx, dword ptr [0x11183a00] */
  EDX = (r32((uint32_t)(0x11183a00)));
  /* 1115fa34 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1115fa37:;
  /* 1115fa37 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115fa39 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115fa3b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1115fa3e push eax */
  push32((uint32_t)(EAX));
  /* 1115fa3f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1115fa42 push ecx */
  push32((uint32_t)(ECX));
  /* 1115fa43 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1115fa46 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1115fa48 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115fa4a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1115fa4d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115fa50 push edx */
  push32((uint32_t)(EDX));
  /* 1115fa51 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1115fa54 push eax */
  push32((uint32_t)(EAX));
  /* 1115fa55 call dword ptr [0x11186340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186340))), 0x1115fa5bu);
  /* 1115fa5b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1115fa5e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115fa62 jne 0x1115fa6b */
  if (!C.zf) goto L_1115fa6b;
  /* 1115fa64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115fa66 jmp 0x1115fc41 */
  goto L_1115fc41;
L_1115fa6b:;
  /* 1115fa6b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1115fa72 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1115fa75 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1115fa77 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115fa7a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1115fa7c call 0x1115a700 */
  push32(0x1115fa81u); f_1115a700();
  /* 1115fa81 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 1115fa84 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1115fa87 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1115fa8a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1115fa8d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1115fa94 jmp 0x1115faad */
  goto L_1115faad;
  /* 1115fa96 mov eax, 1 */
  EAX = (0x1u);
  /* 1115fa9b ret  */
  ESPCHK(0x1115f950u, _esp0);
  ESP += 4; return;
  /* 1115fa9c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1115fa9f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1115faa6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1115faad:;
  /* 1115faad cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115fab1 jne 0x1115faba */
  if (!C.zf) goto L_1115faba;
  /* 1115fab3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115fab5 jmp 0x1115fc41 */
  goto L_1115fc41;
L_1115faba:;
  /* 1115faba mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1115fabd push edx */
  push32((uint32_t)(EDX));
  /* 1115fabe mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115fac1 push eax */
  push32((uint32_t)(EAX));
  /* 1115fac2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1115fac5 push ecx */
  push32((uint32_t)(ECX));
  /* 1115fac6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1115fac9 push edx */
  push32((uint32_t)(EDX));
  /* 1115faca push 1 */
  push32((uint32_t)(0x1u));
  /* 1115facc mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1115facf push eax */
  push32((uint32_t)(EAX));
  /* 1115fad0 call dword ptr [0x11186340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186340))), 0x1115fad6u);
  /* 1115fad6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115fad8 jne 0x1115fae1 */
  if (!C.zf) goto L_1115fae1;
  /* 1115fada xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115fadc jmp 0x1115fc41 */
  goto L_1115fc41;
L_1115fae1:;
  /* 1115fae1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115fae3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115fae5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1115fae8 push ecx */
  push32((uint32_t)(ECX));
  /* 1115fae9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115faec push edx */
  push32((uint32_t)(EDX));
  /* 1115faed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115faf0 push eax */
  push32((uint32_t)(EAX));
  /* 1115faf1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115faf4 push ecx */
  push32((uint32_t)(ECX));
  /* 1115faf5 call dword ptr [0x11186330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186330))), 0x1115fafbu);
  /* 1115fafb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1115fafe cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115fb02 jne 0x1115fb0b */
  if (!C.zf) goto L_1115fb0b;
  /* 1115fb04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115fb06 jmp 0x1115fc41 */
  goto L_1115fc41;
L_1115fb0b:;
  /* 1115fb0b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115fb0e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 1115fb14 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115fb16 je 0x1115fb5b */
  if (C.zf) goto L_1115fb5b;
  /* 1115fb18 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115fb1c je 0x1115fb56 */
  if (C.zf) goto L_1115fb56;
  /* 1115fb1e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1115fb21 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115fb24 jle 0x1115fb2d */
  if ((C.zf||C.sf!=C.of)) goto L_1115fb2d;
  /* 1115fb26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115fb28 jmp 0x1115fc41 */
  goto L_1115fc41;
L_1115fb2d:;
  /* 1115fb2d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1115fb30 push ecx */
  push32((uint32_t)(ECX));
  /* 1115fb31 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1115fb34 push edx */
  push32((uint32_t)(EDX));
  /* 1115fb35 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1115fb38 push eax */
  push32((uint32_t)(EAX));
  /* 1115fb39 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115fb3c push ecx */
  push32((uint32_t)(ECX));
  /* 1115fb3d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115fb40 push edx */
  push32((uint32_t)(EDX));
  /* 1115fb41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115fb44 push eax */
  push32((uint32_t)(EAX));
  /* 1115fb45 call dword ptr [0x11186330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186330))), 0x1115fb4bu);
  /* 1115fb4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115fb4d jne 0x1115fb56 */
  if (!C.zf) goto L_1115fb56;
  /* 1115fb4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115fb51 jmp 0x1115fc41 */
  goto L_1115fc41;
L_1115fb56:;
  /* 1115fb56 jmp 0x1115fc3a */
  goto L_1115fc3a;
L_1115fb5b:;
  /* 1115fb5b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1115fb5e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1115fb61 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1115fb68 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1115fb6b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1115fb6d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115fb70 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1115fb72 call 0x1115a700 */
  push32(0x1115fb77u); f_1115a700();
  /* 1115fb77 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1115fb7a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1115fb7d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1115fb80 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1115fb83 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1115fb8a jmp 0x1115fba3 */
  goto L_1115fba3;
  /* 1115fb8c mov eax, 1 */
  EAX = (0x1u);
  /* 1115fb91 ret  */
  ESPCHK(0x1115f950u, _esp0);
  ESP += 4; return;
  /* 1115fb92 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1115fb95 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1115fb9c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1115fba3:;
  /* 1115fba3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115fba7 jne 0x1115fbb0 */
  if (!C.zf) goto L_1115fbb0;
  /* 1115fba9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115fbab jmp 0x1115fc41 */
  goto L_1115fc41;
L_1115fbb0:;
  /* 1115fbb0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1115fbb3 push eax */
  push32((uint32_t)(EAX));
  /* 1115fbb4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115fbb7 push ecx */
  push32((uint32_t)(ECX));
  /* 1115fbb8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1115fbbb push edx */
  push32((uint32_t)(EDX));
  /* 1115fbbc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115fbbf push eax */
  push32((uint32_t)(EAX));
  /* 1115fbc0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115fbc3 push ecx */
  push32((uint32_t)(ECX));
  /* 1115fbc4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115fbc7 push edx */
  push32((uint32_t)(EDX));
  /* 1115fbc8 call dword ptr [0x11186330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186330))), 0x1115fbceu);
  /* 1115fbce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115fbd0 jne 0x1115fbd6 */
  if (!C.zf) goto L_1115fbd6;
  /* 1115fbd2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115fbd4 jmp 0x1115fc41 */
  goto L_1115fc41;
L_1115fbd6:;
  /* 1115fbd6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115fbda jne 0x1115fc0a */
  if (!C.zf) goto L_1115fc0a;
  /* 1115fbdc push 0 */
  push32((uint32_t)(0x0u));
  /* 1115fbde push 0 */
  push32((uint32_t)(0x0u));
  /* 1115fbe0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115fbe2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115fbe4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1115fbe7 push eax */
  push32((uint32_t)(EAX));
  /* 1115fbe8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115fbeb push ecx */
  push32((uint32_t)(ECX));
  /* 1115fbec push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1115fbf1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1115fbf4 push edx */
  push32((uint32_t)(EDX));
  /* 1115fbf5 call dword ptr [0x1118638c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118638c))), 0x1115fbfbu);
  /* 1115fbfb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1115fbfe cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115fc02 jne 0x1115fc08 */
  if (!C.zf) goto L_1115fc08;
  /* 1115fc04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115fc06 jmp 0x1115fc41 */
  goto L_1115fc41;
L_1115fc08:;
  /* 1115fc08 jmp 0x1115fc3a */
  goto L_1115fc3a;
L_1115fc0a:;
  /* 1115fc0a push 0 */
  push32((uint32_t)(0x0u));
  /* 1115fc0c push 0 */
  push32((uint32_t)(0x0u));
  /* 1115fc0e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1115fc11 push eax */
  push32((uint32_t)(EAX));
  /* 1115fc12 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1115fc15 push ecx */
  push32((uint32_t)(ECX));
  /* 1115fc16 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1115fc19 push edx */
  push32((uint32_t)(EDX));
  /* 1115fc1a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115fc1d push eax */
  push32((uint32_t)(EAX));
  /* 1115fc1e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1115fc23 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1115fc26 push ecx */
  push32((uint32_t)(ECX));
  /* 1115fc27 call dword ptr [0x1118638c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118638c))), 0x1115fc2du);
  /* 1115fc2d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1115fc30 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115fc34 jne 0x1115fc3a */
  if (!C.zf) goto L_1115fc3a;
  /* 1115fc36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115fc38 jmp 0x1115fc41 */
  goto L_1115fc41;
L_1115fc3a:;
  /* 1115fc3a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1115fc3d jmp 0x1115fc41 */
  goto L_1115fc41;
L_1115fc3f:;
  /* 1115fc3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1115fc41:;
  /* 1115fc41 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1115fc44 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115fc47 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1115fc4e pop edi */
  EDI = (pop32());
  /* 1115fc4f pop esi */
  ESI = (pop32());
  /* 1115fc50 pop ebx */
  EBX = (pop32());
  /* 1115fc51 mov esp, ebp */
  ESP = (EBP);
  /* 1115fc53 pop ebp */
  EBP = (pop32());
  /* 1115fc54 ret  */
  ESPCHK(0x1115f950u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc60 @ 0x1115fc60 (80 bytes, 32 insns) */
void f_1115fc60(void) {
  FTRACE(0x1115fc60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115fc60 push ebp */
  push32((uint32_t)(EBP));
  /* 1115fc61 mov ebp, esp */
  EBP = (ESP);
  /* 1115fc63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115fc66 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115fc69 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1115fc6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115fc6f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1115fc72:;
  /* 1115fc72 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115fc75 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115fc78 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115fc7b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1115fc7e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115fc80 je 0x1115fc97 */
  if (C.zf) goto L_1115fc97;
  /* 1115fc82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115fc85 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1115fc88 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115fc8a je 0x1115fc97 */
  if (C.zf) goto L_1115fc97;
  /* 1115fc8c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115fc8f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115fc92 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1115fc95 jmp 0x1115fc72 */
  goto L_1115fc72;
L_1115fc97:;
  /* 1115fc97 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115fc9a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1115fc9d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115fc9f jne 0x1115fca9 */
  if (!C.zf) goto L_1115fca9;
  /* 1115fca1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115fca4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115fca7 jmp 0x1115fcac */
  goto L_1115fcac;
L_1115fca9:;
  /* 1115fca9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1115fcac:;
  /* 1115fcac mov esp, ebp */
  ESP = (EBP);
  /* 1115fcae pop ebp */
  EBP = (pop32());
  /* 1115fcaf ret  */
  ESPCHK(0x1115fc60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fcb0 @ 0x1115fcb0 (130 bytes, 43 insns) */
void f_1115fcb0(void) {
  FTRACE(0x1115fcb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115fcb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1115fcb1 mov ebp, esp */
  EBP = (ESP);
  /* 1115fcb3 push ecx */
  push32((uint32_t)(ECX));
  /* 1115fcb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115fcb7 cmp eax, dword ptr [0x111852fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x111852fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115fcbd jae 0x1115fce1 */
  if (!C.cf) goto L_1115fce1;
  /* 1115fcbf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115fcc2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1115fcc5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115fcc8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1115fccb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1115fcce mov eax, dword ptr [ecx*4 + 0x111851c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x111851c0)));
  /* 1115fcd5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1115fcda and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1115fcdd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1115fcdf jne 0x1115fcfc */
  if (!C.zf) goto L_1115fcfc;
L_1115fce1:;
  /* 1115fce1 call 0x1115f430 */
  push32(0x1115fce6u); f_1115f430();
  /* 1115fce6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1115fcec call 0x1115f440 */
  push32(0x1115fcf1u); f_1115f440();
  /* 1115fcf1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1115fcf7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1115fcfa jmp 0x1115fd2e */
  goto L_1115fd2e;
L_1115fcfc:;
  /* 1115fcfc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115fcff push edx */
  push32((uint32_t)(EDX));
  /* 1115fd00 call 0x11160c50 */
  push32(0x1115fd05u); f_11160c50();
  /* 1115fd05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115fd08 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1115fd0b push eax */
  push32((uint32_t)(EAX));
  /* 1115fd0c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115fd0f push ecx */
  push32((uint32_t)(ECX));
  /* 1115fd10 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115fd13 push edx */
  push32((uint32_t)(EDX));
  /* 1115fd14 call 0x1115fd40 */
  push32(0x1115fd19u); f_1115fd40();
  /* 1115fd19 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115fd1c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1115fd1f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115fd22 push eax */
  push32((uint32_t)(EAX));
  /* 1115fd23 call 0x11160ce0 */
  push32(0x1115fd28u); f_11160ce0();
  /* 1115fd28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115fd2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1115fd2e:;
  /* 1115fd2e mov esp, ebp */
  ESP = (EBP);
  /* 1115fd30 pop ebp */
  EBP = (pop32());
  /* 1115fd31 ret  */
  ESPCHK(0x1115fcb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd40 @ 0x1115fd40 (178 bytes, 56 insns) */
void f_1115fd40(void) {
  FTRACE(0x1115fd40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115fd40 push ebp */
  push32((uint32_t)(EBP));
  /* 1115fd41 mov ebp, esp */
  EBP = (ESP);
  /* 1115fd43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115fd46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115fd49 push eax */
  push32((uint32_t)(EAX));
  /* 1115fd4a call 0x11160ad0 */
  push32(0x1115fd4fu); f_11160ad0();
  /* 1115fd4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115fd52 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1115fd55 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115fd59 jne 0x1115fd6e */
  if (!C.zf) goto L_1115fd6e;
  /* 1115fd5b call 0x1115f430 */
  push32(0x1115fd60u); f_1115f430();
  /* 1115fd60 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1115fd66 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1115fd69 jmp 0x1115fdee */
  goto L_1115fdee;
L_1115fd6e:;
  /* 1115fd6e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1115fd71 push ecx */
  push32((uint32_t)(ECX));
  /* 1115fd72 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115fd74 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115fd77 push edx */
  push32((uint32_t)(EDX));
  /* 1115fd78 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1115fd7b push eax */
  push32((uint32_t)(EAX));
  /* 1115fd7c call dword ptr [0x1118632c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118632c))), 0x1115fd82u);
  /* 1115fd82 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1115fd85 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115fd89 jne 0x1115fd96 */
  if (!C.zf) goto L_1115fd96;
  /* 1115fd8b call dword ptr [0x11186400] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186400))), 0x1115fd91u);
  /* 1115fd91 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1115fd94 jmp 0x1115fd9d */
  goto L_1115fd9d;
L_1115fd96:;
  /* 1115fd96 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1115fd9d:;
  /* 1115fd9d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115fda1 je 0x1115fdb4 */
  if (C.zf) goto L_1115fdb4;
  /* 1115fda3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115fda6 push ecx */
  push32((uint32_t)(ECX));
  /* 1115fda7 call 0x1115f390 */
  push32(0x1115fdacu); f_1115f390();
  /* 1115fdac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115fdaf or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1115fdb2 jmp 0x1115fdee */
  goto L_1115fdee;
L_1115fdb4:;
  /* 1115fdb4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115fdb7 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1115fdba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115fdbd and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1115fdc0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1115fdc3 mov ecx, dword ptr [edx*4 + 0x111851c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x111851c0)));
  /* 1115fdca mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1115fdce and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 1115fdd1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115fdd4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1115fdd7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115fdda and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1115fddd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1115fde0 mov eax, dword ptr [eax*4 + 0x111851c0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x111851c0)));
  /* 1115fde7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1115fdeb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1115fdee:;
  /* 1115fdee mov esp, ebp */
  ESP = (EBP);
  /* 1115fdf0 pop ebp */
  EBP = (pop32());
  /* 1115fdf1 ret  */
  ESPCHK(0x1115fd40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe00 @ 0x1115fe00 (130 bytes, 43 insns) */
void f_1115fe00(void) {
  FTRACE(0x1115fe00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115fe00 push ebp */
  push32((uint32_t)(EBP));
  /* 1115fe01 mov ebp, esp */
  EBP = (ESP);
  /* 1115fe03 push ecx */
  push32((uint32_t)(ECX));
  /* 1115fe04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115fe07 cmp eax, dword ptr [0x111852fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x111852fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115fe0d jae 0x1115fe31 */
  if (!C.cf) goto L_1115fe31;
  /* 1115fe0f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115fe12 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1115fe15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115fe18 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1115fe1b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1115fe1e mov eax, dword ptr [ecx*4 + 0x111851c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x111851c0)));
  /* 1115fe25 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1115fe2a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1115fe2d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1115fe2f jne 0x1115fe4c */
  if (!C.zf) goto L_1115fe4c;
L_1115fe31:;
  /* 1115fe31 call 0x1115f430 */
  push32(0x1115fe36u); f_1115f430();
  /* 1115fe36 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1115fe3c call 0x1115f440 */
  push32(0x1115fe41u); f_1115f440();
  /* 1115fe41 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1115fe47 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1115fe4a jmp 0x1115fe7e */
  goto L_1115fe7e;
L_1115fe4c:;
  /* 1115fe4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115fe4f push edx */
  push32((uint32_t)(EDX));
  /* 1115fe50 call 0x11160c50 */
  push32(0x1115fe55u); f_11160c50();
  /* 1115fe55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115fe58 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1115fe5b push eax */
  push32((uint32_t)(EAX));
  /* 1115fe5c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115fe5f push ecx */
  push32((uint32_t)(ECX));
  /* 1115fe60 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115fe63 push edx */
  push32((uint32_t)(EDX));
  /* 1115fe64 call 0x1115fe90 */
  push32(0x1115fe69u); f_1115fe90();
  /* 1115fe69 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115fe6c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1115fe6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115fe72 push eax */
  push32((uint32_t)(EAX));
  /* 1115fe73 call 0x11160ce0 */
  push32(0x1115fe78u); f_11160ce0();
  /* 1115fe78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115fe7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1115fe7e:;
  /* 1115fe7e mov esp, ebp */
  ESP = (EBP);
  /* 1115fe80 pop ebp */
  EBP = (pop32());
  /* 1115fe81 ret  */
  ESPCHK(0x1115fe00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe90 @ 0x1115fe90 (627 bytes, 182 insns) */
void f_1115fe90(void) {
  FTRACE(0x1115fe90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115fe90 push ebp */
  push32((uint32_t)(EBP));
  /* 1115fe91 mov ebp, esp */
  EBP = (ESP);
  /* 1115fe93 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115fe99 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1115fea0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115fea3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 1115fea9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115fead jne 0x1115feb6 */
  if (!C.zf) goto L_1115feb6;
  /* 1115feaf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115feb1 jmp 0x111600ff */
  goto L_111600ff;
L_1115feb6:;
  /* 1115feb6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115feb9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1115febc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115febf and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1115fec2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1115fec5 mov eax, dword ptr [ecx*4 + 0x111851c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x111851c0)));
  /* 1115fecc movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1115fed1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1115fed4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1115fed6 je 0x1115fee8 */
  if (C.zf) goto L_1115fee8;
  /* 1115fed8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1115feda push 0 */
  push32((uint32_t)(0x0u));
  /* 1115fedc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115fedf push edx */
  push32((uint32_t)(EDX));
  /* 1115fee0 call 0x1115fd40 */
  push32(0x1115fee5u); f_1115fd40();
  /* 1115fee5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1115fee8:;
  /* 1115fee8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115feeb sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1115feee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115fef1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1115fef4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1115fef7 mov edx, dword ptr [eax*4 + 0x111851c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x111851c0)));
  /* 1115fefe movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1115ff03 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1115ff08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115ff0a je 0x1116001c */
  if (C.zf) goto L_1116001c;
  /* 1115ff10 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115ff13 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1115ff16 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1115ff1d:;
  /* 1115ff1d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115ff20 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115ff23 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115ff26 jae 0x1116001a */
  if (!C.cf) goto L_1116001a;
  /* 1115ff2c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1115ff32 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1115ff35:;
  /* 1115ff35 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115ff38 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1115ff3e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115ff40 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115ff46 jge 0x1115ffa7 */
  if ((C.sf==C.of)) goto L_1115ffa7;
  /* 1115ff48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115ff4b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115ff4e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115ff51 jae 0x1115ffa7 */
  if (!C.cf) goto L_1115ffa7;
  /* 1115ff53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115ff56 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1115ff58 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1115ff5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115ff61 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115ff64 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1115ff67 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1115ff6e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115ff71 jne 0x1115ff91 */
  if (!C.zf) goto L_1115ff91;
  /* 1115ff73 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 1115ff79 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115ff7c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 1115ff82 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115ff85 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 1115ff88 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115ff8b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115ff8e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1115ff91:;
  /* 1115ff91 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115ff94 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1115ff9a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1115ff9c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115ff9f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115ffa2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1115ffa5 jmp 0x1115ff35 */
  goto L_1115ff35;
L_1115ffa7:;
  /* 1115ffa7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115ffa9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1115ffaf push edx */
  push32((uint32_t)(EDX));
  /* 1115ffb0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115ffb3 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 1115ffb9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115ffbb push eax */
  push32((uint32_t)(EAX));
  /* 1115ffbc lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1115ffc2 push edx */
  push32((uint32_t)(EDX));
  /* 1115ffc3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115ffc6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1115ffc9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115ffcc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1115ffcf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1115ffd2 mov edx, dword ptr [eax*4 + 0x111851c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x111851c0)));
  /* 1115ffd9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1115ffdc push eax */
  push32((uint32_t)(EAX));
  /* 1115ffdd call dword ptr [0x111863c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863c4))), 0x1115ffe3u);
  /* 1115ffe3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115ffe5 je 0x1116000a */
  if (C.zf) goto L_1116000a;
  /* 1115ffe7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115ffea add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115fff0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1115fff3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115fff6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1115fffc sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115fffe cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11160004 jge 0x11160008 */
  if ((C.sf==C.of)) goto L_11160008;
  /* 11160006 jmp 0x1116001a */
  goto L_1116001a;
L_11160008:;
  /* 11160008 jmp 0x11160015 */
  goto L_11160015;
L_1116000a:;
  /* 1116000a call dword ptr [0x11186400] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186400))), 0x11160010u);
  /* 11160010 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11160013 jmp 0x1116001a */
  goto L_1116001a;
L_11160015:;
  /* 11160015 jmp 0x1115ff1d */
  goto L_1115ff1d;
L_1116001a:;
  /* 1116001a jmp 0x1116006c */
  goto L_1116006c;
L_1116001c:;
  /* 1116001c push 0 */
  push32((uint32_t)(0x0u));
  /* 1116001e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 11160024 push ecx */
  push32((uint32_t)(ECX));
  /* 11160025 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11160028 push edx */
  push32((uint32_t)(EDX));
  /* 11160029 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1116002c push eax */
  push32((uint32_t)(EAX));
  /* 1116002d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11160030 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11160033 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11160036 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11160039 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1116003c mov eax, dword ptr [ecx*4 + 0x111851c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x111851c0)));
  /* 11160043 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 11160046 push ecx */
  push32((uint32_t)(ECX));
  /* 11160047 call dword ptr [0x111863c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863c4))), 0x1116004du);
  /* 1116004d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1116004f je 0x11160063 */
  if (C.zf) goto L_11160063;
  /* 11160051 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11160058 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1116005e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11160061 jmp 0x1116006c */
  goto L_1116006c;
L_11160063:;
  /* 11160063 call dword ptr [0x11186400] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186400))), 0x11160069u);
  /* 11160069 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1116006c:;
  /* 1116006c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11160070 jne 0x111600f6 */
  if (!C.zf) goto L_111600f6;
  /* 11160076 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116007a je 0x111600aa */
  if (C.zf) goto L_111600aa;
  /* 1116007c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11160080 jne 0x11160099 */
  if (!C.zf) goto L_11160099;
  /* 11160082 call 0x1115f430 */
  push32(0x11160087u); f_1115f430();
  /* 11160087 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1116008d call 0x1115f440 */
  push32(0x11160092u); f_1115f440();
  /* 11160092 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11160095 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11160097 jmp 0x111600a5 */
  goto L_111600a5;
L_11160099:;
  /* 11160099 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1116009c push edx */
  push32((uint32_t)(EDX));
  /* 1116009d call 0x1115f390 */
  push32(0x111600a2u); f_1115f390();
  /* 111600a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111600a5:;
  /* 111600a5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111600a8 jmp 0x111600ff */
  goto L_111600ff;
L_111600aa:;
  /* 111600aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111600ad sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 111600b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111600b3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 111600b6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111600b9 mov edx, dword ptr [eax*4 + 0x111851c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x111851c0)));
  /* 111600c0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 111600c5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 111600c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111600ca je 0x111600db */
  if (C.zf) goto L_111600db;
  /* 111600cc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111600cf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 111600d2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111600d5 jne 0x111600db */
  if (!C.zf) goto L_111600db;
  /* 111600d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111600d9 jmp 0x111600ff */
  goto L_111600ff;
L_111600db:;
  /* 111600db call 0x1115f430 */
  push32(0x111600e0u); f_1115f430();
  /* 111600e0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 111600e6 call 0x1115f440 */
  push32(0x111600ebu); f_1115f440();
  /* 111600eb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 111600f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111600f4 jmp 0x111600ff */
  goto L_111600ff;
L_111600f6:;
  /* 111600f6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111600f9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_111600ff:;
  /* 111600ff mov esp, ebp */
  ESP = (EBP);
  /* 11160101 pop ebp */
  EBP = (pop32());
  /* 11160102 ret  */
  ESPCHK(0x1115fe90u, _esp0);
  ESP += 4; return;
}

/* FUN_10010110 @ 0x11160110 (199 bytes, 68 insns) */
void f_11160110(void) {
  FTRACE(0x11160110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11160110 push ebp */
  push32((uint32_t)(EBP));
  /* 11160111 mov ebp, esp */
  EBP = (ESP);
  /* 11160113 push ecx */
  push32((uint32_t)(ECX));
  /* 11160114 push ebx */
  push32((uint32_t)(EBX));
  /* 11160115 push esi */
  push32((uint32_t)(ESI));
  /* 11160116 push edi */
  push32((uint32_t)(EDI));
L_11160117:;
  /* 11160117 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116011b jne 0x1116013b */
  if (!C.zf) goto L_1116013b;
  /* 1116011d push 0x1117f38c */
  push32((uint32_t)(0x1117f38cu));
  /* 11160122 push 0 */
  push32((uint32_t)(0x0u));
  /* 11160124 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 11160126 push 0x1117f458 */
  push32((uint32_t)(0x1117f458u));
  /* 1116012b push 2 */
  push32((uint32_t)(0x2u));
  /* 1116012d call 0x11156620 */
  push32(0x11160132u); f_11156620();
  /* 11160132 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11160135 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11160138 jne 0x1116013b */
  if (!C.zf) goto L_1116013b;
  /* 1116013a int3  */
  x86_unimpl("int3 @ 0x1116013a");
L_1116013b:;
  /* 1116013b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1116013d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1116013f jne 0x11160117 */
  if (!C.zf) goto L_11160117;
  /* 11160141 mov ecx, dword ptr [0x11183a0c] */
  ECX = (r32((uint32_t)(0x11183a0c)));
  /* 11160147 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116014a mov dword ptr [0x11183a0c], ecx */
  w32((uint32_t)(0x11183a0c), (ECX));
  /* 11160150 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11160153 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11160156 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 11160158 push 0x1117f458 */
  push32((uint32_t)(0x1117f458u));
  /* 1116015d push 2 */
  push32((uint32_t)(0x2u));
  /* 1116015f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11160164 call 0x11157560 */
  push32(0x11160169u); f_11157560();
  /* 11160169 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116016c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1116016f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11160172 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11160175 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11160179 je 0x11160196 */
  if (C.zf) goto L_11160196;
  /* 1116017b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1116017e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11160181 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11160184 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11160187 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1116018a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1116018d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 11160194 jmp 0x111601bb */
  goto L_111601bb;
L_11160196:;
  /* 11160196 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11160199 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1116019c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1116019f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111601a2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 111601a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111601a8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111601ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111601ae mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 111601b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111601b4 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_111601bb:;
  /* 111601bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111601be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111601c1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 111601c4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 111601c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111601c9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 111601d0 pop edi */
  EDI = (pop32());
  /* 111601d1 pop esi */
  ESI = (pop32());
  /* 111601d2 pop ebx */
  EBX = (pop32());
  /* 111601d3 mov esp, ebp */
  ESP = (EBP);
  /* 111601d5 pop ebp */
  EBP = (pop32());
  /* 111601d6 ret  */
  ESPCHK(0x11160110u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x111601e0 (50 bytes, 17 insns) */
void f_111601e0(void) {
  FTRACE(0x111601e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111601e0 push ebp */
  push32((uint32_t)(EBP));
  /* 111601e1 mov ebp, esp */
  EBP = (ESP);
  /* 111601e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111601e6 cmp eax, dword ptr [0x111852fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x111852fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111601ec jb 0x111601f2 */
  if (C.cf) goto L_111601f2;
  /* 111601ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111601f0 jmp 0x11160210 */
  goto L_11160210;
L_111601f2:;
  /* 111601f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111601f5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 111601f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111601fb and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 111601fe imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11160201 mov eax, dword ptr [ecx*4 + 0x111851c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x111851c0)));
  /* 11160208 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1116020d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_11160210:;
  /* 11160210 pop ebp */
  EBP = (pop32());
  /* 11160211 ret  */
  ESPCHK(0x111601e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010220 @ 0x11160220 (300 bytes, 80 insns) */
void f_11160220(void) {
  FTRACE(0x11160220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11160220 push ebp */
  push32((uint32_t)(EBP));
  /* 11160221 mov ebp, esp */
  EBP = (ESP);
  /* 11160223 push ecx */
  push32((uint32_t)(ECX));
  /* 11160224 cmp dword ptr [0x11184ec0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11184ec0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116022b jne 0x11160239 */
  if (!C.zf) goto L_11160239;
  /* 1116022d mov dword ptr [0x11184ec0], 0x200 */
  w32((uint32_t)(0x11184ec0), (0x200u));
  /* 11160237 jmp 0x1116024c */
  goto L_1116024c;
L_11160239:;
  /* 11160239 cmp dword ptr [0x11184ec0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x11184ec0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11160240 jge 0x1116024c */
  if ((C.sf==C.of)) goto L_1116024c;
  /* 11160242 mov dword ptr [0x11184ec0], 0x14 */
  w32((uint32_t)(0x11184ec0), (0x14u));
L_1116024c:;
  /* 1116024c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 11160251 push 0x1117f464 */
  push32((uint32_t)(0x1117f464u));
  /* 11160256 push 2 */
  push32((uint32_t)(0x2u));
  /* 11160258 push 4 */
  push32((uint32_t)(0x4u));
  /* 1116025a mov eax, dword ptr [0x11184ec0] */
  EAX = (r32((uint32_t)(0x11184ec0)));
  /* 1116025f push eax */
  push32((uint32_t)(EAX));
  /* 11160260 call 0x11157970 */
  push32(0x11160265u); f_11157970();
  /* 11160265 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11160268 mov dword ptr [0x11183b80], eax */
  w32((uint32_t)(0x11183b80), (EAX));
  /* 1116026d cmp dword ptr [0x11183b80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183b80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11160274 jne 0x111602b5 */
  if (!C.zf) goto L_111602b5;
  /* 11160276 mov dword ptr [0x11184ec0], 0x14 */
  w32((uint32_t)(0x11184ec0), (0x14u));
  /* 11160280 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 11160285 push 0x1117f464 */
  push32((uint32_t)(0x1117f464u));
  /* 1116028a push 2 */
  push32((uint32_t)(0x2u));
  /* 1116028c push 4 */
  push32((uint32_t)(0x4u));
  /* 1116028e mov ecx, dword ptr [0x11184ec0] */
  ECX = (r32((uint32_t)(0x11184ec0)));
  /* 11160294 push ecx */
  push32((uint32_t)(ECX));
  /* 11160295 call 0x11157970 */
  push32(0x1116029au); f_11157970();
  /* 1116029a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116029d mov dword ptr [0x11183b80], eax */
  w32((uint32_t)(0x11183b80), (EAX));
  /* 111602a2 cmp dword ptr [0x11183b80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183b80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111602a9 jne 0x111602b5 */
  if (!C.zf) goto L_111602b5;
  /* 111602ab push 0x1a */
  push32((uint32_t)(0x1au));
  /* 111602ad call 0x111564d0 */
  push32(0x111602b2u); f_111564d0();
  /* 111602b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111602b5:;
  /* 111602b5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 111602bc jmp 0x111602c7 */
  goto L_111602c7;
L_111602be:;
  /* 111602be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111602c1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111602c4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_111602c7:;
  /* 111602c7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111602cb jge 0x111602e6 */
  if ((C.sf==C.of)) goto L_111602e6;
  /* 111602cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111602d0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 111602d3 add eax, 0x11182120 */
  { uint32_t _a=(EAX),_b=(0x11182120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111602d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111602db mov edx, dword ptr [0x11183b80] */
  EDX = (r32((uint32_t)(0x11183b80)));
  /* 111602e1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 111602e4 jmp 0x111602be */
  goto L_111602be;
L_111602e6:;
  /* 111602e6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 111602ed jmp 0x111602f8 */
  goto L_111602f8;
L_111602ef:;
  /* 111602ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111602f2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111602f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_111602f8:;
  /* 111602f8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111602fc jge 0x11160348 */
  if ((C.sf==C.of)) goto L_11160348;
  /* 111602fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11160301 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11160304 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11160307 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1116030a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1116030d mov eax, dword ptr [ecx*4 + 0x111851c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x111851c0)));
  /* 11160314 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11160318 je 0x11160336 */
  if (C.zf) goto L_11160336;
  /* 1116031a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1116031d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11160320 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11160323 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11160326 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11160329 mov eax, dword ptr [ecx*4 + 0x111851c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x111851c0)));
  /* 11160330 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11160334 jne 0x11160346 */
  if (!C.zf) goto L_11160346;
L_11160336:;
  /* 11160336 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11160339 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1116033c mov dword ptr [ecx + 0x11182130], 0xffffffff */
  w32((uint32_t)(ECX + 0x11182130), (0xffffffffu));
L_11160346:;
  /* 11160346 jmp 0x111602ef */
  goto L_111602ef;
L_11160348:;
  /* 11160348 mov esp, ebp */
  ESP = (EBP);
  /* 1116034a pop ebp */
  EBP = (pop32());
  /* 1116034b ret  */
  ESPCHK(0x11160220u, _esp0);
  ESP += 4; return;
}

/* FUN_10010350 @ 0x11160350 (26 bytes, 9 insns) */
void f_11160350(void) {
  FTRACE(0x11160350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11160350 push ebp */
  push32((uint32_t)(EBP));
  /* 11160351 mov ebp, esp */
  EBP = (ESP);
  /* 11160353 call 0x11160f50 */
  push32(0x11160358u); f_11160f50();
  /* 11160358 movsx eax, byte ptr [0x11183824] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11183824))));
  /* 1116035f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11160361 je 0x11160368 */
  if (C.zf) goto L_11160368;
  /* 11160363 call 0x11160d10 */
  push32(0x11160368u); f_11160d10();
L_11160368:;
  /* 11160368 pop ebp */
  EBP = (pop32());
  /* 11160369 ret  */
  ESPCHK(0x11160350u, _esp0);
  ESP += 4; return;
}

/* FUN_10010370 @ 0x11160370 (61 bytes, 20 insns) */
void f_11160370(void) {
  FTRACE(0x11160370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11160370 push ebp */
  push32((uint32_t)(EBP));
  /* 11160371 mov ebp, esp */
  EBP = (ESP);
  /* 11160373 cmp dword ptr [ebp + 8], 0x11182120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11182120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116037a jb 0x1116039e */
  if (C.cf) goto L_1116039e;
  /* 1116037c cmp dword ptr [ebp + 8], 0x11182380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11182380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11160383 ja 0x1116039e */
  if ((!C.cf&&!C.zf)) goto L_1116039e;
  /* 11160385 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11160388 sub eax, 0x11182120 */
  { uint32_t _a=(EAX),_b=(0x11182120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1116038d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11160390 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11160393 push eax */
  push32((uint32_t)(EAX));
  /* 11160394 call 0x1115af60 */
  push32(0x11160399u); f_1115af60();
  /* 11160399 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116039c jmp 0x111603ab */
  goto L_111603ab;
L_1116039e:;
  /* 1116039e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111603a1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111603a4 push ecx */
  push32((uint32_t)(ECX));
  /* 111603a5 call dword ptr [0x11186368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186368))), 0x111603abu);
L_111603ab:;
  /* 111603ab pop ebp */
  EBP = (pop32());
  /* 111603ac ret  */
  ESPCHK(0x11160370u, _esp0);
  ESP += 4; return;
}

/* FUN_100103b0 @ 0x111603b0 (41 bytes, 16 insns) */
void f_111603b0(void) {
  FTRACE(0x111603b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111603b0 push ebp */
  push32((uint32_t)(EBP));
  /* 111603b1 mov ebp, esp */
  EBP = (ESP);
  /* 111603b3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111603b7 jge 0x111603ca */
  if ((C.sf==C.of)) goto L_111603ca;
  /* 111603b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111603bc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111603bf push eax */
  push32((uint32_t)(EAX));
  /* 111603c0 call 0x1115af60 */
  push32(0x111603c5u); f_1115af60();
  /* 111603c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111603c8 jmp 0x111603d7 */
  goto L_111603d7;
L_111603ca:;
  /* 111603ca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111603cd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111603d0 push ecx */
  push32((uint32_t)(ECX));
  /* 111603d1 call dword ptr [0x11186368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186368))), 0x111603d7u);
L_111603d7:;
  /* 111603d7 pop ebp */
  EBP = (pop32());
  /* 111603d8 ret  */
  ESPCHK(0x111603b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100103e0 @ 0x111603e0 (61 bytes, 20 insns) */
void f_111603e0(void) {
  FTRACE(0x111603e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111603e0 push ebp */
  push32((uint32_t)(EBP));
  /* 111603e1 mov ebp, esp */
  EBP = (ESP);
  /* 111603e3 cmp dword ptr [ebp + 8], 0x11182120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11182120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111603ea jb 0x1116040e */
  if (C.cf) goto L_1116040e;
  /* 111603ec cmp dword ptr [ebp + 8], 0x11182380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11182380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111603f3 ja 0x1116040e */
  if ((!C.cf&&!C.zf)) goto L_1116040e;
  /* 111603f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111603f8 sub eax, 0x11182120 */
  { uint32_t _a=(EAX),_b=(0x11182120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111603fd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11160400 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11160403 push eax */
  push32((uint32_t)(EAX));
  /* 11160404 call 0x1115b000 */
  push32(0x11160409u); f_1115b000();
  /* 11160409 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116040c jmp 0x1116041b */
  goto L_1116041b;
L_1116040e:;
  /* 1116040e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11160411 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11160414 push ecx */
  push32((uint32_t)(ECX));
  /* 11160415 call dword ptr [0x11186364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186364))), 0x1116041bu);
L_1116041b:;
  /* 1116041b pop ebp */
  EBP = (pop32());
  /* 1116041c ret  */
  ESPCHK(0x111603e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010420 @ 0x11160420 (41 bytes, 16 insns) */
void f_11160420(void) {
  FTRACE(0x11160420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11160420 push ebp */
  push32((uint32_t)(EBP));
  /* 11160421 mov ebp, esp */
  EBP = (ESP);
  /* 11160423 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11160427 jge 0x1116043a */
  if ((C.sf==C.of)) goto L_1116043a;
  /* 11160429 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116042c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116042f push eax */
  push32((uint32_t)(EAX));
  /* 11160430 call 0x1115b000 */
  push32(0x11160435u); f_1115b000();
  /* 11160435 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11160438 jmp 0x11160447 */
  goto L_11160447;
L_1116043a:;
  /* 1116043a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1116043d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11160440 push ecx */
  push32((uint32_t)(ECX));
  /* 11160441 call dword ptr [0x11186364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186364))), 0x11160447u);
L_11160447:;
  /* 11160447 pop ebp */
  EBP = (pop32());
  /* 11160448 ret  */
  ESPCHK(0x11160420u, _esp0);
  ESP += 4; return;
}

/* FUN_10010450 @ 0x11160450 (119 bytes, 34 insns) */
void f_11160450(void) {
  FTRACE(0x11160450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11160450 push ebp */
  push32((uint32_t)(EBP));
  /* 11160451 mov ebp, esp */
  EBP = (ESP);
  /* 11160453 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11160456 push 0x11183b7c */
  push32((uint32_t)(0x11183b7cu));
  /* 1116045b call dword ptr [0x111862e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111862e8))), 0x11160461u);
  /* 11160461 cmp dword ptr [0x11183b6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183b6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11160468 je 0x11160488 */
  if (C.zf) goto L_11160488;
  /* 1116046a push 0x11183b7c */
  push32((uint32_t)(0x11183b7cu));
  /* 1116046f call dword ptr [0x111863c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863c8))), 0x11160475u);
  /* 11160475 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11160477 call 0x1115af60 */
  push32(0x1116047cu); f_1115af60();
  /* 1116047c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116047f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11160486 jmp 0x1116048f */
  goto L_1116048f;
L_11160488:;
  /* 11160488 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1116048f:;
  /* 1116048f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 11160493 push eax */
  push32((uint32_t)(EAX));
  /* 11160494 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11160497 push ecx */
  push32((uint32_t)(ECX));
  /* 11160498 call 0x111604d0 */
  push32(0x1116049du); f_111604d0();
  /* 1116049d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111604a0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111604a3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111604a7 je 0x111604b5 */
  if (C.zf) goto L_111604b5;
  /* 111604a9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 111604ab call 0x1115b000 */
  push32(0x111604b0u); f_1115b000();
  /* 111604b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111604b3 jmp 0x111604c0 */
  goto L_111604c0;
L_111604b5:;
  /* 111604b5 push 0x11183b7c */
  push32((uint32_t)(0x11183b7cu));
  /* 111604ba call dword ptr [0x111863c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863c8))), 0x111604c0u);
L_111604c0:;
  /* 111604c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111604c3 mov esp, ebp */
  ESP = (EBP);
  /* 111604c5 pop ebp */
  EBP = (pop32());
  /* 111604c6 ret  */
  ESPCHK(0x11160450u, _esp0);
  ESP += 4; return;
}

/* FUN_100104d0 @ 0x111604d0 (160 bytes, 50 insns) */
void f_111604d0(void) {
  FTRACE(0x111604d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111604d0 push ebp */
  push32((uint32_t)(EBP));
  /* 111604d1 mov ebp, esp */
  EBP = (ESP);
  /* 111604d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111604d6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111604da jne 0x111604e3 */
  if (!C.zf) goto L_111604e3;
  /* 111604dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111604de jmp 0x1116056c */
  goto L_1116056c;
L_111604e3:;
  /* 111604e3 cmp dword ptr [0x111839f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111839f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111604ea jne 0x1116051a */
  if (!C.zf) goto L_1116051a;
  /* 111604ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111604ef and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111604f4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111604f9 jle 0x1116050b */
  if ((C.zf||C.sf!=C.of)) goto L_1116050b;
  /* 111604fb call 0x1115f430 */
  push32(0x11160500u); f_1115f430();
  /* 11160500 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 11160506 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11160509 jmp 0x1116056c */
  goto L_1116056c;
L_1116050b:;
  /* 1116050b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116050e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 11160511 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11160513 mov eax, 1 */
  EAX = (0x1u);
  /* 11160518 jmp 0x1116056c */
  goto L_1116056c;
L_1116051a:;
  /* 1116051a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11160521 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11160524 push eax */
  push32((uint32_t)(EAX));
  /* 11160525 push 0 */
  push32((uint32_t)(0x0u));
  /* 11160527 mov ecx, dword ptr [0x11181ea4] */
  ECX = (r32((uint32_t)(0x11181ea4)));
  /* 1116052d push ecx */
  push32((uint32_t)(ECX));
  /* 1116052e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11160531 push edx */
  push32((uint32_t)(EDX));
  /* 11160532 push 1 */
  push32((uint32_t)(0x1u));
  /* 11160534 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 11160537 push eax */
  push32((uint32_t)(EAX));
  /* 11160538 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1116053d mov ecx, dword ptr [0x11183a00] */
  ECX = (r32((uint32_t)(0x11183a00)));
  /* 11160543 push ecx */
  push32((uint32_t)(ECX));
  /* 11160544 call dword ptr [0x1118638c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118638c))), 0x1116054au);
  /* 1116054a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1116054d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11160551 je 0x11160559 */
  if (C.zf) goto L_11160559;
  /* 11160553 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11160557 je 0x11160569 */
  if (C.zf) goto L_11160569;
L_11160559:;
  /* 11160559 call 0x1115f430 */
  push32(0x1116055eu); f_1115f430();
  /* 1116055e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 11160564 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11160567 jmp 0x1116056c */
  goto L_1116056c;
L_11160569:;
  /* 11160569 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1116056c:;
  /* 1116056c mov esp, ebp */
  ESP = (EBP);
  /* 1116056e pop ebp */
  EBP = (pop32());
  /* 1116056f ret  */
  ESPCHK(0x111604d0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11160570 (32 bytes, 18 insns) */
void f_11160570(void) {
  FTRACE(0x11160570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11160570 push ebp */
  push32((uint32_t)(EBP));
  /* 11160571 mov ebp, esp */
  EBP = (ESP);
  /* 11160573 push ebx */
  push32((uint32_t)(EBX));
  /* 11160574 push esi */
  push32((uint32_t)(ESI));
  /* 11160575 push edi */
  push32((uint32_t)(EDI));
  /* 11160576 push ebp */
  push32((uint32_t)(EBP));
  /* 11160577 push 0 */
  push32((uint32_t)(0x0u));
  /* 11160579 push 0 */
  push32((uint32_t)(0x0u));
  /* 1116057b push 0x11160588 */
  push32((uint32_t)(0x11160588u));
  /* 11160580 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11160583 call 0x11167cbc */
  push32(0x11160588u); f_11167cbc();
  /* 11160588 pop ebp */
  EBP = (pop32());
  /* 11160589 pop edi */
  EDI = (pop32());
  /* 1116058a pop esi */
  ESI = (pop32());
  /* 1116058b pop ebx */
  EBX = (pop32());
  /* 1116058c mov esp, ebp */
  ESP = (EBP);
  /* 1116058e pop ebp */
  EBP = (pop32());
  /* 1116058f ret  */
  ESPCHK(0x11160570u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x111605b2 (104 bytes, 33 insns) */
void f_111605b2(void) {
  FTRACE(0x111605b2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111605b2 push ebx */
  push32((uint32_t)(EBX));
  /* 111605b3 push esi */
  push32((uint32_t)(ESI));
  /* 111605b4 push edi */
  push32((uint32_t)(EDI));
  /* 111605b5 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 111605b9 push eax */
  push32((uint32_t)(EAX));
  /* 111605ba push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 111605bc push 0x11160590 */
  push32((uint32_t)(0x11160590u));
  /* 111605c1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 111605c8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_111605cf:;
  /* 111605cf mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 111605d3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 111605d6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 111605d9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111605dc je 0x1116060c */
  if (C.zf) goto L_1116060c;
  /* 111605de cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111605e2 je 0x1116060c */
  if (C.zf) goto L_1116060c;
  /* 111605e4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 111605e7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 111605ea mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 111605ee mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 111605f1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111605f6 jne 0x1116060a */
  if (!C.zf) goto L_1116060a;
  /* 111605f8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 111605fd mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11160601 call 0x11160646 */
  push32(0x11160606u); f_11160646();
  /* 11160606 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1116060au);
L_1116060a:;
  /* 1116060a jmp 0x111605cf */
  goto L_111605cf;
L_1116060c:;
  /* 1116060c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11160613 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11160616 pop edi */
  EDI = (pop32());
  /* 11160617 pop esi */
  ESI = (pop32());
  /* 11160618 pop ebx */
  EBX = (pop32());
  /* 11160619 ret  */
  ESPCHK(0x111605b2u, _esp0);
  ESP += 4; return;
}

/* FUN_10010646 @ 0x11160646 (24 bytes, 10 insns) */
void f_11160646(void) {
  FTRACE(0x11160646u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11160646 push ebx */
  push32((uint32_t)(EBX));
  /* 11160647 push ecx */
  push32((uint32_t)(ECX));
  /* 11160648 mov ebx, 0x111823b8 */
  EBX = (0x111823b8u);
  /* 1116064d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11160650 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11160653 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11160656 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11160659 pop ecx */
  ECX = (pop32());
  /* 1116065a pop ebx */
  EBX = (pop32());
  /* 1116065b ret 4 */
  ESPCHK(0x11160646u, _esp0);
  ESP += 8; return;
}

/* FUN_10010725 @ 0x11160725 (27 bytes, 11 insns) */
void f_11160725(void) {
  FTRACE(0x11160725u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11160725 push ebp */
  push32((uint32_t)(EBP));
  /* 11160726 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1116072a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1116072c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1116072f push eax */
  push32((uint32_t)(EAX));
  /* 11160730 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11160733 push eax */
  push32((uint32_t)(EAX));
  /* 11160734 call 0x111605b2 */
  push32(0x11160739u); f_111605b2();
  /* 11160739 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116073c pop ebp */
  EBP = (pop32());
  /* 1116073d ret 4 */
  ESPCHK(0x11160725u, _esp0);
  ESP += 8; return;
}

/* FUN_10010740 @ 0x11160740 (482 bytes, 138 insns) */
void f_11160740(void) {
  FTRACE(0x11160740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11160740 push ebp */
  push32((uint32_t)(EBP));
  /* 11160741 mov ebp, esp */
  EBP = (ESP);
  /* 11160743 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11160746 push esi */
  push32((uint32_t)(ESI));
  /* 11160747 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 1116074e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11160750 call 0x1115af60 */
  push32(0x11160755u); f_1115af60();
  /* 11160755 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11160758 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1116075f jmp 0x1116076a */
  goto L_1116076a;
L_11160761:;
  /* 11160761 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11160764 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11160767 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1116076a:;
  /* 1116076a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116076e jge 0x11160910 */
  if ((C.sf==C.of)) goto L_11160910;
  /* 11160774 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11160777 cmp dword ptr [ecx*4 + 0x111851c0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x111851c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116077f je 0x11160876 */
  if (C.zf) goto L_11160876;
  /* 11160785 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11160788 mov eax, dword ptr [edx*4 + 0x111851c0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x111851c0)));
  /* 1116078f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11160792 jmp 0x1116079d */
  goto L_1116079d;
L_11160794:;
  /* 11160794 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11160797 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116079a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1116079d:;
  /* 1116079d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111607a0 mov eax, dword ptr [edx*4 + 0x111851c0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x111851c0)));
  /* 111607a7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111607ac cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111607af jae 0x11160866 */
  if (!C.cf) goto L_11160866;
  /* 111607b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111607b8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 111607bc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 111607bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111607c1 jne 0x11160861 */
  if (!C.zf) goto L_11160861;
  /* 111607c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111607ca cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111607ce jne 0x11160809 */
  if (!C.zf) goto L_11160809;
  /* 111607d0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 111607d2 call 0x1115af60 */
  push32(0x111607d7u); f_1115af60();
  /* 111607d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111607da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111607dd cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111607e1 jne 0x111607ff */
  if (!C.zf) goto L_111607ff;
  /* 111607e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111607e6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111607e9 push edx */
  push32((uint32_t)(EDX));
  /* 111607ea call dword ptr [0x1118636c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118636c))), 0x111607f0u);
  /* 111607f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111607f3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 111607f6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111607f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111607fc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_111607ff:;
  /* 111607ff push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11160801 call 0x1115b000 */
  push32(0x11160806u); f_1115b000();
  /* 11160806 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11160809:;
  /* 11160809 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1116080c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116080f push eax */
  push32((uint32_t)(EAX));
  /* 11160810 call dword ptr [0x11186368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186368))), 0x11160816u);
  /* 11160816 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11160819 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1116081d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11160820 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11160822 je 0x11160836 */
  if (C.zf) goto L_11160836;
  /* 11160824 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11160827 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116082a push eax */
  push32((uint32_t)(EAX));
  /* 1116082b call dword ptr [0x11186364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186364))), 0x11160831u);
  /* 11160831 jmp 0x11160794 */
  goto L_11160794;
L_11160836:;
  /* 11160836 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11160839 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1116083f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11160842 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11160845 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11160848 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1116084b sub eax, dword ptr [edx*4 + 0x111851c0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x111851c0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11160852 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11160853 mov esi, 0x24 */
  ESI = (0x24u);
  /* 11160858 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1116085a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116085c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1116085f jmp 0x11160866 */
  goto L_11160866;
L_11160861:;
  /* 11160861 jmp 0x11160794 */
  goto L_11160794;
L_11160866:;
  /* 11160866 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116086a je 0x11160871 */
  if (C.zf) goto L_11160871;
  /* 1116086c jmp 0x11160910 */
  goto L_11160910;
L_11160871:;
  /* 11160871 jmp 0x1116090b */
  goto L_1116090b;
L_11160876:;
  /* 11160876 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 11160878 push 0x1117f46c */
  push32((uint32_t)(0x1117f46cu));
  /* 1116087d push 2 */
  push32((uint32_t)(0x2u));
  /* 1116087f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11160884 call 0x11157560 */
  push32(0x11160889u); f_11157560();
  /* 11160889 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116088c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1116088f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11160893 je 0x11160909 */
  if (C.zf) goto L_11160909;
  /* 11160895 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11160898 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1116089b mov dword ptr [eax*4 + 0x111851c0], ecx */
  w32((uint32_t)(EAX*4 + 0x111851c0), (ECX));
  /* 111608a2 mov edx, dword ptr [0x111852fc] */
  EDX = (r32((uint32_t)(0x111852fc)));
  /* 111608a8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111608ab mov dword ptr [0x111852fc], edx */
  w32((uint32_t)(0x111852fc), (EDX));
  /* 111608b1 jmp 0x111608bc */
  goto L_111608bc;
L_111608b3:;
  /* 111608b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111608b6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111608b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_111608bc:;
  /* 111608bc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111608bf mov edx, dword ptr [ecx*4 + 0x111851c0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x111851c0)));
  /* 111608c6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111608cc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111608cf jae 0x111608f4 */
  if (!C.cf) goto L_111608f4;
  /* 111608d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111608d4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 111608d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111608db mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 111608e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111608e4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 111608e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111608eb mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 111608f2 jmp 0x111608b3 */
  goto L_111608b3;
L_111608f4:;
  /* 111608f4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111608f7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 111608fa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111608fd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11160900 push edx */
  push32((uint32_t)(EDX));
  /* 11160901 call 0x11160c50 */
  push32(0x11160906u); f_11160c50();
  /* 11160906 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11160909:;
  /* 11160909 jmp 0x11160910 */
  goto L_11160910;
L_1116090b:;
  /* 1116090b jmp 0x11160761 */
  goto L_11160761;
L_11160910:;
  /* 11160910 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11160912 call 0x1115b000 */
  push32(0x11160917u); f_1115b000();
  /* 11160917 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116091a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1116091d pop esi */
  ESI = (pop32());
  /* 1116091e mov esp, ebp */
  ESP = (EBP);
  /* 11160920 pop ebp */
  EBP = (pop32());
  /* 11160921 ret  */
  ESPCHK(0x11160740u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x11160930 (183 bytes, 57 insns) */
void f_11160930(void) {
  FTRACE(0x11160930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11160930 push ebp */
  push32((uint32_t)(EBP));
  /* 11160931 mov ebp, esp */
  EBP = (ESP);
  /* 11160933 push ecx */
  push32((uint32_t)(ECX));
  /* 11160934 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11160937 cmp eax, dword ptr [0x111852fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x111852fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116093d jae 0x111609ca */
  if (!C.cf) goto L_111609ca;
  /* 11160943 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11160946 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11160949 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116094c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1116094f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11160952 mov eax, dword ptr [ecx*4 + 0x111851c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x111851c0)));
  /* 11160959 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116095d jne 0x111609ca */
  if (!C.zf) goto L_111609ca;
  /* 1116095f cmp dword ptr [0x111837e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111837e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11160966 jne 0x111609aa */
  if (!C.zf) goto L_111609aa;
  /* 11160968 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116096b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1116096e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11160972 je 0x11160982 */
  if (C.zf) goto L_11160982;
  /* 11160974 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11160978 je 0x11160990 */
  if (C.zf) goto L_11160990;
  /* 1116097a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116097e je 0x1116099e */
  if (C.zf) goto L_1116099e;
  /* 11160980 jmp 0x111609aa */
  goto L_111609aa;
L_11160982:;
  /* 11160982 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11160985 push edx */
  push32((uint32_t)(EDX));
  /* 11160986 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11160988 call dword ptr [0x11186324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186324))), 0x1116098eu);
  /* 1116098e jmp 0x111609aa */
  goto L_111609aa;
L_11160990:;
  /* 11160990 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11160993 push eax */
  push32((uint32_t)(EAX));
  /* 11160994 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11160996 call dword ptr [0x11186324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186324))), 0x1116099cu);
  /* 1116099c jmp 0x111609aa */
  goto L_111609aa;
L_1116099e:;
  /* 1116099e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111609a1 push ecx */
  push32((uint32_t)(ECX));
  /* 111609a2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 111609a4 call dword ptr [0x11186324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186324))), 0x111609aau);
L_111609aa:;
  /* 111609aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111609ad sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 111609b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111609b3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 111609b6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111609b9 mov ecx, dword ptr [edx*4 + 0x111851c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x111851c0)));
  /* 111609c0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111609c3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 111609c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111609c8 jmp 0x111609e3 */
  goto L_111609e3;
L_111609ca:;
  /* 111609ca call 0x1115f430 */
  push32(0x111609cfu); f_1115f430();
  /* 111609cf mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 111609d5 call 0x1115f440 */
  push32(0x111609dau); f_1115f440();
  /* 111609da mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 111609e0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_111609e3:;
  /* 111609e3 mov esp, ebp */
  ESP = (EBP);
  /* 111609e5 pop ebp */
  EBP = (pop32());
  /* 111609e6 ret  */
  ESPCHK(0x11160930u, _esp0);
  ESP += 4; return;
}

/* FUN_100109f0 @ 0x111609f0 (216 bytes, 63 insns) */
void f_111609f0(void) {
  FTRACE(0x111609f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111609f0 push ebp */
  push32((uint32_t)(EBP));
  /* 111609f1 mov ebp, esp */
  EBP = (ESP);
  /* 111609f3 push ecx */
  push32((uint32_t)(ECX));
  /* 111609f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111609f7 cmp eax, dword ptr [0x111852fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x111852fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111609fd jae 0x11160aab */
  if (!C.cf) goto L_11160aab;
  /* 11160a03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11160a06 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11160a09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11160a0c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11160a0f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11160a12 mov eax, dword ptr [ecx*4 + 0x111851c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x111851c0)));
  /* 11160a19 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11160a1e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11160a21 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11160a23 je 0x11160aab */
  if (C.zf) goto L_11160aab;
  /* 11160a29 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11160a2c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11160a2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11160a32 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11160a35 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11160a38 mov ecx, dword ptr [edx*4 + 0x111851c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x111851c0)));
  /* 11160a3f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11160a43 je 0x11160aab */
  if (C.zf) goto L_11160aab;
  /* 11160a45 cmp dword ptr [0x111837e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111837e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11160a4c jne 0x11160a8a */
  if (!C.zf) goto L_11160a8a;
  /* 11160a4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11160a51 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11160a54 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11160a58 je 0x11160a68 */
  if (C.zf) goto L_11160a68;
  /* 11160a5a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11160a5e je 0x11160a74 */
  if (C.zf) goto L_11160a74;
  /* 11160a60 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11160a64 je 0x11160a80 */
  if (C.zf) goto L_11160a80;
  /* 11160a66 jmp 0x11160a8a */
  goto L_11160a8a;
L_11160a68:;
  /* 11160a68 push 0 */
  push32((uint32_t)(0x0u));
  /* 11160a6a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11160a6c call dword ptr [0x11186324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186324))), 0x11160a72u);
  /* 11160a72 jmp 0x11160a8a */
  goto L_11160a8a;
L_11160a74:;
  /* 11160a74 push 0 */
  push32((uint32_t)(0x0u));
  /* 11160a76 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11160a78 call dword ptr [0x11186324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186324))), 0x11160a7eu);
  /* 11160a7e jmp 0x11160a8a */
  goto L_11160a8a;
L_11160a80:;
  /* 11160a80 push 0 */
  push32((uint32_t)(0x0u));
  /* 11160a82 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11160a84 call dword ptr [0x11186324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186324))), 0x11160a8au);
L_11160a8a:;
  /* 11160a8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11160a8d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11160a90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11160a93 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11160a96 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11160a99 mov edx, dword ptr [eax*4 + 0x111851c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x111851c0)));
  /* 11160aa0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 11160aa7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11160aa9 jmp 0x11160ac4 */
  goto L_11160ac4;
L_11160aab:;
  /* 11160aab call 0x1115f430 */
  push32(0x11160ab0u); f_1115f430();
  /* 11160ab0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11160ab6 call 0x1115f440 */
  push32(0x11160abbu); f_1115f440();
  /* 11160abb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11160ac1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11160ac4:;
  /* 11160ac4 mov esp, ebp */
  ESP = (EBP);
  /* 11160ac6 pop ebp */
  EBP = (pop32());
  /* 11160ac7 ret  */
  ESPCHK(0x111609f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ad0 @ 0x11160ad0 (102 bytes, 30 insns) */
void f_11160ad0(void) {
  FTRACE(0x11160ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11160ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 11160ad1 mov ebp, esp */
  EBP = (ESP);
  /* 11160ad3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11160ad6 cmp eax, dword ptr [0x111852fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x111852fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11160adc jae 0x11160b1b */
  if (!C.cf) goto L_11160b1b;
  /* 11160ade mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11160ae1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11160ae4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11160ae7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11160aea imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11160aed mov eax, dword ptr [ecx*4 + 0x111851c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x111851c0)));
  /* 11160af4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11160af9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11160afc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11160afe je 0x11160b1b */
  if (C.zf) goto L_11160b1b;
  /* 11160b00 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11160b03 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11160b06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11160b09 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11160b0c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11160b0f mov ecx, dword ptr [edx*4 + 0x111851c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x111851c0)));
  /* 11160b16 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 11160b19 jmp 0x11160b34 */
  goto L_11160b34;
L_11160b1b:;
  /* 11160b1b call 0x1115f430 */
  push32(0x11160b20u); f_1115f430();
  /* 11160b20 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11160b26 call 0x1115f440 */
  push32(0x11160b2bu); f_1115f440();
  /* 11160b2b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11160b31 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11160b34:;
  /* 11160b34 pop ebp */
  EBP = (pop32());
  /* 11160b35 ret  */
  ESPCHK(0x11160ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b40 @ 0x11160b40 (260 bytes, 83 insns) */
void f_11160b40(void) {
  FTRACE(0x11160b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11160b40 push ebp */
  push32((uint32_t)(EBP));
  /* 11160b41 mov ebp, esp */
  EBP = (ESP);
  /* 11160b43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11160b46 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 11160b4a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11160b4d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11160b50 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11160b52 je 0x11160b5d */
  if (C.zf) goto L_11160b5d;
  /* 11160b54 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 11160b57 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11160b5a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_11160b5d:;
  /* 11160b5d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11160b60 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 11160b66 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11160b68 je 0x11160b72 */
  if (C.zf) goto L_11160b72;
  /* 11160b6a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11160b6d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 11160b6f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_11160b72:;
  /* 11160b72 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11160b75 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 11160b7b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11160b7d je 0x11160b88 */
  if (C.zf) goto L_11160b88;
  /* 11160b7f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11160b82 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 11160b85 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_11160b88:;
  /* 11160b88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11160b8b push eax */
  push32((uint32_t)(EAX));
  /* 11160b8c call dword ptr [0x111863ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863ac))), 0x11160b92u);
  /* 11160b92 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11160b95 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11160b99 jne 0x11160bb2 */
  if (!C.zf) goto L_11160bb2;
  /* 11160b9b call dword ptr [0x11186400] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186400))), 0x11160ba1u);
  /* 11160ba1 push eax */
  push32((uint32_t)(EAX));
  /* 11160ba2 call 0x1115f390 */
  push32(0x11160ba7u); f_1115f390();
  /* 11160ba7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11160baa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11160bad jmp 0x11160c40 */
  goto L_11160c40;
L_11160bb2:;
  /* 11160bb2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11160bb6 jne 0x11160bc3 */
  if (!C.zf) goto L_11160bc3;
  /* 11160bb8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 11160bbb or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 11160bbe mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 11160bc1 jmp 0x11160bd2 */
  goto L_11160bd2;
L_11160bc3:;
  /* 11160bc3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11160bc7 jne 0x11160bd2 */
  if (!C.zf) goto L_11160bd2;
  /* 11160bc9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11160bcc or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 11160bcf mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_11160bd2:;
  /* 11160bd2 call 0x11160740 */
  push32(0x11160bd7u); f_11160740();
  /* 11160bd7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11160bda cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11160bde jne 0x11160bfb */
  if (!C.zf) goto L_11160bfb;
  /* 11160be0 call 0x1115f430 */
  push32(0x11160be5u); f_1115f430();
  /* 11160be5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 11160beb call 0x1115f440 */
  push32(0x11160bf0u); f_1115f440();
  /* 11160bf0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11160bf6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11160bf9 jmp 0x11160c40 */
  goto L_11160c40;
L_11160bfb:;
  /* 11160bfb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11160bfe push eax */
  push32((uint32_t)(EAX));
  /* 11160bff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11160c02 push ecx */
  push32((uint32_t)(ECX));
  /* 11160c03 call 0x11160930 */
  push32(0x11160c08u); f_11160930();
  /* 11160c08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11160c0b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11160c0e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 11160c11 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 11160c14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11160c17 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11160c1a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11160c1d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11160c20 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11160c23 mov edx, dword ptr [eax*4 + 0x111851c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x111851c0)));
  /* 11160c2a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11160c2d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 11160c31 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11160c34 push ecx */
  push32((uint32_t)(ECX));
  /* 11160c35 call 0x11160ce0 */
  push32(0x11160c3au); f_11160ce0();
  /* 11160c3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11160c3d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11160c40:;
  /* 11160c40 mov esp, ebp */
  ESP = (EBP);
  /* 11160c42 pop ebp */
  EBP = (pop32());
  /* 11160c43 ret  */
  ESPCHK(0x11160b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c50 @ 0x11160c50 (134 bytes, 44 insns) */
void f_11160c50(void) {
  FTRACE(0x11160c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11160c50 push ebp */
  push32((uint32_t)(EBP));
  /* 11160c51 mov ebp, esp */
  EBP = (ESP);
  /* 11160c53 push ecx */
  push32((uint32_t)(ECX));
  /* 11160c54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11160c57 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11160c5a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11160c5d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11160c60 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11160c63 mov edx, dword ptr [eax*4 + 0x111851c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x111851c0)));
  /* 11160c6a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11160c6c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11160c6f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11160c72 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11160c76 jne 0x11160cb1 */
  if (!C.zf) goto L_11160cb1;
  /* 11160c78 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11160c7a call 0x1115af60 */
  push32(0x11160c7fu); f_1115af60();
  /* 11160c7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11160c82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11160c85 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11160c89 jne 0x11160ca7 */
  if (!C.zf) goto L_11160ca7;
  /* 11160c8b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11160c8e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11160c91 push edx */
  push32((uint32_t)(EDX));
  /* 11160c92 call dword ptr [0x1118636c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118636c))), 0x11160c98u);
  /* 11160c98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11160c9b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11160c9e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11160ca1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11160ca4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11160ca7:;
  /* 11160ca7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11160ca9 call 0x1115b000 */
  push32(0x11160caeu); f_1115b000();
  /* 11160cae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11160cb1:;
  /* 11160cb1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11160cb4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11160cb7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11160cba and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11160cbd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11160cc0 mov edx, dword ptr [eax*4 + 0x111851c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x111851c0)));
  /* 11160cc7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 11160ccb push eax */
  push32((uint32_t)(EAX));
  /* 11160ccc call dword ptr [0x11186368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186368))), 0x11160cd2u);
  /* 11160cd2 mov esp, ebp */
  ESP = (EBP);
  /* 11160cd4 pop ebp */
  EBP = (pop32());
  /* 11160cd5 ret  */
  ESPCHK(0x11160c50u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x11160ce0 (38 bytes, 13 insns) */
void f_11160ce0(void) {
  FTRACE(0x11160ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11160ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11160ce1 mov ebp, esp */
  EBP = (ESP);
  /* 11160ce3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11160ce6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11160ce9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11160cec and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11160cef imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11160cf2 mov edx, dword ptr [eax*4 + 0x111851c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x111851c0)));
  /* 11160cf9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 11160cfd push eax */
  push32((uint32_t)(EAX));
  /* 11160cfe call dword ptr [0x11186364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186364))), 0x11160d04u);
  /* 11160d04 pop ebp */
  EBP = (pop32());
  /* 11160d05 ret  */
  ESPCHK(0x11160ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010d10 @ 0x11160d10 (218 bytes, 63 insns) */
void f_11160d10(void) {
  FTRACE(0x11160d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11160d10 push ebp */
  push32((uint32_t)(EBP));
  /* 11160d11 mov ebp, esp */
  EBP = (ESP);
  /* 11160d13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11160d16 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11160d1d push 2 */
  push32((uint32_t)(0x2u));
  /* 11160d1f call 0x1115af60 */
  push32(0x11160d24u); f_1115af60();
  /* 11160d24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11160d27 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 11160d2e jmp 0x11160d39 */
  goto L_11160d39;
L_11160d30:;
  /* 11160d30 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11160d33 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11160d36 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11160d39:;
  /* 11160d39 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11160d3c cmp ecx, dword ptr [0x11184ec0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11184ec0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11160d42 jge 0x11160dd9 */
  if ((C.sf==C.of)) goto L_11160dd9;
  /* 11160d48 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11160d4b mov eax, dword ptr [0x11183b80] */
  EAX = (r32((uint32_t)(0x11183b80)));
  /* 11160d50 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11160d54 je 0x11160dd4 */
  if (C.zf) goto L_11160dd4;
  /* 11160d56 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11160d59 mov edx, dword ptr [0x11183b80] */
  EDX = (r32((uint32_t)(0x11183b80)));
  /* 11160d5f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11160d62 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11160d65 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 11160d6b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11160d6d je 0x11160d91 */
  if (C.zf) goto L_11160d91;
  /* 11160d6f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11160d72 mov eax, dword ptr [0x11183b80] */
  EAX = (r32((uint32_t)(0x11183b80)));
  /* 11160d77 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11160d7a push ecx */
  push32((uint32_t)(ECX));
  /* 11160d7b call 0x11161b00 */
  push32(0x11160d80u); f_11161b00();
  /* 11160d80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11160d83 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11160d86 je 0x11160d91 */
  if (C.zf) goto L_11160d91;
  /* 11160d88 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11160d8b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11160d8e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11160d91:;
  /* 11160d91 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11160d95 jl 0x11160dd4 */
  if ((C.sf!=C.of)) goto L_11160dd4;
  /* 11160d97 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11160d9a mov ecx, dword ptr [0x11183b80] */
  ECX = (r32((uint32_t)(0x11183b80)));
  /* 11160da0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11160da3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11160da6 push edx */
  push32((uint32_t)(EDX));
  /* 11160da7 call dword ptr [0x111863a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863a4))), 0x11160dadu);
  /* 11160dad push 2 */
  push32((uint32_t)(0x2u));
  /* 11160daf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11160db2 mov ecx, dword ptr [0x11183b80] */
  ECX = (r32((uint32_t)(0x11183b80)));
  /* 11160db8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11160dbb push edx */
  push32((uint32_t)(EDX));
  /* 11160dbc call 0x11157ff0 */
  push32(0x11160dc1u); f_11157ff0();
  /* 11160dc1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11160dc4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11160dc7 mov ecx, dword ptr [0x11183b80] */
  ECX = (r32((uint32_t)(0x11183b80)));
  /* 11160dcd mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_11160dd4:;
  /* 11160dd4 jmp 0x11160d30 */
  goto L_11160d30;
L_11160dd9:;
  /* 11160dd9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11160ddb call 0x1115b000 */
  push32(0x11160de0u); f_1115b000();
  /* 11160de0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11160de3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11160de6 mov esp, ebp */
  ESP = (EBP);
  /* 11160de8 pop ebp */
  EBP = (pop32());
  /* 11160de9 ret  */
  ESPCHK(0x11160d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10010df0 @ 0x11160df0 (68 bytes, 26 insns) */
void f_11160df0(void) {
  FTRACE(0x11160df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11160df0 push ebp */
  push32((uint32_t)(EBP));
  /* 11160df1 mov ebp, esp */
  EBP = (ESP);
  /* 11160df3 push ecx */
  push32((uint32_t)(ECX));
  /* 11160df4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11160df8 jne 0x11160e06 */
  if (!C.zf) goto L_11160e06;
  /* 11160dfa push 0 */
  push32((uint32_t)(0x0u));
  /* 11160dfc call 0x11160f60 */
  push32(0x11160e01u); f_11160f60();
  /* 11160e01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11160e04 jmp 0x11160e30 */
  goto L_11160e30;
L_11160e06:;
  /* 11160e06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11160e09 push eax */
  push32((uint32_t)(EAX));
  /* 11160e0a call 0x11160370 */
  push32(0x11160e0fu); f_11160370();
  /* 11160e0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11160e12 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11160e15 push ecx */
  push32((uint32_t)(ECX));
  /* 11160e16 call 0x11160e40 */
  push32(0x11160e1bu); f_11160e40();
  /* 11160e1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11160e1e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11160e21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11160e24 push edx */
  push32((uint32_t)(EDX));
  /* 11160e25 call 0x111603e0 */
  push32(0x11160e2au); f_111603e0();
  /* 11160e2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11160e2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11160e30:;
  /* 11160e30 mov esp, ebp */
  ESP = (EBP);
  /* 11160e32 pop ebp */
  EBP = (pop32());
  /* 11160e33 ret  */
  ESPCHK(0x11160df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010e40 @ 0x11160e40 (65 bytes, 26 insns) */
void f_11160e40(void) {
  FTRACE(0x11160e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11160e40 push ebp */
  push32((uint32_t)(EBP));
  /* 11160e41 mov ebp, esp */
  EBP = (ESP);
  /* 11160e43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11160e46 push eax */
  push32((uint32_t)(EAX));
  /* 11160e47 call 0x11160e90 */
  push32(0x11160e4cu); f_11160e90();
  /* 11160e4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11160e4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11160e51 je 0x11160e58 */
  if (C.zf) goto L_11160e58;
  /* 11160e53 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11160e56 jmp 0x11160e7f */
  goto L_11160e7f;
L_11160e58:;
  /* 11160e58 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11160e5b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11160e5e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 11160e64 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11160e66 je 0x11160e7d */
  if (C.zf) goto L_11160e7d;
  /* 11160e68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11160e6b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11160e6e push ecx */
  push32((uint32_t)(ECX));
  /* 11160e6f call 0x11161c50 */
  push32(0x11160e74u); f_11161c50();
  /* 11160e74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11160e77 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11160e79 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11160e7b jmp 0x11160e7f */
  goto L_11160e7f;
L_11160e7d:;
  /* 11160e7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11160e7f:;
  /* 11160e7f pop ebp */
  EBP = (pop32());
  /* 11160e80 ret  */
  ESPCHK(0x11160e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10010e90 @ 0x11160e90 (183 bytes, 62 insns) */
void f_11160e90(void) {
  FTRACE(0x11160e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11160e90 push ebp */
  push32((uint32_t)(EBP));
  /* 11160e91 mov ebp, esp */
  EBP = (ESP);
  /* 11160e93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11160e96 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11160e9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11160ea0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11160ea3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11160ea6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11160ea9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11160eac cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11160eaf jne 0x11160f2b */
  if (!C.zf) goto L_11160f2b;
  /* 11160eb1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11160eb4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11160eb7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 11160ebd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11160ebf je 0x11160f2b */
  if (C.zf) goto L_11160f2b;
  /* 11160ec1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11160ec4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11160ec7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11160ec9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11160ecc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11160ecf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11160ed3 jle 0x11160f2b */
  if ((C.zf||C.sf!=C.of)) goto L_11160f2b;
  /* 11160ed5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11160ed8 push edx */
  push32((uint32_t)(EDX));
  /* 11160ed9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11160edc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11160edf push ecx */
  push32((uint32_t)(ECX));
  /* 11160ee0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11160ee3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11160ee6 push eax */
  push32((uint32_t)(EAX));
  /* 11160ee7 call 0x1115fe00 */
  push32(0x11160eecu); f_1115fe00();
  /* 11160eec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11160eef cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11160ef2 jne 0x11160f15 */
  if (!C.zf) goto L_11160f15;
  /* 11160ef4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11160ef7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11160efa and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 11160f00 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11160f02 je 0x11160f13 */
  if (C.zf) goto L_11160f13;
  /* 11160f04 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11160f07 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11160f0a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 11160f0d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11160f10 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_11160f13:;
  /* 11160f13 jmp 0x11160f2b */
  goto L_11160f2b;
L_11160f15:;
  /* 11160f15 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11160f18 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11160f1b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11160f1e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11160f21 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11160f24 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11160f2b:;
  /* 11160f2b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11160f2e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11160f31 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11160f34 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11160f36 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11160f39 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11160f40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11160f43 mov esp, ebp */
  ESP = (EBP);
  /* 11160f45 pop ebp */
  EBP = (pop32());
  /* 11160f46 ret  */
  ESPCHK(0x11160e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f50 @ 0x11160f50 (15 bytes, 7 insns) */
void f_11160f50(void) {
  FTRACE(0x11160f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11160f50 push ebp */
  push32((uint32_t)(EBP));
  /* 11160f51 mov ebp, esp */
  EBP = (ESP);
  /* 11160f53 push 1 */
  push32((uint32_t)(0x1u));
  /* 11160f55 call 0x11160f60 */
  push32(0x11160f5au); f_11160f60();
  /* 11160f5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11160f5d pop ebp */
  EBP = (pop32());
  /* 11160f5e ret  */
  ESPCHK(0x11160f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f60 @ 0x11160f60 (319 bytes, 94 insns) */
void f_11160f60(void) {
  FTRACE(0x11160f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11160f60 push ebp */
  push32((uint32_t)(EBP));
  /* 11160f61 mov ebp, esp */
  EBP = (ESP);
  /* 11160f63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11160f66 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11160f6d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11160f74 push 2 */
  push32((uint32_t)(0x2u));
  /* 11160f76 call 0x1115af60 */
  push32(0x11160f7bu); f_1115af60();
  /* 11160f7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11160f7e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11160f85 jmp 0x11160f90 */
  goto L_11160f90;
L_11160f87:;
  /* 11160f87 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11160f8a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11160f8d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11160f90:;
  /* 11160f90 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11160f93 cmp ecx, dword ptr [0x11184ec0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11184ec0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11160f99 jge 0x11161083 */
  if ((C.sf==C.of)) goto L_11161083;
  /* 11160f9f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11160fa2 mov eax, dword ptr [0x11183b80] */
  EAX = (r32((uint32_t)(0x11183b80)));
  /* 11160fa7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11160fab je 0x1116107e */
  if (C.zf) goto L_1116107e;
  /* 11160fb1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11160fb4 mov edx, dword ptr [0x11183b80] */
  EDX = (r32((uint32_t)(0x11183b80)));
  /* 11160fba mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11160fbd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11160fc0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 11160fc6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11160fc8 je 0x1116107e */
  if (C.zf) goto L_1116107e;
  /* 11160fce mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11160fd1 mov eax, dword ptr [0x11183b80] */
  EAX = (r32((uint32_t)(0x11183b80)));
  /* 11160fd6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11160fd9 push ecx */
  push32((uint32_t)(ECX));
  /* 11160fda mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11160fdd push edx */
  push32((uint32_t)(EDX));
  /* 11160fde call 0x111603b0 */
  push32(0x11160fe3u); f_111603b0();
  /* 11160fe3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11160fe6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11160fe9 mov ecx, dword ptr [0x11183b80] */
  ECX = (r32((uint32_t)(0x11183b80)));
  /* 11160fef mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11160ff2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11160ff5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 11160ffa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11160ffc je 0x11161065 */
  if (C.zf) goto L_11161065;
  /* 11160ffe cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11161002 jne 0x11161029 */
  if (!C.zf) goto L_11161029;
  /* 11161004 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11161007 mov edx, dword ptr [0x11183b80] */
  EDX = (r32((uint32_t)(0x11183b80)));
  /* 1116100d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11161010 push eax */
  push32((uint32_t)(EAX));
  /* 11161011 call 0x11160e40 */
  push32(0x11161016u); f_11160e40();
  /* 11161016 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161019 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116101c je 0x11161027 */
  if (C.zf) goto L_11161027;
  /* 1116101e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11161021 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11161024 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11161027:;
  /* 11161027 jmp 0x11161065 */
  goto L_11161065;
L_11161029:;
  /* 11161029 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116102d jne 0x11161065 */
  if (!C.zf) goto L_11161065;
  /* 1116102f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11161032 mov eax, dword ptr [0x11183b80] */
  EAX = (r32((uint32_t)(0x11183b80)));
  /* 11161037 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1116103a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1116103d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11161040 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11161042 je 0x11161065 */
  if (C.zf) goto L_11161065;
  /* 11161044 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11161047 mov ecx, dword ptr [0x11183b80] */
  ECX = (r32((uint32_t)(0x11183b80)));
  /* 1116104d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11161050 push edx */
  push32((uint32_t)(EDX));
  /* 11161051 call 0x11160e40 */
  push32(0x11161056u); f_11160e40();
  /* 11161056 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161059 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116105c jne 0x11161065 */
  if (!C.zf) goto L_11161065;
  /* 1116105e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_11161065:;
  /* 11161065 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11161068 mov ecx, dword ptr [0x11183b80] */
  ECX = (r32((uint32_t)(0x11183b80)));
  /* 1116106e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11161071 push edx */
  push32((uint32_t)(EDX));
  /* 11161072 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11161075 push eax */
  push32((uint32_t)(EAX));
  /* 11161076 call 0x11160420 */
  push32(0x1116107bu); f_11160420();
  /* 1116107b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1116107e:;
  /* 1116107e jmp 0x11160f87 */
  goto L_11160f87;
L_11161083:;
  /* 11161083 push 2 */
  push32((uint32_t)(0x2u));
  /* 11161085 call 0x1115b000 */
  push32(0x1116108au); f_1115b000();
  /* 1116108a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116108d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11161091 jne 0x11161098 */
  if (!C.zf) goto L_11161098;
  /* 11161093 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11161096 jmp 0x1116109b */
  goto L_1116109b;
L_11161098:;
  /* 11161098 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1116109b:;
  /* 1116109b mov esp, ebp */
  ESP = (EBP);
  /* 1116109d pop ebp */
  EBP = (pop32());
  /* 1116109e ret  */
  ESPCHK(0x11160f60u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x111610a0 (15 bytes, 7 insns) */
void f_111610a0(void) {
  FTRACE(0x111610a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111610a0 push ebp */
  push32((uint32_t)(EBP));
  /* 111610a1 mov ebp, esp */
  EBP = (ESP);
  /* 111610a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 111610a5 call 0x111564d0 */
  push32(0x111610aau); f_111564d0();
  /* 111610aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111610ad pop ebp */
  EBP = (pop32());
  /* 111610ae ret  */
  ESPCHK(0x111610a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100110b0 @ 0x111610b0 (1007 bytes, 269 insns) */
void f_111610b0(void) {
  FTRACE(0x111610b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111610b0 push ebp */
  push32((uint32_t)(EBP));
  /* 111610b1 mov ebp, esp */
  EBP = (ESP);
  /* 111610b3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111610b9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111610bd jl 0x111610c5 */
  if ((C.sf!=C.of)) goto L_111610c5;
  /* 111610bf cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111610c3 jle 0x111610cc */
  if ((C.zf||C.sf!=C.of)) goto L_111610cc;
L_111610c5:;
  /* 111610c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111610c7 jmp 0x1116149b */
  goto L_1116149b;
L_111610cc:;
  /* 111610cc push 0x13 */
  push32((uint32_t)(0x13u));
  /* 111610ce call 0x1115af60 */
  push32(0x111610d3u); f_1115af60();
  /* 111610d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111610d6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 111610dd mov eax, dword ptr [0x11183b6c] */
  EAX = (r32((uint32_t)(0x11183b6c)));
  /* 111610e2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111610e5 mov dword ptr [0x11183b6c], eax */
  w32((uint32_t)(0x11183b6c), (EAX));
L_111610ea:;
  /* 111610ea cmp dword ptr [0x11183b7c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183b7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111610f1 je 0x111610fd */
  if (C.zf) goto L_111610fd;
  /* 111610f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 111610f5 call dword ptr [0x11186320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186320))), 0x111610fbu);
  /* 111610fb jmp 0x111610ea */
  goto L_111610ea;
L_111610fd:;
  /* 111610fd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11161101 je 0x11161141 */
  if (C.zf) goto L_11161141;
  /* 11161103 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11161107 je 0x11161121 */
  if (C.zf) goto L_11161121;
  /* 11161109 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1116110c push ecx */
  push32((uint32_t)(ECX));
  /* 1116110d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161110 push edx */
  push32((uint32_t)(EDX));
  /* 11161111 call 0x111614a0 */
  push32(0x11161116u); f_111614a0();
  /* 11161116 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161119 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1116111f jmp 0x11161133 */
  goto L_11161133;
L_11161121:;
  /* 11161121 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161124 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11161127 mov ecx, dword ptr [eax + 0x111824dc] */
  ECX = (r32((uint32_t)(EAX + 0x111824dc)));
  /* 1116112d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_11161133:;
  /* 11161133 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 11161139 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1116113c jmp 0x1116147b */
  goto L_1116147b;
L_11161141:;
  /* 11161141 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 11161148 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1116114f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11161153 je 0x11161473 */
  if (C.zf) goto L_11161473;
  /* 11161159 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1116115c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1116115f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11161162 jne 0x11161384 */
  if (!C.zf) goto L_11161384;
  /* 11161168 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1116116b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1116116f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11161172 jne 0x11161384 */
  if (!C.zf) goto L_11161384;
  /* 11161178 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1116117b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1116117f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11161182 jne 0x11161384 */
  if (!C.zf) goto L_11161384;
  /* 11161188 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1116118b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_11161191:;
  /* 11161191 push 0x1117f4bc */
  push32((uint32_t)(0x1117f4bcu));
  /* 11161196 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1116119c push ecx */
  push32((uint32_t)(ECX));
  /* 1116119d call 0x11163300 */
  push32(0x111611a2u); f_11163300();
  /* 111611a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111611a5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 111611ab cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111611b2 je 0x111611dd */
  if (C.zf) goto L_111611dd;
  /* 111611b4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 111611ba sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111611c0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 111611c6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111611cd je 0x111611dd */
  if (C.zf) goto L_111611dd;
  /* 111611cf mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 111611d5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111611d8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111611db jne 0x11161203 */
  if (!C.zf) goto L_11161203;
L_111611dd:;
  /* 111611dd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111611e1 je 0x111611fc */
  if (C.zf) goto L_111611fc;
  /* 111611e3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 111611e5 call 0x1115b000 */
  push32(0x111611eau); f_1115b000();
  /* 111611ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111611ed mov edx, dword ptr [0x11183b6c] */
  EDX = (r32((uint32_t)(0x11183b6c)));
  /* 111611f3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111611f6 mov dword ptr [0x11183b6c], edx */
  w32((uint32_t)(0x11183b6c), (EDX));
L_111611fc:;
  /* 111611fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111611fe jmp 0x1116149b */
  goto L_1116149b;
L_11161203:;
  /* 11161203 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1116120a jmp 0x11161215 */
  goto L_11161215;
L_1116120c:;
  /* 1116120c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1116120f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11161212 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11161215:;
  /* 11161215 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11161219 jg 0x11161263 */
  if ((!C.zf&&C.sf==C.of)) goto L_11161263;
  /* 1116121b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11161221 push ecx */
  push32((uint32_t)(ECX));
  /* 11161222 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11161228 push edx */
  push32((uint32_t)(EDX));
  /* 11161229 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1116122c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1116122f mov ecx, dword ptr [eax + 0x111824d8] */
  ECX = (r32((uint32_t)(EAX + 0x111824d8)));
  /* 11161235 push ecx */
  push32((uint32_t)(ECX));
  /* 11161236 call 0x111632c0 */
  push32(0x1116123bu); f_111632c0();
  /* 1116123b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116123e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11161240 jne 0x11161261 */
  if (!C.zf) goto L_11161261;
  /* 11161242 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11161245 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11161248 mov eax, dword ptr [edx + 0x111824d8] */
  EAX = (r32((uint32_t)(EDX + 0x111824d8)));
  /* 1116124e push eax */
  push32((uint32_t)(EAX));
  /* 1116124f call 0x1115a390 */
  push32(0x11161254u); f_1115a390();
  /* 11161254 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161257 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116125d jne 0x11161261 */
  if (!C.zf) goto L_11161261;
  /* 1116125f jmp 0x11161263 */
  goto L_11161263;
L_11161261:;
  /* 11161261 jmp 0x1116120c */
  goto L_1116120c;
L_11161263:;
  /* 11161263 push 0x1117f4b8 */
  push32((uint32_t)(0x1117f4b8u));
  /* 11161268 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1116126e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11161271 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 11161277 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1116127d push edx */
  push32((uint32_t)(EDX));
  /* 1116127e call 0x11163280 */
  push32(0x11161283u); f_11163280();
  /* 11161283 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161286 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1116128c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11161293 jne 0x111612c9 */
  if (!C.zf) goto L_111612c9;
  /* 11161295 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1116129b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1116129e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111612a1 je 0x111612c9 */
  if (C.zf) goto L_111612c9;
  /* 111612a3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111612a7 je 0x111612c2 */
  if (C.zf) goto L_111612c2;
  /* 111612a9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 111612ab call 0x1115b000 */
  push32(0x111612b0u); f_1115b000();
  /* 111612b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111612b3 mov edx, dword ptr [0x11183b6c] */
  EDX = (r32((uint32_t)(0x11183b6c)));
  /* 111612b9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111612bc mov dword ptr [0x11183b6c], edx */
  w32((uint32_t)(0x11183b6c), (EDX));
L_111612c2:;
  /* 111612c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111612c4 jmp 0x1116149b */
  goto L_1116149b;
L_111612c9:;
  /* 111612c9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111612cd jg 0x1116131a */
  if ((!C.zf&&C.sf==C.of)) goto L_1116131a;
  /* 111612cf mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 111612d5 push eax */
  push32((uint32_t)(EAX));
  /* 111612d6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 111612dc push ecx */
  push32((uint32_t)(ECX));
  /* 111612dd lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 111612e3 push edx */
  push32((uint32_t)(EDX));
  /* 111612e4 call 0x1115ad80 */
  push32(0x111612e9u); f_1115ad80();
  /* 111612e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111612ec mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 111612f2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 111612fa lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 11161300 push ecx */
  push32((uint32_t)(ECX));
  /* 11161301 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11161304 push edx */
  push32((uint32_t)(EDX));
  /* 11161305 call 0x111614a0 */
  push32(0x1116130au); f_111614a0();
  /* 1116130a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116130d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1116130f je 0x1116131a */
  if (C.zf) goto L_1116131a;
  /* 11161311 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11161314 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11161317 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1116131a:;
  /* 1116131a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11161320 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11161326 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1116132c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11161332 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11161335 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11161337 je 0x11161348 */
  if (C.zf) goto L_11161348;
  /* 11161339 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1116133f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11161342 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_11161348:;
  /* 11161348 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1116134e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11161351 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11161353 jne 0x11161191 */
  if (!C.zf) goto L_11161191;
  /* 11161359 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116135d je 0x1116136c */
  if (C.zf) goto L_1116136c;
  /* 1116135f call 0x11161640 */
  push32(0x11161364u); f_11161640();
  /* 11161364 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 1116136a jmp 0x11161376 */
  goto L_11161376;
L_1116136c:;
  /* 1116136c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_11161376:;
  /* 11161376 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 1116137c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1116137f jmp 0x11161471 */
  goto L_11161471;
L_11161384:;
  /* 11161384 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161387 push edx */
  push32((uint32_t)(EDX));
  /* 11161388 push 0 */
  push32((uint32_t)(0x0u));
  /* 1116138a push 0 */
  push32((uint32_t)(0x0u));
  /* 1116138c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11161392 push eax */
  push32((uint32_t)(EAX));
  /* 11161393 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11161396 push ecx */
  push32((uint32_t)(ECX));
  /* 11161397 call 0x11161740 */
  push32(0x1116139cu); f_11161740();
  /* 1116139c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116139f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111613a2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111613a6 je 0x11161471 */
  if (C.zf) goto L_11161471;
  /* 111613ac mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 111613b3 jmp 0x111613be */
  goto L_111613be;
L_111613b5:;
  /* 111613b5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111613b8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111613bb mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_111613be:;
  /* 111613be cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111613c2 jg 0x11161420 */
  if ((!C.zf&&C.sf==C.of)) goto L_11161420;
  /* 111613c4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111613c8 je 0x1116141e */
  if (C.zf) goto L_1116141e;
  /* 111613ca mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111613cd imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111613d0 mov ecx, dword ptr [eax + 0x111824dc] */
  ECX = (r32((uint32_t)(EAX + 0x111824dc)));
  /* 111613d6 push ecx */
  push32((uint32_t)(ECX));
  /* 111613d7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 111613dd push edx */
  push32((uint32_t)(EDX));
  /* 111613de call 0x111631f0 */
  push32(0x111613e3u); f_111631f0();
  /* 111613e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111613e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111613e8 je 0x11161415 */
  if (C.zf) goto L_11161415;
  /* 111613ea lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 111613f0 push eax */
  push32((uint32_t)(EAX));
  /* 111613f1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111613f4 push ecx */
  push32((uint32_t)(ECX));
  /* 111613f5 call 0x111614a0 */
  push32(0x111613fau); f_111614a0();
  /* 111613fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111613fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111613ff je 0x1116140c */
  if (C.zf) goto L_1116140c;
  /* 11161401 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11161404 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11161407 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1116140a jmp 0x11161413 */
  goto L_11161413;
L_1116140c:;
  /* 1116140c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11161413:;
  /* 11161413 jmp 0x1116141e */
  goto L_1116141e;
L_11161415:;
  /* 11161415 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11161418 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116141b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1116141e:;
  /* 1116141e jmp 0x111613b5 */
  goto L_111613b5;
L_11161420:;
  /* 11161420 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11161424 je 0x1116144b */
  if (C.zf) goto L_1116144b;
  /* 11161426 call 0x11161640 */
  push32(0x1116142bu); f_11161640();
  /* 1116142b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1116142e push 2 */
  push32((uint32_t)(0x2u));
  /* 11161430 mov ecx, dword ptr [0x111824dc] */
  ECX = (r32((uint32_t)(0x111824dc)));
  /* 11161436 push ecx */
  push32((uint32_t)(ECX));
  /* 11161437 call 0x11157ff0 */
  push32(0x1116143cu); f_11157ff0();
  /* 1116143c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116143f mov dword ptr [0x111824dc], 0 */
  w32((uint32_t)(0x111824dc), (0x0u));
  /* 11161449 jmp 0x11161471 */
  goto L_11161471;
L_1116144b:;
  /* 1116144b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116144f je 0x1116145e */
  if (C.zf) goto L_1116145e;
  /* 11161451 call 0x11161640 */
  push32(0x11161456u); f_11161640();
  /* 11161456 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1116145c jmp 0x11161468 */
  goto L_11161468;
L_1116145e:;
  /* 1116145e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_11161468:;
  /* 11161468 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 1116146e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11161471:;
  /* 11161471 jmp 0x1116147b */
  goto L_1116147b;
L_11161473:;
  /* 11161473 call 0x11161640 */
  push32(0x11161478u); f_11161640();
  /* 11161478 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1116147b:;
  /* 1116147b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116147f je 0x11161498 */
  if (C.zf) goto L_11161498;
  /* 11161481 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11161483 call 0x1115b000 */
  push32(0x11161488u); f_1115b000();
  /* 11161488 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116148b mov eax, dword ptr [0x11183b6c] */
  EAX = (r32((uint32_t)(0x11183b6c)));
  /* 11161490 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11161493 mov dword ptr [0x11183b6c], eax */
  w32((uint32_t)(0x11183b6c), (EAX));
L_11161498:;
  /* 11161498 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1116149b:;
  /* 1116149b mov esp, ebp */
  ESP = (EBP);
  /* 1116149d pop ebp */
  EBP = (pop32());
  /* 1116149e ret  */
  ESPCHK(0x111610b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100114a0 @ 0x111614a0 (403 bytes, 117 insns) */
void f_111614a0(void) {
  FTRACE(0x111614a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111614a0 push ebp */
  push32((uint32_t)(EBP));
  /* 111614a1 mov ebp, esp */
  EBP = (ESP);
  /* 111614a3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111614a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111614ac push eax */
  push32((uint32_t)(EAX));
  /* 111614ad lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 111614b3 push ecx */
  push32((uint32_t)(ECX));
  /* 111614b4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 111614ba push edx */
  push32((uint32_t)(EDX));
  /* 111614bb lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 111614c1 push eax */
  push32((uint32_t)(EAX));
  /* 111614c2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111614c5 push ecx */
  push32((uint32_t)(ECX));
  /* 111614c6 call 0x11161740 */
  push32(0x111614cbu); f_11161740();
  /* 111614cb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111614ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111614d0 jne 0x111614d9 */
  if (!C.zf) goto L_111614d9;
  /* 111614d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111614d4 jmp 0x1116162f */
  goto L_1116162f;
L_111614d9:;
  /* 111614d9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 111614de push 0x1117f4c0 */
  push32((uint32_t)(0x1117f4c0u));
  /* 111614e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 111614e5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 111614eb push edx */
  push32((uint32_t)(EDX));
  /* 111614ec call 0x1115a390 */
  push32(0x111614f1u); f_1115a390();
  /* 111614f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111614f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111614f7 push eax */
  push32((uint32_t)(EAX));
  /* 111614f8 call 0x11157560 */
  push32(0x111614fdu); f_11157560();
  /* 111614fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161500 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11161503 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11161507 jne 0x11161510 */
  if (!C.zf) goto L_11161510;
  /* 11161509 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1116150b jmp 0x1116162f */
  goto L_1116162f;
L_11161510:;
  /* 11161510 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161513 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11161516 mov ecx, dword ptr [eax + 0x111824dc] */
  ECX = (r32((uint32_t)(EAX + 0x111824dc)));
  /* 1116151c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1116151f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161522 mov eax, dword ptr [edx*4 + 0x111839e8] */
  EAX = (r32((uint32_t)(EDX*4 + 0x111839e8)));
  /* 11161529 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1116152c push 6 */
  push32((uint32_t)(0x6u));
  /* 1116152e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161531 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11161534 add ecx, 0x11183a38 */
  { uint32_t _a=(ECX),_b=(0x11183a38u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116153a push ecx */
  push32((uint32_t)(ECX));
  /* 1116153b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1116153e push edx */
  push32((uint32_t)(EDX));
  /* 1116153f call 0x1115de40 */
  push32(0x11161544u); f_1115de40();
  /* 11161544 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161547 mov eax, dword ptr [0x11183a00] */
  EAX = (r32((uint32_t)(0x11183a00)));
  /* 1116154c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1116154f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 11161555 push ecx */
  push32((uint32_t)(ECX));
  /* 11161556 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11161559 push edx */
  push32((uint32_t)(EDX));
  /* 1116155a call 0x1115a510 */
  push32(0x1116155fu); f_1115a510();
  /* 1116155f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161562 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161565 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11161568 mov dword ptr [ecx + 0x111824dc], eax */
  w32((uint32_t)(ECX + 0x111824dc), (EAX));
  /* 1116156e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 11161574 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1116157a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116157d mov dword ptr [eax*4 + 0x111839e8], edx */
  w32((uint32_t)(EAX*4 + 0x111839e8), (EDX));
  /* 11161584 push 6 */
  push32((uint32_t)(0x6u));
  /* 11161586 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 1116158c push ecx */
  push32((uint32_t)(ECX));
  /* 1116158d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161590 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11161593 add edx, 0x11183a38 */
  { uint32_t _a=(EDX),_b=(0x11183a38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11161599 push edx */
  push32((uint32_t)(EDX));
  /* 1116159a call 0x1115de40 */
  push32(0x1116159fu); f_1115de40();
  /* 1116159f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111615a2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111615a6 jne 0x111615b3 */
  if (!C.zf) goto L_111615b3;
  /* 111615a8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 111615ae mov dword ptr [0x11183a00], eax */
  w32((uint32_t)(0x11183a00), (EAX));
L_111615b3:;
  /* 111615b3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111615b7 jne 0x111615c5 */
  if (!C.zf) goto L_111615c5;
  /* 111615b9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 111615bf mov dword ptr [0x11183a04], ecx */
  w32((uint32_t)(0x11183a04), (ECX));
L_111615c5:;
  /* 111615c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111615c8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111615cb call dword ptr [edx + 0x111824e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x111824e0))), 0x111615d1u);
  /* 111615d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111615d3 je 0x1116160c */
  if (C.zf) goto L_1116160c;
  /* 111615d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111615d8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111615db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111615de mov dword ptr [eax + 0x111824dc], ecx */
  w32((uint32_t)(EAX + 0x111824dc), (ECX));
  /* 111615e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 111615e6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111615e9 push edx */
  push32((uint32_t)(EDX));
  /* 111615ea call 0x11157ff0 */
  push32(0x111615efu); f_11157ff0();
  /* 111615ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111615f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111615f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111615f8 mov dword ptr [eax*4 + 0x111839e8], ecx */
  w32((uint32_t)(EAX*4 + 0x111839e8), (ECX));
  /* 111615ff mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11161602 mov dword ptr [0x11183a00], edx */
  w32((uint32_t)(0x11183a00), (EDX));
  /* 11161608 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1116160a jmp 0x1116162f */
  goto L_1116162f;
L_1116160c:;
  /* 1116160c cmp dword ptr [ebp - 0xc], 0x111823c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x111823c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11161613 je 0x11161623 */
  if (C.zf) goto L_11161623;
  /* 11161615 push 2 */
  push32((uint32_t)(0x2u));
  /* 11161617 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1116161a push eax */
  push32((uint32_t)(EAX));
  /* 1116161b call 0x11157ff0 */
  push32(0x11161620u); f_11157ff0();
  /* 11161620 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11161623:;
  /* 11161623 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161626 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11161629 mov eax, dword ptr [ecx + 0x111824dc] */
  EAX = (r32((uint32_t)(ECX + 0x111824dc)));
L_1116162f:;
  /* 1116162f mov esp, ebp */
  ESP = (EBP);
  /* 11161631 pop ebp */
  EBP = (pop32());
  /* 11161632 ret  */
  ESPCHK(0x111614a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011640 @ 0x11161640 (256 bytes, 72 insns) */
void f_11161640(void) {
  FTRACE(0x11161640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11161640 push ebp */
  push32((uint32_t)(EBP));
  /* 11161641 mov ebp, esp */
  EBP = (ESP);
  /* 11161643 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11161646 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1116164d cmp dword ptr [0x111824dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111824dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11161654 jne 0x11161674 */
  if (!C.zf) goto L_11161674;
  /* 11161656 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1116165b push 0x1117f4c0 */
  push32((uint32_t)(0x1117f4c0u));
  /* 11161660 push 2 */
  push32((uint32_t)(0x2u));
  /* 11161662 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 11161667 call 0x11157560 */
  push32(0x1116166cu); f_11157560();
  /* 1116166c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116166f mov dword ptr [0x111824dc], eax */
  w32((uint32_t)(0x111824dc), (EAX));
L_11161674:;
  /* 11161674 mov eax, dword ptr [0x111824dc] */
  EAX = (r32((uint32_t)(0x111824dc)));
  /* 11161679 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1116167c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11161683 jmp 0x1116168e */
  goto L_1116168e;
L_11161685:;
  /* 11161685 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11161688 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116168b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1116168e:;
  /* 1116168e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11161691 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11161694 mov eax, dword ptr [edx + 0x111824dc] */
  EAX = (r32((uint32_t)(EDX + 0x111824dc)));
  /* 1116169a push eax */
  push32((uint32_t)(EAX));
  /* 1116169b push 0x1117f4cc */
  push32((uint32_t)(0x1117f4ccu));
  /* 111616a0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111616a3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111616a6 mov edx, dword ptr [ecx + 0x111824d8] */
  EDX = (r32((uint32_t)(ECX + 0x111824d8)));
  /* 111616ac push edx */
  push32((uint32_t)(EDX));
  /* 111616ad push 3 */
  push32((uint32_t)(0x3u));
  /* 111616af mov eax, dword ptr [0x111824dc] */
  EAX = (r32((uint32_t)(0x111824dc)));
  /* 111616b4 push eax */
  push32((uint32_t)(EAX));
  /* 111616b5 call 0x111618e0 */
  push32(0x111616bau); f_111618e0();
  /* 111616ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111616bd cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111616c1 jge 0x11161709 */
  if ((C.sf==C.of)) goto L_11161709;
  /* 111616c3 push 0x1117f4b8 */
  push32((uint32_t)(0x1117f4b8u));
  /* 111616c8 mov ecx, dword ptr [0x111824dc] */
  ECX = (r32((uint32_t)(0x111824dc)));
  /* 111616ce push ecx */
  push32((uint32_t)(ECX));
  /* 111616cf call 0x1115a520 */
  push32(0x111616d4u); f_1115a520();
  /* 111616d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111616d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111616da add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111616dd imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111616e0 mov eax, dword ptr [edx + 0x111824dc] */
  EAX = (r32((uint32_t)(EDX + 0x111824dc)));
  /* 111616e6 push eax */
  push32((uint32_t)(EAX));
  /* 111616e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111616ea imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111616ed mov edx, dword ptr [ecx + 0x111824dc] */
  EDX = (r32((uint32_t)(ECX + 0x111824dc)));
  /* 111616f3 push edx */
  push32((uint32_t)(EDX));
  /* 111616f4 call 0x111631f0 */
  push32(0x111616f9u); f_111631f0();
  /* 111616f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111616fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111616fe je 0x11161707 */
  if (C.zf) goto L_11161707;
  /* 11161700 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11161707:;
  /* 11161707 jmp 0x11161737 */
  goto L_11161737;
L_11161709:;
  /* 11161709 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116170d jne 0x11161716 */
  if (!C.zf) goto L_11161716;
  /* 1116170f mov eax, dword ptr [0x111824dc] */
  EAX = (r32((uint32_t)(0x111824dc)));
  /* 11161714 jmp 0x1116173c */
  goto L_1116173c;
L_11161716:;
  /* 11161716 push 2 */
  push32((uint32_t)(0x2u));
  /* 11161718 mov eax, dword ptr [0x111824dc] */
  EAX = (r32((uint32_t)(0x111824dc)));
  /* 1116171d push eax */
  push32((uint32_t)(EAX));
  /* 1116171e call 0x11157ff0 */
  push32(0x11161723u); f_11157ff0();
  /* 11161723 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161726 mov dword ptr [0x111824dc], 0 */
  w32((uint32_t)(0x111824dc), (0x0u));
  /* 11161730 mov eax, dword ptr [0x111824f4] */
  EAX = (r32((uint32_t)(0x111824f4)));
  /* 11161735 jmp 0x1116173c */
  goto L_1116173c;
L_11161737:;
  /* 11161737 jmp 0x11161685 */
  goto L_11161685;
L_1116173c:;
  /* 1116173c mov esp, ebp */
  ESP = (EBP);
  /* 1116173e pop ebp */
  EBP = (pop32());
  /* 1116173f ret  */
  ESPCHK(0x11161640u, _esp0);
  ESP += 4; return;
}

/* FUN_10011740 @ 0x11161740 (388 bytes, 115 insns) */
void f_11161740(void) {
  FTRACE(0x11161740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11161740 push ebp */
  push32((uint32_t)(EBP));
  /* 11161741 mov ebp, esp */
  EBP = (ESP);
  /* 11161743 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11161749 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116174d jne 0x11161756 */
  if (!C.zf) goto L_11161756;
  /* 1116174f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11161751 jmp 0x111618c0 */
  goto L_111618c0;
L_11161756:;
  /* 11161756 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161759 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1116175c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116175f jne 0x111617b0 */
  if (!C.zf) goto L_111617b0;
  /* 11161761 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161764 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11161768 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1116176a jne 0x111617b0 */
  if (!C.zf) goto L_111617b0;
  /* 1116176c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1116176f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 11161772 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11161775 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 11161779 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116177d je 0x11161799 */
  if (C.zf) goto L_11161799;
  /* 1116177f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11161782 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 11161787 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1116178a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 11161790 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11161793 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_11161799:;
  /* 11161799 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116179d je 0x111617a8 */
  if (C.zf) goto L_111617a8;
  /* 1116179f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111617a2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_111617a8:;
  /* 111617a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111617ab jmp 0x111618c0 */
  goto L_111618c0;
L_111617b0:;
  /* 111617b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111617b3 push ecx */
  push32((uint32_t)(ECX));
  /* 111617b4 push 0x11182450 */
  push32((uint32_t)(0x11182450u));
  /* 111617b9 call 0x111631f0 */
  push32(0x111617beu); f_111631f0();
  /* 111617be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111617c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111617c3 je 0x11161878 */
  if (C.zf) goto L_11161878;
  /* 111617c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111617cc push edx */
  push32((uint32_t)(EDX));
  /* 111617cd push 0x111823cc */
  push32((uint32_t)(0x111823ccu));
  /* 111617d2 call 0x111631f0 */
  push32(0x111617d7u); f_111631f0();
  /* 111617d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111617da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111617dc je 0x11161878 */
  if (C.zf) goto L_11161878;
  /* 111617e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111617e5 push eax */
  push32((uint32_t)(EAX));
  /* 111617e6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 111617ec push ecx */
  push32((uint32_t)(ECX));
  /* 111617ed call 0x11161930 */
  push32(0x111617f2u); f_11161930();
  /* 111617f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111617f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111617f7 je 0x11161800 */
  if (C.zf) goto L_11161800;
  /* 111617f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111617fb jmp 0x111618c0 */
  goto L_111618c0;
L_11161800:;
  /* 11161800 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 11161806 push edx */
  push32((uint32_t)(EDX));
  /* 11161807 push 0x11183a10 */
  push32((uint32_t)(0x11183a10u));
  /* 1116180c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 11161812 push eax */
  push32((uint32_t)(EAX));
  /* 11161813 call 0x11163340 */
  push32(0x11161818u); f_11163340();
  /* 11161818 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116181b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1116181d jne 0x11161826 */
  if (!C.zf) goto L_11161826;
  /* 1116181f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11161821 jmp 0x111618c0 */
  goto L_111618c0;
L_11161826:;
  /* 11161826 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11161828 mov cx, word ptr [0x11183a14] */
  CX = (r16((uint32_t)(0x11183a14)));
  /* 1116182f mov dword ptr [0x11183a18], ecx */
  w32((uint32_t)(0x11183a18), (ECX));
  /* 11161835 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1116183b push edx */
  push32((uint32_t)(EDX));
  /* 1116183c push 0x11182450 */
  push32((uint32_t)(0x11182450u));
  /* 11161841 call 0x11161a90 */
  push32(0x11161846u); f_11161a90();
  /* 11161846 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161849 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116184c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1116184f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11161851 je 0x11161866 */
  if (C.zf) goto L_11161866;
  /* 11161853 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161856 push edx */
  push32((uint32_t)(EDX));
  /* 11161857 push 0x111823cc */
  push32((uint32_t)(0x111823ccu));
  /* 1116185c call 0x1115a510 */
  push32(0x11161861u); f_1115a510();
  /* 11161861 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161864 jmp 0x11161878 */
  goto L_11161878;
L_11161866:;
  /* 11161866 push 0x11182450 */
  push32((uint32_t)(0x11182450u));
  /* 1116186b push 0x111823cc */
  push32((uint32_t)(0x111823ccu));
  /* 11161870 call 0x1115a510 */
  push32(0x11161875u); f_1115a510();
  /* 11161875 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11161878:;
  /* 11161878 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116187c je 0x11161891 */
  if (C.zf) goto L_11161891;
  /* 1116187e push 6 */
  push32((uint32_t)(0x6u));
  /* 11161880 push 0x11183a10 */
  push32((uint32_t)(0x11183a10u));
  /* 11161885 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11161888 push eax */
  push32((uint32_t)(EAX));
  /* 11161889 call 0x1115de40 */
  push32(0x1116188eu); f_1115de40();
  /* 1116188e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11161891:;
  /* 11161891 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11161895 je 0x111618aa */
  if (C.zf) goto L_111618aa;
  /* 11161897 push 4 */
  push32((uint32_t)(0x4u));
  /* 11161899 push 0x11183a18 */
  push32((uint32_t)(0x11183a18u));
  /* 1116189e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111618a1 push ecx */
  push32((uint32_t)(ECX));
  /* 111618a2 call 0x1115de40 */
  push32(0x111618a7u); f_1115de40();
  /* 111618a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111618aa:;
  /* 111618aa push 0x11182450 */
  push32((uint32_t)(0x11182450u));
  /* 111618af mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111618b2 push edx */
  push32((uint32_t)(EDX));
  /* 111618b3 call 0x1115a510 */
  push32(0x111618b8u); f_1115a510();
  /* 111618b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111618bb mov eax, 0x11182450 */
  EAX = (0x11182450u);
L_111618c0:;
  /* 111618c0 mov esp, ebp */
  ESP = (EBP);
  /* 111618c2 pop ebp */
  EBP = (pop32());
  /* 111618c3 ret  */
  ESPCHK(0x11161740u, _esp0);
  ESP += 4; return;
}

/* FUN_100118d0 @ 0x111618d0 (7 bytes, 5 insns) */
void f_111618d0(void) {
  FTRACE(0x111618d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111618d0 push ebp */
  push32((uint32_t)(EBP));
  /* 111618d1 mov ebp, esp */
  EBP = (ESP);
  /* 111618d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111618d5 pop ebp */
  EBP = (pop32());
  /* 111618d6 ret  */
  ESPCHK(0x111618d0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x111618e0 (79 bytes, 28 insns) */
void f_111618e0(void) {
  FTRACE(0x111618e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111618e0 push ebp */
  push32((uint32_t)(EBP));
  /* 111618e1 mov ebp, esp */
  EBP = (ESP);
  /* 111618e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111618e6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 111618e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111618ec mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 111618f3 jmp 0x111618fe */
  goto L_111618fe;
L_111618f5:;
  /* 111618f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111618f8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111618fb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_111618fe:;
  /* 111618fe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11161901 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11161904 jge 0x11161924 */
  if ((C.sf==C.of)) goto L_11161924;
  /* 11161906 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11161909 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116190c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1116190f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11161912 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11161915 push edx */
  push32((uint32_t)(EDX));
  /* 11161916 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161919 push eax */
  push32((uint32_t)(EAX));
  /* 1116191a call 0x1115a520 */
  push32(0x1116191fu); f_1115a520();
  /* 1116191f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161922 jmp 0x111618f5 */
  goto L_111618f5;
L_11161924:;
  /* 11161924 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1116192b mov esp, ebp */
  ESP = (EBP);
  /* 1116192d pop ebp */
  EBP = (pop32());
  /* 1116192e ret  */
  ESPCHK(0x111618e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011930 @ 0x11161930 (349 bytes, 122 insns) */
void f_11161930(void) {
  FTRACE(0x11161930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11161930 push ebp */
  push32((uint32_t)(EBP));
  /* 11161931 mov ebp, esp */
  EBP = (ESP);
  /* 11161933 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11161936 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1116193b push 0 */
  push32((uint32_t)(0x0u));
  /* 1116193d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161940 push eax */
  push32((uint32_t)(EAX));
  /* 11161941 call 0x1115b2d0 */
  push32(0x11161946u); f_1115b2d0();
  /* 11161946 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161949 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1116194c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1116194f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11161951 jne 0x1116195a */
  if (!C.zf) goto L_1116195a;
  /* 11161953 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11161955 jmp 0x11161a89 */
  goto L_11161a89;
L_1116195a:;
  /* 1116195a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1116195d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11161960 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11161963 jne 0x11161990 */
  if (!C.zf) goto L_11161990;
  /* 11161965 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11161968 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1116196c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1116196e je 0x11161990 */
  if (C.zf) goto L_11161990;
  /* 11161970 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11161973 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11161976 push ecx */
  push32((uint32_t)(ECX));
  /* 11161977 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116197a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11161980 push edx */
  push32((uint32_t)(EDX));
  /* 11161981 call 0x1115a510 */
  push32(0x11161986u); f_1115a510();
  /* 11161986 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161989 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1116198b jmp 0x11161a89 */
  goto L_11161a89;
L_11161990:;
  /* 11161990 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11161997 jmp 0x111619a2 */
  goto L_111619a2;
L_11161999:;
  /* 11161999 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1116199c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116199f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_111619a2:;
  /* 111619a2 push 0x1117f4d0 */
  push32((uint32_t)(0x1117f4d0u));
  /* 111619a7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111619aa push ecx */
  push32((uint32_t)(ECX));
  /* 111619ab call 0x11163280 */
  push32(0x111619b0u); f_11163280();
  /* 111619b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111619b3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111619b6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111619ba jne 0x111619c4 */
  if (!C.zf) goto L_111619c4;
  /* 111619bc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111619bf jmp 0x11161a89 */
  goto L_11161a89;
L_111619c4:;
  /* 111619c4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111619c7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111619ca mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111619cc mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 111619cf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111619d3 jne 0x111619fa */
  if (!C.zf) goto L_111619fa;
  /* 111619d5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111619d9 jge 0x111619fa */
  if ((C.sf==C.of)) goto L_111619fa;
  /* 111619db movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 111619df cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111619e2 je 0x111619fa */
  if (C.zf) goto L_111619fa;
  /* 111619e4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111619e7 push edx */
  push32((uint32_t)(EDX));
  /* 111619e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111619eb push eax */
  push32((uint32_t)(EAX));
  /* 111619ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111619ef push ecx */
  push32((uint32_t)(ECX));
  /* 111619f0 call 0x1115ad80 */
  push32(0x111619f5u); f_1115ad80();
  /* 111619f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111619f8 jmp 0x11161a60 */
  goto L_11161a60;
L_111619fa:;
  /* 111619fa cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111619fe jne 0x11161a28 */
  if (!C.zf) goto L_11161a28;
  /* 11161a00 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11161a04 jge 0x11161a28 */
  if ((C.sf==C.of)) goto L_11161a28;
  /* 11161a06 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11161a0a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11161a0d je 0x11161a28 */
  if (C.zf) goto L_11161a28;
  /* 11161a0f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11161a12 push eax */
  push32((uint32_t)(EAX));
  /* 11161a13 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11161a16 push ecx */
  push32((uint32_t)(ECX));
  /* 11161a17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161a1a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11161a1d push edx */
  push32((uint32_t)(EDX));
  /* 11161a1e call 0x1115ad80 */
  push32(0x11161a23u); f_1115ad80();
  /* 11161a23 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161a26 jmp 0x11161a60 */
  goto L_11161a60;
L_11161a28:;
  /* 11161a28 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11161a2c jne 0x11161a5b */
  if (!C.zf) goto L_11161a5b;
  /* 11161a2e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11161a32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11161a34 je 0x11161a3f */
  if (C.zf) goto L_11161a3f;
  /* 11161a36 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11161a3a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11161a3d jne 0x11161a5b */
  if (!C.zf) goto L_11161a5b;
L_11161a3f:;
  /* 11161a3f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11161a42 push edx */
  push32((uint32_t)(EDX));
  /* 11161a43 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11161a46 push eax */
  push32((uint32_t)(EAX));
  /* 11161a47 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161a4a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11161a50 push ecx */
  push32((uint32_t)(ECX));
  /* 11161a51 call 0x1115ad80 */
  push32(0x11161a56u); f_1115ad80();
  /* 11161a56 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161a59 jmp 0x11161a60 */
  goto L_11161a60;
L_11161a5b:;
  /* 11161a5b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11161a5e jmp 0x11161a89 */
  goto L_11161a89;
L_11161a60:;
  /* 11161a60 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11161a64 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11161a67 jne 0x11161a6b */
  if (!C.zf) goto L_11161a6b;
  /* 11161a69 jmp 0x11161a87 */
  goto L_11161a87;
L_11161a6b:;
  /* 11161a6b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11161a6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11161a71 jne 0x11161a75 */
  if (!C.zf) goto L_11161a75;
  /* 11161a73 jmp 0x11161a87 */
  goto L_11161a87;
L_11161a75:;
  /* 11161a75 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11161a78 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11161a7b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 11161a7f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11161a82 jmp 0x11161999 */
  goto L_11161999;
L_11161a87:;
  /* 11161a87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11161a89:;
  /* 11161a89 mov esp, ebp */
  ESP = (EBP);
  /* 11161a8b pop ebp */
  EBP = (pop32());
  /* 11161a8c ret  */
  ESPCHK(0x11161930u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x11161a90 (101 bytes, 36 insns) */
void f_11161a90(void) {
  FTRACE(0x11161a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11161a90 push ebp */
  push32((uint32_t)(EBP));
  /* 11161a91 mov ebp, esp */
  EBP = (ESP);
  /* 11161a93 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11161a96 push eax */
  push32((uint32_t)(EAX));
  /* 11161a97 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161a9a push ecx */
  push32((uint32_t)(ECX));
  /* 11161a9b call 0x1115a510 */
  push32(0x11161aa0u); f_1115a510();
  /* 11161aa0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161aa3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11161aa6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 11161aaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11161aac je 0x11161ac8 */
  if (C.zf) goto L_11161ac8;
  /* 11161aae mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11161ab1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11161ab4 push ecx */
  push32((uint32_t)(ECX));
  /* 11161ab5 push 0x1117f4d8 */
  push32((uint32_t)(0x1117f4d8u));
  /* 11161aba push 2 */
  push32((uint32_t)(0x2u));
  /* 11161abc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161abf push edx */
  push32((uint32_t)(EDX));
  /* 11161ac0 call 0x111618e0 */
  push32(0x11161ac5u); f_111618e0();
  /* 11161ac5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11161ac8:;
  /* 11161ac8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11161acb movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 11161ad2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11161ad4 je 0x11161af3 */
  if (C.zf) goto L_11161af3;
  /* 11161ad6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11161ad9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11161adf push edx */
  push32((uint32_t)(EDX));
  /* 11161ae0 push 0x1117f4d4 */
  push32((uint32_t)(0x1117f4d4u));
  /* 11161ae5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11161ae7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161aea push eax */
  push32((uint32_t)(EAX));
  /* 11161aeb call 0x111618e0 */
  push32(0x11161af0u); f_111618e0();
  /* 11161af0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11161af3:;
  /* 11161af3 pop ebp */
  EBP = (pop32());
  /* 11161af4 ret  */
  ESPCHK(0x11161a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b00 @ 0x11161b00 (130 bytes, 50 insns) */
void f_11161b00(void) {
  FTRACE(0x11161b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11161b00 push ebp */
  push32((uint32_t)(EBP));
  /* 11161b01 mov ebp, esp */
  EBP = (ESP);
  /* 11161b03 push ecx */
  push32((uint32_t)(ECX));
  /* 11161b04 push ebx */
  push32((uint32_t)(EBX));
  /* 11161b05 push esi */
  push32((uint32_t)(ESI));
  /* 11161b06 push edi */
  push32((uint32_t)(EDI));
  /* 11161b07 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11161b0e:;
  /* 11161b0e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11161b12 jne 0x11161b32 */
  if (!C.zf) goto L_11161b32;
  /* 11161b14 push 0x1117f4e8 */
  push32((uint32_t)(0x1117f4e8u));
  /* 11161b19 push 0 */
  push32((uint32_t)(0x0u));
  /* 11161b1b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11161b1d push 0x1117f4dc */
  push32((uint32_t)(0x1117f4dcu));
  /* 11161b22 push 2 */
  push32((uint32_t)(0x2u));
  /* 11161b24 call 0x11156620 */
  push32(0x11161b29u); f_11156620();
  /* 11161b29 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161b2c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11161b2f jne 0x11161b32 */
  if (!C.zf) goto L_11161b32;
  /* 11161b31 int3  */
  x86_unimpl("int3 @ 0x11161b31");
L_11161b32:;
  /* 11161b32 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11161b34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11161b36 jne 0x11161b0e */
  if (!C.zf) goto L_11161b0e;
  /* 11161b38 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161b3b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11161b3e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 11161b41 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11161b43 je 0x11161b51 */
  if (C.zf) goto L_11161b51;
  /* 11161b45 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161b48 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11161b4f jmp 0x11161b78 */
  goto L_11161b78;
L_11161b51:;
  /* 11161b51 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161b54 push ecx */
  push32((uint32_t)(ECX));
  /* 11161b55 call 0x11160370 */
  push32(0x11161b5au); f_11160370();
  /* 11161b5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161b5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161b60 push edx */
  push32((uint32_t)(EDX));
  /* 11161b61 call 0x11161b90 */
  push32(0x11161b66u); f_11161b90();
  /* 11161b66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161b69 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11161b6c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161b6f push eax */
  push32((uint32_t)(EAX));
  /* 11161b70 call 0x111603e0 */
  push32(0x11161b75u); f_111603e0();
  /* 11161b75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11161b78:;
  /* 11161b78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11161b7b pop edi */
  EDI = (pop32());
  /* 11161b7c pop esi */
  ESI = (pop32());
  /* 11161b7d pop ebx */
  EBX = (pop32());
  /* 11161b7e mov esp, ebp */
  ESP = (EBP);
  /* 11161b80 pop ebp */
  EBP = (pop32());
  /* 11161b81 ret  */
  ESPCHK(0x11161b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b90 @ 0x11161b90 (190 bytes, 67 insns) */
void f_11161b90(void) {
  FTRACE(0x11161b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11161b90 push ebp */
  push32((uint32_t)(EBP));
  /* 11161b91 mov ebp, esp */
  EBP = (ESP);
  /* 11161b93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11161b96 push ebx */
  push32((uint32_t)(EBX));
  /* 11161b97 push esi */
  push32((uint32_t)(ESI));
  /* 11161b98 push edi */
  push32((uint32_t)(EDI));
  /* 11161b99 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11161ba0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161ba3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11161ba6:;
  /* 11161ba6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11161baa jne 0x11161bca */
  if (!C.zf) goto L_11161bca;
  /* 11161bac push 0x1117f38c */
  push32((uint32_t)(0x1117f38cu));
  /* 11161bb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11161bb3 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 11161bb5 push 0x1117f4dc */
  push32((uint32_t)(0x1117f4dcu));
  /* 11161bba push 2 */
  push32((uint32_t)(0x2u));
  /* 11161bbc call 0x11156620 */
  push32(0x11161bc1u); f_11156620();
  /* 11161bc1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161bc4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11161bc7 jne 0x11161bca */
  if (!C.zf) goto L_11161bca;
  /* 11161bc9 int3  */
  x86_unimpl("int3 @ 0x11161bc9");
L_11161bca:;
  /* 11161bca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11161bcc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11161bce jne 0x11161ba6 */
  if (!C.zf) goto L_11161ba6;
  /* 11161bd0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11161bd3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11161bd6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 11161bdb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11161bdd je 0x11161c3a */
  if (C.zf) goto L_11161c3a;
  /* 11161bdf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11161be2 push ecx */
  push32((uint32_t)(ECX));
  /* 11161be3 call 0x11160e90 */
  push32(0x11161be8u); f_11160e90();
  /* 11161be8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161beb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11161bee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11161bf1 push edx */
  push32((uint32_t)(EDX));
  /* 11161bf2 call 0x11164210 */
  push32(0x11161bf7u); f_11164210();
  /* 11161bf7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161bfa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11161bfd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11161c00 push ecx */
  push32((uint32_t)(ECX));
  /* 11161c01 call 0x111640e0 */
  push32(0x11161c06u); f_111640e0();
  /* 11161c06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161c09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11161c0b jge 0x11161c16 */
  if ((C.sf==C.of)) goto L_11161c16;
  /* 11161c0d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11161c14 jmp 0x11161c3a */
  goto L_11161c3a;
L_11161c16:;
  /* 11161c16 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11161c19 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11161c1d je 0x11161c3a */
  if (C.zf) goto L_11161c3a;
  /* 11161c1f push 2 */
  push32((uint32_t)(0x2u));
  /* 11161c21 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11161c24 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11161c27 push ecx */
  push32((uint32_t)(ECX));
  /* 11161c28 call 0x11157ff0 */
  push32(0x11161c2du); f_11157ff0();
  /* 11161c2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161c30 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11161c33 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_11161c3a:;
  /* 11161c3a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11161c3d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11161c44 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11161c47 pop edi */
  EDI = (pop32());
  /* 11161c48 pop esi */
  ESI = (pop32());
  /* 11161c49 pop ebx */
  EBX = (pop32());
  /* 11161c4a mov esp, ebp */
  ESP = (EBP);
  /* 11161c4c pop ebp */
  EBP = (pop32());
  /* 11161c4d ret  */
  ESPCHK(0x11161b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c50 @ 0x11161c50 (210 bytes, 63 insns) */
void f_11161c50(void) {
  FTRACE(0x11161c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11161c50 push ebp */
  push32((uint32_t)(EBP));
  /* 11161c51 mov ebp, esp */
  EBP = (ESP);
  /* 11161c53 push ecx */
  push32((uint32_t)(ECX));
  /* 11161c54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161c57 cmp eax, dword ptr [0x111852fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x111852fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11161c5d jae 0x11161c81 */
  if (!C.cf) goto L_11161c81;
  /* 11161c5f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161c62 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11161c65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161c68 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11161c6b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11161c6e mov eax, dword ptr [ecx*4 + 0x111851c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x111851c0)));
  /* 11161c75 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11161c7a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11161c7d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11161c7f jne 0x11161c94 */
  if (!C.zf) goto L_11161c94;
L_11161c81:;
  /* 11161c81 call 0x1115f430 */
  push32(0x11161c86u); f_1115f430();
  /* 11161c86 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11161c8c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11161c8f jmp 0x11161d1e */
  goto L_11161d1e;
L_11161c94:;
  /* 11161c94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161c97 push edx */
  push32((uint32_t)(EDX));
  /* 11161c98 call 0x11160c50 */
  push32(0x11161c9du); f_11160c50();
  /* 11161c9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161ca0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161ca3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11161ca6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161ca9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11161cac imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11161caf mov edx, dword ptr [eax*4 + 0x111851c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x111851c0)));
  /* 11161cb6 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11161cbb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11161cbe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11161cc0 je 0x11161cfd */
  if (C.zf) goto L_11161cfd;
  /* 11161cc2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161cc5 push ecx */
  push32((uint32_t)(ECX));
  /* 11161cc6 call 0x11160ad0 */
  push32(0x11161ccbu); f_11160ad0();
  /* 11161ccb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161cce push eax */
  push32((uint32_t)(EAX));
  /* 11161ccf call dword ptr [0x1118631c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118631c))), 0x11161cd5u);
  /* 11161cd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11161cd7 jne 0x11161ce4 */
  if (!C.zf) goto L_11161ce4;
  /* 11161cd9 call dword ptr [0x11186400] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186400))), 0x11161cdfu);
  /* 11161cdf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11161ce2 jmp 0x11161ceb */
  goto L_11161ceb;
L_11161ce4:;
  /* 11161ce4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11161ceb:;
  /* 11161ceb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11161cef jne 0x11161cf3 */
  if (!C.zf) goto L_11161cf3;
  /* 11161cf1 jmp 0x11161d0f */
  goto L_11161d0f;
L_11161cf3:;
  /* 11161cf3 call 0x1115f440 */
  push32(0x11161cf8u); f_1115f440();
  /* 11161cf8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11161cfb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11161cfd:;
  /* 11161cfd call 0x1115f430 */
  push32(0x11161d02u); f_1115f430();
  /* 11161d02 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11161d08 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11161d0f:;
  /* 11161d0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161d12 push eax */
  push32((uint32_t)(EAX));
  /* 11161d13 call 0x11160ce0 */
  push32(0x11161d18u); f_11160ce0();
  /* 11161d18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161d1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11161d1e:;
  /* 11161d1e mov esp, ebp */
  ESP = (EBP);
  /* 11161d20 pop ebp */
  EBP = (pop32());
  /* 11161d21 ret  */
  ESPCHK(0x11161c50u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x11161d30 (219 bytes, 64 insns) */
void f_11161d30(void) {
  FTRACE(0x11161d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11161d30 push ebp */
  push32((uint32_t)(EBP));
  /* 11161d31 mov ebp, esp */
  EBP = (ESP);
  /* 11161d33 push ecx */
  push32((uint32_t)(ECX));
  /* 11161d34 cmp dword ptr [0x111839fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111839fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11161d3b je 0x11161dd1 */
  if (C.zf) goto L_11161dd1;
  /* 11161d41 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11161d43 push 0x1117f4f8 */
  push32((uint32_t)(0x1117f4f8u));
  /* 11161d48 push 2 */
  push32((uint32_t)(0x2u));
  /* 11161d4a push 0xac */
  push32((uint32_t)(0xacu));
  /* 11161d4f push 1 */
  push32((uint32_t)(0x1u));
  /* 11161d51 call 0x11157970 */
  push32(0x11161d56u); f_11157970();
  /* 11161d56 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161d59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11161d5c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11161d60 jne 0x11161d6c */
  if (!C.zf) goto L_11161d6c;
  /* 11161d62 mov eax, 1 */
  EAX = (0x1u);
  /* 11161d67 jmp 0x11161e07 */
  goto L_11161e07;
L_11161d6c:;
  /* 11161d6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11161d6f push eax */
  push32((uint32_t)(EAX));
  /* 11161d70 call 0x11161e10 */
  push32(0x11161d75u); f_11161e10();
  /* 11161d75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161d78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11161d7a je 0x11161d9d */
  if (C.zf) goto L_11161d9d;
  /* 11161d7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11161d7f push ecx */
  push32((uint32_t)(ECX));
  /* 11161d80 call 0x111623a0 */
  push32(0x11161d85u); f_111623a0();
  /* 11161d85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161d88 push 2 */
  push32((uint32_t)(0x2u));
  /* 11161d8a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11161d8d push edx */
  push32((uint32_t)(EDX));
  /* 11161d8e call 0x11157ff0 */
  push32(0x11161d93u); f_11157ff0();
  /* 11161d93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161d96 mov eax, 1 */
  EAX = (0x1u);
  /* 11161d9b jmp 0x11161e07 */
  goto L_11161e07;
L_11161d9d:;
  /* 11161d9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11161da0 mov dword ptr [0x11182c98], eax */
  w32((uint32_t)(0x11182c98), (EAX));
  /* 11161da5 mov ecx, dword ptr [0x11183a1c] */
  ECX = (r32((uint32_t)(0x11183a1c)));
  /* 11161dab push ecx */
  push32((uint32_t)(ECX));
  /* 11161dac call 0x111623a0 */
  push32(0x11161db1u); f_111623a0();
  /* 11161db1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161db4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11161db6 mov edx, dword ptr [0x11183a1c] */
  EDX = (r32((uint32_t)(0x11183a1c)));
  /* 11161dbc push edx */
  push32((uint32_t)(EDX));
  /* 11161dbd call 0x11157ff0 */
  push32(0x11161dc2u); f_11157ff0();
  /* 11161dc2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161dc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11161dc8 mov dword ptr [0x11183a1c], eax */
  w32((uint32_t)(0x11183a1c), (EAX));
  /* 11161dcd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11161dcf jmp 0x11161e07 */
  goto L_11161e07;
L_11161dd1:;
  /* 11161dd1 mov dword ptr [0x11182c98], 0x11182ca0 */
  w32((uint32_t)(0x11182c98), (0x11182ca0u));
  /* 11161ddb mov ecx, dword ptr [0x11183a1c] */
  ECX = (r32((uint32_t)(0x11183a1c)));
  /* 11161de1 push ecx */
  push32((uint32_t)(ECX));
  /* 11161de2 call 0x111623a0 */
  push32(0x11161de7u); f_111623a0();
  /* 11161de7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161dea push 2 */
  push32((uint32_t)(0x2u));
  /* 11161dec mov edx, dword ptr [0x11183a1c] */
  EDX = (r32((uint32_t)(0x11183a1c)));
  /* 11161df2 push edx */
  push32((uint32_t)(EDX));
  /* 11161df3 call 0x11157ff0 */
  push32(0x11161df8u); f_11157ff0();
  /* 11161df8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161dfb mov dword ptr [0x11183a1c], 0 */
  w32((uint32_t)(0x11183a1c), (0x0u));
  /* 11161e05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11161e07:;
  /* 11161e07 mov esp, ebp */
  ESP = (EBP);
  /* 11161e09 pop ebp */
  EBP = (pop32());
  /* 11161e0a ret  */
  ESPCHK(0x11161d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e10 @ 0x11161e10 (1423 bytes, 533 insns) */
void f_11161e10(void) {
  FTRACE(0x11161e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11161e10 push ebp */
  push32((uint32_t)(EBP));
  /* 11161e11 mov ebp, esp */
  EBP = (ESP);
  /* 11161e13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11161e16 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11161e1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11161e1f mov ax, word ptr [0x11183a56] */
  AX = (r16((uint32_t)(0x11183a56)));
  /* 11161e25 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11161e28 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11161e2a mov cx, word ptr [0x11183a58] */
  CX = (r16((uint32_t)(0x11183a58)));
  /* 11161e31 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11161e34 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11161e38 jne 0x11161e42 */
  if (!C.zf) goto L_11161e42;
  /* 11161e3a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11161e3d jmp 0x1116239b */
  goto L_1116239b;
L_11161e42:;
  /* 11161e42 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161e45 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11161e48 push edx */
  push32((uint32_t)(EDX));
  /* 11161e49 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 11161e4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11161e4e push eax */
  push32((uint32_t)(EAX));
  /* 11161e4f push 1 */
  push32((uint32_t)(0x1u));
  /* 11161e51 call 0x11165720 */
  push32(0x11161e56u); f_11165720();
  /* 11161e56 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161e59 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11161e5c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11161e5e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11161e61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161e64 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11161e67 push edx */
  push32((uint32_t)(EDX));
  /* 11161e68 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11161e6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11161e6d push eax */
  push32((uint32_t)(EAX));
  /* 11161e6e push 1 */
  push32((uint32_t)(0x1u));
  /* 11161e70 call 0x11165720 */
  push32(0x11161e75u); f_11165720();
  /* 11161e75 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161e78 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11161e7b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11161e7d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11161e80 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161e83 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11161e86 push edx */
  push32((uint32_t)(EDX));
  /* 11161e87 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 11161e89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11161e8c push eax */
  push32((uint32_t)(EAX));
  /* 11161e8d push 1 */
  push32((uint32_t)(0x1u));
  /* 11161e8f call 0x11165720 */
  push32(0x11161e94u); f_11165720();
  /* 11161e94 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161e97 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11161e9a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11161e9c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11161e9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161ea2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11161ea5 push edx */
  push32((uint32_t)(EDX));
  /* 11161ea6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 11161ea8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11161eab push eax */
  push32((uint32_t)(EAX));
  /* 11161eac push 1 */
  push32((uint32_t)(0x1u));
  /* 11161eae call 0x11165720 */
  push32(0x11161eb3u); f_11165720();
  /* 11161eb3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161eb6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11161eb9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11161ebb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11161ebe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161ec1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11161ec4 push edx */
  push32((uint32_t)(EDX));
  /* 11161ec5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 11161ec7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11161eca push eax */
  push32((uint32_t)(EAX));
  /* 11161ecb push 1 */
  push32((uint32_t)(0x1u));
  /* 11161ecd call 0x11165720 */
  push32(0x11161ed2u); f_11165720();
  /* 11161ed2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161ed5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11161ed8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11161eda mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11161edd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161ee0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11161ee3 push edx */
  push32((uint32_t)(EDX));
  /* 11161ee4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 11161ee6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11161ee9 push eax */
  push32((uint32_t)(EAX));
  /* 11161eea push 1 */
  push32((uint32_t)(0x1u));
  /* 11161eec call 0x11165720 */
  push32(0x11161ef1u); f_11165720();
  /* 11161ef1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161ef4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11161ef7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11161ef9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11161efc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161eff push edx */
  push32((uint32_t)(EDX));
  /* 11161f00 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 11161f02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11161f05 push eax */
  push32((uint32_t)(EAX));
  /* 11161f06 push 1 */
  push32((uint32_t)(0x1u));
  /* 11161f08 call 0x11165720 */
  push32(0x11161f0du); f_11165720();
  /* 11161f0d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161f10 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11161f13 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11161f15 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11161f18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161f1b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11161f1e push edx */
  push32((uint32_t)(EDX));
  /* 11161f1f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 11161f21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11161f24 push eax */
  push32((uint32_t)(EAX));
  /* 11161f25 push 1 */
  push32((uint32_t)(0x1u));
  /* 11161f27 call 0x11165720 */
  push32(0x11161f2cu); f_11165720();
  /* 11161f2c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161f2f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11161f32 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11161f34 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11161f37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161f3a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11161f3d push edx */
  push32((uint32_t)(EDX));
  /* 11161f3e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 11161f40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11161f43 push eax */
  push32((uint32_t)(EAX));
  /* 11161f44 push 1 */
  push32((uint32_t)(0x1u));
  /* 11161f46 call 0x11165720 */
  push32(0x11161f4bu); f_11165720();
  /* 11161f4b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161f4e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11161f51 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11161f53 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11161f56 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161f59 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11161f5c push edx */
  push32((uint32_t)(EDX));
  /* 11161f5d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 11161f5f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11161f62 push eax */
  push32((uint32_t)(EAX));
  /* 11161f63 push 1 */
  push32((uint32_t)(0x1u));
  /* 11161f65 call 0x11165720 */
  push32(0x11161f6au); f_11165720();
  /* 11161f6a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161f6d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11161f70 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11161f72 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11161f75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161f78 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11161f7b push edx */
  push32((uint32_t)(EDX));
  /* 11161f7c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 11161f7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11161f81 push eax */
  push32((uint32_t)(EAX));
  /* 11161f82 push 1 */
  push32((uint32_t)(0x1u));
  /* 11161f84 call 0x11165720 */
  push32(0x11161f89u); f_11165720();
  /* 11161f89 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161f8c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11161f8f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11161f91 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11161f94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161f97 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11161f9a push edx */
  push32((uint32_t)(EDX));
  /* 11161f9b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 11161f9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11161fa0 push eax */
  push32((uint32_t)(EAX));
  /* 11161fa1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11161fa3 call 0x11165720 */
  push32(0x11161fa8u); f_11165720();
  /* 11161fa8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161fab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11161fae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11161fb0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11161fb3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161fb6 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11161fb9 push edx */
  push32((uint32_t)(EDX));
  /* 11161fba push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 11161fbc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11161fbf push eax */
  push32((uint32_t)(EAX));
  /* 11161fc0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11161fc2 call 0x11165720 */
  push32(0x11161fc7u); f_11165720();
  /* 11161fc7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161fca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11161fcd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11161fcf mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11161fd2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161fd5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11161fd8 push edx */
  push32((uint32_t)(EDX));
  /* 11161fd9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11161fdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11161fde push eax */
  push32((uint32_t)(EAX));
  /* 11161fdf push 1 */
  push32((uint32_t)(0x1u));
  /* 11161fe1 call 0x11165720 */
  push32(0x11161fe6u); f_11165720();
  /* 11161fe6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11161fe9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11161fec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11161fee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11161ff1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11161ff4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11161ff7 push edx */
  push32((uint32_t)(EDX));
  /* 11161ff8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11161ffa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11161ffd push eax */
  push32((uint32_t)(EAX));
  /* 11161ffe push 1 */
  push32((uint32_t)(0x1u));
  /* 11162000 call 0x11165720 */
  push32(0x11162005u); f_11165720();
  /* 11162005 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162008 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1116200b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1116200d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11162010 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162013 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11162016 push edx */
  push32((uint32_t)(EDX));
  /* 11162017 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11162019 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1116201c push eax */
  push32((uint32_t)(EAX));
  /* 1116201d push 1 */
  push32((uint32_t)(0x1u));
  /* 1116201f call 0x11165720 */
  push32(0x11162024u); f_11165720();
  /* 11162024 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162027 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1116202a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1116202c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1116202f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162032 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11162035 push edx */
  push32((uint32_t)(EDX));
  /* 11162036 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11162038 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1116203b push eax */
  push32((uint32_t)(EAX));
  /* 1116203c push 1 */
  push32((uint32_t)(0x1u));
  /* 1116203e call 0x11165720 */
  push32(0x11162043u); f_11165720();
  /* 11162043 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162046 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11162049 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1116204b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1116204e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162051 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11162054 push edx */
  push32((uint32_t)(EDX));
  /* 11162055 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11162057 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1116205a push eax */
  push32((uint32_t)(EAX));
  /* 1116205b push 1 */
  push32((uint32_t)(0x1u));
  /* 1116205d call 0x11165720 */
  push32(0x11162062u); f_11165720();
  /* 11162062 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162065 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11162068 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1116206a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1116206d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162070 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11162073 push edx */
  push32((uint32_t)(EDX));
  /* 11162074 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11162076 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11162079 push eax */
  push32((uint32_t)(EAX));
  /* 1116207a push 1 */
  push32((uint32_t)(0x1u));
  /* 1116207c call 0x11165720 */
  push32(0x11162081u); f_11165720();
  /* 11162081 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162084 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11162087 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11162089 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1116208c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116208f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11162092 push edx */
  push32((uint32_t)(EDX));
  /* 11162093 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 11162095 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11162098 push eax */
  push32((uint32_t)(EAX));
  /* 11162099 push 1 */
  push32((uint32_t)(0x1u));
  /* 1116209b call 0x11165720 */
  push32(0x111620a0u); f_11165720();
  /* 111620a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111620a3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111620a6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111620a8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111620ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111620ae add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111620b1 push edx */
  push32((uint32_t)(EDX));
  /* 111620b2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 111620b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111620b7 push eax */
  push32((uint32_t)(EAX));
  /* 111620b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 111620ba call 0x11165720 */
  push32(0x111620bfu); f_11165720();
  /* 111620bf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111620c2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111620c5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111620c7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111620ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111620cd add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111620d0 push edx */
  push32((uint32_t)(EDX));
  /* 111620d1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 111620d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111620d6 push eax */
  push32((uint32_t)(EAX));
  /* 111620d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 111620d9 call 0x11165720 */
  push32(0x111620deu); f_11165720();
  /* 111620de add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111620e1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111620e4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111620e6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111620e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111620ec add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111620ef push edx */
  push32((uint32_t)(EDX));
  /* 111620f0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 111620f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111620f5 push eax */
  push32((uint32_t)(EAX));
  /* 111620f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 111620f8 call 0x11165720 */
  push32(0x111620fdu); f_11165720();
  /* 111620fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162100 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11162103 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11162105 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11162108 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116210b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116210e push edx */
  push32((uint32_t)(EDX));
  /* 1116210f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11162111 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11162114 push eax */
  push32((uint32_t)(EAX));
  /* 11162115 push 1 */
  push32((uint32_t)(0x1u));
  /* 11162117 call 0x11165720 */
  push32(0x1116211cu); f_11165720();
  /* 1116211c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116211f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11162122 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11162124 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11162127 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116212a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116212d push edx */
  push32((uint32_t)(EDX));
  /* 1116212e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 11162130 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11162133 push eax */
  push32((uint32_t)(EAX));
  /* 11162134 push 1 */
  push32((uint32_t)(0x1u));
  /* 11162136 call 0x11165720 */
  push32(0x1116213bu); f_11165720();
  /* 1116213b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116213e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11162141 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11162143 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11162146 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162149 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116214c push edx */
  push32((uint32_t)(EDX));
  /* 1116214d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 1116214f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11162152 push eax */
  push32((uint32_t)(EAX));
  /* 11162153 push 1 */
  push32((uint32_t)(0x1u));
  /* 11162155 call 0x11165720 */
  push32(0x1116215au); f_11165720();
  /* 1116215a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116215d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11162160 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11162162 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11162165 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162168 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116216b push edx */
  push32((uint32_t)(EDX));
  /* 1116216c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1116216e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11162171 push eax */
  push32((uint32_t)(EAX));
  /* 11162172 push 1 */
  push32((uint32_t)(0x1u));
  /* 11162174 call 0x11165720 */
  push32(0x11162179u); f_11165720();
  /* 11162179 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116217c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1116217f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11162181 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11162184 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162187 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116218a push edx */
  push32((uint32_t)(EDX));
  /* 1116218b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1116218d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11162190 push eax */
  push32((uint32_t)(EAX));
  /* 11162191 push 1 */
  push32((uint32_t)(0x1u));
  /* 11162193 call 0x11165720 */
  push32(0x11162198u); f_11165720();
  /* 11162198 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116219b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1116219e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111621a0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111621a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111621a6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111621a9 push edx */
  push32((uint32_t)(EDX));
  /* 111621aa push 0x3a */
  push32((uint32_t)(0x3au));
  /* 111621ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111621af push eax */
  push32((uint32_t)(EAX));
  /* 111621b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 111621b2 call 0x11165720 */
  push32(0x111621b7u); f_11165720();
  /* 111621b7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111621ba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111621bd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111621bf mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111621c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111621c5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111621c8 push edx */
  push32((uint32_t)(EDX));
  /* 111621c9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 111621cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111621ce push eax */
  push32((uint32_t)(EAX));
  /* 111621cf push 1 */
  push32((uint32_t)(0x1u));
  /* 111621d1 call 0x11165720 */
  push32(0x111621d6u); f_11165720();
  /* 111621d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111621d9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111621dc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111621de mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111621e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111621e4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111621e7 push edx */
  push32((uint32_t)(EDX));
  /* 111621e8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 111621ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111621ed push eax */
  push32((uint32_t)(EAX));
  /* 111621ee push 1 */
  push32((uint32_t)(0x1u));
  /* 111621f0 call 0x11165720 */
  push32(0x111621f5u); f_11165720();
  /* 111621f5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111621f8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111621fb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111621fd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11162200 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162203 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11162206 push edx */
  push32((uint32_t)(EDX));
  /* 11162207 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11162209 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1116220c push eax */
  push32((uint32_t)(EAX));
  /* 1116220d push 1 */
  push32((uint32_t)(0x1u));
  /* 1116220f call 0x11165720 */
  push32(0x11162214u); f_11165720();
  /* 11162214 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162217 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1116221a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1116221c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1116221f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162222 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11162228 push edx */
  push32((uint32_t)(EDX));
  /* 11162229 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 1116222b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1116222e push eax */
  push32((uint32_t)(EAX));
  /* 1116222f push 1 */
  push32((uint32_t)(0x1u));
  /* 11162231 call 0x11165720 */
  push32(0x11162236u); f_11165720();
  /* 11162236 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162239 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1116223c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1116223e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11162241 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162244 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116224a push edx */
  push32((uint32_t)(EDX));
  /* 1116224b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1116224d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11162250 push eax */
  push32((uint32_t)(EAX));
  /* 11162251 push 1 */
  push32((uint32_t)(0x1u));
  /* 11162253 call 0x11165720 */
  push32(0x11162258u); f_11165720();
  /* 11162258 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116225b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1116225e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11162260 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11162263 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162266 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116226c push edx */
  push32((uint32_t)(EDX));
  /* 1116226d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1116226f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11162272 push eax */
  push32((uint32_t)(EAX));
  /* 11162273 push 1 */
  push32((uint32_t)(0x1u));
  /* 11162275 call 0x11165720 */
  push32(0x1116227au); f_11165720();
  /* 1116227a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116227d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11162280 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11162282 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11162285 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162288 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116228e push edx */
  push32((uint32_t)(EDX));
  /* 1116228f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11162291 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11162294 push eax */
  push32((uint32_t)(EAX));
  /* 11162295 push 1 */
  push32((uint32_t)(0x1u));
  /* 11162297 call 0x11165720 */
  push32(0x1116229cu); f_11165720();
  /* 1116229c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116229f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111622a2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111622a4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111622a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111622aa add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111622b0 push edx */
  push32((uint32_t)(EDX));
  /* 111622b1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 111622b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111622b6 push eax */
  push32((uint32_t)(EAX));
  /* 111622b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 111622b9 call 0x11165720 */
  push32(0x111622beu); f_11165720();
  /* 111622be add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111622c1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111622c4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111622c6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111622c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111622cc add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111622d2 push edx */
  push32((uint32_t)(EDX));
  /* 111622d3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 111622d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111622d8 push eax */
  push32((uint32_t)(EAX));
  /* 111622d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 111622db call 0x11165720 */
  push32(0x111622e0u); f_11165720();
  /* 111622e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111622e3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111622e6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111622e8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111622eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111622ee add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111622f4 push edx */
  push32((uint32_t)(EDX));
  /* 111622f5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 111622f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111622fa push eax */
  push32((uint32_t)(EAX));
  /* 111622fb push 1 */
  push32((uint32_t)(0x1u));
  /* 111622fd call 0x11165720 */
  push32(0x11162302u); f_11165720();
  /* 11162302 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162305 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11162308 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1116230a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1116230d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162310 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11162316 push edx */
  push32((uint32_t)(EDX));
  /* 11162317 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 11162319 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1116231c push eax */
  push32((uint32_t)(EAX));
  /* 1116231d push 1 */
  push32((uint32_t)(0x1u));
  /* 1116231f call 0x11165720 */
  push32(0x11162324u); f_11165720();
  /* 11162324 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162327 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1116232a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1116232c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1116232f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162332 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11162338 push edx */
  push32((uint32_t)(EDX));
  /* 11162339 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1116233b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1116233e push eax */
  push32((uint32_t)(EAX));
  /* 1116233f push 1 */
  push32((uint32_t)(0x1u));
  /* 11162341 call 0x11165720 */
  push32(0x11162346u); f_11165720();
  /* 11162346 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162349 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1116234c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1116234e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11162351 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162354 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116235a push edx */
  push32((uint32_t)(EDX));
  /* 1116235b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1116235d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11162360 push eax */
  push32((uint32_t)(EAX));
  /* 11162361 push 1 */
  push32((uint32_t)(0x1u));
  /* 11162363 call 0x11165720 */
  push32(0x11162368u); f_11165720();
  /* 11162368 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116236b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1116236e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11162370 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11162373 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162376 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116237c push edx */
  push32((uint32_t)(EDX));
  /* 1116237d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 11162382 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11162385 push eax */
  push32((uint32_t)(EAX));
  /* 11162386 push 1 */
  push32((uint32_t)(0x1u));
  /* 11162388 call 0x11165720 */
  push32(0x1116238du); f_11165720();
  /* 1116238d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162390 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11162393 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11162395 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11162398 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1116239b:;
  /* 1116239b mov esp, ebp */
  ESP = (EBP);
  /* 1116239d pop ebp */
  EBP = (pop32());
  /* 1116239e ret  */
  ESPCHK(0x11161e10u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x111623a0 (779 bytes, 265 insns) */
void f_111623a0(void) {
  FTRACE(0x111623a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111623a0 push ebp */
  push32((uint32_t)(EBP));
  /* 111623a1 mov ebp, esp */
  EBP = (ESP);
  /* 111623a3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111623a7 jne 0x111623ae */
  if (!C.zf) goto L_111623ae;
  /* 111623a9 jmp 0x111626a9 */
  goto L_111626a9;
L_111623ae:;
  /* 111623ae push 2 */
  push32((uint32_t)(0x2u));
  /* 111623b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111623b3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 111623b6 push ecx */
  push32((uint32_t)(ECX));
  /* 111623b7 call 0x11157ff0 */
  push32(0x111623bcu); f_11157ff0();
  /* 111623bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111623bf push 2 */
  push32((uint32_t)(0x2u));
  /* 111623c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111623c4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 111623c7 push eax */
  push32((uint32_t)(EAX));
  /* 111623c8 call 0x11157ff0 */
  push32(0x111623cdu); f_11157ff0();
  /* 111623cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111623d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 111623d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111623d5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 111623d8 push edx */
  push32((uint32_t)(EDX));
  /* 111623d9 call 0x11157ff0 */
  push32(0x111623deu); f_11157ff0();
  /* 111623de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111623e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 111623e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111623e6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 111623e9 push ecx */
  push32((uint32_t)(ECX));
  /* 111623ea call 0x11157ff0 */
  push32(0x111623efu); f_11157ff0();
  /* 111623ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111623f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 111623f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111623f7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 111623fa push eax */
  push32((uint32_t)(EAX));
  /* 111623fb call 0x11157ff0 */
  push32(0x11162400u); f_11157ff0();
  /* 11162400 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162403 push 2 */
  push32((uint32_t)(0x2u));
  /* 11162405 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162408 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1116240b push edx */
  push32((uint32_t)(EDX));
  /* 1116240c call 0x11157ff0 */
  push32(0x11162411u); f_11157ff0();
  /* 11162411 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162414 push 2 */
  push32((uint32_t)(0x2u));
  /* 11162416 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162419 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1116241b push ecx */
  push32((uint32_t)(ECX));
  /* 1116241c call 0x11157ff0 */
  push32(0x11162421u); f_11157ff0();
  /* 11162421 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162424 push 2 */
  push32((uint32_t)(0x2u));
  /* 11162426 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162429 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1116242c push eax */
  push32((uint32_t)(EAX));
  /* 1116242d call 0x11157ff0 */
  push32(0x11162432u); f_11157ff0();
  /* 11162432 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162435 push 2 */
  push32((uint32_t)(0x2u));
  /* 11162437 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116243a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1116243d push edx */
  push32((uint32_t)(EDX));
  /* 1116243e call 0x11157ff0 */
  push32(0x11162443u); f_11157ff0();
  /* 11162443 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162446 push 2 */
  push32((uint32_t)(0x2u));
  /* 11162448 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116244b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 1116244e push ecx */
  push32((uint32_t)(ECX));
  /* 1116244f call 0x11157ff0 */
  push32(0x11162454u); f_11157ff0();
  /* 11162454 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162457 push 2 */
  push32((uint32_t)(0x2u));
  /* 11162459 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116245c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 1116245f push eax */
  push32((uint32_t)(EAX));
  /* 11162460 call 0x11157ff0 */
  push32(0x11162465u); f_11157ff0();
  /* 11162465 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162468 push 2 */
  push32((uint32_t)(0x2u));
  /* 1116246a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116246d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 11162470 push edx */
  push32((uint32_t)(EDX));
  /* 11162471 call 0x11157ff0 */
  push32(0x11162476u); f_11157ff0();
  /* 11162476 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162479 push 2 */
  push32((uint32_t)(0x2u));
  /* 1116247b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116247e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 11162481 push ecx */
  push32((uint32_t)(ECX));
  /* 11162482 call 0x11157ff0 */
  push32(0x11162487u); f_11157ff0();
  /* 11162487 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116248a push 2 */
  push32((uint32_t)(0x2u));
  /* 1116248c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116248f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11162492 push eax */
  push32((uint32_t)(EAX));
  /* 11162493 call 0x11157ff0 */
  push32(0x11162498u); f_11157ff0();
  /* 11162498 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116249b push 2 */
  push32((uint32_t)(0x2u));
  /* 1116249d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111624a0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 111624a3 push edx */
  push32((uint32_t)(EDX));
  /* 111624a4 call 0x11157ff0 */
  push32(0x111624a9u); f_11157ff0();
  /* 111624a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111624ac push 2 */
  push32((uint32_t)(0x2u));
  /* 111624ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111624b1 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 111624b4 push ecx */
  push32((uint32_t)(ECX));
  /* 111624b5 call 0x11157ff0 */
  push32(0x111624bau); f_11157ff0();
  /* 111624ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111624bd push 2 */
  push32((uint32_t)(0x2u));
  /* 111624bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111624c2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 111624c5 push eax */
  push32((uint32_t)(EAX));
  /* 111624c6 call 0x11157ff0 */
  push32(0x111624cbu); f_11157ff0();
  /* 111624cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111624ce push 2 */
  push32((uint32_t)(0x2u));
  /* 111624d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111624d3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 111624d6 push edx */
  push32((uint32_t)(EDX));
  /* 111624d7 call 0x11157ff0 */
  push32(0x111624dcu); f_11157ff0();
  /* 111624dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111624df push 2 */
  push32((uint32_t)(0x2u));
  /* 111624e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111624e4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 111624e7 push ecx */
  push32((uint32_t)(ECX));
  /* 111624e8 call 0x11157ff0 */
  push32(0x111624edu); f_11157ff0();
  /* 111624ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111624f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 111624f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111624f5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 111624f8 push eax */
  push32((uint32_t)(EAX));
  /* 111624f9 call 0x11157ff0 */
  push32(0x111624feu); f_11157ff0();
  /* 111624fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162501 push 2 */
  push32((uint32_t)(0x2u));
  /* 11162503 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162506 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11162509 push edx */
  push32((uint32_t)(EDX));
  /* 1116250a call 0x11157ff0 */
  push32(0x1116250fu); f_11157ff0();
  /* 1116250f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162512 push 2 */
  push32((uint32_t)(0x2u));
  /* 11162514 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162517 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1116251a push ecx */
  push32((uint32_t)(ECX));
  /* 1116251b call 0x11157ff0 */
  push32(0x11162520u); f_11157ff0();
  /* 11162520 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162523 push 2 */
  push32((uint32_t)(0x2u));
  /* 11162525 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162528 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 1116252b push eax */
  push32((uint32_t)(EAX));
  /* 1116252c call 0x11157ff0 */
  push32(0x11162531u); f_11157ff0();
  /* 11162531 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162534 push 2 */
  push32((uint32_t)(0x2u));
  /* 11162536 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162539 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 1116253c push edx */
  push32((uint32_t)(EDX));
  /* 1116253d call 0x11157ff0 */
  push32(0x11162542u); f_11157ff0();
  /* 11162542 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162545 push 2 */
  push32((uint32_t)(0x2u));
  /* 11162547 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116254a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 1116254d push ecx */
  push32((uint32_t)(ECX));
  /* 1116254e call 0x11157ff0 */
  push32(0x11162553u); f_11157ff0();
  /* 11162553 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162556 push 2 */
  push32((uint32_t)(0x2u));
  /* 11162558 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116255b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 1116255e push eax */
  push32((uint32_t)(EAX));
  /* 1116255f call 0x11157ff0 */
  push32(0x11162564u); f_11157ff0();
  /* 11162564 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162567 push 2 */
  push32((uint32_t)(0x2u));
  /* 11162569 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116256c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 1116256f push edx */
  push32((uint32_t)(EDX));
  /* 11162570 call 0x11157ff0 */
  push32(0x11162575u); f_11157ff0();
  /* 11162575 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162578 push 2 */
  push32((uint32_t)(0x2u));
  /* 1116257a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116257d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 11162580 push ecx */
  push32((uint32_t)(ECX));
  /* 11162581 call 0x11157ff0 */
  push32(0x11162586u); f_11157ff0();
  /* 11162586 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162589 push 2 */
  push32((uint32_t)(0x2u));
  /* 1116258b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116258e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 11162591 push eax */
  push32((uint32_t)(EAX));
  /* 11162592 call 0x11157ff0 */
  push32(0x11162597u); f_11157ff0();
  /* 11162597 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116259a push 2 */
  push32((uint32_t)(0x2u));
  /* 1116259c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116259f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 111625a2 push edx */
  push32((uint32_t)(EDX));
  /* 111625a3 call 0x11157ff0 */
  push32(0x111625a8u); f_11157ff0();
  /* 111625a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111625ab push 2 */
  push32((uint32_t)(0x2u));
  /* 111625ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111625b0 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 111625b3 push ecx */
  push32((uint32_t)(ECX));
  /* 111625b4 call 0x11157ff0 */
  push32(0x111625b9u); f_11157ff0();
  /* 111625b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111625bc push 2 */
  push32((uint32_t)(0x2u));
  /* 111625be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111625c1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 111625c4 push eax */
  push32((uint32_t)(EAX));
  /* 111625c5 call 0x11157ff0 */
  push32(0x111625cau); f_11157ff0();
  /* 111625ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111625cd push 2 */
  push32((uint32_t)(0x2u));
  /* 111625cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111625d2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 111625d8 push edx */
  push32((uint32_t)(EDX));
  /* 111625d9 call 0x11157ff0 */
  push32(0x111625deu); f_11157ff0();
  /* 111625de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111625e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 111625e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111625e6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 111625ec push ecx */
  push32((uint32_t)(ECX));
  /* 111625ed call 0x11157ff0 */
  push32(0x111625f2u); f_11157ff0();
  /* 111625f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111625f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 111625f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111625fa mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 11162600 push eax */
  push32((uint32_t)(EAX));
  /* 11162601 call 0x11157ff0 */
  push32(0x11162606u); f_11157ff0();
  /* 11162606 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162609 push 2 */
  push32((uint32_t)(0x2u));
  /* 1116260b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116260e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 11162614 push edx */
  push32((uint32_t)(EDX));
  /* 11162615 call 0x11157ff0 */
  push32(0x1116261au); f_11157ff0();
  /* 1116261a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116261d push 2 */
  push32((uint32_t)(0x2u));
  /* 1116261f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162622 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 11162628 push ecx */
  push32((uint32_t)(ECX));
  /* 11162629 call 0x11157ff0 */
  push32(0x1116262eu); f_11157ff0();
  /* 1116262e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162631 push 2 */
  push32((uint32_t)(0x2u));
  /* 11162633 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162636 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 1116263c push eax */
  push32((uint32_t)(EAX));
  /* 1116263d call 0x11157ff0 */
  push32(0x11162642u); f_11157ff0();
  /* 11162642 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162645 push 2 */
  push32((uint32_t)(0x2u));
  /* 11162647 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116264a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 11162650 push edx */
  push32((uint32_t)(EDX));
  /* 11162651 call 0x11157ff0 */
  push32(0x11162656u); f_11157ff0();
  /* 11162656 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162659 push 2 */
  push32((uint32_t)(0x2u));
  /* 1116265b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116265e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11162664 push ecx */
  push32((uint32_t)(ECX));
  /* 11162665 call 0x11157ff0 */
  push32(0x1116266au); f_11157ff0();
  /* 1116266a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116266d push 2 */
  push32((uint32_t)(0x2u));
  /* 1116266f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162672 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11162678 push eax */
  push32((uint32_t)(EAX));
  /* 11162679 call 0x11157ff0 */
  push32(0x1116267eu); f_11157ff0();
  /* 1116267e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162681 push 2 */
  push32((uint32_t)(0x2u));
  /* 11162683 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162686 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 1116268c push edx */
  push32((uint32_t)(EDX));
  /* 1116268d call 0x11157ff0 */
  push32(0x11162692u); f_11157ff0();
  /* 11162692 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162695 push 2 */
  push32((uint32_t)(0x2u));
  /* 11162697 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116269a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 111626a0 push ecx */
  push32((uint32_t)(ECX));
  /* 111626a1 call 0x11157ff0 */
  push32(0x111626a6u); f_11157ff0();
  /* 111626a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111626a9:;
  /* 111626a9 pop ebp */
  EBP = (pop32());
  /* 111626aa ret  */
  ESPCHK(0x111623a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100126b0 @ 0x111626b0 (678 bytes, 180 insns) */
void f_111626b0(void) {
  FTRACE(0x111626b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111626b0 push ebp */
  push32((uint32_t)(EBP));
  /* 111626b1 mov ebp, esp */
  EBP = (ESP);
  /* 111626b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111626b6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 111626bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111626bf mov ax, word ptr [0x11183a52] */
  AX = (r16((uint32_t)(0x11183a52)));
  /* 111626c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111626c8 cmp dword ptr [0x111839f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111839f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111626cf je 0x1116282a */
  if (C.zf) goto L_1116282a;
  /* 111626d5 push 0x11183a20 */
  push32((uint32_t)(0x11183a20u));
  /* 111626da push 0xe */
  push32((uint32_t)(0xeu));
  /* 111626dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111626df push ecx */
  push32((uint32_t)(ECX));
  /* 111626e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 111626e2 call 0x11165720 */
  push32(0x111626e7u); f_11165720();
  /* 111626e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111626ea mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111626ed or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 111626ef mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 111626f2 push 0x11183a24 */
  push32((uint32_t)(0x11183a24u));
  /* 111626f7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 111626f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111626fc push eax */
  push32((uint32_t)(EAX));
  /* 111626fd push 1 */
  push32((uint32_t)(0x1u));
  /* 111626ff call 0x11165720 */
  push32(0x11162704u); f_11165720();
  /* 11162704 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162707 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1116270a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1116270c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1116270f push 0x11183a28 */
  push32((uint32_t)(0x11183a28u));
  /* 11162714 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11162716 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11162719 push edx */
  push32((uint32_t)(EDX));
  /* 1116271a push 1 */
  push32((uint32_t)(0x1u));
  /* 1116271c call 0x11165720 */
  push32(0x11162721u); f_11165720();
  /* 11162721 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162724 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11162727 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11162729 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1116272c mov edx, dword ptr [0x11183a28] */
  EDX = (r32((uint32_t)(0x11183a28)));
  /* 11162732 push edx */
  push32((uint32_t)(EDX));
  /* 11162733 call 0x11162960 */
  push32(0x11162738u); f_11162960();
  /* 11162738 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116273b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116273f je 0x11162799 */
  if (C.zf) goto L_11162799;
  /* 11162741 push 2 */
  push32((uint32_t)(0x2u));
  /* 11162743 mov eax, dword ptr [0x11183a20] */
  EAX = (r32((uint32_t)(0x11183a20)));
  /* 11162748 push eax */
  push32((uint32_t)(EAX));
  /* 11162749 call 0x11157ff0 */
  push32(0x1116274eu); f_11157ff0();
  /* 1116274e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162751 push 2 */
  push32((uint32_t)(0x2u));
  /* 11162753 mov ecx, dword ptr [0x11183a24] */
  ECX = (r32((uint32_t)(0x11183a24)));
  /* 11162759 push ecx */
  push32((uint32_t)(ECX));
  /* 1116275a call 0x11157ff0 */
  push32(0x1116275fu); f_11157ff0();
  /* 1116275f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162762 push 2 */
  push32((uint32_t)(0x2u));
  /* 11162764 mov edx, dword ptr [0x11183a28] */
  EDX = (r32((uint32_t)(0x11183a28)));
  /* 1116276a push edx */
  push32((uint32_t)(EDX));
  /* 1116276b call 0x11157ff0 */
  push32(0x11162770u); f_11157ff0();
  /* 11162770 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162773 mov dword ptr [0x11183a20], 0 */
  w32((uint32_t)(0x11183a20), (0x0u));
  /* 1116277d mov dword ptr [0x11183a24], 0 */
  w32((uint32_t)(0x11183a24), (0x0u));
  /* 11162787 mov dword ptr [0x11183a28], 0 */
  w32((uint32_t)(0x11183a28), (0x0u));
  /* 11162791 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11162794 jmp 0x11162952 */
  goto L_11162952;
L_11162799:;
  /* 11162799 mov eax, dword ptr [0x11182d88] */
  EAX = (r32((uint32_t)(0x11182d88)));
  /* 1116279e cmp dword ptr [eax], 0x11182d50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x11182d50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111627a4 je 0x111627e0 */
  if (C.zf) goto L_111627e0;
  /* 111627a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 111627a8 mov ecx, dword ptr [0x11182d88] */
  ECX = (r32((uint32_t)(0x11182d88)));
  /* 111627ae mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111627b0 push edx */
  push32((uint32_t)(EDX));
  /* 111627b1 call 0x11157ff0 */
  push32(0x111627b6u); f_11157ff0();
  /* 111627b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111627b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 111627bb mov eax, dword ptr [0x11182d88] */
  EAX = (r32((uint32_t)(0x11182d88)));
  /* 111627c0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 111627c3 push ecx */
  push32((uint32_t)(ECX));
  /* 111627c4 call 0x11157ff0 */
  push32(0x111627c9u); f_11157ff0();
  /* 111627c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111627cc push 2 */
  push32((uint32_t)(0x2u));
  /* 111627ce mov edx, dword ptr [0x11182d88] */
  EDX = (r32((uint32_t)(0x11182d88)));
  /* 111627d4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 111627d7 push eax */
  push32((uint32_t)(EAX));
  /* 111627d8 call 0x11157ff0 */
  push32(0x111627ddu); f_11157ff0();
  /* 111627dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111627e0:;
  /* 111627e0 mov ecx, dword ptr [0x11182d88] */
  ECX = (r32((uint32_t)(0x11182d88)));
  /* 111627e6 mov edx, dword ptr [0x11183a20] */
  EDX = (r32((uint32_t)(0x11183a20)));
  /* 111627ec mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 111627ee mov eax, dword ptr [0x11182d88] */
  EAX = (r32((uint32_t)(0x11182d88)));
  /* 111627f3 mov ecx, dword ptr [0x11183a24] */
  ECX = (r32((uint32_t)(0x11183a24)));
  /* 111627f9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 111627fc mov edx, dword ptr [0x11182d88] */
  EDX = (r32((uint32_t)(0x11182d88)));
  /* 11162802 mov eax, dword ptr [0x11183a28] */
  EAX = (r32((uint32_t)(0x11183a28)));
  /* 11162807 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1116280a mov ecx, dword ptr [0x11182d88] */
  ECX = (r32((uint32_t)(0x11182d88)));
  /* 11162810 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11162812 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11162814 mov byte ptr [0x11181ea8], al */
  w8((uint32_t)(0x11181ea8), (AL));
  /* 11162819 mov dword ptr [0x11181eac], 1 */
  w32((uint32_t)(0x11181eac), (0x1u));
  /* 11162823 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11162825 jmp 0x11162952 */
  goto L_11162952;
L_1116282a:;
  /* 1116282a push 2 */
  push32((uint32_t)(0x2u));
  /* 1116282c mov ecx, dword ptr [0x11183a20] */
  ECX = (r32((uint32_t)(0x11183a20)));
  /* 11162832 push ecx */
  push32((uint32_t)(ECX));
  /* 11162833 call 0x11157ff0 */
  push32(0x11162838u); f_11157ff0();
  /* 11162838 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116283b push 2 */
  push32((uint32_t)(0x2u));
  /* 1116283d mov edx, dword ptr [0x11183a24] */
  EDX = (r32((uint32_t)(0x11183a24)));
  /* 11162843 push edx */
  push32((uint32_t)(EDX));
  /* 11162844 call 0x11157ff0 */
  push32(0x11162849u); f_11157ff0();
  /* 11162849 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116284c push 2 */
  push32((uint32_t)(0x2u));
  /* 1116284e mov eax, dword ptr [0x11183a28] */
  EAX = (r32((uint32_t)(0x11183a28)));
  /* 11162853 push eax */
  push32((uint32_t)(EAX));
  /* 11162854 call 0x11157ff0 */
  push32(0x11162859u); f_11157ff0();
  /* 11162859 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116285c mov dword ptr [0x11183a20], 0 */
  w32((uint32_t)(0x11183a20), (0x0u));
  /* 11162866 mov dword ptr [0x11183a24], 0 */
  w32((uint32_t)(0x11183a24), (0x0u));
  /* 11162870 mov dword ptr [0x11183a28], 0 */
  w32((uint32_t)(0x11183a28), (0x0u));
  /* 1116287a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1116287f push 0x1117f504 */
  push32((uint32_t)(0x1117f504u));
  /* 11162884 push 2 */
  push32((uint32_t)(0x2u));
  /* 11162886 push 2 */
  push32((uint32_t)(0x2u));
  /* 11162888 call 0x11157560 */
  push32(0x1116288du); f_11157560();
  /* 1116288d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162890 mov ecx, dword ptr [0x11182d88] */
  ECX = (r32((uint32_t)(0x11182d88)));
  /* 11162896 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11162898 mov edx, dword ptr [0x11182d88] */
  EDX = (r32((uint32_t)(0x11182d88)));
  /* 1116289e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111628a1 jne 0x111628ab */
  if (!C.zf) goto L_111628ab;
  /* 111628a3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111628a6 jmp 0x11162952 */
  goto L_11162952;
L_111628ab:;
  /* 111628ab push 0x1117f4d4 */
  push32((uint32_t)(0x1117f4d4u));
  /* 111628b0 mov eax, dword ptr [0x11182d88] */
  EAX = (r32((uint32_t)(0x11182d88)));
  /* 111628b5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111628b7 push ecx */
  push32((uint32_t)(ECX));
  /* 111628b8 call 0x1115a510 */
  push32(0x111628bdu); f_1115a510();
  /* 111628bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111628c0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 111628c5 push 0x1117f504 */
  push32((uint32_t)(0x1117f504u));
  /* 111628ca push 2 */
  push32((uint32_t)(0x2u));
  /* 111628cc push 2 */
  push32((uint32_t)(0x2u));
  /* 111628ce call 0x11157560 */
  push32(0x111628d3u); f_11157560();
  /* 111628d3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111628d6 mov edx, dword ptr [0x11182d88] */
  EDX = (r32((uint32_t)(0x11182d88)));
  /* 111628dc mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 111628df mov eax, dword ptr [0x11182d88] */
  EAX = (r32((uint32_t)(0x11182d88)));
  /* 111628e4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111628e8 jne 0x111628ef */
  if (!C.zf) goto L_111628ef;
  /* 111628ea or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111628ed jmp 0x11162952 */
  goto L_11162952;
L_111628ef:;
  /* 111628ef mov ecx, dword ptr [0x11182d88] */
  ECX = (r32((uint32_t)(0x11182d88)));
  /* 111628f5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 111628f8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 111628fb push 0x92 */
  push32((uint32_t)(0x92u));
  /* 11162900 push 0x1117f504 */
  push32((uint32_t)(0x1117f504u));
  /* 11162905 push 2 */
  push32((uint32_t)(0x2u));
  /* 11162907 push 2 */
  push32((uint32_t)(0x2u));
  /* 11162909 call 0x11157560 */
  push32(0x1116290eu); f_11157560();
  /* 1116290e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162911 mov ecx, dword ptr [0x11182d88] */
  ECX = (r32((uint32_t)(0x11182d88)));
  /* 11162917 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1116291a mov edx, dword ptr [0x11182d88] */
  EDX = (r32((uint32_t)(0x11182d88)));
  /* 11162920 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11162924 jne 0x1116292b */
  if (!C.zf) goto L_1116292b;
  /* 11162926 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11162929 jmp 0x11162952 */
  goto L_11162952;
L_1116292b:;
  /* 1116292b mov eax, dword ptr [0x11182d88] */
  EAX = (r32((uint32_t)(0x11182d88)));
  /* 11162930 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11162933 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11162936 mov edx, dword ptr [0x11182d88] */
  EDX = (r32((uint32_t)(0x11182d88)));
  /* 1116293c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1116293e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11162940 mov byte ptr [0x11181ea8], cl */
  w8((uint32_t)(0x11181ea8), (CL));
  /* 11162946 mov dword ptr [0x11181eac], 1 */
  w32((uint32_t)(0x11181eac), (0x1u));
  /* 11162950 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11162952:;
  /* 11162952 mov esp, ebp */
  ESP = (EBP);
  /* 11162954 pop ebp */
  EBP = (pop32());
  /* 11162955 ret  */
  ESPCHK(0x111626b0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11162960 (125 bytes, 49 insns) */
void f_11162960(void) {
  FTRACE(0x11162960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11162960 push ebp */
  push32((uint32_t)(EBP));
  /* 11162961 mov ebp, esp */
  EBP = (ESP);
  /* 11162963 push ecx */
  push32((uint32_t)(ECX));
L_11162964:;
  /* 11162964 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162967 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1116296a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1116296c je 0x111629d9 */
  if (C.zf) goto L_111629d9;
  /* 1116296e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162971 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11162974 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11162977 jl 0x1116299d */
  if ((C.sf!=C.of)) goto L_1116299d;
  /* 11162979 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116297c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1116297f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11162982 jg 0x1116299d */
  if ((!C.zf&&C.sf==C.of)) goto L_1116299d;
  /* 11162984 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162987 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1116298a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1116298d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162990 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11162992 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162995 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11162998 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1116299b jmp 0x111629d7 */
  goto L_111629d7;
L_1116299d:;
  /* 1116299d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111629a0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 111629a3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111629a6 jne 0x111629ce */
  if (!C.zf) goto L_111629ce;
  /* 111629a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111629ab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_111629ae:;
  /* 111629ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111629b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111629b4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 111629b7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 111629b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111629bc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111629bf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111629c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111629c5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 111629c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111629ca jne 0x111629ae */
  if (!C.zf) goto L_111629ae;
  /* 111629cc jmp 0x111629d7 */
  goto L_111629d7;
L_111629ce:;
  /* 111629ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111629d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111629d4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_111629d7:;
  /* 111629d7 jmp 0x11162964 */
  goto L_11162964;
L_111629d9:;
  /* 111629d9 mov esp, ebp */
  ESP = (EBP);
  /* 111629db pop ebp */
  EBP = (pop32());
  /* 111629dc ret  */
  ESPCHK(0x11162960u, _esp0);
  ESP += 4; return;
}

/* FUN_100129e0 @ 0x111629e0 (304 bytes, 85 insns) */
void f_111629e0(void) {
  FTRACE(0x111629e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111629e0 push ebp */
  push32((uint32_t)(EBP));
  /* 111629e1 mov ebp, esp */
  EBP = (ESP);
  /* 111629e3 push ecx */
  push32((uint32_t)(ECX));
  /* 111629e4 cmp dword ptr [0x111839f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111839f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111629eb je 0x11162aac */
  if (C.zf) goto L_11162aac;
  /* 111629f1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 111629f3 push 0x1117f510 */
  push32((uint32_t)(0x1117f510u));
  /* 111629f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 111629fa push 0x30 */
  push32((uint32_t)(0x30u));
  /* 111629fc push 1 */
  push32((uint32_t)(0x1u));
  /* 111629fe call 0x11157970 */
  push32(0x11162a03u); f_11157970();
  /* 11162a03 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162a06 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11162a09 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11162a0d jne 0x11162a19 */
  if (!C.zf) goto L_11162a19;
  /* 11162a0f mov eax, 1 */
  EAX = (0x1u);
  /* 11162a14 jmp 0x11162b0c */
  goto L_11162b0c;
L_11162a19:;
  /* 11162a19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11162a1c push eax */
  push32((uint32_t)(EAX));
  /* 11162a1d call 0x11162b10 */
  push32(0x11162a22u); f_11162b10();
  /* 11162a22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162a25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11162a27 je 0x11162a4d */
  if (C.zf) goto L_11162a4d;
  /* 11162a29 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11162a2c push ecx */
  push32((uint32_t)(ECX));
  /* 11162a2d call 0x11162da0 */
  push32(0x11162a32u); f_11162da0();
  /* 11162a32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162a35 push 2 */
  push32((uint32_t)(0x2u));
  /* 11162a37 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11162a3a push edx */
  push32((uint32_t)(EDX));
  /* 11162a3b call 0x11157ff0 */
  push32(0x11162a40u); f_11157ff0();
  /* 11162a40 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162a43 mov eax, 1 */
  EAX = (0x1u);
  /* 11162a48 jmp 0x11162b0c */
  goto L_11162b0c;
L_11162a4d:;
  /* 11162a4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11162a50 mov ecx, dword ptr [0x11182d88] */
  ECX = (r32((uint32_t)(0x11182d88)));
  /* 11162a56 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11162a58 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11162a5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11162a5d mov ecx, dword ptr [0x11182d88] */
  ECX = (r32((uint32_t)(0x11182d88)));
  /* 11162a63 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11162a66 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11162a69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11162a6c mov ecx, dword ptr [0x11182d88] */
  ECX = (r32((uint32_t)(0x11182d88)));
  /* 11162a72 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11162a75 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11162a78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11162a7b mov dword ptr [0x11182d88], eax */
  w32((uint32_t)(0x11182d88), (EAX));
  /* 11162a80 mov ecx, dword ptr [0x11183a2c] */
  ECX = (r32((uint32_t)(0x11183a2c)));
  /* 11162a86 push ecx */
  push32((uint32_t)(ECX));
  /* 11162a87 call 0x11162da0 */
  push32(0x11162a8cu); f_11162da0();
  /* 11162a8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162a8f push 2 */
  push32((uint32_t)(0x2u));
  /* 11162a91 mov edx, dword ptr [0x11183a2c] */
  EDX = (r32((uint32_t)(0x11183a2c)));
  /* 11162a97 push edx */
  push32((uint32_t)(EDX));
  /* 11162a98 call 0x11157ff0 */
  push32(0x11162a9du); f_11157ff0();
  /* 11162a9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162aa0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11162aa3 mov dword ptr [0x11183a2c], eax */
  w32((uint32_t)(0x11183a2c), (EAX));
  /* 11162aa8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11162aaa jmp 0x11162b0c */
  goto L_11162b0c;
L_11162aac:;
  /* 11162aac mov ecx, dword ptr [0x11182d88] */
  ECX = (r32((uint32_t)(0x11182d88)));
  /* 11162ab2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11162ab4 mov dword ptr [0x11182d58], edx */
  w32((uint32_t)(0x11182d58), (EDX));
  /* 11162aba mov eax, dword ptr [0x11182d88] */
  EAX = (r32((uint32_t)(0x11182d88)));
  /* 11162abf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11162ac2 mov dword ptr [0x11182d5c], ecx */
  w32((uint32_t)(0x11182d5c), (ECX));
  /* 11162ac8 mov edx, dword ptr [0x11182d88] */
  EDX = (r32((uint32_t)(0x11182d88)));
  /* 11162ace mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11162ad1 mov dword ptr [0x11182d60], eax */
  w32((uint32_t)(0x11182d60), (EAX));
  /* 11162ad6 mov dword ptr [0x11182d88], 0x11182d58 */
  w32((uint32_t)(0x11182d88), (0x11182d58u));
  /* 11162ae0 mov ecx, dword ptr [0x11183a2c] */
  ECX = (r32((uint32_t)(0x11183a2c)));
  /* 11162ae6 push ecx */
  push32((uint32_t)(ECX));
  /* 11162ae7 call 0x11162da0 */
  push32(0x11162aecu); f_11162da0();
  /* 11162aec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162aef push 2 */
  push32((uint32_t)(0x2u));
  /* 11162af1 mov edx, dword ptr [0x11183a2c] */
  EDX = (r32((uint32_t)(0x11183a2c)));
  /* 11162af7 push edx */
  push32((uint32_t)(EDX));
  /* 11162af8 call 0x11157ff0 */
  push32(0x11162afdu); f_11157ff0();
  /* 11162afd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162b00 mov dword ptr [0x11183a2c], 0 */
  w32((uint32_t)(0x11183a2c), (0x0u));
  /* 11162b0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11162b0c:;
  /* 11162b0c mov esp, ebp */
  ESP = (EBP);
  /* 11162b0e pop ebp */
  EBP = (pop32());
  /* 11162b0f ret  */
  ESPCHK(0x111629e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b10 @ 0x11162b10 (525 bytes, 200 insns) */
void f_11162b10(void) {
  FTRACE(0x11162b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11162b10 push ebp */
  push32((uint32_t)(EBP));
  /* 11162b11 mov ebp, esp */
  EBP = (ESP);
  /* 11162b13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11162b16 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11162b1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11162b1f mov ax, word ptr [0x11183a4c] */
  AX = (r16((uint32_t)(0x11183a4c)));
  /* 11162b25 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11162b28 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11162b2c jne 0x11162b36 */
  if (!C.zf) goto L_11162b36;
  /* 11162b2e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11162b31 jmp 0x11162d19 */
  goto L_11162d19;
L_11162b36:;
  /* 11162b36 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162b39 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11162b3c push ecx */
  push32((uint32_t)(ECX));
  /* 11162b3d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11162b3f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11162b42 push edx */
  push32((uint32_t)(EDX));
  /* 11162b43 push 1 */
  push32((uint32_t)(0x1u));
  /* 11162b45 call 0x11165720 */
  push32(0x11162b4au); f_11165720();
  /* 11162b4a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162b4d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11162b50 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11162b52 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11162b55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162b58 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11162b5b push edx */
  push32((uint32_t)(EDX));
  /* 11162b5c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11162b5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11162b61 push eax */
  push32((uint32_t)(EAX));
  /* 11162b62 push 1 */
  push32((uint32_t)(0x1u));
  /* 11162b64 call 0x11165720 */
  push32(0x11162b69u); f_11165720();
  /* 11162b69 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162b6c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11162b6f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11162b71 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11162b74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162b77 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11162b7a push edx */
  push32((uint32_t)(EDX));
  /* 11162b7b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11162b7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11162b80 push eax */
  push32((uint32_t)(EAX));
  /* 11162b81 push 1 */
  push32((uint32_t)(0x1u));
  /* 11162b83 call 0x11165720 */
  push32(0x11162b88u); f_11165720();
  /* 11162b88 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162b8b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11162b8e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11162b90 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11162b93 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162b96 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11162b99 push edx */
  push32((uint32_t)(EDX));
  /* 11162b9a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11162b9c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11162b9f push eax */
  push32((uint32_t)(EAX));
  /* 11162ba0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11162ba2 call 0x11165720 */
  push32(0x11162ba7u); f_11165720();
  /* 11162ba7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162baa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11162bad or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11162baf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11162bb2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162bb5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11162bb8 push edx */
  push32((uint32_t)(EDX));
  /* 11162bb9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11162bbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11162bbe push eax */
  push32((uint32_t)(EAX));
  /* 11162bbf push 1 */
  push32((uint32_t)(0x1u));
  /* 11162bc1 call 0x11165720 */
  push32(0x11162bc6u); f_11165720();
  /* 11162bc6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162bc9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11162bcc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11162bce mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11162bd1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162bd4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11162bd7 push eax */
  push32((uint32_t)(EAX));
  /* 11162bd8 call 0x11162d20 */
  push32(0x11162bddu); f_11162d20();
  /* 11162bdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162be0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162be3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11162be6 push ecx */
  push32((uint32_t)(ECX));
  /* 11162be7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 11162be9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11162bec push edx */
  push32((uint32_t)(EDX));
  /* 11162bed push 1 */
  push32((uint32_t)(0x1u));
  /* 11162bef call 0x11165720 */
  push32(0x11162bf4u); f_11165720();
  /* 11162bf4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162bf7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11162bfa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11162bfc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11162bff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162c02 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11162c05 push edx */
  push32((uint32_t)(EDX));
  /* 11162c06 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 11162c08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11162c0b push eax */
  push32((uint32_t)(EAX));
  /* 11162c0c push 1 */
  push32((uint32_t)(0x1u));
  /* 11162c0e call 0x11165720 */
  push32(0x11162c13u); f_11165720();
  /* 11162c13 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162c16 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11162c19 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11162c1b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11162c1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162c21 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11162c24 push edx */
  push32((uint32_t)(EDX));
  /* 11162c25 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11162c27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11162c2a push eax */
  push32((uint32_t)(EAX));
  /* 11162c2b push 0 */
  push32((uint32_t)(0x0u));
  /* 11162c2d call 0x11165720 */
  push32(0x11162c32u); f_11165720();
  /* 11162c32 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162c35 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11162c38 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11162c3a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11162c3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162c40 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11162c43 push edx */
  push32((uint32_t)(EDX));
  /* 11162c44 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11162c46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11162c49 push eax */
  push32((uint32_t)(EAX));
  /* 11162c4a push 0 */
  push32((uint32_t)(0x0u));
  /* 11162c4c call 0x11165720 */
  push32(0x11162c51u); f_11165720();
  /* 11162c51 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162c54 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11162c57 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11162c59 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11162c5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162c5f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11162c62 push edx */
  push32((uint32_t)(EDX));
  /* 11162c63 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 11162c65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11162c68 push eax */
  push32((uint32_t)(EAX));
  /* 11162c69 push 0 */
  push32((uint32_t)(0x0u));
  /* 11162c6b call 0x11165720 */
  push32(0x11162c70u); f_11165720();
  /* 11162c70 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162c73 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11162c76 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11162c78 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11162c7b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162c7e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11162c81 push edx */
  push32((uint32_t)(EDX));
  /* 11162c82 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 11162c84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11162c87 push eax */
  push32((uint32_t)(EAX));
  /* 11162c88 push 0 */
  push32((uint32_t)(0x0u));
  /* 11162c8a call 0x11165720 */
  push32(0x11162c8fu); f_11165720();
  /* 11162c8f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162c92 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11162c95 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11162c97 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11162c9a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162c9d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11162ca0 push edx */
  push32((uint32_t)(EDX));
  /* 11162ca1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 11162ca3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11162ca6 push eax */
  push32((uint32_t)(EAX));
  /* 11162ca7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11162ca9 call 0x11165720 */
  push32(0x11162caeu); f_11165720();
  /* 11162cae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162cb1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11162cb4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11162cb6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11162cb9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162cbc add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11162cbf push edx */
  push32((uint32_t)(EDX));
  /* 11162cc0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 11162cc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11162cc5 push eax */
  push32((uint32_t)(EAX));
  /* 11162cc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11162cc8 call 0x11165720 */
  push32(0x11162ccdu); f_11165720();
  /* 11162ccd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162cd0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11162cd3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11162cd5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11162cd8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162cdb add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11162cde push edx */
  push32((uint32_t)(EDX));
  /* 11162cdf push 0x52 */
  push32((uint32_t)(0x52u));
  /* 11162ce1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11162ce4 push eax */
  push32((uint32_t)(EAX));
  /* 11162ce5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11162ce7 call 0x11165720 */
  push32(0x11162cecu); f_11165720();
  /* 11162cec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162cef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11162cf2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11162cf4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11162cf7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162cfa add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11162cfd push edx */
  push32((uint32_t)(EDX));
  /* 11162cfe push 0x53 */
  push32((uint32_t)(0x53u));
  /* 11162d00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11162d03 push eax */
  push32((uint32_t)(EAX));
  /* 11162d04 push 0 */
  push32((uint32_t)(0x0u));
  /* 11162d06 call 0x11165720 */
  push32(0x11162d0bu); f_11165720();
  /* 11162d0b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162d0e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11162d11 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11162d13 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11162d16 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11162d19:;
  /* 11162d19 mov esp, ebp */
  ESP = (EBP);
  /* 11162d1b pop ebp */
  EBP = (pop32());
  /* 11162d1c ret  */
  ESPCHK(0x11162b10u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11162d20 (125 bytes, 49 insns) */
void f_11162d20(void) {
  FTRACE(0x11162d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11162d20 push ebp */
  push32((uint32_t)(EBP));
  /* 11162d21 mov ebp, esp */
  EBP = (ESP);
  /* 11162d23 push ecx */
  push32((uint32_t)(ECX));
L_11162d24:;
  /* 11162d24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162d27 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11162d2a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11162d2c je 0x11162d99 */
  if (C.zf) goto L_11162d99;
  /* 11162d2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162d31 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11162d34 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11162d37 jl 0x11162d5d */
  if ((C.sf!=C.of)) goto L_11162d5d;
  /* 11162d39 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162d3c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11162d3f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11162d42 jg 0x11162d5d */
  if ((!C.zf&&C.sf==C.of)) goto L_11162d5d;
  /* 11162d44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162d47 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11162d4a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11162d4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162d50 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11162d52 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162d55 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11162d58 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11162d5b jmp 0x11162d97 */
  goto L_11162d97;
L_11162d5d:;
  /* 11162d5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162d60 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11162d63 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11162d66 jne 0x11162d8e */
  if (!C.zf) goto L_11162d8e;
  /* 11162d68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162d6b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11162d6e:;
  /* 11162d6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11162d71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11162d74 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11162d77 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11162d79 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11162d7c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11162d7f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11162d82 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11162d85 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11162d88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11162d8a jne 0x11162d6e */
  if (!C.zf) goto L_11162d6e;
  /* 11162d8c jmp 0x11162d97 */
  goto L_11162d97;
L_11162d8e:;
  /* 11162d8e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162d91 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11162d94 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11162d97:;
  /* 11162d97 jmp 0x11162d24 */
  goto L_11162d24;
L_11162d99:;
  /* 11162d99 mov esp, ebp */
  ESP = (EBP);
  /* 11162d9b pop ebp */
  EBP = (pop32());
  /* 11162d9c ret  */
  ESPCHK(0x11162d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10012da0 @ 0x11162da0 (147 bytes, 52 insns) */
void f_11162da0(void) {
  FTRACE(0x11162da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11162da0 push ebp */
  push32((uint32_t)(EBP));
  /* 11162da1 mov ebp, esp */
  EBP = (ESP);
  /* 11162da3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11162da7 jne 0x11162dae */
  if (!C.zf) goto L_11162dae;
  /* 11162da9 jmp 0x11162e31 */
  goto L_11162e31;
L_11162dae:;
  /* 11162dae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162db1 cmp dword ptr [eax + 0xc], 0x11183a88 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x11183a88u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11162db8 je 0x11162e31 */
  if (C.zf) goto L_11162e31;
  /* 11162dba push 2 */
  push32((uint32_t)(0x2u));
  /* 11162dbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162dbf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11162dc2 push edx */
  push32((uint32_t)(EDX));
  /* 11162dc3 call 0x11157ff0 */
  push32(0x11162dc8u); f_11157ff0();
  /* 11162dc8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162dcb push 2 */
  push32((uint32_t)(0x2u));
  /* 11162dcd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162dd0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11162dd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11162dd4 call 0x11157ff0 */
  push32(0x11162dd9u); f_11157ff0();
  /* 11162dd9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162ddc push 2 */
  push32((uint32_t)(0x2u));
  /* 11162dde mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162de1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11162de4 push eax */
  push32((uint32_t)(EAX));
  /* 11162de5 call 0x11157ff0 */
  push32(0x11162deau); f_11157ff0();
  /* 11162dea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162ded push 2 */
  push32((uint32_t)(0x2u));
  /* 11162def mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162df2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11162df5 push edx */
  push32((uint32_t)(EDX));
  /* 11162df6 call 0x11157ff0 */
  push32(0x11162dfbu); f_11157ff0();
  /* 11162dfb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162dfe push 2 */
  push32((uint32_t)(0x2u));
  /* 11162e00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162e03 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11162e06 push ecx */
  push32((uint32_t)(ECX));
  /* 11162e07 call 0x11157ff0 */
  push32(0x11162e0cu); f_11157ff0();
  /* 11162e0c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162e0f push 2 */
  push32((uint32_t)(0x2u));
  /* 11162e11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162e14 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11162e17 push eax */
  push32((uint32_t)(EAX));
  /* 11162e18 call 0x11157ff0 */
  push32(0x11162e1du); f_11157ff0();
  /* 11162e1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162e20 push 2 */
  push32((uint32_t)(0x2u));
  /* 11162e22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11162e25 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 11162e28 push edx */
  push32((uint32_t)(EDX));
  /* 11162e29 call 0x11157ff0 */
  push32(0x11162e2eu); f_11157ff0();
  /* 11162e2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11162e31:;
  /* 11162e31 pop ebp */
  EBP = (pop32());
  /* 11162e32 ret  */
  ESPCHK(0x11162da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012e40 @ 0x11162e40 (928 bytes, 284 insns) */
void f_11162e40(void) {
  FTRACE(0x11162e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11162e40 push ebp */
  push32((uint32_t)(EBP));
  /* 11162e41 mov ebp, esp */
  EBP = (ESP);
  /* 11162e43 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11162e46 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11162e4d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11162e54 cmp dword ptr [0x111839f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111839f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11162e5b je 0x11163191 */
  if (C.zf) goto L_11163191;
  /* 11162e61 cmp dword ptr [0x11183a00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183a00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11162e68 jne 0x11162e90 */
  if (!C.zf) goto L_11162e90;
  /* 11162e6a push 0x11183a00 */
  push32((uint32_t)(0x11183a00u));
  /* 11162e6f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11162e74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11162e76 mov ax, word ptr [0x11183a44] */
  AX = (r16((uint32_t)(0x11183a44)));
  /* 11162e7c push eax */
  push32((uint32_t)(EAX));
  /* 11162e7d push 0 */
  push32((uint32_t)(0x0u));
  /* 11162e7f call 0x11165720 */
  push32(0x11162e84u); f_11165720();
  /* 11162e84 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162e87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11162e89 je 0x11162e90 */
  if (C.zf) goto L_11162e90;
  /* 11162e8b jmp 0x11163152 */
  goto L_11163152;
L_11162e90:;
  /* 11162e90 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 11162e92 push 0x1117f51c */
  push32((uint32_t)(0x1117f51cu));
  /* 11162e97 push 2 */
  push32((uint32_t)(0x2u));
  /* 11162e99 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11162e9e call 0x11157560 */
  push32(0x11162ea3u); f_11157560();
  /* 11162ea3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162ea6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11162ea9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11162eab push 0x1117f51c */
  push32((uint32_t)(0x1117f51cu));
  /* 11162eb0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11162eb2 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11162eb7 call 0x11157560 */
  push32(0x11162ebcu); f_11157560();
  /* 11162ebc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162ebf mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11162ec2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11162ec4 push 0x1117f51c */
  push32((uint32_t)(0x1117f51cu));
  /* 11162ec9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11162ecb push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11162ed0 call 0x11157560 */
  push32(0x11162ed5u); f_11157560();
  /* 11162ed5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162ed8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11162edb push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11162edd push 0x1117f51c */
  push32((uint32_t)(0x1117f51cu));
  /* 11162ee2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11162ee4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11162ee9 call 0x11157560 */
  push32(0x11162eeeu); f_11157560();
  /* 11162eee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162ef1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11162ef4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11162ef8 je 0x11162f0c */
  if (C.zf) goto L_11162f0c;
  /* 11162efa cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11162efe je 0x11162f0c */
  if (C.zf) goto L_11162f0c;
  /* 11162f00 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11162f04 je 0x11162f0c */
  if (C.zf) goto L_11162f0c;
  /* 11162f06 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11162f0a jne 0x11162f11 */
  if (!C.zf) goto L_11162f11;
L_11162f0c:;
  /* 11162f0c jmp 0x11163152 */
  goto L_11163152;
L_11162f11:;
  /* 11162f11 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11162f14 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11162f17 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11162f1e jmp 0x11162f29 */
  goto L_11162f29;
L_11162f20:;
  /* 11162f20 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11162f23 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11162f26 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11162f29:;
  /* 11162f29 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11162f30 jge 0x11162f45 */
  if ((C.sf==C.of)) goto L_11162f45;
  /* 11162f32 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11162f35 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 11162f38 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11162f3a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11162f3d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11162f40 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11162f43 jmp 0x11162f20 */
  goto L_11162f20;
L_11162f45:;
  /* 11162f45 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11162f48 push eax */
  push32((uint32_t)(EAX));
  /* 11162f49 mov ecx, dword ptr [0x11183a00] */
  ECX = (r32((uint32_t)(0x11183a00)));
  /* 11162f4f push ecx */
  push32((uint32_t)(ECX));
  /* 11162f50 call dword ptr [0x1118634c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118634c))), 0x11162f56u);
  /* 11162f56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11162f58 jne 0x11162f5f */
  if (!C.zf) goto L_11162f5f;
  /* 11162f5a jmp 0x11163152 */
  goto L_11163152;
L_11162f5f:;
  /* 11162f5f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11162f63 jbe 0x11162f6a */
  if ((C.cf||C.zf)) goto L_11162f6a;
  /* 11162f65 jmp 0x11163152 */
  goto L_11163152;
L_11162f6a:;
  /* 11162f6a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11162f6d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11162f73 mov dword ptr [0x11181ea4], edx */
  w32((uint32_t)(0x11181ea4), (EDX));
  /* 11162f79 cmp dword ptr [0x11181ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11181ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11162f80 jle 0x11162fd9 */
  if ((C.zf||C.sf!=C.of)) goto L_11162fd9;
  /* 11162f82 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 11162f85 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11162f88 jmp 0x11162f93 */
  goto L_11162f93;
L_11162f8a:;
  /* 11162f8a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11162f8d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11162f90 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11162f93:;
  /* 11162f93 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11162f96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11162f98 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11162f9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11162f9c je 0x11162fd9 */
  if (C.zf) goto L_11162fd9;
  /* 11162f9e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11162fa1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11162fa3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11162fa6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11162fa8 je 0x11162fd9 */
  if (C.zf) goto L_11162fd9;
  /* 11162faa mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11162fad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11162faf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11162fb1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11162fb4 jmp 0x11162fbf */
  goto L_11162fbf;
L_11162fb6:;
  /* 11162fb6 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11162fb9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11162fbc mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11162fbf:;
  /* 11162fbf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11162fc2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11162fc4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11162fc7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11162fca jg 0x11162fd7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11162fd7;
  /* 11162fcc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11162fcf add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11162fd2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11162fd5 jmp 0x11162fb6 */
  goto L_11162fb6;
L_11162fd7:;
  /* 11162fd7 jmp 0x11162f8a */
  goto L_11162f8a;
L_11162fd9:;
  /* 11162fd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11162fdb push 0 */
  push32((uint32_t)(0x0u));
  /* 11162fdd push 0 */
  push32((uint32_t)(0x0u));
  /* 11162fdf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11162fe2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11162fe5 push eax */
  push32((uint32_t)(EAX));
  /* 11162fe6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11162feb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11162fee push ecx */
  push32((uint32_t)(ECX));
  /* 11162fef push 1 */
  push32((uint32_t)(0x1u));
  /* 11162ff1 call 0x1115f790 */
  push32(0x11162ff6u); f_1115f790();
  /* 11162ff6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11162ff9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11162ffb jne 0x11163002 */
  if (!C.zf) goto L_11163002;
  /* 11162ffd jmp 0x11163152 */
  goto L_11163152;
L_11163002:;
  /* 11163002 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11163005 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 1116300a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1116300d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11163010 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11163017 jmp 0x11163022 */
  goto L_11163022;
L_11163019:;
  /* 11163019 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1116301c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116301f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11163022:;
  /* 11163022 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11163029 jge 0x11163040 */
  if ((C.sf==C.of)) goto L_11163040;
  /* 1116302b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1116302e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 11163032 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11163035 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11163038 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116303b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1116303e jmp 0x11163019 */
  goto L_11163019;
L_11163040:;
  /* 11163040 push 0 */
  push32((uint32_t)(0x0u));
  /* 11163042 push 0 */
  push32((uint32_t)(0x0u));
  /* 11163044 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11163047 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116304a push edx */
  push32((uint32_t)(EDX));
  /* 1116304b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11163050 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11163053 push eax */
  push32((uint32_t)(EAX));
  /* 11163054 push 1 */
  push32((uint32_t)(0x1u));
  /* 11163056 call 0x111659c0 */
  push32(0x1116305bu); f_111659c0();
  /* 1116305b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116305e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11163060 jne 0x11163067 */
  if (!C.zf) goto L_11163067;
  /* 11163062 jmp 0x11163152 */
  goto L_11163152;
L_11163067:;
  /* 11163067 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1116306a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 1116306f cmp dword ptr [0x11181ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11181ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11163076 jle 0x111630d3 */
  if ((C.zf||C.sf!=C.of)) goto L_111630d3;
  /* 11163078 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 1116307b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1116307e jmp 0x11163089 */
  goto L_11163089;
L_11163080:;
  /* 11163080 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11163083 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11163086 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11163089:;
  /* 11163089 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1116308c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1116308e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11163090 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11163092 je 0x111630d3 */
  if (C.zf) goto L_111630d3;
  /* 11163094 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11163097 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11163099 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1116309c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1116309e je 0x111630d3 */
  if (C.zf) goto L_111630d3;
  /* 111630a0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 111630a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111630a5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111630a7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 111630aa jmp 0x111630b5 */
  goto L_111630b5;
L_111630ac:;
  /* 111630ac mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111630af add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111630b2 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_111630b5:;
  /* 111630b5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 111630b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111630ba mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 111630bd cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111630c0 jg 0x111630d1 */
  if ((!C.zf&&C.sf==C.of)) goto L_111630d1;
  /* 111630c2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111630c5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 111630c8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 111630cf jmp 0x111630ac */
  goto L_111630ac;
L_111630d1:;
  /* 111630d1 jmp 0x11163080 */
  goto L_11163080;
L_111630d3:;
  /* 111630d3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 111630d6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111630d9 mov dword ptr [0x11181c98], eax */
  w32((uint32_t)(0x11181c98), (EAX));
  /* 111630de mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111630e1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111630e4 mov dword ptr [0x11181c9c], ecx */
  w32((uint32_t)(0x11181c9c), (ECX));
  /* 111630ea cmp dword ptr [0x11183a30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183a30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111630f1 je 0x11163104 */
  if (C.zf) goto L_11163104;
  /* 111630f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 111630f5 mov edx, dword ptr [0x11183a30] */
  EDX = (r32((uint32_t)(0x11183a30)));
  /* 111630fb push edx */
  push32((uint32_t)(EDX));
  /* 111630fc call 0x11157ff0 */
  push32(0x11163101u); f_11157ff0();
  /* 11163101 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11163104:;
  /* 11163104 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11163107 mov dword ptr [0x11183a30], eax */
  w32((uint32_t)(0x11183a30), (EAX));
  /* 1116310c cmp dword ptr [0x11183a34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183a34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11163113 je 0x11163126 */
  if (C.zf) goto L_11163126;
  /* 11163115 push 2 */
  push32((uint32_t)(0x2u));
  /* 11163117 mov ecx, dword ptr [0x11183a34] */
  ECX = (r32((uint32_t)(0x11183a34)));
  /* 1116311d push ecx */
  push32((uint32_t)(ECX));
  /* 1116311e call 0x11157ff0 */
  push32(0x11163123u); f_11157ff0();
  /* 11163123 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11163126:;
  /* 11163126 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11163129 mov dword ptr [0x11183a34], edx */
  w32((uint32_t)(0x11183a34), (EDX));
  /* 1116312f push 2 */
  push32((uint32_t)(0x2u));
  /* 11163131 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11163134 push eax */
  push32((uint32_t)(EAX));
  /* 11163135 call 0x11157ff0 */
  push32(0x1116313au); f_11157ff0();
  /* 1116313a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116313d push 2 */
  push32((uint32_t)(0x2u));
  /* 1116313f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11163142 push ecx */
  push32((uint32_t)(ECX));
  /* 11163143 call 0x11157ff0 */
  push32(0x11163148u); f_11157ff0();
  /* 11163148 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116314b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1116314d jmp 0x111631dc */
  goto L_111631dc;
L_11163152:;
  /* 11163152 push 2 */
  push32((uint32_t)(0x2u));
  /* 11163154 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11163157 push edx */
  push32((uint32_t)(EDX));
  /* 11163158 call 0x11157ff0 */
  push32(0x1116315du); f_11157ff0();
  /* 1116315d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11163160 push 2 */
  push32((uint32_t)(0x2u));
  /* 11163162 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11163165 push eax */
  push32((uint32_t)(EAX));
  /* 11163166 call 0x11157ff0 */
  push32(0x1116316bu); f_11157ff0();
  /* 1116316b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116316e push 2 */
  push32((uint32_t)(0x2u));
  /* 11163170 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11163173 push ecx */
  push32((uint32_t)(ECX));
  /* 11163174 call 0x11157ff0 */
  push32(0x11163179u); f_11157ff0();
  /* 11163179 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116317c push 2 */
  push32((uint32_t)(0x2u));
  /* 1116317e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11163181 push edx */
  push32((uint32_t)(EDX));
  /* 11163182 call 0x11157ff0 */
  push32(0x11163187u); f_11157ff0();
  /* 11163187 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116318a mov eax, 1 */
  EAX = (0x1u);
  /* 1116318f jmp 0x111631dc */
  goto L_111631dc;
L_11163191:;
  /* 11163191 mov dword ptr [0x11181c98], 0x11181ca2 */
  w32((uint32_t)(0x11181c98), (0x11181ca2u));
  /* 1116319b mov dword ptr [0x11181c9c], 0x11181ca2 */
  w32((uint32_t)(0x11181c9c), (0x11181ca2u));
  /* 111631a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 111631a7 mov eax, dword ptr [0x11183a30] */
  EAX = (r32((uint32_t)(0x11183a30)));
  /* 111631ac push eax */
  push32((uint32_t)(EAX));
  /* 111631ad call 0x11157ff0 */
  push32(0x111631b2u); f_11157ff0();
  /* 111631b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111631b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 111631b7 mov ecx, dword ptr [0x11183a34] */
  ECX = (r32((uint32_t)(0x11183a34)));
  /* 111631bd push ecx */
  push32((uint32_t)(ECX));
  /* 111631be call 0x11157ff0 */
  push32(0x111631c3u); f_11157ff0();
  /* 111631c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111631c6 mov dword ptr [0x11183a30], 0 */
  w32((uint32_t)(0x11183a30), (0x0u));
  /* 111631d0 mov dword ptr [0x11183a34], 0 */
  w32((uint32_t)(0x11183a34), (0x0u));
  /* 111631da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111631dc:;
  /* 111631dc mov esp, ebp */
  ESP = (EBP);
  /* 111631de pop ebp */
  EBP = (pop32());
  /* 111631df ret  */
  ESPCHK(0x11162e40u, _esp0);
  ESP += 4; return;
}

/* FUN_100131e0 @ 0x111631e0 (7 bytes, 5 insns) */
void f_111631e0(void) {
  FTRACE(0x111631e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111631e0 push ebp */
  push32((uint32_t)(EBP));
  /* 111631e1 mov ebp, esp */
  EBP = (ESP);
  /* 111631e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111631e5 pop ebp */
  EBP = (pop32());
  /* 111631e6 ret  */
  ESPCHK(0x111631e0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x111631f0 (129 bytes, 56 insns) */
void f_111631f0(void) {
  FTRACE(0x111631f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111631f0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 111631f4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 111631f8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 111631fe jne 0x1116323c */
  if (!C.zf) goto L_1116323c;
L_11163200:;
  /* 11163200 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11163202 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11163204 jne 0x11163234 */
  if (!C.zf) goto L_11163234;
  /* 11163206 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11163208 je 0x11163230 */
  if (C.zf) goto L_11163230;
  /* 1116320a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1116320d jne 0x11163234 */
  if (!C.zf) goto L_11163234;
  /* 1116320f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11163211 je 0x11163230 */
  if (C.zf) goto L_11163230;
  /* 11163213 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11163216 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11163219 jne 0x11163234 */
  if (!C.zf) goto L_11163234;
  /* 1116321b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1116321d je 0x11163230 */
  if (C.zf) goto L_11163230;
  /* 1116321f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11163222 jne 0x11163234 */
  if (!C.zf) goto L_11163234;
  /* 11163224 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11163227 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116322a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1116322c jne 0x11163200 */
  if (!C.zf) goto L_11163200;
  /* 1116322e mov edi, edi */
  EDI = (EDI);
L_11163230:;
  /* 11163230 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11163232 ret  */
  ESPCHK(0x111631f0u, _esp0);
  ESP += 4; return;
  /* 11163233 nop  */
  /* nop */
L_11163234:;
  /* 11163234 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11163236 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11163238 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11163239 ret  */
  ESPCHK(0x111631f0u, _esp0);
  ESP += 4; return;
  /* 1116323a mov edi, edi */
  EDI = (EDI);
L_1116323c:;
  /* 1116323c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 11163242 je 0x11163258 */
  if (C.zf) goto L_11163258;
  /* 11163244 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11163246 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11163247 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11163249 jne 0x11163234 */
  if (!C.zf) goto L_11163234;
  /* 1116324b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1116324c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1116324e je 0x11163230 */
  if (C.zf) goto L_11163230;
  /* 11163250 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 11163256 je 0x11163200 */
  if (C.zf) goto L_11163200;
L_11163258:;
  /* 11163258 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1116325b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116325e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11163260 jne 0x11163234 */
  if (!C.zf) goto L_11163234;
  /* 11163262 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11163264 je 0x11163230 */
  if (C.zf) goto L_11163230;
  /* 11163266 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11163269 jne 0x11163234 */
  if (!C.zf) goto L_11163234;
  /* 1116326b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1116326d je 0x11163230 */
  if (C.zf) goto L_11163230;
  /* 1116326f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11163272 jmp 0x11163200 */
  goto L_11163200;
}

/* FUN_10013280 @ 0x11163280 (62 bytes, 35 insns) */
void f_11163280(void) {
  FTRACE(0x11163280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11163280 push ebp */
  push32((uint32_t)(EBP));
  /* 11163281 mov ebp, esp */
  EBP = (ESP);
  /* 11163283 push esi */
  push32((uint32_t)(ESI));
  /* 11163284 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11163286 push eax */
  push32((uint32_t)(EAX));
  /* 11163287 push eax */
  push32((uint32_t)(EAX));
  /* 11163288 push eax */
  push32((uint32_t)(EAX));
  /* 11163289 push eax */
  push32((uint32_t)(EAX));
  /* 1116328a push eax */
  push32((uint32_t)(EAX));
  /* 1116328b push eax */
  push32((uint32_t)(EAX));
  /* 1116328c push eax */
  push32((uint32_t)(EAX));
  /* 1116328d push eax */
  push32((uint32_t)(EAX));
  /* 1116328e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11163291 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11163294:;
  /* 11163294 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11163296 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11163298 je 0x111632a1 */
  if (C.zf) goto L_111632a1;
  /* 1116329a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1116329b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1116329b");
  /* 1116329f jmp 0x11163294 */
  goto L_11163294;
L_111632a1:;
  /* 111632a1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 111632a4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 111632a7 nop  */
  /* nop */
L_111632a8:;
  /* 111632a8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 111632a9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111632ab or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 111632ad je 0x111632b6 */
  if (C.zf) goto L_111632b6;
  /* 111632af inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 111632b0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x111632b0");
  /* 111632b4 jae 0x111632a8 */
  if (!C.cf) goto L_111632a8;
L_111632b6:;
  /* 111632b6 mov eax, ecx */
  EAX = (ECX);
  /* 111632b8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111632bb pop esi */
  ESI = (pop32());
  /* 111632bc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111632bd ret  */
  ESPCHK(0x11163280u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x111632c0 (56 bytes, 31 insns) */
void f_111632c0(void) {
  FTRACE(0x111632c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111632c0 push ebp */
  push32((uint32_t)(EBP));
  /* 111632c1 mov ebp, esp */
  EBP = (ESP);
  /* 111632c3 push edi */
  push32((uint32_t)(EDI));
  /* 111632c4 push esi */
  push32((uint32_t)(ESI));
  /* 111632c5 push ebx */
  push32((uint32_t)(EBX));
  /* 111632c6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111632c9 jecxz 0x111632f1 */
  x86_unimpl("jecxz @ 0x111632c9");
  /* 111632cb mov ebx, ecx */
  EBX = (ECX);
  /* 111632cd mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 111632d0 mov esi, edi */
  ESI = (EDI);
  /* 111632d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111632d4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 111632d6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 111632d8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111632da mov edi, esi */
  EDI = (ESI);
  /* 111632dc mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 111632df repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 111632e1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 111632e4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111632e6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111632e9 ja 0x111632ef */
  if ((!C.cf&&!C.zf)) goto L_111632ef;
  /* 111632eb je 0x111632f1 */
  if (C.zf) goto L_111632f1;
  /* 111632ed dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 111632ee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_111632ef:;
  /* 111632ef not ecx */
  ECX = (~(ECX));
L_111632f1:;
  /* 111632f1 mov eax, ecx */
  EAX = (ECX);
  /* 111632f3 pop ebx */
  EBX = (pop32());
  /* 111632f4 pop esi */
  ESI = (pop32());
  /* 111632f5 pop edi */
  EDI = (pop32());
  /* 111632f6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111632f7 ret  */
  ESPCHK(0x111632c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013300 @ 0x11163300 (58 bytes, 32 insns) */
void f_11163300(void) {
  FTRACE(0x11163300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11163300 push ebp */
  push32((uint32_t)(EBP));
  /* 11163301 mov ebp, esp */
  EBP = (ESP);
  /* 11163303 push esi */
  push32((uint32_t)(ESI));
  /* 11163304 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11163306 push eax */
  push32((uint32_t)(EAX));
  /* 11163307 push eax */
  push32((uint32_t)(EAX));
  /* 11163308 push eax */
  push32((uint32_t)(EAX));
  /* 11163309 push eax */
  push32((uint32_t)(EAX));
  /* 1116330a push eax */
  push32((uint32_t)(EAX));
  /* 1116330b push eax */
  push32((uint32_t)(EAX));
  /* 1116330c push eax */
  push32((uint32_t)(EAX));
  /* 1116330d push eax */
  push32((uint32_t)(EAX));
  /* 1116330e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11163311 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11163314:;
  /* 11163314 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11163316 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11163318 je 0x11163321 */
  if (C.zf) goto L_11163321;
  /* 1116331a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1116331b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1116331b");
  /* 1116331f jmp 0x11163314 */
  goto L_11163314;
L_11163321:;
  /* 11163321 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_11163324:;
  /* 11163324 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11163326 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11163328 je 0x11163334 */
  if (C.zf) goto L_11163334;
  /* 1116332a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1116332b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1116332b");
  /* 1116332f jae 0x11163324 */
  if (!C.cf) goto L_11163324;
  /* 11163331 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_11163334:;
  /* 11163334 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11163337 pop esi */
  ESI = (pop32());
  /* 11163338 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11163339 ret  */
  ESPCHK(0x11163300u, _esp0);
  ESP += 4; return;
}

/* FUN_10013340 @ 0x11163340 (512 bytes, 147 insns) */
void f_11163340(void) {
  FTRACE(0x11163340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11163340 push ebp */
  push32((uint32_t)(EBP));
  /* 11163341 mov ebp, esp */
  EBP = (ESP);
  /* 11163343 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11163346 cmp dword ptr [0x11183a7c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183a7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116334d jne 0x11163372 */
  if (!C.zf) goto L_11163372;
  /* 1116334f call 0x11163e10 */
  push32(0x11163354u); f_11163e10();
  /* 11163354 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11163356 je 0x11163362 */
  if (C.zf) goto L_11163362;
  /* 11163358 mov eax, dword ptr [0x11186310] */
  EAX = (r32((uint32_t)(0x11186310)));
  /* 1116335d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11163360 jmp 0x11163369 */
  goto L_11163369;
L_11163362:;
  /* 11163362 mov dword ptr [ebp - 8], 0x11163e60 */
  w32((uint32_t)(EBP + -0x8), (0x11163e60u));
L_11163369:;
  /* 11163369 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1116336c mov dword ptr [0x11183a7c], ecx */
  w32((uint32_t)(0x11183a7c), (ECX));
L_11163372:;
  /* 11163372 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11163376 jne 0x11163382 */
  if (!C.zf) goto L_11163382;
  /* 11163378 call 0x11163c60 */
  push32(0x1116337du); f_11163c60();
  /* 1116337d jmp 0x1116344e */
  goto L_1116344e;
L_11163382:;
  /* 11163382 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11163385 mov dword ptr [0x11183a6c], edx */
  w32((uint32_t)(0x11183a6c), (EDX));
  /* 1116338b cmp dword ptr [0x11183a6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183a6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11163392 je 0x111633b4 */
  if (C.zf) goto L_111633b4;
  /* 11163394 mov eax, dword ptr [0x11183a6c] */
  EAX = (r32((uint32_t)(0x11183a6c)));
  /* 11163399 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1116339c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1116339e je 0x111633b4 */
  if (C.zf) goto L_111633b4;
  /* 111633a0 push 0x11183a6c */
  push32((uint32_t)(0x11183a6cu));
  /* 111633a5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 111633a7 push 0x11182a90 */
  push32((uint32_t)(0x11182a90u));
  /* 111633ac call 0x11163540 */
  push32(0x111633b1u); f_11163540();
  /* 111633b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111633b4:;
  /* 111633b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111633b7 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111633ba mov dword ptr [0x11183a70], edx */
  w32((uint32_t)(0x11183a70), (EDX));
  /* 111633c0 cmp dword ptr [0x11183a70], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183a70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111633c7 je 0x111633e9 */
  if (C.zf) goto L_111633e9;
  /* 111633c9 mov eax, dword ptr [0x11183a70] */
  EAX = (r32((uint32_t)(0x11183a70)));
  /* 111633ce movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111633d1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111633d3 je 0x111633e9 */
  if (C.zf) goto L_111633e9;
  /* 111633d5 push 0x11183a70 */
  push32((uint32_t)(0x11183a70u));
  /* 111633da push 0x16 */
  push32((uint32_t)(0x16u));
  /* 111633dc push 0x111829d8 */
  push32((uint32_t)(0x111829d8u));
  /* 111633e1 call 0x11163540 */
  push32(0x111633e6u); f_11163540();
  /* 111633e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111633e9:;
  /* 111633e9 mov dword ptr [0x11183a74], 0 */
  w32((uint32_t)(0x11183a74), (0x0u));
  /* 111633f3 cmp dword ptr [0x11183a6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183a6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111633fa je 0x1116342d */
  if (C.zf) goto L_1116342d;
  /* 111633fc mov edx, dword ptr [0x11183a6c] */
  EDX = (r32((uint32_t)(0x11183a6c)));
  /* 11163402 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11163405 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11163407 je 0x1116342d */
  if (C.zf) goto L_1116342d;
  /* 11163409 cmp dword ptr [0x11183a70], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183a70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11163410 je 0x11163426 */
  if (C.zf) goto L_11163426;
  /* 11163412 mov ecx, dword ptr [0x11183a70] */
  ECX = (r32((uint32_t)(0x11183a70)));
  /* 11163418 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1116341b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1116341d je 0x11163426 */
  if (C.zf) goto L_11163426;
  /* 1116341f call 0x111635d0 */
  push32(0x11163424u); f_111635d0();
  /* 11163424 jmp 0x1116342b */
  goto L_1116342b;
L_11163426:;
  /* 11163426 call 0x111639c0 */
  push32(0x1116342bu); f_111639c0();
L_1116342b:;
  /* 1116342b jmp 0x1116344e */
  goto L_1116344e;
L_1116342d:;
  /* 1116342d cmp dword ptr [0x11183a70], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183a70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11163434 je 0x11163449 */
  if (C.zf) goto L_11163449;
  /* 11163436 mov eax, dword ptr [0x11183a70] */
  EAX = (r32((uint32_t)(0x11183a70)));
  /* 1116343b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1116343e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11163440 je 0x11163449 */
  if (C.zf) goto L_11163449;
  /* 11163442 call 0x11163b60 */
  push32(0x11163447u); f_11163b60();
  /* 11163447 jmp 0x1116344e */
  goto L_1116344e;
L_11163449:;
  /* 11163449 call 0x11163c60 */
  push32(0x1116344eu); f_11163c60();
L_1116344e:;
  /* 1116344e cmp dword ptr [0x11183a74], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183a74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11163455 jne 0x1116345e */
  if (!C.zf) goto L_1116345e;
  /* 11163457 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11163459 jmp 0x1116353c */
  goto L_1116353c;
L_1116345e:;
  /* 1116345e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11163461 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11163467 push edx */
  push32((uint32_t)(EDX));
  /* 11163468 call 0x11163c90 */
  push32(0x1116346du); f_11163c90();
  /* 1116346d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11163470 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11163473 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11163477 je 0x1116348c */
  if (C.zf) goto L_1116348c;
  /* 11163479 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1116347c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11163481 push eax */
  push32((uint32_t)(EAX));
  /* 11163482 call dword ptr [0x11186314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186314))), 0x11163488u);
  /* 11163488 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1116348a jne 0x11163493 */
  if (!C.zf) goto L_11163493;
L_1116348c:;
  /* 1116348c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1116348e jmp 0x1116353c */
  goto L_1116353c;
L_11163493:;
  /* 11163493 push 1 */
  push32((uint32_t)(0x1u));
  /* 11163495 mov ecx, dword ptr [0x11183a5c] */
  ECX = (r32((uint32_t)(0x11183a5c)));
  /* 1116349b push ecx */
  push32((uint32_t)(ECX));
  /* 1116349c call dword ptr [0x11186318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186318))), 0x111634a2u);
  /* 111634a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111634a4 jne 0x111634ad */
  if (!C.zf) goto L_111634ad;
  /* 111634a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111634a8 jmp 0x1116353c */
  goto L_1116353c;
L_111634ad:;
  /* 111634ad cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111634b1 je 0x111634d8 */
  if (C.zf) goto L_111634d8;
  /* 111634b3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111634b6 mov ax, word ptr [0x11183a5c] */
  AX = (r16((uint32_t)(0x11183a5c)));
  /* 111634bc mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 111634bf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111634c2 mov dx, word ptr [0x11183a78] */
  DX = (r16((uint32_t)(0x11183a78)));
  /* 111634c9 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 111634cd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111634d0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 111634d4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_111634d8:;
  /* 111634d8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111634dc je 0x11163537 */
  if (C.zf) goto L_11163537;
  /* 111634de push 0x40 */
  push32((uint32_t)(0x40u));
  /* 111634e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111634e3 push edx */
  push32((uint32_t)(EDX));
  /* 111634e4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 111634e9 mov eax, dword ptr [0x11183a5c] */
  EAX = (r32((uint32_t)(0x11183a5c)));
  /* 111634ee push eax */
  push32((uint32_t)(EAX));
  /* 111634ef call dword ptr [0x11183a7c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11183a7c))), 0x111634f5u);
  /* 111634f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111634f7 jne 0x111634fd */
  if (!C.zf) goto L_111634fd;
  /* 111634f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111634fb jmp 0x1116353c */
  goto L_1116353c;
L_111634fd:;
  /* 111634fd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 111634ff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11163502 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11163505 push ecx */
  push32((uint32_t)(ECX));
  /* 11163506 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 1116350b mov edx, dword ptr [0x11183a78] */
  EDX = (r32((uint32_t)(0x11183a78)));
  /* 11163511 push edx */
  push32((uint32_t)(EDX));
  /* 11163512 call dword ptr [0x11183a7c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11183a7c))), 0x11163518u);
  /* 11163518 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1116351a jne 0x11163520 */
  if (!C.zf) goto L_11163520;
  /* 1116351c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1116351e jmp 0x1116353c */
  goto L_1116353c;
L_11163520:;
  /* 11163520 push 0xa */
  push32((uint32_t)(0xau));
  /* 11163522 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11163525 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116352a push eax */
  push32((uint32_t)(EAX));
  /* 1116352b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1116352e push ecx */
  push32((uint32_t)(ECX));
  /* 1116352f call 0x1115a0a0 */
  push32(0x11163534u); f_1115a0a0();
  /* 11163534 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11163537:;
  /* 11163537 mov eax, 1 */
  EAX = (0x1u);
L_1116353c:;
  /* 1116353c mov esp, ebp */
  ESP = (EBP);
  /* 1116353e pop ebp */
  EBP = (pop32());
  /* 1116353f ret  */
  ESPCHK(0x11163340u, _esp0);
  ESP += 4; return;
}

/* FUN_10013540 @ 0x11163540 (130 bytes, 47 insns) */
void f_11163540(void) {
  FTRACE(0x11163540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11163540 push ebp */
  push32((uint32_t)(EBP));
  /* 11163541 mov ebp, esp */
  EBP = (ESP);
  /* 11163543 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11163546 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1116354d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11163554:;
  /* 11163554 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11163557 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116355a jg 0x111635be */
  if ((!C.zf&&C.sf==C.of)) goto L_111635be;
  /* 1116355c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11163560 je 0x111635be */
  if (C.zf) goto L_111635be;
  /* 11163562 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11163565 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11163568 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11163569 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1116356b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1116356d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11163570 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11163573 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11163576 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 11163579 push eax */
  push32((uint32_t)(EAX));
  /* 1116357a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1116357d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1116357f push edx */
  push32((uint32_t)(EDX));
  /* 11163580 call 0x11165c30 */
  push32(0x11163585u); f_11165c30();
  /* 11163585 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11163588 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1116358b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116358f jne 0x111635a2 */
  if (!C.zf) goto L_111635a2;
  /* 11163591 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11163594 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11163597 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 1116359b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1116359e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 111635a0 jmp 0x111635bc */
  goto L_111635bc;
L_111635a2:;
  /* 111635a2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111635a6 jge 0x111635b3 */
  if ((C.sf==C.of)) goto L_111635b3;
  /* 111635a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111635ab sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111635ae mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 111635b1 jmp 0x111635bc */
  goto L_111635bc;
L_111635b3:;
  /* 111635b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111635b6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111635b9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_111635bc:;
  /* 111635bc jmp 0x11163554 */
  goto L_11163554;
L_111635be:;
  /* 111635be mov esp, ebp */
  ESP = (EBP);
  /* 111635c0 pop ebp */
  EBP = (pop32());
  /* 111635c1 ret  */
  ESPCHK(0x11163540u, _esp0);
  ESP += 4; return;
}

/* FUN_100135d0 @ 0x111635d0 (186 bytes, 50 insns) */
void f_111635d0(void) {
  FTRACE(0x111635d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111635d0 push ebp */
  push32((uint32_t)(EBP));
  /* 111635d1 mov ebp, esp */
  EBP = (ESP);
  /* 111635d3 push ecx */
  push32((uint32_t)(ECX));
  /* 111635d4 mov eax, dword ptr [0x11183a6c] */
  EAX = (r32((uint32_t)(0x11183a6c)));
  /* 111635d9 push eax */
  push32((uint32_t)(EAX));
  /* 111635da call 0x1115a390 */
  push32(0x111635dfu); f_1115a390();
  /* 111635df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111635e2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111635e4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111635e7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 111635ea mov dword ptr [0x11183a68], ecx */
  w32((uint32_t)(0x11183a68), (ECX));
  /* 111635f0 mov edx, dword ptr [0x11183a70] */
  EDX = (r32((uint32_t)(0x11183a70)));
  /* 111635f6 push edx */
  push32((uint32_t)(EDX));
  /* 111635f7 call 0x1115a390 */
  push32(0x111635fcu); f_1115a390();
  /* 111635fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111635ff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11163601 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11163604 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11163607 mov dword ptr [0x11183a60], ecx */
  w32((uint32_t)(0x11183a60), (ECX));
  /* 1116360d mov dword ptr [0x11183a5c], 0 */
  w32((uint32_t)(0x11183a5c), (0x0u));
  /* 11163617 cmp dword ptr [0x11183a68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183a68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116361e je 0x11163629 */
  if (C.zf) goto L_11163629;
  /* 11163620 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11163627 jmp 0x1116363b */
  goto L_1116363b;
L_11163629:;
  /* 11163629 mov edx, dword ptr [0x11183a6c] */
  EDX = (r32((uint32_t)(0x11183a6c)));
  /* 1116362f push edx */
  push32((uint32_t)(EDX));
  /* 11163630 call 0x11164070 */
  push32(0x11163635u); f_11164070();
  /* 11163635 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11163638 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1116363b:;
  /* 1116363b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1116363e mov dword ptr [0x11183a64], eax */
  w32((uint32_t)(0x11183a64), (EAX));
  /* 11163643 push 1 */
  push32((uint32_t)(0x1u));
  /* 11163645 push 0x11163690 */
  push32((uint32_t)(0x11163690u));
  /* 1116364a call dword ptr [0x1118630c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118630c))), 0x11163650u);
  /* 11163650 mov ecx, dword ptr [0x11183a74] */
  ECX = (r32((uint32_t)(0x11183a74)));
  /* 11163656 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1116365c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1116365e je 0x1116367c */
  if (C.zf) goto L_1116367c;
  /* 11163660 mov edx, dword ptr [0x11183a74] */
  EDX = (r32((uint32_t)(0x11183a74)));
  /* 11163666 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 1116366c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1116366e je 0x1116367c */
  if (C.zf) goto L_1116367c;
  /* 11163670 mov eax, dword ptr [0x11183a74] */
  EAX = (r32((uint32_t)(0x11183a74)));
  /* 11163675 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 11163678 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1116367a jne 0x11163686 */
  if (!C.zf) goto L_11163686;
L_1116367c:;
  /* 1116367c mov dword ptr [0x11183a74], 0 */
  w32((uint32_t)(0x11183a74), (0x0u));
L_11163686:;
  /* 11163686 mov esp, ebp */
  ESP = (EBP);
  /* 11163688 pop ebp */
  EBP = (pop32());
  /* 11163689 ret  */
  ESPCHK(0x111635d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013690 @ 0x11163690 (804 bytes, 220 insns) */
void f_11163690(void) {
  FTRACE(0x11163690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11163690 push ebp */
  push32((uint32_t)(EBP));
  /* 11163691 mov ebp, esp */
  EBP = (ESP);
  /* 11163693 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11163696 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11163699 push eax */
  push32((uint32_t)(EAX));
  /* 1116369a call 0x11163ff0 */
  push32(0x1116369fu); f_11163ff0();
  /* 1116369f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111636a2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 111636a5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 111636a7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 111636aa push ecx */
  push32((uint32_t)(ECX));
  /* 111636ab mov edx, dword ptr [0x11183a60] */
  EDX = (r32((uint32_t)(0x11183a60)));
  /* 111636b1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 111636b3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111636b5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 111636bb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111636c1 push edx */
  push32((uint32_t)(EDX));
  /* 111636c2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 111636c5 push eax */
  push32((uint32_t)(EAX));
  /* 111636c6 call dword ptr [0x11183a7c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11183a7c))), 0x111636ccu);
  /* 111636cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111636ce jne 0x111636e4 */
  if (!C.zf) goto L_111636e4;
  /* 111636d0 mov dword ptr [0x11183a74], 0 */
  w32((uint32_t)(0x11183a74), (0x0u));
  /* 111636da mov eax, 1 */
  EAX = (0x1u);
  /* 111636df jmp 0x111639ae */
  goto L_111639ae;
L_111636e4:;
  /* 111636e4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 111636e7 push ecx */
  push32((uint32_t)(ECX));
  /* 111636e8 mov edx, dword ptr [0x11183a70] */
  EDX = (r32((uint32_t)(0x11183a70)));
  /* 111636ee push edx */
  push32((uint32_t)(EDX));
  /* 111636ef call 0x11165c30 */
  push32(0x111636f4u); f_11165c30();
  /* 111636f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111636f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111636f9 jne 0x1116381f */
  if (!C.zf) goto L_1116381f;
  /* 111636ff push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11163701 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11163704 push eax */
  push32((uint32_t)(EAX));
  /* 11163705 mov ecx, dword ptr [0x11183a68] */
  ECX = (r32((uint32_t)(0x11183a68)));
  /* 1116370b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1116370d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1116370f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 11163715 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116371b push ecx */
  push32((uint32_t)(ECX));
  /* 1116371c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1116371f push edx */
  push32((uint32_t)(EDX));
  /* 11163720 call dword ptr [0x11183a7c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11183a7c))), 0x11163726u);
  /* 11163726 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11163728 jne 0x1116373e */
  if (!C.zf) goto L_1116373e;
  /* 1116372a mov dword ptr [0x11183a74], 0 */
  w32((uint32_t)(0x11183a74), (0x0u));
  /* 11163734 mov eax, 1 */
  EAX = (0x1u);
  /* 11163739 jmp 0x111639ae */
  goto L_111639ae;
L_1116373e:;
  /* 1116373e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11163741 push eax */
  push32((uint32_t)(EAX));
  /* 11163742 mov ecx, dword ptr [0x11183a6c] */
  ECX = (r32((uint32_t)(0x11183a6c)));
  /* 11163748 push ecx */
  push32((uint32_t)(ECX));
  /* 11163749 call 0x11165c30 */
  push32(0x1116374eu); f_11165c30();
  /* 1116374e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11163751 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11163753 jne 0x11163780 */
  if (!C.zf) goto L_11163780;
  /* 11163755 mov edx, dword ptr [0x11183a74] */
  EDX = (r32((uint32_t)(0x11183a74)));
  /* 1116375b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 11163761 mov dword ptr [0x11183a74], edx */
  w32((uint32_t)(0x11183a74), (EDX));
  /* 11163767 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1116376a mov dword ptr [0x11183a78], eax */
  w32((uint32_t)(0x11183a78), (EAX));
  /* 1116376f mov ecx, dword ptr [0x11183a78] */
  ECX = (r32((uint32_t)(0x11183a78)));
  /* 11163775 mov dword ptr [0x11183a5c], ecx */
  w32((uint32_t)(0x11183a5c), (ECX));
  /* 1116377b jmp 0x1116381f */
  goto L_1116381f;
L_11163780:;
  /* 11163780 mov edx, dword ptr [0x11183a74] */
  EDX = (r32((uint32_t)(0x11183a74)));
  /* 11163786 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11163789 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1116378b jne 0x1116381f */
  if (!C.zf) goto L_1116381f;
  /* 11163791 cmp dword ptr [0x11183a64], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183a64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11163798 je 0x111637ed */
  if (C.zf) goto L_111637ed;
  /* 1116379a mov eax, dword ptr [0x11183a64] */
  EAX = (r32((uint32_t)(0x11183a64)));
  /* 1116379f push eax */
  push32((uint32_t)(EAX));
  /* 111637a0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 111637a3 push ecx */
  push32((uint32_t)(ECX));
  /* 111637a4 mov edx, dword ptr [0x11183a6c] */
  EDX = (r32((uint32_t)(0x11183a6c)));
  /* 111637aa push edx */
  push32((uint32_t)(EDX));
  /* 111637ab call 0x11165d00 */
  push32(0x111637b0u); f_11165d00();
  /* 111637b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111637b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111637b5 jne 0x111637ed */
  if (!C.zf) goto L_111637ed;
  /* 111637b7 mov eax, dword ptr [0x11183a74] */
  EAX = (r32((uint32_t)(0x11183a74)));
  /* 111637bc or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 111637be mov dword ptr [0x11183a74], eax */
  w32((uint32_t)(0x11183a74), (EAX));
  /* 111637c3 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 111637c6 mov dword ptr [0x11183a78], ecx */
  w32((uint32_t)(0x11183a78), (ECX));
  /* 111637cc mov edx, dword ptr [0x11183a6c] */
  EDX = (r32((uint32_t)(0x11183a6c)));
  /* 111637d2 push edx */
  push32((uint32_t)(EDX));
  /* 111637d3 call 0x1115a390 */
  push32(0x111637d8u); f_1115a390();
  /* 111637d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111637db cmp eax, dword ptr [0x11183a64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11183a64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111637e1 jne 0x111637eb */
  if (!C.zf) goto L_111637eb;
  /* 111637e3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 111637e6 mov dword ptr [0x11183a5c], eax */
  w32((uint32_t)(0x11183a5c), (EAX));
L_111637eb:;
  /* 111637eb jmp 0x1116381f */
  goto L_1116381f;
L_111637ed:;
  /* 111637ed mov ecx, dword ptr [0x11183a74] */
  ECX = (r32((uint32_t)(0x11183a74)));
  /* 111637f3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 111637f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111637f8 jne 0x1116381f */
  if (!C.zf) goto L_1116381f;
  /* 111637fa mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 111637fd push edx */
  push32((uint32_t)(EDX));
  /* 111637fe call 0x11163d30 */
  push32(0x11163803u); f_11163d30();
  /* 11163803 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11163806 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11163808 je 0x1116381f */
  if (C.zf) goto L_1116381f;
  /* 1116380a mov eax, dword ptr [0x11183a74] */
  EAX = (r32((uint32_t)(0x11183a74)));
  /* 1116380f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11163811 mov dword ptr [0x11183a74], eax */
  w32((uint32_t)(0x11183a74), (EAX));
  /* 11163816 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11163819 mov dword ptr [0x11183a78], ecx */
  w32((uint32_t)(0x11183a78), (ECX));
L_1116381f:;
  /* 1116381f mov edx, dword ptr [0x11183a74] */
  EDX = (r32((uint32_t)(0x11183a74)));
  /* 11163825 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 1116382b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11163831 je 0x111639a1 */
  if (C.zf) goto L_111639a1;
  /* 11163837 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11163839 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1116383c push eax */
  push32((uint32_t)(EAX));
  /* 1116383d mov ecx, dword ptr [0x11183a68] */
  ECX = (r32((uint32_t)(0x11183a68)));
  /* 11163843 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11163845 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11163847 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1116384d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11163853 push ecx */
  push32((uint32_t)(ECX));
  /* 11163854 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11163857 push edx */
  push32((uint32_t)(EDX));
  /* 11163858 call dword ptr [0x11183a7c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11183a7c))), 0x1116385eu);
  /* 1116385e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11163860 jne 0x11163876 */
  if (!C.zf) goto L_11163876;
  /* 11163862 mov dword ptr [0x11183a74], 0 */
  w32((uint32_t)(0x11183a74), (0x0u));
  /* 1116386c mov eax, 1 */
  EAX = (0x1u);
  /* 11163871 jmp 0x111639ae */
  goto L_111639ae;
L_11163876:;
  /* 11163876 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11163879 push eax */
  push32((uint32_t)(EAX));
  /* 1116387a mov ecx, dword ptr [0x11183a6c] */
  ECX = (r32((uint32_t)(0x11183a6c)));
  /* 11163880 push ecx */
  push32((uint32_t)(ECX));
  /* 11163881 call 0x11165c30 */
  push32(0x11163886u); f_11165c30();
  /* 11163886 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11163889 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1116388b jne 0x11163940 */
  if (!C.zf) goto L_11163940;
  /* 11163891 mov edx, dword ptr [0x11183a74] */
  EDX = (r32((uint32_t)(0x11183a74)));
  /* 11163897 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1116389a mov dword ptr [0x11183a74], edx */
  w32((uint32_t)(0x11183a74), (EDX));
  /* 111638a0 cmp dword ptr [0x11183a68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183a68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111638a7 je 0x111638ca */
  if (C.zf) goto L_111638ca;
  /* 111638a9 mov eax, dword ptr [0x11183a74] */
  EAX = (r32((uint32_t)(0x11183a74)));
  /* 111638ae or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 111638b1 mov dword ptr [0x11183a74], eax */
  w32((uint32_t)(0x11183a74), (EAX));
  /* 111638b6 cmp dword ptr [0x11183a5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183a5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111638bd jne 0x111638c8 */
  if (!C.zf) goto L_111638c8;
  /* 111638bf mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 111638c2 mov dword ptr [0x11183a5c], ecx */
  w32((uint32_t)(0x11183a5c), (ECX));
L_111638c8:;
  /* 111638c8 jmp 0x1116393e */
  goto L_1116393e;
L_111638ca:;
  /* 111638ca cmp dword ptr [0x11183a64], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183a64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111638d1 je 0x1116391f */
  if (C.zf) goto L_1116391f;
  /* 111638d3 mov edx, dword ptr [0x11183a6c] */
  EDX = (r32((uint32_t)(0x11183a6c)));
  /* 111638d9 push edx */
  push32((uint32_t)(EDX));
  /* 111638da call 0x1115a390 */
  push32(0x111638dfu); f_1115a390();
  /* 111638df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111638e2 cmp eax, dword ptr [0x11183a64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11183a64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111638e8 jne 0x1116391f */
  if (!C.zf) goto L_1116391f;
  /* 111638ea push 1 */
  push32((uint32_t)(0x1u));
  /* 111638ec mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 111638ef push eax */
  push32((uint32_t)(EAX));
  /* 111638f0 call 0x11163d80 */
  push32(0x111638f5u); f_11163d80();
  /* 111638f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111638f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111638fa je 0x1116391d */
  if (C.zf) goto L_1116391d;
  /* 111638fc mov ecx, dword ptr [0x11183a74] */
  ECX = (r32((uint32_t)(0x11183a74)));
  /* 11163902 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11163905 mov dword ptr [0x11183a74], ecx */
  w32((uint32_t)(0x11183a74), (ECX));
  /* 1116390b cmp dword ptr [0x11183a5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183a5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11163912 jne 0x1116391d */
  if (!C.zf) goto L_1116391d;
  /* 11163914 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11163917 mov dword ptr [0x11183a5c], edx */
  w32((uint32_t)(0x11183a5c), (EDX));
L_1116391d:;
  /* 1116391d jmp 0x1116393e */
  goto L_1116393e;
L_1116391f:;
  /* 1116391f mov eax, dword ptr [0x11183a74] */
  EAX = (r32((uint32_t)(0x11183a74)));
  /* 11163924 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11163927 mov dword ptr [0x11183a74], eax */
  w32((uint32_t)(0x11183a74), (EAX));
  /* 1116392c cmp dword ptr [0x11183a5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183a5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11163933 jne 0x1116393e */
  if (!C.zf) goto L_1116393e;
  /* 11163935 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11163938 mov dword ptr [0x11183a5c], ecx */
  w32((uint32_t)(0x11183a5c), (ECX));
L_1116393e:;
  /* 1116393e jmp 0x111639a1 */
  goto L_111639a1;
L_11163940:;
  /* 11163940 cmp dword ptr [0x11183a68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183a68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11163947 jne 0x111639a1 */
  if (!C.zf) goto L_111639a1;
  /* 11163949 cmp dword ptr [0x11183a64], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183a64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11163950 je 0x111639a1 */
  if (C.zf) goto L_111639a1;
  /* 11163952 mov edx, dword ptr [0x11183a64] */
  EDX = (r32((uint32_t)(0x11183a64)));
  /* 11163958 push edx */
  push32((uint32_t)(EDX));
  /* 11163959 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1116395c push eax */
  push32((uint32_t)(EAX));
  /* 1116395d mov ecx, dword ptr [0x11183a6c] */
  ECX = (r32((uint32_t)(0x11183a6c)));
  /* 11163963 push ecx */
  push32((uint32_t)(ECX));
  /* 11163964 call 0x11165d00 */
  push32(0x11163969u); f_11165d00();
  /* 11163969 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116396c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1116396e jne 0x111639a1 */
  if (!C.zf) goto L_111639a1;
  /* 11163970 push 0 */
  push32((uint32_t)(0x0u));
  /* 11163972 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11163975 push edx */
  push32((uint32_t)(EDX));
  /* 11163976 call 0x11163d80 */
  push32(0x1116397bu); f_11163d80();
  /* 1116397b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116397e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11163980 je 0x111639a1 */
  if (C.zf) goto L_111639a1;
  /* 11163982 mov eax, dword ptr [0x11183a74] */
  EAX = (r32((uint32_t)(0x11183a74)));
  /* 11163987 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1116398a mov dword ptr [0x11183a74], eax */
  w32((uint32_t)(0x11183a74), (EAX));
  /* 1116398f cmp dword ptr [0x11183a5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183a5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11163996 jne 0x111639a1 */
  if (!C.zf) goto L_111639a1;
  /* 11163998 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1116399b mov dword ptr [0x11183a5c], ecx */
  w32((uint32_t)(0x11183a5c), (ECX));
L_111639a1:;
  /* 111639a1 mov eax, dword ptr [0x11183a74] */
  EAX = (r32((uint32_t)(0x11183a74)));
  /* 111639a6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 111639a9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 111639ab sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111639ad inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_111639ae:;
  /* 111639ae mov esp, ebp */
  ESP = (EBP);
  /* 111639b0 pop ebp */
  EBP = (pop32());
  /* 111639b1 ret 4 */
  ESPCHK(0x11163690u, _esp0);
  ESP += 8; return;
}

/* FUN_100139c0 @ 0x111639c0 (116 bytes, 33 insns) */
void f_111639c0(void) {
  FTRACE(0x111639c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111639c0 push ebp */
  push32((uint32_t)(EBP));
  /* 111639c1 mov ebp, esp */
  EBP = (ESP);
  /* 111639c3 push ecx */
  push32((uint32_t)(ECX));
  /* 111639c4 mov eax, dword ptr [0x11183a6c] */
  EAX = (r32((uint32_t)(0x11183a6c)));
  /* 111639c9 push eax */
  push32((uint32_t)(EAX));
  /* 111639ca call 0x1115a390 */
  push32(0x111639cfu); f_1115a390();
  /* 111639cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111639d2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111639d4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111639d7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 111639da mov dword ptr [0x11183a68], ecx */
  w32((uint32_t)(0x11183a68), (ECX));
  /* 111639e0 cmp dword ptr [0x11183a68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183a68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111639e7 je 0x111639f2 */
  if (C.zf) goto L_111639f2;
  /* 111639e9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 111639f0 jmp 0x11163a04 */
  goto L_11163a04;
L_111639f2:;
  /* 111639f2 mov edx, dword ptr [0x11183a6c] */
  EDX = (r32((uint32_t)(0x11183a6c)));
  /* 111639f8 push edx */
  push32((uint32_t)(EDX));
  /* 111639f9 call 0x11164070 */
  push32(0x111639feu); f_11164070();
  /* 111639fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11163a01 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11163a04:;
  /* 11163a04 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11163a07 mov dword ptr [0x11183a64], eax */
  w32((uint32_t)(0x11183a64), (EAX));
  /* 11163a0c push 1 */
  push32((uint32_t)(0x1u));
  /* 11163a0e push 0x11163a40 */
  push32((uint32_t)(0x11163a40u));
  /* 11163a13 call dword ptr [0x1118630c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118630c))), 0x11163a19u);
  /* 11163a19 mov ecx, dword ptr [0x11183a74] */
  ECX = (r32((uint32_t)(0x11183a74)));
  /* 11163a1f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11163a22 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11163a24 jne 0x11163a30 */
  if (!C.zf) goto L_11163a30;
  /* 11163a26 mov dword ptr [0x11183a74], 0 */
  w32((uint32_t)(0x11183a74), (0x0u));
L_11163a30:;
  /* 11163a30 mov esp, ebp */
  ESP = (EBP);
  /* 11163a32 pop ebp */
  EBP = (pop32());
  /* 11163a33 ret  */
  ESPCHK(0x111639c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013a40 @ 0x11163a40 (287 bytes, 86 insns) */
void f_11163a40(void) {
  FTRACE(0x11163a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11163a40 push ebp */
  push32((uint32_t)(EBP));
  /* 11163a41 mov ebp, esp */
  EBP = (ESP);
  /* 11163a43 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11163a46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11163a49 push eax */
  push32((uint32_t)(EAX));
  /* 11163a4a call 0x11163ff0 */
  push32(0x11163a4fu); f_11163ff0();
  /* 11163a4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11163a52 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11163a55 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11163a57 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11163a5a push ecx */
  push32((uint32_t)(ECX));
  /* 11163a5b mov edx, dword ptr [0x11183a68] */
  EDX = (r32((uint32_t)(0x11183a68)));
  /* 11163a61 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11163a63 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11163a65 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 11163a6b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11163a71 push edx */
  push32((uint32_t)(EDX));
  /* 11163a72 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11163a75 push eax */
  push32((uint32_t)(EAX));
  /* 11163a76 call dword ptr [0x11183a7c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11183a7c))), 0x11163a7cu);
  /* 11163a7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11163a7e jne 0x11163a94 */
  if (!C.zf) goto L_11163a94;
  /* 11163a80 mov dword ptr [0x11183a74], 0 */
  w32((uint32_t)(0x11183a74), (0x0u));
  /* 11163a8a mov eax, 1 */
  EAX = (0x1u);
  /* 11163a8f jmp 0x11163b59 */
  goto L_11163b59;
L_11163a94:;
  /* 11163a94 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11163a97 push ecx */
  push32((uint32_t)(ECX));
  /* 11163a98 mov edx, dword ptr [0x11183a6c] */
  EDX = (r32((uint32_t)(0x11183a6c)));
  /* 11163a9e push edx */
  push32((uint32_t)(EDX));
  /* 11163a9f call 0x11165c30 */
  push32(0x11163aa4u); f_11165c30();
  /* 11163aa4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11163aa7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11163aa9 jne 0x11163ae9 */
  if (!C.zf) goto L_11163ae9;
  /* 11163aab cmp dword ptr [0x11183a68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183a68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11163ab2 jne 0x11163ac6 */
  if (!C.zf) goto L_11163ac6;
  /* 11163ab4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11163ab6 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11163ab9 push eax */
  push32((uint32_t)(EAX));
  /* 11163aba call 0x11163d80 */
  push32(0x11163abfu); f_11163d80();
  /* 11163abf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11163ac2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11163ac4 je 0x11163ae7 */
  if (C.zf) goto L_11163ae7;
L_11163ac6:;
  /* 11163ac6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11163ac9 mov dword ptr [0x11183a78], ecx */
  w32((uint32_t)(0x11183a78), (ECX));
  /* 11163acf mov edx, dword ptr [0x11183a78] */
  EDX = (r32((uint32_t)(0x11183a78)));
  /* 11163ad5 mov dword ptr [0x11183a5c], edx */
  w32((uint32_t)(0x11183a5c), (EDX));
  /* 11163adb mov eax, dword ptr [0x11183a74] */
  EAX = (r32((uint32_t)(0x11183a74)));
  /* 11163ae0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11163ae2 mov dword ptr [0x11183a74], eax */
  w32((uint32_t)(0x11183a74), (EAX));
L_11163ae7:;
  /* 11163ae7 jmp 0x11163b4c */
  goto L_11163b4c;
L_11163ae9:;
  /* 11163ae9 cmp dword ptr [0x11183a68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183a68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11163af0 jne 0x11163b4c */
  if (!C.zf) goto L_11163b4c;
  /* 11163af2 cmp dword ptr [0x11183a64], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183a64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11163af9 je 0x11163b4c */
  if (C.zf) goto L_11163b4c;
  /* 11163afb mov ecx, dword ptr [0x11183a64] */
  ECX = (r32((uint32_t)(0x11183a64)));
  /* 11163b01 push ecx */
  push32((uint32_t)(ECX));
  /* 11163b02 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 11163b05 push edx */
  push32((uint32_t)(EDX));
  /* 11163b06 mov eax, dword ptr [0x11183a6c] */
  EAX = (r32((uint32_t)(0x11183a6c)));
  /* 11163b0b push eax */
  push32((uint32_t)(EAX));
  /* 11163b0c call 0x11165d00 */
  push32(0x11163b11u); f_11165d00();
  /* 11163b11 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11163b14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11163b16 jne 0x11163b4c */
  if (!C.zf) goto L_11163b4c;
  /* 11163b18 push 0 */
  push32((uint32_t)(0x0u));
  /* 11163b1a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11163b1d push ecx */
  push32((uint32_t)(ECX));
  /* 11163b1e call 0x11163d80 */
  push32(0x11163b23u); f_11163d80();
  /* 11163b23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11163b26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11163b28 je 0x11163b4c */
  if (C.zf) goto L_11163b4c;
  /* 11163b2a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11163b2d mov dword ptr [0x11183a78], edx */
  w32((uint32_t)(0x11183a78), (EDX));
  /* 11163b33 mov eax, dword ptr [0x11183a78] */
  EAX = (r32((uint32_t)(0x11183a78)));
  /* 11163b38 mov dword ptr [0x11183a5c], eax */
  w32((uint32_t)(0x11183a5c), (EAX));
  /* 11163b3d mov ecx, dword ptr [0x11183a74] */
  ECX = (r32((uint32_t)(0x11183a74)));
  /* 11163b43 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11163b46 mov dword ptr [0x11183a74], ecx */
  w32((uint32_t)(0x11183a74), (ECX));
L_11163b4c:;
  /* 11163b4c mov eax, dword ptr [0x11183a74] */
  EAX = (r32((uint32_t)(0x11183a74)));
  /* 11163b51 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11163b54 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11163b56 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11163b58 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11163b59:;
  /* 11163b59 mov esp, ebp */
  ESP = (EBP);
  /* 11163b5b pop ebp */
  EBP = (pop32());
  /* 11163b5c ret 4 */
  ESPCHK(0x11163a40u, _esp0);
  ESP += 8; return;
}

/* FUN_10013b60 @ 0x11163b60 (69 bytes, 20 insns) */
void f_11163b60(void) {
  FTRACE(0x11163b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11163b60 push ebp */
  push32((uint32_t)(EBP));
  /* 11163b61 mov ebp, esp */
  EBP = (ESP);
  /* 11163b63 mov eax, dword ptr [0x11183a70] */
  EAX = (r32((uint32_t)(0x11183a70)));
  /* 11163b68 push eax */
  push32((uint32_t)(EAX));
  /* 11163b69 call 0x1115a390 */
  push32(0x11163b6eu); f_1115a390();
  /* 11163b6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11163b71 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11163b73 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11163b76 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11163b79 mov dword ptr [0x11183a60], ecx */
  w32((uint32_t)(0x11183a60), (ECX));
  /* 11163b7f push 1 */
  push32((uint32_t)(0x1u));
  /* 11163b81 push 0x11163bb0 */
  push32((uint32_t)(0x11163bb0u));
  /* 11163b86 call dword ptr [0x1118630c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118630c))), 0x11163b8cu);
  /* 11163b8c mov edx, dword ptr [0x11183a74] */
  EDX = (r32((uint32_t)(0x11183a74)));
  /* 11163b92 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11163b95 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11163b97 jne 0x11163ba3 */
  if (!C.zf) goto L_11163ba3;
  /* 11163b99 mov dword ptr [0x11183a74], 0 */
  w32((uint32_t)(0x11183a74), (0x0u));
L_11163ba3:;
  /* 11163ba3 pop ebp */
  EBP = (pop32());
  /* 11163ba4 ret  */
  ESPCHK(0x11163b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10013bb0 @ 0x11163bb0 (172 bytes, 54 insns) */
void f_11163bb0(void) {
  FTRACE(0x11163bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11163bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11163bb1 mov ebp, esp */
  EBP = (ESP);
  /* 11163bb3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11163bb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11163bb9 push eax */
  push32((uint32_t)(EAX));
  /* 11163bba call 0x11163ff0 */
  push32(0x11163bbfu); f_11163ff0();
  /* 11163bbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11163bc2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11163bc5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11163bc7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11163bca push ecx */
  push32((uint32_t)(ECX));
  /* 11163bcb mov edx, dword ptr [0x11183a60] */
  EDX = (r32((uint32_t)(0x11183a60)));
  /* 11163bd1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11163bd3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11163bd5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 11163bdb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11163be1 push edx */
  push32((uint32_t)(EDX));
  /* 11163be2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11163be5 push eax */
  push32((uint32_t)(EAX));
  /* 11163be6 call dword ptr [0x11183a7c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11183a7c))), 0x11163becu);
  /* 11163bec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11163bee jne 0x11163c01 */
  if (!C.zf) goto L_11163c01;
  /* 11163bf0 mov dword ptr [0x11183a74], 0 */
  w32((uint32_t)(0x11183a74), (0x0u));
  /* 11163bfa mov eax, 1 */
  EAX = (0x1u);
  /* 11163bff jmp 0x11163c56 */
  goto L_11163c56;
L_11163c01:;
  /* 11163c01 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11163c04 push ecx */
  push32((uint32_t)(ECX));
  /* 11163c05 mov edx, dword ptr [0x11183a70] */
  EDX = (r32((uint32_t)(0x11183a70)));
  /* 11163c0b push edx */
  push32((uint32_t)(EDX));
  /* 11163c0c call 0x11165c30 */
  push32(0x11163c11u); f_11165c30();
  /* 11163c11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11163c14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11163c16 jne 0x11163c49 */
  if (!C.zf) goto L_11163c49;
  /* 11163c18 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11163c1b push eax */
  push32((uint32_t)(EAX));
  /* 11163c1c call 0x11163d30 */
  push32(0x11163c21u); f_11163d30();
  /* 11163c21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11163c24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11163c26 je 0x11163c49 */
  if (C.zf) goto L_11163c49;
  /* 11163c28 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11163c2b mov dword ptr [0x11183a78], ecx */
  w32((uint32_t)(0x11183a78), (ECX));
  /* 11163c31 mov edx, dword ptr [0x11183a78] */
  EDX = (r32((uint32_t)(0x11183a78)));
  /* 11163c37 mov dword ptr [0x11183a5c], edx */
  w32((uint32_t)(0x11183a5c), (EDX));
  /* 11163c3d mov eax, dword ptr [0x11183a74] */
  EAX = (r32((uint32_t)(0x11183a74)));
  /* 11163c42 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11163c44 mov dword ptr [0x11183a74], eax */
  w32((uint32_t)(0x11183a74), (EAX));
L_11163c49:;
  /* 11163c49 mov eax, dword ptr [0x11183a74] */
  EAX = (r32((uint32_t)(0x11183a74)));
  /* 11163c4e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11163c51 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11163c53 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11163c55 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11163c56:;
  /* 11163c56 mov esp, ebp */
  ESP = (EBP);
  /* 11163c58 pop ebp */
  EBP = (pop32());
  /* 11163c59 ret 4 */
  ESPCHK(0x11163bb0u, _esp0);
  ESP += 8; return;
}

/* FUN_10013c60 @ 0x11163c60 (43 bytes, 11 insns) */
void f_11163c60(void) {
  FTRACE(0x11163c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11163c60 push ebp */
  push32((uint32_t)(EBP));
  /* 11163c61 mov ebp, esp */
  EBP = (ESP);
  /* 11163c63 mov eax, dword ptr [0x11183a74] */
  EAX = (r32((uint32_t)(0x11183a74)));
  /* 11163c68 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 11163c6d mov dword ptr [0x11183a74], eax */
  w32((uint32_t)(0x11183a74), (EAX));
  /* 11163c72 call dword ptr [0x11186308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186308))), 0x11163c78u);
  /* 11163c78 mov dword ptr [0x11183a78], eax */
  w32((uint32_t)(0x11183a78), (EAX));
  /* 11163c7d mov ecx, dword ptr [0x11183a78] */
  ECX = (r32((uint32_t)(0x11183a78)));
  /* 11163c83 mov dword ptr [0x11183a5c], ecx */
  w32((uint32_t)(0x11183a5c), (ECX));
  /* 11163c89 pop ebp */
  EBP = (pop32());
  /* 11163c8a ret  */
  ESPCHK(0x11163c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10013c90 @ 0x11163c90 (155 bytes, 57 insns) */
void f_11163c90(void) {
  FTRACE(0x11163c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11163c90 push ebp */
  push32((uint32_t)(EBP));
  /* 11163c91 mov ebp, esp */
  EBP = (ESP);
  /* 11163c93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11163c96 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11163c9a je 0x11163cbb */
  if (C.zf) goto L_11163cbb;
  /* 11163c9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11163c9f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11163ca2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11163ca4 je 0x11163cbb */
  if (C.zf) goto L_11163cbb;
  /* 11163ca6 push 0x1117fbac */
  push32((uint32_t)(0x1117fbacu));
  /* 11163cab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11163cae push edx */
  push32((uint32_t)(EDX));
  /* 11163caf call 0x111631f0 */
  push32(0x11163cb4u); f_111631f0();
  /* 11163cb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11163cb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11163cb9 jne 0x11163ce3 */
  if (!C.zf) goto L_11163ce3;
L_11163cbb:;
  /* 11163cbb push 8 */
  push32((uint32_t)(0x8u));
  /* 11163cbd lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11163cc0 push eax */
  push32((uint32_t)(EAX));
  /* 11163cc1 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11163cc6 mov ecx, dword ptr [0x11183a78] */
  ECX = (r32((uint32_t)(0x11183a78)));
  /* 11163ccc push ecx */
  push32((uint32_t)(ECX));
  /* 11163ccd call dword ptr [0x11183a7c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11183a7c))), 0x11163cd3u);
  /* 11163cd3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11163cd5 jne 0x11163cdb */
  if (!C.zf) goto L_11163cdb;
  /* 11163cd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11163cd9 jmp 0x11163d27 */
  goto L_11163d27;
L_11163cdb:;
  /* 11163cdb lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 11163cde mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11163ce1 jmp 0x11163d1b */
  goto L_11163d1b;
L_11163ce3:;
  /* 11163ce3 push 0x1117fba8 */
  push32((uint32_t)(0x1117fba8u));
  /* 11163ce8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11163ceb push eax */
  push32((uint32_t)(EAX));
  /* 11163cec call 0x111631f0 */
  push32(0x11163cf1u); f_111631f0();
  /* 11163cf1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11163cf4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11163cf6 jne 0x11163d1b */
  if (!C.zf) goto L_11163d1b;
  /* 11163cf8 push 8 */
  push32((uint32_t)(0x8u));
  /* 11163cfa lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11163cfd push ecx */
  push32((uint32_t)(ECX));
  /* 11163cfe push 0xb */
  push32((uint32_t)(0xbu));
  /* 11163d00 mov edx, dword ptr [0x11183a78] */
  EDX = (r32((uint32_t)(0x11183a78)));
  /* 11163d06 push edx */
  push32((uint32_t)(EDX));
  /* 11163d07 call dword ptr [0x11183a7c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11183a7c))), 0x11163d0du);
  /* 11163d0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11163d0f jne 0x11163d15 */
  if (!C.zf) goto L_11163d15;
  /* 11163d11 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11163d13 jmp 0x11163d27 */
  goto L_11163d27;
L_11163d15:;
  /* 11163d15 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11163d18 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11163d1b:;
  /* 11163d1b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11163d1e push ecx */
  push32((uint32_t)(ECX));
  /* 11163d1f call 0x11165e10 */
  push32(0x11163d24u); f_11165e10();
  /* 11163d24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11163d27:;
  /* 11163d27 mov esp, ebp */
  ESP = (EBP);
  /* 11163d29 pop ebp */
  EBP = (pop32());
  /* 11163d2a ret  */
  ESPCHK(0x11163c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10013d30 @ 0x11163d30 (79 bytes, 26 insns) */
void f_11163d30(void) {
  FTRACE(0x11163d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11163d30 push ebp */
  push32((uint32_t)(EBP));
  /* 11163d31 mov ebp, esp */
  EBP = (ESP);
  /* 11163d33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11163d36 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 11163d3a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11163d3e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11163d45 jmp 0x11163d50 */
  goto L_11163d50;
L_11163d47:;
  /* 11163d47 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11163d4a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11163d4d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11163d50:;
  /* 11163d50 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11163d54 jae 0x11163d76 */
  if (!C.cf) goto L_11163d76;
  /* 11163d56 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11163d59 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11163d5f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11163d62 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11163d64 mov cx, word ptr [eax*2 + 0x111829c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x111829c4)));
  /* 11163d6c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11163d6e jne 0x11163d74 */
  if (!C.zf) goto L_11163d74;
  /* 11163d70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11163d72 jmp 0x11163d7b */
  goto L_11163d7b;
L_11163d74:;
  /* 11163d74 jmp 0x11163d47 */
  goto L_11163d47;
L_11163d76:;
  /* 11163d76 mov eax, 1 */
  EAX = (0x1u);
L_11163d7b:;
  /* 11163d7b mov esp, ebp */
  ESP = (EBP);
  /* 11163d7d pop ebp */
  EBP = (pop32());
  /* 11163d7e ret  */
  ESPCHK(0x11163d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10013d80 @ 0x11163d80 (135 bytes, 48 insns) */
void f_11163d80(void) {
  FTRACE(0x11163d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11163d80 push ebp */
  push32((uint32_t)(EBP));
  /* 11163d81 mov ebp, esp */
  EBP = (ESP);
  /* 11163d83 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11163d86 push esi */
  push32((uint32_t)(ESI));
  /* 11163d87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11163d8a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11163d8f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 11163d94 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11163d99 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 11163d9c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11163da1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11163da4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11163da6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 11163da9 push ecx */
  push32((uint32_t)(ECX));
  /* 11163daa push 1 */
  push32((uint32_t)(0x1u));
  /* 11163dac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11163daf push edx */
  push32((uint32_t)(EDX));
  /* 11163db0 call dword ptr [0x11183a7c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11183a7c))), 0x11163db6u);
  /* 11163db6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11163db8 jne 0x11163dbe */
  if (!C.zf) goto L_11163dbe;
  /* 11163dba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11163dbc jmp 0x11163e02 */
  goto L_11163e02;
L_11163dbe:;
  /* 11163dbe lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 11163dc1 push eax */
  push32((uint32_t)(EAX));
  /* 11163dc2 call 0x11163ff0 */
  push32(0x11163dc7u); f_11163ff0();
  /* 11163dc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11163dca cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11163dcd je 0x11163dfd */
  if (C.zf) goto L_11163dfd;
  /* 11163dcf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11163dd3 je 0x11163dfd */
  if (C.zf) goto L_11163dfd;
  /* 11163dd5 mov ecx, dword ptr [0x11183a6c] */
  ECX = (r32((uint32_t)(0x11183a6c)));
  /* 11163ddb push ecx */
  push32((uint32_t)(ECX));
  /* 11163ddc call 0x11164070 */
  push32(0x11163de1u); f_11164070();
  /* 11163de1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11163de4 mov esi, eax */
  ESI = (EAX);
  /* 11163de6 mov edx, dword ptr [0x11183a6c] */
  EDX = (r32((uint32_t)(0x11183a6c)));
  /* 11163dec push edx */
  push32((uint32_t)(EDX));
  /* 11163ded call 0x1115a390 */
  push32(0x11163df2u); f_1115a390();
  /* 11163df2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11163df5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11163df7 jne 0x11163dfd */
  if (!C.zf) goto L_11163dfd;
  /* 11163df9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11163dfb jmp 0x11163e02 */
  goto L_11163e02;
L_11163dfd:;
  /* 11163dfd mov eax, 1 */
  EAX = (0x1u);
L_11163e02:;
  /* 11163e02 pop esi */
  ESI = (pop32());
  /* 11163e03 mov esp, ebp */
  ESP = (EBP);
  /* 11163e05 pop ebp */
  EBP = (pop32());
  /* 11163e06 ret  */
  ESPCHK(0x11163d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10013e10 @ 0x11163e10 (77 bytes, 18 insns) */
void f_11163e10(void) {
  FTRACE(0x11163e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11163e10 push ebp */
  push32((uint32_t)(EBP));
  /* 11163e11 mov ebp, esp */
  EBP = (ESP);
  /* 11163e13 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11163e19 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 11163e23 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 11163e29 push eax */
  push32((uint32_t)(EAX));
  /* 11163e2a call dword ptr [0x11186304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186304))), 0x11163e30u);
  /* 11163e30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11163e32 je 0x11163e49 */
  if (C.zf) goto L_11163e49;
  /* 11163e34 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11163e3b jne 0x11163e49 */
  if (!C.zf) goto L_11163e49;
  /* 11163e3d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 11163e47 jmp 0x11163e53 */
  goto L_11163e53;
L_11163e49:;
  /* 11163e49 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_11163e53:;
  /* 11163e53 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11163e59 mov esp, ebp */
  ESP = (EBP);
  /* 11163e5b pop ebp */
  EBP = (pop32());
  /* 11163e5c ret  */
  ESPCHK(0x11163e10u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x11163e60 (388 bytes, 118 insns) */
void f_11163e60(void) {
  FTRACE(0x11163e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11163e60 push ebp */
  push32((uint32_t)(EBP));
  /* 11163e61 mov ebp, esp */
  EBP = (ESP);
  /* 11163e63 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11163e66 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11163e6d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 11163e74 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11163e7b:;
  /* 11163e7b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11163e7e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11163e81 jg 0x11163fc8 */
  if ((!C.zf&&C.sf==C.of)) goto L_11163fc8;
  /* 11163e87 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11163e8a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11163e8d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11163e8e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11163e90 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11163e92 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11163e95 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11163e98 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11163e9b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11163e9e cmp edx, dword ptr [ecx + 0x11182520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x11182520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11163ea4 jne 0x11163f9e */
  if (!C.zf) goto L_11163f9e;
  /* 11163eaa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11163ead mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11163eb0 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11163eb4 ja 0x11163ed7 */
  if ((!C.cf&&!C.zf)) goto L_11163ed7;
  /* 11163eb6 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11163eba je 0x11163f49 */
  if (C.zf) goto L_11163f49;
  /* 11163ec0 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11163ec4 je 0x11163ef4 */
  if (C.zf) goto L_11163ef4;
  /* 11163ec6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11163eca je 0x11163f16 */
  if (C.zf) goto L_11163f16;
  /* 11163ecc cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11163ed0 je 0x11163f38 */
  if (C.zf) goto L_11163f38;
  /* 11163ed2 jmp 0x11163f68 */
  goto L_11163f68;
L_11163ed7:;
  /* 11163ed7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11163ede je 0x11163f05 */
  if (C.zf) goto L_11163f05;
  /* 11163ee0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11163ee7 je 0x11163f27 */
  if (C.zf) goto L_11163f27;
  /* 11163ee9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11163ef0 je 0x11163f5a */
  if (C.zf) goto L_11163f5a;
  /* 11163ef2 jmp 0x11163f68 */
  goto L_11163f68;
L_11163ef4:;
  /* 11163ef4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11163ef7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11163efa add ecx, 0x11182524 */
  { uint32_t _a=(ECX),_b=(0x11182524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11163f00 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11163f03 jmp 0x11163f68 */
  goto L_11163f68;
L_11163f05:;
  /* 11163f05 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11163f08 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11163f0b mov eax, dword ptr [edx + 0x1118252c] */
  EAX = (r32((uint32_t)(EDX + 0x1118252c)));
  /* 11163f11 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11163f14 jmp 0x11163f68 */
  goto L_11163f68;
L_11163f16:;
  /* 11163f16 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11163f19 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11163f1c add ecx, 0x11182530 */
  { uint32_t _a=(ECX),_b=(0x11182530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11163f22 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11163f25 jmp 0x11163f68 */
  goto L_11163f68;
L_11163f27:;
  /* 11163f27 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11163f2a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11163f2d mov eax, dword ptr [edx + 0x11182534] */
  EAX = (r32((uint32_t)(EDX + 0x11182534)));
  /* 11163f33 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11163f36 jmp 0x11163f68 */
  goto L_11163f68;
L_11163f38:;
  /* 11163f38 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11163f3b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11163f3e add ecx, 0x11182538 */
  { uint32_t _a=(ECX),_b=(0x11182538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11163f44 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11163f47 jmp 0x11163f68 */
  goto L_11163f68;
L_11163f49:;
  /* 11163f49 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11163f4c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11163f4f add edx, 0x1118253c */
  { uint32_t _a=(EDX),_b=(0x1118253cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11163f55 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11163f58 jmp 0x11163f68 */
  goto L_11163f68;
L_11163f5a:;
  /* 11163f5a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11163f5d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11163f60 add eax, 0x11182544 */
  { uint32_t _a=(EAX),_b=(0x11182544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11163f65 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11163f68:;
  /* 11163f68 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11163f6c je 0x11163f74 */
  if (C.zf) goto L_11163f74;
  /* 11163f6e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11163f72 jge 0x11163f76 */
  if ((C.sf==C.of)) goto L_11163f76;
L_11163f74:;
  /* 11163f74 jmp 0x11163fc8 */
  goto L_11163fc8;
L_11163f76:;
  /* 11163f76 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11163f79 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11163f7c push ecx */
  push32((uint32_t)(ECX));
  /* 11163f7d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11163f80 push edx */
  push32((uint32_t)(EDX));
  /* 11163f81 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11163f84 push eax */
  push32((uint32_t)(EAX));
  /* 11163f85 call 0x1115ad80 */
  push32(0x11163f8au); f_1115ad80();
  /* 11163f8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11163f8d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11163f90 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11163f93 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 11163f97 mov eax, 1 */
  EAX = (0x1u);
  /* 11163f9c jmp 0x11163fde */
  goto L_11163fde;
L_11163f9e:;
  /* 11163f9e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11163fa1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11163fa4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11163fa7 cmp eax, dword ptr [edx + 0x11182520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x11182520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11163fad jae 0x11163fba */
  if (!C.cf) goto L_11163fba;
  /* 11163faf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11163fb2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11163fb5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11163fb8 jmp 0x11163fc3 */
  goto L_11163fc3;
L_11163fba:;
  /* 11163fba mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11163fbd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11163fc0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11163fc3:;
  /* 11163fc3 jmp 0x11163e7b */
  goto L_11163e7b;
L_11163fc8:;
  /* 11163fc8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11163fcb push eax */
  push32((uint32_t)(EAX));
  /* 11163fcc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11163fcf push ecx */
  push32((uint32_t)(ECX));
  /* 11163fd0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11163fd3 push edx */
  push32((uint32_t)(EDX));
  /* 11163fd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11163fd7 push eax */
  push32((uint32_t)(EAX));
  /* 11163fd8 call dword ptr [0x11186310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186310))), 0x11163fdeu);
L_11163fde:;
  /* 11163fde mov esp, ebp */
  ESP = (EBP);
  /* 11163fe0 pop ebp */
  EBP = (pop32());
  /* 11163fe1 ret 0x10 */
  ESPCHK(0x11163e60u, _esp0);
  ESP += 20; return;
}

/* FUN_10013ff0 @ 0x11163ff0 (118 bytes, 42 insns) */
void f_11163ff0(void) {
  FTRACE(0x11163ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11163ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 11163ff1 mov ebp, esp */
  EBP = (ESP);
  /* 11163ff3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11163ff6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11163ffd:;
  /* 11163ffd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11164000 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11164002 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11164005 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11164009 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116400c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116400f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11164012 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11164014 je 0x1116405f */
  if (C.zf) goto L_1116405f;
  /* 11164016 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1116401a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116401d jl 0x11164032 */
  if ((C.sf!=C.of)) goto L_11164032;
  /* 1116401f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11164023 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11164026 jg 0x11164032 */
  if ((!C.zf&&C.sf==C.of)) goto L_11164032;
  /* 11164028 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1116402b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1116402d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11164030 jmp 0x1116404c */
  goto L_1116404c;
L_11164032:;
  /* 11164032 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11164036 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11164039 jl 0x1116404c */
  if ((C.sf!=C.of)) goto L_1116404c;
  /* 1116403b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1116403f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11164042 jg 0x1116404c */
  if ((!C.zf&&C.sf==C.of)) goto L_1116404c;
  /* 11164044 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11164047 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11164049 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_1116404c:;
  /* 1116404c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1116404f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11164052 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11164056 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1116405a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1116405d jmp 0x11163ffd */
  goto L_11163ffd;
L_1116405f:;
  /* 1116405f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11164062 mov esp, ebp */
  ESP = (EBP);
  /* 11164064 pop ebp */
  EBP = (pop32());
  /* 11164065 ret  */
  ESPCHK(0x11163ff0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x11164070 (101 bytes, 36 insns) */
void f_11164070(void) {
  FTRACE(0x11164070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11164070 push ebp */
  push32((uint32_t)(EBP));
  /* 11164071 mov ebp, esp */
  EBP = (ESP);
  /* 11164073 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11164076 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1116407d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11164080 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11164082 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11164085 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11164088 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116408b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_1116408e:;
  /* 1116408e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11164092 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11164095 jl 0x111640a0 */
  if ((C.sf!=C.of)) goto L_111640a0;
  /* 11164097 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1116409b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116409e jle 0x111640b2 */
  if ((C.zf||C.sf!=C.of)) goto L_111640b2;
L_111640a0:;
  /* 111640a0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 111640a4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111640a7 jl 0x111640ce */
  if ((C.sf!=C.of)) goto L_111640ce;
  /* 111640a9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 111640ad cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111640b0 jg 0x111640ce */
  if ((!C.zf&&C.sf==C.of)) goto L_111640ce;
L_111640b2:;
  /* 111640b2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111640b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111640b8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111640bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111640be mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111640c0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 111640c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111640c6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111640c9 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 111640cc jmp 0x1116408e */
  goto L_1116408e;
L_111640ce:;
  /* 111640ce mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111640d1 mov esp, ebp */
  ESP = (EBP);
  /* 111640d3 pop ebp */
  EBP = (pop32());
  /* 111640d4 ret  */
  ESPCHK(0x11164070u, _esp0);
  ESP += 4; return;
}

/* FUN_100140e0 @ 0x111640e0 (122 bytes, 39 insns) */
void f_111640e0(void) {
  FTRACE(0x111640e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111640e0 push ebp */
  push32((uint32_t)(EBP));
  /* 111640e1 mov ebp, esp */
  EBP = (ESP);
  /* 111640e3 push ecx */
  push32((uint32_t)(ECX));
  /* 111640e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111640e7 cmp eax, dword ptr [0x111852fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x111852fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111640ed jae 0x11164111 */
  if (!C.cf) goto L_11164111;
  /* 111640ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111640f2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 111640f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111640f8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 111640fb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111640fe mov eax, dword ptr [ecx*4 + 0x111851c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x111851c0)));
  /* 11164105 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1116410a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1116410d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1116410f jne 0x1116412c */
  if (!C.zf) goto L_1116412c;
L_11164111:;
  /* 11164111 call 0x1115f430 */
  push32(0x11164116u); f_1115f430();
  /* 11164116 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1116411c call 0x1115f440 */
  push32(0x11164121u); f_1115f440();
  /* 11164121 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11164127 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1116412a jmp 0x11164156 */
  goto L_11164156;
L_1116412c:;
  /* 1116412c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116412f push edx */
  push32((uint32_t)(EDX));
  /* 11164130 call 0x11160c50 */
  push32(0x11164135u); f_11160c50();
  /* 11164135 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164138 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116413b push eax */
  push32((uint32_t)(EAX));
  /* 1116413c call 0x11164160 */
  push32(0x11164141u); f_11164160();
  /* 11164141 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164144 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11164147 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116414a push ecx */
  push32((uint32_t)(ECX));
  /* 1116414b call 0x11160ce0 */
  push32(0x11164150u); f_11160ce0();
  /* 11164150 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164153 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11164156:;
  /* 11164156 mov esp, ebp */
  ESP = (EBP);
  /* 11164158 pop ebp */
  EBP = (pop32());
  /* 11164159 ret  */
  ESPCHK(0x111640e0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x11164160 (170 bytes, 59 insns) */
void f_11164160(void) {
  FTRACE(0x11164160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11164160 push ebp */
  push32((uint32_t)(EBP));
  /* 11164161 mov ebp, esp */
  EBP = (ESP);
  /* 11164163 push ecx */
  push32((uint32_t)(ECX));
  /* 11164164 push esi */
  push32((uint32_t)(ESI));
  /* 11164165 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11164168 push eax */
  push32((uint32_t)(EAX));
  /* 11164169 call 0x11160ad0 */
  push32(0x1116416eu); f_11160ad0();
  /* 1116416e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164171 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11164174 je 0x111641b3 */
  if (C.zf) goto L_111641b3;
  /* 11164176 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116417a je 0x11164182 */
  if (C.zf) goto L_11164182;
  /* 1116417c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11164180 jne 0x1116419c */
  if (!C.zf) goto L_1116419c;
L_11164182:;
  /* 11164182 push 1 */
  push32((uint32_t)(0x1u));
  /* 11164184 call 0x11160ad0 */
  push32(0x11164189u); f_11160ad0();
  /* 11164189 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116418c mov esi, eax */
  ESI = (EAX);
  /* 1116418e push 2 */
  push32((uint32_t)(0x2u));
  /* 11164190 call 0x11160ad0 */
  push32(0x11164195u); f_11160ad0();
  /* 11164195 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164198 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116419a je 0x111641b3 */
  if (C.zf) goto L_111641b3;
L_1116419c:;
  /* 1116419c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116419f push ecx */
  push32((uint32_t)(ECX));
  /* 111641a0 call 0x11160ad0 */
  push32(0x111641a5u); f_11160ad0();
  /* 111641a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111641a8 push eax */
  push32((uint32_t)(EAX));
  /* 111641a9 call dword ptr [0x11186300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186300))), 0x111641afu);
  /* 111641af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111641b1 je 0x111641bc */
  if (C.zf) goto L_111641bc;
L_111641b3:;
  /* 111641b3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 111641ba jmp 0x111641c5 */
  goto L_111641c5;
L_111641bc:;
  /* 111641bc call dword ptr [0x11186400] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186400))), 0x111641c2u);
  /* 111641c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_111641c5:;
  /* 111641c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111641c8 push edx */
  push32((uint32_t)(EDX));
  /* 111641c9 call 0x111609f0 */
  push32(0x111641ceu); f_111609f0();
  /* 111641ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111641d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111641d4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 111641d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111641da and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 111641dd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111641e0 mov edx, dword ptr [eax*4 + 0x111851c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x111851c0)));
  /* 111641e7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 111641ec cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111641f0 je 0x11164203 */
  if (C.zf) goto L_11164203;
  /* 111641f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111641f5 push eax */
  push32((uint32_t)(EAX));
  /* 111641f6 call 0x1115f390 */
  push32(0x111641fbu); f_1115f390();
  /* 111641fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111641fe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11164201 jmp 0x11164205 */
  goto L_11164205;
L_11164203:;
  /* 11164203 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11164205:;
  /* 11164205 pop esi */
  ESI = (pop32());
  /* 11164206 mov esp, ebp */
  ESP = (EBP);
  /* 11164208 pop ebp */
  EBP = (pop32());
  /* 11164209 ret  */
  ESPCHK(0x11164160u, _esp0);
  ESP += 4; return;
}

/* FUN_10014210 @ 0x11164210 (146 bytes, 52 insns) */
void f_11164210(void) {
  FTRACE(0x11164210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11164210 push ebp */
  push32((uint32_t)(EBP));
  /* 11164211 mov ebp, esp */
  EBP = (ESP);
  /* 11164213 push ebx */
  push32((uint32_t)(EBX));
  /* 11164214 push esi */
  push32((uint32_t)(ESI));
  /* 11164215 push edi */
  push32((uint32_t)(EDI));
L_11164216:;
  /* 11164216 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116421a jne 0x1116423a */
  if (!C.zf) goto L_1116423a;
  /* 1116421c push 0x1117f4e8 */
  push32((uint32_t)(0x1117f4e8u));
  /* 11164221 push 0 */
  push32((uint32_t)(0x0u));
  /* 11164223 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11164225 push 0x1117fbb0 */
  push32((uint32_t)(0x1117fbb0u));
  /* 1116422a push 2 */
  push32((uint32_t)(0x2u));
  /* 1116422c call 0x11156620 */
  push32(0x11164231u); f_11156620();
  /* 11164231 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164234 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11164237 jne 0x1116423a */
  if (!C.zf) goto L_1116423a;
  /* 11164239 int3  */
  x86_unimpl("int3 @ 0x11164239");
L_1116423a:;
  /* 1116423a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1116423c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1116423e jne 0x11164216 */
  if (!C.zf) goto L_11164216;
  /* 11164240 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11164243 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11164246 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 1116424c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1116424e je 0x1116429d */
  if (C.zf) goto L_1116429d;
  /* 11164250 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11164253 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11164256 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11164259 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1116425b je 0x1116429d */
  if (C.zf) goto L_1116429d;
  /* 1116425d push 2 */
  push32((uint32_t)(0x2u));
  /* 1116425f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11164262 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11164265 push eax */
  push32((uint32_t)(EAX));
  /* 11164266 call 0x11157ff0 */
  push32(0x1116426bu); f_11157ff0();
  /* 1116426b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116426e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11164271 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11164274 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 1116427a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116427d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11164280 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11164283 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11164289 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1116428c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11164293 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11164296 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_1116429d:;
  /* 1116429d pop edi */
  EDI = (pop32());
  /* 1116429e pop esi */
  ESI = (pop32());
  /* 1116429f pop ebx */
  EBX = (pop32());
  /* 111642a0 pop ebp */
  EBP = (pop32());
  /* 111642a1 ret  */
  ESPCHK(0x11164210u, _esp0);
  ESP += 4; return;
}

/* FUN_100142b0 @ 0x111642b0 (289 bytes, 97 insns) */
void f_111642b0(void) {
  FTRACE(0x111642b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111642b0 push ebp */
  push32((uint32_t)(EBP));
  /* 111642b1 mov ebp, esp */
  EBP = (ESP);
  /* 111642b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111642b6 push esi */
  push32((uint32_t)(ESI));
  /* 111642b7 mov eax, dword ptr [0x11182c98] */
  EAX = (r32((uint32_t)(0x11182c98)));
  /* 111642bc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111642bf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 111642c6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 111642cd jmp 0x111642d8 */
  goto L_111642d8;
L_111642cf:;
  /* 111642cf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111642d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111642d5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_111642d8:;
  /* 111642d8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111642dc jae 0x11164311 */
  if (!C.cf) goto L_11164311;
  /* 111642de mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111642e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111642e4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 111642e7 push ecx */
  push32((uint32_t)(ECX));
  /* 111642e8 call 0x1115a390 */
  push32(0x111642edu); f_1115a390();
  /* 111642ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111642f0 mov esi, eax */
  ESI = (EAX);
  /* 111642f2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111642f5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111642f8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 111642fc push ecx */
  push32((uint32_t)(ECX));
  /* 111642fd call 0x1115a390 */
  push32(0x11164302u); f_1115a390();
  /* 11164302 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164305 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11164308 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1116430c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1116430f jmp 0x111642cf */
  goto L_111642cf;
L_11164311:;
  /* 11164311 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11164314 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11164317 push eax */
  push32((uint32_t)(EAX));
  /* 11164318 call 0x11157540 */
  push32(0x1116431du); f_11157540();
  /* 1116431d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164320 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11164323 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11164327 je 0x111643c9 */
  if (C.zf) goto L_111643c9;
  /* 1116432d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11164330 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11164333 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1116433a jmp 0x11164345 */
  goto L_11164345;
L_1116433c:;
  /* 1116433c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1116433f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11164342 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11164345:;
  /* 11164345 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11164349 jae 0x111643ba */
  if (!C.cf) goto L_111643ba;
  /* 1116434b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1116434e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11164351 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11164354 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11164357 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1116435a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1116435d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11164360 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11164363 push ecx */
  push32((uint32_t)(ECX));
  /* 11164364 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11164367 push edx */
  push32((uint32_t)(EDX));
  /* 11164368 call 0x1115a510 */
  push32(0x1116436du); f_1115a510();
  /* 1116436d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164370 push eax */
  push32((uint32_t)(EAX));
  /* 11164371 call 0x1115a390 */
  push32(0x11164376u); f_1115a390();
  /* 11164376 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164379 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1116437c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116437e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11164381 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11164384 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11164387 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1116438a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116438d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11164390 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11164393 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11164396 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1116439a push eax */
  push32((uint32_t)(EAX));
  /* 1116439b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1116439e push ecx */
  push32((uint32_t)(ECX));
  /* 1116439f call 0x1115a510 */
  push32(0x111643a4u); f_1115a510();
  /* 111643a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111643a7 push eax */
  push32((uint32_t)(EAX));
  /* 111643a8 call 0x1115a390 */
  push32(0x111643adu); f_1115a390();
  /* 111643ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111643b0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111643b3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111643b5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 111643b8 jmp 0x1116433c */
  goto L_1116433c;
L_111643ba:;
  /* 111643ba mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 111643bd mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 111643c0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111643c3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111643c6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_111643c9:;
  /* 111643c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111643cc pop esi */
  ESI = (pop32());
  /* 111643cd mov esp, ebp */
  ESP = (EBP);
  /* 111643cf pop ebp */
  EBP = (pop32());
  /* 111643d0 ret  */
  ESPCHK(0x111642b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100143e0 @ 0x111643e0 (291 bytes, 97 insns) */
void f_111643e0(void) {
  FTRACE(0x111643e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111643e0 push ebp */
  push32((uint32_t)(EBP));
  /* 111643e1 mov ebp, esp */
  EBP = (ESP);
  /* 111643e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111643e6 push esi */
  push32((uint32_t)(ESI));
  /* 111643e7 mov eax, dword ptr [0x11182c98] */
  EAX = (r32((uint32_t)(0x11182c98)));
  /* 111643ec mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111643ef mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 111643f6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 111643fd jmp 0x11164408 */
  goto L_11164408;
L_111643ff:;
  /* 111643ff mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11164402 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11164405 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11164408:;
  /* 11164408 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116440c jae 0x11164442 */
  if (!C.cf) goto L_11164442;
  /* 1116440e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11164411 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11164414 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11164418 push ecx */
  push32((uint32_t)(ECX));
  /* 11164419 call 0x1115a390 */
  push32(0x1116441eu); f_1115a390();
  /* 1116441e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164421 mov esi, eax */
  ESI = (EAX);
  /* 11164423 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11164426 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11164429 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 1116442d push ecx */
  push32((uint32_t)(ECX));
  /* 1116442e call 0x1115a390 */
  push32(0x11164433u); f_1115a390();
  /* 11164433 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164436 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11164439 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1116443d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11164440 jmp 0x111643ff */
  goto L_111643ff;
L_11164442:;
  /* 11164442 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11164445 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11164448 push eax */
  push32((uint32_t)(EAX));
  /* 11164449 call 0x11157540 */
  push32(0x1116444eu); f_11157540();
  /* 1116444e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164451 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11164454 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11164458 je 0x111644fb */
  if (C.zf) goto L_111644fb;
  /* 1116445e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11164461 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11164464 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1116446b jmp 0x11164476 */
  goto L_11164476;
L_1116446d:;
  /* 1116446d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11164470 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11164473 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11164476:;
  /* 11164476 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116447a jae 0x111644ec */
  if (!C.cf) goto L_111644ec;
  /* 1116447c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1116447f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11164482 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11164485 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11164488 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1116448b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1116448e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11164491 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11164495 push ecx */
  push32((uint32_t)(ECX));
  /* 11164496 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11164499 push edx */
  push32((uint32_t)(EDX));
  /* 1116449a call 0x1115a510 */
  push32(0x1116449fu); f_1115a510();
  /* 1116449f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111644a2 push eax */
  push32((uint32_t)(EAX));
  /* 111644a3 call 0x1115a390 */
  push32(0x111644a8u); f_1115a390();
  /* 111644a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111644ab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111644ae add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111644b0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 111644b3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111644b6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 111644b9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 111644bc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111644bf mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 111644c2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111644c5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111644c8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 111644cc push eax */
  push32((uint32_t)(EAX));
  /* 111644cd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111644d0 push ecx */
  push32((uint32_t)(ECX));
  /* 111644d1 call 0x1115a510 */
  push32(0x111644d6u); f_1115a510();
  /* 111644d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111644d9 push eax */
  push32((uint32_t)(EAX));
  /* 111644da call 0x1115a390 */
  push32(0x111644dfu); f_1115a390();
  /* 111644df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111644e2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111644e5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111644e7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 111644ea jmp 0x1116446d */
  goto L_1116446d;
L_111644ec:;
  /* 111644ec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 111644ef mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 111644f2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111644f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111644f8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_111644fb:;
  /* 111644fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111644fe pop esi */
  ESI = (pop32());
  /* 111644ff mov esp, ebp */
  ESP = (EBP);
  /* 11164501 pop ebp */
  EBP = (pop32());
  /* 11164502 ret  */
  ESPCHK(0x111643e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014510 @ 0x11164510 (878 bytes, 273 insns) */
void f_11164510(void) {
  FTRACE(0x11164510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11164510 push ebp */
  push32((uint32_t)(EBP));
  /* 11164511 mov ebp, esp */
  EBP = (ESP);
  /* 11164513 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11164516 push esi */
  push32((uint32_t)(ESI));
  /* 11164517 mov eax, dword ptr [0x11182c98] */
  EAX = (r32((uint32_t)(0x11182c98)));
  /* 1116451c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1116451f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11164526 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1116452d jmp 0x11164538 */
  goto L_11164538;
L_1116452f:;
  /* 1116452f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11164532 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11164535 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11164538:;
  /* 11164538 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116453c jae 0x11164571 */
  if (!C.cf) goto L_11164571;
  /* 1116453e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11164541 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11164544 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11164547 push ecx */
  push32((uint32_t)(ECX));
  /* 11164548 call 0x1115a390 */
  push32(0x1116454du); f_1115a390();
  /* 1116454d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164550 mov esi, eax */
  ESI = (EAX);
  /* 11164552 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11164555 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11164558 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1116455c push ecx */
  push32((uint32_t)(ECX));
  /* 1116455d call 0x1115a390 */
  push32(0x11164562u); f_1115a390();
  /* 11164562 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164565 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11164568 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1116456c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1116456f jmp 0x1116452f */
  goto L_1116452f;
L_11164571:;
  /* 11164571 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11164578 jmp 0x11164583 */
  goto L_11164583;
L_1116457a:;
  /* 1116457a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1116457d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11164580 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11164583:;
  /* 11164583 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11164587 jae 0x111645bd */
  if (!C.cf) goto L_111645bd;
  /* 11164589 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1116458c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1116458f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11164593 push eax */
  push32((uint32_t)(EAX));
  /* 11164594 call 0x1115a390 */
  push32(0x11164599u); f_1115a390();
  /* 11164599 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116459c mov esi, eax */
  ESI = (EAX);
  /* 1116459e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111645a1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111645a4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 111645a8 push eax */
  push32((uint32_t)(EAX));
  /* 111645a9 call 0x1115a390 */
  push32(0x111645aeu); f_1115a390();
  /* 111645ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111645b1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111645b4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 111645b8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111645bb jmp 0x1116457a */
  goto L_1116457a;
L_111645bd:;
  /* 111645bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111645c0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 111645c6 push eax */
  push32((uint32_t)(EAX));
  /* 111645c7 call 0x1115a390 */
  push32(0x111645ccu); f_1115a390();
  /* 111645cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111645cf mov esi, eax */
  ESI = (EAX);
  /* 111645d1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111645d4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 111645da push edx */
  push32((uint32_t)(EDX));
  /* 111645db call 0x1115a390 */
  push32(0x111645e0u); f_1115a390();
  /* 111645e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111645e3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111645e6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 111645ea mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111645ed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111645f0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 111645f6 push edx */
  push32((uint32_t)(EDX));
  /* 111645f7 call 0x1115a390 */
  push32(0x111645fcu); f_1115a390();
  /* 111645fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111645ff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11164602 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11164606 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11164609 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1116460c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 11164612 push ecx */
  push32((uint32_t)(ECX));
  /* 11164613 call 0x1115a390 */
  push32(0x11164618u); f_1115a390();
  /* 11164618 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116461b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1116461e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11164622 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11164625 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11164628 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1116462e push edx */
  push32((uint32_t)(EDX));
  /* 1116462f call 0x1115a390 */
  push32(0x11164634u); f_1115a390();
  /* 11164634 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164637 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1116463a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1116463e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11164641 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11164644 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11164649 push eax */
  push32((uint32_t)(EAX));
  /* 1116464a call 0x11157540 */
  push32(0x1116464fu); f_11157540();
  /* 1116464f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164652 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11164655 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11164659 je 0x11164876 */
  if (C.zf) goto L_11164876;
  /* 1116465f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11164662 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11164665 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11164668 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116466e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11164671 push 0xac */
  push32((uint32_t)(0xacu));
  /* 11164676 mov eax, dword ptr [0x11182c98] */
  EAX = (r32((uint32_t)(0x11182c98)));
  /* 1116467b push eax */
  push32((uint32_t)(EAX));
  /* 1116467c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1116467f push ecx */
  push32((uint32_t)(ECX));
  /* 11164680 call 0x1115de40 */
  push32(0x11164685u); f_1115de40();
  /* 11164685 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164688 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1116468f jmp 0x1116469a */
  goto L_1116469a;
L_11164691:;
  /* 11164691 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11164694 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11164697 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1116469a:;
  /* 1116469a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1116469e jae 0x1116470e */
  if (!C.cf) goto L_1116470e;
  /* 111646a0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111646a3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111646a6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111646a9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 111646ac mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111646af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111646b2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 111646b5 push edx */
  push32((uint32_t)(EDX));
  /* 111646b6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 111646b9 push eax */
  push32((uint32_t)(EAX));
  /* 111646ba call 0x1115a510 */
  push32(0x111646bfu); f_1115a510();
  /* 111646bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111646c2 push eax */
  push32((uint32_t)(EAX));
  /* 111646c3 call 0x1115a390 */
  push32(0x111646c8u); f_1115a390();
  /* 111646c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111646cb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111646ce lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 111646d2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 111646d5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111646d8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111646db mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111646de mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 111646e2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111646e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111646e8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 111646ec push edx */
  push32((uint32_t)(EDX));
  /* 111646ed mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 111646f0 push eax */
  push32((uint32_t)(EAX));
  /* 111646f1 call 0x1115a510 */
  push32(0x111646f6u); f_1115a510();
  /* 111646f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111646f9 push eax */
  push32((uint32_t)(EAX));
  /* 111646fa call 0x1115a390 */
  push32(0x111646ffu); f_1115a390();
  /* 111646ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164702 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11164705 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11164709 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1116470c jmp 0x11164691 */
  goto L_11164691;
L_1116470e:;
  /* 1116470e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11164715 jmp 0x11164720 */
  goto L_11164720;
L_11164717:;
  /* 11164717 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1116471a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1116471d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11164720:;
  /* 11164720 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11164724 jae 0x11164796 */
  if (!C.cf) goto L_11164796;
  /* 11164726 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11164729 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1116472c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1116472f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 11164733 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11164736 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11164739 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1116473d push eax */
  push32((uint32_t)(EAX));
  /* 1116473e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11164741 push ecx */
  push32((uint32_t)(ECX));
  /* 11164742 call 0x1115a510 */
  push32(0x11164747u); f_1115a510();
  /* 11164747 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116474a push eax */
  push32((uint32_t)(EAX));
  /* 1116474b call 0x1115a390 */
  push32(0x11164750u); f_1115a390();
  /* 11164750 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164753 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11164756 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1116475a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1116475d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11164760 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11164763 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11164766 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 1116476a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1116476d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11164770 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11164774 push eax */
  push32((uint32_t)(EAX));
  /* 11164775 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11164778 push ecx */
  push32((uint32_t)(ECX));
  /* 11164779 call 0x1115a510 */
  push32(0x1116477eu); f_1115a510();
  /* 1116477e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164781 push eax */
  push32((uint32_t)(EAX));
  /* 11164782 call 0x1115a390 */
  push32(0x11164787u); f_1115a390();
  /* 11164787 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116478a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1116478d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11164791 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11164794 jmp 0x11164717 */
  goto L_11164717;
L_11164796:;
  /* 11164796 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11164799 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1116479c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 111647a2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111647a5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 111647ab push ecx */
  push32((uint32_t)(ECX));
  /* 111647ac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111647af push edx */
  push32((uint32_t)(EDX));
  /* 111647b0 call 0x1115a510 */
  push32(0x111647b5u); f_1115a510();
  /* 111647b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111647b8 push eax */
  push32((uint32_t)(EAX));
  /* 111647b9 call 0x1115a390 */
  push32(0x111647beu); f_1115a390();
  /* 111647be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111647c1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111647c4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 111647c8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 111647cb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 111647ce mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111647d1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 111647d7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111647da mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 111647e0 push eax */
  push32((uint32_t)(EAX));
  /* 111647e1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111647e4 push ecx */
  push32((uint32_t)(ECX));
  /* 111647e5 call 0x1115a510 */
  push32(0x111647eau); f_1115a510();
  /* 111647ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111647ed push eax */
  push32((uint32_t)(EAX));
  /* 111647ee call 0x1115a390 */
  push32(0x111647f3u); f_1115a390();
  /* 111647f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111647f6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111647f9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 111647fd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11164800 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11164803 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11164806 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 1116480c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1116480f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 11164815 push ecx */
  push32((uint32_t)(ECX));
  /* 11164816 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11164819 push edx */
  push32((uint32_t)(EDX));
  /* 1116481a call 0x1115a510 */
  push32(0x1116481fu); f_1115a510();
  /* 1116481f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164822 push eax */
  push32((uint32_t)(EAX));
  /* 11164823 call 0x1115a390 */
  push32(0x11164828u); f_1115a390();
  /* 11164828 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116482b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1116482e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11164832 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11164835 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11164838 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1116483b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 11164841 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11164844 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 1116484a push eax */
  push32((uint32_t)(EAX));
  /* 1116484b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1116484e push ecx */
  push32((uint32_t)(ECX));
  /* 1116484f call 0x1115a510 */
  push32(0x11164854u); f_1115a510();
  /* 11164854 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164857 push eax */
  push32((uint32_t)(EAX));
  /* 11164858 call 0x1115a390 */
  push32(0x1116485du); f_1115a390();
  /* 1116485d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11164860 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11164863 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11164867 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1116486a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1116486d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11164870 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_11164876:;
  /* 11164876 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11164879 pop esi */
  ESI = (pop32());
  /* 1116487a mov esp, ebp */
  ESP = (EBP);
  /* 1116487c pop ebp */
  EBP = (pop32());
  /* 1116487d ret  */
  ESPCHK(0x11164510u, _esp0);
  ESP += 4; return;
}

/* FUN_10014880 @ 0x11164880 (31 bytes, 15 insns) */
void f_11164880(void) {
  FTRACE(0x11164880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11164880 push ebp */
  push32((uint32_t)(EBP));
  /* 11164881 mov ebp, esp */
  EBP = (ESP);
  /* 11164883 push 0 */
  push32((uint32_t)(0x0u));
  /* 11164885 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11164888 push eax */
  push32((uint32_t)(EAX));
  /* 11164889 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1116488c push ecx */
  push32((uint32_t)(ECX));
  /* 1116488d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11164890 push edx */
  push32((uint32_t)(EDX));
  /* 11164891 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11164894 push eax */
  push32((uint32_t)(EAX));
  /* 11164895 call 0x111648a0 */
  push32(0x1116489au); f_111648a0();
  /* 1116489a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1116489d pop ebp */
  EBP = (pop32());
  /* 1116489e ret  */
  ESPCHK(0x11164880u, _esp0);
  ESP += 4; return;
}

