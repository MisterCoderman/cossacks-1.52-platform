#include "recomp.h"

/* FUN_10007930 @ 0x10317930 (10 bytes, 5 insns) */
void f_10317930(void) {
  FTRACE(0x10317930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10317930 push ebp */
  push32((uint32_t)(EBP));
  /* 10317931 mov ebp, esp */
  EBP = (ESP);
  /* 10317933 mov eax, dword ptr [0x1033dc94] */
  EAX = (r32((uint32_t)(0x1033dc94)));
  /* 10317938 pop ebp */
  EBP = (pop32());
  /* 10317939 ret  */
  ESPCHK(0x10317930u, _esp0);
  ESP += 4; return;
}

/* FUN_10007940 @ 0x10317940 (31 bytes, 11 insns) */
void f_10317940(void) {
  FTRACE(0x10317940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10317940 push ebp */
  push32((uint32_t)(EBP));
  /* 10317941 mov ebp, esp */
  EBP = (ESP);
  /* 10317943 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031794a jbe 0x10317950 */
  if ((C.cf||C.zf)) goto L_10317950;
  /* 1031794c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031794e jmp 0x1031795d */
  goto L_1031795d;
L_10317950:;
  /* 10317950 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10317953 mov dword ptr [0x1033dc94], eax */
  w32((uint32_t)(0x1033dc94), (EAX));
  /* 10317958 mov eax, 1 */
  EAX = (0x1u);
L_1031795d:;
  /* 1031795d pop ebp */
  EBP = (pop32());
  /* 1031795e ret  */
  ESPCHK(0x10317940u, _esp0);
  ESP += 4; return;
}

/* FUN_10007960 @ 0x10317960 (89 bytes, 20 insns) */
void f_10317960(void) {
  FTRACE(0x10317960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10317960 push ebp */
  push32((uint32_t)(EBP));
  /* 10317961 mov ebp, esp */
  EBP = (ESP);
  /* 10317963 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 10317968 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031796a mov eax, dword ptr [0x10340e6c] */
  EAX = (r32((uint32_t)(0x10340e6c)));
  /* 1031796f push eax */
  push32((uint32_t)(EAX));
  /* 10317970 call dword ptr [0x10342344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342344))), 0x10317976u);
  /* 10317976 mov dword ptr [0x10340e68], eax */
  w32((uint32_t)(0x10340e68), (EAX));
  /* 1031797b cmp dword ptr [0x10340e68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10340e68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10317982 jne 0x10317988 */
  if (!C.zf) goto L_10317988;
  /* 10317984 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10317986 jmp 0x103179b7 */
  goto L_103179b7;
L_10317988:;
  /* 10317988 mov ecx, dword ptr [0x10340e68] */
  ECX = (r32((uint32_t)(0x10340e68)));
  /* 1031798e mov dword ptr [0x10340e5c], ecx */
  w32((uint32_t)(0x10340e5c), (ECX));
  /* 10317994 mov dword ptr [0x10340e60], 0 */
  w32((uint32_t)(0x10340e60), (0x0u));
  /* 1031799e mov dword ptr [0x10340e64], 0 */
  w32((uint32_t)(0x10340e64), (0x0u));
  /* 103179a8 mov dword ptr [0x10340e48], 0x10 */
  w32((uint32_t)(0x10340e48), (0x10u));
  /* 103179b2 mov eax, 1 */
  EAX = (0x1u);
L_103179b7:;
  /* 103179b7 pop ebp */
  EBP = (pop32());
  /* 103179b8 ret  */
  ESPCHK(0x10317960u, _esp0);
  ESP += 4; return;
}

/* FUN_100079c0 @ 0x103179c0 (85 bytes, 29 insns) */
void f_103179c0(void) {
  FTRACE(0x103179c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103179c0 push ebp */
  push32((uint32_t)(EBP));
  /* 103179c1 mov ebp, esp */
  EBP = (ESP);
  /* 103179c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103179c6 mov eax, dword ptr [0x10340e64] */
  EAX = (r32((uint32_t)(0x10340e64)));
  /* 103179cb imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103179ce mov ecx, dword ptr [0x10340e68] */
  ECX = (r32((uint32_t)(0x10340e68)));
  /* 103179d4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103179d6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103179d9 mov edx, dword ptr [0x10340e68] */
  EDX = (r32((uint32_t)(0x10340e68)));
  /* 103179df mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_103179e2:;
  /* 103179e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103179e5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103179e8 jae 0x10317a0f */
  if (!C.cf) goto L_10317a0f;
  /* 103179ea mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103179ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103179f0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103179f3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103179f6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103179fd jae 0x10317a04 */
  if (!C.cf) goto L_10317a04;
  /* 103179ff mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10317a02 jmp 0x10317a11 */
  goto L_10317a11;
L_10317a04:;
  /* 10317a04 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10317a07 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10317a0a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10317a0d jmp 0x103179e2 */
  goto L_103179e2;
L_10317a0f:;
  /* 10317a0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10317a11:;
  /* 10317a11 mov esp, ebp */
  ESP = (EBP);
  /* 10317a13 pop ebp */
  EBP = (pop32());
  /* 10317a14 ret  */
  ESPCHK(0x103179c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a20 @ 0x10317a20 (95 bytes, 33 insns) */
void f_10317a20(void) {
  FTRACE(0x10317a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10317a20 push ebp */
  push32((uint32_t)(EBP));
  /* 10317a21 mov ebp, esp */
  EBP = (ESP);
  /* 10317a23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10317a26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10317a29 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10317a2c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10317a2f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10317a32 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10317a35 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10317a38 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10317a3b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10317a40 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10317a43 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10317a45 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10317a48 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10317a4b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10317a4d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10317a4f jne 0x10317a71 */
  if (!C.zf) goto L_10317a71;
  /* 10317a51 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10317a54 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10317a57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10317a59 jne 0x10317a71 */
  if (!C.zf) goto L_10317a71;
  /* 10317a5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10317a5e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 10317a64 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10317a66 je 0x10317a71 */
  if (C.zf) goto L_10317a71;
  /* 10317a68 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 10317a6f jmp 0x10317a78 */
  goto L_10317a78;
L_10317a71:;
  /* 10317a71 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10317a78:;
  /* 10317a78 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10317a7b mov esp, ebp */
  ESP = (EBP);
  /* 10317a7d pop ebp */
  EBP = (pop32());
  /* 10317a7e ret  */
  ESPCHK(0x10317a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a80 @ 0x10317a80 (1485 bytes, 453 insns) */
void f_10317a80(void) {
  FTRACE(0x10317a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10317a80 push ebp */
  push32((uint32_t)(EBP));
  /* 10317a81 mov ebp, esp */
  EBP = (ESP);
  /* 10317a83 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10317a86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10317a89 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10317a8c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 10317a8f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10317a92 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10317a95 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10317a98 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10317a9b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10317a9e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10317aa1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10317aa4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10317aa7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10317aad mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10317ab0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 10317ab7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10317aba mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10317abd sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10317ac0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10317ac3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10317ac6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10317ac8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10317acb mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10317ace mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10317ad1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10317ad4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 10317ad7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10317ada mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10317adc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10317adf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10317ae2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10317ae5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10317ae8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10317aeb and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10317aee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10317af0 jne 0x10317c18 */
  if (!C.zf) goto L_10317c18;
  /* 10317af6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10317af9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10317afc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10317aff mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10317b02 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10317b06 jbe 0x10317b0f */
  if ((C.cf||C.zf)) goto L_10317b0f;
  /* 10317b08 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10317b0f:;
  /* 10317b0f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10317b12 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10317b15 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10317b18 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10317b1b jne 0x10317bf1 */
  if (!C.zf) goto L_10317bf1;
  /* 10317b21 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10317b25 jae 0x10317b86 */
  if (!C.cf) goto L_10317b86;
  /* 10317b27 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10317b2c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10317b2f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10317b31 not eax */
  EAX = (~(EAX));
  /* 10317b33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10317b36 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10317b39 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10317b3d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10317b3f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10317b42 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10317b45 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10317b49 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10317b4c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10317b4f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10317b52 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10317b55 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10317b58 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10317b5b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10317b5e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10317b61 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10317b64 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10317b68 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10317b6a jne 0x10317b84 */
  if (!C.zf) goto L_10317b84;
  /* 10317b6c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10317b71 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10317b74 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10317b76 not eax */
  EAX = (~(EAX));
  /* 10317b78 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10317b7b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10317b7d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10317b7f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10317b82 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10317b84:;
  /* 10317b84 jmp 0x10317bf1 */
  goto L_10317bf1;
L_10317b86:;
  /* 10317b86 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10317b89 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10317b8c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10317b91 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10317b93 not edx */
  EDX = (~(EDX));
  /* 10317b95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10317b98 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10317b9b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10317ba2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10317ba4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10317ba7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10317baa mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10317bb1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10317bb4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10317bb7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10317bba sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10317bbd mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10317bc0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10317bc3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10317bc6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10317bc9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10317bcc movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10317bd0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10317bd2 jne 0x10317bf1 */
  if (!C.zf) goto L_10317bf1;
  /* 10317bd4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10317bd7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10317bda mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10317bdf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10317be1 not edx */
  EDX = (~(EDX));
  /* 10317be3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10317be6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10317be9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10317beb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10317bee mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10317bf1:;
  /* 10317bf1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10317bf4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10317bf7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10317bfa mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10317bfd mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10317c00 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10317c03 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10317c06 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10317c09 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10317c0c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10317c0f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10317c12 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10317c15 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_10317c18:;
  /* 10317c18 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10317c1b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10317c1e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10317c21 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10317c24 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10317c28 jbe 0x10317c31 */
  if ((C.cf||C.zf)) goto L_10317c31;
  /* 10317c2a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10317c31:;
  /* 10317c31 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10317c34 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10317c37 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10317c39 jne 0x10317d95 */
  if (!C.zf) goto L_10317d95;
  /* 10317c3f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10317c42 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10317c45 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 10317c48 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10317c4b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10317c4e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10317c51 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10317c54 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10317c58 jbe 0x10317c61 */
  if ((C.cf||C.zf)) goto L_10317c61;
  /* 10317c5a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_10317c61:;
  /* 10317c61 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10317c64 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10317c67 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10317c6a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10317c6d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10317c70 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10317c73 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10317c76 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10317c7a jbe 0x10317c83 */
  if ((C.cf||C.zf)) goto L_10317c83;
  /* 10317c7c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10317c83:;
  /* 10317c83 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10317c86 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10317c89 je 0x10317d8f */
  if (C.zf) goto L_10317d8f;
  /* 10317c8f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10317c92 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10317c95 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10317c98 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10317c9b jne 0x10317d71 */
  if (!C.zf) goto L_10317d71;
  /* 10317ca1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10317ca5 jae 0x10317d06 */
  if (!C.cf) goto L_10317d06;
  /* 10317ca7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10317cac mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10317caf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10317cb1 not edx */
  EDX = (~(EDX));
  /* 10317cb3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10317cb6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10317cb9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10317cbd and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10317cbf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10317cc2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10317cc5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10317cc9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10317ccc add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10317ccf mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10317cd2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10317cd5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10317cd8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10317cdb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10317cde mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10317ce1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10317ce4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10317ce8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10317cea jne 0x10317d04 */
  if (!C.zf) goto L_10317d04;
  /* 10317cec mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10317cf1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10317cf4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10317cf6 not edx */
  EDX = (~(EDX));
  /* 10317cf8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10317cfb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10317cfd and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10317cff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10317d02 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10317d04:;
  /* 10317d04 jmp 0x10317d71 */
  goto L_10317d71;
L_10317d06:;
  /* 10317d06 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10317d09 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10317d0c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10317d11 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10317d13 not eax */
  EAX = (~(EAX));
  /* 10317d15 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10317d18 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10317d1b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10317d22 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10317d24 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10317d27 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10317d2a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10317d31 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10317d34 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10317d37 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10317d3a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10317d3d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10317d40 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10317d43 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10317d46 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10317d49 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10317d4c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10317d50 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10317d52 jne 0x10317d71 */
  if (!C.zf) goto L_10317d71;
  /* 10317d54 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10317d57 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10317d5a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10317d5f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10317d61 not eax */
  EAX = (~(EAX));
  /* 10317d63 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10317d66 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10317d69 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10317d6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10317d6e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10317d71:;
  /* 10317d71 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10317d74 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10317d77 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10317d7a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10317d7d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10317d80 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10317d83 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10317d86 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10317d89 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10317d8c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_10317d8f:;
  /* 10317d8f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10317d92 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_10317d95:;
  /* 10317d95 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10317d98 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10317d9b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10317d9d jne 0x10317dab */
  if (!C.zf) goto L_10317dab;
  /* 10317d9f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10317da2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10317da5 je 0x10317ebb */
  if (C.zf) goto L_10317ebb;
L_10317dab:;
  /* 10317dab mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10317dae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10317db1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10317db4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10317db7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10317dba mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10317dbd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10317dc0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10317dc3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10317dc6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10317dc9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10317dcc mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10317dcf mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10317dd2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10317dd5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10317dd8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10317ddb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10317dde mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10317de1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10317de4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10317de7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10317dea cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10317ded jne 0x10317ebb */
  if (!C.zf) goto L_10317ebb;
  /* 10317df3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10317df7 jae 0x10317e54 */
  if (!C.cf) goto L_10317e54;
  /* 10317df9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10317dfc add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10317dff movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10317e03 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10317e06 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10317e09 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10317e0c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10317e0f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10317e12 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10317e15 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10317e18 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10317e1a jne 0x10317e32 */
  if (!C.zf) goto L_10317e32;
  /* 10317e1c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10317e21 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10317e24 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10317e26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10317e29 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10317e2b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10317e2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10317e30 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10317e32:;
  /* 10317e32 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10317e37 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10317e3a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10317e3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10317e3f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10317e42 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10317e46 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10317e48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10317e4b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10317e4e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10317e52 jmp 0x10317ebb */
  goto L_10317ebb;
L_10317e54:;
  /* 10317e54 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10317e57 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10317e5a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10317e5e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10317e61 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10317e64 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10317e67 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10317e6a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10317e6d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10317e70 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10317e73 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10317e75 jne 0x10317e92 */
  if (!C.zf) goto L_10317e92;
  /* 10317e77 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10317e7a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10317e7d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10317e82 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10317e84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10317e87 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10317e8a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10317e8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10317e8f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10317e92:;
  /* 10317e92 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10317e95 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10317e98 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10317e9d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10317e9f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10317ea2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10317ea5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10317eac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10317eae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10317eb1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10317eb4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10317ebb:;
  /* 10317ebb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10317ebe mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10317ec1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10317ec3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10317ec6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10317ec9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10317ecc mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 10317ecf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10317ed2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10317ed4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10317ed7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10317eda mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10317edc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10317edf cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10317ee2 jne 0x10318049 */
  if (!C.zf) goto L_10318049;
  /* 10317ee8 cmp dword ptr [0x10340e60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10340e60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10317eef je 0x10318038 */
  if (C.zf) goto L_10318038;
  /* 10317ef5 mov eax, dword ptr [0x10340e58] */
  EAX = (r32((uint32_t)(0x10340e58)));
  /* 10317efa shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10317efd mov ecx, dword ptr [0x10340e60] */
  ECX = (r32((uint32_t)(0x10340e60)));
  /* 10317f03 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10317f06 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10317f08 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10317f0b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10317f10 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10317f15 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10317f18 push eax */
  push32((uint32_t)(EAX));
  /* 10317f19 call dword ptr [0x10342340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342340))), 0x10317f1fu);
  /* 10317f1f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10317f24 mov ecx, dword ptr [0x10340e58] */
  ECX = (r32((uint32_t)(0x10340e58)));
  /* 10317f2a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10317f2c mov eax, dword ptr [0x10340e60] */
  EAX = (r32((uint32_t)(0x10340e60)));
  /* 10317f31 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10317f34 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10317f36 mov edx, dword ptr [0x10340e60] */
  EDX = (r32((uint32_t)(0x10340e60)));
  /* 10317f3c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10317f3f mov eax, dword ptr [0x10340e60] */
  EAX = (r32((uint32_t)(0x10340e60)));
  /* 10317f44 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10317f47 mov edx, dword ptr [0x10340e58] */
  EDX = (r32((uint32_t)(0x10340e58)));
  /* 10317f4d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10317f58 mov eax, dword ptr [0x10340e60] */
  EAX = (r32((uint32_t)(0x10340e60)));
  /* 10317f5d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10317f60 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10317f63 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10317f66 mov eax, dword ptr [0x10340e60] */
  EAX = (r32((uint32_t)(0x10340e60)));
  /* 10317f6b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10317f6e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10317f71 mov edx, dword ptr [0x10340e60] */
  EDX = (r32((uint32_t)(0x10340e60)));
  /* 10317f77 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10317f7a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10317f7e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10317f80 jne 0x10317f96 */
  if (!C.zf) goto L_10317f96;
  /* 10317f82 mov edx, dword ptr [0x10340e60] */
  EDX = (r32((uint32_t)(0x10340e60)));
  /* 10317f88 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10317f8b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10317f8d mov ecx, dword ptr [0x10340e60] */
  ECX = (r32((uint32_t)(0x10340e60)));
  /* 10317f93 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10317f96:;
  /* 10317f96 mov edx, dword ptr [0x10340e60] */
  EDX = (r32((uint32_t)(0x10340e60)));
  /* 10317f9c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10317fa0 jne 0x10318038 */
  if (!C.zf) goto L_10318038;
  /* 10317fa6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10317fab push 0 */
  push32((uint32_t)(0x0u));
  /* 10317fad mov eax, dword ptr [0x10340e60] */
  EAX = (r32((uint32_t)(0x10340e60)));
  /* 10317fb2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10317fb5 push ecx */
  push32((uint32_t)(ECX));
  /* 10317fb6 call dword ptr [0x10342340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342340))), 0x10317fbcu);
  /* 10317fbc mov edx, dword ptr [0x10340e60] */
  EDX = (r32((uint32_t)(0x10340e60)));
  /* 10317fc2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10317fc5 push eax */
  push32((uint32_t)(EAX));
  /* 10317fc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10317fc8 mov ecx, dword ptr [0x10340e6c] */
  ECX = (r32((uint32_t)(0x10340e6c)));
  /* 10317fce push ecx */
  push32((uint32_t)(ECX));
  /* 10317fcf call dword ptr [0x1034233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034233c))), 0x10317fd5u);
  /* 10317fd5 mov edx, dword ptr [0x10340e64] */
  EDX = (r32((uint32_t)(0x10340e64)));
  /* 10317fdb imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10317fde mov eax, dword ptr [0x10340e68] */
  EAX = (r32((uint32_t)(0x10340e68)));
  /* 10317fe3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10317fe5 mov ecx, dword ptr [0x10340e60] */
  ECX = (r32((uint32_t)(0x10340e60)));
  /* 10317feb add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10317fee sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10317ff0 push eax */
  push32((uint32_t)(EAX));
  /* 10317ff1 mov edx, dword ptr [0x10340e60] */
  EDX = (r32((uint32_t)(0x10340e60)));
  /* 10317ff7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10317ffa push edx */
  push32((uint32_t)(EDX));
  /* 10317ffb mov eax, dword ptr [0x10340e60] */
  EAX = (r32((uint32_t)(0x10340e60)));
  /* 10318000 push eax */
  push32((uint32_t)(EAX));
  /* 10318001 call 0x1031b5b0 */
  push32(0x10318006u); f_1031b5b0();
  /* 10318006 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10318009 mov ecx, dword ptr [0x10340e64] */
  ECX = (r32((uint32_t)(0x10340e64)));
  /* 1031800f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10318012 mov dword ptr [0x10340e64], ecx */
  w32((uint32_t)(0x10340e64), (ECX));
  /* 10318018 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031801b cmp edx, dword ptr [0x10340e60] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10340e60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10318021 jbe 0x1031802c */
  if ((C.cf||C.zf)) goto L_1031802c;
  /* 10318023 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10318026 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10318029 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1031802c:;
  /* 1031802c mov ecx, dword ptr [0x10340e68] */
  ECX = (r32((uint32_t)(0x10340e68)));
  /* 10318032 mov dword ptr [0x10340e5c], ecx */
  w32((uint32_t)(0x10340e5c), (ECX));
L_10318038:;
  /* 10318038 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031803b mov dword ptr [0x10340e60], edx */
  w32((uint32_t)(0x10340e60), (EDX));
  /* 10318041 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10318044 mov dword ptr [0x10340e58], eax */
  w32((uint32_t)(0x10340e58), (EAX));
L_10318049:;
  /* 10318049 mov esp, ebp */
  ESP = (EBP);
  /* 1031804b pop ebp */
  EBP = (pop32());
  /* 1031804c ret  */
  ESPCHK(0x10317a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10008050 @ 0x10318050 (1334 bytes, 427 insns) */
void f_10318050(void) {
  FTRACE(0x10318050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10318050 push ebp */
  push32((uint32_t)(EBP));
  /* 10318051 mov ebp, esp */
  EBP = (ESP);
  /* 10318053 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10318056 push esi */
  push32((uint32_t)(ESI));
  /* 10318057 mov eax, dword ptr [0x10340e64] */
  EAX = (r32((uint32_t)(0x10340e64)));
  /* 1031805c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031805f mov ecx, dword ptr [0x10340e68] */
  ECX = (r32((uint32_t)(0x10340e68)));
  /* 10318065 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318067 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1031806a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031806d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318070 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10318073 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10318076 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10318079 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1031807c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031807f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10318082 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10318086 jge 0x1031809c */
  if ((C.sf==C.of)) goto L_1031809c;
  /* 10318088 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1031808b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1031808e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10318090 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10318093 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 1031809a jmp 0x103180b1 */
  goto L_103180b1;
L_1031809c:;
  /* 1031809c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 103180a3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103180a6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103180a9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103180ac shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 103180ae mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_103180b1:;
  /* 103180b1 mov ecx, dword ptr [0x10340e5c] */
  ECX = (r32((uint32_t)(0x10340e5c)));
  /* 103180b7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_103180ba:;
  /* 103180ba mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103180bd cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103180c0 jae 0x103180e6 */
  if (!C.cf) goto L_103180e6;
  /* 103180c2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103180c5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103180c8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 103180ca mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103180cd mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 103180d0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 103180d3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103180d5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103180d7 je 0x103180db */
  if (C.zf) goto L_103180db;
  /* 103180d9 jmp 0x103180e6 */
  goto L_103180e6;
L_103180db:;
  /* 103180db mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103180de add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103180e1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 103180e4 jmp 0x103180ba */
  goto L_103180ba;
L_103180e6:;
  /* 103180e6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103180e9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103180ec jne 0x103181cd */
  if (!C.zf) goto L_103181cd;
  /* 103180f2 mov eax, dword ptr [0x10340e68] */
  EAX = (r32((uint32_t)(0x10340e68)));
  /* 103180f7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_103180fa:;
  /* 103180fa mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103180fd cmp ecx, dword ptr [0x10340e5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10340e5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10318103 jae 0x10318129 */
  if (!C.cf) goto L_10318129;
  /* 10318105 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10318108 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1031810b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 1031810d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10318110 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10318113 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10318116 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10318118 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031811a je 0x1031811e */
  if (C.zf) goto L_1031811e;
  /* 1031811c jmp 0x10318129 */
  goto L_10318129;
L_1031811e:;
  /* 1031811e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10318121 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318124 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10318127 jmp 0x103180fa */
  goto L_103180fa;
L_10318129:;
  /* 10318129 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1031812c cmp ecx, dword ptr [0x10340e5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10340e5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10318132 jne 0x103181cd */
  if (!C.zf) goto L_103181cd;
L_10318138:;
  /* 10318138 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1031813b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031813e jae 0x10318156 */
  if (!C.cf) goto L_10318156;
  /* 10318140 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10318143 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10318147 je 0x1031814b */
  if (C.zf) goto L_1031814b;
  /* 10318149 jmp 0x10318156 */
  goto L_10318156;
L_1031814b:;
  /* 1031814b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1031814e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318151 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10318154 jmp 0x10318138 */
  goto L_10318138;
L_10318156:;
  /* 10318156 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10318159 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031815c jne 0x103181a7 */
  if (!C.zf) goto L_103181a7;
  /* 1031815e mov eax, dword ptr [0x10340e68] */
  EAX = (r32((uint32_t)(0x10340e68)));
  /* 10318163 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10318166:;
  /* 10318166 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10318169 cmp ecx, dword ptr [0x10340e5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10340e5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031816f jae 0x10318187 */
  if (!C.cf) goto L_10318187;
  /* 10318171 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10318174 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10318178 je 0x1031817c */
  if (C.zf) goto L_1031817c;
  /* 1031817a jmp 0x10318187 */
  goto L_10318187;
L_1031817c:;
  /* 1031817c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1031817f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318182 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10318185 jmp 0x10318166 */
  goto L_10318166;
L_10318187:;
  /* 10318187 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1031818a cmp ecx, dword ptr [0x10340e5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10340e5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10318190 jne 0x103181a7 */
  if (!C.zf) goto L_103181a7;
  /* 10318192 call 0x10318590 */
  push32(0x10318197u); f_10318590();
  /* 10318197 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1031819a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031819e jne 0x103181a7 */
  if (!C.zf) goto L_103181a7;
  /* 103181a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103181a2 jmp 0x10318581 */
  goto L_10318581;
L_103181a7:;
  /* 103181a7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103181aa push edx */
  push32((uint32_t)(EDX));
  /* 103181ab call 0x103186a0 */
  push32(0x103181b0u); f_103186a0();
  /* 103181b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103181b3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103181b6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 103181b9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 103181bb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103181be mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103181c1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103181c4 jne 0x103181cd */
  if (!C.zf) goto L_103181cd;
  /* 103181c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103181c8 jmp 0x10318581 */
  goto L_10318581;
L_103181cd:;
  /* 103181cd mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103181d0 mov dword ptr [0x10340e5c], edx */
  w32((uint32_t)(0x10340e5c), (EDX));
  /* 103181d6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103181d9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103181dc mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 103181df mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 103181e2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103181e4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 103181e7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103181eb je 0x10318210 */
  if (C.zf) goto L_10318210;
  /* 103181ed mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103181f0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 103181f3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103181f6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 103181fa mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103181fd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10318200 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10318203 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1031820a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1031820c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031820e jne 0x10318245 */
  if (!C.zf) goto L_10318245;
L_10318210:;
  /* 10318210 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_10318217:;
  /* 10318217 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1031821a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1031821d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10318220 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10318224 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10318227 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1031822a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1031822d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10318234 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10318236 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10318238 jne 0x10318245 */
  if (!C.zf) goto L_10318245;
  /* 1031823a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1031823d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318240 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10318243 jmp 0x10318217 */
  goto L_10318217;
L_10318245:;
  /* 10318245 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10318248 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031824e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10318251 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10318258 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1031825b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10318262 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10318265 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10318268 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1031826b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1031826f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10318272 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10318276 jne 0x10318292 */
  if (!C.zf) goto L_10318292;
  /* 10318278 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 1031827f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10318282 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10318285 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10318288 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 1031828f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_10318292:;
  /* 10318292 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10318296 jl 0x103182ab */
  if ((C.sf!=C.of)) goto L_103182ab;
  /* 10318298 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1031829b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1031829d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 103182a0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103182a3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103182a6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 103182a9 jmp 0x10318292 */
  goto L_10318292;
L_103182ab:;
  /* 103182ab mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 103182ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103182b1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 103182b5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 103182b8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103182bb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103182bd sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103182c0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103182c3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103182c6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 103182c9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103182cc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 103182cf cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103182d3 jle 0x103182dc */
  if ((C.zf||C.sf!=C.of)) goto L_103182dc;
  /* 103182d5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_103182dc:;
  /* 103182dc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103182df cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103182e2 je 0x10318500 */
  if (C.zf) goto L_10318500;
  /* 103182e8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103182eb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103182ee mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 103182f1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103182f4 jne 0x103183ca */
  if (!C.zf) goto L_103183ca;
  /* 103182fa cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103182fe jge 0x1031835f */
  if ((C.sf==C.of)) goto L_1031835f;
  /* 10318300 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10318305 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10318308 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1031830a not eax */
  EAX = (~(EAX));
  /* 1031830c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1031830f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10318312 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10318316 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10318318 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1031831b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1031831e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10318322 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10318325 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318328 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1031832b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1031832e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10318331 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318334 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10318337 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1031833a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031833d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10318341 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10318343 jne 0x1031835d */
  if (!C.zf) goto L_1031835d;
  /* 10318345 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1031834a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1031834d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1031834f not eax */
  EAX = (~(EAX));
  /* 10318351 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10318354 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10318356 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10318358 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1031835b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1031835d:;
  /* 1031835d jmp 0x103183ca */
  goto L_103183ca;
L_1031835f:;
  /* 1031835f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10318362 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10318365 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1031836a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1031836c not edx */
  EDX = (~(EDX));
  /* 1031836e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10318371 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10318374 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1031837b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1031837d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10318380 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10318383 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1031838a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1031838d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318390 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10318393 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10318396 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10318399 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031839c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1031839f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 103183a2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103183a5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 103183a9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103183ab jne 0x103183ca */
  if (!C.zf) goto L_103183ca;
  /* 103183ad mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103183b0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103183b3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103183b8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103183ba not edx */
  EDX = (~(EDX));
  /* 103183bc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103183bf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103183c2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 103183c4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103183c7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_103183ca:;
  /* 103183ca mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103183cd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 103183d0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103183d3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 103183d6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 103183d9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103183dc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103183df mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103183e2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 103183e5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 103183e8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103183ec je 0x10318500 */
  if (C.zf) goto L_10318500;
  /* 103183f2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103183f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103183f8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 103183fb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103183fe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10318401 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10318404 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10318407 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1031840a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1031840d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10318410 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10318413 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10318416 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10318419 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1031841c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1031841f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10318422 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10318425 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10318428 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1031842b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1031842e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10318431 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10318434 jne 0x10318500 */
  if (!C.zf) goto L_10318500;
  /* 1031843a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031843e jge 0x1031849a */
  if ((C.sf==C.of)) goto L_1031849a;
  /* 10318440 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10318443 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318446 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1031844a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1031844d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318450 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10318453 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10318455 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10318458 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031845b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1031845e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10318460 jne 0x10318478 */
  if (!C.zf) goto L_10318478;
  /* 10318462 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10318467 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1031846a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1031846c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1031846f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10318471 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10318473 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10318476 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10318478:;
  /* 10318478 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1031847d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10318480 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10318482 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10318485 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10318488 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1031848c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1031848e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10318491 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10318494 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10318498 jmp 0x10318500 */
  goto L_10318500;
L_1031849a:;
  /* 1031849a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1031849d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103184a0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 103184a4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 103184a7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103184aa mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 103184ad add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 103184af mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 103184b2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103184b5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 103184b8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103184ba jne 0x103184d7 */
  if (!C.zf) goto L_103184d7;
  /* 103184bc mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103184bf sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103184c2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 103184c7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 103184c9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103184cc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103184cf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 103184d1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103184d4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_103184d7:;
  /* 103184d7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103184da sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103184dd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103184e2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103184e4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103184e7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 103184ea mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 103184f1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 103184f3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103184f6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 103184f9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10318500:;
  /* 10318500 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10318504 je 0x1031851a */
  if (C.zf) goto L_1031851a;
  /* 10318506 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10318509 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031850c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1031850e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10318511 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318514 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10318517 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1031851a:;
  /* 1031851a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1031851d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318520 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10318523 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10318526 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318529 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1031852c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1031852e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10318531 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318534 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10318537 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031853a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1031853d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10318540 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10318542 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10318545 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10318547 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031854a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031854d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1031854f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10318551 jne 0x10318573 */
  if (!C.zf) goto L_10318573;
  /* 10318553 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10318556 cmp eax, dword ptr [0x10340e60] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10340e60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031855c jne 0x10318573 */
  if (!C.zf) goto L_10318573;
  /* 1031855e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10318561 cmp ecx, dword ptr [0x10340e58] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10340e58))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10318567 jne 0x10318573 */
  if (!C.zf) goto L_10318573;
  /* 10318569 mov dword ptr [0x10340e60], 0 */
  w32((uint32_t)(0x10340e60), (0x0u));
L_10318573:;
  /* 10318573 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10318576 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10318579 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1031857b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1031857e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10318581:;
  /* 10318581 pop esi */
  ESI = (pop32());
  /* 10318582 mov esp, ebp */
  ESP = (EBP);
  /* 10318584 pop ebp */
  EBP = (pop32());
  /* 10318585 ret  */
  ESPCHK(0x10318050u, _esp0);
  ESP += 4; return;
}

/* FUN_10008590 @ 0x10318590 (271 bytes, 78 insns) */
void f_10318590(void) {
  FTRACE(0x10318590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10318590 push ebp */
  push32((uint32_t)(EBP));
  /* 10318591 mov ebp, esp */
  EBP = (ESP);
  /* 10318593 push ecx */
  push32((uint32_t)(ECX));
  /* 10318594 mov eax, dword ptr [0x10340e64] */
  EAX = (r32((uint32_t)(0x10340e64)));
  /* 10318599 cmp eax, dword ptr [0x10340e48] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10340e48))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031859f jne 0x103185eb */
  if (!C.zf) goto L_103185eb;
  /* 103185a1 mov ecx, dword ptr [0x10340e48] */
  ECX = (r32((uint32_t)(0x10340e48)));
  /* 103185a7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103185aa imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103185ad push ecx */
  push32((uint32_t)(ECX));
  /* 103185ae mov edx, dword ptr [0x10340e68] */
  EDX = (r32((uint32_t)(0x10340e68)));
  /* 103185b4 push edx */
  push32((uint32_t)(EDX));
  /* 103185b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103185b7 mov eax, dword ptr [0x10340e6c] */
  EAX = (r32((uint32_t)(0x10340e6c)));
  /* 103185bc push eax */
  push32((uint32_t)(EAX));
  /* 103185bd call dword ptr [0x1034235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034235c))), 0x103185c3u);
  /* 103185c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103185c6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103185ca jne 0x103185d3 */
  if (!C.zf) goto L_103185d3;
  /* 103185cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103185ce jmp 0x1031869b */
  goto L_1031869b;
L_103185d3:;
  /* 103185d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103185d6 mov dword ptr [0x10340e68], ecx */
  w32((uint32_t)(0x10340e68), (ECX));
  /* 103185dc mov edx, dword ptr [0x10340e48] */
  EDX = (r32((uint32_t)(0x10340e48)));
  /* 103185e2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103185e5 mov dword ptr [0x10340e48], edx */
  w32((uint32_t)(0x10340e48), (EDX));
L_103185eb:;
  /* 103185eb mov eax, dword ptr [0x10340e64] */
  EAX = (r32((uint32_t)(0x10340e64)));
  /* 103185f0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103185f3 mov ecx, dword ptr [0x10340e68] */
  ECX = (r32((uint32_t)(0x10340e68)));
  /* 103185f9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103185fb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103185fe push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10318603 push 8 */
  push32((uint32_t)(0x8u));
  /* 10318605 mov edx, dword ptr [0x10340e6c] */
  EDX = (r32((uint32_t)(0x10340e6c)));
  /* 1031860b push edx */
  push32((uint32_t)(EDX));
  /* 1031860c call dword ptr [0x10342344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342344))), 0x10318612u);
  /* 10318612 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10318615 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 10318618 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031861b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031861f jne 0x10318625 */
  if (!C.zf) goto L_10318625;
  /* 10318621 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10318623 jmp 0x1031869b */
  goto L_1031869b;
L_10318625:;
  /* 10318625 push 4 */
  push32((uint32_t)(0x4u));
  /* 10318627 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1031862c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10318631 push 0 */
  push32((uint32_t)(0x0u));
  /* 10318633 call dword ptr [0x10342360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342360))), 0x10318639u);
  /* 10318639 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031863c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1031863f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10318642 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10318646 jne 0x10318662 */
  if (!C.zf) goto L_10318662;
  /* 10318648 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031864b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1031864e push ecx */
  push32((uint32_t)(ECX));
  /* 1031864f push 0 */
  push32((uint32_t)(0x0u));
  /* 10318651 mov edx, dword ptr [0x10340e6c] */
  EDX = (r32((uint32_t)(0x10340e6c)));
  /* 10318657 push edx */
  push32((uint32_t)(EDX));
  /* 10318658 call dword ptr [0x1034233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034233c))), 0x1031865eu);
  /* 1031865e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10318660 jmp 0x1031869b */
  goto L_1031869b;
L_10318662:;
  /* 10318662 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10318665 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1031866b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031866e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10318675 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10318678 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1031867f mov eax, dword ptr [0x10340e64] */
  EAX = (r32((uint32_t)(0x10340e64)));
  /* 10318684 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318687 mov dword ptr [0x10340e64], eax */
  w32((uint32_t)(0x10340e64), (EAX));
  /* 1031868c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031868f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10318692 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 10318698 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1031869b:;
  /* 1031869b mov esp, ebp */
  ESP = (EBP);
  /* 1031869d pop ebp */
  EBP = (pop32());
  /* 1031869e ret  */
  ESPCHK(0x10318590u, _esp0);
  ESP += 4; return;
}

/* FUN_100086a0 @ 0x103186a0 (494 bytes, 149 insns) */
void f_103186a0(void) {
  FTRACE(0x103186a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103186a0 push ebp */
  push32((uint32_t)(EBP));
  /* 103186a1 mov ebp, esp */
  EBP = (ESP);
  /* 103186a3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103186a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103186a9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103186ac mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 103186af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103186b2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 103186b5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103186b8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_103186bf:;
  /* 103186bf cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103186c3 jl 0x103186d8 */
  if ((C.sf!=C.of)) goto L_103186d8;
  /* 103186c5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103186c8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 103186ca mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103186cd mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 103186d0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103186d3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 103186d6 jmp 0x103186bf */
  goto L_103186bf;
L_103186d8:;
  /* 103186d8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 103186db imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103186e1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103186e4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 103186eb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 103186ee mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 103186f5 jmp 0x10318700 */
  goto L_10318700;
L_103186f7:;
  /* 103186f7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 103186fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103186fd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10318700:;
  /* 10318700 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10318704 jge 0x10318726 */
  if ((C.sf==C.of)) goto L_10318726;
  /* 10318706 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10318709 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031870c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 1031870f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10318712 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10318715 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10318718 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1031871b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1031871e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10318721 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10318724 jmp 0x103186f7 */
  goto L_103186f7;
L_10318726:;
  /* 10318726 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10318729 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1031872c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031872f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10318732 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318734 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10318737 push 4 */
  push32((uint32_t)(0x4u));
  /* 10318739 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1031873e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10318743 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10318746 push edx */
  push32((uint32_t)(EDX));
  /* 10318747 call dword ptr [0x10342360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342360))), 0x1031874du);
  /* 1031874d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031874f jne 0x10318759 */
  if (!C.zf) goto L_10318759;
  /* 10318751 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10318754 jmp 0x1031888a */
  goto L_1031888a;
L_10318759:;
  /* 10318759 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1031875c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318761 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10318764 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10318767 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1031876a jmp 0x10318778 */
  goto L_10318778;
L_1031876c:;
  /* 1031876c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031876f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318775 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10318778:;
  /* 10318778 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031877b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031877e ja 0x103187dd */
  if ((!C.cf&&!C.zf)) goto L_103187dd;
  /* 10318780 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10318783 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 1031878a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031878d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 10318797 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031879a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031879d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 103187a0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103187a3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 103187a9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103187ac add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103187b2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103187b5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 103187b8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103187bb sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103187c1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103187c4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 103187c7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103187ca add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103187cf mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 103187d2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103187d5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 103187db jmp 0x1031876c */
  goto L_1031876c;
L_103187dd:;
  /* 103187dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103187e0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103187e6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 103187e9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103187ec add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103187ef mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103187f2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 103187f5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103187f8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 103187fb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 103187fe mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10318801 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10318804 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10318807 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1031880a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031880d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10318810 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10318813 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10318816 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10318819 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1031881c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1031881f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10318822 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10318825 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10318828 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1031882b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 10318833 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10318836 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10318839 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 10318844 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10318847 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 1031884b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1031884e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 10318851 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10318854 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10318857 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 1031885a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1031885c jne 0x1031886d */
  if (!C.zf) goto L_1031886d;
  /* 1031885e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10318861 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10318864 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10318867 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031886a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1031886d:;
  /* 1031886d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10318872 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10318875 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10318877 not edx */
  EDX = (~(EDX));
  /* 10318879 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031887c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1031887f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10318881 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10318884 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10318887 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_1031888a:;
  /* 1031888a mov esp, ebp */
  ESP = (EBP);
  /* 1031888c pop ebp */
  EBP = (pop32());
  /* 1031888d ret  */
  ESPCHK(0x103186a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008890 @ 0x10318890 (1515 bytes, 489 insns) */
void f_10318890(void) {
  FTRACE(0x10318890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10318890 push ebp */
  push32((uint32_t)(EBP));
  /* 10318891 mov ebp, esp */
  EBP = (ESP);
  /* 10318893 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10318896 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10318899 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031889c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1031889e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 103188a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103188a4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 103188a7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 103188aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103188ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103188b0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103188b3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103188b6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103188b9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 103188bc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103188bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103188c2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103188c8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103188cb lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 103188d2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 103188d5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103188d8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103188db mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 103188de mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103188e1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103188e3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103188e6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 103188e9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103188ec add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103188ef mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 103188f2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103188f5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103188f7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 103188fa mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103188fd cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10318900 jle 0x10318bb6 */
  if ((C.zf||C.sf!=C.of)) goto L_10318bb6;
  /* 10318906 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10318909 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1031890c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1031890e jne 0x1031891b */
  if (!C.zf) goto L_1031891b;
  /* 10318910 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10318913 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318916 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10318919 jle 0x10318922 */
  if ((C.zf||C.sf!=C.of)) goto L_10318922;
L_1031891b:;
  /* 1031891b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031891d jmp 0x10318e77 */
  goto L_10318e77;
L_10318922:;
  /* 10318922 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10318925 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10318928 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031892b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1031892e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10318932 jbe 0x1031893b */
  if ((C.cf||C.zf)) goto L_1031893b;
  /* 10318934 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1031893b:;
  /* 1031893b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1031893e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10318941 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10318944 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10318947 jne 0x10318a1d */
  if (!C.zf) goto L_10318a1d;
  /* 1031894d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10318951 jae 0x103189b2 */
  if (!C.cf) goto L_103189b2;
  /* 10318953 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10318958 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1031895b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1031895d not edx */
  EDX = (~(EDX));
  /* 1031895f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10318962 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10318965 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10318969 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1031896b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031896e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10318971 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10318975 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10318978 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031897b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1031897e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10318981 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10318984 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318987 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1031898a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1031898d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318990 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10318994 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10318996 jne 0x103189b0 */
  if (!C.zf) goto L_103189b0;
  /* 10318998 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1031899d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103189a0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103189a2 not edx */
  EDX = (~(EDX));
  /* 103189a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103189a7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103189a9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 103189ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103189ae mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_103189b0:;
  /* 103189b0 jmp 0x10318a1d */
  goto L_10318a1d;
L_103189b2:;
  /* 103189b2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103189b5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103189b8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 103189bd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 103189bf not eax */
  EAX = (~(EAX));
  /* 103189c1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103189c4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 103189c7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 103189ce and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103189d0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103189d3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103189d6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 103189dd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103189e0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103189e3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 103189e6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 103189e9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103189ec add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103189ef mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 103189f2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103189f5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103189f8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 103189fc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103189fe jne 0x10318a1d */
  if (!C.zf) goto L_10318a1d;
  /* 10318a00 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10318a03 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10318a06 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10318a0b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10318a0d not eax */
  EAX = (~(EAX));
  /* 10318a0f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10318a12 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10318a15 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10318a17 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10318a1a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10318a1d:;
  /* 10318a1d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10318a20 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10318a23 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10318a26 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10318a29 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10318a2c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10318a2f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10318a32 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10318a35 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10318a38 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10318a3b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10318a3e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318a41 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10318a44 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10318a47 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10318a4b jle 0x10318b97 */
  if ((C.zf||C.sf!=C.of)) goto L_10318b97;
  /* 10318a51 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10318a54 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318a57 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10318a5a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10318a5d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10318a60 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10318a63 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10318a66 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10318a6a jbe 0x10318a73 */
  if ((C.cf||C.zf)) goto L_10318a73;
  /* 10318a6c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10318a73:;
  /* 10318a73 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10318a76 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10318a79 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10318a7c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10318a7f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10318a82 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10318a85 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10318a88 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10318a8b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10318a8e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10318a91 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10318a94 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10318a97 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10318a9a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10318a9d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10318aa0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10318aa3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10318aa6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10318aa9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10318aac mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10318aaf mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10318ab2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10318ab5 jne 0x10318b83 */
  if (!C.zf) goto L_10318b83;
  /* 10318abb cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10318abf jae 0x10318b1c */
  if (!C.cf) goto L_10318b1c;
  /* 10318ac1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10318ac4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318ac7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10318acb mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10318ace add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318ad1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10318ad4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10318ad7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10318ada add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318add mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10318ae0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10318ae2 jne 0x10318afa */
  if (!C.zf) goto L_10318afa;
  /* 10318ae4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10318ae9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10318aec shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10318aee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10318af1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10318af3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10318af5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10318af8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10318afa:;
  /* 10318afa mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10318aff mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10318b02 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10318b04 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10318b07 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10318b0a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10318b0e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10318b10 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10318b13 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10318b16 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10318b1a jmp 0x10318b83 */
  goto L_10318b83;
L_10318b1c:;
  /* 10318b1c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10318b1f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318b22 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10318b26 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10318b29 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318b2c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10318b2f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10318b32 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10318b35 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318b38 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10318b3b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10318b3d jne 0x10318b5a */
  if (!C.zf) goto L_10318b5a;
  /* 10318b3f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10318b42 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10318b45 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10318b4a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10318b4c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10318b4f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10318b52 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10318b54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10318b57 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10318b5a:;
  /* 10318b5a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10318b5d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10318b60 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10318b65 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10318b67 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10318b6a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10318b6d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10318b74 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10318b76 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10318b79 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10318b7c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10318b83:;
  /* 10318b83 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10318b86 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10318b89 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10318b8b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10318b8e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318b91 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10318b94 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_10318b97:;
  /* 10318b97 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10318b9a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318b9d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10318ba0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10318ba2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10318ba5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318ba8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10318bab add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318bae mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10318bb1 jmp 0x10318e72 */
  goto L_10318e72;
L_10318bb6:;
  /* 10318bb6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10318bb9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10318bbc jge 0x10318e72 */
  if ((C.sf==C.of)) goto L_10318e72;
  /* 10318bc2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10318bc5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318bc8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10318bcb mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10318bcd mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10318bd0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318bd3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10318bd6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318bd9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 10318bdc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10318bdf add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318be2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10318be5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10318be8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10318beb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10318bee mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10318bf1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10318bf4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10318bf7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10318bfa cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10318bfe jbe 0x10318c07 */
  if ((C.cf||C.zf)) goto L_10318c07;
  /* 10318c00 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10318c07:;
  /* 10318c07 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10318c0a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10318c0d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10318c0f jne 0x10318d50 */
  if (!C.zf) goto L_10318d50;
  /* 10318c15 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10318c18 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10318c1b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10318c1e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10318c21 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10318c25 jbe 0x10318c2e */
  if ((C.cf||C.zf)) goto L_10318c2e;
  /* 10318c27 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10318c2e:;
  /* 10318c2e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10318c31 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10318c34 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10318c37 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10318c3a jne 0x10318d10 */
  if (!C.zf) goto L_10318d10;
  /* 10318c40 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10318c44 jae 0x10318ca5 */
  if (!C.cf) goto L_10318ca5;
  /* 10318c46 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10318c4b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10318c4e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10318c50 not edx */
  EDX = (~(EDX));
  /* 10318c52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10318c55 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10318c58 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10318c5c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10318c5e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10318c61 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10318c64 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10318c68 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10318c6b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318c6e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10318c71 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10318c74 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10318c77 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318c7a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10318c7d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10318c80 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318c83 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10318c87 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10318c89 jne 0x10318ca3 */
  if (!C.zf) goto L_10318ca3;
  /* 10318c8b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10318c90 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10318c93 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10318c95 not edx */
  EDX = (~(EDX));
  /* 10318c97 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10318c9a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10318c9c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10318c9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10318ca1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10318ca3:;
  /* 10318ca3 jmp 0x10318d10 */
  goto L_10318d10;
L_10318ca5:;
  /* 10318ca5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10318ca8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10318cab mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10318cb0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10318cb2 not eax */
  EAX = (~(EAX));
  /* 10318cb4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10318cb7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10318cba mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10318cc1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10318cc3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10318cc6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10318cc9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10318cd0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10318cd3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318cd6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10318cd9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10318cdc mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10318cdf add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318ce2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10318ce5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10318ce8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318ceb movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10318cef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10318cf1 jne 0x10318d10 */
  if (!C.zf) goto L_10318d10;
  /* 10318cf3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10318cf6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10318cf9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10318cfe shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10318d00 not eax */
  EAX = (~(EAX));
  /* 10318d02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10318d05 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10318d08 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10318d0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10318d0d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10318d10:;
  /* 10318d10 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10318d13 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10318d16 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10318d19 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10318d1c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10318d1f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10318d22 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10318d25 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10318d28 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10318d2b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10318d2e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10318d31 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318d34 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10318d37 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10318d3a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10318d3d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10318d40 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10318d43 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10318d47 jbe 0x10318d50 */
  if ((C.cf||C.zf)) goto L_10318d50;
  /* 10318d49 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10318d50:;
  /* 10318d50 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10318d53 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10318d56 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10318d59 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10318d5c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10318d5f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10318d62 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10318d65 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10318d68 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10318d6b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10318d6e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10318d71 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10318d74 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10318d77 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10318d7a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10318d7d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10318d80 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10318d83 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10318d86 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10318d89 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10318d8c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10318d8f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10318d92 jne 0x10318e5e */
  if (!C.zf) goto L_10318e5e;
  /* 10318d98 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10318d9c jae 0x10318df8 */
  if (!C.cf) goto L_10318df8;
  /* 10318d9e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10318da1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318da4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10318da8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10318dab add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318dae mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10318db1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10318db3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10318db6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318db9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10318dbc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10318dbe jne 0x10318dd6 */
  if (!C.zf) goto L_10318dd6;
  /* 10318dc0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10318dc5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10318dc8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10318dca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10318dcd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10318dcf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10318dd1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10318dd4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10318dd6:;
  /* 10318dd6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10318ddb mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10318dde shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10318de0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10318de3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10318de6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10318dea or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10318dec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10318def mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10318df2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10318df6 jmp 0x10318e5e */
  goto L_10318e5e;
L_10318df8:;
  /* 10318df8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10318dfb add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318dfe movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10318e02 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10318e05 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318e08 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10318e0b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10318e0d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10318e10 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318e13 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10318e16 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10318e18 jne 0x10318e35 */
  if (!C.zf) goto L_10318e35;
  /* 10318e1a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10318e1d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10318e20 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10318e25 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10318e27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10318e2a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10318e2d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10318e2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10318e32 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10318e35:;
  /* 10318e35 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10318e38 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10318e3b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10318e40 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10318e42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10318e45 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10318e48 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10318e4f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10318e51 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10318e54 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10318e57 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10318e5e:;
  /* 10318e5e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10318e61 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10318e64 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10318e66 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10318e69 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318e6c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10318e6f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10318e72:;
  /* 10318e72 mov eax, 1 */
  EAX = (0x1u);
L_10318e77:;
  /* 10318e77 mov esp, ebp */
  ESP = (EBP);
  /* 10318e79 pop ebp */
  EBP = (pop32());
  /* 10318e7a ret  */
  ESPCHK(0x10318890u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e80 @ 0x10318e80 (304 bytes, 79 insns) */
void f_10318e80(void) {
  FTRACE(0x10318e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10318e80 push ebp */
  push32((uint32_t)(EBP));
  /* 10318e81 mov ebp, esp */
  EBP = (ESP);
  /* 10318e83 push ecx */
  push32((uint32_t)(ECX));
  /* 10318e84 cmp dword ptr [0x10340e60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10340e60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10318e8b je 0x10318fac */
  if (C.zf) goto L_10318fac;
  /* 10318e91 mov eax, dword ptr [0x10340e58] */
  EAX = (r32((uint32_t)(0x10340e58)));
  /* 10318e96 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10318e99 mov ecx, dword ptr [0x10340e60] */
  ECX = (r32((uint32_t)(0x10340e60)));
  /* 10318e9f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10318ea2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318ea4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10318ea7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10318eac push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10318eb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10318eb4 push eax */
  push32((uint32_t)(EAX));
  /* 10318eb5 call dword ptr [0x10342340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342340))), 0x10318ebbu);
  /* 10318ebb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10318ec0 mov ecx, dword ptr [0x10340e58] */
  ECX = (r32((uint32_t)(0x10340e58)));
  /* 10318ec6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10318ec8 mov eax, dword ptr [0x10340e60] */
  EAX = (r32((uint32_t)(0x10340e60)));
  /* 10318ecd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10318ed0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10318ed2 mov edx, dword ptr [0x10340e60] */
  EDX = (r32((uint32_t)(0x10340e60)));
  /* 10318ed8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10318edb mov eax, dword ptr [0x10340e60] */
  EAX = (r32((uint32_t)(0x10340e60)));
  /* 10318ee0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10318ee3 mov edx, dword ptr [0x10340e58] */
  EDX = (r32((uint32_t)(0x10340e58)));
  /* 10318ee9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10318ef4 mov eax, dword ptr [0x10340e60] */
  EAX = (r32((uint32_t)(0x10340e60)));
  /* 10318ef9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10318efc mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10318eff sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10318f02 mov eax, dword ptr [0x10340e60] */
  EAX = (r32((uint32_t)(0x10340e60)));
  /* 10318f07 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10318f0a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10318f0d mov edx, dword ptr [0x10340e60] */
  EDX = (r32((uint32_t)(0x10340e60)));
  /* 10318f13 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10318f16 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10318f1a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10318f1c jne 0x10318f32 */
  if (!C.zf) goto L_10318f32;
  /* 10318f1e mov edx, dword ptr [0x10340e60] */
  EDX = (r32((uint32_t)(0x10340e60)));
  /* 10318f24 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10318f27 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10318f29 mov ecx, dword ptr [0x10340e60] */
  ECX = (r32((uint32_t)(0x10340e60)));
  /* 10318f2f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10318f32:;
  /* 10318f32 mov edx, dword ptr [0x10340e60] */
  EDX = (r32((uint32_t)(0x10340e60)));
  /* 10318f38 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10318f3c jne 0x10318fa2 */
  if (!C.zf) goto L_10318fa2;
  /* 10318f3e cmp dword ptr [0x10340e64], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10340e64))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10318f45 jle 0x10318fa2 */
  if ((C.zf||C.sf!=C.of)) goto L_10318fa2;
  /* 10318f47 mov eax, dword ptr [0x10340e60] */
  EAX = (r32((uint32_t)(0x10340e60)));
  /* 10318f4c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10318f4f push ecx */
  push32((uint32_t)(ECX));
  /* 10318f50 push 0 */
  push32((uint32_t)(0x0u));
  /* 10318f52 mov edx, dword ptr [0x10340e6c] */
  EDX = (r32((uint32_t)(0x10340e6c)));
  /* 10318f58 push edx */
  push32((uint32_t)(EDX));
  /* 10318f59 call dword ptr [0x1034233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034233c))), 0x10318f5fu);
  /* 10318f5f mov eax, dword ptr [0x10340e64] */
  EAX = (r32((uint32_t)(0x10340e64)));
  /* 10318f64 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10318f67 mov ecx, dword ptr [0x10340e68] */
  ECX = (r32((uint32_t)(0x10340e68)));
  /* 10318f6d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318f6f mov edx, dword ptr [0x10340e60] */
  EDX = (r32((uint32_t)(0x10340e60)));
  /* 10318f75 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318f78 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10318f7a push ecx */
  push32((uint32_t)(ECX));
  /* 10318f7b mov eax, dword ptr [0x10340e60] */
  EAX = (r32((uint32_t)(0x10340e60)));
  /* 10318f80 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318f83 push eax */
  push32((uint32_t)(EAX));
  /* 10318f84 mov ecx, dword ptr [0x10340e60] */
  ECX = (r32((uint32_t)(0x10340e60)));
  /* 10318f8a push ecx */
  push32((uint32_t)(ECX));
  /* 10318f8b call 0x1031b5b0 */
  push32(0x10318f90u); f_1031b5b0();
  /* 10318f90 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10318f93 mov edx, dword ptr [0x10340e64] */
  EDX = (r32((uint32_t)(0x10340e64)));
  /* 10318f99 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10318f9c mov dword ptr [0x10340e64], edx */
  w32((uint32_t)(0x10340e64), (EDX));
L_10318fa2:;
  /* 10318fa2 mov dword ptr [0x10340e60], 0 */
  w32((uint32_t)(0x10340e60), (0x0u));
L_10318fac:;
  /* 10318fac mov esp, ebp */
  ESP = (EBP);
  /* 10318fae pop ebp */
  EBP = (pop32());
  /* 10318faf ret  */
  ESPCHK(0x10318e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10008fb0 @ 0x10318fb0 (1565 bytes, 343 insns) */
void f_10318fb0(void) {
  FTRACE(0x10318fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10318fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10318fb1 mov ebp, esp */
  EBP = (ESP);
  /* 10318fb3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10318fb9 mov eax, dword ptr [0x10340e64] */
  EAX = (r32((uint32_t)(0x10340e64)));
  /* 10318fbe imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10318fc1 push eax */
  push32((uint32_t)(EAX));
  /* 10318fc2 mov ecx, dword ptr [0x10340e68] */
  ECX = (r32((uint32_t)(0x10340e68)));
  /* 10318fc8 push ecx */
  push32((uint32_t)(ECX));
  /* 10318fc9 call dword ptr [0x10342314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342314))), 0x10318fcfu);
  /* 10318fcf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10318fd1 je 0x10318fdb */
  if (C.zf) goto L_10318fdb;
  /* 10318fd3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10318fd6 jmp 0x103195c9 */
  goto L_103195c9;
L_10318fdb:;
  /* 10318fdb mov edx, dword ptr [0x10340e68] */
  EDX = (r32((uint32_t)(0x10340e68)));
  /* 10318fe1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 10318fe7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 10318ff1 jmp 0x10319002 */
  goto L_10319002;
L_10318ff3:;
  /* 10318ff3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 10318ff9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10318ffc mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_10319002:;
  /* 10319002 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 10319008 cmp ecx, dword ptr [0x10340e64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10340e64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031900e jge 0x103195c7 */
  if ((C.sf==C.of)) goto L_103195c7;
  /* 10319014 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1031901a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1031901d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 10319023 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10319028 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1031902e push ecx */
  push32((uint32_t)(ECX));
  /* 1031902f call dword ptr [0x10342314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342314))), 0x10319035u);
  /* 10319035 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10319037 je 0x10319043 */
  if (C.zf) goto L_10319043;
  /* 10319039 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1031903e jmp 0x103195c9 */
  goto L_103195c9;
L_10319043:;
  /* 10319043 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10319049 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1031904c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 10319052 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10319058 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031905e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10319061 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10319067 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1031906a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1031906d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 10319077 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 10319081 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10319088 jmp 0x10319093 */
  goto L_10319093;
L_1031908a:;
  /* 1031908a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031908d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10319090 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10319093:;
  /* 10319093 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319097 jge 0x1031958b */
  if ((C.sf==C.of)) goto L_1031958b;
  /* 1031909d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 103190a7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 103190b1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 103190bb mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 103190c5 jmp 0x103190d6 */
  goto L_103190d6;
L_103190c7:;
  /* 103190c7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 103190cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103190d0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_103190d6:;
  /* 103190d6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103190dd jge 0x103190f2 */
  if ((C.sf==C.of)) goto L_103190f2;
  /* 103190df mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 103190e5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 103190f0 jmp 0x103190c7 */
  goto L_103190c7;
L_103190f2:;
  /* 103190f2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103190f6 jl 0x1031952d */
  if ((C.sf!=C.of)) goto L_1031952d;
  /* 103190fc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10319101 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 10319107 push ecx */
  push32((uint32_t)(ECX));
  /* 10319108 call dword ptr [0x10342314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342314))), 0x1031910eu);
  /* 1031910e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10319110 je 0x1031911c */
  if (C.zf) goto L_1031911c;
  /* 10319112 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 10319117 jmp 0x103195c9 */
  goto L_103195c9;
L_1031911c:;
  /* 1031911c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10319122 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10319125 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1031912f jmp 0x10319140 */
  goto L_10319140;
L_10319131:;
  /* 10319131 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 10319137 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031913a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_10319140:;
  /* 10319140 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319147 jge 0x103192c4 */
  if ((C.sf==C.of)) goto L_103192c4;
  /* 1031914d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10319150 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10319153 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 10319159 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1031915f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10319165 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 1031916b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10319171 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319175 jne 0x10319182 */
  if (!C.zf) goto L_10319182;
  /* 10319177 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 1031917d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319180 je 0x1031918c */
  if (C.zf) goto L_1031918c;
L_10319182:;
  /* 10319182 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 10319187 jmp 0x103195c9 */
  goto L_103195c9;
L_1031918c:;
  /* 1031918c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10319192 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10319194 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1031919a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 103191a0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 103191a6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 103191ac and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 103191af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103191b1 je 0x103191e9 */
  if (C.zf) goto L_103191e9;
  /* 103191b3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 103191b9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103191bc mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 103191c2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103191cc jle 0x103191d8 */
  if ((C.zf||C.sf!=C.of)) goto L_103191d8;
  /* 103191ce mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 103191d3 jmp 0x103195c9 */
  goto L_103195c9;
L_103191d8:;
  /* 103191d8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 103191de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103191e1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 103191e7 jmp 0x1031922b */
  goto L_1031922b;
L_103191e9:;
  /* 103191e9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 103191ef sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 103191f2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103191f5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 103191fb cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319202 jle 0x1031920e */
  if ((C.zf||C.sf!=C.of)) goto L_1031920e;
  /* 10319204 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1031920e:;
  /* 1031920e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10319214 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1031921b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031921e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10319224 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1031922b:;
  /* 1031922b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319232 jl 0x1031924d */
  if ((C.sf!=C.of)) goto L_1031924d;
  /* 10319234 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1031923a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1031923d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031923f jne 0x1031924d */
  if (!C.zf) goto L_1031924d;
  /* 10319241 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031924b jle 0x10319257 */
  if ((C.zf||C.sf!=C.of)) goto L_10319257;
L_1031924d:;
  /* 1031924d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 10319252 jmp 0x103195c9 */
  goto L_103195c9;
L_10319257:;
  /* 10319257 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1031925d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10319263 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10319266 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031926c je 0x10319278 */
  if (C.zf) goto L_10319278;
  /* 1031926e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10319273 jmp 0x103195c9 */
  goto L_103195c9;
L_10319278:;
  /* 10319278 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1031927e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10319284 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1031928a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10319290 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319296 jb 0x1031918c */
  if (C.cf) goto L_1031918c;
  /* 1031929c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 103192a2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103192a8 je 0x103192b4 */
  if (C.zf) goto L_103192b4;
  /* 103192aa mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 103192af jmp 0x103195c9 */
  goto L_103195c9;
L_103192b4:;
  /* 103192b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103192b7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103192bc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103192bf jmp 0x10319131 */
  goto L_10319131;
L_103192c4:;
  /* 103192c4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103192c7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103192c9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103192cf je 0x103192db */
  if (C.zf) goto L_103192db;
  /* 103192d1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 103192d6 jmp 0x103195c9 */
  goto L_103195c9;
L_103192db:;
  /* 103192db mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103192de mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 103192e4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 103192eb jmp 0x103192f6 */
  goto L_103192f6;
L_103192ed:;
  /* 103192ed mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103192f0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103192f3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_103192f6:;
  /* 103192f6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103192fa jge 0x1031952d */
  if ((C.sf==C.of)) goto L_1031952d;
  /* 10319300 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1031930a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10319310 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_10319316:;
  /* 10319316 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1031931c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1031931f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 10319325 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1031932b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319331 je 0x1031945a */
  if (C.zf) goto L_1031945a;
  /* 10319337 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1031933a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10319340 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319347 je 0x1031945a */
  if (C.zf) goto L_1031945a;
  /* 1031934d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10319353 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319359 jb 0x1031936e */
  if (C.cf) goto L_1031936e;
  /* 1031935b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 10319361 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10319366 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031936c jb 0x10319378 */
  if (C.cf) goto L_10319378;
L_1031936e:;
  /* 1031936e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 10319373 jmp 0x103195c9 */
  goto L_103195c9;
L_10319378:;
  /* 10319378 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1031937e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 10319384 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1031938a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 10319390 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10319393 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10319396 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10319399 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031939e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_103193a4:;
  /* 103193a4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103193a7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103193ad je 0x103193ce */
  if (C.zf) goto L_103193ce;
  /* 103193af mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103193b2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103193b8 jne 0x103193bc */
  if (!C.zf) goto L_103193bc;
  /* 103193ba jmp 0x103193ce */
  goto L_103193ce;
L_103193bc:;
  /* 103193bc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103193bf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103193c1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 103193c4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103193c7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103193c9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 103193cc jmp 0x103193a4 */
  goto L_103193a4;
L_103193ce:;
  /* 103193ce mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103193d1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103193d7 jne 0x103193e3 */
  if (!C.zf) goto L_103193e3;
  /* 103193d9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 103193de jmp 0x103195c9 */
  goto L_103195c9;
L_103193e3:;
  /* 103193e3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 103193e9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103193eb sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 103193ee sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103193f1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 103193f7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103193fe jle 0x1031940a */
  if ((C.zf||C.sf!=C.of)) goto L_1031940a;
  /* 10319400 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1031940a:;
  /* 1031940a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10319410 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319413 je 0x1031941f */
  if (C.zf) goto L_1031941f;
  /* 10319415 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1031941a jmp 0x103195c9 */
  goto L_103195c9;
L_1031941f:;
  /* 1031941f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10319425 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10319428 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031942e je 0x1031943a */
  if (C.zf) goto L_1031943a;
  /* 10319430 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 10319435 jmp 0x103195c9 */
  goto L_103195c9;
L_1031943a:;
  /* 1031943a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10319440 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10319446 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1031944c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031944f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 10319455 jmp 0x10319316 */
  goto L_10319316;
L_1031945a:;
  /* 1031945a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319461 je 0x103194d1 */
  if (C.zf) goto L_103194d1;
  /* 10319463 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319467 jge 0x1031949b */
  if ((C.sf==C.of)) goto L_1031949b;
  /* 10319469 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1031946e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10319471 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10319473 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10319479 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1031947b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 10319481 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10319486 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10319489 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1031948b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10319491 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10319493 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 10319499 jmp 0x103194d1 */
  goto L_103194d1;
L_1031949b:;
  /* 1031949b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1031949e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103194a1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103194a6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103194a8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 103194ae or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 103194b0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 103194b6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103194b9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103194bc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103194c1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103194c3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 103194c9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 103194cb mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_103194d1:;
  /* 103194d1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 103194d7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103194da cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103194e0 jne 0x103194f4 */
  if (!C.zf) goto L_103194f4;
  /* 103194e2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103194e5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 103194eb cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103194f2 je 0x103194fe */
  if (C.zf) goto L_103194fe;
L_103194f4:;
  /* 103194f4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 103194f9 jmp 0x103195c9 */
  goto L_103195c9;
L_103194fe:;
  /* 103194fe mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10319504 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10319507 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031950d je 0x10319519 */
  if (C.zf) goto L_10319519;
  /* 1031950f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 10319514 jmp 0x103195c9 */
  goto L_103195c9;
L_10319519:;
  /* 10319519 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1031951f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10319522 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 10319528 jmp 0x103192ed */
  goto L_103192ed;
L_1031952d:;
  /* 1031952d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10319530 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10319536 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1031953c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319540 jne 0x1031955a */
  if (!C.zf) goto L_1031955a;
  /* 10319542 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10319545 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1031954b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 10319551 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319558 je 0x10319561 */
  if (C.zf) goto L_10319561;
L_1031955a:;
  /* 1031955a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1031955f jmp 0x103195c9 */
  goto L_103195c9;
L_10319561:;
  /* 10319561 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10319567 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031956d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 10319573 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10319576 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031957b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1031957e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10319581 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10319583 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10319586 jmp 0x1031908a */
  goto L_1031908a;
L_1031958b:;
  /* 1031958b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10319591 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10319597 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319599 jne 0x103195ac */
  if (!C.zf) goto L_103195ac;
  /* 1031959b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 103195a1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 103195a7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103195aa je 0x103195b3 */
  if (C.zf) goto L_103195b3;
L_103195ac:;
  /* 103195ac mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 103195b1 jmp 0x103195c9 */
  goto L_103195c9;
L_103195b3:;
  /* 103195b3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 103195b9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103195bc mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 103195c2 jmp 0x10318ff3 */
  goto L_10318ff3;
L_103195c7:;
  /* 103195c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103195c9:;
  /* 103195c9 mov esp, ebp */
  ESP = (EBP);
  /* 103195cb pop ebp */
  EBP = (pop32());
  /* 103195cc ret  */
  ESPCHK(0x10318fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_100095d0 @ 0x103195d0 (250 bytes, 92 insns) */
void f_103195d0(void) {
  FTRACE(0x103195d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103195d0 push ebp */
  push32((uint32_t)(EBP));
  /* 103195d1 mov ebp, esp */
  EBP = (ESP);
  /* 103195d3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103195d6 push ebx */
  push32((uint32_t)(EBX));
  /* 103195d7 push esi */
  push32((uint32_t)(ESI));
  /* 103195d8 push edi */
  push32((uint32_t)(EDI));
  /* 103195d9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 103195dc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 103195df lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 103195e2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_103195e5:;
  /* 103195e5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103195e9 jne 0x10319609 */
  if (!C.zf) goto L_10319609;
  /* 103195eb push 0x1033ae44 */
  push32((uint32_t)(0x1033ae44u));
  /* 103195f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103195f2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 103195f4 push 0x1033ae38 */
  push32((uint32_t)(0x1033ae38u));
  /* 103195f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 103195fb call 0x10312780 */
  push32(0x10319600u); f_10312780();
  /* 10319600 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10319603 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319606 jne 0x10319609 */
  if (!C.zf) goto L_10319609;
  /* 10319608 int3  */
  x86_unimpl("int3 @ 0x10319608");
L_10319609:;
  /* 10319609 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1031960b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1031960d jne 0x103195e5 */
  if (!C.zf) goto L_103195e5;
L_1031960f:;
  /* 1031960f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319613 jne 0x10319633 */
  if (!C.zf) goto L_10319633;
  /* 10319615 push 0x1033ae28 */
  push32((uint32_t)(0x1033ae28u));
  /* 1031961a push 0 */
  push32((uint32_t)(0x0u));
  /* 1031961c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1031961e push 0x1033ae38 */
  push32((uint32_t)(0x1033ae38u));
  /* 10319623 push 2 */
  push32((uint32_t)(0x2u));
  /* 10319625 call 0x10312780 */
  push32(0x1031962au); f_10312780();
  /* 1031962a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031962d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319630 jne 0x10319633 */
  if (!C.zf) goto L_10319633;
  /* 10319632 int3  */
  x86_unimpl("int3 @ 0x10319632");
L_10319633:;
  /* 10319633 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10319635 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10319637 jne 0x1031960f */
  if (!C.zf) goto L_1031960f;
  /* 10319639 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1031963c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10319643 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10319646 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10319649 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1031964c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1031964f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10319652 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10319654 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10319657 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 1031965e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10319661 push ecx */
  push32((uint32_t)(ECX));
  /* 10319662 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10319665 push edx */
  push32((uint32_t)(EDX));
  /* 10319666 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10319669 push eax */
  push32((uint32_t)(EAX));
  /* 1031966a call 0x1031a650 */
  push32(0x1031966fu); f_1031a650();
  /* 1031966f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10319672 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10319675 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10319678 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1031967b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031967e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10319681 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10319684 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10319687 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031968b jl 0x103196af */
  if ((C.sf!=C.of)) goto L_103196af;
  /* 1031968d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10319690 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10319692 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10319695 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10319697 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1031969d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 103196a0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103196a3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103196a5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103196a8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103196ab mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 103196ad jmp 0x103196c0 */
  goto L_103196c0;
L_103196af:;
  /* 103196af mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103196b2 push edx */
  push32((uint32_t)(EDX));
  /* 103196b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103196b5 call 0x1031a3d0 */
  push32(0x103196bau); f_1031a3d0();
  /* 103196ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103196bd mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_103196c0:;
  /* 103196c0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 103196c3 pop edi */
  EDI = (pop32());
  /* 103196c4 pop esi */
  ESI = (pop32());
  /* 103196c5 pop ebx */
  EBX = (pop32());
  /* 103196c6 mov esp, ebp */
  ESP = (EBP);
  /* 103196c8 pop ebp */
  EBP = (pop32());
  /* 103196c9 ret  */
  ESPCHK(0x103195d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100096d0 @ 0x103196d0 (183 bytes, 58 insns) */
void f_103196d0(void) {
  FTRACE(0x103196d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103196d0 push ebp */
  push32((uint32_t)(EBP));
  /* 103196d1 mov ebp, esp */
  EBP = (ESP);
  /* 103196d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103196d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103196d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103196dc cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103196e1 ja 0x103196fa */
  if ((!C.cf&&!C.zf)) goto L_103196fa;
  /* 103196e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103196e6 mov edx, dword ptr [0x1033dc98] */
  EDX = (r32((uint32_t)(0x1033dc98)));
  /* 103196ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103196ee mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 103196f2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 103196f5 jmp 0x10319783 */
  goto L_10319783;
L_103196fa:;
  /* 103196fa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103196fd sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10319700 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10319706 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1031970c mov edx, dword ptr [0x1033dc98] */
  EDX = (r32((uint32_t)(0x1033dc98)));
  /* 10319712 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10319714 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10319718 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1031971d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031971f je 0x10319743 */
  if (C.zf) goto L_10319743;
  /* 10319721 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10319724 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10319727 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1031972d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10319730 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 10319733 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 10319736 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1031973a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 10319741 jmp 0x10319754 */
  goto L_10319754;
L_10319743:;
  /* 10319743 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10319746 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10319749 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1031974d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10319754:;
  /* 10319754 push 1 */
  push32((uint32_t)(0x1u));
  /* 10319756 push 0 */
  push32((uint32_t)(0x0u));
  /* 10319758 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031975a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1031975d push ecx */
  push32((uint32_t)(ECX));
  /* 1031975e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10319761 push edx */
  push32((uint32_t)(EDX));
  /* 10319762 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10319765 push eax */
  push32((uint32_t)(EAX));
  /* 10319766 push 1 */
  push32((uint32_t)(0x1u));
  /* 10319768 call 0x1031b8f0 */
  push32(0x1031976du); f_1031b8f0();
  /* 1031976d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10319770 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10319772 jne 0x10319778 */
  if (!C.zf) goto L_10319778;
  /* 10319774 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10319776 jmp 0x10319783 */
  goto L_10319783;
L_10319778:;
  /* 10319778 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031977b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10319780 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_10319783:;
  /* 10319783 mov esp, ebp */
  ESP = (EBP);
  /* 10319785 pop ebp */
  EBP = (pop32());
  /* 10319786 ret  */
  ESPCHK(0x103196d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009790 @ 0x10319790 (836 bytes, 238 insns) */
void f_10319790(void) {
  FTRACE(0x10319790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10319790 push ebp */
  push32((uint32_t)(EBP));
  /* 10319791 mov ebp, esp */
  EBP = (ESP);
  /* 10319793 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10319796 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10319798 call 0x103170c0 */
  push32(0x1031979du); f_103170c0();
  /* 1031979d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103197a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103197a3 push eax */
  push32((uint32_t)(EAX));
  /* 103197a4 call 0x10319ae0 */
  push32(0x103197a9u); f_10319ae0();
  /* 103197a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103197ac mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 103197af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103197b2 cmp ecx, dword ptr [0x10340ba4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10340ba4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103197b8 jne 0x103197cb */
  if (!C.zf) goto L_103197cb;
  /* 103197ba push 0x19 */
  push32((uint32_t)(0x19u));
  /* 103197bc call 0x10317160 */
  push32(0x103197c1u); f_10317160();
  /* 103197c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103197c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103197c6 jmp 0x10319ad0 */
  goto L_10319ad0;
L_103197cb:;
  /* 103197cb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103197cf jne 0x103197ec */
  if (!C.zf) goto L_103197ec;
  /* 103197d1 call 0x10319bc0 */
  push32(0x103197d6u); f_10319bc0();
  /* 103197d6 call 0x10319c40 */
  push32(0x103197dbu); f_10319c40();
  /* 103197db push 0x19 */
  push32((uint32_t)(0x19u));
  /* 103197dd call 0x10317160 */
  push32(0x103197e2u); f_10317160();
  /* 103197e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103197e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103197e7 jmp 0x10319ad0 */
  goto L_10319ad0;
L_103197ec:;
  /* 103197ec mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103197f3 jmp 0x103197fe */
  goto L_103197fe;
L_103197f5:;
  /* 103197f5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103197f8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103197fb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_103197fe:;
  /* 103197fe cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319802 jae 0x1031994f */
  if (!C.cf) goto L_1031994f;
  /* 10319808 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031980b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031980e mov ecx, dword ptr [eax + 0x1033deb8] */
  ECX = (r32((uint32_t)(EAX + 0x1033deb8)));
  /* 10319814 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319817 jne 0x1031994a */
  if (!C.zf) goto L_1031994a;
  /* 1031981d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10319824 jmp 0x1031982f */
  goto L_1031982f;
L_10319826:;
  /* 10319826 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10319829 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031982c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1031982f:;
  /* 1031982f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319836 jae 0x10319844 */
  if (!C.cf) goto L_10319844;
  /* 10319838 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1031983b mov byte ptr [eax + 0x10340d40], 0 */
  w8((uint32_t)(EAX + 0x10340d40), (0x0u));
  /* 10319842 jmp 0x10319826 */
  goto L_10319826;
L_10319844:;
  /* 10319844 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1031984b jmp 0x10319856 */
  goto L_10319856;
L_1031984d:;
  /* 1031984d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10319850 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10319853 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10319856:;
  /* 10319856 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031985a jae 0x103198d7 */
  if (!C.cf) goto L_103198d7;
  /* 1031985c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031985f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10319862 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10319865 lea ecx, [edx + eax*8 + 0x1033dec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x1033dec8));
  /* 1031986c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1031986f jmp 0x1031987a */
  goto L_1031987a;
L_10319871:;
  /* 10319871 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10319874 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10319877 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1031987a:;
  /* 1031987a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031987d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1031987f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10319881 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10319883 je 0x103198d2 */
  if (C.zf) goto L_103198d2;
  /* 10319885 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10319888 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031988a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1031988d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031988f je 0x103198d2 */
  if (C.zf) goto L_103198d2;
  /* 10319891 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10319894 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10319896 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10319898 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1031989b jmp 0x103198a6 */
  goto L_103198a6;
L_1031989d:;
  /* 1031989d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103198a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103198a3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_103198a6:;
  /* 103198a6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103198a9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103198ab mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 103198ae cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103198b1 ja 0x103198d0 */
  if ((!C.cf&&!C.zf)) goto L_103198d0;
  /* 103198b3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103198b6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103198b9 mov dl, byte ptr [eax + 0x10340d41] */
  DL = (r8((uint32_t)(EAX + 0x10340d41)));
  /* 103198bf or dl, byte ptr [ecx + 0x1033deb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x1033deb0))); DL = (_r); fl_logic(_r,8); }
  /* 103198c5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103198c8 mov byte ptr [eax + 0x10340d41], dl */
  w8((uint32_t)(EAX + 0x10340d41), (DL));
  /* 103198ce jmp 0x1031989d */
  goto L_1031989d;
L_103198d0:;
  /* 103198d0 jmp 0x10319871 */
  goto L_10319871;
L_103198d2:;
  /* 103198d2 jmp 0x1031984d */
  goto L_1031984d;
L_103198d7:;
  /* 103198d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103198da mov dword ptr [0x10340ba4], ecx */
  w32((uint32_t)(0x10340ba4), (ECX));
  /* 103198e0 mov dword ptr [0x10340c2c], 1 */
  w32((uint32_t)(0x10340c2c), (0x1u));
  /* 103198ea mov edx, dword ptr [0x10340ba4] */
  EDX = (r32((uint32_t)(0x10340ba4)));
  /* 103198f0 push edx */
  push32((uint32_t)(EDX));
  /* 103198f1 call 0x10319b40 */
  push32(0x103198f6u); f_10319b40();
  /* 103198f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103198f9 mov dword ptr [0x10340e44], eax */
  w32((uint32_t)(0x10340e44), (EAX));
  /* 103198fe mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10319905 jmp 0x10319910 */
  goto L_10319910;
L_10319907:;
  /* 10319907 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031990a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031990d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10319910:;
  /* 10319910 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319914 jae 0x10319934 */
  if (!C.cf) goto L_10319934;
  /* 10319916 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10319919 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031991c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031991f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10319922 mov cx, word ptr [ecx + eax*2 + 0x1033debc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x1033debc)));
  /* 1031992a mov word ptr [edx*2 + 0x10340c20], cx */
  w16((uint32_t)(EDX*2 + 0x10340c20), (CX));
  /* 10319932 jmp 0x10319907 */
  goto L_10319907;
L_10319934:;
  /* 10319934 call 0x10319c40 */
  push32(0x10319939u); f_10319c40();
  /* 10319939 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1031993b call 0x10317160 */
  push32(0x10319940u); f_10317160();
  /* 10319940 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10319943 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10319945 jmp 0x10319ad0 */
  goto L_10319ad0;
L_1031994a:;
  /* 1031994a jmp 0x103197f5 */
  goto L_103197f5;
L_1031994f:;
  /* 1031994f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 10319952 push edx */
  push32((uint32_t)(EDX));
  /* 10319953 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10319956 push eax */
  push32((uint32_t)(EAX));
  /* 10319957 call dword ptr [0x10342364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342364))), 0x1031995du);
  /* 1031995d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319960 jne 0x10319aa2 */
  if (!C.zf) goto L_10319aa2;
  /* 10319966 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1031996d jmp 0x10319978 */
  goto L_10319978;
L_1031996f:;
  /* 1031996f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10319972 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10319975 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10319978:;
  /* 10319978 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031997f jae 0x1031998d */
  if (!C.cf) goto L_1031998d;
  /* 10319981 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10319984 mov byte ptr [edx + 0x10340d40], 0 */
  w8((uint32_t)(EDX + 0x10340d40), (0x0u));
  /* 1031998b jmp 0x1031996f */
  goto L_1031996f;
L_1031998d:;
  /* 1031998d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10319990 mov dword ptr [0x10340ba4], eax */
  w32((uint32_t)(0x10340ba4), (EAX));
  /* 10319995 mov dword ptr [0x10340e44], 0 */
  w32((uint32_t)(0x10340e44), (0x0u));
  /* 1031999f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103199a3 jbe 0x10319a5e */
  if ((C.cf||C.zf)) goto L_10319a5e;
  /* 103199a9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 103199ac mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 103199af jmp 0x103199ba */
  goto L_103199ba;
L_103199b1:;
  /* 103199b1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 103199b4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103199b7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_103199ba:;
  /* 103199ba mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 103199bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103199bf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 103199c1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103199c3 je 0x10319a0c */
  if (C.zf) goto L_10319a0c;
  /* 103199c5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 103199c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103199ca mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 103199cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103199cf je 0x10319a0c */
  if (C.zf) goto L_10319a0c;
  /* 103199d1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 103199d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103199d6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103199d8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 103199db jmp 0x103199e6 */
  goto L_103199e6;
L_103199dd:;
  /* 103199dd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103199e0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103199e3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_103199e6:;
  /* 103199e6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 103199e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103199eb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 103199ee cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103199f1 ja 0x10319a0a */
  if ((!C.cf&&!C.zf)) goto L_10319a0a;
  /* 103199f3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103199f6 mov cl, byte ptr [eax + 0x10340d41] */
  CL = (r8((uint32_t)(EAX + 0x10340d41)));
  /* 103199fc or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 103199ff mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10319a02 mov byte ptr [edx + 0x10340d41], cl */
  w8((uint32_t)(EDX + 0x10340d41), (CL));
  /* 10319a08 jmp 0x103199dd */
  goto L_103199dd;
L_10319a0a:;
  /* 10319a0a jmp 0x103199b1 */
  goto L_103199b1;
L_10319a0c:;
  /* 10319a0c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 10319a13 jmp 0x10319a1e */
  goto L_10319a1e;
L_10319a15:;
  /* 10319a15 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10319a18 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10319a1b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10319a1e:;
  /* 10319a1e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319a25 jae 0x10319a3e */
  if (!C.cf) goto L_10319a3e;
  /* 10319a27 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10319a2a mov dl, byte ptr [ecx + 0x10340d41] */
  DL = (r8((uint32_t)(ECX + 0x10340d41)));
  /* 10319a30 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10319a33 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10319a36 mov byte ptr [eax + 0x10340d41], dl */
  w8((uint32_t)(EAX + 0x10340d41), (DL));
  /* 10319a3c jmp 0x10319a15 */
  goto L_10319a15;
L_10319a3e:;
  /* 10319a3e mov ecx, dword ptr [0x10340ba4] */
  ECX = (r32((uint32_t)(0x10340ba4)));
  /* 10319a44 push ecx */
  push32((uint32_t)(ECX));
  /* 10319a45 call 0x10319b40 */
  push32(0x10319a4au); f_10319b40();
  /* 10319a4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10319a4d mov dword ptr [0x10340e44], eax */
  w32((uint32_t)(0x10340e44), (EAX));
  /* 10319a52 mov dword ptr [0x10340c2c], 1 */
  w32((uint32_t)(0x10340c2c), (0x1u));
  /* 10319a5c jmp 0x10319a68 */
  goto L_10319a68;
L_10319a5e:;
  /* 10319a5e mov dword ptr [0x10340c2c], 0 */
  w32((uint32_t)(0x10340c2c), (0x0u));
L_10319a68:;
  /* 10319a68 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10319a6f jmp 0x10319a7a */
  goto L_10319a7a;
L_10319a71:;
  /* 10319a71 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10319a74 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10319a77 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10319a7a:;
  /* 10319a7a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319a7e jae 0x10319a8f */
  if (!C.cf) goto L_10319a8f;
  /* 10319a80 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10319a83 mov word ptr [eax*2 + 0x10340c20], 0 */
  w16((uint32_t)(EAX*2 + 0x10340c20), (0x0u));
  /* 10319a8d jmp 0x10319a71 */
  goto L_10319a71;
L_10319a8f:;
  /* 10319a8f call 0x10319c40 */
  push32(0x10319a94u); f_10319c40();
  /* 10319a94 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10319a96 call 0x10317160 */
  push32(0x10319a9bu); f_10317160();
  /* 10319a9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10319a9e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10319aa0 jmp 0x10319ad0 */
  goto L_10319ad0;
L_10319aa2:;
  /* 10319aa2 cmp dword ptr [0x1033f6a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f6a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319aa9 je 0x10319ac3 */
  if (C.zf) goto L_10319ac3;
  /* 10319aab call 0x10319bc0 */
  push32(0x10319ab0u); f_10319bc0();
  /* 10319ab0 call 0x10319c40 */
  push32(0x10319ab5u); f_10319c40();
  /* 10319ab5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10319ab7 call 0x10317160 */
  push32(0x10319abcu); f_10317160();
  /* 10319abc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10319abf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10319ac1 jmp 0x10319ad0 */
  goto L_10319ad0;
L_10319ac3:;
  /* 10319ac3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10319ac5 call 0x10317160 */
  push32(0x10319acau); f_10317160();
  /* 10319aca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10319acd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10319ad0:;
  /* 10319ad0 mov esp, ebp */
  ESP = (EBP);
  /* 10319ad2 pop ebp */
  EBP = (pop32());
  /* 10319ad3 ret  */
  ESPCHK(0x10319790u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x10319ae0 (89 bytes, 21 insns) */
void f_10319ae0(void) {
  FTRACE(0x10319ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10319ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 10319ae1 mov ebp, esp */
  EBP = (ESP);
  /* 10319ae3 mov dword ptr [0x1033f6a8], 0 */
  w32((uint32_t)(0x1033f6a8), (0x0u));
  /* 10319aed cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319af1 jne 0x10319b05 */
  if (!C.zf) goto L_10319b05;
  /* 10319af3 mov dword ptr [0x1033f6a8], 1 */
  w32((uint32_t)(0x1033f6a8), (0x1u));
  /* 10319afd call dword ptr [0x1034236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034236c))), 0x10319b03u);
  /* 10319b03 jmp 0x10319b37 */
  goto L_10319b37;
L_10319b05:;
  /* 10319b05 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319b09 jne 0x10319b1d */
  if (!C.zf) goto L_10319b1d;
  /* 10319b0b mov dword ptr [0x1033f6a8], 1 */
  w32((uint32_t)(0x1033f6a8), (0x1u));
  /* 10319b15 call dword ptr [0x10342368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342368))), 0x10319b1bu);
  /* 10319b1b jmp 0x10319b37 */
  goto L_10319b37;
L_10319b1d:;
  /* 10319b1d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319b21 jne 0x10319b34 */
  if (!C.zf) goto L_10319b34;
  /* 10319b23 mov dword ptr [0x1033f6a8], 1 */
  w32((uint32_t)(0x1033f6a8), (0x1u));
  /* 10319b2d mov eax, dword ptr [0x1033f6c8] */
  EAX = (r32((uint32_t)(0x1033f6c8)));
  /* 10319b32 jmp 0x10319b37 */
  goto L_10319b37;
L_10319b34:;
  /* 10319b34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10319b37:;
  /* 10319b37 pop ebp */
  EBP = (pop32());
  /* 10319b38 ret  */
  ESPCHK(0x10319ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b40 @ 0x10319b40 (80 bytes, 26 insns) [1 switch table(s)] */
void f_10319b40(void) {
  FTRACE(0x10319b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10319b40 push ebp */
  push32((uint32_t)(EBP));
  /* 10319b41 mov ebp, esp */
  EBP = (ESP);
  /* 10319b43 push ecx */
  push32((uint32_t)(ECX));
  /* 10319b44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10319b47 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10319b4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10319b4d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10319b53 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10319b56 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319b5a ja 0x10319b8a */
  if ((!C.cf&&!C.zf)) goto L_10319b8a;
  /* 10319b5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10319b5f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10319b61 mov dl, byte ptr [eax + 0x10319ba4] */
  DL = (r8((uint32_t)(EAX + 0x10319ba4)));
  /* 10319b67 jmp dword ptr [edx*4 + 0x10319b90] */
  switch (EDX) {
    case 0: goto L_10319b6e;
    case 1: goto L_10319b75;
    case 2: goto L_10319b7c;
    case 3: goto L_10319b83;
    case 4: goto L_10319b8a;
    default: x86_unimpl("switch@0x10319b67 out of table"); return;
  }
L_10319b6e:;
  /* 10319b6e mov eax, 0x411 */
  EAX = (0x411u);
  /* 10319b73 jmp 0x10319b8c */
  goto L_10319b8c;
L_10319b75:;
  /* 10319b75 mov eax, 0x804 */
  EAX = (0x804u);
  /* 10319b7a jmp 0x10319b8c */
  goto L_10319b8c;
L_10319b7c:;
  /* 10319b7c mov eax, 0x412 */
  EAX = (0x412u);
  /* 10319b81 jmp 0x10319b8c */
  goto L_10319b8c;
L_10319b83:;
  /* 10319b83 mov eax, 0x404 */
  EAX = (0x404u);
  /* 10319b88 jmp 0x10319b8c */
  goto L_10319b8c;
L_10319b8a:;
  /* 10319b8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10319b8c:;
  /* 10319b8c mov esp, ebp */
  ESP = (EBP);
  /* 10319b8e pop ebp */
  EBP = (pop32());
  /* 10319b8f ret  */
  ESPCHK(0x10319b40u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x10319bc0 (116 bytes, 29 insns) */
void f_10319bc0(void) {
  FTRACE(0x10319bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10319bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10319bc1 mov ebp, esp */
  EBP = (ESP);
  /* 10319bc3 push ecx */
  push32((uint32_t)(ECX));
  /* 10319bc4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10319bcb jmp 0x10319bd6 */
  goto L_10319bd6;
L_10319bcd:;
  /* 10319bcd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10319bd0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10319bd3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10319bd6:;
  /* 10319bd6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319bdd jge 0x10319beb */
  if ((C.sf==C.of)) goto L_10319beb;
  /* 10319bdf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10319be2 mov byte ptr [ecx + 0x10340d40], 0 */
  w8((uint32_t)(ECX + 0x10340d40), (0x0u));
  /* 10319be9 jmp 0x10319bcd */
  goto L_10319bcd;
L_10319beb:;
  /* 10319beb mov dword ptr [0x10340ba4], 0 */
  w32((uint32_t)(0x10340ba4), (0x0u));
  /* 10319bf5 mov dword ptr [0x10340c2c], 0 */
  w32((uint32_t)(0x10340c2c), (0x0u));
  /* 10319bff mov dword ptr [0x10340e44], 0 */
  w32((uint32_t)(0x10340e44), (0x0u));
  /* 10319c09 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10319c10 jmp 0x10319c1b */
  goto L_10319c1b;
L_10319c12:;
  /* 10319c12 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10319c15 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10319c18 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10319c1b:;
  /* 10319c1b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319c1f jge 0x10319c30 */
  if ((C.sf==C.of)) goto L_10319c30;
  /* 10319c21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10319c24 mov word ptr [eax*2 + 0x10340c20], 0 */
  w16((uint32_t)(EAX*2 + 0x10340c20), (0x0u));
  /* 10319c2e jmp 0x10319c12 */
  goto L_10319c12;
L_10319c30:;
  /* 10319c30 mov esp, ebp */
  ESP = (EBP);
  /* 10319c32 pop ebp */
  EBP = (pop32());
  /* 10319c33 ret  */
  ESPCHK(0x10319bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c40 @ 0x10319c40 (770 bytes, 175 insns) */
void f_10319c40(void) {
  FTRACE(0x10319c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10319c40 push ebp */
  push32((uint32_t)(EBP));
  /* 10319c41 mov ebp, esp */
  EBP = (ESP);
  /* 10319c43 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10319c49 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 10319c4f push eax */
  push32((uint32_t)(EAX));
  /* 10319c50 mov ecx, dword ptr [0x10340ba4] */
  ECX = (r32((uint32_t)(0x10340ba4)));
  /* 10319c56 push ecx */
  push32((uint32_t)(ECX));
  /* 10319c57 call dword ptr [0x10342364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342364))), 0x10319c5du);
  /* 10319c5d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319c60 jne 0x10319e79 */
  if (!C.zf) goto L_10319e79;
  /* 10319c66 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10319c70 jmp 0x10319c81 */
  goto L_10319c81;
L_10319c72:;
  /* 10319c72 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10319c78 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10319c7b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10319c81:;
  /* 10319c81 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319c8b jae 0x10319ca2 */
  if (!C.cf) goto L_10319ca2;
  /* 10319c8d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10319c93 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 10319c99 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 10319ca0 jmp 0x10319c72 */
  goto L_10319c72;
L_10319ca2:;
  /* 10319ca2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 10319ca9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 10319caf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10319cb2 jmp 0x10319cbd */
  goto L_10319cbd;
L_10319cb4:;
  /* 10319cb4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10319cb7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10319cba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10319cbd:;
  /* 10319cbd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10319cc0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10319cc2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10319cc4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10319cc6 je 0x10319d08 */
  if (C.zf) goto L_10319d08;
  /* 10319cc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10319ccb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10319ccd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10319ccf mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 10319cd5 jmp 0x10319ce6 */
  goto L_10319ce6;
L_10319cd7:;
  /* 10319cd7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10319cdd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10319ce0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10319ce6:;
  /* 10319ce6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10319ce9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10319ceb mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10319cee cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319cf4 ja 0x10319d06 */
  if ((!C.cf&&!C.zf)) goto L_10319d06;
  /* 10319cf6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10319cfc mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 10319d04 jmp 0x10319cd7 */
  goto L_10319cd7;
L_10319d06:;
  /* 10319d06 jmp 0x10319cb4 */
  goto L_10319cb4;
L_10319d08:;
  /* 10319d08 push 0 */
  push32((uint32_t)(0x0u));
  /* 10319d0a mov eax, dword ptr [0x10340e44] */
  EAX = (r32((uint32_t)(0x10340e44)));
  /* 10319d0f push eax */
  push32((uint32_t)(EAX));
  /* 10319d10 mov ecx, dword ptr [0x10340ba4] */
  ECX = (r32((uint32_t)(0x10340ba4)));
  /* 10319d16 push ecx */
  push32((uint32_t)(ECX));
  /* 10319d17 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 10319d1d push edx */
  push32((uint32_t)(EDX));
  /* 10319d1e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10319d23 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10319d29 push eax */
  push32((uint32_t)(EAX));
  /* 10319d2a push 1 */
  push32((uint32_t)(0x1u));
  /* 10319d2c call 0x1031b8f0 */
  push32(0x10319d31u); f_1031b8f0();
  /* 10319d31 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10319d34 push 0 */
  push32((uint32_t)(0x0u));
  /* 10319d36 mov ecx, dword ptr [0x10340ba4] */
  ECX = (r32((uint32_t)(0x10340ba4)));
  /* 10319d3c push ecx */
  push32((uint32_t)(ECX));
  /* 10319d3d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10319d42 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10319d48 push edx */
  push32((uint32_t)(EDX));
  /* 10319d49 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10319d4e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10319d54 push eax */
  push32((uint32_t)(EAX));
  /* 10319d55 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10319d5a mov ecx, dword ptr [0x10340e44] */
  ECX = (r32((uint32_t)(0x10340e44)));
  /* 10319d60 push ecx */
  push32((uint32_t)(ECX));
  /* 10319d61 call 0x1031bab0 */
  push32(0x10319d66u); f_1031bab0();
  /* 10319d66 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10319d69 push 0 */
  push32((uint32_t)(0x0u));
  /* 10319d6b mov edx, dword ptr [0x10340ba4] */
  EDX = (r32((uint32_t)(0x10340ba4)));
  /* 10319d71 push edx */
  push32((uint32_t)(EDX));
  /* 10319d72 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10319d77 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 10319d7d push eax */
  push32((uint32_t)(EAX));
  /* 10319d7e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10319d83 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 10319d89 push ecx */
  push32((uint32_t)(ECX));
  /* 10319d8a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 10319d8f mov edx, dword ptr [0x10340e44] */
  EDX = (r32((uint32_t)(0x10340e44)));
  /* 10319d95 push edx */
  push32((uint32_t)(EDX));
  /* 10319d96 call 0x1031bab0 */
  push32(0x10319d9bu); f_1031bab0();
  /* 10319d9b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10319d9e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10319da8 jmp 0x10319db9 */
  goto L_10319db9;
L_10319daa:;
  /* 10319daa mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10319db0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10319db3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10319db9:;
  /* 10319db9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319dc3 jae 0x10319e74 */
  if (!C.cf) goto L_10319e74;
  /* 10319dc9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10319dcf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10319dd1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 10319dd9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10319ddc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10319dde je 0x10319e16 */
  if (C.zf) goto L_10319e16;
  /* 10319de0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10319de6 mov cl, byte ptr [eax + 0x10340d41] */
  CL = (r8((uint32_t)(EAX + 0x10340d41)));
  /* 10319dec or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 10319def mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10319df5 mov byte ptr [edx + 0x10340d41], cl */
  w8((uint32_t)(EDX + 0x10340d41), (CL));
  /* 10319dfb mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10319e01 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10319e07 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 10319e0e mov byte ptr [eax + 0x10340c40], dl */
  w8((uint32_t)(EAX + 0x10340c40), (DL));
  /* 10319e14 jmp 0x10319e6f */
  goto L_10319e6f;
L_10319e16:;
  /* 10319e16 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10319e1c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10319e1e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 10319e26 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10319e29 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10319e2b je 0x10319e62 */
  if (C.zf) goto L_10319e62;
  /* 10319e2d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10319e33 mov al, byte ptr [edx + 0x10340d41] */
  AL = (r8((uint32_t)(EDX + 0x10340d41)));
  /* 10319e39 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10319e3b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10319e41 mov byte ptr [ecx + 0x10340d41], al */
  w8((uint32_t)(ECX + 0x10340d41), (AL));
  /* 10319e47 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10319e4d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10319e53 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 10319e5a mov byte ptr [edx + 0x10340c40], cl */
  w8((uint32_t)(EDX + 0x10340c40), (CL));
  /* 10319e60 jmp 0x10319e6f */
  goto L_10319e6f;
L_10319e62:;
  /* 10319e62 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10319e68 mov byte ptr [edx + 0x10340c40], 0 */
  w8((uint32_t)(EDX + 0x10340c40), (0x0u));
L_10319e6f:;
  /* 10319e6f jmp 0x10319daa */
  goto L_10319daa;
L_10319e74:;
  /* 10319e74 jmp 0x10319f3e */
  goto L_10319f3e;
L_10319e79:;
  /* 10319e79 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10319e83 jmp 0x10319e94 */
  goto L_10319e94;
L_10319e85:;
  /* 10319e85 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10319e8b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10319e8e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10319e94:;
  /* 10319e94 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319e9e jae 0x10319f3e */
  if (!C.cf) goto L_10319f3e;
  /* 10319ea4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319eab jb 0x10319ee8 */
  if (C.cf) goto L_10319ee8;
  /* 10319ead cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319eb4 ja 0x10319ee8 */
  if ((!C.cf&&!C.zf)) goto L_10319ee8;
  /* 10319eb6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10319ebc mov dl, byte ptr [ecx + 0x10340d41] */
  DL = (r8((uint32_t)(ECX + 0x10340d41)));
  /* 10319ec2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10319ec5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10319ecb mov byte ptr [eax + 0x10340d41], dl */
  w8((uint32_t)(EAX + 0x10340d41), (DL));
  /* 10319ed1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10319ed7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10319eda mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10319ee0 mov byte ptr [edx + 0x10340c40], cl */
  w8((uint32_t)(EDX + 0x10340c40), (CL));
  /* 10319ee6 jmp 0x10319f39 */
  goto L_10319f39;
L_10319ee8:;
  /* 10319ee8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319eef jb 0x10319f2c */
  if (C.cf) goto L_10319f2c;
  /* 10319ef1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319ef8 ja 0x10319f2c */
  if ((!C.cf&&!C.zf)) goto L_10319f2c;
  /* 10319efa mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10319f00 mov cl, byte ptr [eax + 0x10340d41] */
  CL = (r8((uint32_t)(EAX + 0x10340d41)));
  /* 10319f06 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10319f09 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10319f0f mov byte ptr [edx + 0x10340d41], cl */
  w8((uint32_t)(EDX + 0x10340d41), (CL));
  /* 10319f15 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10319f1b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10319f1e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10319f24 mov byte ptr [ecx + 0x10340c40], al */
  w8((uint32_t)(ECX + 0x10340c40), (AL));
  /* 10319f2a jmp 0x10319f39 */
  goto L_10319f39;
L_10319f2c:;
  /* 10319f2c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10319f32 mov byte ptr [edx + 0x10340c40], 0 */
  w8((uint32_t)(EDX + 0x10340c40), (0x0u));
L_10319f39:;
  /* 10319f39 jmp 0x10319e85 */
  goto L_10319e85;
L_10319f3e:;
  /* 10319f3e mov esp, ebp */
  ESP = (EBP);
  /* 10319f40 pop ebp */
  EBP = (pop32());
  /* 10319f41 ret  */
  ESPCHK(0x10319c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f50 @ 0x10319f50 (23 bytes, 9 insns) */
void f_10319f50(void) {
  FTRACE(0x10319f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10319f50 push ebp */
  push32((uint32_t)(EBP));
  /* 10319f51 mov ebp, esp */
  EBP = (ESP);
  /* 10319f53 cmp dword ptr [0x10340c2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10340c2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319f5a je 0x10319f63 */
  if (C.zf) goto L_10319f63;
  /* 10319f5c mov eax, dword ptr [0x10340ba4] */
  EAX = (r32((uint32_t)(0x10340ba4)));
  /* 10319f61 jmp 0x10319f65 */
  goto L_10319f65;
L_10319f63:;
  /* 10319f63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10319f65:;
  /* 10319f65 pop ebp */
  EBP = (pop32());
  /* 10319f66 ret  */
  ESPCHK(0x10319f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f70 @ 0x10319f70 (34 bytes, 10 insns) */
void f_10319f70(void) {
  FTRACE(0x10319f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10319f70 push ebp */
  push32((uint32_t)(EBP));
  /* 10319f71 mov ebp, esp */
  EBP = (ESP);
  /* 10319f73 cmp dword ptr [0x10340ff0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10340ff0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319f7a jne 0x10319f90 */
  if (!C.zf) goto L_10319f90;
  /* 10319f7c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 10319f7e call 0x10319790 */
  push32(0x10319f83u); f_10319790();
  /* 10319f83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10319f86 mov dword ptr [0x10340ff0], 1 */
  w32((uint32_t)(0x10340ff0), (0x1u));
L_10319f90:;
  /* 10319f90 pop ebp */
  EBP = (pop32());
  /* 10319f91 ret  */
  ESPCHK(0x10319f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10009fa0 @ 0x10319fa0 (664 bytes, 262 insns) [15 switch table(s)] */
void f_10319fa0(void) {
  FTRACE(0x10319fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10319fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10319fa1 mov ebp, esp */
  EBP = (ESP);
  /* 10319fa3 push edi */
  push32((uint32_t)(EDI));
  /* 10319fa4 push esi */
  push32((uint32_t)(ESI));
  /* 10319fa5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10319fa8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10319fab mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10319fae mov eax, ecx */
  EAX = (ECX);
  /* 10319fb0 mov edx, ecx */
  EDX = (ECX);
  /* 10319fb2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10319fb4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319fb6 jbe 0x10319fc0 */
  if ((C.cf||C.zf)) goto L_10319fc0;
  /* 10319fb8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319fba jb 0x1031a138 */
  if (C.cf) goto L_1031a138;
L_10319fc0:;
  /* 10319fc0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10319fc6 jne 0x10319fdc */
  if (!C.zf) goto L_10319fdc;
  /* 10319fc8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10319fcb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10319fce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10319fd1 jb 0x10319ffc */
  if (C.cf) goto L_10319ffc;
  /* 10319fd3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10319fd5 jmp dword ptr [edx*4 + 0x1031a0e8] */
  switch (EDX) {
    case 0: goto L_1031a0f8;
    case 1: goto L_1031a100;
    case 2: goto L_1031a10c;
    case 3: goto L_1031a120;
    default: x86_unimpl("switch@0x10319fd5 out of table"); return;
  }
L_10319fdc:;
  /* 10319fdc mov eax, edi */
  EAX = (EDI);
  /* 10319fde mov edx, 3 */
  EDX = (0x3u);
  /* 10319fe3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10319fe6 jb 0x10319ff4 */
  if (C.cf) goto L_10319ff4;
  /* 10319fe8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10319feb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10319fed jmp dword ptr [eax*4 + 0x1031a000] */
  switch (EAX) {
    case 1: goto L_1031a010;
    case 2: goto L_1031a03c;
    case 3: goto L_1031a060;
    default: x86_unimpl("switch@0x10319fed out of table"); return;
  }
L_10319ff4:;
  /* 10319ff4 jmp dword ptr [ecx*4 + 0x1031a0f8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1031a0f8)))); return;
  /* 10319ffb nop  */
  /* nop */
L_10319ffc:;
  /* 10319ffc jmp dword ptr [ecx*4 + 0x1031a07c] */
  switch (ECX) {
    case 0: goto L_1031a0df;
    case 1: goto L_1031a0cc;
    case 2: goto L_1031a0c4;
    case 3: goto L_1031a0bc;
    case 4: goto L_1031a0b4;
    case 5: goto L_1031a0ac;
    case 6: goto L_1031a0a4;
    case 7: goto L_1031a09c;
    default: x86_unimpl("switch@0x10319ffc out of table"); return;
  }
  /* 1031a003 nop  */
  /* nop */
L_1031a010:;
  /* 1031a010 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1031a012 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1031a014 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1031a016 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1031a019 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1031a01c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1031a01f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1031a022 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1031a025 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1031a028 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1031a02b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031a02e jb 0x10319ffc */
  if (C.cf) goto L_10319ffc;
  /* 1031a030 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1031a032 jmp dword ptr [edx*4 + 0x1031a0e8] */
  switch (EDX) {
    case 0: goto L_1031a0f8;
    case 1: goto L_1031a100;
    case 2: goto L_1031a10c;
    case 3: goto L_1031a120;
    default: x86_unimpl("switch@0x1031a032 out of table"); return;
  }
  /* 1031a039 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1031a03c:;
  /* 1031a03c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1031a03e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1031a040 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1031a042 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1031a045 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1031a048 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1031a04b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1031a04e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1031a051 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031a054 jb 0x10319ffc */
  if (C.cf) goto L_10319ffc;
  /* 1031a056 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1031a058 jmp dword ptr [edx*4 + 0x1031a0e8] */
  switch (EDX) {
    case 0: goto L_1031a0f8;
    case 1: goto L_1031a100;
    case 2: goto L_1031a10c;
    case 3: goto L_1031a120;
    default: x86_unimpl("switch@0x1031a058 out of table"); return;
  }
  /* 1031a05f nop  */
  /* nop */
L_1031a060:;
  /* 1031a060 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1031a062 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1031a064 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1031a066 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1031a067 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1031a06a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1031a06b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031a06e jb 0x10319ffc */
  if (C.cf) goto L_10319ffc;
  /* 1031a070 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1031a072 jmp dword ptr [edx*4 + 0x1031a0e8] */
  switch (EDX) {
    case 0: goto L_1031a0f8;
    case 1: goto L_1031a100;
    case 2: goto L_1031a10c;
    case 3: goto L_1031a120;
    default: x86_unimpl("switch@0x1031a072 out of table"); return;
  }
  /* 1031a079 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1031a09c:;
  /* 1031a09c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1031a0a0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1031a0a4:;
  /* 1031a0a4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1031a0a8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1031a0ac:;
  /* 1031a0ac mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1031a0b0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1031a0b4:;
  /* 1031a0b4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1031a0b8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1031a0bc:;
  /* 1031a0bc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1031a0c0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1031a0c4:;
  /* 1031a0c4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1031a0c8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1031a0cc:;
  /* 1031a0cc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1031a0d0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1031a0d4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1031a0db add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1031a0dd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1031a0df:;
  /* 1031a0df jmp dword ptr [edx*4 + 0x1031a0e8] */
  switch (EDX) {
    case 0: goto L_1031a0f8;
    case 1: goto L_1031a100;
    case 2: goto L_1031a10c;
    case 3: goto L_1031a120;
    default: x86_unimpl("switch@0x1031a0df out of table"); return;
  }
  /* 1031a0e6 mov edi, edi */
  EDI = (EDI);
L_1031a0f8:;
  /* 1031a0f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031a0fb pop esi */
  ESI = (pop32());
  /* 1031a0fc pop edi */
  EDI = (pop32());
  /* 1031a0fd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1031a0fe ret  */
  ESPCHK(0x10319fa0u, _esp0);
  ESP += 4; return;
  /* 1031a0ff nop  */
  /* nop */
L_1031a100:;
  /* 1031a100 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1031a102 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1031a104 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031a107 pop esi */
  ESI = (pop32());
  /* 1031a108 pop edi */
  EDI = (pop32());
  /* 1031a109 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1031a10a ret  */
  ESPCHK(0x10319fa0u, _esp0);
  ESP += 4; return;
  /* 1031a10b nop  */
  /* nop */
L_1031a10c:;
  /* 1031a10c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1031a10e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1031a110 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1031a113 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1031a116 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031a119 pop esi */
  ESI = (pop32());
  /* 1031a11a pop edi */
  EDI = (pop32());
  /* 1031a11b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1031a11c ret  */
  ESPCHK(0x10319fa0u, _esp0);
  ESP += 4; return;
  /* 1031a11d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1031a120:;
  /* 1031a120 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1031a122 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1031a124 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1031a127 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1031a12a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1031a12d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1031a130 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031a133 pop esi */
  ESI = (pop32());
  /* 1031a134 pop edi */
  EDI = (pop32());
  /* 1031a135 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1031a136 ret  */
  ESPCHK(0x10319fa0u, _esp0);
  ESP += 4; return;
  /* 1031a137 nop  */
  /* nop */
L_1031a138:;
  /* 1031a138 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1031a13c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1031a140 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1031a146 jne 0x1031a16c */
  if (!C.zf) goto L_1031a16c;
  /* 1031a148 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1031a14b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1031a14e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031a151 jb 0x1031a160 */
  if (C.cf) goto L_1031a160;
  /* 1031a153 std  */
  C.df=1;
  /* 1031a154 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1031a156 cld  */
  C.df=0;
  /* 1031a157 jmp dword ptr [edx*4 + 0x1031a280] */
  switch (EDX) {
    case 0: goto L_1031a290;
    case 1: goto L_1031a298;
    case 2: goto L_1031a2a8;
    case 3: goto L_1031a2bc;
    default: x86_unimpl("switch@0x1031a157 out of table"); return;
  }
  /* 1031a15e mov edi, edi */
  EDI = (EDI);
L_1031a160:;
  /* 1031a160 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1031a162 jmp dword ptr [ecx*4 + 0x1031a230] */
  switch (ECX) {
    case 0: goto L_1031a277;
    default: x86_unimpl("switch@0x1031a162 out of table"); return;
  }
  /* 1031a169 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1031a16c:;
  /* 1031a16c mov eax, edi */
  EAX = (EDI);
  /* 1031a16e mov edx, 3 */
  EDX = (0x3u);
  /* 1031a173 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031a176 jb 0x1031a184 */
  if (C.cf) goto L_1031a184;
  /* 1031a178 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1031a17b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031a17d jmp dword ptr [eax*4 + 0x1031a188] */
  switch (EAX) {
    case 1: goto L_1031a198;
    case 2: goto L_1031a1b8;
    case 3: goto L_1031a1e0;
    default: x86_unimpl("switch@0x1031a17d out of table"); return;
  }
L_1031a184:;
  /* 1031a184 jmp dword ptr [ecx*4 + 0x1031a280] */
  switch (ECX) {
    case 0: goto L_1031a290;
    case 1: goto L_1031a298;
    case 2: goto L_1031a2a8;
    case 3: goto L_1031a2bc;
    default: x86_unimpl("switch@0x1031a184 out of table"); return;
  }
  /* 1031a18b nop  */
  /* nop */
L_1031a198:;
  /* 1031a198 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1031a19b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1031a19d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1031a1a0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1031a1a1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1031a1a4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1031a1a5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031a1a8 jb 0x1031a160 */
  if (C.cf) goto L_1031a160;
  /* 1031a1aa std  */
  C.df=1;
  /* 1031a1ab rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1031a1ad cld  */
  C.df=0;
  /* 1031a1ae jmp dword ptr [edx*4 + 0x1031a280] */
  switch (EDX) {
    case 0: goto L_1031a290;
    case 1: goto L_1031a298;
    case 2: goto L_1031a2a8;
    case 3: goto L_1031a2bc;
    default: x86_unimpl("switch@0x1031a1ae out of table"); return;
  }
  /* 1031a1b5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1031a1b8:;
  /* 1031a1b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1031a1bb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1031a1bd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1031a1c0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1031a1c3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1031a1c6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1031a1c9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031a1cc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031a1cf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031a1d2 jb 0x1031a160 */
  if (C.cf) goto L_1031a160;
  /* 1031a1d4 std  */
  C.df=1;
  /* 1031a1d5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1031a1d7 cld  */
  C.df=0;
  /* 1031a1d8 jmp dword ptr [edx*4 + 0x1031a280] */
  switch (EDX) {
    case 0: goto L_1031a290;
    case 1: goto L_1031a298;
    case 2: goto L_1031a2a8;
    case 3: goto L_1031a2bc;
    default: x86_unimpl("switch@0x1031a1d8 out of table"); return;
  }
  /* 1031a1df nop  */
  /* nop */
L_1031a1e0:;
  /* 1031a1e0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1031a1e3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1031a1e5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1031a1e8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1031a1eb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1031a1ee mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1031a1f1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1031a1f4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1031a1f7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031a1fa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031a1fd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031a200 jb 0x1031a160 */
  if (C.cf) goto L_1031a160;
  /* 1031a206 std  */
  C.df=1;
  /* 1031a207 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1031a209 cld  */
  C.df=0;
  /* 1031a20a jmp dword ptr [edx*4 + 0x1031a280] */
  switch (EDX) {
    case 0: goto L_1031a290;
    case 1: goto L_1031a298;
    case 2: goto L_1031a2a8;
    case 3: goto L_1031a2bc;
    default: x86_unimpl("switch@0x1031a20a out of table"); return;
  }
  /* 1031a211 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1031a214 xor al, 0xa2 */
  { uint32_t _r=(AL)^(0xa2u); AL = (_r); fl_logic(_r,8); }
  /* 1031a216 xor dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))^(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1031a218 cmp al, 0xa2 */
  { uint32_t _a=(AL),_b=(0xa2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1031a21a xor dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))^(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1031a21c inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 1031a21d mov byte ptr [0xa24c1031], al */
  w8((uint32_t)(0xa24c1031), (AL));
  /* 1031a222 xor dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))^(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1031a224 push esp */
  push32((uint32_t)(ESP));
  /* 1031a225 mov byte ptr [0xa25c1031], al */
  w8((uint32_t)(0xa25c1031), (AL));
  /* 1031a22a xor dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))^(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1031a22e xor dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))^(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1031a234 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1031a238 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1031a23c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1031a240 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1031a244 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1031a248 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1031a24c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1031a250 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1031a254 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1031a258 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1031a25c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1031a260 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1031a264 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1031a268 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1031a26c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1031a273 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1031a275 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1031a277:;
  /* 1031a277 jmp dword ptr [edx*4 + 0x1031a280] */
  switch (EDX) {
    case 0: goto L_1031a290;
    case 1: goto L_1031a298;
    case 2: goto L_1031a2a8;
    case 3: goto L_1031a2bc;
    default: x86_unimpl("switch@0x1031a277 out of table"); return;
  }
  /* 1031a27e mov edi, edi */
  EDI = (EDI);
L_1031a290:;
  /* 1031a290 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031a293 pop esi */
  ESI = (pop32());
  /* 1031a294 pop edi */
  EDI = (pop32());
  /* 1031a295 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1031a296 ret  */
  ESPCHK(0x10319fa0u, _esp0);
  ESP += 4; return;
  /* 1031a297 nop  */
  /* nop */
L_1031a298:;
  /* 1031a298 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1031a29b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1031a29e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031a2a1 pop esi */
  ESI = (pop32());
  /* 1031a2a2 pop edi */
  EDI = (pop32());
  /* 1031a2a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1031a2a4 ret  */
  ESPCHK(0x10319fa0u, _esp0);
  ESP += 4; return;
  /* 1031a2a5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1031a2a8:;
  /* 1031a2a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1031a2ab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1031a2ae mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1031a2b1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1031a2b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031a2b7 pop esi */
  ESI = (pop32());
  /* 1031a2b8 pop edi */
  EDI = (pop32());
  /* 1031a2b9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1031a2ba ret  */
  ESPCHK(0x10319fa0u, _esp0);
  ESP += 4; return;
  /* 1031a2bb nop  */
  /* nop */
L_1031a2bc:;
  /* 1031a2bc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1031a2bf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1031a2c2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1031a2c5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1031a2c8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1031a2cb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1031a2ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031a2d1 pop esi */
  ESI = (pop32());
  /* 1031a2d2 pop edi */
  EDI = (pop32());
  /* 1031a2d3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1031a2d4 ret  */
  ESPCHK(0x10319fa0u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x1031a2e0 (104 bytes, 43 insns) */
void f_1031a2e0(void) {
  FTRACE(0x1031a2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031a2e0 push ebx */
  push32((uint32_t)(EBX));
  /* 1031a2e1 push esi */
  push32((uint32_t)(ESI));
  /* 1031a2e2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1031a2e6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031a2e8 jne 0x1031a302 */
  if (!C.zf) goto L_1031a302;
  /* 1031a2ea mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1031a2ee mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1031a2f2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1031a2f4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1031a2f6 mov ebx, eax */
  EBX = (EAX);
  /* 1031a2f8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1031a2fc div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1031a2fe mov edx, ebx */
  EDX = (EBX);
  /* 1031a300 jmp 0x1031a343 */
  goto L_1031a343;
L_1031a302:;
  /* 1031a302 mov ecx, eax */
  ECX = (EAX);
  /* 1031a304 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1031a308 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1031a30c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1031a310:;
  /* 1031a310 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1031a312 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1031a314 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1031a316 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1031a318 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1031a31a jne 0x1031a310 */
  if (!C.zf) goto L_1031a310;
  /* 1031a31c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1031a31e mov esi, eax */
  ESI = (EAX);
  /* 1031a320 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1031a324 mov ecx, eax */
  ECX = (EAX);
  /* 1031a326 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1031a32a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1031a32c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031a32e jb 0x1031a33e */
  if (C.cf) goto L_1031a33e;
  /* 1031a330 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031a334 ja 0x1031a33e */
  if ((!C.cf&&!C.zf)) goto L_1031a33e;
  /* 1031a336 jb 0x1031a33f */
  if (C.cf) goto L_1031a33f;
  /* 1031a338 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031a33c jbe 0x1031a33f */
  if ((C.cf||C.zf)) goto L_1031a33f;
L_1031a33e:;
  /* 1031a33e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1031a33f:;
  /* 1031a33f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1031a341 mov eax, esi */
  EAX = (ESI);
L_1031a343:;
  /* 1031a343 pop esi */
  ESI = (pop32());
  /* 1031a344 pop ebx */
  EBX = (pop32());
  /* 1031a345 ret 0x10 */
  ESPCHK(0x1031a2e0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x1031a350 (117 bytes, 44 insns) */
void f_1031a350(void) {
  FTRACE(0x1031a350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031a350 push ebx */
  push32((uint32_t)(EBX));
  /* 1031a351 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1031a355 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031a357 jne 0x1031a371 */
  if (!C.zf) goto L_1031a371;
  /* 1031a359 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1031a35d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1031a361 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1031a363 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1031a365 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1031a369 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1031a36b mov eax, edx */
  EAX = (EDX);
  /* 1031a36d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1031a36f jmp 0x1031a3c1 */
  goto L_1031a3c1;
L_1031a371:;
  /* 1031a371 mov ecx, eax */
  ECX = (EAX);
  /* 1031a373 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1031a377 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1031a37b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1031a37f:;
  /* 1031a37f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1031a381 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1031a383 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1031a385 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1031a387 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1031a389 jne 0x1031a37f */
  if (!C.zf) goto L_1031a37f;
  /* 1031a38b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1031a38d mov ecx, eax */
  ECX = (EAX);
  /* 1031a38f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1031a393 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1031a394 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1031a398 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031a39a jb 0x1031a3aa */
  if (C.cf) goto L_1031a3aa;
  /* 1031a39c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031a3a0 ja 0x1031a3aa */
  if ((!C.cf&&!C.zf)) goto L_1031a3aa;
  /* 1031a3a2 jb 0x1031a3b2 */
  if (C.cf) goto L_1031a3b2;
  /* 1031a3a4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031a3a8 jbe 0x1031a3b2 */
  if ((C.cf||C.zf)) goto L_1031a3b2;
L_1031a3aa:;
  /* 1031a3aa sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031a3ae sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1031a3b2:;
  /* 1031a3b2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031a3b6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031a3ba neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1031a3bc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1031a3be sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1031a3c1:;
  /* 1031a3c1 pop ebx */
  EBX = (pop32());
  /* 1031a3c2 ret 0x10 */
  ESPCHK(0x1031a350u, _esp0);
  ESP += 20; return;
}

/* FUN_1000a3d0 @ 0x1031a3d0 (628 bytes, 214 insns) */
void f_1031a3d0(void) {
  FTRACE(0x1031a3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031a3d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1031a3d1 mov ebp, esp */
  EBP = (ESP);
  /* 1031a3d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031a3d6 push ebx */
  push32((uint32_t)(EBX));
  /* 1031a3d7 push esi */
  push32((uint32_t)(ESI));
  /* 1031a3d8 push edi */
  push32((uint32_t)(EDI));
L_1031a3d9:;
  /* 1031a3d9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031a3dd jne 0x1031a3fd */
  if (!C.zf) goto L_1031a3fd;
  /* 1031a3df push 0x1033aef0 */
  push32((uint32_t)(0x1033aef0u));
  /* 1031a3e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031a3e6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1031a3e8 push 0x1033aee4 */
  push32((uint32_t)(0x1033aee4u));
  /* 1031a3ed push 2 */
  push32((uint32_t)(0x2u));
  /* 1031a3ef call 0x10312780 */
  push32(0x1031a3f4u); f_10312780();
  /* 1031a3f4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031a3f7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031a3fa jne 0x1031a3fd */
  if (!C.zf) goto L_1031a3fd;
  /* 1031a3fc int3  */
  x86_unimpl("int3 @ 0x1031a3fc");
L_1031a3fd:;
  /* 1031a3fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031a3ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031a401 jne 0x1031a3d9 */
  if (!C.zf) goto L_1031a3d9;
  /* 1031a403 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031a406 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1031a409 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031a40c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1031a40f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1031a412 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031a415 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1031a418 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1031a41e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1031a420 je 0x1031a42f */
  if (C.zf) goto L_1031a42f;
  /* 1031a422 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031a425 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1031a428 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1031a42b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1031a42d je 0x1031a445 */
  if (C.zf) goto L_1031a445;
L_1031a42f:;
  /* 1031a42f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031a432 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1031a435 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1031a437 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031a43a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1031a43d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1031a440 jmp 0x1031a63d */
  goto L_1031a63d;
L_1031a445:;
  /* 1031a445 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031a448 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1031a44b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1031a44e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031a450 je 0x1031a49c */
  if (C.zf) goto L_1031a49c;
  /* 1031a452 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031a455 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1031a45c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031a45f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1031a462 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1031a465 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031a467 je 0x1031a485 */
  if (C.zf) goto L_1031a485;
  /* 1031a469 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031a46c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031a46f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1031a472 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1031a474 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031a477 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1031a47a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1031a47d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031a480 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1031a483 jmp 0x1031a49c */
  goto L_1031a49c;
L_1031a485:;
  /* 1031a485 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031a488 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1031a48b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1031a48e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031a491 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1031a494 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1031a497 jmp 0x1031a63d */
  goto L_1031a63d;
L_1031a49c:;
  /* 1031a49c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031a49f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1031a4a2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1031a4a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031a4a8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1031a4ab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031a4ae mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1031a4b1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 1031a4b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031a4b7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1031a4ba mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031a4bd mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1031a4c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1031a4cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031a4ce mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1031a4d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031a4d4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1031a4d7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1031a4dd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1031a4df jne 0x1031a50f */
  if (!C.zf) goto L_1031a50f;
  /* 1031a4e1 cmp dword ptr [ebp - 8], 0x1033e140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1033e140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031a4e8 je 0x1031a4f3 */
  if (C.zf) goto L_1031a4f3;
  /* 1031a4ea cmp dword ptr [ebp - 8], 0x1033e160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1033e160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031a4f1 jne 0x1031a503 */
  if (!C.zf) goto L_1031a503;
L_1031a4f3:;
  /* 1031a4f3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1031a4f6 push edx */
  push32((uint32_t)(EDX));
  /* 1031a4f7 call 0x1031c340 */
  push32(0x1031a4fcu); f_1031c340();
  /* 1031a4fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031a4ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031a501 jne 0x1031a50f */
  if (!C.zf) goto L_1031a50f;
L_1031a503:;
  /* 1031a503 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031a506 push eax */
  push32((uint32_t)(EAX));
  /* 1031a507 call 0x1031c270 */
  push32(0x1031a50cu); f_1031c270();
  /* 1031a50c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1031a50f:;
  /* 1031a50f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031a512 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1031a515 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1031a51b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1031a51d je 0x1031a5fb */
  if (C.zf) goto L_1031a5fb;
L_1031a523:;
  /* 1031a523 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031a526 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031a529 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1031a52b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031a52e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1031a530 jge 0x1031a553 */
  if ((C.sf==C.of)) goto L_1031a553;
  /* 1031a532 push 0x1033aea4 */
  push32((uint32_t)(0x1033aea4u));
  /* 1031a537 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031a539 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1031a53e push 0x1033aee4 */
  push32((uint32_t)(0x1033aee4u));
  /* 1031a543 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031a545 call 0x10312780 */
  push32(0x1031a54au); f_10312780();
  /* 1031a54a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031a54d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031a550 jne 0x1031a553 */
  if (!C.zf) goto L_1031a553;
  /* 1031a552 int3  */
  x86_unimpl("int3 @ 0x1031a552");
L_1031a553:;
  /* 1031a553 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031a555 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031a557 jne 0x1031a523 */
  if (!C.zf) goto L_1031a523;
  /* 1031a559 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031a55c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031a55f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1031a561 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031a564 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1031a567 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031a56a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1031a56d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031a570 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031a573 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1031a575 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031a578 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1031a57b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031a57e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031a581 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1031a584 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031a588 jle 0x1031a5a6 */
  if ((C.zf||C.sf!=C.of)) goto L_1031a5a6;
  /* 1031a58a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031a58d push ecx */
  push32((uint32_t)(ECX));
  /* 1031a58e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031a591 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1031a594 push eax */
  push32((uint32_t)(EAX));
  /* 1031a595 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1031a598 push ecx */
  push32((uint32_t)(ECX));
  /* 1031a599 call 0x1031bf60 */
  push32(0x1031a59eu); f_1031bf60();
  /* 1031a59e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031a5a1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1031a5a4 jmp 0x1031a5ee */
  goto L_1031a5ee;
L_1031a5a6:;
  /* 1031a5a6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031a5aa je 0x1031a5c9 */
  if (C.zf) goto L_1031a5c9;
  /* 1031a5ac mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1031a5af sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1031a5b2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1031a5b5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1031a5b8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031a5bb mov ecx, dword ptr [edx*4 + 0x10340ea0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10340ea0)));
  /* 1031a5c2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031a5c4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1031a5c7 jmp 0x1031a5d0 */
  goto L_1031a5d0;
L_1031a5c9:;
  /* 1031a5c9 mov dword ptr [ebp - 0x14], 0x1033da60 */
  w32((uint32_t)(EBP + -0x14), (0x1033da60u));
L_1031a5d0:;
  /* 1031a5d0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1031a5d3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 1031a5d7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1031a5da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031a5dc je 0x1031a5ee */
  if (C.zf) goto L_1031a5ee;
  /* 1031a5de push 2 */
  push32((uint32_t)(0x2u));
  /* 1031a5e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031a5e2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1031a5e5 push ecx */
  push32((uint32_t)(ECX));
  /* 1031a5e6 call 0x1031be10 */
  push32(0x1031a5ebu); f_1031be10();
  /* 1031a5eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1031a5ee:;
  /* 1031a5ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031a5f1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1031a5f4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1031a5f7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1031a5f9 jmp 0x1031a619 */
  goto L_1031a619;
L_1031a5fb:;
  /* 1031a5fb mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1031a602 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031a605 push edx */
  push32((uint32_t)(EDX));
  /* 1031a606 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1031a609 push eax */
  push32((uint32_t)(EAX));
  /* 1031a60a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1031a60d push ecx */
  push32((uint32_t)(ECX));
  /* 1031a60e call 0x1031bf60 */
  push32(0x1031a613u); f_1031bf60();
  /* 1031a613 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031a616 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1031a619:;
  /* 1031a619 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031a61c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031a61f je 0x1031a635 */
  if (C.zf) goto L_1031a635;
  /* 1031a621 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031a624 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1031a627 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1031a62a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031a62d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1031a630 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1031a633 jmp 0x1031a63d */
  goto L_1031a63d;
L_1031a635:;
  /* 1031a635 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031a638 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1031a63d:;
  /* 1031a63d pop edi */
  EDI = (pop32());
  /* 1031a63e pop esi */
  ESI = (pop32());
  /* 1031a63f pop ebx */
  EBX = (pop32());
  /* 1031a640 mov esp, ebp */
  ESP = (EBP);
  /* 1031a642 pop ebp */
  EBP = (pop32());
  /* 1031a643 ret  */
  ESPCHK(0x1031a3d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a650 @ 0x1031a650 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_1031a650(void) {
  FTRACE(0x1031a650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031a650 push ebp */
  push32((uint32_t)(EBP));
  /* 1031a651 mov ebp, esp */
  EBP = (ESP);
  /* 1031a653 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031a659 push ebx */
  push32((uint32_t)(EBX));
  /* 1031a65a push esi */
  push32((uint32_t)(ESI));
  /* 1031a65b push edi */
  push32((uint32_t)(EDI));
  /* 1031a65c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1031a663 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1031a66d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1031a674:;
  /* 1031a674 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031a677 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1031a679 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1031a67c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1031a680 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031a683 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031a686 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1031a689 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1031a68b je 0x1031b267 */
  if (C.zf) goto L_1031b267;
  /* 1031a691 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031a698 jl 0x1031b267 */
  if ((C.sf!=C.of)) goto L_1031b267;
  /* 1031a69e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1031a6a2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031a6a5 jl 0x1031a6c6 */
  if ((C.sf!=C.of)) goto L_1031a6c6;
  /* 1031a6a7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1031a6ab cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031a6ae jg 0x1031a6c6 */
  if ((!C.zf&&C.sf==C.of)) goto L_1031a6c6;
  /* 1031a6b0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1031a6b4 movsx ecx, byte ptr [eax + 0x1033aedc] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x1033aedc))));
  /* 1031a6bb and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1031a6be mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 1031a6c4 jmp 0x1031a6d0 */
  goto L_1031a6d0;
L_1031a6c6:;
  /* 1031a6c6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_1031a6d0:;
  /* 1031a6d0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 1031a6d6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1031a6d9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031a6dc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1031a6df movsx edx, byte ptr [ecx + eax*8 + 0x1033aefc] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x1033aefc))));
  /* 1031a6e7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1031a6ea mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1031a6ed mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1031a6f0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 1031a6f6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031a6fd ja 0x1031b262 */
  if ((!C.cf&&!C.zf)) goto L_1031b262;
  /* 1031a703 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 1031a709 jmp dword ptr [ecx*4 + 0x1031b274] */
  switch (ECX) {
    case 0: goto L_1031a710;
    case 1: goto L_1031a7aa;
    case 2: goto L_1031a7ec;
    case 3: goto L_1031a85b;
    case 4: goto L_1031a8b3;
    case 5: goto L_1031a8c2;
    case 6: goto L_1031a90e;
    case 7: goto L_1031a9a1;
    case 8: goto L_1031a838;
    case 9: goto L_1031a843;
    case 10: goto L_1031a82e;
    case 11: goto L_1031a823;
    case 12: goto L_1031a84e;
    case 13: goto L_1031a856;
    default: x86_unimpl("switch@0x1031a709 out of table"); return;
  }
L_1031a710:;
  /* 1031a710 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1031a717 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1031a71a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1031a720 mov eax, dword ptr [0x1033dc98] */
  EAX = (r32((uint32_t)(0x1033dc98)));
  /* 1031a725 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1031a727 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1031a72b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1031a731 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1031a733 je 0x1031a78d */
  if (C.zf) goto L_1031a78d;
  /* 1031a735 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1031a73b push edx */
  push32((uint32_t)(EDX));
  /* 1031a73c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031a73f push eax */
  push32((uint32_t)(EAX));
  /* 1031a740 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1031a744 push ecx */
  push32((uint32_t)(ECX));
  /* 1031a745 call 0x1031b380 */
  push32(0x1031a74au); f_1031b380();
  /* 1031a74a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031a74d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031a750 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1031a752 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 1031a755 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031a758 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031a75b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1031a75e:;
  /* 1031a75e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1031a762 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1031a764 jne 0x1031a787 */
  if (!C.zf) goto L_1031a787;
  /* 1031a766 push 0x1033af7c */
  push32((uint32_t)(0x1033af7cu));
  /* 1031a76b push 0 */
  push32((uint32_t)(0x0u));
  /* 1031a76d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 1031a772 push 0x1033af70 */
  push32((uint32_t)(0x1033af70u));
  /* 1031a777 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031a779 call 0x10312780 */
  push32(0x1031a77eu); f_10312780();
  /* 1031a77e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031a781 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031a784 jne 0x1031a787 */
  if (!C.zf) goto L_1031a787;
  /* 1031a786 int3  */
  x86_unimpl("int3 @ 0x1031a786");
L_1031a787:;
  /* 1031a787 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031a789 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031a78b jne 0x1031a75e */
  if (!C.zf) goto L_1031a75e;
L_1031a78d:;
  /* 1031a78d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1031a793 push ecx */
  push32((uint32_t)(ECX));
  /* 1031a794 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031a797 push edx */
  push32((uint32_t)(EDX));
  /* 1031a798 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1031a79c push eax */
  push32((uint32_t)(EAX));
  /* 1031a79d call 0x1031b380 */
  push32(0x1031a7a2u); f_1031b380();
  /* 1031a7a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031a7a5 jmp 0x1031b262 */
  goto L_1031b262;
L_1031a7aa:;
  /* 1031a7aa mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1031a7b1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031a7b4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1031a7ba mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 1031a7c0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 1031a7c6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1031a7cc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1031a7cf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1031a7d6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 1031a7e0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1031a7e7 jmp 0x1031b262 */
  goto L_1031b262;
L_1031a7ec:;
  /* 1031a7ec movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1031a7f0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 1031a7f6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1031a7fc sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031a7ff mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 1031a805 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031a80c ja 0x1031a856 */
  if ((!C.cf&&!C.zf)) goto L_1031a856;
  /* 1031a80e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 1031a814 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031a816 mov al, byte ptr [ecx + 0x1031b2ac] */
  AL = (r8((uint32_t)(ECX + 0x1031b2ac)));
  /* 1031a81c jmp dword ptr [eax*4 + 0x1031b294] */
  switch (EAX) {
    case 0: goto L_1031a838;
    case 1: goto L_1031a843;
    case 2: goto L_1031a82e;
    case 3: goto L_1031a823;
    case 4: goto L_1031a84e;
    case 5: goto L_1031a856;
    default: x86_unimpl("switch@0x1031a81c out of table"); return;
  }
L_1031a823:;
  /* 1031a823 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031a826 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1031a829 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1031a82c jmp 0x1031a856 */
  goto L_1031a856;
L_1031a82e:;
  /* 1031a82e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031a831 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1031a833 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1031a836 jmp 0x1031a856 */
  goto L_1031a856;
L_1031a838:;
  /* 1031a838 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031a83b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1031a83e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1031a841 jmp 0x1031a856 */
  goto L_1031a856;
L_1031a843:;
  /* 1031a843 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031a846 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 1031a849 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1031a84c jmp 0x1031a856 */
  goto L_1031a856;
L_1031a84e:;
  /* 1031a84e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031a851 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1031a853 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1031a856:;
  /* 1031a856 jmp 0x1031b262 */
  goto L_1031b262;
L_1031a85b:;
  /* 1031a85b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1031a85f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031a862 jne 0x1031a897 */
  if (!C.zf) goto L_1031a897;
  /* 1031a864 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1031a867 push edx */
  push32((uint32_t)(EDX));
  /* 1031a868 call 0x1031b490 */
  push32(0x1031a86du); f_1031b490();
  /* 1031a86d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031a870 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 1031a876 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031a87d jge 0x1031a895 */
  if ((C.sf==C.of)) goto L_1031a895;
  /* 1031a87f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031a882 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1031a884 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1031a887 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1031a88d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1031a88f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1031a895:;
  /* 1031a895 jmp 0x1031a8ae */
  goto L_1031a8ae;
L_1031a897:;
  /* 1031a897 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1031a89d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031a8a0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1031a8a4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 1031a8a8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1031a8ae:;
  /* 1031a8ae jmp 0x1031b262 */
  goto L_1031b262;
L_1031a8b3:;
  /* 1031a8b3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1031a8bd jmp 0x1031b262 */
  goto L_1031b262;
L_1031a8c2:;
  /* 1031a8c2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1031a8c6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031a8c9 jne 0x1031a8f2 */
  if (!C.zf) goto L_1031a8f2;
  /* 1031a8cb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1031a8ce push eax */
  push32((uint32_t)(EAX));
  /* 1031a8cf call 0x1031b490 */
  push32(0x1031a8d4u); f_1031b490();
  /* 1031a8d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031a8d7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1031a8dd cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031a8e4 jge 0x1031a8f0 */
  if ((C.sf==C.of)) goto L_1031a8f0;
  /* 1031a8e6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_1031a8f0:;
  /* 1031a8f0 jmp 0x1031a909 */
  goto L_1031a909;
L_1031a8f2:;
  /* 1031a8f2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 1031a8f8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031a8fb movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1031a8ff lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1031a903 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_1031a909:;
  /* 1031a909 jmp 0x1031b262 */
  goto L_1031b262;
L_1031a90e:;
  /* 1031a90e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1031a912 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 1031a918 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1031a91e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031a921 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 1031a927 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031a92e ja 0x1031a99c */
  if ((!C.cf&&!C.zf)) goto L_1031a99c;
  /* 1031a930 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1031a936 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031a938 mov al, byte ptr [ecx + 0x1031b2d1] */
  AL = (r8((uint32_t)(ECX + 0x1031b2d1)));
  /* 1031a93e jmp dword ptr [eax*4 + 0x1031b2bd] */
  switch (EAX) {
    case 0: goto L_1031a950;
    case 1: goto L_1031a989;
    case 2: goto L_1031a945;
    case 3: goto L_1031a993;
    case 4: goto L_1031a99c;
    default: x86_unimpl("switch@0x1031a93e out of table"); return;
  }
L_1031a945:;
  /* 1031a945 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031a948 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1031a94b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1031a94e jmp 0x1031a99c */
  goto L_1031a99c;
L_1031a950:;
  /* 1031a950 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031a953 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1031a956 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031a959 jne 0x1031a97b */
  if (!C.zf) goto L_1031a97b;
  /* 1031a95b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031a95e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1031a962 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031a965 jne 0x1031a97b */
  if (!C.zf) goto L_1031a97b;
  /* 1031a967 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031a96a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031a96d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1031a970 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031a973 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1031a976 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1031a979 jmp 0x1031a987 */
  goto L_1031a987;
L_1031a97b:;
  /* 1031a97b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1031a982 jmp 0x1031a710 */
  goto L_1031a710;
L_1031a987:;
  /* 1031a987 jmp 0x1031a99c */
  goto L_1031a99c;
L_1031a989:;
  /* 1031a989 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031a98c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1031a98e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1031a991 jmp 0x1031a99c */
  goto L_1031a99c;
L_1031a993:;
  /* 1031a993 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031a996 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1031a999 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1031a99c:;
  /* 1031a99c jmp 0x1031b262 */
  goto L_1031b262;
L_1031a9a1:;
  /* 1031a9a1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1031a9a5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1031a9ab mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1031a9b1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031a9b4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1031a9ba cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031a9c1 ja 0x1031b087 */
  if ((!C.cf&&!C.zf)) goto L_1031b087;
  /* 1031a9c7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1031a9cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1031a9cf mov cl, byte ptr [edx + 0x1031b33c] */
  CL = (r8((uint32_t)(EDX + 0x1031b33c)));
  /* 1031a9d5 jmp dword ptr [ecx*4 + 0x1031b300] */
  switch (ECX) {
    case 0: goto L_1031a9dc;
    case 1: goto L_1031ac70;
    case 2: goto L_1031ab00;
    case 3: goto L_1031ada9;
    case 4: goto L_1031aa6b;
    case 5: goto L_1031a9f1;
    case 6: goto L_1031ad7b;
    case 7: goto L_1031ac80;
    case 8: goto L_1031ac25;
    case 9: goto L_1031adf5;
    case 10: goto L_1031ad9f;
    case 11: goto L_1031ab16;
    case 12: goto L_1031ad93;
    case 13: goto L_1031adb5;
    case 14: goto L_1031b087;
    default: x86_unimpl("switch@0x1031a9d5 out of table"); return;
  }
L_1031a9dc:;
  /* 1031a9dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031a9df and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 1031a9e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031a9e6 jne 0x1031a9f1 */
  if (!C.zf) goto L_1031a9f1;
  /* 1031a9e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031a9eb or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1031a9ee mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1031a9f1:;
  /* 1031a9f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031a9f4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1031a9fa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1031a9fc je 0x1031aa37 */
  if (C.zf) goto L_1031aa37;
  /* 1031a9fe lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1031aa01 push eax */
  push32((uint32_t)(EAX));
  /* 1031aa02 call 0x1031b4d0 */
  push32(0x1031aa07u); f_1031b4d0();
  /* 1031aa07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031aa0a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1031aa0e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1031aa12 push ecx */
  push32((uint32_t)(ECX));
  /* 1031aa13 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1031aa19 push edx */
  push32((uint32_t)(EDX));
  /* 1031aa1a call 0x1031c5b0 */
  push32(0x1031aa1fu); f_1031c5b0();
  /* 1031aa1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031aa22 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1031aa25 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031aa29 jge 0x1031aa35 */
  if ((C.sf==C.of)) goto L_1031aa35;
  /* 1031aa2b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_1031aa35:;
  /* 1031aa35 jmp 0x1031aa5d */
  goto L_1031aa5d;
L_1031aa37:;
  /* 1031aa37 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1031aa3a push eax */
  push32((uint32_t)(EAX));
  /* 1031aa3b call 0x1031b490 */
  push32(0x1031aa40u); f_1031b490();
  /* 1031aa40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031aa43 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1031aa4a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 1031aa50 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 1031aa56 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1031aa5d:;
  /* 1031aa5d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1031aa63 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1031aa66 jmp 0x1031b087 */
  goto L_1031b087;
L_1031aa6b:;
  /* 1031aa6b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1031aa6e push eax */
  push32((uint32_t)(EAX));
  /* 1031aa6f call 0x1031b490 */
  push32(0x1031aa74u); f_1031b490();
  /* 1031aa74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031aa77 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1031aa7d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031aa84 je 0x1031aa92 */
  if (C.zf) goto L_1031aa92;
  /* 1031aa86 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1031aa8c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031aa90 jne 0x1031aaac */
  if (!C.zf) goto L_1031aaac;
L_1031aa92:;
  /* 1031aa92 mov edx, dword ptr [0x1033dfb0] */
  EDX = (r32((uint32_t)(0x1033dfb0)));
  /* 1031aa98 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1031aa9b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1031aa9e push eax */
  push32((uint32_t)(EAX));
  /* 1031aa9f call 0x103164f0 */
  push32(0x1031aaa4u); f_103164f0();
  /* 1031aaa4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031aaa7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1031aaaa jmp 0x1031aafb */
  goto L_1031aafb;
L_1031aaac:;
  /* 1031aaac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031aaaf and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 1031aab5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1031aab7 je 0x1031aadc */
  if (C.zf) goto L_1031aadc;
  /* 1031aab9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1031aabf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1031aac2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1031aac5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1031aacb movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1031aace shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1031aad0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1031aad3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1031aada jmp 0x1031aafb */
  goto L_1031aafb;
L_1031aadc:;
  /* 1031aadc mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1031aae3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1031aae9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1031aaec mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1031aaef mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1031aaf5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 1031aaf8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1031aafb:;
  /* 1031aafb jmp 0x1031b087 */
  goto L_1031b087;
L_1031ab00:;
  /* 1031ab00 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031ab03 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 1031ab09 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1031ab0b jne 0x1031ab16 */
  if (!C.zf) goto L_1031ab16;
  /* 1031ab0d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031ab10 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1031ab13 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1031ab16:;
  /* 1031ab16 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031ab1d jne 0x1031ab2b */
  if (!C.zf) goto L_1031ab2b;
  /* 1031ab1f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 1031ab29 jmp 0x1031ab37 */
  goto L_1031ab37;
L_1031ab2b:;
  /* 1031ab2b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1031ab31 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_1031ab37:;
  /* 1031ab37 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1031ab3d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1031ab43 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1031ab46 push edx */
  push32((uint32_t)(EDX));
  /* 1031ab47 call 0x1031b490 */
  push32(0x1031ab4cu); f_1031b490();
  /* 1031ab4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ab4f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1031ab52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031ab55 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1031ab5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031ab5c je 0x1031abc6 */
  if (C.zf) goto L_1031abc6;
  /* 1031ab5e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031ab62 jne 0x1031ab6d */
  if (!C.zf) goto L_1031ab6d;
  /* 1031ab64 mov ecx, dword ptr [0x1033dfb4] */
  ECX = (r32((uint32_t)(0x1033dfb4)));
  /* 1031ab6a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1031ab6d:;
  /* 1031ab6d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1031ab74 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1031ab77 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1031ab7d:;
  /* 1031ab7d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1031ab83 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1031ab89 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031ab8c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1031ab92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031ab94 je 0x1031abb6 */
  if (C.zf) goto L_1031abb6;
  /* 1031ab96 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1031ab9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031ab9e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1031aba1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031aba3 je 0x1031abb6 */
  if (C.zf) goto L_1031abb6;
  /* 1031aba5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1031abab add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031abae mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1031abb4 jmp 0x1031ab7d */
  goto L_1031ab7d;
L_1031abb6:;
  /* 1031abb6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1031abbc sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031abbf sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1031abc1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1031abc4 jmp 0x1031ac20 */
  goto L_1031ac20;
L_1031abc6:;
  /* 1031abc6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031abca jne 0x1031abd4 */
  if (!C.zf) goto L_1031abd4;
  /* 1031abcc mov eax, dword ptr [0x1033dfb0] */
  EAX = (r32((uint32_t)(0x1033dfb0)));
  /* 1031abd1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1031abd4:;
  /* 1031abd4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1031abd7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1031abdd:;
  /* 1031abdd mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1031abe3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1031abe9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031abec mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1031abf2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1031abf4 je 0x1031ac14 */
  if (C.zf) goto L_1031ac14;
  /* 1031abf6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1031abfc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1031abff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1031ac01 je 0x1031ac14 */
  if (C.zf) goto L_1031ac14;
  /* 1031ac03 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1031ac09 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ac0c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1031ac12 jmp 0x1031abdd */
  goto L_1031abdd;
L_1031ac14:;
  /* 1031ac14 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1031ac1a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031ac1d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1031ac20:;
  /* 1031ac20 jmp 0x1031b087 */
  goto L_1031b087;
L_1031ac25:;
  /* 1031ac25 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1031ac28 push edx */
  push32((uint32_t)(EDX));
  /* 1031ac29 call 0x1031b490 */
  push32(0x1031ac2eu); f_1031b490();
  /* 1031ac2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ac31 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1031ac37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031ac3a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1031ac3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031ac3f je 0x1031ac53 */
  if (C.zf) goto L_1031ac53;
  /* 1031ac41 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1031ac47 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1031ac4e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1031ac51 jmp 0x1031ac61 */
  goto L_1031ac61;
L_1031ac53:;
  /* 1031ac53 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1031ac59 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1031ac5f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1031ac61:;
  /* 1031ac61 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1031ac6b jmp 0x1031b087 */
  goto L_1031b087;
L_1031ac70:;
  /* 1031ac70 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1031ac77 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1031ac7a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1031ac7d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1031ac80:;
  /* 1031ac80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031ac83 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1031ac85 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1031ac88 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1031ac8e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1031ac91 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031ac98 jge 0x1031aca6 */
  if ((C.sf==C.of)) goto L_1031aca6;
  /* 1031ac9a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1031aca4 jmp 0x1031acc2 */
  goto L_1031acc2;
L_1031aca6:;
  /* 1031aca6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031acad jne 0x1031acc2 */
  if (!C.zf) goto L_1031acc2;
  /* 1031acaf movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1031acb3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031acb6 jne 0x1031acc2 */
  if (!C.zf) goto L_1031acc2;
  /* 1031acb8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1031acc2:;
  /* 1031acc2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1031acc5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031acc8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1031accb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1031acce sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031acd1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1031acd3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1031acd6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1031acdc mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1031ace2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031ace5 push ecx */
  push32((uint32_t)(ECX));
  /* 1031ace6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1031acec push edx */
  push32((uint32_t)(EDX));
  /* 1031aced movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1031acf1 push eax */
  push32((uint32_t)(EAX));
  /* 1031acf2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1031acf5 push ecx */
  push32((uint32_t)(ECX));
  /* 1031acf6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1031acfc push edx */
  push32((uint32_t)(EDX));
  /* 1031acfd call dword ptr [0x1033e3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1033e3a0))), 0x1031ad03u);
  /* 1031ad03 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ad06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031ad09 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1031ad0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031ad10 je 0x1031ad28 */
  if (C.zf) goto L_1031ad28;
  /* 1031ad12 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031ad19 jne 0x1031ad28 */
  if (!C.zf) goto L_1031ad28;
  /* 1031ad1b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1031ad1e push ecx */
  push32((uint32_t)(ECX));
  /* 1031ad1f call dword ptr [0x1033e3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1033e3ac))), 0x1031ad25u);
  /* 1031ad25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1031ad28:;
  /* 1031ad28 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1031ad2c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031ad2f jne 0x1031ad4a */
  if (!C.zf) goto L_1031ad4a;
  /* 1031ad31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031ad34 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1031ad39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031ad3b jne 0x1031ad4a */
  if (!C.zf) goto L_1031ad4a;
  /* 1031ad3d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1031ad40 push ecx */
  push32((uint32_t)(ECX));
  /* 1031ad41 call dword ptr [0x1033e3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1033e3a4))), 0x1031ad47u);
  /* 1031ad47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1031ad4a:;
  /* 1031ad4a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1031ad4d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1031ad50 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031ad53 jne 0x1031ad67 */
  if (!C.zf) goto L_1031ad67;
  /* 1031ad55 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031ad58 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1031ad5b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1031ad5e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1031ad61 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ad64 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1031ad67:;
  /* 1031ad67 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1031ad6a push eax */
  push32((uint32_t)(EAX));
  /* 1031ad6b call 0x103164f0 */
  push32(0x1031ad70u); f_103164f0();
  /* 1031ad70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ad73 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1031ad76 jmp 0x1031b087 */
  goto L_1031b087;
L_1031ad7b:;
  /* 1031ad7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031ad7e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1031ad81 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1031ad84 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1031ad8e jmp 0x1031ae15 */
  goto L_1031ae15;
L_1031ad93:;
  /* 1031ad93 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1031ad9d jmp 0x1031ae15 */
  goto L_1031ae15;
L_1031ad9f:;
  /* 1031ad9f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1031ada9:;
  /* 1031ada9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1031adb3 jmp 0x1031adbf */
  goto L_1031adbf;
L_1031adb5:;
  /* 1031adb5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1031adbf:;
  /* 1031adbf mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1031adc9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031adcc and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1031add2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1031add4 je 0x1031adf3 */
  if (C.zf) goto L_1031adf3;
  /* 1031add6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1031addd mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1031ade3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ade6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1031adec mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1031adf3:;
  /* 1031adf3 jmp 0x1031ae15 */
  goto L_1031ae15;
L_1031adf5:;
  /* 1031adf5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1031adff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031ae02 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1031ae08 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1031ae0a je 0x1031ae15 */
  if (C.zf) goto L_1031ae15;
  /* 1031ae0c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031ae0f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1031ae12 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1031ae15:;
  /* 1031ae15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031ae18 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1031ae1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031ae1f je 0x1031ae3e */
  if (C.zf) goto L_1031ae3e;
  /* 1031ae21 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1031ae24 push ecx */
  push32((uint32_t)(ECX));
  /* 1031ae25 call 0x1031b4b0 */
  push32(0x1031ae2au); f_1031b4b0();
  /* 1031ae2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ae2d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1031ae33 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1031ae39 jmp 0x1031aecf */
  goto L_1031aecf;
L_1031ae3e:;
  /* 1031ae3e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031ae41 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1031ae44 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1031ae46 je 0x1031ae90 */
  if (C.zf) goto L_1031ae90;
  /* 1031ae48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031ae4b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1031ae4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031ae50 je 0x1031ae70 */
  if (C.zf) goto L_1031ae70;
  /* 1031ae52 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1031ae55 push ecx */
  push32((uint32_t)(ECX));
  /* 1031ae56 call 0x1031b490 */
  push32(0x1031ae5bu); f_1031b490();
  /* 1031ae5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ae5e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1031ae61 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1031ae62 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1031ae68 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1031ae6e jmp 0x1031ae8e */
  goto L_1031ae8e;
L_1031ae70:;
  /* 1031ae70 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1031ae73 push edx */
  push32((uint32_t)(EDX));
  /* 1031ae74 call 0x1031b490 */
  push32(0x1031ae79u); f_1031b490();
  /* 1031ae79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ae7c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1031ae81 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1031ae82 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1031ae88 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1031ae8e:;
  /* 1031ae8e jmp 0x1031aecf */
  goto L_1031aecf;
L_1031ae90:;
  /* 1031ae90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031ae93 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1031ae96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031ae98 je 0x1031aeb5 */
  if (C.zf) goto L_1031aeb5;
  /* 1031ae9a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1031ae9d push ecx */
  push32((uint32_t)(ECX));
  /* 1031ae9e call 0x1031b490 */
  push32(0x1031aea3u); f_1031b490();
  /* 1031aea3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031aea6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1031aea7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1031aead mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1031aeb3 jmp 0x1031aecf */
  goto L_1031aecf;
L_1031aeb5:;
  /* 1031aeb5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1031aeb8 push edx */
  push32((uint32_t)(EDX));
  /* 1031aeb9 call 0x1031b490 */
  push32(0x1031aebeu); f_1031b490();
  /* 1031aebe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031aec1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1031aec3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1031aec9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1031aecf:;
  /* 1031aecf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031aed2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1031aed5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1031aed7 je 0x1031af17 */
  if (C.zf) goto L_1031af17;
  /* 1031aed9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031aee0 jg 0x1031af17 */
  if ((!C.zf&&C.sf==C.of)) goto L_1031af17;
  /* 1031aee2 jl 0x1031aeed */
  if ((C.sf!=C.of)) goto L_1031aeed;
  /* 1031aee4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031aeeb jae 0x1031af17 */
  if (!C.cf) goto L_1031af17;
L_1031aeed:;
  /* 1031aeed mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1031aef3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1031aef5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1031aefb adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031aefe neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1031af00 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1031af06 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1031af0c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031af0f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1031af12 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1031af15 jmp 0x1031af2f */
  goto L_1031af2f;
L_1031af17:;
  /* 1031af17 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1031af1d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1031af23 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1031af29 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1031af2f:;
  /* 1031af2f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031af32 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1031af38 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1031af3a jne 0x1031af57 */
  if (!C.zf) goto L_1031af57;
  /* 1031af3c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1031af42 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1031af48 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1031af4b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1031af51 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1031af57:;
  /* 1031af57 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031af5e jge 0x1031af6c */
  if ((C.sf==C.of)) goto L_1031af6c;
  /* 1031af60 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1031af6a jmp 0x1031af75 */
  goto L_1031af75;
L_1031af6c:;
  /* 1031af6c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031af6f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1031af72 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1031af75:;
  /* 1031af75 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1031af7b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1031af81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031af83 jne 0x1031af8c */
  if (!C.zf) goto L_1031af8c;
  /* 1031af85 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1031af8c:;
  /* 1031af8c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1031af8f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1031af92:;
  /* 1031af92 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1031af98 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1031af9e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031afa1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1031afa7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1031afa9 jg 0x1031afbf */
  if ((!C.zf&&C.sf==C.of)) goto L_1031afbf;
  /* 1031afab mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1031afb1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1031afb7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1031afb9 je 0x1031b040 */
  if (C.zf) goto L_1031b040;
L_1031afbf:;
  /* 1031afbf mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1031afc5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1031afc6 push edx */
  push32((uint32_t)(EDX));
  /* 1031afc7 push eax */
  push32((uint32_t)(EAX));
  /* 1031afc8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1031afce push edx */
  push32((uint32_t)(EDX));
  /* 1031afcf mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1031afd5 push eax */
  push32((uint32_t)(EAX));
  /* 1031afd6 call 0x1031a350 */
  push32(0x1031afdbu); f_1031a350();
  /* 1031afdb add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031afde mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1031afe4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1031afea cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1031afeb push edx */
  push32((uint32_t)(EDX));
  /* 1031afec push eax */
  push32((uint32_t)(EAX));
  /* 1031afed mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1031aff3 push ecx */
  push32((uint32_t)(ECX));
  /* 1031aff4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1031affa push edx */
  push32((uint32_t)(EDX));
  /* 1031affb call 0x1031a2e0 */
  push32(0x1031b000u); f_1031a2e0();
  /* 1031b000 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1031b006 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1031b00c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031b013 jle 0x1031b027 */
  if ((C.zf||C.sf!=C.of)) goto L_1031b027;
  /* 1031b015 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1031b01b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031b021 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1031b027:;
  /* 1031b027 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1031b02a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1031b030 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1031b032 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1031b035 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031b038 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1031b03b jmp 0x1031af92 */
  goto L_1031af92;
L_1031b040:;
  /* 1031b040 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1031b043 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031b046 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1031b049 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1031b04c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031b04f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1031b052 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031b055 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1031b05a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031b05c je 0x1031b087 */
  if (C.zf) goto L_1031b087;
  /* 1031b05e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1031b061 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1031b064 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031b067 jne 0x1031b06f */
  if (!C.zf) goto L_1031b06f;
  /* 1031b069 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031b06d jne 0x1031b087 */
  if (!C.zf) goto L_1031b087;
L_1031b06f:;
  /* 1031b06f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1031b072 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031b075 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1031b078 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1031b07b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1031b07e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1031b081 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031b084 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1031b087:;
  /* 1031b087 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031b08e jne 0x1031b262 */
  if (!C.zf) goto L_1031b262;
  /* 1031b094 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031b097 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1031b09a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031b09c je 0x1031b0ed */
  if (C.zf) goto L_1031b0ed;
  /* 1031b09e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031b0a1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1031b0a7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1031b0a9 je 0x1031b0bb */
  if (C.zf) goto L_1031b0bb;
  /* 1031b0ab mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1031b0b2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1031b0b9 jmp 0x1031b0ed */
  goto L_1031b0ed;
L_1031b0bb:;
  /* 1031b0bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031b0be and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1031b0c1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1031b0c3 je 0x1031b0d5 */
  if (C.zf) goto L_1031b0d5;
  /* 1031b0c5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1031b0cc mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1031b0d3 jmp 0x1031b0ed */
  goto L_1031b0ed;
L_1031b0d5:;
  /* 1031b0d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031b0d8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1031b0db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031b0dd je 0x1031b0ed */
  if (C.zf) goto L_1031b0ed;
  /* 1031b0df mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1031b0e6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1031b0ed:;
  /* 1031b0ed mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1031b0f3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031b0f6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031b0f9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1031b0ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031b102 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1031b105 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1031b107 jne 0x1031b125 */
  if (!C.zf) goto L_1031b125;
  /* 1031b109 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1031b10f push eax */
  push32((uint32_t)(EAX));
  /* 1031b110 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031b113 push ecx */
  push32((uint32_t)(ECX));
  /* 1031b114 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1031b11a push edx */
  push32((uint32_t)(EDX));
  /* 1031b11b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1031b11d call 0x1031b400 */
  push32(0x1031b122u); f_1031b400();
  /* 1031b122 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1031b125:;
  /* 1031b125 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1031b12b push eax */
  push32((uint32_t)(EAX));
  /* 1031b12c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031b12f push ecx */
  push32((uint32_t)(ECX));
  /* 1031b130 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1031b133 push edx */
  push32((uint32_t)(EDX));
  /* 1031b134 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1031b13a push eax */
  push32((uint32_t)(EAX));
  /* 1031b13b call 0x1031b440 */
  push32(0x1031b140u); f_1031b440();
  /* 1031b140 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031b143 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031b146 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1031b149 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1031b14b je 0x1031b173 */
  if (C.zf) goto L_1031b173;
  /* 1031b14d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031b150 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1031b153 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1031b155 jne 0x1031b173 */
  if (!C.zf) goto L_1031b173;
  /* 1031b157 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1031b15d push eax */
  push32((uint32_t)(EAX));
  /* 1031b15e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031b161 push ecx */
  push32((uint32_t)(ECX));
  /* 1031b162 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1031b168 push edx */
  push32((uint32_t)(EDX));
  /* 1031b169 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1031b16b call 0x1031b400 */
  push32(0x1031b170u); f_1031b400();
  /* 1031b170 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1031b173:;
  /* 1031b173 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031b177 je 0x1031b221 */
  if (C.zf) goto L_1031b221;
  /* 1031b17d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031b181 jle 0x1031b221 */
  if ((C.zf||C.sf!=C.of)) goto L_1031b221;
  /* 1031b187 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1031b18a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1031b190 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1031b193 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1031b199:;
  /* 1031b199 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1031b19f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1031b1a5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031b1a8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1031b1ae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1031b1b0 je 0x1031b21f */
  if (C.zf) goto L_1031b21f;
  /* 1031b1b2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1031b1b8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1031b1bb mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1031b1c2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1031b1c9 push eax */
  push32((uint32_t)(EAX));
  /* 1031b1ca lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1031b1d0 push ecx */
  push32((uint32_t)(ECX));
  /* 1031b1d1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1031b1d7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031b1da mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1031b1e0 call 0x1031c5b0 */
  push32(0x1031b1e5u); f_1031c5b0();
  /* 1031b1e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031b1e8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1031b1ee cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031b1f5 jg 0x1031b1f9 */
  if ((!C.zf&&C.sf==C.of)) goto L_1031b1f9;
  /* 1031b1f7 jmp 0x1031b21f */
  goto L_1031b21f;
L_1031b1f9:;
  /* 1031b1f9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1031b1ff push eax */
  push32((uint32_t)(EAX));
  /* 1031b200 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031b203 push ecx */
  push32((uint32_t)(ECX));
  /* 1031b204 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1031b20a push edx */
  push32((uint32_t)(EDX));
  /* 1031b20b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1031b211 push eax */
  push32((uint32_t)(EAX));
  /* 1031b212 call 0x1031b440 */
  push32(0x1031b217u); f_1031b440();
  /* 1031b217 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031b21a jmp 0x1031b199 */
  goto L_1031b199;
L_1031b21f:;
  /* 1031b21f jmp 0x1031b23c */
  goto L_1031b23c;
L_1031b221:;
  /* 1031b221 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1031b227 push ecx */
  push32((uint32_t)(ECX));
  /* 1031b228 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031b22b push edx */
  push32((uint32_t)(EDX));
  /* 1031b22c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1031b22f push eax */
  push32((uint32_t)(EAX));
  /* 1031b230 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1031b233 push ecx */
  push32((uint32_t)(ECX));
  /* 1031b234 call 0x1031b440 */
  push32(0x1031b239u); f_1031b440();
  /* 1031b239 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1031b23c:;
  /* 1031b23c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031b23f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1031b242 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1031b244 je 0x1031b262 */
  if (C.zf) goto L_1031b262;
  /* 1031b246 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1031b24c push eax */
  push32((uint32_t)(EAX));
  /* 1031b24d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031b250 push ecx */
  push32((uint32_t)(ECX));
  /* 1031b251 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1031b257 push edx */
  push32((uint32_t)(EDX));
  /* 1031b258 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1031b25a call 0x1031b400 */
  push32(0x1031b25fu); f_1031b400();
  /* 1031b25f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1031b262:;
  /* 1031b262 jmp 0x1031a674 */
  goto L_1031a674;
L_1031b267:;
  /* 1031b267 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1031b26d pop edi */
  EDI = (pop32());
  /* 1031b26e pop esi */
  ESI = (pop32());
  /* 1031b26f pop ebx */
  EBX = (pop32());
  /* 1031b270 mov esp, ebp */
  ESP = (EBP);
  /* 1031b272 pop ebp */
  EBP = (pop32());
  /* 1031b273 ret  */
  ESPCHK(0x1031a650u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b380 @ 0x1031b380 (119 bytes, 44 insns) */
void f_1031b380(void) {
  FTRACE(0x1031b380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031b380 push ebp */
  push32((uint32_t)(EBP));
  /* 1031b381 mov ebp, esp */
  EBP = (ESP);
  /* 1031b383 push ecx */
  push32((uint32_t)(ECX));
  /* 1031b384 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031b387 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1031b38a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031b38d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031b390 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1031b393 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031b396 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031b39a jl 0x1031b3c2 */
  if ((C.sf!=C.of)) goto L_1031b3c2;
  /* 1031b39c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031b39f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1031b3a1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1031b3a4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1031b3a6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1031b3aa and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1031b3b0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1031b3b3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031b3b6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1031b3b8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031b3bb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031b3be mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1031b3c0 jmp 0x1031b3d5 */
  goto L_1031b3d5;
L_1031b3c2:;
  /* 1031b3c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031b3c5 push edx */
  push32((uint32_t)(EDX));
  /* 1031b3c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031b3c9 push eax */
  push32((uint32_t)(EAX));
  /* 1031b3ca call 0x1031a3d0 */
  push32(0x1031b3cfu); f_1031a3d0();
  /* 1031b3cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031b3d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1031b3d5:;
  /* 1031b3d5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031b3d9 jne 0x1031b3e6 */
  if (!C.zf) goto L_1031b3e6;
  /* 1031b3db mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1031b3de mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1031b3e4 jmp 0x1031b3f3 */
  goto L_1031b3f3;
L_1031b3e6:;
  /* 1031b3e6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1031b3e9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1031b3eb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031b3ee mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1031b3f1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1031b3f3:;
  /* 1031b3f3 mov esp, ebp */
  ESP = (EBP);
  /* 1031b3f5 pop ebp */
  EBP = (pop32());
  /* 1031b3f6 ret  */
  ESPCHK(0x1031b380u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b400 @ 0x1031b400 (53 bytes, 23 insns) */
void f_1031b400(void) {
  FTRACE(0x1031b400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031b400 push ebp */
  push32((uint32_t)(EBP));
  /* 1031b401 mov ebp, esp */
  EBP = (ESP);
L_1031b403:;
  /* 1031b403 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031b406 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031b409 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031b40c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1031b40f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031b411 jle 0x1031b433 */
  if ((C.zf||C.sf!=C.of)) goto L_1031b433;
  /* 1031b413 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1031b416 push edx */
  push32((uint32_t)(EDX));
  /* 1031b417 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1031b41a push eax */
  push32((uint32_t)(EAX));
  /* 1031b41b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031b41e push ecx */
  push32((uint32_t)(ECX));
  /* 1031b41f call 0x1031b380 */
  push32(0x1031b424u); f_1031b380();
  /* 1031b424 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031b427 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1031b42a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031b42d jne 0x1031b431 */
  if (!C.zf) goto L_1031b431;
  /* 1031b42f jmp 0x1031b433 */
  goto L_1031b433;
L_1031b431:;
  /* 1031b431 jmp 0x1031b403 */
  goto L_1031b403;
L_1031b433:;
  /* 1031b433 pop ebp */
  EBP = (pop32());
  /* 1031b434 ret  */
  ESPCHK(0x1031b400u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b440 @ 0x1031b440 (74 bytes, 31 insns) */
void f_1031b440(void) {
  FTRACE(0x1031b440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031b440 push ebp */
  push32((uint32_t)(EBP));
  /* 1031b441 mov ebp, esp */
  EBP = (ESP);
  /* 1031b443 push ecx */
  push32((uint32_t)(ECX));
L_1031b444:;
  /* 1031b444 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031b447 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031b44a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031b44d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1031b450 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031b452 jle 0x1031b486 */
  if ((C.zf||C.sf!=C.of)) goto L_1031b486;
  /* 1031b454 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1031b457 push edx */
  push32((uint32_t)(EDX));
  /* 1031b458 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1031b45b push eax */
  push32((uint32_t)(EAX));
  /* 1031b45c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031b45f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1031b462 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1031b465 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031b468 push eax */
  push32((uint32_t)(EAX));
  /* 1031b469 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031b46c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031b46f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1031b472 call 0x1031b380 */
  push32(0x1031b477u); f_1031b380();
  /* 1031b477 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031b47a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1031b47d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031b480 jne 0x1031b484 */
  if (!C.zf) goto L_1031b484;
  /* 1031b482 jmp 0x1031b486 */
  goto L_1031b486;
L_1031b484:;
  /* 1031b484 jmp 0x1031b444 */
  goto L_1031b444;
L_1031b486:;
  /* 1031b486 mov esp, ebp */
  ESP = (EBP);
  /* 1031b488 pop ebp */
  EBP = (pop32());
  /* 1031b489 ret  */
  ESPCHK(0x1031b440u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b490 @ 0x1031b490 (26 bytes, 12 insns) */
void f_1031b490(void) {
  FTRACE(0x1031b490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031b490 push ebp */
  push32((uint32_t)(EBP));
  /* 1031b491 mov ebp, esp */
  EBP = (ESP);
  /* 1031b493 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031b496 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1031b498 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031b49b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031b49e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1031b4a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031b4a3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1031b4a5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1031b4a8 pop ebp */
  EBP = (pop32());
  /* 1031b4a9 ret  */
  ESPCHK(0x1031b490u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b4b0 @ 0x1031b4b0 (31 bytes, 14 insns) */
void f_1031b4b0(void) {
  FTRACE(0x1031b4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031b4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1031b4b1 mov ebp, esp */
  EBP = (ESP);
  /* 1031b4b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031b4b6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1031b4b8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031b4bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031b4be mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1031b4c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031b4c3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1031b4c5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031b4c8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1031b4ca mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1031b4cd pop ebp */
  EBP = (pop32());
  /* 1031b4ce ret  */
  ESPCHK(0x1031b4b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b4d0 @ 0x1031b4d0 (27 bytes, 12 insns) */
void f_1031b4d0(void) {
  FTRACE(0x1031b4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031b4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1031b4d1 mov ebp, esp */
  EBP = (ESP);
  /* 1031b4d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031b4d6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1031b4d8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031b4db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031b4de mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1031b4e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031b4e3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1031b4e5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1031b4e9 pop ebp */
  EBP = (pop32());
  /* 1031b4ea ret  */
  ESPCHK(0x1031b4d0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1031b4f0 (145 bytes, 42 insns) */
void f_1031b4f0(void) {
  FTRACE(0x1031b4f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031b4f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1031b4f1 mov ebp, esp */
  EBP = (ESP);
  /* 1031b4f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1031b4f4 call 0x1031b5a0 */
  push32(0x1031b4f9u); f_1031b5a0();
  /* 1031b4f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031b4fc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1031b4fe mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1031b505 jmp 0x1031b510 */
  goto L_1031b510;
L_1031b507:;
  /* 1031b507 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031b50a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031b50d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1031b510:;
  /* 1031b510 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031b514 jae 0x1031b53a */
  if (!C.cf) goto L_1031b53a;
  /* 1031b516 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031b519 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031b51c cmp ecx, dword ptr [eax*8 + 0x1033dfb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1033dfb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031b523 jne 0x1031b538 */
  if (!C.zf) goto L_1031b538;
  /* 1031b525 call 0x1031b590 */
  push32(0x1031b52au); f_1031b590();
  /* 1031b52a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031b52d mov ecx, dword ptr [edx*8 + 0x1033dfbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x1033dfbc)));
  /* 1031b534 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1031b536 jmp 0x1031b57d */
  goto L_1031b57d;
L_1031b538:;
  /* 1031b538 jmp 0x1031b507 */
  goto L_1031b507;
L_1031b53a:;
  /* 1031b53a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031b53e jb 0x1031b553 */
  if (C.cf) goto L_1031b553;
  /* 1031b540 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031b544 ja 0x1031b553 */
  if ((!C.cf&&!C.zf)) goto L_1031b553;
  /* 1031b546 call 0x1031b590 */
  push32(0x1031b54bu); f_1031b590();
  /* 1031b54b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1031b551 jmp 0x1031b57d */
  goto L_1031b57d;
L_1031b553:;
  /* 1031b553 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031b55a jb 0x1031b572 */
  if (C.cf) goto L_1031b572;
  /* 1031b55c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031b563 ja 0x1031b572 */
  if ((!C.cf&&!C.zf)) goto L_1031b572;
  /* 1031b565 call 0x1031b590 */
  push32(0x1031b56au); f_1031b590();
  /* 1031b56a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1031b570 jmp 0x1031b57d */
  goto L_1031b57d;
L_1031b572:;
  /* 1031b572 call 0x1031b590 */
  push32(0x1031b577u); f_1031b590();
  /* 1031b577 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1031b57d:;
  /* 1031b57d mov esp, ebp */
  ESP = (EBP);
  /* 1031b57f pop ebp */
  EBP = (pop32());
  /* 1031b580 ret  */
  ESPCHK(0x1031b4f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b590 @ 0x1031b590 (13 bytes, 6 insns) */
void f_1031b590(void) {
  FTRACE(0x1031b590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031b590 push ebp */
  push32((uint32_t)(EBP));
  /* 1031b591 mov ebp, esp */
  EBP = (ESP);
  /* 1031b593 call 0x10313100 */
  push32(0x1031b598u); f_10313100();
  /* 1031b598 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031b59b pop ebp */
  EBP = (pop32());
  /* 1031b59c ret  */
  ESPCHK(0x1031b590u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5a0 @ 0x1031b5a0 (13 bytes, 6 insns) */
void f_1031b5a0(void) {
  FTRACE(0x1031b5a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031b5a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1031b5a1 mov ebp, esp */
  EBP = (ESP);
  /* 1031b5a3 call 0x10313100 */
  push32(0x1031b5a8u); f_10313100();
  /* 1031b5a8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031b5ab pop ebp */
  EBP = (pop32());
  /* 1031b5ac ret  */
  ESPCHK(0x1031b5a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5b0 @ 0x1031b5b0 (664 bytes, 261 insns) [15 switch table(s)] */
void f_1031b5b0(void) {
  FTRACE(0x1031b5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031b5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1031b5b1 mov ebp, esp */
  EBP = (ESP);
  /* 1031b5b3 push edi */
  push32((uint32_t)(EDI));
  /* 1031b5b4 push esi */
  push32((uint32_t)(ESI));
  /* 1031b5b5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1031b5b8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1031b5bb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1031b5be mov eax, ecx */
  EAX = (ECX);
  /* 1031b5c0 mov edx, ecx */
  EDX = (ECX);
  /* 1031b5c2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031b5c4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031b5c6 jbe 0x1031b5d0 */
  if ((C.cf||C.zf)) goto L_1031b5d0;
  /* 1031b5c8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031b5ca jb 0x1031b748 */
  if (C.cf) goto L_1031b748;
L_1031b5d0:;
  /* 1031b5d0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1031b5d6 jne 0x1031b5ec */
  if (!C.zf) goto L_1031b5ec;
  /* 1031b5d8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1031b5db and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1031b5de cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031b5e1 jb 0x1031b60c */
  if (C.cf) goto L_1031b60c;
  /* 1031b5e3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1031b5e5 jmp dword ptr [edx*4 + 0x1031b6f8] */
  switch (EDX) {
    case 0: goto L_1031b708;
    case 1: goto L_1031b710;
    case 2: goto L_1031b71c;
    case 3: goto L_1031b730;
    default: x86_unimpl("switch@0x1031b5e5 out of table"); return;
  }
L_1031b5ec:;
  /* 1031b5ec mov eax, edi */
  EAX = (EDI);
  /* 1031b5ee mov edx, 3 */
  EDX = (0x3u);
  /* 1031b5f3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031b5f6 jb 0x1031b604 */
  if (C.cf) goto L_1031b604;
  /* 1031b5f8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1031b5fb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031b5fd jmp dword ptr [eax*4 + 0x1031b610] */
  switch (EAX) {
    case 1: goto L_1031b620;
    case 2: goto L_1031b64c;
    case 3: goto L_1031b670;
    default: x86_unimpl("switch@0x1031b5fd out of table"); return;
  }
L_1031b604:;
  /* 1031b604 jmp dword ptr [ecx*4 + 0x1031b708] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1031b708)))); return;
  /* 1031b60b nop  */
  /* nop */
L_1031b60c:;
  /* 1031b60c jmp dword ptr [ecx*4 + 0x1031b68c] */
  switch (ECX) {
    case 0: goto L_1031b6ef;
    case 1: goto L_1031b6dc;
    case 2: goto L_1031b6d4;
    case 3: goto L_1031b6cc;
    case 4: goto L_1031b6c4;
    case 5: goto L_1031b6bc;
    case 6: goto L_1031b6b4;
    case 7: goto L_1031b6ac;
    default: x86_unimpl("switch@0x1031b60c out of table"); return;
  }
  /* 1031b613 nop  */
  /* nop */
L_1031b620:;
  /* 1031b620 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1031b622 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1031b624 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1031b626 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1031b629 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1031b62c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1031b62f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1031b632 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1031b635 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1031b638 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1031b63b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031b63e jb 0x1031b60c */
  if (C.cf) goto L_1031b60c;
  /* 1031b640 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1031b642 jmp dword ptr [edx*4 + 0x1031b6f8] */
  switch (EDX) {
    case 0: goto L_1031b708;
    case 1: goto L_1031b710;
    case 2: goto L_1031b71c;
    case 3: goto L_1031b730;
    default: x86_unimpl("switch@0x1031b642 out of table"); return;
  }
  /* 1031b649 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1031b64c:;
  /* 1031b64c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1031b64e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1031b650 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1031b652 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1031b655 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1031b658 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1031b65b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1031b65e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1031b661 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031b664 jb 0x1031b60c */
  if (C.cf) goto L_1031b60c;
  /* 1031b666 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1031b668 jmp dword ptr [edx*4 + 0x1031b6f8] */
  switch (EDX) {
    case 0: goto L_1031b708;
    case 1: goto L_1031b710;
    case 2: goto L_1031b71c;
    case 3: goto L_1031b730;
    default: x86_unimpl("switch@0x1031b668 out of table"); return;
  }
  /* 1031b66f nop  */
  /* nop */
L_1031b670:;
  /* 1031b670 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1031b672 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1031b674 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1031b676 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1031b677 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1031b67a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1031b67b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031b67e jb 0x1031b60c */
  if (C.cf) goto L_1031b60c;
  /* 1031b680 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1031b682 jmp dword ptr [edx*4 + 0x1031b6f8] */
  switch (EDX) {
    case 0: goto L_1031b708;
    case 1: goto L_1031b710;
    case 2: goto L_1031b71c;
    case 3: goto L_1031b730;
    default: x86_unimpl("switch@0x1031b682 out of table"); return;
  }
  /* 1031b689 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1031b6ac:;
  /* 1031b6ac mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1031b6b0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1031b6b4:;
  /* 1031b6b4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1031b6b8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1031b6bc:;
  /* 1031b6bc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1031b6c0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1031b6c4:;
  /* 1031b6c4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1031b6c8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1031b6cc:;
  /* 1031b6cc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1031b6d0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1031b6d4:;
  /* 1031b6d4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1031b6d8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1031b6dc:;
  /* 1031b6dc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1031b6e0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1031b6e4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1031b6eb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1031b6ed add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1031b6ef:;
  /* 1031b6ef jmp dword ptr [edx*4 + 0x1031b6f8] */
  switch (EDX) {
    case 0: goto L_1031b708;
    case 1: goto L_1031b710;
    case 2: goto L_1031b71c;
    case 3: goto L_1031b730;
    default: x86_unimpl("switch@0x1031b6ef out of table"); return;
  }
  /* 1031b6f6 mov edi, edi */
  EDI = (EDI);
L_1031b708:;
  /* 1031b708 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031b70b pop esi */
  ESI = (pop32());
  /* 1031b70c pop edi */
  EDI = (pop32());
  /* 1031b70d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1031b70e ret  */
  ESPCHK(0x1031b5b0u, _esp0);
  ESP += 4; return;
  /* 1031b70f nop  */
  /* nop */
L_1031b710:;
  /* 1031b710 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1031b712 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1031b714 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031b717 pop esi */
  ESI = (pop32());
  /* 1031b718 pop edi */
  EDI = (pop32());
  /* 1031b719 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1031b71a ret  */
  ESPCHK(0x1031b5b0u, _esp0);
  ESP += 4; return;
  /* 1031b71b nop  */
  /* nop */
L_1031b71c:;
  /* 1031b71c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1031b71e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1031b720 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1031b723 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1031b726 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031b729 pop esi */
  ESI = (pop32());
  /* 1031b72a pop edi */
  EDI = (pop32());
  /* 1031b72b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1031b72c ret  */
  ESPCHK(0x1031b5b0u, _esp0);
  ESP += 4; return;
  /* 1031b72d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1031b730:;
  /* 1031b730 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1031b732 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1031b734 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1031b737 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1031b73a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1031b73d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1031b740 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031b743 pop esi */
  ESI = (pop32());
  /* 1031b744 pop edi */
  EDI = (pop32());
  /* 1031b745 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1031b746 ret  */
  ESPCHK(0x1031b5b0u, _esp0);
  ESP += 4; return;
  /* 1031b747 nop  */
  /* nop */
L_1031b748:;
  /* 1031b748 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1031b74c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1031b750 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1031b756 jne 0x1031b77c */
  if (!C.zf) goto L_1031b77c;
  /* 1031b758 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1031b75b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1031b75e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031b761 jb 0x1031b770 */
  if (C.cf) goto L_1031b770;
  /* 1031b763 std  */
  C.df=1;
  /* 1031b764 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1031b766 cld  */
  C.df=0;
  /* 1031b767 jmp dword ptr [edx*4 + 0x1031b890] */
  switch (EDX) {
    case 0: goto L_1031b8a0;
    case 1: goto L_1031b8a8;
    case 2: goto L_1031b8b8;
    case 3: goto L_1031b8cc;
    default: x86_unimpl("switch@0x1031b767 out of table"); return;
  }
  /* 1031b76e mov edi, edi */
  EDI = (EDI);
L_1031b770:;
  /* 1031b770 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1031b772 jmp dword ptr [ecx*4 + 0x1031b840] */
  switch (ECX) {
    case 0: goto L_1031b887;
    default: x86_unimpl("switch@0x1031b772 out of table"); return;
  }
  /* 1031b779 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1031b77c:;
  /* 1031b77c mov eax, edi */
  EAX = (EDI);
  /* 1031b77e mov edx, 3 */
  EDX = (0x3u);
  /* 1031b783 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031b786 jb 0x1031b794 */
  if (C.cf) goto L_1031b794;
  /* 1031b788 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1031b78b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031b78d jmp dword ptr [eax*4 + 0x1031b798] */
  switch (EAX) {
    case 1: goto L_1031b7a8;
    case 2: goto L_1031b7c8;
    case 3: goto L_1031b7f0;
    default: x86_unimpl("switch@0x1031b78d out of table"); return;
  }
L_1031b794:;
  /* 1031b794 jmp dword ptr [ecx*4 + 0x1031b890] */
  switch (ECX) {
    case 0: goto L_1031b8a0;
    case 1: goto L_1031b8a8;
    case 2: goto L_1031b8b8;
    case 3: goto L_1031b8cc;
    default: x86_unimpl("switch@0x1031b794 out of table"); return;
  }
  /* 1031b79b nop  */
  /* nop */
L_1031b7a8:;
  /* 1031b7a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1031b7ab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1031b7ad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1031b7b0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1031b7b1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1031b7b4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1031b7b5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031b7b8 jb 0x1031b770 */
  if (C.cf) goto L_1031b770;
  /* 1031b7ba std  */
  C.df=1;
  /* 1031b7bb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1031b7bd cld  */
  C.df=0;
  /* 1031b7be jmp dword ptr [edx*4 + 0x1031b890] */
  switch (EDX) {
    case 0: goto L_1031b8a0;
    case 1: goto L_1031b8a8;
    case 2: goto L_1031b8b8;
    case 3: goto L_1031b8cc;
    default: x86_unimpl("switch@0x1031b7be out of table"); return;
  }
  /* 1031b7c5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1031b7c8:;
  /* 1031b7c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1031b7cb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1031b7cd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1031b7d0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1031b7d3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1031b7d6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1031b7d9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031b7dc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031b7df cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031b7e2 jb 0x1031b770 */
  if (C.cf) goto L_1031b770;
  /* 1031b7e4 std  */
  C.df=1;
  /* 1031b7e5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1031b7e7 cld  */
  C.df=0;
  /* 1031b7e8 jmp dword ptr [edx*4 + 0x1031b890] */
  switch (EDX) {
    case 0: goto L_1031b8a0;
    case 1: goto L_1031b8a8;
    case 2: goto L_1031b8b8;
    case 3: goto L_1031b8cc;
    default: x86_unimpl("switch@0x1031b7e8 out of table"); return;
  }
  /* 1031b7ef nop  */
  /* nop */
L_1031b7f0:;
  /* 1031b7f0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1031b7f3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1031b7f5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1031b7f8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1031b7fb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1031b7fe mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1031b801 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1031b804 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1031b807 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031b80a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031b80d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031b810 jb 0x1031b770 */
  if (C.cf) goto L_1031b770;
  /* 1031b816 std  */
  C.df=1;
  /* 1031b817 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1031b819 cld  */
  C.df=0;
  /* 1031b81a jmp dword ptr [edx*4 + 0x1031b890] */
  switch (EDX) {
    case 0: goto L_1031b8a0;
    case 1: goto L_1031b8a8;
    case 2: goto L_1031b8b8;
    case 3: goto L_1031b8cc;
    default: x86_unimpl("switch@0x1031b81a out of table"); return;
  }
  /* 1031b821 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1031b824 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 1031b825 mov eax, 0xb84c1031 */
  EAX = (0xb84c1031u);
  /* 1031b82a xor dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))^(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1031b82c push esp */
  push32((uint32_t)(ESP));
  /* 1031b82d mov eax, 0xb85c1031 */
  EAX = (0xb85c1031u);
  /* 1031b832 xor dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))^(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1031b834 mov eax, 0xb86c1031 */
  EAX = (0xb86c1031u);
  /* 1031b83a xor dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))^(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1031b83c je 0x1031b7f6 */
  if (C.zf) goto L_1031b7f6;
  /* 1031b83e xor dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))^(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1031b844 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1031b848 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1031b84c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1031b850 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1031b854 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1031b858 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1031b85c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1031b860 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1031b864 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1031b868 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1031b86c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1031b870 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1031b874 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1031b878 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1031b87c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1031b883 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1031b885 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1031b887:;
  /* 1031b887 jmp dword ptr [edx*4 + 0x1031b890] */
  switch (EDX) {
    case 0: goto L_1031b8a0;
    case 1: goto L_1031b8a8;
    case 2: goto L_1031b8b8;
    case 3: goto L_1031b8cc;
    default: x86_unimpl("switch@0x1031b887 out of table"); return;
  }
  /* 1031b88e mov edi, edi */
  EDI = (EDI);
L_1031b8a0:;
  /* 1031b8a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031b8a3 pop esi */
  ESI = (pop32());
  /* 1031b8a4 pop edi */
  EDI = (pop32());
  /* 1031b8a5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1031b8a6 ret  */
  ESPCHK(0x1031b5b0u, _esp0);
  ESP += 4; return;
  /* 1031b8a7 nop  */
  /* nop */
L_1031b8a8:;
  /* 1031b8a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1031b8ab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1031b8ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031b8b1 pop esi */
  ESI = (pop32());
  /* 1031b8b2 pop edi */
  EDI = (pop32());
  /* 1031b8b3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1031b8b4 ret  */
  ESPCHK(0x1031b5b0u, _esp0);
  ESP += 4; return;
  /* 1031b8b5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1031b8b8:;
  /* 1031b8b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1031b8bb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1031b8be mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1031b8c1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1031b8c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031b8c7 pop esi */
  ESI = (pop32());
  /* 1031b8c8 pop edi */
  EDI = (pop32());
  /* 1031b8c9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1031b8ca ret  */
  ESPCHK(0x1031b5b0u, _esp0);
  ESP += 4; return;
  /* 1031b8cb nop  */
  /* nop */
L_1031b8cc:;
  /* 1031b8cc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1031b8cf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1031b8d2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1031b8d5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1031b8d8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1031b8db mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1031b8de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031b8e1 pop esi */
  ESI = (pop32());
  /* 1031b8e2 pop edi */
  EDI = (pop32());
  /* 1031b8e3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1031b8e4 ret  */
  ESPCHK(0x1031b5b0u, _esp0);
  ESP += 4; return;
L_1031b7f6: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x1031b7f6 (unresolved jump table)"); return;
}

/* FUN_1000b8f0 @ 0x1031b8f0 (421 bytes, 148 insns) */
void f_1031b8f0(void) {
  FTRACE(0x1031b8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031b8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1031b8f1 mov ebp, esp */
  EBP = (ESP);
  /* 1031b8f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1031b8f5 push 0x1033af98 */
  push32((uint32_t)(0x1033af98u));
  /* 1031b8fa push 0x1031c7c8 */
  push32((uint32_t)(0x1031c7c8u));
  /* 1031b8ff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1031b905 push eax */
  push32((uint32_t)(EAX));
  /* 1031b906 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1031b90d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031b910 push ebx */
  push32((uint32_t)(EBX));
  /* 1031b911 push esi */
  push32((uint32_t)(ESI));
  /* 1031b912 push edi */
  push32((uint32_t)(EDI));
  /* 1031b913 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1031b916 cmp dword ptr [0x1033f6ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f6ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031b91d jne 0x1031b96e */
  if (!C.zf) goto L_1031b96e;
  /* 1031b91f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1031b922 push eax */
  push32((uint32_t)(EAX));
  /* 1031b923 push 1 */
  push32((uint32_t)(0x1u));
  /* 1031b925 push 0x1033af90 */
  push32((uint32_t)(0x1033af90u));
  /* 1031b92a push 1 */
  push32((uint32_t)(0x1u));
  /* 1031b92c call dword ptr [0x103422a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422a8))), 0x1031b932u);
  /* 1031b932 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031b934 je 0x1031b942 */
  if (C.zf) goto L_1031b942;
  /* 1031b936 mov dword ptr [0x1033f6ac], 1 */
  w32((uint32_t)(0x1033f6ac), (0x1u));
  /* 1031b940 jmp 0x1031b96e */
  goto L_1031b96e;
L_1031b942:;
  /* 1031b942 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1031b945 push ecx */
  push32((uint32_t)(ECX));
  /* 1031b946 push 1 */
  push32((uint32_t)(0x1u));
  /* 1031b948 push 0x1033af8c */
  push32((uint32_t)(0x1033af8cu));
  /* 1031b94d push 1 */
  push32((uint32_t)(0x1u));
  /* 1031b94f push 0 */
  push32((uint32_t)(0x0u));
  /* 1031b951 call dword ptr [0x1034230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034230c))), 0x1031b957u);
  /* 1031b957 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031b959 je 0x1031b967 */
  if (C.zf) goto L_1031b967;
  /* 1031b95b mov dword ptr [0x1033f6ac], 2 */
  w32((uint32_t)(0x1033f6ac), (0x2u));
  /* 1031b965 jmp 0x1031b96e */
  goto L_1031b96e;
L_1031b967:;
  /* 1031b967 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031b969 jmp 0x1031ba98 */
  goto L_1031ba98;
L_1031b96e:;
  /* 1031b96e cmp dword ptr [0x1033f6ac], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1033f6ac))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031b975 jne 0x1031b9a5 */
  if (!C.zf) goto L_1031b9a5;
  /* 1031b977 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031b97b jne 0x1031b986 */
  if (!C.zf) goto L_1031b986;
  /* 1031b97d mov edx, dword ptr [0x1033f6b8] */
  EDX = (r32((uint32_t)(0x1033f6b8)));
  /* 1031b983 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1031b986:;
  /* 1031b986 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1031b989 push eax */
  push32((uint32_t)(EAX));
  /* 1031b98a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1031b98d push ecx */
  push32((uint32_t)(ECX));
  /* 1031b98e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031b991 push edx */
  push32((uint32_t)(EDX));
  /* 1031b992 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031b995 push eax */
  push32((uint32_t)(EAX));
  /* 1031b996 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1031b999 push ecx */
  push32((uint32_t)(ECX));
  /* 1031b99a call dword ptr [0x1034230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034230c))), 0x1031b9a0u);
  /* 1031b9a0 jmp 0x1031ba98 */
  goto L_1031ba98;
L_1031b9a5:;
  /* 1031b9a5 cmp dword ptr [0x1033f6ac], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1033f6ac))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031b9ac jne 0x1031ba96 */
  if (!C.zf) goto L_1031ba96;
  /* 1031b9b2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031b9b6 jne 0x1031b9c1 */
  if (!C.zf) goto L_1031b9c1;
  /* 1031b9b8 mov edx, dword ptr [0x1033f6c8] */
  EDX = (r32((uint32_t)(0x1033f6c8)));
  /* 1031b9be mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1031b9c1:;
  /* 1031b9c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031b9c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031b9c5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1031b9c8 push eax */
  push32((uint32_t)(EAX));
  /* 1031b9c9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031b9cc push ecx */
  push32((uint32_t)(ECX));
  /* 1031b9cd mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1031b9d0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1031b9d2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031b9d4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1031b9d7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031b9da push edx */
  push32((uint32_t)(EDX));
  /* 1031b9db mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1031b9de push eax */
  push32((uint32_t)(EAX));
  /* 1031b9df call dword ptr [0x10342370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342370))), 0x1031b9e5u);
  /* 1031b9e5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1031b9e8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031b9ec jne 0x1031b9f5 */
  if (!C.zf) goto L_1031b9f5;
  /* 1031b9ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031b9f0 jmp 0x1031ba98 */
  goto L_1031ba98;
L_1031b9f5:;
  /* 1031b9f5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1031b9fc mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1031b9ff shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1031ba01 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ba04 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1031ba06 call 0x10316860 */
  push32(0x1031ba0bu); f_10316860();
  /* 1031ba0b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1031ba0e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1031ba11 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1031ba14 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1031ba17 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1031ba1a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1031ba1c push edx */
  push32((uint32_t)(EDX));
  /* 1031ba1d push 0 */
  push32((uint32_t)(0x0u));
  /* 1031ba1f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1031ba22 push eax */
  push32((uint32_t)(EAX));
  /* 1031ba23 call 0x10317430 */
  push32(0x1031ba28u); f_10317430();
  /* 1031ba28 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ba2b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1031ba32 jmp 0x1031ba4b */
  goto L_1031ba4b;
  /* 1031ba34 mov eax, 1 */
  EAX = (0x1u);
  /* 1031ba39 ret  */
  ESPCHK(0x1031b8f0u, _esp0);
  ESP += 4; return;
  /* 1031ba3a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1031ba3d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1031ba44 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1031ba4b:;
  /* 1031ba4b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031ba4f jne 0x1031ba55 */
  if (!C.zf) goto L_1031ba55;
  /* 1031ba51 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031ba53 jmp 0x1031ba98 */
  goto L_1031ba98;
L_1031ba55:;
  /* 1031ba55 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1031ba58 push ecx */
  push32((uint32_t)(ECX));
  /* 1031ba59 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1031ba5c push edx */
  push32((uint32_t)(EDX));
  /* 1031ba5d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1031ba60 push eax */
  push32((uint32_t)(EAX));
  /* 1031ba61 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031ba64 push ecx */
  push32((uint32_t)(ECX));
  /* 1031ba65 push 1 */
  push32((uint32_t)(0x1u));
  /* 1031ba67 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1031ba6a push edx */
  push32((uint32_t)(EDX));
  /* 1031ba6b call dword ptr [0x10342370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342370))), 0x1031ba71u);
  /* 1031ba71 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1031ba74 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031ba78 jne 0x1031ba7e */
  if (!C.zf) goto L_1031ba7e;
  /* 1031ba7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031ba7c jmp 0x1031ba98 */
  goto L_1031ba98;
L_1031ba7e:;
  /* 1031ba7e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1031ba81 push eax */
  push32((uint32_t)(EAX));
  /* 1031ba82 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1031ba85 push ecx */
  push32((uint32_t)(ECX));
  /* 1031ba86 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1031ba89 push edx */
  push32((uint32_t)(EDX));
  /* 1031ba8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031ba8d push eax */
  push32((uint32_t)(EAX));
  /* 1031ba8e call dword ptr [0x103422a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422a8))), 0x1031ba94u);
  /* 1031ba94 jmp 0x1031ba98 */
  goto L_1031ba98;
L_1031ba96:;
  /* 1031ba96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1031ba98:;
  /* 1031ba98 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1031ba9b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1031ba9e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1031baa5 pop edi */
  EDI = (pop32());
  /* 1031baa6 pop esi */
  ESI = (pop32());
  /* 1031baa7 pop ebx */
  EBX = (pop32());
  /* 1031baa8 mov esp, ebp */
  ESP = (EBP);
  /* 1031baaa pop ebp */
  EBP = (pop32());
  /* 1031baab ret  */
  ESPCHK(0x1031b8f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bab0 @ 0x1031bab0 (727 bytes, 263 insns) */
void f_1031bab0(void) {
  FTRACE(0x1031bab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031bab0 push ebp */
  push32((uint32_t)(EBP));
  /* 1031bab1 mov ebp, esp */
  EBP = (ESP);
  /* 1031bab3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1031bab5 push 0x1033afa8 */
  push32((uint32_t)(0x1033afa8u));
  /* 1031baba push 0x1031c7c8 */
  push32((uint32_t)(0x1031c7c8u));
  /* 1031babf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1031bac5 push eax */
  push32((uint32_t)(EAX));
  /* 1031bac6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1031bacd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031bad0 push ebx */
  push32((uint32_t)(EBX));
  /* 1031bad1 push esi */
  push32((uint32_t)(ESI));
  /* 1031bad2 push edi */
  push32((uint32_t)(EDI));
  /* 1031bad3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1031bad6 cmp dword ptr [0x1033f6d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f6d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031badd jne 0x1031bb36 */
  if (!C.zf) goto L_1031bb36;
  /* 1031badf push 0 */
  push32((uint32_t)(0x0u));
  /* 1031bae1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031bae3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1031bae5 push 0x1033af90 */
  push32((uint32_t)(0x1033af90u));
  /* 1031baea push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1031baef push 0 */
  push32((uint32_t)(0x0u));
  /* 1031baf1 call dword ptr [0x103422a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422a0))), 0x1031baf7u);
  /* 1031baf7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031baf9 je 0x1031bb07 */
  if (C.zf) goto L_1031bb07;
  /* 1031bafb mov dword ptr [0x1033f6d0], 1 */
  w32((uint32_t)(0x1033f6d0), (0x1u));
  /* 1031bb05 jmp 0x1031bb36 */
  goto L_1031bb36;
L_1031bb07:;
  /* 1031bb07 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031bb09 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031bb0b push 1 */
  push32((uint32_t)(0x1u));
  /* 1031bb0d push 0x1033af8c */
  push32((uint32_t)(0x1033af8cu));
  /* 1031bb12 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1031bb17 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031bb19 call dword ptr [0x103422a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422a4))), 0x1031bb1fu);
  /* 1031bb1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031bb21 je 0x1031bb2f */
  if (C.zf) goto L_1031bb2f;
  /* 1031bb23 mov dword ptr [0x1033f6d0], 2 */
  w32((uint32_t)(0x1033f6d0), (0x2u));
  /* 1031bb2d jmp 0x1031bb36 */
  goto L_1031bb36;
L_1031bb2f:;
  /* 1031bb2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031bb31 jmp 0x1031bda1 */
  goto L_1031bda1;
L_1031bb36:;
  /* 1031bb36 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031bb3a jle 0x1031bb4f */
  if ((C.zf||C.sf!=C.of)) goto L_1031bb4f;
  /* 1031bb3c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1031bb3f push eax */
  push32((uint32_t)(EAX));
  /* 1031bb40 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1031bb43 push ecx */
  push32((uint32_t)(ECX));
  /* 1031bb44 call 0x1031bdc0 */
  push32(0x1031bb49u); f_1031bdc0();
  /* 1031bb49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031bb4c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1031bb4f:;
  /* 1031bb4f cmp dword ptr [0x1033f6d0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1033f6d0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031bb56 jne 0x1031bb7b */
  if (!C.zf) goto L_1031bb7b;
  /* 1031bb58 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1031bb5b push edx */
  push32((uint32_t)(EDX));
  /* 1031bb5c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1031bb5f push eax */
  push32((uint32_t)(EAX));
  /* 1031bb60 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1031bb63 push ecx */
  push32((uint32_t)(ECX));
  /* 1031bb64 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1031bb67 push edx */
  push32((uint32_t)(EDX));
  /* 1031bb68 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031bb6b push eax */
  push32((uint32_t)(EAX));
  /* 1031bb6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031bb6f push ecx */
  push32((uint32_t)(ECX));
  /* 1031bb70 call dword ptr [0x103422a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422a4))), 0x1031bb76u);
  /* 1031bb76 jmp 0x1031bda1 */
  goto L_1031bda1;
L_1031bb7b:;
  /* 1031bb7b cmp dword ptr [0x1033f6d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1033f6d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031bb82 jne 0x1031bd9f */
  if (!C.zf) goto L_1031bd9f;
  /* 1031bb88 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031bb8c jne 0x1031bb97 */
  if (!C.zf) goto L_1031bb97;
  /* 1031bb8e mov edx, dword ptr [0x1033f6c8] */
  EDX = (r32((uint32_t)(0x1033f6c8)));
  /* 1031bb94 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1031bb97:;
  /* 1031bb97 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031bb99 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031bb9b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1031bb9e push eax */
  push32((uint32_t)(EAX));
  /* 1031bb9f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1031bba2 push ecx */
  push32((uint32_t)(ECX));
  /* 1031bba3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1031bba6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1031bba8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031bbaa and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1031bbad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031bbb0 push edx */
  push32((uint32_t)(EDX));
  /* 1031bbb1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1031bbb4 push eax */
  push32((uint32_t)(EAX));
  /* 1031bbb5 call dword ptr [0x10342370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342370))), 0x1031bbbbu);
  /* 1031bbbb mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1031bbbe cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031bbc2 jne 0x1031bbcb */
  if (!C.zf) goto L_1031bbcb;
  /* 1031bbc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031bbc6 jmp 0x1031bda1 */
  goto L_1031bda1;
L_1031bbcb:;
  /* 1031bbcb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1031bbd2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1031bbd5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1031bbd7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031bbda and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1031bbdc call 0x10316860 */
  push32(0x1031bbe1u); f_10316860();
  /* 1031bbe1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 1031bbe4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1031bbe7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1031bbea mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1031bbed mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1031bbf4 jmp 0x1031bc0d */
  goto L_1031bc0d;
  /* 1031bbf6 mov eax, 1 */
  EAX = (0x1u);
  /* 1031bbfb ret  */
  ESPCHK(0x1031bab0u, _esp0);
  ESP += 4; return;
  /* 1031bbfc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1031bbff mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1031bc06 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1031bc0d:;
  /* 1031bc0d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031bc11 jne 0x1031bc1a */
  if (!C.zf) goto L_1031bc1a;
  /* 1031bc13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031bc15 jmp 0x1031bda1 */
  goto L_1031bda1;
L_1031bc1a:;
  /* 1031bc1a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1031bc1d push edx */
  push32((uint32_t)(EDX));
  /* 1031bc1e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1031bc21 push eax */
  push32((uint32_t)(EAX));
  /* 1031bc22 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1031bc25 push ecx */
  push32((uint32_t)(ECX));
  /* 1031bc26 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1031bc29 push edx */
  push32((uint32_t)(EDX));
  /* 1031bc2a push 1 */
  push32((uint32_t)(0x1u));
  /* 1031bc2c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1031bc2f push eax */
  push32((uint32_t)(EAX));
  /* 1031bc30 call dword ptr [0x10342370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342370))), 0x1031bc36u);
  /* 1031bc36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031bc38 jne 0x1031bc41 */
  if (!C.zf) goto L_1031bc41;
  /* 1031bc3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031bc3c jmp 0x1031bda1 */
  goto L_1031bda1;
L_1031bc41:;
  /* 1031bc41 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031bc43 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031bc45 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1031bc48 push ecx */
  push32((uint32_t)(ECX));
  /* 1031bc49 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1031bc4c push edx */
  push32((uint32_t)(EDX));
  /* 1031bc4d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031bc50 push eax */
  push32((uint32_t)(EAX));
  /* 1031bc51 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031bc54 push ecx */
  push32((uint32_t)(ECX));
  /* 1031bc55 call dword ptr [0x103422a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422a0))), 0x1031bc5bu);
  /* 1031bc5b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1031bc5e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031bc62 jne 0x1031bc6b */
  if (!C.zf) goto L_1031bc6b;
  /* 1031bc64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031bc66 jmp 0x1031bda1 */
  goto L_1031bda1;
L_1031bc6b:;
  /* 1031bc6b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031bc6e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 1031bc74 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1031bc76 je 0x1031bcbb */
  if (C.zf) goto L_1031bcbb;
  /* 1031bc78 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031bc7c je 0x1031bcb6 */
  if (C.zf) goto L_1031bcb6;
  /* 1031bc7e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1031bc81 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031bc84 jle 0x1031bc8d */
  if ((C.zf||C.sf!=C.of)) goto L_1031bc8d;
  /* 1031bc86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031bc88 jmp 0x1031bda1 */
  goto L_1031bda1;
L_1031bc8d:;
  /* 1031bc8d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1031bc90 push ecx */
  push32((uint32_t)(ECX));
  /* 1031bc91 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1031bc94 push edx */
  push32((uint32_t)(EDX));
  /* 1031bc95 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1031bc98 push eax */
  push32((uint32_t)(EAX));
  /* 1031bc99 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1031bc9c push ecx */
  push32((uint32_t)(ECX));
  /* 1031bc9d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031bca0 push edx */
  push32((uint32_t)(EDX));
  /* 1031bca1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031bca4 push eax */
  push32((uint32_t)(EAX));
  /* 1031bca5 call dword ptr [0x103422a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422a0))), 0x1031bcabu);
  /* 1031bcab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031bcad jne 0x1031bcb6 */
  if (!C.zf) goto L_1031bcb6;
  /* 1031bcaf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031bcb1 jmp 0x1031bda1 */
  goto L_1031bda1;
L_1031bcb6:;
  /* 1031bcb6 jmp 0x1031bd9a */
  goto L_1031bd9a;
L_1031bcbb:;
  /* 1031bcbb mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1031bcbe mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1031bcc1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1031bcc8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1031bccb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1031bccd add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031bcd0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1031bcd2 call 0x10316860 */
  push32(0x1031bcd7u); f_10316860();
  /* 1031bcd7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1031bcda mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1031bcdd mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1031bce0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1031bce3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1031bcea jmp 0x1031bd03 */
  goto L_1031bd03;
  /* 1031bcec mov eax, 1 */
  EAX = (0x1u);
  /* 1031bcf1 ret  */
  ESPCHK(0x1031bab0u, _esp0);
  ESP += 4; return;
  /* 1031bcf2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1031bcf5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1031bcfc mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1031bd03:;
  /* 1031bd03 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031bd07 jne 0x1031bd10 */
  if (!C.zf) goto L_1031bd10;
  /* 1031bd09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031bd0b jmp 0x1031bda1 */
  goto L_1031bda1;
L_1031bd10:;
  /* 1031bd10 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1031bd13 push eax */
  push32((uint32_t)(EAX));
  /* 1031bd14 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1031bd17 push ecx */
  push32((uint32_t)(ECX));
  /* 1031bd18 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1031bd1b push edx */
  push32((uint32_t)(EDX));
  /* 1031bd1c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1031bd1f push eax */
  push32((uint32_t)(EAX));
  /* 1031bd20 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031bd23 push ecx */
  push32((uint32_t)(ECX));
  /* 1031bd24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031bd27 push edx */
  push32((uint32_t)(EDX));
  /* 1031bd28 call dword ptr [0x103422a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422a0))), 0x1031bd2eu);
  /* 1031bd2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031bd30 jne 0x1031bd36 */
  if (!C.zf) goto L_1031bd36;
  /* 1031bd32 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031bd34 jmp 0x1031bda1 */
  goto L_1031bda1;
L_1031bd36:;
  /* 1031bd36 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031bd3a jne 0x1031bd6a */
  if (!C.zf) goto L_1031bd6a;
  /* 1031bd3c push 0 */
  push32((uint32_t)(0x0u));
  /* 1031bd3e push 0 */
  push32((uint32_t)(0x0u));
  /* 1031bd40 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031bd42 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031bd44 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1031bd47 push eax */
  push32((uint32_t)(EAX));
  /* 1031bd48 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1031bd4b push ecx */
  push32((uint32_t)(ECX));
  /* 1031bd4c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1031bd51 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1031bd54 push edx */
  push32((uint32_t)(EDX));
  /* 1031bd55 call dword ptr [0x10342328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342328))), 0x1031bd5bu);
  /* 1031bd5b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1031bd5e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031bd62 jne 0x1031bd68 */
  if (!C.zf) goto L_1031bd68;
  /* 1031bd64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031bd66 jmp 0x1031bda1 */
  goto L_1031bda1;
L_1031bd68:;
  /* 1031bd68 jmp 0x1031bd9a */
  goto L_1031bd9a;
L_1031bd6a:;
  /* 1031bd6a push 0 */
  push32((uint32_t)(0x0u));
  /* 1031bd6c push 0 */
  push32((uint32_t)(0x0u));
  /* 1031bd6e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1031bd71 push eax */
  push32((uint32_t)(EAX));
  /* 1031bd72 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1031bd75 push ecx */
  push32((uint32_t)(ECX));
  /* 1031bd76 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1031bd79 push edx */
  push32((uint32_t)(EDX));
  /* 1031bd7a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1031bd7d push eax */
  push32((uint32_t)(EAX));
  /* 1031bd7e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1031bd83 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1031bd86 push ecx */
  push32((uint32_t)(ECX));
  /* 1031bd87 call dword ptr [0x10342328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342328))), 0x1031bd8du);
  /* 1031bd8d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1031bd90 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031bd94 jne 0x1031bd9a */
  if (!C.zf) goto L_1031bd9a;
  /* 1031bd96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031bd98 jmp 0x1031bda1 */
  goto L_1031bda1;
L_1031bd9a:;
  /* 1031bd9a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1031bd9d jmp 0x1031bda1 */
  goto L_1031bda1;
L_1031bd9f:;
  /* 1031bd9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1031bda1:;
  /* 1031bda1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1031bda4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1031bda7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1031bdae pop edi */
  EDI = (pop32());
  /* 1031bdaf pop esi */
  ESI = (pop32());
  /* 1031bdb0 pop ebx */
  EBX = (pop32());
  /* 1031bdb1 mov esp, ebp */
  ESP = (EBP);
  /* 1031bdb3 pop ebp */
  EBP = (pop32());
  /* 1031bdb4 ret  */
  ESPCHK(0x1031bab0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bdc0 @ 0x1031bdc0 (80 bytes, 32 insns) */
void f_1031bdc0(void) {
  FTRACE(0x1031bdc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031bdc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1031bdc1 mov ebp, esp */
  EBP = (ESP);
  /* 1031bdc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031bdc6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031bdc9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1031bdcc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031bdcf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1031bdd2:;
  /* 1031bdd2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031bdd5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031bdd8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031bddb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1031bdde test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1031bde0 je 0x1031bdf7 */
  if (C.zf) goto L_1031bdf7;
  /* 1031bde2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031bde5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1031bde8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1031bdea je 0x1031bdf7 */
  if (C.zf) goto L_1031bdf7;
  /* 1031bdec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031bdef add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031bdf2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1031bdf5 jmp 0x1031bdd2 */
  goto L_1031bdd2;
L_1031bdf7:;
  /* 1031bdf7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031bdfa movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1031bdfd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1031bdff jne 0x1031be09 */
  if (!C.zf) goto L_1031be09;
  /* 1031be01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031be04 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031be07 jmp 0x1031be0c */
  goto L_1031be0c;
L_1031be09:;
  /* 1031be09 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1031be0c:;
  /* 1031be0c mov esp, ebp */
  ESP = (EBP);
  /* 1031be0e pop ebp */
  EBP = (pop32());
  /* 1031be0f ret  */
  ESPCHK(0x1031bdc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be10 @ 0x1031be10 (130 bytes, 43 insns) */
void f_1031be10(void) {
  FTRACE(0x1031be10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031be10 push ebp */
  push32((uint32_t)(EBP));
  /* 1031be11 mov ebp, esp */
  EBP = (ESP);
  /* 1031be13 push ecx */
  push32((uint32_t)(ECX));
  /* 1031be14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031be17 cmp eax, dword ptr [0x10340fdc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10340fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031be1d jae 0x1031be41 */
  if (!C.cf) goto L_1031be41;
  /* 1031be1f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031be22 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1031be25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031be28 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1031be2b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031be2e mov eax, dword ptr [ecx*4 + 0x10340ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10340ea0)));
  /* 1031be35 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1031be3a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1031be3d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1031be3f jne 0x1031be5c */
  if (!C.zf) goto L_1031be5c;
L_1031be41:;
  /* 1031be41 call 0x1031b590 */
  push32(0x1031be46u); f_1031b590();
  /* 1031be46 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1031be4c call 0x1031b5a0 */
  push32(0x1031be51u); f_1031b5a0();
  /* 1031be51 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1031be57 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1031be5a jmp 0x1031be8e */
  goto L_1031be8e;
L_1031be5c:;
  /* 1031be5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031be5f push edx */
  push32((uint32_t)(EDX));
  /* 1031be60 call 0x1031cdb0 */
  push32(0x1031be65u); f_1031cdb0();
  /* 1031be65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031be68 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1031be6b push eax */
  push32((uint32_t)(EAX));
  /* 1031be6c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031be6f push ecx */
  push32((uint32_t)(ECX));
  /* 1031be70 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031be73 push edx */
  push32((uint32_t)(EDX));
  /* 1031be74 call 0x1031bea0 */
  push32(0x1031be79u); f_1031bea0();
  /* 1031be79 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031be7c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1031be7f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031be82 push eax */
  push32((uint32_t)(EAX));
  /* 1031be83 call 0x1031ce40 */
  push32(0x1031be88u); f_1031ce40();
  /* 1031be88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031be8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1031be8e:;
  /* 1031be8e mov esp, ebp */
  ESP = (EBP);
  /* 1031be90 pop ebp */
  EBP = (pop32());
  /* 1031be91 ret  */
  ESPCHK(0x1031be10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bea0 @ 0x1031bea0 (178 bytes, 56 insns) */
void f_1031bea0(void) {
  FTRACE(0x1031bea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031bea0 push ebp */
  push32((uint32_t)(EBP));
  /* 1031bea1 mov ebp, esp */
  EBP = (ESP);
  /* 1031bea3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031bea6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031bea9 push eax */
  push32((uint32_t)(EAX));
  /* 1031beaa call 0x1031cc30 */
  push32(0x1031beafu); f_1031cc30();
  /* 1031beaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031beb2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1031beb5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031beb9 jne 0x1031bece */
  if (!C.zf) goto L_1031bece;
  /* 1031bebb call 0x1031b590 */
  push32(0x1031bec0u); f_1031b590();
  /* 1031bec0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1031bec6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1031bec9 jmp 0x1031bf4e */
  goto L_1031bf4e;
L_1031bece:;
  /* 1031bece mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1031bed1 push ecx */
  push32((uint32_t)(ECX));
  /* 1031bed2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031bed4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031bed7 push edx */
  push32((uint32_t)(EDX));
  /* 1031bed8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031bedb push eax */
  push32((uint32_t)(EAX));
  /* 1031bedc call dword ptr [0x1034229c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034229c))), 0x1031bee2u);
  /* 1031bee2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1031bee5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031bee9 jne 0x1031bef6 */
  if (!C.zf) goto L_1031bef6;
  /* 1031beeb call dword ptr [0x103422fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422fc))), 0x1031bef1u);
  /* 1031bef1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1031bef4 jmp 0x1031befd */
  goto L_1031befd;
L_1031bef6:;
  /* 1031bef6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1031befd:;
  /* 1031befd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031bf01 je 0x1031bf14 */
  if (C.zf) goto L_1031bf14;
  /* 1031bf03 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031bf06 push ecx */
  push32((uint32_t)(ECX));
  /* 1031bf07 call 0x1031b4f0 */
  push32(0x1031bf0cu); f_1031b4f0();
  /* 1031bf0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031bf0f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1031bf12 jmp 0x1031bf4e */
  goto L_1031bf4e;
L_1031bf14:;
  /* 1031bf14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031bf17 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1031bf1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031bf1d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1031bf20 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031bf23 mov ecx, dword ptr [edx*4 + 0x10340ea0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10340ea0)));
  /* 1031bf2a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1031bf2e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 1031bf31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031bf34 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1031bf37 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031bf3a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1031bf3d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031bf40 mov eax, dword ptr [eax*4 + 0x10340ea0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10340ea0)));
  /* 1031bf47 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1031bf4b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1031bf4e:;
  /* 1031bf4e mov esp, ebp */
  ESP = (EBP);
  /* 1031bf50 pop ebp */
  EBP = (pop32());
  /* 1031bf51 ret  */
  ESPCHK(0x1031bea0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf60 @ 0x1031bf60 (130 bytes, 43 insns) */
void f_1031bf60(void) {
  FTRACE(0x1031bf60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031bf60 push ebp */
  push32((uint32_t)(EBP));
  /* 1031bf61 mov ebp, esp */
  EBP = (ESP);
  /* 1031bf63 push ecx */
  push32((uint32_t)(ECX));
  /* 1031bf64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031bf67 cmp eax, dword ptr [0x10340fdc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10340fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031bf6d jae 0x1031bf91 */
  if (!C.cf) goto L_1031bf91;
  /* 1031bf6f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031bf72 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1031bf75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031bf78 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1031bf7b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031bf7e mov eax, dword ptr [ecx*4 + 0x10340ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10340ea0)));
  /* 1031bf85 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1031bf8a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1031bf8d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1031bf8f jne 0x1031bfac */
  if (!C.zf) goto L_1031bfac;
L_1031bf91:;
  /* 1031bf91 call 0x1031b590 */
  push32(0x1031bf96u); f_1031b590();
  /* 1031bf96 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1031bf9c call 0x1031b5a0 */
  push32(0x1031bfa1u); f_1031b5a0();
  /* 1031bfa1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1031bfa7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1031bfaa jmp 0x1031bfde */
  goto L_1031bfde;
L_1031bfac:;
  /* 1031bfac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031bfaf push edx */
  push32((uint32_t)(EDX));
  /* 1031bfb0 call 0x1031cdb0 */
  push32(0x1031bfb5u); f_1031cdb0();
  /* 1031bfb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031bfb8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1031bfbb push eax */
  push32((uint32_t)(EAX));
  /* 1031bfbc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031bfbf push ecx */
  push32((uint32_t)(ECX));
  /* 1031bfc0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031bfc3 push edx */
  push32((uint32_t)(EDX));
  /* 1031bfc4 call 0x1031bff0 */
  push32(0x1031bfc9u); f_1031bff0();
  /* 1031bfc9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031bfcc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1031bfcf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031bfd2 push eax */
  push32((uint32_t)(EAX));
  /* 1031bfd3 call 0x1031ce40 */
  push32(0x1031bfd8u); f_1031ce40();
  /* 1031bfd8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031bfdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1031bfde:;
  /* 1031bfde mov esp, ebp */
  ESP = (EBP);
  /* 1031bfe0 pop ebp */
  EBP = (pop32());
  /* 1031bfe1 ret  */
  ESPCHK(0x1031bf60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bff0 @ 0x1031bff0 (627 bytes, 182 insns) */
void f_1031bff0(void) {
  FTRACE(0x1031bff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031bff0 push ebp */
  push32((uint32_t)(EBP));
  /* 1031bff1 mov ebp, esp */
  EBP = (ESP);
  /* 1031bff3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031bff9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1031c000 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1031c003 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 1031c009 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031c00d jne 0x1031c016 */
  if (!C.zf) goto L_1031c016;
  /* 1031c00f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031c011 jmp 0x1031c25f */
  goto L_1031c25f;
L_1031c016:;
  /* 1031c016 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031c019 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1031c01c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031c01f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1031c022 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031c025 mov eax, dword ptr [ecx*4 + 0x10340ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10340ea0)));
  /* 1031c02c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1031c031 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1031c034 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1031c036 je 0x1031c048 */
  if (C.zf) goto L_1031c048;
  /* 1031c038 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031c03a push 0 */
  push32((uint32_t)(0x0u));
  /* 1031c03c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031c03f push edx */
  push32((uint32_t)(EDX));
  /* 1031c040 call 0x1031bea0 */
  push32(0x1031c045u); f_1031bea0();
  /* 1031c045 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1031c048:;
  /* 1031c048 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031c04b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1031c04e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031c051 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1031c054 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031c057 mov edx, dword ptr [eax*4 + 0x10340ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10340ea0)));
  /* 1031c05e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1031c063 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1031c068 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031c06a je 0x1031c17c */
  if (C.zf) goto L_1031c17c;
  /* 1031c070 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031c073 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1031c076 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1031c07d:;
  /* 1031c07d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031c080 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031c083 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031c086 jae 0x1031c17a */
  if (!C.cf) goto L_1031c17a;
  /* 1031c08c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1031c092 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1031c095:;
  /* 1031c095 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031c098 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1031c09e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031c0a0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031c0a6 jge 0x1031c107 */
  if ((C.sf==C.of)) goto L_1031c107;
  /* 1031c0a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031c0ab sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031c0ae cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031c0b1 jae 0x1031c107 */
  if (!C.cf) goto L_1031c107;
  /* 1031c0b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031c0b6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1031c0b8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1031c0be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031c0c1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031c0c4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1031c0c7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1031c0ce cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031c0d1 jne 0x1031c0f1 */
  if (!C.zf) goto L_1031c0f1;
  /* 1031c0d3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 1031c0d9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031c0dc mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 1031c0e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031c0e5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 1031c0e8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031c0eb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031c0ee mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1031c0f1:;
  /* 1031c0f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031c0f4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1031c0fa mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1031c0fc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031c0ff add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031c102 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1031c105 jmp 0x1031c095 */
  goto L_1031c095;
L_1031c107:;
  /* 1031c107 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031c109 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1031c10f push edx */
  push32((uint32_t)(EDX));
  /* 1031c110 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031c113 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 1031c119 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031c11b push eax */
  push32((uint32_t)(EAX));
  /* 1031c11c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1031c122 push edx */
  push32((uint32_t)(EDX));
  /* 1031c123 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031c126 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1031c129 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031c12c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1031c12f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031c132 mov edx, dword ptr [eax*4 + 0x10340ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10340ea0)));
  /* 1031c139 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1031c13c push eax */
  push32((uint32_t)(EAX));
  /* 1031c13d call dword ptr [0x103422bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422bc))), 0x1031c143u);
  /* 1031c143 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031c145 je 0x1031c16a */
  if (C.zf) goto L_1031c16a;
  /* 1031c147 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1031c14a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031c150 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1031c153 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031c156 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1031c15c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031c15e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031c164 jge 0x1031c168 */
  if ((C.sf==C.of)) goto L_1031c168;
  /* 1031c166 jmp 0x1031c17a */
  goto L_1031c17a;
L_1031c168:;
  /* 1031c168 jmp 0x1031c175 */
  goto L_1031c175;
L_1031c16a:;
  /* 1031c16a call dword ptr [0x103422fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422fc))), 0x1031c170u);
  /* 1031c170 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1031c173 jmp 0x1031c17a */
  goto L_1031c17a;
L_1031c175:;
  /* 1031c175 jmp 0x1031c07d */
  goto L_1031c07d;
L_1031c17a:;
  /* 1031c17a jmp 0x1031c1cc */
  goto L_1031c1cc;
L_1031c17c:;
  /* 1031c17c push 0 */
  push32((uint32_t)(0x0u));
  /* 1031c17e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 1031c184 push ecx */
  push32((uint32_t)(ECX));
  /* 1031c185 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1031c188 push edx */
  push32((uint32_t)(EDX));
  /* 1031c189 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031c18c push eax */
  push32((uint32_t)(EAX));
  /* 1031c18d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031c190 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1031c193 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031c196 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1031c199 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031c19c mov eax, dword ptr [ecx*4 + 0x10340ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10340ea0)));
  /* 1031c1a3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1031c1a6 push ecx */
  push32((uint32_t)(ECX));
  /* 1031c1a7 call dword ptr [0x103422bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422bc))), 0x1031c1adu);
  /* 1031c1ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031c1af je 0x1031c1c3 */
  if (C.zf) goto L_1031c1c3;
  /* 1031c1b1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1031c1b8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1031c1be mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1031c1c1 jmp 0x1031c1cc */
  goto L_1031c1cc;
L_1031c1c3:;
  /* 1031c1c3 call dword ptr [0x103422fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422fc))), 0x1031c1c9u);
  /* 1031c1c9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1031c1cc:;
  /* 1031c1cc cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031c1d0 jne 0x1031c256 */
  if (!C.zf) goto L_1031c256;
  /* 1031c1d6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031c1da je 0x1031c20a */
  if (C.zf) goto L_1031c20a;
  /* 1031c1dc cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031c1e0 jne 0x1031c1f9 */
  if (!C.zf) goto L_1031c1f9;
  /* 1031c1e2 call 0x1031b590 */
  push32(0x1031c1e7u); f_1031b590();
  /* 1031c1e7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1031c1ed call 0x1031b5a0 */
  push32(0x1031c1f2u); f_1031b5a0();
  /* 1031c1f2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031c1f5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1031c1f7 jmp 0x1031c205 */
  goto L_1031c205;
L_1031c1f9:;
  /* 1031c1f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031c1fc push edx */
  push32((uint32_t)(EDX));
  /* 1031c1fd call 0x1031b4f0 */
  push32(0x1031c202u); f_1031b4f0();
  /* 1031c202 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1031c205:;
  /* 1031c205 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1031c208 jmp 0x1031c25f */
  goto L_1031c25f;
L_1031c20a:;
  /* 1031c20a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031c20d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1031c210 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031c213 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1031c216 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031c219 mov edx, dword ptr [eax*4 + 0x10340ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10340ea0)));
  /* 1031c220 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1031c225 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1031c228 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031c22a je 0x1031c23b */
  if (C.zf) goto L_1031c23b;
  /* 1031c22c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031c22f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1031c232 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031c235 jne 0x1031c23b */
  if (!C.zf) goto L_1031c23b;
  /* 1031c237 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031c239 jmp 0x1031c25f */
  goto L_1031c25f;
L_1031c23b:;
  /* 1031c23b call 0x1031b590 */
  push32(0x1031c240u); f_1031b590();
  /* 1031c240 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 1031c246 call 0x1031b5a0 */
  push32(0x1031c24bu); f_1031b5a0();
  /* 1031c24b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1031c251 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1031c254 jmp 0x1031c25f */
  goto L_1031c25f;
L_1031c256:;
  /* 1031c256 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1031c259 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1031c25f:;
  /* 1031c25f mov esp, ebp */
  ESP = (EBP);
  /* 1031c261 pop ebp */
  EBP = (pop32());
  /* 1031c262 ret  */
  ESPCHK(0x1031bff0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c270 @ 0x1031c270 (199 bytes, 68 insns) */
void f_1031c270(void) {
  FTRACE(0x1031c270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031c270 push ebp */
  push32((uint32_t)(EBP));
  /* 1031c271 mov ebp, esp */
  EBP = (ESP);
  /* 1031c273 push ecx */
  push32((uint32_t)(ECX));
  /* 1031c274 push ebx */
  push32((uint32_t)(EBX));
  /* 1031c275 push esi */
  push32((uint32_t)(ESI));
  /* 1031c276 push edi */
  push32((uint32_t)(EDI));
L_1031c277:;
  /* 1031c277 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031c27b jne 0x1031c29b */
  if (!C.zf) goto L_1031c29b;
  /* 1031c27d push 0x1033aef0 */
  push32((uint32_t)(0x1033aef0u));
  /* 1031c282 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031c284 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1031c286 push 0x1033afc0 */
  push32((uint32_t)(0x1033afc0u));
  /* 1031c28b push 2 */
  push32((uint32_t)(0x2u));
  /* 1031c28d call 0x10312780 */
  push32(0x1031c292u); f_10312780();
  /* 1031c292 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031c295 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031c298 jne 0x1031c29b */
  if (!C.zf) goto L_1031c29b;
  /* 1031c29a int3  */
  x86_unimpl("int3 @ 0x1031c29a");
L_1031c29b:;
  /* 1031c29b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031c29d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031c29f jne 0x1031c277 */
  if (!C.zf) goto L_1031c277;
  /* 1031c2a1 mov ecx, dword ptr [0x1033f6d4] */
  ECX = (r32((uint32_t)(0x1033f6d4)));
  /* 1031c2a7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031c2aa mov dword ptr [0x1033f6d4], ecx */
  w32((uint32_t)(0x1033f6d4), (ECX));
  /* 1031c2b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031c2b3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1031c2b6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1031c2b8 push 0x1033afc0 */
  push32((uint32_t)(0x1033afc0u));
  /* 1031c2bd push 2 */
  push32((uint32_t)(0x2u));
  /* 1031c2bf push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1031c2c4 call 0x103136c0 */
  push32(0x1031c2c9u); f_103136c0();
  /* 1031c2c9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031c2cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031c2cf mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1031c2d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031c2d5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031c2d9 je 0x1031c2f6 */
  if (C.zf) goto L_1031c2f6;
  /* 1031c2db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031c2de mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1031c2e1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1031c2e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031c2e7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1031c2ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031c2ed mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 1031c2f4 jmp 0x1031c31b */
  goto L_1031c31b;
L_1031c2f6:;
  /* 1031c2f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031c2f9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1031c2fc or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1031c2ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031c302 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1031c305 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031c308 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031c30b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031c30e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1031c311 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031c314 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1031c31b:;
  /* 1031c31b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031c31e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031c321 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1031c324 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1031c326 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031c329 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1031c330 pop edi */
  EDI = (pop32());
  /* 1031c331 pop esi */
  ESI = (pop32());
  /* 1031c332 pop ebx */
  EBX = (pop32());
  /* 1031c333 mov esp, ebp */
  ESP = (EBP);
  /* 1031c335 pop ebp */
  EBP = (pop32());
  /* 1031c336 ret  */
  ESPCHK(0x1031c270u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x1031c340 (50 bytes, 17 insns) */
void f_1031c340(void) {
  FTRACE(0x1031c340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031c340 push ebp */
  push32((uint32_t)(EBP));
  /* 1031c341 mov ebp, esp */
  EBP = (ESP);
  /* 1031c343 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031c346 cmp eax, dword ptr [0x10340fdc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10340fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031c34c jb 0x1031c352 */
  if (C.cf) goto L_1031c352;
  /* 1031c34e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031c350 jmp 0x1031c370 */
  goto L_1031c370;
L_1031c352:;
  /* 1031c352 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031c355 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1031c358 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031c35b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1031c35e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031c361 mov eax, dword ptr [ecx*4 + 0x10340ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10340ea0)));
  /* 1031c368 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1031c36d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_1031c370:;
  /* 1031c370 pop ebp */
  EBP = (pop32());
  /* 1031c371 ret  */
  ESPCHK(0x1031c340u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c380 @ 0x1031c380 (300 bytes, 80 insns) */
void f_1031c380(void) {
  FTRACE(0x1031c380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031c380 push ebp */
  push32((uint32_t)(EBP));
  /* 1031c381 mov ebp, esp */
  EBP = (ESP);
  /* 1031c383 push ecx */
  push32((uint32_t)(ECX));
  /* 1031c384 cmp dword ptr [0x10340ba0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10340ba0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031c38b jne 0x1031c399 */
  if (!C.zf) goto L_1031c399;
  /* 1031c38d mov dword ptr [0x10340ba0], 0x200 */
  w32((uint32_t)(0x10340ba0), (0x200u));
  /* 1031c397 jmp 0x1031c3ac */
  goto L_1031c3ac;
L_1031c399:;
  /* 1031c399 cmp dword ptr [0x10340ba0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x10340ba0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031c3a0 jge 0x1031c3ac */
  if ((C.sf==C.of)) goto L_1031c3ac;
  /* 1031c3a2 mov dword ptr [0x10340ba0], 0x14 */
  w32((uint32_t)(0x10340ba0), (0x14u));
L_1031c3ac:;
  /* 1031c3ac push 0x83 */
  push32((uint32_t)(0x83u));
  /* 1031c3b1 push 0x1033afcc */
  push32((uint32_t)(0x1033afccu));
  /* 1031c3b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031c3b8 push 4 */
  push32((uint32_t)(0x4u));
  /* 1031c3ba mov eax, dword ptr [0x10340ba0] */
  EAX = (r32((uint32_t)(0x10340ba0)));
  /* 1031c3bf push eax */
  push32((uint32_t)(EAX));
  /* 1031c3c0 call 0x10313ad0 */
  push32(0x1031c3c5u); f_10313ad0();
  /* 1031c3c5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031c3c8 mov dword ptr [0x1033f848], eax */
  w32((uint32_t)(0x1033f848), (EAX));
  /* 1031c3cd cmp dword ptr [0x1033f848], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f848))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031c3d4 jne 0x1031c415 */
  if (!C.zf) goto L_1031c415;
  /* 1031c3d6 mov dword ptr [0x10340ba0], 0x14 */
  w32((uint32_t)(0x10340ba0), (0x14u));
  /* 1031c3e0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 1031c3e5 push 0x1033afcc */
  push32((uint32_t)(0x1033afccu));
  /* 1031c3ea push 2 */
  push32((uint32_t)(0x2u));
  /* 1031c3ec push 4 */
  push32((uint32_t)(0x4u));
  /* 1031c3ee mov ecx, dword ptr [0x10340ba0] */
  ECX = (r32((uint32_t)(0x10340ba0)));
  /* 1031c3f4 push ecx */
  push32((uint32_t)(ECX));
  /* 1031c3f5 call 0x10313ad0 */
  push32(0x1031c3fau); f_10313ad0();
  /* 1031c3fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031c3fd mov dword ptr [0x1033f848], eax */
  w32((uint32_t)(0x1033f848), (EAX));
  /* 1031c402 cmp dword ptr [0x1033f848], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f848))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031c409 jne 0x1031c415 */
  if (!C.zf) goto L_1031c415;
  /* 1031c40b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1031c40d call 0x10312630 */
  push32(0x1031c412u); f_10312630();
  /* 1031c412 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1031c415:;
  /* 1031c415 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1031c41c jmp 0x1031c427 */
  goto L_1031c427;
L_1031c41e:;
  /* 1031c41e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031c421 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031c424 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1031c427:;
  /* 1031c427 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031c42b jge 0x1031c446 */
  if ((C.sf==C.of)) goto L_1031c446;
  /* 1031c42d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031c430 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1031c433 add eax, 0x1033e120 */
  { uint32_t _a=(EAX),_b=(0x1033e120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031c438 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031c43b mov edx, dword ptr [0x1033f848] */
  EDX = (r32((uint32_t)(0x1033f848)));
  /* 1031c441 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1031c444 jmp 0x1031c41e */
  goto L_1031c41e;
L_1031c446:;
  /* 1031c446 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1031c44d jmp 0x1031c458 */
  goto L_1031c458;
L_1031c44f:;
  /* 1031c44f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031c452 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031c455 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1031c458:;
  /* 1031c458 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031c45c jge 0x1031c4a8 */
  if ((C.sf==C.of)) goto L_1031c4a8;
  /* 1031c45e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031c461 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1031c464 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031c467 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1031c46a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031c46d mov eax, dword ptr [ecx*4 + 0x10340ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10340ea0)));
  /* 1031c474 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031c478 je 0x1031c496 */
  if (C.zf) goto L_1031c496;
  /* 1031c47a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031c47d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1031c480 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031c483 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1031c486 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031c489 mov eax, dword ptr [ecx*4 + 0x10340ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10340ea0)));
  /* 1031c490 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031c494 jne 0x1031c4a6 */
  if (!C.zf) goto L_1031c4a6;
L_1031c496:;
  /* 1031c496 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031c499 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1031c49c mov dword ptr [ecx + 0x1033e130], 0xffffffff */
  w32((uint32_t)(ECX + 0x1033e130), (0xffffffffu));
L_1031c4a6:;
  /* 1031c4a6 jmp 0x1031c44f */
  goto L_1031c44f;
L_1031c4a8:;
  /* 1031c4a8 mov esp, ebp */
  ESP = (EBP);
  /* 1031c4aa pop ebp */
  EBP = (pop32());
  /* 1031c4ab ret  */
  ESPCHK(0x1031c380u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c4b0 @ 0x1031c4b0 (26 bytes, 9 insns) */
void f_1031c4b0(void) {
  FTRACE(0x1031c4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031c4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1031c4b1 mov ebp, esp */
  EBP = (ESP);
  /* 1031c4b3 call 0x1031d0b0 */
  push32(0x1031c4b8u); f_1031d0b0();
  /* 1031c4b8 movsx eax, byte ptr [0x1033f4ec] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x1033f4ec))));
  /* 1031c4bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031c4c1 je 0x1031c4c8 */
  if (C.zf) goto L_1031c4c8;
  /* 1031c4c3 call 0x1031ce70 */
  push32(0x1031c4c8u); f_1031ce70();
L_1031c4c8:;
  /* 1031c4c8 pop ebp */
  EBP = (pop32());
  /* 1031c4c9 ret  */
  ESPCHK(0x1031c4b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c4d0 @ 0x1031c4d0 (61 bytes, 20 insns) */
void f_1031c4d0(void) {
  FTRACE(0x1031c4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031c4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1031c4d1 mov ebp, esp */
  EBP = (ESP);
  /* 1031c4d3 cmp dword ptr [ebp + 8], 0x1033e120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1033e120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031c4da jb 0x1031c4fe */
  if (C.cf) goto L_1031c4fe;
  /* 1031c4dc cmp dword ptr [ebp + 8], 0x1033e380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1033e380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031c4e3 ja 0x1031c4fe */
  if ((!C.cf&&!C.zf)) goto L_1031c4fe;
  /* 1031c4e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031c4e8 sub eax, 0x1033e120 */
  { uint32_t _a=(EAX),_b=(0x1033e120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031c4ed sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1031c4f0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031c4f3 push eax */
  push32((uint32_t)(EAX));
  /* 1031c4f4 call 0x103170c0 */
  push32(0x1031c4f9u); f_103170c0();
  /* 1031c4f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031c4fc jmp 0x1031c50b */
  goto L_1031c50b;
L_1031c4fe:;
  /* 1031c4fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031c501 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031c504 push ecx */
  push32((uint32_t)(ECX));
  /* 1031c505 call dword ptr [0x1034234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034234c))), 0x1031c50bu);
L_1031c50b:;
  /* 1031c50b pop ebp */
  EBP = (pop32());
  /* 1031c50c ret  */
  ESPCHK(0x1031c4d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c510 @ 0x1031c510 (41 bytes, 16 insns) */
void f_1031c510(void) {
  FTRACE(0x1031c510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031c510 push ebp */
  push32((uint32_t)(EBP));
  /* 1031c511 mov ebp, esp */
  EBP = (ESP);
  /* 1031c513 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031c517 jge 0x1031c52a */
  if ((C.sf==C.of)) goto L_1031c52a;
  /* 1031c519 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031c51c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031c51f push eax */
  push32((uint32_t)(EAX));
  /* 1031c520 call 0x103170c0 */
  push32(0x1031c525u); f_103170c0();
  /* 1031c525 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031c528 jmp 0x1031c537 */
  goto L_1031c537;
L_1031c52a:;
  /* 1031c52a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031c52d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031c530 push ecx */
  push32((uint32_t)(ECX));
  /* 1031c531 call dword ptr [0x1034234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034234c))), 0x1031c537u);
L_1031c537:;
  /* 1031c537 pop ebp */
  EBP = (pop32());
  /* 1031c538 ret  */
  ESPCHK(0x1031c510u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c540 @ 0x1031c540 (61 bytes, 20 insns) */
void f_1031c540(void) {
  FTRACE(0x1031c540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031c540 push ebp */
  push32((uint32_t)(EBP));
  /* 1031c541 mov ebp, esp */
  EBP = (ESP);
  /* 1031c543 cmp dword ptr [ebp + 8], 0x1033e120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1033e120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031c54a jb 0x1031c56e */
  if (C.cf) goto L_1031c56e;
  /* 1031c54c cmp dword ptr [ebp + 8], 0x1033e380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1033e380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031c553 ja 0x1031c56e */
  if ((!C.cf&&!C.zf)) goto L_1031c56e;
  /* 1031c555 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031c558 sub eax, 0x1033e120 */
  { uint32_t _a=(EAX),_b=(0x1033e120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031c55d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1031c560 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031c563 push eax */
  push32((uint32_t)(EAX));
  /* 1031c564 call 0x10317160 */
  push32(0x1031c569u); f_10317160();
  /* 1031c569 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031c56c jmp 0x1031c57b */
  goto L_1031c57b;
L_1031c56e:;
  /* 1031c56e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031c571 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031c574 push ecx */
  push32((uint32_t)(ECX));
  /* 1031c575 call dword ptr [0x10342350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342350))), 0x1031c57bu);
L_1031c57b:;
  /* 1031c57b pop ebp */
  EBP = (pop32());
  /* 1031c57c ret  */
  ESPCHK(0x1031c540u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c580 @ 0x1031c580 (41 bytes, 16 insns) */
void f_1031c580(void) {
  FTRACE(0x1031c580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031c580 push ebp */
  push32((uint32_t)(EBP));
  /* 1031c581 mov ebp, esp */
  EBP = (ESP);
  /* 1031c583 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031c587 jge 0x1031c59a */
  if ((C.sf==C.of)) goto L_1031c59a;
  /* 1031c589 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031c58c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031c58f push eax */
  push32((uint32_t)(EAX));
  /* 1031c590 call 0x10317160 */
  push32(0x1031c595u); f_10317160();
  /* 1031c595 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031c598 jmp 0x1031c5a7 */
  goto L_1031c5a7;
L_1031c59a:;
  /* 1031c59a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031c59d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031c5a0 push ecx */
  push32((uint32_t)(ECX));
  /* 1031c5a1 call dword ptr [0x10342350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342350))), 0x1031c5a7u);
L_1031c5a7:;
  /* 1031c5a7 pop ebp */
  EBP = (pop32());
  /* 1031c5a8 ret  */
  ESPCHK(0x1031c580u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c5b0 @ 0x1031c5b0 (119 bytes, 34 insns) */
void f_1031c5b0(void) {
  FTRACE(0x1031c5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031c5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1031c5b1 mov ebp, esp */
  EBP = (ESP);
  /* 1031c5b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031c5b6 push 0x1033f844 */
  push32((uint32_t)(0x1033f844u));
  /* 1031c5bb call dword ptr [0x103422d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422d0))), 0x1031c5c1u);
  /* 1031c5c1 cmp dword ptr [0x1033f834], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f834))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031c5c8 je 0x1031c5e8 */
  if (C.zf) goto L_1031c5e8;
  /* 1031c5ca push 0x1033f844 */
  push32((uint32_t)(0x1033f844u));
  /* 1031c5cf call dword ptr [0x103422c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422c0))), 0x1031c5d5u);
  /* 1031c5d5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1031c5d7 call 0x103170c0 */
  push32(0x1031c5dcu); f_103170c0();
  /* 1031c5dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031c5df mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1031c5e6 jmp 0x1031c5ef */
  goto L_1031c5ef;
L_1031c5e8:;
  /* 1031c5e8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1031c5ef:;
  /* 1031c5ef mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 1031c5f3 push eax */
  push32((uint32_t)(EAX));
  /* 1031c5f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031c5f7 push ecx */
  push32((uint32_t)(ECX));
  /* 1031c5f8 call 0x1031c630 */
  push32(0x1031c5fdu); f_1031c630();
  /* 1031c5fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031c600 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1031c603 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031c607 je 0x1031c615 */
  if (C.zf) goto L_1031c615;
  /* 1031c609 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1031c60b call 0x10317160 */
  push32(0x1031c610u); f_10317160();
  /* 1031c610 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031c613 jmp 0x1031c620 */
  goto L_1031c620;
L_1031c615:;
  /* 1031c615 push 0x1033f844 */
  push32((uint32_t)(0x1033f844u));
  /* 1031c61a call dword ptr [0x103422c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422c0))), 0x1031c620u);
L_1031c620:;
  /* 1031c620 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031c623 mov esp, ebp */
  ESP = (EBP);
  /* 1031c625 pop ebp */
  EBP = (pop32());
  /* 1031c626 ret  */
  ESPCHK(0x1031c5b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c630 @ 0x1031c630 (160 bytes, 50 insns) */
void f_1031c630(void) {
  FTRACE(0x1031c630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031c630 push ebp */
  push32((uint32_t)(EBP));
  /* 1031c631 mov ebp, esp */
  EBP = (ESP);
  /* 1031c633 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031c636 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031c63a jne 0x1031c643 */
  if (!C.zf) goto L_1031c643;
  /* 1031c63c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031c63e jmp 0x1031c6cc */
  goto L_1031c6cc;
L_1031c643:;
  /* 1031c643 cmp dword ptr [0x1033f6b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f6b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031c64a jne 0x1031c67a */
  if (!C.zf) goto L_1031c67a;
  /* 1031c64c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031c64f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1031c654 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031c659 jle 0x1031c66b */
  if ((C.zf||C.sf!=C.of)) goto L_1031c66b;
  /* 1031c65b call 0x1031b590 */
  push32(0x1031c660u); f_1031b590();
  /* 1031c660 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1031c666 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1031c669 jmp 0x1031c6cc */
  goto L_1031c6cc;
L_1031c66b:;
  /* 1031c66b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031c66e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 1031c671 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1031c673 mov eax, 1 */
  EAX = (0x1u);
  /* 1031c678 jmp 0x1031c6cc */
  goto L_1031c6cc;
L_1031c67a:;
  /* 1031c67a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1031c681 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1031c684 push eax */
  push32((uint32_t)(EAX));
  /* 1031c685 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031c687 mov ecx, dword ptr [0x1033dea4] */
  ECX = (r32((uint32_t)(0x1033dea4)));
  /* 1031c68d push ecx */
  push32((uint32_t)(ECX));
  /* 1031c68e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031c691 push edx */
  push32((uint32_t)(EDX));
  /* 1031c692 push 1 */
  push32((uint32_t)(0x1u));
  /* 1031c694 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1031c697 push eax */
  push32((uint32_t)(EAX));
  /* 1031c698 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1031c69d mov ecx, dword ptr [0x1033f6c8] */
  ECX = (r32((uint32_t)(0x1033f6c8)));
  /* 1031c6a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1031c6a4 call dword ptr [0x10342328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342328))), 0x1031c6aau);
  /* 1031c6aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1031c6ad cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031c6b1 je 0x1031c6b9 */
  if (C.zf) goto L_1031c6b9;
  /* 1031c6b3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031c6b7 je 0x1031c6c9 */
  if (C.zf) goto L_1031c6c9;
L_1031c6b9:;
  /* 1031c6b9 call 0x1031b590 */
  push32(0x1031c6beu); f_1031b590();
  /* 1031c6be mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1031c6c4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1031c6c7 jmp 0x1031c6cc */
  goto L_1031c6cc;
L_1031c6c9:;
  /* 1031c6c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1031c6cc:;
  /* 1031c6cc mov esp, ebp */
  ESP = (EBP);
  /* 1031c6ce pop ebp */
  EBP = (pop32());
  /* 1031c6cf ret  */
  ESPCHK(0x1031c630u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1031c6d0 (32 bytes, 18 insns) */
void f_1031c6d0(void) {
  FTRACE(0x1031c6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031c6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1031c6d1 mov ebp, esp */
  EBP = (ESP);
  /* 1031c6d3 push ebx */
  push32((uint32_t)(EBX));
  /* 1031c6d4 push esi */
  push32((uint32_t)(ESI));
  /* 1031c6d5 push edi */
  push32((uint32_t)(EDI));
  /* 1031c6d6 push ebp */
  push32((uint32_t)(EBP));
  /* 1031c6d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031c6d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031c6db push 0x1031c6e8 */
  push32((uint32_t)(0x1031c6e8u));
  /* 1031c6e0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1031c6e3 call 0x10323e1c */
  push32(0x1031c6e8u); f_10323e1c();
  /* 1031c6e8 pop ebp */
  EBP = (pop32());
  /* 1031c6e9 pop edi */
  EDI = (pop32());
  /* 1031c6ea pop esi */
  ESI = (pop32());
  /* 1031c6eb pop ebx */
  EBX = (pop32());
  /* 1031c6ec mov esp, ebp */
  ESP = (EBP);
  /* 1031c6ee pop ebp */
  EBP = (pop32());
  /* 1031c6ef ret  */
  ESPCHK(0x1031c6d0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1031c712 (104 bytes, 33 insns) */
void f_1031c712(void) {
  FTRACE(0x1031c712u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031c712 push ebx */
  push32((uint32_t)(EBX));
  /* 1031c713 push esi */
  push32((uint32_t)(ESI));
  /* 1031c714 push edi */
  push32((uint32_t)(EDI));
  /* 1031c715 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1031c719 push eax */
  push32((uint32_t)(EAX));
  /* 1031c71a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1031c71c push 0x1031c6f0 */
  push32((uint32_t)(0x1031c6f0u));
  /* 1031c721 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1031c728 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1031c72f:;
  /* 1031c72f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1031c733 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1031c736 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1031c739 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031c73c je 0x1031c76c */
  if (C.zf) goto L_1031c76c;
  /* 1031c73e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031c742 je 0x1031c76c */
  if (C.zf) goto L_1031c76c;
  /* 1031c744 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1031c747 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1031c74a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1031c74e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1031c751 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031c756 jne 0x1031c76a */
  if (!C.zf) goto L_1031c76a;
  /* 1031c758 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1031c75d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1031c761 call 0x1031c7a6 */
  push32(0x1031c766u); f_1031c7a6();
  /* 1031c766 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1031c76au);
L_1031c76a:;
  /* 1031c76a jmp 0x1031c72f */
  goto L_1031c72f;
L_1031c76c:;
  /* 1031c76c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1031c773 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031c776 pop edi */
  EDI = (pop32());
  /* 1031c777 pop esi */
  ESI = (pop32());
  /* 1031c778 pop ebx */
  EBX = (pop32());
  /* 1031c779 ret  */
  ESPCHK(0x1031c712u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7a6 @ 0x1031c7a6 (24 bytes, 10 insns) */
void f_1031c7a6(void) {
  FTRACE(0x1031c7a6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031c7a6 push ebx */
  push32((uint32_t)(EBX));
  /* 1031c7a7 push ecx */
  push32((uint32_t)(ECX));
  /* 1031c7a8 mov ebx, 0x1033e3b8 */
  EBX = (0x1033e3b8u);
  /* 1031c7ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031c7b0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1031c7b3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1031c7b6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1031c7b9 pop ecx */
  ECX = (pop32());
  /* 1031c7ba pop ebx */
  EBX = (pop32());
  /* 1031c7bb ret 4 */
  ESPCHK(0x1031c7a6u, _esp0);
  ESP += 8; return;
}

/* FUN_1000c885 @ 0x1031c885 (27 bytes, 11 insns) */
void f_1031c885(void) {
  FTRACE(0x1031c885u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031c885 push ebp */
  push32((uint32_t)(EBP));
  /* 1031c886 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1031c88a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1031c88c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1031c88f push eax */
  push32((uint32_t)(EAX));
  /* 1031c890 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1031c893 push eax */
  push32((uint32_t)(EAX));
  /* 1031c894 call 0x1031c712 */
  push32(0x1031c899u); f_1031c712();
  /* 1031c899 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031c89c pop ebp */
  EBP = (pop32());
  /* 1031c89d ret 4 */
  ESPCHK(0x1031c885u, _esp0);
  ESP += 8; return;
}

/* FUN_1000c8a0 @ 0x1031c8a0 (482 bytes, 138 insns) */
void f_1031c8a0(void) {
  FTRACE(0x1031c8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031c8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1031c8a1 mov ebp, esp */
  EBP = (ESP);
  /* 1031c8a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031c8a6 push esi */
  push32((uint32_t)(ESI));
  /* 1031c8a7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 1031c8ae push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1031c8b0 call 0x103170c0 */
  push32(0x1031c8b5u); f_103170c0();
  /* 1031c8b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031c8b8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1031c8bf jmp 0x1031c8ca */
  goto L_1031c8ca;
L_1031c8c1:;
  /* 1031c8c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031c8c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031c8c7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1031c8ca:;
  /* 1031c8ca cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031c8ce jge 0x1031ca70 */
  if ((C.sf==C.of)) goto L_1031ca70;
  /* 1031c8d4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031c8d7 cmp dword ptr [ecx*4 + 0x10340ea0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10340ea0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031c8df je 0x1031c9d6 */
  if (C.zf) goto L_1031c9d6;
  /* 1031c8e5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031c8e8 mov eax, dword ptr [edx*4 + 0x10340ea0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10340ea0)));
  /* 1031c8ef mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1031c8f2 jmp 0x1031c8fd */
  goto L_1031c8fd;
L_1031c8f4:;
  /* 1031c8f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031c8f7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031c8fa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1031c8fd:;
  /* 1031c8fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031c900 mov eax, dword ptr [edx*4 + 0x10340ea0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10340ea0)));
  /* 1031c907 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031c90c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031c90f jae 0x1031c9c6 */
  if (!C.cf) goto L_1031c9c6;
  /* 1031c915 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031c918 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1031c91c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1031c91f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1031c921 jne 0x1031c9c1 */
  if (!C.zf) goto L_1031c9c1;
  /* 1031c927 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031c92a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031c92e jne 0x1031c969 */
  if (!C.zf) goto L_1031c969;
  /* 1031c930 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1031c932 call 0x103170c0 */
  push32(0x1031c937u); f_103170c0();
  /* 1031c937 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031c93a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031c93d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031c941 jne 0x1031c95f */
  if (!C.zf) goto L_1031c95f;
  /* 1031c943 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031c946 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031c949 push edx */
  push32((uint32_t)(EDX));
  /* 1031c94a call dword ptr [0x10342348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342348))), 0x1031c950u);
  /* 1031c950 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031c953 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1031c956 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031c959 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031c95c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1031c95f:;
  /* 1031c95f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1031c961 call 0x10317160 */
  push32(0x1031c966u); f_10317160();
  /* 1031c966 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1031c969:;
  /* 1031c969 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031c96c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031c96f push eax */
  push32((uint32_t)(EAX));
  /* 1031c970 call dword ptr [0x1034234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034234c))), 0x1031c976u);
  /* 1031c976 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031c979 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1031c97d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1031c980 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1031c982 je 0x1031c996 */
  if (C.zf) goto L_1031c996;
  /* 1031c984 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031c987 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031c98a push eax */
  push32((uint32_t)(EAX));
  /* 1031c98b call dword ptr [0x10342350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342350))), 0x1031c991u);
  /* 1031c991 jmp 0x1031c8f4 */
  goto L_1031c8f4;
L_1031c996:;
  /* 1031c996 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031c999 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1031c99f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031c9a2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1031c9a5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031c9a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031c9ab sub eax, dword ptr [edx*4 + 0x10340ea0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x10340ea0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031c9b2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1031c9b3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 1031c9b8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1031c9ba add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031c9bc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1031c9bf jmp 0x1031c9c6 */
  goto L_1031c9c6;
L_1031c9c1:;
  /* 1031c9c1 jmp 0x1031c8f4 */
  goto L_1031c8f4;
L_1031c9c6:;
  /* 1031c9c6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031c9ca je 0x1031c9d1 */
  if (C.zf) goto L_1031c9d1;
  /* 1031c9cc jmp 0x1031ca70 */
  goto L_1031ca70;
L_1031c9d1:;
  /* 1031c9d1 jmp 0x1031ca6b */
  goto L_1031ca6b;
L_1031c9d6:;
  /* 1031c9d6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 1031c9d8 push 0x1033afd4 */
  push32((uint32_t)(0x1033afd4u));
  /* 1031c9dd push 2 */
  push32((uint32_t)(0x2u));
  /* 1031c9df push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1031c9e4 call 0x103136c0 */
  push32(0x1031c9e9u); f_103136c0();
  /* 1031c9e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031c9ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1031c9ef cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031c9f3 je 0x1031ca69 */
  if (C.zf) goto L_1031ca69;
  /* 1031c9f5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031c9f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031c9fb mov dword ptr [eax*4 + 0x10340ea0], ecx */
  w32((uint32_t)(EAX*4 + 0x10340ea0), (ECX));
  /* 1031ca02 mov edx, dword ptr [0x10340fdc] */
  EDX = (r32((uint32_t)(0x10340fdc)));
  /* 1031ca08 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ca0b mov dword ptr [0x10340fdc], edx */
  w32((uint32_t)(0x10340fdc), (EDX));
  /* 1031ca11 jmp 0x1031ca1c */
  goto L_1031ca1c;
L_1031ca13:;
  /* 1031ca13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031ca16 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ca19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1031ca1c:;
  /* 1031ca1c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031ca1f mov edx, dword ptr [ecx*4 + 0x10340ea0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10340ea0)));
  /* 1031ca26 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ca2c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031ca2f jae 0x1031ca54 */
  if (!C.cf) goto L_1031ca54;
  /* 1031ca31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031ca34 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 1031ca38 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031ca3b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1031ca41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031ca44 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 1031ca48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031ca4b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1031ca52 jmp 0x1031ca13 */
  goto L_1031ca13;
L_1031ca54:;
  /* 1031ca54 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031ca57 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1031ca5a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1031ca5d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031ca60 push edx */
  push32((uint32_t)(EDX));
  /* 1031ca61 call 0x1031cdb0 */
  push32(0x1031ca66u); f_1031cdb0();
  /* 1031ca66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1031ca69:;
  /* 1031ca69 jmp 0x1031ca70 */
  goto L_1031ca70;
L_1031ca6b:;
  /* 1031ca6b jmp 0x1031c8c1 */
  goto L_1031c8c1;
L_1031ca70:;
  /* 1031ca70 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1031ca72 call 0x10317160 */
  push32(0x1031ca77u); f_10317160();
  /* 1031ca77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ca7a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031ca7d pop esi */
  ESI = (pop32());
  /* 1031ca7e mov esp, ebp */
  ESP = (EBP);
  /* 1031ca80 pop ebp */
  EBP = (pop32());
  /* 1031ca81 ret  */
  ESPCHK(0x1031c8a0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x1031ca90 (183 bytes, 57 insns) */
void f_1031ca90(void) {
  FTRACE(0x1031ca90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031ca90 push ebp */
  push32((uint32_t)(EBP));
  /* 1031ca91 mov ebp, esp */
  EBP = (ESP);
  /* 1031ca93 push ecx */
  push32((uint32_t)(ECX));
  /* 1031ca94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031ca97 cmp eax, dword ptr [0x10340fdc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10340fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031ca9d jae 0x1031cb2a */
  if (!C.cf) goto L_1031cb2a;
  /* 1031caa3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031caa6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1031caa9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031caac and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1031caaf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031cab2 mov eax, dword ptr [ecx*4 + 0x10340ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10340ea0)));
  /* 1031cab9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031cabd jne 0x1031cb2a */
  if (!C.zf) goto L_1031cb2a;
  /* 1031cabf cmp dword ptr [0x1033f4ac], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1033f4ac))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031cac6 jne 0x1031cb0a */
  if (!C.zf) goto L_1031cb0a;
  /* 1031cac8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031cacb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1031cace cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031cad2 je 0x1031cae2 */
  if (C.zf) goto L_1031cae2;
  /* 1031cad4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031cad8 je 0x1031caf0 */
  if (C.zf) goto L_1031caf0;
  /* 1031cada cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031cade je 0x1031cafe */
  if (C.zf) goto L_1031cafe;
  /* 1031cae0 jmp 0x1031cb0a */
  goto L_1031cb0a;
L_1031cae2:;
  /* 1031cae2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031cae5 push edx */
  push32((uint32_t)(EDX));
  /* 1031cae6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1031cae8 call dword ptr [0x10342294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342294))), 0x1031caeeu);
  /* 1031caee jmp 0x1031cb0a */
  goto L_1031cb0a;
L_1031caf0:;
  /* 1031caf0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031caf3 push eax */
  push32((uint32_t)(EAX));
  /* 1031caf4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1031caf6 call dword ptr [0x10342294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342294))), 0x1031cafcu);
  /* 1031cafc jmp 0x1031cb0a */
  goto L_1031cb0a;
L_1031cafe:;
  /* 1031cafe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031cb01 push ecx */
  push32((uint32_t)(ECX));
  /* 1031cb02 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1031cb04 call dword ptr [0x10342294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342294))), 0x1031cb0au);
L_1031cb0a:;
  /* 1031cb0a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031cb0d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1031cb10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031cb13 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1031cb16 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031cb19 mov ecx, dword ptr [edx*4 + 0x10340ea0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10340ea0)));
  /* 1031cb20 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031cb23 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 1031cb26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031cb28 jmp 0x1031cb43 */
  goto L_1031cb43;
L_1031cb2a:;
  /* 1031cb2a call 0x1031b590 */
  push32(0x1031cb2fu); f_1031b590();
  /* 1031cb2f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1031cb35 call 0x1031b5a0 */
  push32(0x1031cb3au); f_1031b5a0();
  /* 1031cb3a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1031cb40 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1031cb43:;
  /* 1031cb43 mov esp, ebp */
  ESP = (EBP);
  /* 1031cb45 pop ebp */
  EBP = (pop32());
  /* 1031cb46 ret  */
  ESPCHK(0x1031ca90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb50 @ 0x1031cb50 (216 bytes, 63 insns) */
void f_1031cb50(void) {
  FTRACE(0x1031cb50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031cb50 push ebp */
  push32((uint32_t)(EBP));
  /* 1031cb51 mov ebp, esp */
  EBP = (ESP);
  /* 1031cb53 push ecx */
  push32((uint32_t)(ECX));
  /* 1031cb54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031cb57 cmp eax, dword ptr [0x10340fdc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10340fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031cb5d jae 0x1031cc0b */
  if (!C.cf) goto L_1031cc0b;
  /* 1031cb63 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031cb66 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1031cb69 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031cb6c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1031cb6f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031cb72 mov eax, dword ptr [ecx*4 + 0x10340ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10340ea0)));
  /* 1031cb79 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1031cb7e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1031cb81 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1031cb83 je 0x1031cc0b */
  if (C.zf) goto L_1031cc0b;
  /* 1031cb89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031cb8c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1031cb8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031cb92 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1031cb95 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031cb98 mov ecx, dword ptr [edx*4 + 0x10340ea0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10340ea0)));
  /* 1031cb9f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031cba3 je 0x1031cc0b */
  if (C.zf) goto L_1031cc0b;
  /* 1031cba5 cmp dword ptr [0x1033f4ac], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1033f4ac))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031cbac jne 0x1031cbea */
  if (!C.zf) goto L_1031cbea;
  /* 1031cbae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031cbb1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1031cbb4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031cbb8 je 0x1031cbc8 */
  if (C.zf) goto L_1031cbc8;
  /* 1031cbba cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031cbbe je 0x1031cbd4 */
  if (C.zf) goto L_1031cbd4;
  /* 1031cbc0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031cbc4 je 0x1031cbe0 */
  if (C.zf) goto L_1031cbe0;
  /* 1031cbc6 jmp 0x1031cbea */
  goto L_1031cbea;
L_1031cbc8:;
  /* 1031cbc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031cbca push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1031cbcc call dword ptr [0x10342294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342294))), 0x1031cbd2u);
  /* 1031cbd2 jmp 0x1031cbea */
  goto L_1031cbea;
L_1031cbd4:;
  /* 1031cbd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031cbd6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1031cbd8 call dword ptr [0x10342294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342294))), 0x1031cbdeu);
  /* 1031cbde jmp 0x1031cbea */
  goto L_1031cbea;
L_1031cbe0:;
  /* 1031cbe0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031cbe2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1031cbe4 call dword ptr [0x10342294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342294))), 0x1031cbeau);
L_1031cbea:;
  /* 1031cbea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031cbed sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1031cbf0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031cbf3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1031cbf6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031cbf9 mov edx, dword ptr [eax*4 + 0x10340ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10340ea0)));
  /* 1031cc00 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 1031cc07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031cc09 jmp 0x1031cc24 */
  goto L_1031cc24;
L_1031cc0b:;
  /* 1031cc0b call 0x1031b590 */
  push32(0x1031cc10u); f_1031b590();
  /* 1031cc10 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1031cc16 call 0x1031b5a0 */
  push32(0x1031cc1bu); f_1031b5a0();
  /* 1031cc1b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1031cc21 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1031cc24:;
  /* 1031cc24 mov esp, ebp */
  ESP = (EBP);
  /* 1031cc26 pop ebp */
  EBP = (pop32());
  /* 1031cc27 ret  */
  ESPCHK(0x1031cb50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc30 @ 0x1031cc30 (102 bytes, 30 insns) */
void f_1031cc30(void) {
  FTRACE(0x1031cc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031cc30 push ebp */
  push32((uint32_t)(EBP));
  /* 1031cc31 mov ebp, esp */
  EBP = (ESP);
  /* 1031cc33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031cc36 cmp eax, dword ptr [0x10340fdc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10340fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031cc3c jae 0x1031cc7b */
  if (!C.cf) goto L_1031cc7b;
  /* 1031cc3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031cc41 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1031cc44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031cc47 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1031cc4a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031cc4d mov eax, dword ptr [ecx*4 + 0x10340ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10340ea0)));
  /* 1031cc54 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1031cc59 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1031cc5c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1031cc5e je 0x1031cc7b */
  if (C.zf) goto L_1031cc7b;
  /* 1031cc60 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031cc63 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1031cc66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031cc69 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1031cc6c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031cc6f mov ecx, dword ptr [edx*4 + 0x10340ea0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10340ea0)));
  /* 1031cc76 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 1031cc79 jmp 0x1031cc94 */
  goto L_1031cc94;
L_1031cc7b:;
  /* 1031cc7b call 0x1031b590 */
  push32(0x1031cc80u); f_1031b590();
  /* 1031cc80 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1031cc86 call 0x1031b5a0 */
  push32(0x1031cc8bu); f_1031b5a0();
  /* 1031cc8b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1031cc91 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1031cc94:;
  /* 1031cc94 pop ebp */
  EBP = (pop32());
  /* 1031cc95 ret  */
  ESPCHK(0x1031cc30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cca0 @ 0x1031cca0 (260 bytes, 83 insns) */
void f_1031cca0(void) {
  FTRACE(0x1031cca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031cca0 push ebp */
  push32((uint32_t)(EBP));
  /* 1031cca1 mov ebp, esp */
  EBP = (ESP);
  /* 1031cca3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031cca6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 1031ccaa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031ccad and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1031ccb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031ccb2 je 0x1031ccbd */
  if (C.zf) goto L_1031ccbd;
  /* 1031ccb4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1031ccb7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1031ccba mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_1031ccbd:;
  /* 1031ccbd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031ccc0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1031ccc6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1031ccc8 je 0x1031ccd2 */
  if (C.zf) goto L_1031ccd2;
  /* 1031ccca mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1031cccd or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 1031cccf mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_1031ccd2:;
  /* 1031ccd2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031ccd5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1031ccdb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1031ccdd je 0x1031cce8 */
  if (C.zf) goto L_1031cce8;
  /* 1031ccdf mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1031cce2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1031cce5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1031cce8:;
  /* 1031cce8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031cceb push eax */
  push32((uint32_t)(EAX));
  /* 1031ccec call dword ptr [0x10342308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342308))), 0x1031ccf2u);
  /* 1031ccf2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1031ccf5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031ccf9 jne 0x1031cd12 */
  if (!C.zf) goto L_1031cd12;
  /* 1031ccfb call dword ptr [0x103422fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422fc))), 0x1031cd01u);
  /* 1031cd01 push eax */
  push32((uint32_t)(EAX));
  /* 1031cd02 call 0x1031b4f0 */
  push32(0x1031cd07u); f_1031b4f0();
  /* 1031cd07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031cd0a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1031cd0d jmp 0x1031cda0 */
  goto L_1031cda0;
L_1031cd12:;
  /* 1031cd12 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031cd16 jne 0x1031cd23 */
  if (!C.zf) goto L_1031cd23;
  /* 1031cd18 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1031cd1b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1031cd1e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1031cd21 jmp 0x1031cd32 */
  goto L_1031cd32;
L_1031cd23:;
  /* 1031cd23 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031cd27 jne 0x1031cd32 */
  if (!C.zf) goto L_1031cd32;
  /* 1031cd29 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1031cd2c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1031cd2f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1031cd32:;
  /* 1031cd32 call 0x1031c8a0 */
  push32(0x1031cd37u); f_1031c8a0();
  /* 1031cd37 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1031cd3a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031cd3e jne 0x1031cd5b */
  if (!C.zf) goto L_1031cd5b;
  /* 1031cd40 call 0x1031b590 */
  push32(0x1031cd45u); f_1031b590();
  /* 1031cd45 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 1031cd4b call 0x1031b5a0 */
  push32(0x1031cd50u); f_1031b5a0();
  /* 1031cd50 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1031cd56 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1031cd59 jmp 0x1031cda0 */
  goto L_1031cda0;
L_1031cd5b:;
  /* 1031cd5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031cd5e push eax */
  push32((uint32_t)(EAX));
  /* 1031cd5f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031cd62 push ecx */
  push32((uint32_t)(ECX));
  /* 1031cd63 call 0x1031ca90 */
  push32(0x1031cd68u); f_1031ca90();
  /* 1031cd68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031cd6b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1031cd6e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 1031cd71 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1031cd74 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031cd77 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1031cd7a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031cd7d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1031cd80 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031cd83 mov edx, dword ptr [eax*4 + 0x10340ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10340ea0)));
  /* 1031cd8a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1031cd8d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 1031cd91 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031cd94 push ecx */
  push32((uint32_t)(ECX));
  /* 1031cd95 call 0x1031ce40 */
  push32(0x1031cd9au); f_1031ce40();
  /* 1031cd9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031cd9d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1031cda0:;
  /* 1031cda0 mov esp, ebp */
  ESP = (EBP);
  /* 1031cda2 pop ebp */
  EBP = (pop32());
  /* 1031cda3 ret  */
  ESPCHK(0x1031cca0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cdb0 @ 0x1031cdb0 (134 bytes, 44 insns) */
void f_1031cdb0(void) {
  FTRACE(0x1031cdb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031cdb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1031cdb1 mov ebp, esp */
  EBP = (ESP);
  /* 1031cdb3 push ecx */
  push32((uint32_t)(ECX));
  /* 1031cdb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031cdb7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1031cdba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031cdbd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1031cdc0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031cdc3 mov edx, dword ptr [eax*4 + 0x10340ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10340ea0)));
  /* 1031cdca add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031cdcc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1031cdcf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031cdd2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031cdd6 jne 0x1031ce11 */
  if (!C.zf) goto L_1031ce11;
  /* 1031cdd8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1031cdda call 0x103170c0 */
  push32(0x1031cddfu); f_103170c0();
  /* 1031cddf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031cde2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031cde5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031cde9 jne 0x1031ce07 */
  if (!C.zf) goto L_1031ce07;
  /* 1031cdeb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031cdee add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031cdf1 push edx */
  push32((uint32_t)(EDX));
  /* 1031cdf2 call dword ptr [0x10342348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342348))), 0x1031cdf8u);
  /* 1031cdf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031cdfb mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1031cdfe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ce01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031ce04 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1031ce07:;
  /* 1031ce07 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1031ce09 call 0x10317160 */
  push32(0x1031ce0eu); f_10317160();
  /* 1031ce0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1031ce11:;
  /* 1031ce11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031ce14 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1031ce17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031ce1a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1031ce1d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031ce20 mov edx, dword ptr [eax*4 + 0x10340ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10340ea0)));
  /* 1031ce27 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1031ce2b push eax */
  push32((uint32_t)(EAX));
  /* 1031ce2c call dword ptr [0x1034234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034234c))), 0x1031ce32u);
  /* 1031ce32 mov esp, ebp */
  ESP = (EBP);
  /* 1031ce34 pop ebp */
  EBP = (pop32());
  /* 1031ce35 ret  */
  ESPCHK(0x1031cdb0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x1031ce40 (38 bytes, 13 insns) */
void f_1031ce40(void) {
  FTRACE(0x1031ce40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031ce40 push ebp */
  push32((uint32_t)(EBP));
  /* 1031ce41 mov ebp, esp */
  EBP = (ESP);
  /* 1031ce43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031ce46 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1031ce49 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031ce4c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1031ce4f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031ce52 mov edx, dword ptr [eax*4 + 0x10340ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10340ea0)));
  /* 1031ce59 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1031ce5d push eax */
  push32((uint32_t)(EAX));
  /* 1031ce5e call dword ptr [0x10342350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342350))), 0x1031ce64u);
  /* 1031ce64 pop ebp */
  EBP = (pop32());
  /* 1031ce65 ret  */
  ESPCHK(0x1031ce40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce70 @ 0x1031ce70 (218 bytes, 63 insns) */
void f_1031ce70(void) {
  FTRACE(0x1031ce70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031ce70 push ebp */
  push32((uint32_t)(EBP));
  /* 1031ce71 mov ebp, esp */
  EBP = (ESP);
  /* 1031ce73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031ce76 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1031ce7d push 2 */
  push32((uint32_t)(0x2u));
  /* 1031ce7f call 0x103170c0 */
  push32(0x1031ce84u); f_103170c0();
  /* 1031ce84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ce87 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 1031ce8e jmp 0x1031ce99 */
  goto L_1031ce99;
L_1031ce90:;
  /* 1031ce90 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031ce93 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ce96 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1031ce99:;
  /* 1031ce99 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031ce9c cmp ecx, dword ptr [0x10340ba0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10340ba0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031cea2 jge 0x1031cf39 */
  if ((C.sf==C.of)) goto L_1031cf39;
  /* 1031cea8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031ceab mov eax, dword ptr [0x1033f848] */
  EAX = (r32((uint32_t)(0x1033f848)));
  /* 1031ceb0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031ceb4 je 0x1031cf34 */
  if (C.zf) goto L_1031cf34;
  /* 1031ceb6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031ceb9 mov edx, dword ptr [0x1033f848] */
  EDX = (r32((uint32_t)(0x1033f848)));
  /* 1031cebf mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1031cec2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1031cec5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1031cecb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1031cecd je 0x1031cef1 */
  if (C.zf) goto L_1031cef1;
  /* 1031cecf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031ced2 mov eax, dword ptr [0x1033f848] */
  EAX = (r32((uint32_t)(0x1033f848)));
  /* 1031ced7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1031ceda push ecx */
  push32((uint32_t)(ECX));
  /* 1031cedb call 0x1031dc60 */
  push32(0x1031cee0u); f_1031dc60();
  /* 1031cee0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031cee3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031cee6 je 0x1031cef1 */
  if (C.zf) goto L_1031cef1;
  /* 1031cee8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031ceeb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ceee mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1031cef1:;
  /* 1031cef1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031cef5 jl 0x1031cf34 */
  if ((C.sf!=C.of)) goto L_1031cf34;
  /* 1031cef7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031cefa mov ecx, dword ptr [0x1033f848] */
  ECX = (r32((uint32_t)(0x1033f848)));
  /* 1031cf00 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1031cf03 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031cf06 push edx */
  push32((uint32_t)(EDX));
  /* 1031cf07 call dword ptr [0x10342254] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342254))), 0x1031cf0du);
  /* 1031cf0d push 2 */
  push32((uint32_t)(0x2u));
  /* 1031cf0f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031cf12 mov ecx, dword ptr [0x1033f848] */
  ECX = (r32((uint32_t)(0x1033f848)));
  /* 1031cf18 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1031cf1b push edx */
  push32((uint32_t)(EDX));
  /* 1031cf1c call 0x10314150 */
  push32(0x1031cf21u); f_10314150();
  /* 1031cf21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031cf24 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031cf27 mov ecx, dword ptr [0x1033f848] */
  ECX = (r32((uint32_t)(0x1033f848)));
  /* 1031cf2d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_1031cf34:;
  /* 1031cf34 jmp 0x1031ce90 */
  goto L_1031ce90;
L_1031cf39:;
  /* 1031cf39 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031cf3b call 0x10317160 */
  push32(0x1031cf40u); f_10317160();
  /* 1031cf40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031cf43 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031cf46 mov esp, ebp */
  ESP = (EBP);
  /* 1031cf48 pop ebp */
  EBP = (pop32());
  /* 1031cf49 ret  */
  ESPCHK(0x1031ce70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf50 @ 0x1031cf50 (68 bytes, 26 insns) */
void f_1031cf50(void) {
  FTRACE(0x1031cf50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031cf50 push ebp */
  push32((uint32_t)(EBP));
  /* 1031cf51 mov ebp, esp */
  EBP = (ESP);
  /* 1031cf53 push ecx */
  push32((uint32_t)(ECX));
  /* 1031cf54 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031cf58 jne 0x1031cf66 */
  if (!C.zf) goto L_1031cf66;
  /* 1031cf5a push 0 */
  push32((uint32_t)(0x0u));
  /* 1031cf5c call 0x1031d0c0 */
  push32(0x1031cf61u); f_1031d0c0();
  /* 1031cf61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031cf64 jmp 0x1031cf90 */
  goto L_1031cf90;
L_1031cf66:;
  /* 1031cf66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031cf69 push eax */
  push32((uint32_t)(EAX));
  /* 1031cf6a call 0x1031c4d0 */
  push32(0x1031cf6fu); f_1031c4d0();
  /* 1031cf6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031cf72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031cf75 push ecx */
  push32((uint32_t)(ECX));
  /* 1031cf76 call 0x1031cfa0 */
  push32(0x1031cf7bu); f_1031cfa0();
  /* 1031cf7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031cf7e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1031cf81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031cf84 push edx */
  push32((uint32_t)(EDX));
  /* 1031cf85 call 0x1031c540 */
  push32(0x1031cf8au); f_1031c540();
  /* 1031cf8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031cf8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1031cf90:;
  /* 1031cf90 mov esp, ebp */
  ESP = (EBP);
  /* 1031cf92 pop ebp */
  EBP = (pop32());
  /* 1031cf93 ret  */
  ESPCHK(0x1031cf50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cfa0 @ 0x1031cfa0 (65 bytes, 26 insns) */
void f_1031cfa0(void) {
  FTRACE(0x1031cfa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031cfa0 push ebp */
  push32((uint32_t)(EBP));
  /* 1031cfa1 mov ebp, esp */
  EBP = (ESP);
  /* 1031cfa3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031cfa6 push eax */
  push32((uint32_t)(EAX));
  /* 1031cfa7 call 0x1031cff0 */
  push32(0x1031cfacu); f_1031cff0();
  /* 1031cfac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031cfaf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031cfb1 je 0x1031cfb8 */
  if (C.zf) goto L_1031cfb8;
  /* 1031cfb3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1031cfb6 jmp 0x1031cfdf */
  goto L_1031cfdf;
L_1031cfb8:;
  /* 1031cfb8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031cfbb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1031cfbe and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1031cfc4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1031cfc6 je 0x1031cfdd */
  if (C.zf) goto L_1031cfdd;
  /* 1031cfc8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031cfcb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1031cfce push ecx */
  push32((uint32_t)(ECX));
  /* 1031cfcf call 0x1031ddb0 */
  push32(0x1031cfd4u); f_1031ddb0();
  /* 1031cfd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031cfd7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1031cfd9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031cfdb jmp 0x1031cfdf */
  goto L_1031cfdf;
L_1031cfdd:;
  /* 1031cfdd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1031cfdf:;
  /* 1031cfdf pop ebp */
  EBP = (pop32());
  /* 1031cfe0 ret  */
  ESPCHK(0x1031cfa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cff0 @ 0x1031cff0 (183 bytes, 62 insns) */
void f_1031cff0(void) {
  FTRACE(0x1031cff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031cff0 push ebp */
  push32((uint32_t)(EBP));
  /* 1031cff1 mov ebp, esp */
  EBP = (ESP);
  /* 1031cff3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031cff6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1031cffd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031d000 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1031d003 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031d006 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1031d009 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1031d00c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d00f jne 0x1031d08b */
  if (!C.zf) goto L_1031d08b;
  /* 1031d011 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031d014 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1031d017 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1031d01d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1031d01f je 0x1031d08b */
  if (C.zf) goto L_1031d08b;
  /* 1031d021 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031d024 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031d027 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1031d029 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031d02c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031d02f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d033 jle 0x1031d08b */
  if ((C.zf||C.sf!=C.of)) goto L_1031d08b;
  /* 1031d035 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031d038 push edx */
  push32((uint32_t)(EDX));
  /* 1031d039 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031d03c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1031d03f push ecx */
  push32((uint32_t)(ECX));
  /* 1031d040 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031d043 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1031d046 push eax */
  push32((uint32_t)(EAX));
  /* 1031d047 call 0x1031bf60 */
  push32(0x1031d04cu); f_1031bf60();
  /* 1031d04c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d04f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d052 jne 0x1031d075 */
  if (!C.zf) goto L_1031d075;
  /* 1031d054 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031d057 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1031d05a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1031d060 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1031d062 je 0x1031d073 */
  if (C.zf) goto L_1031d073;
  /* 1031d064 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031d067 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1031d06a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1031d06d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031d070 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_1031d073:;
  /* 1031d073 jmp 0x1031d08b */
  goto L_1031d08b;
L_1031d075:;
  /* 1031d075 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031d078 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1031d07b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1031d07e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031d081 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1031d084 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1031d08b:;
  /* 1031d08b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031d08e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031d091 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1031d094 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1031d096 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031d099 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1031d0a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031d0a3 mov esp, ebp */
  ESP = (EBP);
  /* 1031d0a5 pop ebp */
  EBP = (pop32());
  /* 1031d0a6 ret  */
  ESPCHK(0x1031cff0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d0b0 @ 0x1031d0b0 (15 bytes, 7 insns) */
void f_1031d0b0(void) {
  FTRACE(0x1031d0b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031d0b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1031d0b1 mov ebp, esp */
  EBP = (ESP);
  /* 1031d0b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1031d0b5 call 0x1031d0c0 */
  push32(0x1031d0bau); f_1031d0c0();
  /* 1031d0ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d0bd pop ebp */
  EBP = (pop32());
  /* 1031d0be ret  */
  ESPCHK(0x1031d0b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d0c0 @ 0x1031d0c0 (319 bytes, 94 insns) */
void f_1031d0c0(void) {
  FTRACE(0x1031d0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031d0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1031d0c1 mov ebp, esp */
  EBP = (ESP);
  /* 1031d0c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031d0c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1031d0cd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1031d0d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031d0d6 call 0x103170c0 */
  push32(0x1031d0dbu); f_103170c0();
  /* 1031d0db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d0de mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1031d0e5 jmp 0x1031d0f0 */
  goto L_1031d0f0;
L_1031d0e7:;
  /* 1031d0e7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031d0ea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d0ed mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1031d0f0:;
  /* 1031d0f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031d0f3 cmp ecx, dword ptr [0x10340ba0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10340ba0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d0f9 jge 0x1031d1e3 */
  if ((C.sf==C.of)) goto L_1031d1e3;
  /* 1031d0ff mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031d102 mov eax, dword ptr [0x1033f848] */
  EAX = (r32((uint32_t)(0x1033f848)));
  /* 1031d107 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d10b je 0x1031d1de */
  if (C.zf) goto L_1031d1de;
  /* 1031d111 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031d114 mov edx, dword ptr [0x1033f848] */
  EDX = (r32((uint32_t)(0x1033f848)));
  /* 1031d11a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1031d11d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1031d120 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1031d126 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1031d128 je 0x1031d1de */
  if (C.zf) goto L_1031d1de;
  /* 1031d12e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031d131 mov eax, dword ptr [0x1033f848] */
  EAX = (r32((uint32_t)(0x1033f848)));
  /* 1031d136 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1031d139 push ecx */
  push32((uint32_t)(ECX));
  /* 1031d13a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031d13d push edx */
  push32((uint32_t)(EDX));
  /* 1031d13e call 0x1031c510 */
  push32(0x1031d143u); f_1031c510();
  /* 1031d143 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d146 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031d149 mov ecx, dword ptr [0x1033f848] */
  ECX = (r32((uint32_t)(0x1033f848)));
  /* 1031d14f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1031d152 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1031d155 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1031d15a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031d15c je 0x1031d1c5 */
  if (C.zf) goto L_1031d1c5;
  /* 1031d15e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d162 jne 0x1031d189 */
  if (!C.zf) goto L_1031d189;
  /* 1031d164 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031d167 mov edx, dword ptr [0x1033f848] */
  EDX = (r32((uint32_t)(0x1033f848)));
  /* 1031d16d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1031d170 push eax */
  push32((uint32_t)(EAX));
  /* 1031d171 call 0x1031cfa0 */
  push32(0x1031d176u); f_1031cfa0();
  /* 1031d176 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d179 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d17c je 0x1031d187 */
  if (C.zf) goto L_1031d187;
  /* 1031d17e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031d181 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d184 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1031d187:;
  /* 1031d187 jmp 0x1031d1c5 */
  goto L_1031d1c5;
L_1031d189:;
  /* 1031d189 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d18d jne 0x1031d1c5 */
  if (!C.zf) goto L_1031d1c5;
  /* 1031d18f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031d192 mov eax, dword ptr [0x1033f848] */
  EAX = (r32((uint32_t)(0x1033f848)));
  /* 1031d197 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1031d19a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1031d19d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1031d1a0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1031d1a2 je 0x1031d1c5 */
  if (C.zf) goto L_1031d1c5;
  /* 1031d1a4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031d1a7 mov ecx, dword ptr [0x1033f848] */
  ECX = (r32((uint32_t)(0x1033f848)));
  /* 1031d1ad mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1031d1b0 push edx */
  push32((uint32_t)(EDX));
  /* 1031d1b1 call 0x1031cfa0 */
  push32(0x1031d1b6u); f_1031cfa0();
  /* 1031d1b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d1b9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d1bc jne 0x1031d1c5 */
  if (!C.zf) goto L_1031d1c5;
  /* 1031d1be mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_1031d1c5:;
  /* 1031d1c5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031d1c8 mov ecx, dword ptr [0x1033f848] */
  ECX = (r32((uint32_t)(0x1033f848)));
  /* 1031d1ce mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1031d1d1 push edx */
  push32((uint32_t)(EDX));
  /* 1031d1d2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031d1d5 push eax */
  push32((uint32_t)(EAX));
  /* 1031d1d6 call 0x1031c580 */
  push32(0x1031d1dbu); f_1031c580();
  /* 1031d1db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1031d1de:;
  /* 1031d1de jmp 0x1031d0e7 */
  goto L_1031d0e7;
L_1031d1e3:;
  /* 1031d1e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031d1e5 call 0x10317160 */
  push32(0x1031d1eau); f_10317160();
  /* 1031d1ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d1ed cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d1f1 jne 0x1031d1f8 */
  if (!C.zf) goto L_1031d1f8;
  /* 1031d1f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031d1f6 jmp 0x1031d1fb */
  goto L_1031d1fb;
L_1031d1f8:;
  /* 1031d1f8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1031d1fb:;
  /* 1031d1fb mov esp, ebp */
  ESP = (EBP);
  /* 1031d1fd pop ebp */
  EBP = (pop32());
  /* 1031d1fe ret  */
  ESPCHK(0x1031d0c0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x1031d200 (15 bytes, 7 insns) */
void f_1031d200(void) {
  FTRACE(0x1031d200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031d200 push ebp */
  push32((uint32_t)(EBP));
  /* 1031d201 mov ebp, esp */
  EBP = (ESP);
  /* 1031d203 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031d205 call 0x10312630 */
  push32(0x1031d20au); f_10312630();
  /* 1031d20a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d20d pop ebp */
  EBP = (pop32());
  /* 1031d20e ret  */
  ESPCHK(0x1031d200u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d210 @ 0x1031d210 (1007 bytes, 269 insns) */
void f_1031d210(void) {
  FTRACE(0x1031d210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031d210 push ebp */
  push32((uint32_t)(EBP));
  /* 1031d211 mov ebp, esp */
  EBP = (ESP);
  /* 1031d213 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031d219 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d21d jl 0x1031d225 */
  if ((C.sf!=C.of)) goto L_1031d225;
  /* 1031d21f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d223 jle 0x1031d22c */
  if ((C.zf||C.sf!=C.of)) goto L_1031d22c;
L_1031d225:;
  /* 1031d225 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031d227 jmp 0x1031d5fb */
  goto L_1031d5fb;
L_1031d22c:;
  /* 1031d22c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1031d22e call 0x103170c0 */
  push32(0x1031d233u); f_103170c0();
  /* 1031d233 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d236 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1031d23d mov eax, dword ptr [0x1033f834] */
  EAX = (r32((uint32_t)(0x1033f834)));
  /* 1031d242 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d245 mov dword ptr [0x1033f834], eax */
  w32((uint32_t)(0x1033f834), (EAX));
L_1031d24a:;
  /* 1031d24a cmp dword ptr [0x1033f844], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f844))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d251 je 0x1031d25d */
  if (C.zf) goto L_1031d25d;
  /* 1031d253 push 1 */
  push32((uint32_t)(0x1u));
  /* 1031d255 call dword ptr [0x10342290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342290))), 0x1031d25bu);
  /* 1031d25b jmp 0x1031d24a */
  goto L_1031d24a;
L_1031d25d:;
  /* 1031d25d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d261 je 0x1031d2a1 */
  if (C.zf) goto L_1031d2a1;
  /* 1031d263 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d267 je 0x1031d281 */
  if (C.zf) goto L_1031d281;
  /* 1031d269 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031d26c push ecx */
  push32((uint32_t)(ECX));
  /* 1031d26d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031d270 push edx */
  push32((uint32_t)(EDX));
  /* 1031d271 call 0x1031d600 */
  push32(0x1031d276u); f_1031d600();
  /* 1031d276 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d279 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1031d27f jmp 0x1031d293 */
  goto L_1031d293;
L_1031d281:;
  /* 1031d281 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031d284 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031d287 mov ecx, dword ptr [eax + 0x1033e4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1033e4dc)));
  /* 1031d28d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_1031d293:;
  /* 1031d293 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1031d299 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1031d29c jmp 0x1031d5db */
  goto L_1031d5db;
L_1031d2a1:;
  /* 1031d2a1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 1031d2a8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1031d2af cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d2b3 je 0x1031d5d3 */
  if (C.zf) goto L_1031d5d3;
  /* 1031d2b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031d2bc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1031d2bf cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d2c2 jne 0x1031d4e4 */
  if (!C.zf) goto L_1031d4e4;
  /* 1031d2c8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031d2cb movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1031d2cf cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d2d2 jne 0x1031d4e4 */
  if (!C.zf) goto L_1031d4e4;
  /* 1031d2d8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031d2db movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1031d2df cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d2e2 jne 0x1031d4e4 */
  if (!C.zf) goto L_1031d4e4;
  /* 1031d2e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031d2eb mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_1031d2f1:;
  /* 1031d2f1 push 0x1033b024 */
  push32((uint32_t)(0x1033b024u));
  /* 1031d2f6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1031d2fc push ecx */
  push32((uint32_t)(ECX));
  /* 1031d2fd call 0x1031f460 */
  push32(0x1031d302u); f_1031f460();
  /* 1031d302 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d305 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1031d30b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d312 je 0x1031d33d */
  if (C.zf) goto L_1031d33d;
  /* 1031d314 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1031d31a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031d320 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 1031d326 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d32d je 0x1031d33d */
  if (C.zf) goto L_1031d33d;
  /* 1031d32f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1031d335 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1031d338 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d33b jne 0x1031d363 */
  if (!C.zf) goto L_1031d363;
L_1031d33d:;
  /* 1031d33d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d341 je 0x1031d35c */
  if (C.zf) goto L_1031d35c;
  /* 1031d343 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1031d345 call 0x10317160 */
  push32(0x1031d34au); f_10317160();
  /* 1031d34a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d34d mov edx, dword ptr [0x1033f834] */
  EDX = (r32((uint32_t)(0x1033f834)));
  /* 1031d353 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031d356 mov dword ptr [0x1033f834], edx */
  w32((uint32_t)(0x1033f834), (EDX));
L_1031d35c:;
  /* 1031d35c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031d35e jmp 0x1031d5fb */
  goto L_1031d5fb;
L_1031d363:;
  /* 1031d363 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1031d36a jmp 0x1031d375 */
  goto L_1031d375;
L_1031d36c:;
  /* 1031d36c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1031d36f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d372 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1031d375:;
  /* 1031d375 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d379 jg 0x1031d3c3 */
  if ((!C.zf&&C.sf==C.of)) goto L_1031d3c3;
  /* 1031d37b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1031d381 push ecx */
  push32((uint32_t)(ECX));
  /* 1031d382 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1031d388 push edx */
  push32((uint32_t)(EDX));
  /* 1031d389 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1031d38c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031d38f mov ecx, dword ptr [eax + 0x1033e4d8] */
  ECX = (r32((uint32_t)(EAX + 0x1033e4d8)));
  /* 1031d395 push ecx */
  push32((uint32_t)(ECX));
  /* 1031d396 call 0x1031f420 */
  push32(0x1031d39bu); f_1031f420();
  /* 1031d39b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d39e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031d3a0 jne 0x1031d3c1 */
  if (!C.zf) goto L_1031d3c1;
  /* 1031d3a2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1031d3a5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031d3a8 mov eax, dword ptr [edx + 0x1033e4d8] */
  EAX = (r32((uint32_t)(EDX + 0x1033e4d8)));
  /* 1031d3ae push eax */
  push32((uint32_t)(EAX));
  /* 1031d3af call 0x103164f0 */
  push32(0x1031d3b4u); f_103164f0();
  /* 1031d3b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d3b7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d3bd jne 0x1031d3c1 */
  if (!C.zf) goto L_1031d3c1;
  /* 1031d3bf jmp 0x1031d3c3 */
  goto L_1031d3c3;
L_1031d3c1:;
  /* 1031d3c1 jmp 0x1031d36c */
  goto L_1031d36c;
L_1031d3c3:;
  /* 1031d3c3 push 0x1033b020 */
  push32((uint32_t)(0x1033b020u));
  /* 1031d3c8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1031d3ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d3d1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 1031d3d7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1031d3dd push edx */
  push32((uint32_t)(EDX));
  /* 1031d3de call 0x1031f3e0 */
  push32(0x1031d3e3u); f_1031f3e0();
  /* 1031d3e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d3e6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1031d3ec cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d3f3 jne 0x1031d429 */
  if (!C.zf) goto L_1031d429;
  /* 1031d3f5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1031d3fb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1031d3fe cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d401 je 0x1031d429 */
  if (C.zf) goto L_1031d429;
  /* 1031d403 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d407 je 0x1031d422 */
  if (C.zf) goto L_1031d422;
  /* 1031d409 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1031d40b call 0x10317160 */
  push32(0x1031d410u); f_10317160();
  /* 1031d410 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d413 mov edx, dword ptr [0x1033f834] */
  EDX = (r32((uint32_t)(0x1033f834)));
  /* 1031d419 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031d41c mov dword ptr [0x1033f834], edx */
  w32((uint32_t)(0x1033f834), (EDX));
L_1031d422:;
  /* 1031d422 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031d424 jmp 0x1031d5fb */
  goto L_1031d5fb;
L_1031d429:;
  /* 1031d429 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d42d jg 0x1031d47a */
  if ((!C.zf&&C.sf==C.of)) goto L_1031d47a;
  /* 1031d42f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1031d435 push eax */
  push32((uint32_t)(EAX));
  /* 1031d436 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1031d43c push ecx */
  push32((uint32_t)(ECX));
  /* 1031d43d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1031d443 push edx */
  push32((uint32_t)(EDX));
  /* 1031d444 call 0x10316ee0 */
  push32(0x1031d449u); f_10316ee0();
  /* 1031d449 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d44c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1031d452 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1031d45a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 1031d460 push ecx */
  push32((uint32_t)(ECX));
  /* 1031d461 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1031d464 push edx */
  push32((uint32_t)(EDX));
  /* 1031d465 call 0x1031d600 */
  push32(0x1031d46au); f_1031d600();
  /* 1031d46a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d46d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031d46f je 0x1031d47a */
  if (C.zf) goto L_1031d47a;
  /* 1031d471 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031d474 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d477 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1031d47a:;
  /* 1031d47a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1031d480 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d486 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1031d48c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1031d492 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1031d495 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031d497 je 0x1031d4a8 */
  if (C.zf) goto L_1031d4a8;
  /* 1031d499 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1031d49f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d4a2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_1031d4a8:;
  /* 1031d4a8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1031d4ae movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1031d4b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031d4b3 jne 0x1031d2f1 */
  if (!C.zf) goto L_1031d2f1;
  /* 1031d4b9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d4bd je 0x1031d4cc */
  if (C.zf) goto L_1031d4cc;
  /* 1031d4bf call 0x1031d7a0 */
  push32(0x1031d4c4u); f_1031d7a0();
  /* 1031d4c4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 1031d4ca jmp 0x1031d4d6 */
  goto L_1031d4d6;
L_1031d4cc:;
  /* 1031d4cc mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_1031d4d6:;
  /* 1031d4d6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 1031d4dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1031d4df jmp 0x1031d5d1 */
  goto L_1031d5d1;
L_1031d4e4:;
  /* 1031d4e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031d4e7 push edx */
  push32((uint32_t)(EDX));
  /* 1031d4e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031d4ea push 0 */
  push32((uint32_t)(0x0u));
  /* 1031d4ec lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1031d4f2 push eax */
  push32((uint32_t)(EAX));
  /* 1031d4f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031d4f6 push ecx */
  push32((uint32_t)(ECX));
  /* 1031d4f7 call 0x1031d8a0 */
  push32(0x1031d4fcu); f_1031d8a0();
  /* 1031d4fc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d4ff mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1031d502 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d506 je 0x1031d5d1 */
  if (C.zf) goto L_1031d5d1;
  /* 1031d50c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1031d513 jmp 0x1031d51e */
  goto L_1031d51e;
L_1031d515:;
  /* 1031d515 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1031d518 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d51b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1031d51e:;
  /* 1031d51e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d522 jg 0x1031d580 */
  if ((!C.zf&&C.sf==C.of)) goto L_1031d580;
  /* 1031d524 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d528 je 0x1031d57e */
  if (C.zf) goto L_1031d57e;
  /* 1031d52a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1031d52d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031d530 mov ecx, dword ptr [eax + 0x1033e4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1033e4dc)));
  /* 1031d536 push ecx */
  push32((uint32_t)(ECX));
  /* 1031d537 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1031d53d push edx */
  push32((uint32_t)(EDX));
  /* 1031d53e call 0x1031f350 */
  push32(0x1031d543u); f_1031f350();
  /* 1031d543 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d546 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031d548 je 0x1031d575 */
  if (C.zf) goto L_1031d575;
  /* 1031d54a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1031d550 push eax */
  push32((uint32_t)(EAX));
  /* 1031d551 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1031d554 push ecx */
  push32((uint32_t)(ECX));
  /* 1031d555 call 0x1031d600 */
  push32(0x1031d55au); f_1031d600();
  /* 1031d55a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d55d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031d55f je 0x1031d56c */
  if (C.zf) goto L_1031d56c;
  /* 1031d561 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031d564 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d567 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1031d56a jmp 0x1031d573 */
  goto L_1031d573;
L_1031d56c:;
  /* 1031d56c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_1031d573:;
  /* 1031d573 jmp 0x1031d57e */
  goto L_1031d57e;
L_1031d575:;
  /* 1031d575 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031d578 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d57b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1031d57e:;
  /* 1031d57e jmp 0x1031d515 */
  goto L_1031d515;
L_1031d580:;
  /* 1031d580 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d584 je 0x1031d5ab */
  if (C.zf) goto L_1031d5ab;
  /* 1031d586 call 0x1031d7a0 */
  push32(0x1031d58bu); f_1031d7a0();
  /* 1031d58b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1031d58e push 2 */
  push32((uint32_t)(0x2u));
  /* 1031d590 mov ecx, dword ptr [0x1033e4dc] */
  ECX = (r32((uint32_t)(0x1033e4dc)));
  /* 1031d596 push ecx */
  push32((uint32_t)(ECX));
  /* 1031d597 call 0x10314150 */
  push32(0x1031d59cu); f_10314150();
  /* 1031d59c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d59f mov dword ptr [0x1033e4dc], 0 */
  w32((uint32_t)(0x1033e4dc), (0x0u));
  /* 1031d5a9 jmp 0x1031d5d1 */
  goto L_1031d5d1;
L_1031d5ab:;
  /* 1031d5ab cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d5af je 0x1031d5be */
  if (C.zf) goto L_1031d5be;
  /* 1031d5b1 call 0x1031d7a0 */
  push32(0x1031d5b6u); f_1031d7a0();
  /* 1031d5b6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1031d5bc jmp 0x1031d5c8 */
  goto L_1031d5c8;
L_1031d5be:;
  /* 1031d5be mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_1031d5c8:;
  /* 1031d5c8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 1031d5ce mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1031d5d1:;
  /* 1031d5d1 jmp 0x1031d5db */
  goto L_1031d5db;
L_1031d5d3:;
  /* 1031d5d3 call 0x1031d7a0 */
  push32(0x1031d5d8u); f_1031d7a0();
  /* 1031d5d8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1031d5db:;
  /* 1031d5db cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d5df je 0x1031d5f8 */
  if (C.zf) goto L_1031d5f8;
  /* 1031d5e1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1031d5e3 call 0x10317160 */
  push32(0x1031d5e8u); f_10317160();
  /* 1031d5e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d5eb mov eax, dword ptr [0x1033f834] */
  EAX = (r32((uint32_t)(0x1033f834)));
  /* 1031d5f0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031d5f3 mov dword ptr [0x1033f834], eax */
  w32((uint32_t)(0x1033f834), (EAX));
L_1031d5f8:;
  /* 1031d5f8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1031d5fb:;
  /* 1031d5fb mov esp, ebp */
  ESP = (EBP);
  /* 1031d5fd pop ebp */
  EBP = (pop32());
  /* 1031d5fe ret  */
  ESPCHK(0x1031d210u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d600 @ 0x1031d600 (403 bytes, 117 insns) */
void f_1031d600(void) {
  FTRACE(0x1031d600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031d600 push ebp */
  push32((uint32_t)(EBP));
  /* 1031d601 mov ebp, esp */
  EBP = (ESP);
  /* 1031d603 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031d609 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031d60c push eax */
  push32((uint32_t)(EAX));
  /* 1031d60d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 1031d613 push ecx */
  push32((uint32_t)(ECX));
  /* 1031d614 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 1031d61a push edx */
  push32((uint32_t)(EDX));
  /* 1031d61b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 1031d621 push eax */
  push32((uint32_t)(EAX));
  /* 1031d622 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031d625 push ecx */
  push32((uint32_t)(ECX));
  /* 1031d626 call 0x1031d8a0 */
  push32(0x1031d62bu); f_1031d8a0();
  /* 1031d62b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d62e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031d630 jne 0x1031d639 */
  if (!C.zf) goto L_1031d639;
  /* 1031d632 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031d634 jmp 0x1031d78f */
  goto L_1031d78f;
L_1031d639:;
  /* 1031d639 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1031d63e push 0x1033b028 */
  push32((uint32_t)(0x1033b028u));
  /* 1031d643 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031d645 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 1031d64b push edx */
  push32((uint32_t)(EDX));
  /* 1031d64c call 0x103164f0 */
  push32(0x1031d651u); f_103164f0();
  /* 1031d651 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d654 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d657 push eax */
  push32((uint32_t)(EAX));
  /* 1031d658 call 0x103136c0 */
  push32(0x1031d65du); f_103136c0();
  /* 1031d65d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d660 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1031d663 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d667 jne 0x1031d670 */
  if (!C.zf) goto L_1031d670;
  /* 1031d669 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031d66b jmp 0x1031d78f */
  goto L_1031d78f;
L_1031d670:;
  /* 1031d670 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031d673 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031d676 mov ecx, dword ptr [eax + 0x1033e4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1033e4dc)));
  /* 1031d67c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031d67f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031d682 mov eax, dword ptr [edx*4 + 0x1033f6b0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1033f6b0)));
  /* 1031d689 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1031d68c push 6 */
  push32((uint32_t)(0x6u));
  /* 1031d68e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031d691 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031d694 add ecx, 0x1033f700 */
  { uint32_t _a=(ECX),_b=(0x1033f700u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d69a push ecx */
  push32((uint32_t)(ECX));
  /* 1031d69b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1031d69e push edx */
  push32((uint32_t)(EDX));
  /* 1031d69f call 0x10319fa0 */
  push32(0x1031d6a4u); f_10319fa0();
  /* 1031d6a4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d6a7 mov eax, dword ptr [0x1033f6c8] */
  EAX = (r32((uint32_t)(0x1033f6c8)));
  /* 1031d6ac mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1031d6af lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 1031d6b5 push ecx */
  push32((uint32_t)(ECX));
  /* 1031d6b6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031d6b9 push edx */
  push32((uint32_t)(EDX));
  /* 1031d6ba call 0x10316670 */
  push32(0x1031d6bfu); f_10316670();
  /* 1031d6bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d6c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031d6c5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031d6c8 mov dword ptr [ecx + 0x1033e4dc], eax */
  w32((uint32_t)(ECX + 0x1033e4dc), (EAX));
  /* 1031d6ce mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1031d6d4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1031d6da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031d6dd mov dword ptr [eax*4 + 0x1033f6b0], edx */
  w32((uint32_t)(EAX*4 + 0x1033f6b0), (EDX));
  /* 1031d6e4 push 6 */
  push32((uint32_t)(0x6u));
  /* 1031d6e6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 1031d6ec push ecx */
  push32((uint32_t)(ECX));
  /* 1031d6ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031d6f0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031d6f3 add edx, 0x1033f700 */
  { uint32_t _a=(EDX),_b=(0x1033f700u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d6f9 push edx */
  push32((uint32_t)(EDX));
  /* 1031d6fa call 0x10319fa0 */
  push32(0x1031d6ffu); f_10319fa0();
  /* 1031d6ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d702 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d706 jne 0x1031d713 */
  if (!C.zf) goto L_1031d713;
  /* 1031d708 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1031d70e mov dword ptr [0x1033f6c8], eax */
  w32((uint32_t)(0x1033f6c8), (EAX));
L_1031d713:;
  /* 1031d713 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d717 jne 0x1031d725 */
  if (!C.zf) goto L_1031d725;
  /* 1031d719 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1031d71f mov dword ptr [0x1033f6cc], ecx */
  w32((uint32_t)(0x1033f6cc), (ECX));
L_1031d725:;
  /* 1031d725 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031d728 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031d72b call dword ptr [edx + 0x1033e4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x1033e4e0))), 0x1031d731u);
  /* 1031d731 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031d733 je 0x1031d76c */
  if (C.zf) goto L_1031d76c;
  /* 1031d735 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031d738 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031d73b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031d73e mov dword ptr [eax + 0x1033e4dc], ecx */
  w32((uint32_t)(EAX + 0x1033e4dc), (ECX));
  /* 1031d744 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031d746 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031d749 push edx */
  push32((uint32_t)(EDX));
  /* 1031d74a call 0x10314150 */
  push32(0x1031d74fu); f_10314150();
  /* 1031d74f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d752 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031d755 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031d758 mov dword ptr [eax*4 + 0x1033f6b0], ecx */
  w32((uint32_t)(EAX*4 + 0x1033f6b0), (ECX));
  /* 1031d75f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1031d762 mov dword ptr [0x1033f6c8], edx */
  w32((uint32_t)(0x1033f6c8), (EDX));
  /* 1031d768 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031d76a jmp 0x1031d78f */
  goto L_1031d78f;
L_1031d76c:;
  /* 1031d76c cmp dword ptr [ebp - 0xc], 0x1033e3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1033e3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d773 je 0x1031d783 */
  if (C.zf) goto L_1031d783;
  /* 1031d775 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031d777 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031d77a push eax */
  push32((uint32_t)(EAX));
  /* 1031d77b call 0x10314150 */
  push32(0x1031d780u); f_10314150();
  /* 1031d780 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1031d783:;
  /* 1031d783 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031d786 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031d789 mov eax, dword ptr [ecx + 0x1033e4dc] */
  EAX = (r32((uint32_t)(ECX + 0x1033e4dc)));
L_1031d78f:;
  /* 1031d78f mov esp, ebp */
  ESP = (EBP);
  /* 1031d791 pop ebp */
  EBP = (pop32());
  /* 1031d792 ret  */
  ESPCHK(0x1031d600u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d7a0 @ 0x1031d7a0 (256 bytes, 72 insns) */
void f_1031d7a0(void) {
  FTRACE(0x1031d7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031d7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1031d7a1 mov ebp, esp */
  EBP = (ESP);
  /* 1031d7a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031d7a6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1031d7ad cmp dword ptr [0x1033e4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033e4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d7b4 jne 0x1031d7d4 */
  if (!C.zf) goto L_1031d7d4;
  /* 1031d7b6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1031d7bb push 0x1033b028 */
  push32((uint32_t)(0x1033b028u));
  /* 1031d7c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031d7c2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 1031d7c7 call 0x103136c0 */
  push32(0x1031d7ccu); f_103136c0();
  /* 1031d7cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d7cf mov dword ptr [0x1033e4dc], eax */
  w32((uint32_t)(0x1033e4dc), (EAX));
L_1031d7d4:;
  /* 1031d7d4 mov eax, dword ptr [0x1033e4dc] */
  EAX = (r32((uint32_t)(0x1033e4dc)));
  /* 1031d7d9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1031d7dc mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1031d7e3 jmp 0x1031d7ee */
  goto L_1031d7ee;
L_1031d7e5:;
  /* 1031d7e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031d7e8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d7eb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1031d7ee:;
  /* 1031d7ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031d7f1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031d7f4 mov eax, dword ptr [edx + 0x1033e4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1033e4dc)));
  /* 1031d7fa push eax */
  push32((uint32_t)(EAX));
  /* 1031d7fb push 0x1033b034 */
  push32((uint32_t)(0x1033b034u));
  /* 1031d800 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031d803 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031d806 mov edx, dword ptr [ecx + 0x1033e4d8] */
  EDX = (r32((uint32_t)(ECX + 0x1033e4d8)));
  /* 1031d80c push edx */
  push32((uint32_t)(EDX));
  /* 1031d80d push 3 */
  push32((uint32_t)(0x3u));
  /* 1031d80f mov eax, dword ptr [0x1033e4dc] */
  EAX = (r32((uint32_t)(0x1033e4dc)));
  /* 1031d814 push eax */
  push32((uint32_t)(EAX));
  /* 1031d815 call 0x1031da40 */
  push32(0x1031d81au); f_1031da40();
  /* 1031d81a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d81d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d821 jge 0x1031d869 */
  if ((C.sf==C.of)) goto L_1031d869;
  /* 1031d823 push 0x1033b020 */
  push32((uint32_t)(0x1033b020u));
  /* 1031d828 mov ecx, dword ptr [0x1033e4dc] */
  ECX = (r32((uint32_t)(0x1033e4dc)));
  /* 1031d82e push ecx */
  push32((uint32_t)(ECX));
  /* 1031d82f call 0x10316680 */
  push32(0x1031d834u); f_10316680();
  /* 1031d834 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d837 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031d83a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d83d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031d840 mov eax, dword ptr [edx + 0x1033e4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1033e4dc)));
  /* 1031d846 push eax */
  push32((uint32_t)(EAX));
  /* 1031d847 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031d84a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031d84d mov edx, dword ptr [ecx + 0x1033e4dc] */
  EDX = (r32((uint32_t)(ECX + 0x1033e4dc)));
  /* 1031d853 push edx */
  push32((uint32_t)(EDX));
  /* 1031d854 call 0x1031f350 */
  push32(0x1031d859u); f_1031f350();
  /* 1031d859 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d85c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031d85e je 0x1031d867 */
  if (C.zf) goto L_1031d867;
  /* 1031d860 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1031d867:;
  /* 1031d867 jmp 0x1031d897 */
  goto L_1031d897;
L_1031d869:;
  /* 1031d869 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d86d jne 0x1031d876 */
  if (!C.zf) goto L_1031d876;
  /* 1031d86f mov eax, dword ptr [0x1033e4dc] */
  EAX = (r32((uint32_t)(0x1033e4dc)));
  /* 1031d874 jmp 0x1031d89c */
  goto L_1031d89c;
L_1031d876:;
  /* 1031d876 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031d878 mov eax, dword ptr [0x1033e4dc] */
  EAX = (r32((uint32_t)(0x1033e4dc)));
  /* 1031d87d push eax */
  push32((uint32_t)(EAX));
  /* 1031d87e call 0x10314150 */
  push32(0x1031d883u); f_10314150();
  /* 1031d883 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d886 mov dword ptr [0x1033e4dc], 0 */
  w32((uint32_t)(0x1033e4dc), (0x0u));
  /* 1031d890 mov eax, dword ptr [0x1033e4f4] */
  EAX = (r32((uint32_t)(0x1033e4f4)));
  /* 1031d895 jmp 0x1031d89c */
  goto L_1031d89c;
L_1031d897:;
  /* 1031d897 jmp 0x1031d7e5 */
  goto L_1031d7e5;
L_1031d89c:;
  /* 1031d89c mov esp, ebp */
  ESP = (EBP);
  /* 1031d89e pop ebp */
  EBP = (pop32());
  /* 1031d89f ret  */
  ESPCHK(0x1031d7a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8a0 @ 0x1031d8a0 (388 bytes, 115 insns) */
void f_1031d8a0(void) {
  FTRACE(0x1031d8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031d8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1031d8a1 mov ebp, esp */
  EBP = (ESP);
  /* 1031d8a3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031d8a9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d8ad jne 0x1031d8b6 */
  if (!C.zf) goto L_1031d8b6;
  /* 1031d8af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031d8b1 jmp 0x1031da20 */
  goto L_1031da20;
L_1031d8b6:;
  /* 1031d8b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031d8b9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1031d8bc cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d8bf jne 0x1031d910 */
  if (!C.zf) goto L_1031d910;
  /* 1031d8c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031d8c4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1031d8c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031d8ca jne 0x1031d910 */
  if (!C.zf) goto L_1031d910;
  /* 1031d8cc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031d8cf mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 1031d8d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031d8d5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 1031d8d9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d8dd je 0x1031d8f9 */
  if (C.zf) goto L_1031d8f9;
  /* 1031d8df mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1031d8e2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 1031d8e7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1031d8ea mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 1031d8f0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1031d8f3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_1031d8f9:;
  /* 1031d8f9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d8fd je 0x1031d908 */
  if (C.zf) goto L_1031d908;
  /* 1031d8ff mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1031d902 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1031d908:;
  /* 1031d908 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031d90b jmp 0x1031da20 */
  goto L_1031da20;
L_1031d910:;
  /* 1031d910 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031d913 push ecx */
  push32((uint32_t)(ECX));
  /* 1031d914 push 0x1033e450 */
  push32((uint32_t)(0x1033e450u));
  /* 1031d919 call 0x1031f350 */
  push32(0x1031d91eu); f_1031f350();
  /* 1031d91e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d921 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031d923 je 0x1031d9d8 */
  if (C.zf) goto L_1031d9d8;
  /* 1031d929 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031d92c push edx */
  push32((uint32_t)(EDX));
  /* 1031d92d push 0x1033e3cc */
  push32((uint32_t)(0x1033e3ccu));
  /* 1031d932 call 0x1031f350 */
  push32(0x1031d937u); f_1031f350();
  /* 1031d937 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d93a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031d93c je 0x1031d9d8 */
  if (C.zf) goto L_1031d9d8;
  /* 1031d942 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031d945 push eax */
  push32((uint32_t)(EAX));
  /* 1031d946 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 1031d94c push ecx */
  push32((uint32_t)(ECX));
  /* 1031d94d call 0x1031da90 */
  push32(0x1031d952u); f_1031da90();
  /* 1031d952 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d955 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031d957 je 0x1031d960 */
  if (C.zf) goto L_1031d960;
  /* 1031d959 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031d95b jmp 0x1031da20 */
  goto L_1031da20;
L_1031d960:;
  /* 1031d960 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1031d966 push edx */
  push32((uint32_t)(EDX));
  /* 1031d967 push 0x1033f6d8 */
  push32((uint32_t)(0x1033f6d8u));
  /* 1031d96c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 1031d972 push eax */
  push32((uint32_t)(EAX));
  /* 1031d973 call 0x1031f4a0 */
  push32(0x1031d978u); f_1031f4a0();
  /* 1031d978 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d97b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031d97d jne 0x1031d986 */
  if (!C.zf) goto L_1031d986;
  /* 1031d97f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031d981 jmp 0x1031da20 */
  goto L_1031da20;
L_1031d986:;
  /* 1031d986 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1031d988 mov cx, word ptr [0x1033f6dc] */
  CX = (r16((uint32_t)(0x1033f6dc)));
  /* 1031d98f mov dword ptr [0x1033f6e0], ecx */
  w32((uint32_t)(0x1033f6e0), (ECX));
  /* 1031d995 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1031d99b push edx */
  push32((uint32_t)(EDX));
  /* 1031d99c push 0x1033e450 */
  push32((uint32_t)(0x1033e450u));
  /* 1031d9a1 call 0x1031dbf0 */
  push32(0x1031d9a6u); f_1031dbf0();
  /* 1031d9a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d9a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031d9ac movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1031d9af test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1031d9b1 je 0x1031d9c6 */
  if (C.zf) goto L_1031d9c6;
  /* 1031d9b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031d9b6 push edx */
  push32((uint32_t)(EDX));
  /* 1031d9b7 push 0x1033e3cc */
  push32((uint32_t)(0x1033e3ccu));
  /* 1031d9bc call 0x10316670 */
  push32(0x1031d9c1u); f_10316670();
  /* 1031d9c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031d9c4 jmp 0x1031d9d8 */
  goto L_1031d9d8;
L_1031d9c6:;
  /* 1031d9c6 push 0x1033e450 */
  push32((uint32_t)(0x1033e450u));
  /* 1031d9cb push 0x1033e3cc */
  push32((uint32_t)(0x1033e3ccu));
  /* 1031d9d0 call 0x10316670 */
  push32(0x1031d9d5u); f_10316670();
  /* 1031d9d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1031d9d8:;
  /* 1031d9d8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d9dc je 0x1031d9f1 */
  if (C.zf) goto L_1031d9f1;
  /* 1031d9de push 6 */
  push32((uint32_t)(0x6u));
  /* 1031d9e0 push 0x1033f6d8 */
  push32((uint32_t)(0x1033f6d8u));
  /* 1031d9e5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1031d9e8 push eax */
  push32((uint32_t)(EAX));
  /* 1031d9e9 call 0x10319fa0 */
  push32(0x1031d9eeu); f_10319fa0();
  /* 1031d9ee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1031d9f1:;
  /* 1031d9f1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031d9f5 je 0x1031da0a */
  if (C.zf) goto L_1031da0a;
  /* 1031d9f7 push 4 */
  push32((uint32_t)(0x4u));
  /* 1031d9f9 push 0x1033f6e0 */
  push32((uint32_t)(0x1033f6e0u));
  /* 1031d9fe mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1031da01 push ecx */
  push32((uint32_t)(ECX));
  /* 1031da02 call 0x10319fa0 */
  push32(0x1031da07u); f_10319fa0();
  /* 1031da07 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1031da0a:;
  /* 1031da0a push 0x1033e450 */
  push32((uint32_t)(0x1033e450u));
  /* 1031da0f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031da12 push edx */
  push32((uint32_t)(EDX));
  /* 1031da13 call 0x10316670 */
  push32(0x1031da18u); f_10316670();
  /* 1031da18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031da1b mov eax, 0x1033e450 */
  EAX = (0x1033e450u);
L_1031da20:;
  /* 1031da20 mov esp, ebp */
  ESP = (EBP);
  /* 1031da22 pop ebp */
  EBP = (pop32());
  /* 1031da23 ret  */
  ESPCHK(0x1031d8a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da30 @ 0x1031da30 (7 bytes, 5 insns) */
void f_1031da30(void) {
  FTRACE(0x1031da30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031da30 push ebp */
  push32((uint32_t)(EBP));
  /* 1031da31 mov ebp, esp */
  EBP = (ESP);
  /* 1031da33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031da35 pop ebp */
  EBP = (pop32());
  /* 1031da36 ret  */
  ESPCHK(0x1031da30u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x1031da40 (79 bytes, 28 insns) */
void f_1031da40(void) {
  FTRACE(0x1031da40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031da40 push ebp */
  push32((uint32_t)(EBP));
  /* 1031da41 mov ebp, esp */
  EBP = (ESP);
  /* 1031da43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031da46 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1031da49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1031da4c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1031da53 jmp 0x1031da5e */
  goto L_1031da5e;
L_1031da55:;
  /* 1031da55 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031da58 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031da5b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1031da5e:;
  /* 1031da5e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031da61 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031da64 jge 0x1031da84 */
  if ((C.sf==C.of)) goto L_1031da84;
  /* 1031da66 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031da69 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031da6c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1031da6f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031da72 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1031da75 push edx */
  push32((uint32_t)(EDX));
  /* 1031da76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031da79 push eax */
  push32((uint32_t)(EAX));
  /* 1031da7a call 0x10316680 */
  push32(0x1031da7fu); f_10316680();
  /* 1031da7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031da82 jmp 0x1031da55 */
  goto L_1031da55;
L_1031da84:;
  /* 1031da84 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1031da8b mov esp, ebp */
  ESP = (EBP);
  /* 1031da8d pop ebp */
  EBP = (pop32());
  /* 1031da8e ret  */
  ESPCHK(0x1031da40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da90 @ 0x1031da90 (349 bytes, 122 insns) */
void f_1031da90(void) {
  FTRACE(0x1031da90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031da90 push ebp */
  push32((uint32_t)(EBP));
  /* 1031da91 mov ebp, esp */
  EBP = (ESP);
  /* 1031da93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031da96 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1031da9b push 0 */
  push32((uint32_t)(0x0u));
  /* 1031da9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031daa0 push eax */
  push32((uint32_t)(EAX));
  /* 1031daa1 call 0x10317430 */
  push32(0x1031daa6u); f_10317430();
  /* 1031daa6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031daa9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031daac movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1031daaf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1031dab1 jne 0x1031daba */
  if (!C.zf) goto L_1031daba;
  /* 1031dab3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031dab5 jmp 0x1031dbe9 */
  goto L_1031dbe9;
L_1031daba:;
  /* 1031daba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031dabd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1031dac0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031dac3 jne 0x1031daf0 */
  if (!C.zf) goto L_1031daf0;
  /* 1031dac5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031dac8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1031dacc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031dace je 0x1031daf0 */
  if (C.zf) goto L_1031daf0;
  /* 1031dad0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031dad3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031dad6 push ecx */
  push32((uint32_t)(ECX));
  /* 1031dad7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031dada add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031dae0 push edx */
  push32((uint32_t)(EDX));
  /* 1031dae1 call 0x10316670 */
  push32(0x1031dae6u); f_10316670();
  /* 1031dae6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031dae9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031daeb jmp 0x1031dbe9 */
  goto L_1031dbe9;
L_1031daf0:;
  /* 1031daf0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1031daf7 jmp 0x1031db02 */
  goto L_1031db02;
L_1031daf9:;
  /* 1031daf9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031dafc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031daff mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1031db02:;
  /* 1031db02 push 0x1033b038 */
  push32((uint32_t)(0x1033b038u));
  /* 1031db07 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031db0a push ecx */
  push32((uint32_t)(ECX));
  /* 1031db0b call 0x1031f3e0 */
  push32(0x1031db10u); f_1031f3e0();
  /* 1031db10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031db13 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1031db16 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031db1a jne 0x1031db24 */
  if (!C.zf) goto L_1031db24;
  /* 1031db1c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1031db1f jmp 0x1031dbe9 */
  goto L_1031dbe9;
L_1031db24:;
  /* 1031db24 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031db27 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031db2a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1031db2c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1031db2f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031db33 jne 0x1031db5a */
  if (!C.zf) goto L_1031db5a;
  /* 1031db35 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031db39 jge 0x1031db5a */
  if ((C.sf==C.of)) goto L_1031db5a;
  /* 1031db3b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1031db3f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031db42 je 0x1031db5a */
  if (C.zf) goto L_1031db5a;
  /* 1031db44 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031db47 push edx */
  push32((uint32_t)(EDX));
  /* 1031db48 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031db4b push eax */
  push32((uint32_t)(EAX));
  /* 1031db4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031db4f push ecx */
  push32((uint32_t)(ECX));
  /* 1031db50 call 0x10316ee0 */
  push32(0x1031db55u); f_10316ee0();
  /* 1031db55 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031db58 jmp 0x1031dbc0 */
  goto L_1031dbc0;
L_1031db5a:;
  /* 1031db5a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031db5e jne 0x1031db88 */
  if (!C.zf) goto L_1031db88;
  /* 1031db60 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031db64 jge 0x1031db88 */
  if ((C.sf==C.of)) goto L_1031db88;
  /* 1031db66 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1031db6a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031db6d je 0x1031db88 */
  if (C.zf) goto L_1031db88;
  /* 1031db6f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031db72 push eax */
  push32((uint32_t)(EAX));
  /* 1031db73 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031db76 push ecx */
  push32((uint32_t)(ECX));
  /* 1031db77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031db7a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031db7d push edx */
  push32((uint32_t)(EDX));
  /* 1031db7e call 0x10316ee0 */
  push32(0x1031db83u); f_10316ee0();
  /* 1031db83 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031db86 jmp 0x1031dbc0 */
  goto L_1031dbc0;
L_1031db88:;
  /* 1031db88 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031db8c jne 0x1031dbbb */
  if (!C.zf) goto L_1031dbbb;
  /* 1031db8e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1031db92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031db94 je 0x1031db9f */
  if (C.zf) goto L_1031db9f;
  /* 1031db96 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1031db9a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031db9d jne 0x1031dbbb */
  if (!C.zf) goto L_1031dbbb;
L_1031db9f:;
  /* 1031db9f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031dba2 push edx */
  push32((uint32_t)(EDX));
  /* 1031dba3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031dba6 push eax */
  push32((uint32_t)(EAX));
  /* 1031dba7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031dbaa add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031dbb0 push ecx */
  push32((uint32_t)(ECX));
  /* 1031dbb1 call 0x10316ee0 */
  push32(0x1031dbb6u); f_10316ee0();
  /* 1031dbb6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031dbb9 jmp 0x1031dbc0 */
  goto L_1031dbc0;
L_1031dbbb:;
  /* 1031dbbb or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1031dbbe jmp 0x1031dbe9 */
  goto L_1031dbe9;
L_1031dbc0:;
  /* 1031dbc0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1031dbc4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031dbc7 jne 0x1031dbcb */
  if (!C.zf) goto L_1031dbcb;
  /* 1031dbc9 jmp 0x1031dbe7 */
  goto L_1031dbe7;
L_1031dbcb:;
  /* 1031dbcb movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1031dbcf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031dbd1 jne 0x1031dbd5 */
  if (!C.zf) goto L_1031dbd5;
  /* 1031dbd3 jmp 0x1031dbe7 */
  goto L_1031dbe7;
L_1031dbd5:;
  /* 1031dbd5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031dbd8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031dbdb lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 1031dbdf mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1031dbe2 jmp 0x1031daf9 */
  goto L_1031daf9;
L_1031dbe7:;
  /* 1031dbe7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1031dbe9:;
  /* 1031dbe9 mov esp, ebp */
  ESP = (EBP);
  /* 1031dbeb pop ebp */
  EBP = (pop32());
  /* 1031dbec ret  */
  ESPCHK(0x1031da90u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x1031dbf0 (101 bytes, 36 insns) */
void f_1031dbf0(void) {
  FTRACE(0x1031dbf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031dbf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1031dbf1 mov ebp, esp */
  EBP = (ESP);
  /* 1031dbf3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031dbf6 push eax */
  push32((uint32_t)(EAX));
  /* 1031dbf7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031dbfa push ecx */
  push32((uint32_t)(ECX));
  /* 1031dbfb call 0x10316670 */
  push32(0x1031dc00u); f_10316670();
  /* 1031dc00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031dc03 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031dc06 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 1031dc0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031dc0c je 0x1031dc28 */
  if (C.zf) goto L_1031dc28;
  /* 1031dc0e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031dc11 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031dc14 push ecx */
  push32((uint32_t)(ECX));
  /* 1031dc15 push 0x1033b040 */
  push32((uint32_t)(0x1033b040u));
  /* 1031dc1a push 2 */
  push32((uint32_t)(0x2u));
  /* 1031dc1c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031dc1f push edx */
  push32((uint32_t)(EDX));
  /* 1031dc20 call 0x1031da40 */
  push32(0x1031dc25u); f_1031da40();
  /* 1031dc25 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1031dc28:;
  /* 1031dc28 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031dc2b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 1031dc32 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1031dc34 je 0x1031dc53 */
  if (C.zf) goto L_1031dc53;
  /* 1031dc36 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031dc39 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031dc3f push edx */
  push32((uint32_t)(EDX));
  /* 1031dc40 push 0x1033b03c */
  push32((uint32_t)(0x1033b03cu));
  /* 1031dc45 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031dc47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031dc4a push eax */
  push32((uint32_t)(EAX));
  /* 1031dc4b call 0x1031da40 */
  push32(0x1031dc50u); f_1031da40();
  /* 1031dc50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1031dc53:;
  /* 1031dc53 pop ebp */
  EBP = (pop32());
  /* 1031dc54 ret  */
  ESPCHK(0x1031dbf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc60 @ 0x1031dc60 (130 bytes, 50 insns) */
void f_1031dc60(void) {
  FTRACE(0x1031dc60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031dc60 push ebp */
  push32((uint32_t)(EBP));
  /* 1031dc61 mov ebp, esp */
  EBP = (ESP);
  /* 1031dc63 push ecx */
  push32((uint32_t)(ECX));
  /* 1031dc64 push ebx */
  push32((uint32_t)(EBX));
  /* 1031dc65 push esi */
  push32((uint32_t)(ESI));
  /* 1031dc66 push edi */
  push32((uint32_t)(EDI));
  /* 1031dc67 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1031dc6e:;
  /* 1031dc6e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031dc72 jne 0x1031dc92 */
  if (!C.zf) goto L_1031dc92;
  /* 1031dc74 push 0x1033b050 */
  push32((uint32_t)(0x1033b050u));
  /* 1031dc79 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031dc7b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1031dc7d push 0x1033b044 */
  push32((uint32_t)(0x1033b044u));
  /* 1031dc82 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031dc84 call 0x10312780 */
  push32(0x1031dc89u); f_10312780();
  /* 1031dc89 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031dc8c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031dc8f jne 0x1031dc92 */
  if (!C.zf) goto L_1031dc92;
  /* 1031dc91 int3  */
  x86_unimpl("int3 @ 0x1031dc91");
L_1031dc92:;
  /* 1031dc92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031dc94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031dc96 jne 0x1031dc6e */
  if (!C.zf) goto L_1031dc6e;
  /* 1031dc98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031dc9b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1031dc9e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1031dca1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1031dca3 je 0x1031dcb1 */
  if (C.zf) goto L_1031dcb1;
  /* 1031dca5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031dca8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1031dcaf jmp 0x1031dcd8 */
  goto L_1031dcd8;
L_1031dcb1:;
  /* 1031dcb1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031dcb4 push ecx */
  push32((uint32_t)(ECX));
  /* 1031dcb5 call 0x1031c4d0 */
  push32(0x1031dcbau); f_1031c4d0();
  /* 1031dcba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031dcbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031dcc0 push edx */
  push32((uint32_t)(EDX));
  /* 1031dcc1 call 0x1031dcf0 */
  push32(0x1031dcc6u); f_1031dcf0();
  /* 1031dcc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031dcc9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1031dccc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031dccf push eax */
  push32((uint32_t)(EAX));
  /* 1031dcd0 call 0x1031c540 */
  push32(0x1031dcd5u); f_1031c540();
  /* 1031dcd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1031dcd8:;
  /* 1031dcd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031dcdb pop edi */
  EDI = (pop32());
  /* 1031dcdc pop esi */
  ESI = (pop32());
  /* 1031dcdd pop ebx */
  EBX = (pop32());
  /* 1031dcde mov esp, ebp */
  ESP = (EBP);
  /* 1031dce0 pop ebp */
  EBP = (pop32());
  /* 1031dce1 ret  */
  ESPCHK(0x1031dc60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dcf0 @ 0x1031dcf0 (190 bytes, 67 insns) */
void f_1031dcf0(void) {
  FTRACE(0x1031dcf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031dcf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1031dcf1 mov ebp, esp */
  EBP = (ESP);
  /* 1031dcf3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031dcf6 push ebx */
  push32((uint32_t)(EBX));
  /* 1031dcf7 push esi */
  push32((uint32_t)(ESI));
  /* 1031dcf8 push edi */
  push32((uint32_t)(EDI));
  /* 1031dcf9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1031dd00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031dd03 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1031dd06:;
  /* 1031dd06 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031dd0a jne 0x1031dd2a */
  if (!C.zf) goto L_1031dd2a;
  /* 1031dd0c push 0x1033aef0 */
  push32((uint32_t)(0x1033aef0u));
  /* 1031dd11 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031dd13 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 1031dd15 push 0x1033b044 */
  push32((uint32_t)(0x1033b044u));
  /* 1031dd1a push 2 */
  push32((uint32_t)(0x2u));
  /* 1031dd1c call 0x10312780 */
  push32(0x1031dd21u); f_10312780();
  /* 1031dd21 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031dd24 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031dd27 jne 0x1031dd2a */
  if (!C.zf) goto L_1031dd2a;
  /* 1031dd29 int3  */
  x86_unimpl("int3 @ 0x1031dd29");
L_1031dd2a:;
  /* 1031dd2a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1031dd2c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1031dd2e jne 0x1031dd06 */
  if (!C.zf) goto L_1031dd06;
  /* 1031dd30 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031dd33 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1031dd36 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1031dd3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031dd3d je 0x1031dd9a */
  if (C.zf) goto L_1031dd9a;
  /* 1031dd3f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031dd42 push ecx */
  push32((uint32_t)(ECX));
  /* 1031dd43 call 0x1031cff0 */
  push32(0x1031dd48u); f_1031cff0();
  /* 1031dd48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031dd4b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1031dd4e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031dd51 push edx */
  push32((uint32_t)(EDX));
  /* 1031dd52 call 0x10320370 */
  push32(0x1031dd57u); f_10320370();
  /* 1031dd57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031dd5a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031dd5d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1031dd60 push ecx */
  push32((uint32_t)(ECX));
  /* 1031dd61 call 0x10320240 */
  push32(0x1031dd66u); f_10320240();
  /* 1031dd66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031dd69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031dd6b jge 0x1031dd76 */
  if ((C.sf==C.of)) goto L_1031dd76;
  /* 1031dd6d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1031dd74 jmp 0x1031dd9a */
  goto L_1031dd9a;
L_1031dd76:;
  /* 1031dd76 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031dd79 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031dd7d je 0x1031dd9a */
  if (C.zf) goto L_1031dd9a;
  /* 1031dd7f push 2 */
  push32((uint32_t)(0x2u));
  /* 1031dd81 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031dd84 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1031dd87 push ecx */
  push32((uint32_t)(ECX));
  /* 1031dd88 call 0x10314150 */
  push32(0x1031dd8du); f_10314150();
  /* 1031dd8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031dd90 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031dd93 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_1031dd9a:;
  /* 1031dd9a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031dd9d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1031dda4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031dda7 pop edi */
  EDI = (pop32());
  /* 1031dda8 pop esi */
  ESI = (pop32());
  /* 1031dda9 pop ebx */
  EBX = (pop32());
  /* 1031ddaa mov esp, ebp */
  ESP = (EBP);
  /* 1031ddac pop ebp */
  EBP = (pop32());
  /* 1031ddad ret  */
  ESPCHK(0x1031dcf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ddb0 @ 0x1031ddb0 (210 bytes, 63 insns) */
void f_1031ddb0(void) {
  FTRACE(0x1031ddb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031ddb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1031ddb1 mov ebp, esp */
  EBP = (ESP);
  /* 1031ddb3 push ecx */
  push32((uint32_t)(ECX));
  /* 1031ddb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031ddb7 cmp eax, dword ptr [0x10340fdc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10340fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031ddbd jae 0x1031dde1 */
  if (!C.cf) goto L_1031dde1;
  /* 1031ddbf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031ddc2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1031ddc5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031ddc8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1031ddcb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031ddce mov eax, dword ptr [ecx*4 + 0x10340ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10340ea0)));
  /* 1031ddd5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1031ddda and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1031dddd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1031dddf jne 0x1031ddf4 */
  if (!C.zf) goto L_1031ddf4;
L_1031dde1:;
  /* 1031dde1 call 0x1031b590 */
  push32(0x1031dde6u); f_1031b590();
  /* 1031dde6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1031ddec or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1031ddef jmp 0x1031de7e */
  goto L_1031de7e;
L_1031ddf4:;
  /* 1031ddf4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031ddf7 push edx */
  push32((uint32_t)(EDX));
  /* 1031ddf8 call 0x1031cdb0 */
  push32(0x1031ddfdu); f_1031cdb0();
  /* 1031ddfd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031de00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031de03 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1031de06 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031de09 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1031de0c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031de0f mov edx, dword ptr [eax*4 + 0x10340ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10340ea0)));
  /* 1031de16 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1031de1b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1031de1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031de20 je 0x1031de5d */
  if (C.zf) goto L_1031de5d;
  /* 1031de22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031de25 push ecx */
  push32((uint32_t)(ECX));
  /* 1031de26 call 0x1031cc30 */
  push32(0x1031de2bu); f_1031cc30();
  /* 1031de2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031de2e push eax */
  push32((uint32_t)(EAX));
  /* 1031de2f call dword ptr [0x1034228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034228c))), 0x1031de35u);
  /* 1031de35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031de37 jne 0x1031de44 */
  if (!C.zf) goto L_1031de44;
  /* 1031de39 call dword ptr [0x103422fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422fc))), 0x1031de3fu);
  /* 1031de3f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1031de42 jmp 0x1031de4b */
  goto L_1031de4b;
L_1031de44:;
  /* 1031de44 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1031de4b:;
  /* 1031de4b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031de4f jne 0x1031de53 */
  if (!C.zf) goto L_1031de53;
  /* 1031de51 jmp 0x1031de6f */
  goto L_1031de6f;
L_1031de53:;
  /* 1031de53 call 0x1031b5a0 */
  push32(0x1031de58u); f_1031b5a0();
  /* 1031de58 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031de5b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1031de5d:;
  /* 1031de5d call 0x1031b590 */
  push32(0x1031de62u); f_1031b590();
  /* 1031de62 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1031de68 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1031de6f:;
  /* 1031de6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031de72 push eax */
  push32((uint32_t)(EAX));
  /* 1031de73 call 0x1031ce40 */
  push32(0x1031de78u); f_1031ce40();
  /* 1031de78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031de7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1031de7e:;
  /* 1031de7e mov esp, ebp */
  ESP = (EBP);
  /* 1031de80 pop ebp */
  EBP = (pop32());
  /* 1031de81 ret  */
  ESPCHK(0x1031ddb0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x1031de90 (219 bytes, 64 insns) */
void f_1031de90(void) {
  FTRACE(0x1031de90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031de90 push ebp */
  push32((uint32_t)(EBP));
  /* 1031de91 mov ebp, esp */
  EBP = (ESP);
  /* 1031de93 push ecx */
  push32((uint32_t)(ECX));
  /* 1031de94 cmp dword ptr [0x1033f6c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f6c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031de9b je 0x1031df31 */
  if (C.zf) goto L_1031df31;
  /* 1031dea1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1031dea3 push 0x1033b060 */
  push32((uint32_t)(0x1033b060u));
  /* 1031dea8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031deaa push 0xac */
  push32((uint32_t)(0xacu));
  /* 1031deaf push 1 */
  push32((uint32_t)(0x1u));
  /* 1031deb1 call 0x10313ad0 */
  push32(0x1031deb6u); f_10313ad0();
  /* 1031deb6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031deb9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1031debc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031dec0 jne 0x1031decc */
  if (!C.zf) goto L_1031decc;
  /* 1031dec2 mov eax, 1 */
  EAX = (0x1u);
  /* 1031dec7 jmp 0x1031df67 */
  goto L_1031df67;
L_1031decc:;
  /* 1031decc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031decf push eax */
  push32((uint32_t)(EAX));
  /* 1031ded0 call 0x1031df70 */
  push32(0x1031ded5u); f_1031df70();
  /* 1031ded5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ded8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031deda je 0x1031defd */
  if (C.zf) goto L_1031defd;
  /* 1031dedc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031dedf push ecx */
  push32((uint32_t)(ECX));
  /* 1031dee0 call 0x1031e500 */
  push32(0x1031dee5u); f_1031e500();
  /* 1031dee5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031dee8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031deea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031deed push edx */
  push32((uint32_t)(EDX));
  /* 1031deee call 0x10314150 */
  push32(0x1031def3u); f_10314150();
  /* 1031def3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031def6 mov eax, 1 */
  EAX = (0x1u);
  /* 1031defb jmp 0x1031df67 */
  goto L_1031df67;
L_1031defd:;
  /* 1031defd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031df00 mov dword ptr [0x1033ec98], eax */
  w32((uint32_t)(0x1033ec98), (EAX));
  /* 1031df05 mov ecx, dword ptr [0x1033f6e4] */
  ECX = (r32((uint32_t)(0x1033f6e4)));
  /* 1031df0b push ecx */
  push32((uint32_t)(ECX));
  /* 1031df0c call 0x1031e500 */
  push32(0x1031df11u); f_1031e500();
  /* 1031df11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031df14 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031df16 mov edx, dword ptr [0x1033f6e4] */
  EDX = (r32((uint32_t)(0x1033f6e4)));
  /* 1031df1c push edx */
  push32((uint32_t)(EDX));
  /* 1031df1d call 0x10314150 */
  push32(0x1031df22u); f_10314150();
  /* 1031df22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031df25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031df28 mov dword ptr [0x1033f6e4], eax */
  w32((uint32_t)(0x1033f6e4), (EAX));
  /* 1031df2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031df2f jmp 0x1031df67 */
  goto L_1031df67;
L_1031df31:;
  /* 1031df31 mov dword ptr [0x1033ec98], 0x1033eca0 */
  w32((uint32_t)(0x1033ec98), (0x1033eca0u));
  /* 1031df3b mov ecx, dword ptr [0x1033f6e4] */
  ECX = (r32((uint32_t)(0x1033f6e4)));
  /* 1031df41 push ecx */
  push32((uint32_t)(ECX));
  /* 1031df42 call 0x1031e500 */
  push32(0x1031df47u); f_1031e500();
  /* 1031df47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031df4a push 2 */
  push32((uint32_t)(0x2u));
  /* 1031df4c mov edx, dword ptr [0x1033f6e4] */
  EDX = (r32((uint32_t)(0x1033f6e4)));
  /* 1031df52 push edx */
  push32((uint32_t)(EDX));
  /* 1031df53 call 0x10314150 */
  push32(0x1031df58u); f_10314150();
  /* 1031df58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031df5b mov dword ptr [0x1033f6e4], 0 */
  w32((uint32_t)(0x1033f6e4), (0x0u));
  /* 1031df65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1031df67:;
  /* 1031df67 mov esp, ebp */
  ESP = (EBP);
  /* 1031df69 pop ebp */
  EBP = (pop32());
  /* 1031df6a ret  */
  ESPCHK(0x1031de90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df70 @ 0x1031df70 (1423 bytes, 533 insns) */
void f_1031df70(void) {
  FTRACE(0x1031df70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031df70 push ebp */
  push32((uint32_t)(EBP));
  /* 1031df71 mov ebp, esp */
  EBP = (ESP);
  /* 1031df73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031df76 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1031df7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031df7f mov ax, word ptr [0x1033f71e] */
  AX = (r16((uint32_t)(0x1033f71e)));
  /* 1031df85 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1031df88 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1031df8a mov cx, word ptr [0x1033f720] */
  CX = (r16((uint32_t)(0x1033f720)));
  /* 1031df91 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1031df94 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031df98 jne 0x1031dfa2 */
  if (!C.zf) goto L_1031dfa2;
  /* 1031df9a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1031df9d jmp 0x1031e4fb */
  goto L_1031e4fb;
L_1031dfa2:;
  /* 1031dfa2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031dfa5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031dfa8 push edx */
  push32((uint32_t)(EDX));
  /* 1031dfa9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 1031dfab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031dfae push eax */
  push32((uint32_t)(EAX));
  /* 1031dfaf push 1 */
  push32((uint32_t)(0x1u));
  /* 1031dfb1 call 0x10321880 */
  push32(0x1031dfb6u); f_10321880();
  /* 1031dfb6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031dfb9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031dfbc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031dfbe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031dfc1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031dfc4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031dfc7 push edx */
  push32((uint32_t)(EDX));
  /* 1031dfc8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1031dfca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031dfcd push eax */
  push32((uint32_t)(EAX));
  /* 1031dfce push 1 */
  push32((uint32_t)(0x1u));
  /* 1031dfd0 call 0x10321880 */
  push32(0x1031dfd5u); f_10321880();
  /* 1031dfd5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031dfd8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031dfdb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031dfdd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031dfe0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031dfe3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031dfe6 push edx */
  push32((uint32_t)(EDX));
  /* 1031dfe7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 1031dfe9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031dfec push eax */
  push32((uint32_t)(EAX));
  /* 1031dfed push 1 */
  push32((uint32_t)(0x1u));
  /* 1031dfef call 0x10321880 */
  push32(0x1031dff4u); f_10321880();
  /* 1031dff4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031dff7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031dffa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031dffc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031dfff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e002 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e005 push edx */
  push32((uint32_t)(EDX));
  /* 1031e006 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 1031e008 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031e00b push eax */
  push32((uint32_t)(EAX));
  /* 1031e00c push 1 */
  push32((uint32_t)(0x1u));
  /* 1031e00e call 0x10321880 */
  push32(0x1031e013u); f_10321880();
  /* 1031e013 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e016 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031e019 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031e01b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031e01e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e021 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e024 push edx */
  push32((uint32_t)(EDX));
  /* 1031e025 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 1031e027 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031e02a push eax */
  push32((uint32_t)(EAX));
  /* 1031e02b push 1 */
  push32((uint32_t)(0x1u));
  /* 1031e02d call 0x10321880 */
  push32(0x1031e032u); f_10321880();
  /* 1031e032 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e035 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031e038 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031e03a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031e03d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e040 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e043 push edx */
  push32((uint32_t)(EDX));
  /* 1031e044 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 1031e046 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031e049 push eax */
  push32((uint32_t)(EAX));
  /* 1031e04a push 1 */
  push32((uint32_t)(0x1u));
  /* 1031e04c call 0x10321880 */
  push32(0x1031e051u); f_10321880();
  /* 1031e051 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e054 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031e057 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031e059 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031e05c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e05f push edx */
  push32((uint32_t)(EDX));
  /* 1031e060 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1031e062 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031e065 push eax */
  push32((uint32_t)(EAX));
  /* 1031e066 push 1 */
  push32((uint32_t)(0x1u));
  /* 1031e068 call 0x10321880 */
  push32(0x1031e06du); f_10321880();
  /* 1031e06d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e070 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031e073 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031e075 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031e078 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e07b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e07e push edx */
  push32((uint32_t)(EDX));
  /* 1031e07f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1031e081 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031e084 push eax */
  push32((uint32_t)(EAX));
  /* 1031e085 push 1 */
  push32((uint32_t)(0x1u));
  /* 1031e087 call 0x10321880 */
  push32(0x1031e08cu); f_10321880();
  /* 1031e08c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e08f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031e092 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031e094 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031e097 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e09a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e09d push edx */
  push32((uint32_t)(EDX));
  /* 1031e09e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 1031e0a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031e0a3 push eax */
  push32((uint32_t)(EAX));
  /* 1031e0a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1031e0a6 call 0x10321880 */
  push32(0x1031e0abu); f_10321880();
  /* 1031e0ab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e0ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031e0b1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031e0b3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031e0b6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e0b9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e0bc push edx */
  push32((uint32_t)(EDX));
  /* 1031e0bd push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1031e0bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031e0c2 push eax */
  push32((uint32_t)(EAX));
  /* 1031e0c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1031e0c5 call 0x10321880 */
  push32(0x1031e0cau); f_10321880();
  /* 1031e0ca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e0cd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031e0d0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031e0d2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031e0d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e0d8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e0db push edx */
  push32((uint32_t)(EDX));
  /* 1031e0dc push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1031e0de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031e0e1 push eax */
  push32((uint32_t)(EAX));
  /* 1031e0e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1031e0e4 call 0x10321880 */
  push32(0x1031e0e9u); f_10321880();
  /* 1031e0e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e0ec mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031e0ef or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031e0f1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031e0f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e0f7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e0fa push edx */
  push32((uint32_t)(EDX));
  /* 1031e0fb push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1031e0fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031e100 push eax */
  push32((uint32_t)(EAX));
  /* 1031e101 push 1 */
  push32((uint32_t)(0x1u));
  /* 1031e103 call 0x10321880 */
  push32(0x1031e108u); f_10321880();
  /* 1031e108 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e10b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031e10e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031e110 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031e113 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e116 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e119 push edx */
  push32((uint32_t)(EDX));
  /* 1031e11a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1031e11c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031e11f push eax */
  push32((uint32_t)(EAX));
  /* 1031e120 push 1 */
  push32((uint32_t)(0x1u));
  /* 1031e122 call 0x10321880 */
  push32(0x1031e127u); f_10321880();
  /* 1031e127 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e12a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031e12d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031e12f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031e132 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e135 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e138 push edx */
  push32((uint32_t)(EDX));
  /* 1031e139 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1031e13b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031e13e push eax */
  push32((uint32_t)(EAX));
  /* 1031e13f push 1 */
  push32((uint32_t)(0x1u));
  /* 1031e141 call 0x10321880 */
  push32(0x1031e146u); f_10321880();
  /* 1031e146 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e149 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031e14c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031e14e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031e151 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e154 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e157 push edx */
  push32((uint32_t)(EDX));
  /* 1031e158 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1031e15a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031e15d push eax */
  push32((uint32_t)(EAX));
  /* 1031e15e push 1 */
  push32((uint32_t)(0x1u));
  /* 1031e160 call 0x10321880 */
  push32(0x1031e165u); f_10321880();
  /* 1031e165 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e168 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031e16b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031e16d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031e170 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e173 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e176 push edx */
  push32((uint32_t)(EDX));
  /* 1031e177 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 1031e179 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031e17c push eax */
  push32((uint32_t)(EAX));
  /* 1031e17d push 1 */
  push32((uint32_t)(0x1u));
  /* 1031e17f call 0x10321880 */
  push32(0x1031e184u); f_10321880();
  /* 1031e184 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e187 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031e18a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031e18c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031e18f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e192 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e195 push edx */
  push32((uint32_t)(EDX));
  /* 1031e196 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1031e198 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031e19b push eax */
  push32((uint32_t)(EAX));
  /* 1031e19c push 1 */
  push32((uint32_t)(0x1u));
  /* 1031e19e call 0x10321880 */
  push32(0x1031e1a3u); f_10321880();
  /* 1031e1a3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e1a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031e1a9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031e1ab mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031e1ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e1b1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e1b4 push edx */
  push32((uint32_t)(EDX));
  /* 1031e1b5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 1031e1b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031e1ba push eax */
  push32((uint32_t)(EAX));
  /* 1031e1bb push 1 */
  push32((uint32_t)(0x1u));
  /* 1031e1bd call 0x10321880 */
  push32(0x1031e1c2u); f_10321880();
  /* 1031e1c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e1c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031e1c8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031e1ca mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031e1cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e1d0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e1d3 push edx */
  push32((uint32_t)(EDX));
  /* 1031e1d4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1031e1d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031e1d9 push eax */
  push32((uint32_t)(EAX));
  /* 1031e1da push 1 */
  push32((uint32_t)(0x1u));
  /* 1031e1dc call 0x10321880 */
  push32(0x1031e1e1u); f_10321880();
  /* 1031e1e1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e1e4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031e1e7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031e1e9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031e1ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e1ef add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e1f2 push edx */
  push32((uint32_t)(EDX));
  /* 1031e1f3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 1031e1f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031e1f8 push eax */
  push32((uint32_t)(EAX));
  /* 1031e1f9 push 1 */
  push32((uint32_t)(0x1u));
  /* 1031e1fb call 0x10321880 */
  push32(0x1031e200u); f_10321880();
  /* 1031e200 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e203 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031e206 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031e208 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031e20b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e20e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e211 push edx */
  push32((uint32_t)(EDX));
  /* 1031e212 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1031e214 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031e217 push eax */
  push32((uint32_t)(EAX));
  /* 1031e218 push 1 */
  push32((uint32_t)(0x1u));
  /* 1031e21a call 0x10321880 */
  push32(0x1031e21fu); f_10321880();
  /* 1031e21f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e222 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031e225 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031e227 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031e22a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e22d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e230 push edx */
  push32((uint32_t)(EDX));
  /* 1031e231 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 1031e233 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031e236 push eax */
  push32((uint32_t)(EAX));
  /* 1031e237 push 1 */
  push32((uint32_t)(0x1u));
  /* 1031e239 call 0x10321880 */
  push32(0x1031e23eu); f_10321880();
  /* 1031e23e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e241 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031e244 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031e246 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031e249 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e24c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e24f push edx */
  push32((uint32_t)(EDX));
  /* 1031e250 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 1031e252 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031e255 push eax */
  push32((uint32_t)(EAX));
  /* 1031e256 push 1 */
  push32((uint32_t)(0x1u));
  /* 1031e258 call 0x10321880 */
  push32(0x1031e25du); f_10321880();
  /* 1031e25d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e260 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031e263 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031e265 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031e268 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e26b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e26e push edx */
  push32((uint32_t)(EDX));
  /* 1031e26f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 1031e271 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031e274 push eax */
  push32((uint32_t)(EAX));
  /* 1031e275 push 1 */
  push32((uint32_t)(0x1u));
  /* 1031e277 call 0x10321880 */
  push32(0x1031e27cu); f_10321880();
  /* 1031e27c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e27f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031e282 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031e284 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031e287 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e28a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e28d push edx */
  push32((uint32_t)(EDX));
  /* 1031e28e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 1031e290 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031e293 push eax */
  push32((uint32_t)(EAX));
  /* 1031e294 push 1 */
  push32((uint32_t)(0x1u));
  /* 1031e296 call 0x10321880 */
  push32(0x1031e29bu); f_10321880();
  /* 1031e29b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e29e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031e2a1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031e2a3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031e2a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e2a9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e2ac push edx */
  push32((uint32_t)(EDX));
  /* 1031e2ad push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 1031e2af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031e2b2 push eax */
  push32((uint32_t)(EAX));
  /* 1031e2b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1031e2b5 call 0x10321880 */
  push32(0x1031e2bau); f_10321880();
  /* 1031e2ba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e2bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031e2c0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031e2c2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031e2c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e2c8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e2cb push edx */
  push32((uint32_t)(EDX));
  /* 1031e2cc push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1031e2ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031e2d1 push eax */
  push32((uint32_t)(EAX));
  /* 1031e2d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1031e2d4 call 0x10321880 */
  push32(0x1031e2d9u); f_10321880();
  /* 1031e2d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e2dc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031e2df or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031e2e1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031e2e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e2e7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e2ea push edx */
  push32((uint32_t)(EDX));
  /* 1031e2eb push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1031e2ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031e2f0 push eax */
  push32((uint32_t)(EAX));
  /* 1031e2f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1031e2f3 call 0x10321880 */
  push32(0x1031e2f8u); f_10321880();
  /* 1031e2f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e2fb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031e2fe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031e300 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031e303 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e306 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e309 push edx */
  push32((uint32_t)(EDX));
  /* 1031e30a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1031e30c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031e30f push eax */
  push32((uint32_t)(EAX));
  /* 1031e310 push 1 */
  push32((uint32_t)(0x1u));
  /* 1031e312 call 0x10321880 */
  push32(0x1031e317u); f_10321880();
  /* 1031e317 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e31a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031e31d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031e31f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031e322 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e325 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e328 push edx */
  push32((uint32_t)(EDX));
  /* 1031e329 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1031e32b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031e32e push eax */
  push32((uint32_t)(EAX));
  /* 1031e32f push 1 */
  push32((uint32_t)(0x1u));
  /* 1031e331 call 0x10321880 */
  push32(0x1031e336u); f_10321880();
  /* 1031e336 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e339 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031e33c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031e33e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031e341 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e344 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e347 push edx */
  push32((uint32_t)(EDX));
  /* 1031e348 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1031e34a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031e34d push eax */
  push32((uint32_t)(EAX));
  /* 1031e34e push 1 */
  push32((uint32_t)(0x1u));
  /* 1031e350 call 0x10321880 */
  push32(0x1031e355u); f_10321880();
  /* 1031e355 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e358 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031e35b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031e35d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031e360 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e363 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e366 push edx */
  push32((uint32_t)(EDX));
  /* 1031e367 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1031e369 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031e36c push eax */
  push32((uint32_t)(EAX));
  /* 1031e36d push 1 */
  push32((uint32_t)(0x1u));
  /* 1031e36f call 0x10321880 */
  push32(0x1031e374u); f_10321880();
  /* 1031e374 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e377 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031e37a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031e37c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031e37f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e382 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e388 push edx */
  push32((uint32_t)(EDX));
  /* 1031e389 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 1031e38b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031e38e push eax */
  push32((uint32_t)(EAX));
  /* 1031e38f push 1 */
  push32((uint32_t)(0x1u));
  /* 1031e391 call 0x10321880 */
  push32(0x1031e396u); f_10321880();
  /* 1031e396 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e399 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031e39c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031e39e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031e3a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e3a4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e3aa push edx */
  push32((uint32_t)(EDX));
  /* 1031e3ab push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1031e3ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031e3b0 push eax */
  push32((uint32_t)(EAX));
  /* 1031e3b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1031e3b3 call 0x10321880 */
  push32(0x1031e3b8u); f_10321880();
  /* 1031e3b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e3bb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031e3be or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031e3c0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031e3c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e3c6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e3cc push edx */
  push32((uint32_t)(EDX));
  /* 1031e3cd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1031e3cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031e3d2 push eax */
  push32((uint32_t)(EAX));
  /* 1031e3d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1031e3d5 call 0x10321880 */
  push32(0x1031e3dau); f_10321880();
  /* 1031e3da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e3dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031e3e0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031e3e2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031e3e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e3e8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e3ee push edx */
  push32((uint32_t)(EDX));
  /* 1031e3ef push 0x41 */
  push32((uint32_t)(0x41u));
  /* 1031e3f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031e3f4 push eax */
  push32((uint32_t)(EAX));
  /* 1031e3f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1031e3f7 call 0x10321880 */
  push32(0x1031e3fcu); f_10321880();
  /* 1031e3fc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e3ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031e402 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031e404 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031e407 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e40a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e410 push edx */
  push32((uint32_t)(EDX));
  /* 1031e411 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1031e413 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031e416 push eax */
  push32((uint32_t)(EAX));
  /* 1031e417 push 1 */
  push32((uint32_t)(0x1u));
  /* 1031e419 call 0x10321880 */
  push32(0x1031e41eu); f_10321880();
  /* 1031e41e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e421 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031e424 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031e426 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031e429 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e42c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e432 push edx */
  push32((uint32_t)(EDX));
  /* 1031e433 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 1031e435 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031e438 push eax */
  push32((uint32_t)(EAX));
  /* 1031e439 push 1 */
  push32((uint32_t)(0x1u));
  /* 1031e43b call 0x10321880 */
  push32(0x1031e440u); f_10321880();
  /* 1031e440 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e443 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031e446 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031e448 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031e44b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e44e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e454 push edx */
  push32((uint32_t)(EDX));
  /* 1031e455 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1031e457 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031e45a push eax */
  push32((uint32_t)(EAX));
  /* 1031e45b push 1 */
  push32((uint32_t)(0x1u));
  /* 1031e45d call 0x10321880 */
  push32(0x1031e462u); f_10321880();
  /* 1031e462 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e465 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031e468 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031e46a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031e46d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e470 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e476 push edx */
  push32((uint32_t)(EDX));
  /* 1031e477 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 1031e479 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031e47c push eax */
  push32((uint32_t)(EAX));
  /* 1031e47d push 1 */
  push32((uint32_t)(0x1u));
  /* 1031e47f call 0x10321880 */
  push32(0x1031e484u); f_10321880();
  /* 1031e484 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e487 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031e48a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031e48c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031e48f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e492 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e498 push edx */
  push32((uint32_t)(EDX));
  /* 1031e499 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1031e49b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031e49e push eax */
  push32((uint32_t)(EAX));
  /* 1031e49f push 1 */
  push32((uint32_t)(0x1u));
  /* 1031e4a1 call 0x10321880 */
  push32(0x1031e4a6u); f_10321880();
  /* 1031e4a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e4a9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031e4ac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031e4ae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031e4b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e4b4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e4ba push edx */
  push32((uint32_t)(EDX));
  /* 1031e4bb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1031e4bd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031e4c0 push eax */
  push32((uint32_t)(EAX));
  /* 1031e4c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1031e4c3 call 0x10321880 */
  push32(0x1031e4c8u); f_10321880();
  /* 1031e4c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e4cb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031e4ce or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031e4d0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031e4d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e4d6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e4dc push edx */
  push32((uint32_t)(EDX));
  /* 1031e4dd push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 1031e4e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031e4e5 push eax */
  push32((uint32_t)(EAX));
  /* 1031e4e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1031e4e8 call 0x10321880 */
  push32(0x1031e4edu); f_10321880();
  /* 1031e4ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e4f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031e4f3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031e4f5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031e4f8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1031e4fb:;
  /* 1031e4fb mov esp, ebp */
  ESP = (EBP);
  /* 1031e4fd pop ebp */
  EBP = (pop32());
  /* 1031e4fe ret  */
  ESPCHK(0x1031df70u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x1031e500 (779 bytes, 265 insns) */
void f_1031e500(void) {
  FTRACE(0x1031e500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031e500 push ebp */
  push32((uint32_t)(EBP));
  /* 1031e501 mov ebp, esp */
  EBP = (ESP);
  /* 1031e503 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031e507 jne 0x1031e50e */
  if (!C.zf) goto L_1031e50e;
  /* 1031e509 jmp 0x1031e809 */
  goto L_1031e809;
L_1031e50e:;
  /* 1031e50e push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e510 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e513 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1031e516 push ecx */
  push32((uint32_t)(ECX));
  /* 1031e517 call 0x10314150 */
  push32(0x1031e51cu); f_10314150();
  /* 1031e51c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e51f push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e521 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e524 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1031e527 push eax */
  push32((uint32_t)(EAX));
  /* 1031e528 call 0x10314150 */
  push32(0x1031e52du); f_10314150();
  /* 1031e52d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e530 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e532 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e535 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1031e538 push edx */
  push32((uint32_t)(EDX));
  /* 1031e539 call 0x10314150 */
  push32(0x1031e53eu); f_10314150();
  /* 1031e53e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e541 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e543 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e546 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1031e549 push ecx */
  push32((uint32_t)(ECX));
  /* 1031e54a call 0x10314150 */
  push32(0x1031e54fu); f_10314150();
  /* 1031e54f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e552 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e554 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e557 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1031e55a push eax */
  push32((uint32_t)(EAX));
  /* 1031e55b call 0x10314150 */
  push32(0x1031e560u); f_10314150();
  /* 1031e560 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e563 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e565 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e568 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1031e56b push edx */
  push32((uint32_t)(EDX));
  /* 1031e56c call 0x10314150 */
  push32(0x1031e571u); f_10314150();
  /* 1031e571 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e574 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e576 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e579 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1031e57b push ecx */
  push32((uint32_t)(ECX));
  /* 1031e57c call 0x10314150 */
  push32(0x1031e581u); f_10314150();
  /* 1031e581 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e584 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e586 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e589 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1031e58c push eax */
  push32((uint32_t)(EAX));
  /* 1031e58d call 0x10314150 */
  push32(0x1031e592u); f_10314150();
  /* 1031e592 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e595 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e597 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e59a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1031e59d push edx */
  push32((uint32_t)(EDX));
  /* 1031e59e call 0x10314150 */
  push32(0x1031e5a3u); f_10314150();
  /* 1031e5a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e5a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e5a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e5ab mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 1031e5ae push ecx */
  push32((uint32_t)(ECX));
  /* 1031e5af call 0x10314150 */
  push32(0x1031e5b4u); f_10314150();
  /* 1031e5b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e5b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e5b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e5bc mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 1031e5bf push eax */
  push32((uint32_t)(EAX));
  /* 1031e5c0 call 0x10314150 */
  push32(0x1031e5c5u); f_10314150();
  /* 1031e5c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e5c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e5ca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e5cd mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1031e5d0 push edx */
  push32((uint32_t)(EDX));
  /* 1031e5d1 call 0x10314150 */
  push32(0x1031e5d6u); f_10314150();
  /* 1031e5d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e5d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e5db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e5de mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 1031e5e1 push ecx */
  push32((uint32_t)(ECX));
  /* 1031e5e2 call 0x10314150 */
  push32(0x1031e5e7u); f_10314150();
  /* 1031e5e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e5ea push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e5ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e5ef mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1031e5f2 push eax */
  push32((uint32_t)(EAX));
  /* 1031e5f3 call 0x10314150 */
  push32(0x1031e5f8u); f_10314150();
  /* 1031e5f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e5fb push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e5fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e600 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 1031e603 push edx */
  push32((uint32_t)(EDX));
  /* 1031e604 call 0x10314150 */
  push32(0x1031e609u); f_10314150();
  /* 1031e609 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e60c push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e60e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e611 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 1031e614 push ecx */
  push32((uint32_t)(ECX));
  /* 1031e615 call 0x10314150 */
  push32(0x1031e61au); f_10314150();
  /* 1031e61a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e61d push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e61f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e622 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 1031e625 push eax */
  push32((uint32_t)(EAX));
  /* 1031e626 call 0x10314150 */
  push32(0x1031e62bu); f_10314150();
  /* 1031e62b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e62e push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e630 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e633 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 1031e636 push edx */
  push32((uint32_t)(EDX));
  /* 1031e637 call 0x10314150 */
  push32(0x1031e63cu); f_10314150();
  /* 1031e63c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e63f push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e641 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e644 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 1031e647 push ecx */
  push32((uint32_t)(ECX));
  /* 1031e648 call 0x10314150 */
  push32(0x1031e64du); f_10314150();
  /* 1031e64d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e650 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e652 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e655 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 1031e658 push eax */
  push32((uint32_t)(EAX));
  /* 1031e659 call 0x10314150 */
  push32(0x1031e65eu); f_10314150();
  /* 1031e65e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e661 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e663 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e666 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1031e669 push edx */
  push32((uint32_t)(EDX));
  /* 1031e66a call 0x10314150 */
  push32(0x1031e66fu); f_10314150();
  /* 1031e66f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e672 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e674 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e677 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1031e67a push ecx */
  push32((uint32_t)(ECX));
  /* 1031e67b call 0x10314150 */
  push32(0x1031e680u); f_10314150();
  /* 1031e680 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e683 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e685 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e688 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 1031e68b push eax */
  push32((uint32_t)(EAX));
  /* 1031e68c call 0x10314150 */
  push32(0x1031e691u); f_10314150();
  /* 1031e691 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e694 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e696 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e699 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 1031e69c push edx */
  push32((uint32_t)(EDX));
  /* 1031e69d call 0x10314150 */
  push32(0x1031e6a2u); f_10314150();
  /* 1031e6a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e6a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e6a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e6aa mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 1031e6ad push ecx */
  push32((uint32_t)(ECX));
  /* 1031e6ae call 0x10314150 */
  push32(0x1031e6b3u); f_10314150();
  /* 1031e6b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e6b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e6b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e6bb mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 1031e6be push eax */
  push32((uint32_t)(EAX));
  /* 1031e6bf call 0x10314150 */
  push32(0x1031e6c4u); f_10314150();
  /* 1031e6c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e6c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e6c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e6cc mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 1031e6cf push edx */
  push32((uint32_t)(EDX));
  /* 1031e6d0 call 0x10314150 */
  push32(0x1031e6d5u); f_10314150();
  /* 1031e6d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e6d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e6da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e6dd mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 1031e6e0 push ecx */
  push32((uint32_t)(ECX));
  /* 1031e6e1 call 0x10314150 */
  push32(0x1031e6e6u); f_10314150();
  /* 1031e6e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e6e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e6eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e6ee mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 1031e6f1 push eax */
  push32((uint32_t)(EAX));
  /* 1031e6f2 call 0x10314150 */
  push32(0x1031e6f7u); f_10314150();
  /* 1031e6f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e6fa push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e6fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e6ff mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 1031e702 push edx */
  push32((uint32_t)(EDX));
  /* 1031e703 call 0x10314150 */
  push32(0x1031e708u); f_10314150();
  /* 1031e708 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e70b push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e70d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e710 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 1031e713 push ecx */
  push32((uint32_t)(ECX));
  /* 1031e714 call 0x10314150 */
  push32(0x1031e719u); f_10314150();
  /* 1031e719 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e71c push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e71e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e721 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 1031e724 push eax */
  push32((uint32_t)(EAX));
  /* 1031e725 call 0x10314150 */
  push32(0x1031e72au); f_10314150();
  /* 1031e72a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e72d push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e72f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e732 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 1031e738 push edx */
  push32((uint32_t)(EDX));
  /* 1031e739 call 0x10314150 */
  push32(0x1031e73eu); f_10314150();
  /* 1031e73e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e741 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e743 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e746 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 1031e74c push ecx */
  push32((uint32_t)(ECX));
  /* 1031e74d call 0x10314150 */
  push32(0x1031e752u); f_10314150();
  /* 1031e752 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e755 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e757 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e75a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 1031e760 push eax */
  push32((uint32_t)(EAX));
  /* 1031e761 call 0x10314150 */
  push32(0x1031e766u); f_10314150();
  /* 1031e766 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e769 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e76b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e76e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 1031e774 push edx */
  push32((uint32_t)(EDX));
  /* 1031e775 call 0x10314150 */
  push32(0x1031e77au); f_10314150();
  /* 1031e77a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e77d push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e77f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e782 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 1031e788 push ecx */
  push32((uint32_t)(ECX));
  /* 1031e789 call 0x10314150 */
  push32(0x1031e78eu); f_10314150();
  /* 1031e78e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e791 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e793 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e796 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 1031e79c push eax */
  push32((uint32_t)(EAX));
  /* 1031e79d call 0x10314150 */
  push32(0x1031e7a2u); f_10314150();
  /* 1031e7a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e7a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e7a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e7aa mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 1031e7b0 push edx */
  push32((uint32_t)(EDX));
  /* 1031e7b1 call 0x10314150 */
  push32(0x1031e7b6u); f_10314150();
  /* 1031e7b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e7b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e7bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e7be mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 1031e7c4 push ecx */
  push32((uint32_t)(ECX));
  /* 1031e7c5 call 0x10314150 */
  push32(0x1031e7cau); f_10314150();
  /* 1031e7ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e7cd push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e7cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e7d2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1031e7d8 push eax */
  push32((uint32_t)(EAX));
  /* 1031e7d9 call 0x10314150 */
  push32(0x1031e7deu); f_10314150();
  /* 1031e7de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e7e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e7e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e7e6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 1031e7ec push edx */
  push32((uint32_t)(EDX));
  /* 1031e7ed call 0x10314150 */
  push32(0x1031e7f2u); f_10314150();
  /* 1031e7f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e7f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e7f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031e7fa mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 1031e800 push ecx */
  push32((uint32_t)(ECX));
  /* 1031e801 call 0x10314150 */
  push32(0x1031e806u); f_10314150();
  /* 1031e806 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1031e809:;
  /* 1031e809 pop ebp */
  EBP = (pop32());
  /* 1031e80a ret  */
  ESPCHK(0x1031e500u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e810 @ 0x1031e810 (678 bytes, 180 insns) */
void f_1031e810(void) {
  FTRACE(0x1031e810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031e810 push ebp */
  push32((uint32_t)(EBP));
  /* 1031e811 mov ebp, esp */
  EBP = (ESP);
  /* 1031e813 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031e816 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1031e81d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031e81f mov ax, word ptr [0x1033f71a] */
  AX = (r16((uint32_t)(0x1033f71a)));
  /* 1031e825 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1031e828 cmp dword ptr [0x1033f6c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f6c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031e82f je 0x1031e98a */
  if (C.zf) goto L_1031e98a;
  /* 1031e835 push 0x1033f6e8 */
  push32((uint32_t)(0x1033f6e8u));
  /* 1031e83a push 0xe */
  push32((uint32_t)(0xeu));
  /* 1031e83c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031e83f push ecx */
  push32((uint32_t)(ECX));
  /* 1031e840 push 1 */
  push32((uint32_t)(0x1u));
  /* 1031e842 call 0x10321880 */
  push32(0x1031e847u); f_10321880();
  /* 1031e847 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e84a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031e84d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1031e84f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1031e852 push 0x1033f6ec */
  push32((uint32_t)(0x1033f6ecu));
  /* 1031e857 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1031e859 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031e85c push eax */
  push32((uint32_t)(EAX));
  /* 1031e85d push 1 */
  push32((uint32_t)(0x1u));
  /* 1031e85f call 0x10321880 */
  push32(0x1031e864u); f_10321880();
  /* 1031e864 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e867 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031e86a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031e86c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1031e86f push 0x1033f6f0 */
  push32((uint32_t)(0x1033f6f0u));
  /* 1031e874 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1031e876 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031e879 push edx */
  push32((uint32_t)(EDX));
  /* 1031e87a push 1 */
  push32((uint32_t)(0x1u));
  /* 1031e87c call 0x10321880 */
  push32(0x1031e881u); f_10321880();
  /* 1031e881 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e884 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031e887 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031e889 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1031e88c mov edx, dword ptr [0x1033f6f0] */
  EDX = (r32((uint32_t)(0x1033f6f0)));
  /* 1031e892 push edx */
  push32((uint32_t)(EDX));
  /* 1031e893 call 0x1031eac0 */
  push32(0x1031e898u); f_1031eac0();
  /* 1031e898 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e89b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031e89f je 0x1031e8f9 */
  if (C.zf) goto L_1031e8f9;
  /* 1031e8a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e8a3 mov eax, dword ptr [0x1033f6e8] */
  EAX = (r32((uint32_t)(0x1033f6e8)));
  /* 1031e8a8 push eax */
  push32((uint32_t)(EAX));
  /* 1031e8a9 call 0x10314150 */
  push32(0x1031e8aeu); f_10314150();
  /* 1031e8ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e8b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e8b3 mov ecx, dword ptr [0x1033f6ec] */
  ECX = (r32((uint32_t)(0x1033f6ec)));
  /* 1031e8b9 push ecx */
  push32((uint32_t)(ECX));
  /* 1031e8ba call 0x10314150 */
  push32(0x1031e8bfu); f_10314150();
  /* 1031e8bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e8c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e8c4 mov edx, dword ptr [0x1033f6f0] */
  EDX = (r32((uint32_t)(0x1033f6f0)));
  /* 1031e8ca push edx */
  push32((uint32_t)(EDX));
  /* 1031e8cb call 0x10314150 */
  push32(0x1031e8d0u); f_10314150();
  /* 1031e8d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e8d3 mov dword ptr [0x1033f6e8], 0 */
  w32((uint32_t)(0x1033f6e8), (0x0u));
  /* 1031e8dd mov dword ptr [0x1033f6ec], 0 */
  w32((uint32_t)(0x1033f6ec), (0x0u));
  /* 1031e8e7 mov dword ptr [0x1033f6f0], 0 */
  w32((uint32_t)(0x1033f6f0), (0x0u));
  /* 1031e8f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1031e8f4 jmp 0x1031eab2 */
  goto L_1031eab2;
L_1031e8f9:;
  /* 1031e8f9 mov eax, dword ptr [0x1033ed88] */
  EAX = (r32((uint32_t)(0x1033ed88)));
  /* 1031e8fe cmp dword ptr [eax], 0x1033ed50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1033ed50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031e904 je 0x1031e940 */
  if (C.zf) goto L_1031e940;
  /* 1031e906 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e908 mov ecx, dword ptr [0x1033ed88] */
  ECX = (r32((uint32_t)(0x1033ed88)));
  /* 1031e90e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1031e910 push edx */
  push32((uint32_t)(EDX));
  /* 1031e911 call 0x10314150 */
  push32(0x1031e916u); f_10314150();
  /* 1031e916 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e919 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e91b mov eax, dword ptr [0x1033ed88] */
  EAX = (r32((uint32_t)(0x1033ed88)));
  /* 1031e920 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1031e923 push ecx */
  push32((uint32_t)(ECX));
  /* 1031e924 call 0x10314150 */
  push32(0x1031e929u); f_10314150();
  /* 1031e929 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e92c push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e92e mov edx, dword ptr [0x1033ed88] */
  EDX = (r32((uint32_t)(0x1033ed88)));
  /* 1031e934 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1031e937 push eax */
  push32((uint32_t)(EAX));
  /* 1031e938 call 0x10314150 */
  push32(0x1031e93du); f_10314150();
  /* 1031e93d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1031e940:;
  /* 1031e940 mov ecx, dword ptr [0x1033ed88] */
  ECX = (r32((uint32_t)(0x1033ed88)));
  /* 1031e946 mov edx, dword ptr [0x1033f6e8] */
  EDX = (r32((uint32_t)(0x1033f6e8)));
  /* 1031e94c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1031e94e mov eax, dword ptr [0x1033ed88] */
  EAX = (r32((uint32_t)(0x1033ed88)));
  /* 1031e953 mov ecx, dword ptr [0x1033f6ec] */
  ECX = (r32((uint32_t)(0x1033f6ec)));
  /* 1031e959 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1031e95c mov edx, dword ptr [0x1033ed88] */
  EDX = (r32((uint32_t)(0x1033ed88)));
  /* 1031e962 mov eax, dword ptr [0x1033f6f0] */
  EAX = (r32((uint32_t)(0x1033f6f0)));
  /* 1031e967 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1031e96a mov ecx, dword ptr [0x1033ed88] */
  ECX = (r32((uint32_t)(0x1033ed88)));
  /* 1031e970 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1031e972 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1031e974 mov byte ptr [0x1033dea8], al */
  w8((uint32_t)(0x1033dea8), (AL));
  /* 1031e979 mov dword ptr [0x1033deac], 1 */
  w32((uint32_t)(0x1033deac), (0x1u));
  /* 1031e983 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031e985 jmp 0x1031eab2 */
  goto L_1031eab2;
L_1031e98a:;
  /* 1031e98a push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e98c mov ecx, dword ptr [0x1033f6e8] */
  ECX = (r32((uint32_t)(0x1033f6e8)));
  /* 1031e992 push ecx */
  push32((uint32_t)(ECX));
  /* 1031e993 call 0x10314150 */
  push32(0x1031e998u); f_10314150();
  /* 1031e998 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e99b push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e99d mov edx, dword ptr [0x1033f6ec] */
  EDX = (r32((uint32_t)(0x1033f6ec)));
  /* 1031e9a3 push edx */
  push32((uint32_t)(EDX));
  /* 1031e9a4 call 0x10314150 */
  push32(0x1031e9a9u); f_10314150();
  /* 1031e9a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e9ac push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e9ae mov eax, dword ptr [0x1033f6f0] */
  EAX = (r32((uint32_t)(0x1033f6f0)));
  /* 1031e9b3 push eax */
  push32((uint32_t)(EAX));
  /* 1031e9b4 call 0x10314150 */
  push32(0x1031e9b9u); f_10314150();
  /* 1031e9b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e9bc mov dword ptr [0x1033f6e8], 0 */
  w32((uint32_t)(0x1033f6e8), (0x0u));
  /* 1031e9c6 mov dword ptr [0x1033f6ec], 0 */
  w32((uint32_t)(0x1033f6ec), (0x0u));
  /* 1031e9d0 mov dword ptr [0x1033f6f0], 0 */
  w32((uint32_t)(0x1033f6f0), (0x0u));
  /* 1031e9da push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1031e9df push 0x1033b06c */
  push32((uint32_t)(0x1033b06cu));
  /* 1031e9e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e9e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031e9e8 call 0x103136c0 */
  push32(0x1031e9edu); f_103136c0();
  /* 1031e9ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031e9f0 mov ecx, dword ptr [0x1033ed88] */
  ECX = (r32((uint32_t)(0x1033ed88)));
  /* 1031e9f6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1031e9f8 mov edx, dword ptr [0x1033ed88] */
  EDX = (r32((uint32_t)(0x1033ed88)));
  /* 1031e9fe cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031ea01 jne 0x1031ea0b */
  if (!C.zf) goto L_1031ea0b;
  /* 1031ea03 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1031ea06 jmp 0x1031eab2 */
  goto L_1031eab2;
L_1031ea0b:;
  /* 1031ea0b push 0x1033b03c */
  push32((uint32_t)(0x1033b03cu));
  /* 1031ea10 mov eax, dword ptr [0x1033ed88] */
  EAX = (r32((uint32_t)(0x1033ed88)));
  /* 1031ea15 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1031ea17 push ecx */
  push32((uint32_t)(ECX));
  /* 1031ea18 call 0x10316670 */
  push32(0x1031ea1du); f_10316670();
  /* 1031ea1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ea20 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 1031ea25 push 0x1033b06c */
  push32((uint32_t)(0x1033b06cu));
  /* 1031ea2a push 2 */
  push32((uint32_t)(0x2u));
  /* 1031ea2c push 2 */
  push32((uint32_t)(0x2u));
  /* 1031ea2e call 0x103136c0 */
  push32(0x1031ea33u); f_103136c0();
  /* 1031ea33 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ea36 mov edx, dword ptr [0x1033ed88] */
  EDX = (r32((uint32_t)(0x1033ed88)));
  /* 1031ea3c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1031ea3f mov eax, dword ptr [0x1033ed88] */
  EAX = (r32((uint32_t)(0x1033ed88)));
  /* 1031ea44 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031ea48 jne 0x1031ea4f */
  if (!C.zf) goto L_1031ea4f;
  /* 1031ea4a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1031ea4d jmp 0x1031eab2 */
  goto L_1031eab2;
L_1031ea4f:;
  /* 1031ea4f mov ecx, dword ptr [0x1033ed88] */
  ECX = (r32((uint32_t)(0x1033ed88)));
  /* 1031ea55 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1031ea58 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1031ea5b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 1031ea60 push 0x1033b06c */
  push32((uint32_t)(0x1033b06cu));
  /* 1031ea65 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031ea67 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031ea69 call 0x103136c0 */
  push32(0x1031ea6eu); f_103136c0();
  /* 1031ea6e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ea71 mov ecx, dword ptr [0x1033ed88] */
  ECX = (r32((uint32_t)(0x1033ed88)));
  /* 1031ea77 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1031ea7a mov edx, dword ptr [0x1033ed88] */
  EDX = (r32((uint32_t)(0x1033ed88)));
  /* 1031ea80 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031ea84 jne 0x1031ea8b */
  if (!C.zf) goto L_1031ea8b;
  /* 1031ea86 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1031ea89 jmp 0x1031eab2 */
  goto L_1031eab2;
L_1031ea8b:;
  /* 1031ea8b mov eax, dword ptr [0x1033ed88] */
  EAX = (r32((uint32_t)(0x1033ed88)));
  /* 1031ea90 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1031ea93 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1031ea96 mov edx, dword ptr [0x1033ed88] */
  EDX = (r32((uint32_t)(0x1033ed88)));
  /* 1031ea9c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1031ea9e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1031eaa0 mov byte ptr [0x1033dea8], cl */
  w8((uint32_t)(0x1033dea8), (CL));
  /* 1031eaa6 mov dword ptr [0x1033deac], 1 */
  w32((uint32_t)(0x1033deac), (0x1u));
  /* 1031eab0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1031eab2:;
  /* 1031eab2 mov esp, ebp */
  ESP = (EBP);
  /* 1031eab4 pop ebp */
  EBP = (pop32());
  /* 1031eab5 ret  */
  ESPCHK(0x1031e810u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1031eac0 (125 bytes, 49 insns) */
void f_1031eac0(void) {
  FTRACE(0x1031eac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031eac0 push ebp */
  push32((uint32_t)(EBP));
  /* 1031eac1 mov ebp, esp */
  EBP = (ESP);
  /* 1031eac3 push ecx */
  push32((uint32_t)(ECX));
L_1031eac4:;
  /* 1031eac4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031eac7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1031eaca test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1031eacc je 0x1031eb39 */
  if (C.zf) goto L_1031eb39;
  /* 1031eace mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031ead1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1031ead4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031ead7 jl 0x1031eafd */
  if ((C.sf!=C.of)) goto L_1031eafd;
  /* 1031ead9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031eadc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1031eadf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031eae2 jg 0x1031eafd */
  if ((!C.zf&&C.sf==C.of)) goto L_1031eafd;
  /* 1031eae4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031eae7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1031eaea sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031eaed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031eaf0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1031eaf2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031eaf5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031eaf8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1031eafb jmp 0x1031eb37 */
  goto L_1031eb37;
L_1031eafd:;
  /* 1031eafd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031eb00 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1031eb03 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031eb06 jne 0x1031eb2e */
  if (!C.zf) goto L_1031eb2e;
  /* 1031eb08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031eb0b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1031eb0e:;
  /* 1031eb0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031eb11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031eb14 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1031eb17 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1031eb19 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031eb1c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031eb1f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1031eb22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031eb25 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1031eb28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031eb2a jne 0x1031eb0e */
  if (!C.zf) goto L_1031eb0e;
  /* 1031eb2c jmp 0x1031eb37 */
  goto L_1031eb37;
L_1031eb2e:;
  /* 1031eb2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031eb31 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031eb34 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1031eb37:;
  /* 1031eb37 jmp 0x1031eac4 */
  goto L_1031eac4;
L_1031eb39:;
  /* 1031eb39 mov esp, ebp */
  ESP = (EBP);
  /* 1031eb3b pop ebp */
  EBP = (pop32());
  /* 1031eb3c ret  */
  ESPCHK(0x1031eac0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb40 @ 0x1031eb40 (304 bytes, 85 insns) */
void f_1031eb40(void) {
  FTRACE(0x1031eb40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031eb40 push ebp */
  push32((uint32_t)(EBP));
  /* 1031eb41 mov ebp, esp */
  EBP = (ESP);
  /* 1031eb43 push ecx */
  push32((uint32_t)(ECX));
  /* 1031eb44 cmp dword ptr [0x1033f6bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f6bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031eb4b je 0x1031ec0c */
  if (C.zf) goto L_1031ec0c;
  /* 1031eb51 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1031eb53 push 0x1033b078 */
  push32((uint32_t)(0x1033b078u));
  /* 1031eb58 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031eb5a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1031eb5c push 1 */
  push32((uint32_t)(0x1u));
  /* 1031eb5e call 0x10313ad0 */
  push32(0x1031eb63u); f_10313ad0();
  /* 1031eb63 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031eb66 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1031eb69 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031eb6d jne 0x1031eb79 */
  if (!C.zf) goto L_1031eb79;
  /* 1031eb6f mov eax, 1 */
  EAX = (0x1u);
  /* 1031eb74 jmp 0x1031ec6c */
  goto L_1031ec6c;
L_1031eb79:;
  /* 1031eb79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031eb7c push eax */
  push32((uint32_t)(EAX));
  /* 1031eb7d call 0x1031ec70 */
  push32(0x1031eb82u); f_1031ec70();
  /* 1031eb82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031eb85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031eb87 je 0x1031ebad */
  if (C.zf) goto L_1031ebad;
  /* 1031eb89 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031eb8c push ecx */
  push32((uint32_t)(ECX));
  /* 1031eb8d call 0x1031ef00 */
  push32(0x1031eb92u); f_1031ef00();
  /* 1031eb92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031eb95 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031eb97 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031eb9a push edx */
  push32((uint32_t)(EDX));
  /* 1031eb9b call 0x10314150 */
  push32(0x1031eba0u); f_10314150();
  /* 1031eba0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031eba3 mov eax, 1 */
  EAX = (0x1u);
  /* 1031eba8 jmp 0x1031ec6c */
  goto L_1031ec6c;
L_1031ebad:;
  /* 1031ebad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031ebb0 mov ecx, dword ptr [0x1033ed88] */
  ECX = (r32((uint32_t)(0x1033ed88)));
  /* 1031ebb6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1031ebb8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1031ebba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031ebbd mov ecx, dword ptr [0x1033ed88] */
  ECX = (r32((uint32_t)(0x1033ed88)));
  /* 1031ebc3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1031ebc6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1031ebc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031ebcc mov ecx, dword ptr [0x1033ed88] */
  ECX = (r32((uint32_t)(0x1033ed88)));
  /* 1031ebd2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1031ebd5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1031ebd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031ebdb mov dword ptr [0x1033ed88], eax */
  w32((uint32_t)(0x1033ed88), (EAX));
  /* 1031ebe0 mov ecx, dword ptr [0x1033f6f4] */
  ECX = (r32((uint32_t)(0x1033f6f4)));
  /* 1031ebe6 push ecx */
  push32((uint32_t)(ECX));
  /* 1031ebe7 call 0x1031ef00 */
  push32(0x1031ebecu); f_1031ef00();
  /* 1031ebec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ebef push 2 */
  push32((uint32_t)(0x2u));
  /* 1031ebf1 mov edx, dword ptr [0x1033f6f4] */
  EDX = (r32((uint32_t)(0x1033f6f4)));
  /* 1031ebf7 push edx */
  push32((uint32_t)(EDX));
  /* 1031ebf8 call 0x10314150 */
  push32(0x1031ebfdu); f_10314150();
  /* 1031ebfd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ec00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031ec03 mov dword ptr [0x1033f6f4], eax */
  w32((uint32_t)(0x1033f6f4), (EAX));
  /* 1031ec08 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031ec0a jmp 0x1031ec6c */
  goto L_1031ec6c;
L_1031ec0c:;
  /* 1031ec0c mov ecx, dword ptr [0x1033ed88] */
  ECX = (r32((uint32_t)(0x1033ed88)));
  /* 1031ec12 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1031ec14 mov dword ptr [0x1033ed58], edx */
  w32((uint32_t)(0x1033ed58), (EDX));
  /* 1031ec1a mov eax, dword ptr [0x1033ed88] */
  EAX = (r32((uint32_t)(0x1033ed88)));
  /* 1031ec1f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1031ec22 mov dword ptr [0x1033ed5c], ecx */
  w32((uint32_t)(0x1033ed5c), (ECX));
  /* 1031ec28 mov edx, dword ptr [0x1033ed88] */
  EDX = (r32((uint32_t)(0x1033ed88)));
  /* 1031ec2e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1031ec31 mov dword ptr [0x1033ed60], eax */
  w32((uint32_t)(0x1033ed60), (EAX));
  /* 1031ec36 mov dword ptr [0x1033ed88], 0x1033ed58 */
  w32((uint32_t)(0x1033ed88), (0x1033ed58u));
  /* 1031ec40 mov ecx, dword ptr [0x1033f6f4] */
  ECX = (r32((uint32_t)(0x1033f6f4)));
  /* 1031ec46 push ecx */
  push32((uint32_t)(ECX));
  /* 1031ec47 call 0x1031ef00 */
  push32(0x1031ec4cu); f_1031ef00();
  /* 1031ec4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ec4f push 2 */
  push32((uint32_t)(0x2u));
  /* 1031ec51 mov edx, dword ptr [0x1033f6f4] */
  EDX = (r32((uint32_t)(0x1033f6f4)));
  /* 1031ec57 push edx */
  push32((uint32_t)(EDX));
  /* 1031ec58 call 0x10314150 */
  push32(0x1031ec5du); f_10314150();
  /* 1031ec5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ec60 mov dword ptr [0x1033f6f4], 0 */
  w32((uint32_t)(0x1033f6f4), (0x0u));
  /* 1031ec6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1031ec6c:;
  /* 1031ec6c mov esp, ebp */
  ESP = (EBP);
  /* 1031ec6e pop ebp */
  EBP = (pop32());
  /* 1031ec6f ret  */
  ESPCHK(0x1031eb40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec70 @ 0x1031ec70 (525 bytes, 200 insns) */
void f_1031ec70(void) {
  FTRACE(0x1031ec70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031ec70 push ebp */
  push32((uint32_t)(EBP));
  /* 1031ec71 mov ebp, esp */
  EBP = (ESP);
  /* 1031ec73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031ec76 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1031ec7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031ec7f mov ax, word ptr [0x1033f714] */
  AX = (r16((uint32_t)(0x1033f714)));
  /* 1031ec85 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1031ec88 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031ec8c jne 0x1031ec96 */
  if (!C.zf) goto L_1031ec96;
  /* 1031ec8e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1031ec91 jmp 0x1031ee79 */
  goto L_1031ee79;
L_1031ec96:;
  /* 1031ec96 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031ec99 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ec9c push ecx */
  push32((uint32_t)(ECX));
  /* 1031ec9d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1031ec9f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031eca2 push edx */
  push32((uint32_t)(EDX));
  /* 1031eca3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1031eca5 call 0x10321880 */
  push32(0x1031ecaau); f_10321880();
  /* 1031ecaa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ecad mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031ecb0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031ecb2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1031ecb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031ecb8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ecbb push edx */
  push32((uint32_t)(EDX));
  /* 1031ecbc push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1031ecbe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031ecc1 push eax */
  push32((uint32_t)(EAX));
  /* 1031ecc2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1031ecc4 call 0x10321880 */
  push32(0x1031ecc9u); f_10321880();
  /* 1031ecc9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031eccc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031eccf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031ecd1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1031ecd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031ecd7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ecda push edx */
  push32((uint32_t)(EDX));
  /* 1031ecdb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1031ecdd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031ece0 push eax */
  push32((uint32_t)(EAX));
  /* 1031ece1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1031ece3 call 0x10321880 */
  push32(0x1031ece8u); f_10321880();
  /* 1031ece8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031eceb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031ecee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031ecf0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1031ecf3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031ecf6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ecf9 push edx */
  push32((uint32_t)(EDX));
  /* 1031ecfa push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1031ecfc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031ecff push eax */
  push32((uint32_t)(EAX));
  /* 1031ed00 push 1 */
  push32((uint32_t)(0x1u));
  /* 1031ed02 call 0x10321880 */
  push32(0x1031ed07u); f_10321880();
  /* 1031ed07 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ed0a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031ed0d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031ed0f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1031ed12 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031ed15 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ed18 push edx */
  push32((uint32_t)(EDX));
  /* 1031ed19 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1031ed1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031ed1e push eax */
  push32((uint32_t)(EAX));
  /* 1031ed1f push 1 */
  push32((uint32_t)(0x1u));
  /* 1031ed21 call 0x10321880 */
  push32(0x1031ed26u); f_10321880();
  /* 1031ed26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ed29 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031ed2c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031ed2e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1031ed31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031ed34 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1031ed37 push eax */
  push32((uint32_t)(EAX));
  /* 1031ed38 call 0x1031ee80 */
  push32(0x1031ed3du); f_1031ee80();
  /* 1031ed3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ed40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031ed43 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ed46 push ecx */
  push32((uint32_t)(ECX));
  /* 1031ed47 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1031ed49 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031ed4c push edx */
  push32((uint32_t)(EDX));
  /* 1031ed4d push 1 */
  push32((uint32_t)(0x1u));
  /* 1031ed4f call 0x10321880 */
  push32(0x1031ed54u); f_10321880();
  /* 1031ed54 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ed57 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031ed5a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031ed5c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1031ed5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031ed62 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ed65 push edx */
  push32((uint32_t)(EDX));
  /* 1031ed66 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 1031ed68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031ed6b push eax */
  push32((uint32_t)(EAX));
  /* 1031ed6c push 1 */
  push32((uint32_t)(0x1u));
  /* 1031ed6e call 0x10321880 */
  push32(0x1031ed73u); f_10321880();
  /* 1031ed73 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ed76 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031ed79 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031ed7b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1031ed7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031ed81 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ed84 push edx */
  push32((uint32_t)(EDX));
  /* 1031ed85 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1031ed87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031ed8a push eax */
  push32((uint32_t)(EAX));
  /* 1031ed8b push 0 */
  push32((uint32_t)(0x0u));
  /* 1031ed8d call 0x10321880 */
  push32(0x1031ed92u); f_10321880();
  /* 1031ed92 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ed95 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031ed98 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031ed9a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1031ed9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031eda0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031eda3 push edx */
  push32((uint32_t)(EDX));
  /* 1031eda4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1031eda6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031eda9 push eax */
  push32((uint32_t)(EAX));
  /* 1031edaa push 0 */
  push32((uint32_t)(0x0u));
  /* 1031edac call 0x10321880 */
  push32(0x1031edb1u); f_10321880();
  /* 1031edb1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031edb4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031edb7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031edb9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1031edbc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031edbf add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031edc2 push edx */
  push32((uint32_t)(EDX));
  /* 1031edc3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 1031edc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031edc8 push eax */
  push32((uint32_t)(EAX));
  /* 1031edc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031edcb call 0x10321880 */
  push32(0x1031edd0u); f_10321880();
  /* 1031edd0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031edd3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031edd6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031edd8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1031eddb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031edde add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ede1 push edx */
  push32((uint32_t)(EDX));
  /* 1031ede2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 1031ede4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031ede7 push eax */
  push32((uint32_t)(EAX));
  /* 1031ede8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031edea call 0x10321880 */
  push32(0x1031edefu); f_10321880();
  /* 1031edef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031edf2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031edf5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031edf7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1031edfa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031edfd add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ee00 push edx */
  push32((uint32_t)(EDX));
  /* 1031ee01 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 1031ee03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031ee06 push eax */
  push32((uint32_t)(EAX));
  /* 1031ee07 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031ee09 call 0x10321880 */
  push32(0x1031ee0eu); f_10321880();
  /* 1031ee0e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ee11 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031ee14 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031ee16 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1031ee19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031ee1c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ee1f push edx */
  push32((uint32_t)(EDX));
  /* 1031ee20 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 1031ee22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031ee25 push eax */
  push32((uint32_t)(EAX));
  /* 1031ee26 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031ee28 call 0x10321880 */
  push32(0x1031ee2du); f_10321880();
  /* 1031ee2d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ee30 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031ee33 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031ee35 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1031ee38 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031ee3b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ee3e push edx */
  push32((uint32_t)(EDX));
  /* 1031ee3f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 1031ee41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031ee44 push eax */
  push32((uint32_t)(EAX));
  /* 1031ee45 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031ee47 call 0x10321880 */
  push32(0x1031ee4cu); f_10321880();
  /* 1031ee4c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ee4f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031ee52 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031ee54 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1031ee57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031ee5a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ee5d push edx */
  push32((uint32_t)(EDX));
  /* 1031ee5e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 1031ee60 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031ee63 push eax */
  push32((uint32_t)(EAX));
  /* 1031ee64 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031ee66 call 0x10321880 */
  push32(0x1031ee6bu); f_10321880();
  /* 1031ee6b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ee6e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031ee71 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1031ee73 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1031ee76 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1031ee79:;
  /* 1031ee79 mov esp, ebp */
  ESP = (EBP);
  /* 1031ee7b pop ebp */
  EBP = (pop32());
  /* 1031ee7c ret  */
  ESPCHK(0x1031ec70u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1031ee80 (125 bytes, 49 insns) */
void f_1031ee80(void) {
  FTRACE(0x1031ee80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031ee80 push ebp */
  push32((uint32_t)(EBP));
  /* 1031ee81 mov ebp, esp */
  EBP = (ESP);
  /* 1031ee83 push ecx */
  push32((uint32_t)(ECX));
L_1031ee84:;
  /* 1031ee84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031ee87 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1031ee8a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1031ee8c je 0x1031eef9 */
  if (C.zf) goto L_1031eef9;
  /* 1031ee8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031ee91 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1031ee94 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031ee97 jl 0x1031eebd */
  if ((C.sf!=C.of)) goto L_1031eebd;
  /* 1031ee99 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031ee9c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1031ee9f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031eea2 jg 0x1031eebd */
  if ((!C.zf&&C.sf==C.of)) goto L_1031eebd;
  /* 1031eea4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031eea7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1031eeaa sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031eead mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031eeb0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1031eeb2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031eeb5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031eeb8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1031eebb jmp 0x1031eef7 */
  goto L_1031eef7;
L_1031eebd:;
  /* 1031eebd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031eec0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1031eec3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031eec6 jne 0x1031eeee */
  if (!C.zf) goto L_1031eeee;
  /* 1031eec8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031eecb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1031eece:;
  /* 1031eece mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031eed1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031eed4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1031eed7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1031eed9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031eedc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031eedf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1031eee2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031eee5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1031eee8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031eeea jne 0x1031eece */
  if (!C.zf) goto L_1031eece;
  /* 1031eeec jmp 0x1031eef7 */
  goto L_1031eef7;
L_1031eeee:;
  /* 1031eeee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031eef1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031eef4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1031eef7:;
  /* 1031eef7 jmp 0x1031ee84 */
  goto L_1031ee84;
L_1031eef9:;
  /* 1031eef9 mov esp, ebp */
  ESP = (EBP);
  /* 1031eefb pop ebp */
  EBP = (pop32());
  /* 1031eefc ret  */
  ESPCHK(0x1031ee80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef00 @ 0x1031ef00 (147 bytes, 52 insns) */
void f_1031ef00(void) {
  FTRACE(0x1031ef00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031ef00 push ebp */
  push32((uint32_t)(EBP));
  /* 1031ef01 mov ebp, esp */
  EBP = (ESP);
  /* 1031ef03 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031ef07 jne 0x1031ef0e */
  if (!C.zf) goto L_1031ef0e;
  /* 1031ef09 jmp 0x1031ef91 */
  goto L_1031ef91;
L_1031ef0e:;
  /* 1031ef0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031ef11 cmp dword ptr [eax + 0xc], 0x1033f750 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x1033f750u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031ef18 je 0x1031ef91 */
  if (C.zf) goto L_1031ef91;
  /* 1031ef1a push 2 */
  push32((uint32_t)(0x2u));
  /* 1031ef1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031ef1f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1031ef22 push edx */
  push32((uint32_t)(EDX));
  /* 1031ef23 call 0x10314150 */
  push32(0x1031ef28u); f_10314150();
  /* 1031ef28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ef2b push 2 */
  push32((uint32_t)(0x2u));
  /* 1031ef2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031ef30 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1031ef33 push ecx */
  push32((uint32_t)(ECX));
  /* 1031ef34 call 0x10314150 */
  push32(0x1031ef39u); f_10314150();
  /* 1031ef39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ef3c push 2 */
  push32((uint32_t)(0x2u));
  /* 1031ef3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031ef41 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1031ef44 push eax */
  push32((uint32_t)(EAX));
  /* 1031ef45 call 0x10314150 */
  push32(0x1031ef4au); f_10314150();
  /* 1031ef4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ef4d push 2 */
  push32((uint32_t)(0x2u));
  /* 1031ef4f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031ef52 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1031ef55 push edx */
  push32((uint32_t)(EDX));
  /* 1031ef56 call 0x10314150 */
  push32(0x1031ef5bu); f_10314150();
  /* 1031ef5b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ef5e push 2 */
  push32((uint32_t)(0x2u));
  /* 1031ef60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031ef63 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1031ef66 push ecx */
  push32((uint32_t)(ECX));
  /* 1031ef67 call 0x10314150 */
  push32(0x1031ef6cu); f_10314150();
  /* 1031ef6c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ef6f push 2 */
  push32((uint32_t)(0x2u));
  /* 1031ef71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031ef74 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1031ef77 push eax */
  push32((uint32_t)(EAX));
  /* 1031ef78 call 0x10314150 */
  push32(0x1031ef7du); f_10314150();
  /* 1031ef7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ef80 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031ef82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031ef85 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1031ef88 push edx */
  push32((uint32_t)(EDX));
  /* 1031ef89 call 0x10314150 */
  push32(0x1031ef8eu); f_10314150();
  /* 1031ef8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1031ef91:;
  /* 1031ef91 pop ebp */
  EBP = (pop32());
  /* 1031ef92 ret  */
  ESPCHK(0x1031ef00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000efa0 @ 0x1031efa0 (928 bytes, 284 insns) */
void f_1031efa0(void) {
  FTRACE(0x1031efa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031efa0 push ebp */
  push32((uint32_t)(EBP));
  /* 1031efa1 mov ebp, esp */
  EBP = (ESP);
  /* 1031efa3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031efa6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 1031efad mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1031efb4 cmp dword ptr [0x1033f6b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f6b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031efbb je 0x1031f2f1 */
  if (C.zf) goto L_1031f2f1;
  /* 1031efc1 cmp dword ptr [0x1033f6c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f6c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031efc8 jne 0x1031eff0 */
  if (!C.zf) goto L_1031eff0;
  /* 1031efca push 0x1033f6c8 */
  push32((uint32_t)(0x1033f6c8u));
  /* 1031efcf push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 1031efd4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031efd6 mov ax, word ptr [0x1033f70c] */
  AX = (r16((uint32_t)(0x1033f70c)));
  /* 1031efdc push eax */
  push32((uint32_t)(EAX));
  /* 1031efdd push 0 */
  push32((uint32_t)(0x0u));
  /* 1031efdf call 0x10321880 */
  push32(0x1031efe4u); f_10321880();
  /* 1031efe4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031efe7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031efe9 je 0x1031eff0 */
  if (C.zf) goto L_1031eff0;
  /* 1031efeb jmp 0x1031f2b2 */
  goto L_1031f2b2;
L_1031eff0:;
  /* 1031eff0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 1031eff2 push 0x1033b084 */
  push32((uint32_t)(0x1033b084u));
  /* 1031eff7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031eff9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1031effe call 0x103136c0 */
  push32(0x1031f003u); f_103136c0();
  /* 1031f003 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f006 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1031f009 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1031f00b push 0x1033b084 */
  push32((uint32_t)(0x1033b084u));
  /* 1031f010 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031f012 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1031f017 call 0x103136c0 */
  push32(0x1031f01cu); f_103136c0();
  /* 1031f01c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f01f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1031f022 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 1031f024 push 0x1033b084 */
  push32((uint32_t)(0x1033b084u));
  /* 1031f029 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031f02b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1031f030 call 0x103136c0 */
  push32(0x1031f035u); f_103136c0();
  /* 1031f035 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f038 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1031f03b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 1031f03d push 0x1033b084 */
  push32((uint32_t)(0x1033b084u));
  /* 1031f042 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031f044 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1031f049 call 0x103136c0 */
  push32(0x1031f04eu); f_103136c0();
  /* 1031f04e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f051 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1031f054 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031f058 je 0x1031f06c */
  if (C.zf) goto L_1031f06c;
  /* 1031f05a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031f05e je 0x1031f06c */
  if (C.zf) goto L_1031f06c;
  /* 1031f060 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031f064 je 0x1031f06c */
  if (C.zf) goto L_1031f06c;
  /* 1031f066 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031f06a jne 0x1031f071 */
  if (!C.zf) goto L_1031f071;
L_1031f06c:;
  /* 1031f06c jmp 0x1031f2b2 */
  goto L_1031f2b2;
L_1031f071:;
  /* 1031f071 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1031f074 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1031f077 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1031f07e jmp 0x1031f089 */
  goto L_1031f089;
L_1031f080:;
  /* 1031f080 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1031f083 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f086 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1031f089:;
  /* 1031f089 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031f090 jge 0x1031f0a5 */
  if ((C.sf==C.of)) goto L_1031f0a5;
  /* 1031f092 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1031f095 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 1031f098 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1031f09a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1031f09d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f0a0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1031f0a3 jmp 0x1031f080 */
  goto L_1031f080;
L_1031f0a5:;
  /* 1031f0a5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1031f0a8 push eax */
  push32((uint32_t)(EAX));
  /* 1031f0a9 mov ecx, dword ptr [0x1033f6c8] */
  ECX = (r32((uint32_t)(0x1033f6c8)));
  /* 1031f0af push ecx */
  push32((uint32_t)(ECX));
  /* 1031f0b0 call dword ptr [0x10342364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342364))), 0x1031f0b6u);
  /* 1031f0b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031f0b8 jne 0x1031f0bf */
  if (!C.zf) goto L_1031f0bf;
  /* 1031f0ba jmp 0x1031f2b2 */
  goto L_1031f2b2;
L_1031f0bf:;
  /* 1031f0bf cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031f0c3 jbe 0x1031f0ca */
  if ((C.cf||C.zf)) goto L_1031f0ca;
  /* 1031f0c5 jmp 0x1031f2b2 */
  goto L_1031f2b2;
L_1031f0ca:;
  /* 1031f0ca mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1031f0cd and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1031f0d3 mov dword ptr [0x1033dea4], edx */
  w32((uint32_t)(0x1033dea4), (EDX));
  /* 1031f0d9 cmp dword ptr [0x1033dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1033dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031f0e0 jle 0x1031f139 */
  if ((C.zf||C.sf!=C.of)) goto L_1031f139;
  /* 1031f0e2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 1031f0e5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1031f0e8 jmp 0x1031f0f3 */
  goto L_1031f0f3;
L_1031f0ea:;
  /* 1031f0ea mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1031f0ed add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f0f0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1031f0f3:;
  /* 1031f0f3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1031f0f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031f0f8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1031f0fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031f0fc je 0x1031f139 */
  if (C.zf) goto L_1031f139;
  /* 1031f0fe mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1031f101 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1031f103 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1031f106 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1031f108 je 0x1031f139 */
  if (C.zf) goto L_1031f139;
  /* 1031f10a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1031f10d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1031f10f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1031f111 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1031f114 jmp 0x1031f11f */
  goto L_1031f11f;
L_1031f116:;
  /* 1031f116 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1031f119 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f11c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1031f11f:;
  /* 1031f11f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1031f122 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1031f124 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1031f127 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031f12a jg 0x1031f137 */
  if ((!C.zf&&C.sf==C.of)) goto L_1031f137;
  /* 1031f12c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1031f12f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f132 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1031f135 jmp 0x1031f116 */
  goto L_1031f116;
L_1031f137:;
  /* 1031f137 jmp 0x1031f0ea */
  goto L_1031f0ea;
L_1031f139:;
  /* 1031f139 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031f13b push 0 */
  push32((uint32_t)(0x0u));
  /* 1031f13d push 0 */
  push32((uint32_t)(0x0u));
  /* 1031f13f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1031f142 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f145 push eax */
  push32((uint32_t)(EAX));
  /* 1031f146 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1031f14b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1031f14e push ecx */
  push32((uint32_t)(ECX));
  /* 1031f14f push 1 */
  push32((uint32_t)(0x1u));
  /* 1031f151 call 0x1031b8f0 */
  push32(0x1031f156u); f_1031b8f0();
  /* 1031f156 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f159 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031f15b jne 0x1031f162 */
  if (!C.zf) goto L_1031f162;
  /* 1031f15d jmp 0x1031f2b2 */
  goto L_1031f2b2;
L_1031f162:;
  /* 1031f162 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1031f165 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 1031f16a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1031f16d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1031f170 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1031f177 jmp 0x1031f182 */
  goto L_1031f182;
L_1031f179:;
  /* 1031f179 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1031f17c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f17f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1031f182:;
  /* 1031f182 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031f189 jge 0x1031f1a0 */
  if ((C.sf==C.of)) goto L_1031f1a0;
  /* 1031f18b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1031f18e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 1031f192 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1031f195 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1031f198 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f19b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1031f19e jmp 0x1031f179 */
  goto L_1031f179;
L_1031f1a0:;
  /* 1031f1a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031f1a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031f1a4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1031f1a7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f1aa push edx */
  push32((uint32_t)(EDX));
  /* 1031f1ab push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1031f1b0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1031f1b3 push eax */
  push32((uint32_t)(EAX));
  /* 1031f1b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1031f1b6 call 0x10321b20 */
  push32(0x1031f1bbu); f_10321b20();
  /* 1031f1bb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f1be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031f1c0 jne 0x1031f1c7 */
  if (!C.zf) goto L_1031f1c7;
  /* 1031f1c2 jmp 0x1031f2b2 */
  goto L_1031f2b2;
L_1031f1c7:;
  /* 1031f1c7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1031f1ca mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 1031f1cf cmp dword ptr [0x1033dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1033dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031f1d6 jle 0x1031f233 */
  if ((C.zf||C.sf!=C.of)) goto L_1031f233;
  /* 1031f1d8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 1031f1db mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1031f1de jmp 0x1031f1e9 */
  goto L_1031f1e9;
L_1031f1e0:;
  /* 1031f1e0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1031f1e3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f1e6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1031f1e9:;
  /* 1031f1e9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1031f1ec xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1031f1ee mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1031f1f0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1031f1f2 je 0x1031f233 */
  if (C.zf) goto L_1031f233;
  /* 1031f1f4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1031f1f7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1031f1f9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1031f1fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1031f1fe je 0x1031f233 */
  if (C.zf) goto L_1031f233;
  /* 1031f200 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1031f203 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031f205 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1031f207 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1031f20a jmp 0x1031f215 */
  goto L_1031f215;
L_1031f20c:;
  /* 1031f20c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1031f20f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f212 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1031f215:;
  /* 1031f215 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1031f218 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031f21a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1031f21d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031f220 jg 0x1031f231 */
  if ((!C.zf&&C.sf==C.of)) goto L_1031f231;
  /* 1031f222 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1031f225 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1031f228 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 1031f22f jmp 0x1031f20c */
  goto L_1031f20c;
L_1031f231:;
  /* 1031f231 jmp 0x1031f1e0 */
  goto L_1031f1e0;
L_1031f233:;
  /* 1031f233 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1031f236 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f239 mov dword ptr [0x1033dc98], eax */
  w32((uint32_t)(0x1033dc98), (EAX));
  /* 1031f23e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1031f241 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f244 mov dword ptr [0x1033dc9c], ecx */
  w32((uint32_t)(0x1033dc9c), (ECX));
  /* 1031f24a cmp dword ptr [0x1033f6f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f6f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031f251 je 0x1031f264 */
  if (C.zf) goto L_1031f264;
  /* 1031f253 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031f255 mov edx, dword ptr [0x1033f6f8] */
  EDX = (r32((uint32_t)(0x1033f6f8)));
  /* 1031f25b push edx */
  push32((uint32_t)(EDX));
  /* 1031f25c call 0x10314150 */
  push32(0x1031f261u); f_10314150();
  /* 1031f261 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1031f264:;
  /* 1031f264 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1031f267 mov dword ptr [0x1033f6f8], eax */
  w32((uint32_t)(0x1033f6f8), (EAX));
  /* 1031f26c cmp dword ptr [0x1033f6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031f273 je 0x1031f286 */
  if (C.zf) goto L_1031f286;
  /* 1031f275 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031f277 mov ecx, dword ptr [0x1033f6fc] */
  ECX = (r32((uint32_t)(0x1033f6fc)));
  /* 1031f27d push ecx */
  push32((uint32_t)(ECX));
  /* 1031f27e call 0x10314150 */
  push32(0x1031f283u); f_10314150();
  /* 1031f283 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1031f286:;
  /* 1031f286 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1031f289 mov dword ptr [0x1033f6fc], edx */
  w32((uint32_t)(0x1033f6fc), (EDX));
  /* 1031f28f push 2 */
  push32((uint32_t)(0x2u));
  /* 1031f291 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1031f294 push eax */
  push32((uint32_t)(EAX));
  /* 1031f295 call 0x10314150 */
  push32(0x1031f29au); f_10314150();
  /* 1031f29a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f29d push 2 */
  push32((uint32_t)(0x2u));
  /* 1031f29f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1031f2a2 push ecx */
  push32((uint32_t)(ECX));
  /* 1031f2a3 call 0x10314150 */
  push32(0x1031f2a8u); f_10314150();
  /* 1031f2a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f2ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031f2ad jmp 0x1031f33c */
  goto L_1031f33c;
L_1031f2b2:;
  /* 1031f2b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031f2b4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1031f2b7 push edx */
  push32((uint32_t)(EDX));
  /* 1031f2b8 call 0x10314150 */
  push32(0x1031f2bdu); f_10314150();
  /* 1031f2bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f2c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031f2c2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1031f2c5 push eax */
  push32((uint32_t)(EAX));
  /* 1031f2c6 call 0x10314150 */
  push32(0x1031f2cbu); f_10314150();
  /* 1031f2cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f2ce push 2 */
  push32((uint32_t)(0x2u));
  /* 1031f2d0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1031f2d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1031f2d4 call 0x10314150 */
  push32(0x1031f2d9u); f_10314150();
  /* 1031f2d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f2dc push 2 */
  push32((uint32_t)(0x2u));
  /* 1031f2de mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1031f2e1 push edx */
  push32((uint32_t)(EDX));
  /* 1031f2e2 call 0x10314150 */
  push32(0x1031f2e7u); f_10314150();
  /* 1031f2e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f2ea mov eax, 1 */
  EAX = (0x1u);
  /* 1031f2ef jmp 0x1031f33c */
  goto L_1031f33c;
L_1031f2f1:;
  /* 1031f2f1 mov dword ptr [0x1033dc98], 0x1033dca2 */
  w32((uint32_t)(0x1033dc98), (0x1033dca2u));
  /* 1031f2fb mov dword ptr [0x1033dc9c], 0x1033dca2 */
  w32((uint32_t)(0x1033dc9c), (0x1033dca2u));
  /* 1031f305 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031f307 mov eax, dword ptr [0x1033f6f8] */
  EAX = (r32((uint32_t)(0x1033f6f8)));
  /* 1031f30c push eax */
  push32((uint32_t)(EAX));
  /* 1031f30d call 0x10314150 */
  push32(0x1031f312u); f_10314150();
  /* 1031f312 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f315 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031f317 mov ecx, dword ptr [0x1033f6fc] */
  ECX = (r32((uint32_t)(0x1033f6fc)));
  /* 1031f31d push ecx */
  push32((uint32_t)(ECX));
  /* 1031f31e call 0x10314150 */
  push32(0x1031f323u); f_10314150();
  /* 1031f323 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f326 mov dword ptr [0x1033f6f8], 0 */
  w32((uint32_t)(0x1033f6f8), (0x0u));
  /* 1031f330 mov dword ptr [0x1033f6fc], 0 */
  w32((uint32_t)(0x1033f6fc), (0x0u));
  /* 1031f33a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1031f33c:;
  /* 1031f33c mov esp, ebp */
  ESP = (EBP);
  /* 1031f33e pop ebp */
  EBP = (pop32());
  /* 1031f33f ret  */
  ESPCHK(0x1031efa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f340 @ 0x1031f340 (7 bytes, 5 insns) */
void f_1031f340(void) {
  FTRACE(0x1031f340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031f340 push ebp */
  push32((uint32_t)(EBP));
  /* 1031f341 mov ebp, esp */
  EBP = (ESP);
  /* 1031f343 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031f345 pop ebp */
  EBP = (pop32());
  /* 1031f346 ret  */
  ESPCHK(0x1031f340u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x1031f350 (129 bytes, 56 insns) */
void f_1031f350(void) {
  FTRACE(0x1031f350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031f350 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1031f354 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1031f358 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1031f35e jne 0x1031f39c */
  if (!C.zf) goto L_1031f39c;
L_1031f360:;
  /* 1031f360 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1031f362 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1031f364 jne 0x1031f394 */
  if (!C.zf) goto L_1031f394;
  /* 1031f366 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1031f368 je 0x1031f390 */
  if (C.zf) goto L_1031f390;
  /* 1031f36a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1031f36d jne 0x1031f394 */
  if (!C.zf) goto L_1031f394;
  /* 1031f36f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1031f371 je 0x1031f390 */
  if (C.zf) goto L_1031f390;
  /* 1031f373 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1031f376 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1031f379 jne 0x1031f394 */
  if (!C.zf) goto L_1031f394;
  /* 1031f37b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1031f37d je 0x1031f390 */
  if (C.zf) goto L_1031f390;
  /* 1031f37f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1031f382 jne 0x1031f394 */
  if (!C.zf) goto L_1031f394;
  /* 1031f384 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f387 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f38a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1031f38c jne 0x1031f360 */
  if (!C.zf) goto L_1031f360;
  /* 1031f38e mov edi, edi */
  EDI = (EDI);
L_1031f390:;
  /* 1031f390 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031f392 ret  */
  ESPCHK(0x1031f350u, _esp0);
  ESP += 4; return;
  /* 1031f393 nop  */
  /* nop */
L_1031f394:;
  /* 1031f394 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031f396 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1031f398 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1031f399 ret  */
  ESPCHK(0x1031f350u, _esp0);
  ESP += 4; return;
  /* 1031f39a mov edi, edi */
  EDI = (EDI);
L_1031f39c:;
  /* 1031f39c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 1031f3a2 je 0x1031f3b8 */
  if (C.zf) goto L_1031f3b8;
  /* 1031f3a4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1031f3a6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1031f3a7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1031f3a9 jne 0x1031f394 */
  if (!C.zf) goto L_1031f394;
  /* 1031f3ab inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1031f3ac or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1031f3ae je 0x1031f390 */
  if (C.zf) goto L_1031f390;
  /* 1031f3b0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 1031f3b6 je 0x1031f360 */
  if (C.zf) goto L_1031f360;
L_1031f3b8:;
  /* 1031f3b8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1031f3bb add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f3be cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1031f3c0 jne 0x1031f394 */
  if (!C.zf) goto L_1031f394;
  /* 1031f3c2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1031f3c4 je 0x1031f390 */
  if (C.zf) goto L_1031f390;
  /* 1031f3c6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1031f3c9 jne 0x1031f394 */
  if (!C.zf) goto L_1031f394;
  /* 1031f3cb or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1031f3cd je 0x1031f390 */
  if (C.zf) goto L_1031f390;
  /* 1031f3cf add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f3d2 jmp 0x1031f360 */
  goto L_1031f360;
}

/* FUN_1000f3e0 @ 0x1031f3e0 (62 bytes, 35 insns) */
void f_1031f3e0(void) {
  FTRACE(0x1031f3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031f3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1031f3e1 mov ebp, esp */
  EBP = (ESP);
  /* 1031f3e3 push esi */
  push32((uint32_t)(ESI));
  /* 1031f3e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031f3e6 push eax */
  push32((uint32_t)(EAX));
  /* 1031f3e7 push eax */
  push32((uint32_t)(EAX));
  /* 1031f3e8 push eax */
  push32((uint32_t)(EAX));
  /* 1031f3e9 push eax */
  push32((uint32_t)(EAX));
  /* 1031f3ea push eax */
  push32((uint32_t)(EAX));
  /* 1031f3eb push eax */
  push32((uint32_t)(EAX));
  /* 1031f3ec push eax */
  push32((uint32_t)(EAX));
  /* 1031f3ed push eax */
  push32((uint32_t)(EAX));
  /* 1031f3ee mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031f3f1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1031f3f4:;
  /* 1031f3f4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1031f3f6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1031f3f8 je 0x1031f401 */
  if (C.zf) goto L_1031f401;
  /* 1031f3fa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1031f3fb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1031f3fb");
  /* 1031f3ff jmp 0x1031f3f4 */
  goto L_1031f3f4;
L_1031f401:;
  /* 1031f401 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1031f404 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1031f407 nop  */
  /* nop */
L_1031f408:;
  /* 1031f408 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1031f409 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1031f40b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1031f40d je 0x1031f416 */
  if (C.zf) goto L_1031f416;
  /* 1031f40f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1031f410 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1031f410");
  /* 1031f414 jae 0x1031f408 */
  if (!C.cf) goto L_1031f408;
L_1031f416:;
  /* 1031f416 mov eax, ecx */
  EAX = (ECX);
  /* 1031f418 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f41b pop esi */
  ESI = (pop32());
  /* 1031f41c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1031f41d ret  */
  ESPCHK(0x1031f3e0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x1031f420 (56 bytes, 31 insns) */
void f_1031f420(void) {
  FTRACE(0x1031f420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031f420 push ebp */
  push32((uint32_t)(EBP));
  /* 1031f421 mov ebp, esp */
  EBP = (ESP);
  /* 1031f423 push edi */
  push32((uint32_t)(EDI));
  /* 1031f424 push esi */
  push32((uint32_t)(ESI));
  /* 1031f425 push ebx */
  push32((uint32_t)(EBX));
  /* 1031f426 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1031f429 jecxz 0x1031f451 */
  x86_unimpl("jecxz @ 0x1031f429");
  /* 1031f42b mov ebx, ecx */
  EBX = (ECX);
  /* 1031f42d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1031f430 mov esi, edi */
  ESI = (EDI);
  /* 1031f432 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031f434 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 1031f436 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1031f438 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f43a mov edi, esi */
  EDI = (ESI);
  /* 1031f43c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1031f43f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 1031f441 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 1031f444 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1031f446 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1031f449 ja 0x1031f44f */
  if ((!C.cf&&!C.zf)) goto L_1031f44f;
  /* 1031f44b je 0x1031f451 */
  if (C.zf) goto L_1031f451;
  /* 1031f44d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1031f44e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1031f44f:;
  /* 1031f44f not ecx */
  ECX = (~(ECX));
L_1031f451:;
  /* 1031f451 mov eax, ecx */
  EAX = (ECX);
  /* 1031f453 pop ebx */
  EBX = (pop32());
  /* 1031f454 pop esi */
  ESI = (pop32());
  /* 1031f455 pop edi */
  EDI = (pop32());
  /* 1031f456 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1031f457 ret  */
  ESPCHK(0x1031f420u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f460 @ 0x1031f460 (58 bytes, 32 insns) */
void f_1031f460(void) {
  FTRACE(0x1031f460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031f460 push ebp */
  push32((uint32_t)(EBP));
  /* 1031f461 mov ebp, esp */
  EBP = (ESP);
  /* 1031f463 push esi */
  push32((uint32_t)(ESI));
  /* 1031f464 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031f466 push eax */
  push32((uint32_t)(EAX));
  /* 1031f467 push eax */
  push32((uint32_t)(EAX));
  /* 1031f468 push eax */
  push32((uint32_t)(EAX));
  /* 1031f469 push eax */
  push32((uint32_t)(EAX));
  /* 1031f46a push eax */
  push32((uint32_t)(EAX));
  /* 1031f46b push eax */
  push32((uint32_t)(EAX));
  /* 1031f46c push eax */
  push32((uint32_t)(EAX));
  /* 1031f46d push eax */
  push32((uint32_t)(EAX));
  /* 1031f46e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031f471 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1031f474:;
  /* 1031f474 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1031f476 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1031f478 je 0x1031f481 */
  if (C.zf) goto L_1031f481;
  /* 1031f47a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1031f47b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1031f47b");
  /* 1031f47f jmp 0x1031f474 */
  goto L_1031f474;
L_1031f481:;
  /* 1031f481 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_1031f484:;
  /* 1031f484 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1031f486 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1031f488 je 0x1031f494 */
  if (C.zf) goto L_1031f494;
  /* 1031f48a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1031f48b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1031f48b");
  /* 1031f48f jae 0x1031f484 */
  if (!C.cf) goto L_1031f484;
  /* 1031f491 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_1031f494:;
  /* 1031f494 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f497 pop esi */
  ESI = (pop32());
  /* 1031f498 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1031f499 ret  */
  ESPCHK(0x1031f460u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f4a0 @ 0x1031f4a0 (512 bytes, 147 insns) */
void f_1031f4a0(void) {
  FTRACE(0x1031f4a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031f4a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1031f4a1 mov ebp, esp */
  EBP = (ESP);
  /* 1031f4a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031f4a6 cmp dword ptr [0x1033f744], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f744))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031f4ad jne 0x1031f4d2 */
  if (!C.zf) goto L_1031f4d2;
  /* 1031f4af call 0x1031ff70 */
  push32(0x1031f4b4u); f_1031ff70();
  /* 1031f4b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031f4b6 je 0x1031f4c2 */
  if (C.zf) goto L_1031f4c2;
  /* 1031f4b8 mov eax, dword ptr [0x10342280] */
  EAX = (r32((uint32_t)(0x10342280)));
  /* 1031f4bd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1031f4c0 jmp 0x1031f4c9 */
  goto L_1031f4c9;
L_1031f4c2:;
  /* 1031f4c2 mov dword ptr [ebp - 8], 0x1031ffc0 */
  w32((uint32_t)(EBP + -0x8), (0x1031ffc0u));
L_1031f4c9:;
  /* 1031f4c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031f4cc mov dword ptr [0x1033f744], ecx */
  w32((uint32_t)(0x1033f744), (ECX));
L_1031f4d2:;
  /* 1031f4d2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031f4d6 jne 0x1031f4e2 */
  if (!C.zf) goto L_1031f4e2;
  /* 1031f4d8 call 0x1031fdc0 */
  push32(0x1031f4ddu); f_1031fdc0();
  /* 1031f4dd jmp 0x1031f5ae */
  goto L_1031f5ae;
L_1031f4e2:;
  /* 1031f4e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031f4e5 mov dword ptr [0x1033f734], edx */
  w32((uint32_t)(0x1033f734), (EDX));
  /* 1031f4eb cmp dword ptr [0x1033f734], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f734))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031f4f2 je 0x1031f514 */
  if (C.zf) goto L_1031f514;
  /* 1031f4f4 mov eax, dword ptr [0x1033f734] */
  EAX = (r32((uint32_t)(0x1033f734)));
  /* 1031f4f9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1031f4fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1031f4fe je 0x1031f514 */
  if (C.zf) goto L_1031f514;
  /* 1031f500 push 0x1033f734 */
  push32((uint32_t)(0x1033f734u));
  /* 1031f505 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1031f507 push 0x1033ea90 */
  push32((uint32_t)(0x1033ea90u));
  /* 1031f50c call 0x1031f6a0 */
  push32(0x1031f511u); f_1031f6a0();
  /* 1031f511 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1031f514:;
  /* 1031f514 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031f517 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f51a mov dword ptr [0x1033f738], edx */
  w32((uint32_t)(0x1033f738), (EDX));
  /* 1031f520 cmp dword ptr [0x1033f738], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f738))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031f527 je 0x1031f549 */
  if (C.zf) goto L_1031f549;
  /* 1031f529 mov eax, dword ptr [0x1033f738] */
  EAX = (r32((uint32_t)(0x1033f738)));
  /* 1031f52e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1031f531 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1031f533 je 0x1031f549 */
  if (C.zf) goto L_1031f549;
  /* 1031f535 push 0x1033f738 */
  push32((uint32_t)(0x1033f738u));
  /* 1031f53a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1031f53c push 0x1033e9d8 */
  push32((uint32_t)(0x1033e9d8u));
  /* 1031f541 call 0x1031f6a0 */
  push32(0x1031f546u); f_1031f6a0();
  /* 1031f546 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1031f549:;
  /* 1031f549 mov dword ptr [0x1033f73c], 0 */
  w32((uint32_t)(0x1033f73c), (0x0u));
  /* 1031f553 cmp dword ptr [0x1033f734], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f734))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031f55a je 0x1031f58d */
  if (C.zf) goto L_1031f58d;
  /* 1031f55c mov edx, dword ptr [0x1033f734] */
  EDX = (r32((uint32_t)(0x1033f734)));
  /* 1031f562 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1031f565 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031f567 je 0x1031f58d */
  if (C.zf) goto L_1031f58d;
  /* 1031f569 cmp dword ptr [0x1033f738], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f738))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031f570 je 0x1031f586 */
  if (C.zf) goto L_1031f586;
  /* 1031f572 mov ecx, dword ptr [0x1033f738] */
  ECX = (r32((uint32_t)(0x1033f738)));
  /* 1031f578 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1031f57b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1031f57d je 0x1031f586 */
  if (C.zf) goto L_1031f586;
  /* 1031f57f call 0x1031f730 */
  push32(0x1031f584u); f_1031f730();
  /* 1031f584 jmp 0x1031f58b */
  goto L_1031f58b;
L_1031f586:;
  /* 1031f586 call 0x1031fb20 */
  push32(0x1031f58bu); f_1031fb20();
L_1031f58b:;
  /* 1031f58b jmp 0x1031f5ae */
  goto L_1031f5ae;
L_1031f58d:;
  /* 1031f58d cmp dword ptr [0x1033f738], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f738))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031f594 je 0x1031f5a9 */
  if (C.zf) goto L_1031f5a9;
  /* 1031f596 mov eax, dword ptr [0x1033f738] */
  EAX = (r32((uint32_t)(0x1033f738)));
  /* 1031f59b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1031f59e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1031f5a0 je 0x1031f5a9 */
  if (C.zf) goto L_1031f5a9;
  /* 1031f5a2 call 0x1031fcc0 */
  push32(0x1031f5a7u); f_1031fcc0();
  /* 1031f5a7 jmp 0x1031f5ae */
  goto L_1031f5ae;
L_1031f5a9:;
  /* 1031f5a9 call 0x1031fdc0 */
  push32(0x1031f5aeu); f_1031fdc0();
L_1031f5ae:;
  /* 1031f5ae cmp dword ptr [0x1033f73c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f73c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031f5b5 jne 0x1031f5be */
  if (!C.zf) goto L_1031f5be;
  /* 1031f5b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031f5b9 jmp 0x1031f69c */
  goto L_1031f69c;
L_1031f5be:;
  /* 1031f5be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031f5c1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f5c7 push edx */
  push32((uint32_t)(EDX));
  /* 1031f5c8 call 0x1031fdf0 */
  push32(0x1031f5cdu); f_1031fdf0();
  /* 1031f5cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f5d0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1031f5d3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031f5d7 je 0x1031f5ec */
  if (C.zf) goto L_1031f5ec;
  /* 1031f5d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031f5dc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1031f5e1 push eax */
  push32((uint32_t)(EAX));
  /* 1031f5e2 call dword ptr [0x10342284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342284))), 0x1031f5e8u);
  /* 1031f5e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031f5ea jne 0x1031f5f3 */
  if (!C.zf) goto L_1031f5f3;
L_1031f5ec:;
  /* 1031f5ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031f5ee jmp 0x1031f69c */
  goto L_1031f69c;
L_1031f5f3:;
  /* 1031f5f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1031f5f5 mov ecx, dword ptr [0x1033f724] */
  ECX = (r32((uint32_t)(0x1033f724)));
  /* 1031f5fb push ecx */
  push32((uint32_t)(ECX));
  /* 1031f5fc call dword ptr [0x10342288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342288))), 0x1031f602u);
  /* 1031f602 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031f604 jne 0x1031f60d */
  if (!C.zf) goto L_1031f60d;
  /* 1031f606 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031f608 jmp 0x1031f69c */
  goto L_1031f69c;
L_1031f60d:;
  /* 1031f60d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031f611 je 0x1031f638 */
  if (C.zf) goto L_1031f638;
  /* 1031f613 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031f616 mov ax, word ptr [0x1033f724] */
  AX = (r16((uint32_t)(0x1033f724)));
  /* 1031f61c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1031f61f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031f622 mov dx, word ptr [0x1033f740] */
  DX = (r16((uint32_t)(0x1033f740)));
  /* 1031f629 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 1031f62d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031f630 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 1031f634 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_1031f638:;
  /* 1031f638 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031f63c je 0x1031f697 */
  if (C.zf) goto L_1031f697;
  /* 1031f63e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1031f640 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1031f643 push edx */
  push32((uint32_t)(EDX));
  /* 1031f644 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 1031f649 mov eax, dword ptr [0x1033f724] */
  EAX = (r32((uint32_t)(0x1033f724)));
  /* 1031f64e push eax */
  push32((uint32_t)(EAX));
  /* 1031f64f call dword ptr [0x1033f744] */
  call_ind((uint32_t)(r32((uint32_t)(0x1033f744))), 0x1031f655u);
  /* 1031f655 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031f657 jne 0x1031f65d */
  if (!C.zf) goto L_1031f65d;
  /* 1031f659 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031f65b jmp 0x1031f69c */
  goto L_1031f69c;
L_1031f65d:;
  /* 1031f65d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1031f65f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1031f662 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f665 push ecx */
  push32((uint32_t)(ECX));
  /* 1031f666 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 1031f66b mov edx, dword ptr [0x1033f740] */
  EDX = (r32((uint32_t)(0x1033f740)));
  /* 1031f671 push edx */
  push32((uint32_t)(EDX));
  /* 1031f672 call dword ptr [0x1033f744] */
  call_ind((uint32_t)(r32((uint32_t)(0x1033f744))), 0x1031f678u);
  /* 1031f678 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031f67a jne 0x1031f680 */
  if (!C.zf) goto L_1031f680;
  /* 1031f67c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031f67e jmp 0x1031f69c */
  goto L_1031f69c;
L_1031f680:;
  /* 1031f680 push 0xa */
  push32((uint32_t)(0xau));
  /* 1031f682 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1031f685 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f68a push eax */
  push32((uint32_t)(EAX));
  /* 1031f68b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031f68e push ecx */
  push32((uint32_t)(ECX));
  /* 1031f68f call 0x10316200 */
  push32(0x1031f694u); f_10316200();
  /* 1031f694 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1031f697:;
  /* 1031f697 mov eax, 1 */
  EAX = (0x1u);
L_1031f69c:;
  /* 1031f69c mov esp, ebp */
  ESP = (EBP);
  /* 1031f69e pop ebp */
  EBP = (pop32());
  /* 1031f69f ret  */
  ESPCHK(0x1031f4a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f6a0 @ 0x1031f6a0 (130 bytes, 47 insns) */
void f_1031f6a0(void) {
  FTRACE(0x1031f6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031f6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1031f6a1 mov ebp, esp */
  EBP = (ESP);
  /* 1031f6a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031f6a6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1031f6ad mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1031f6b4:;
  /* 1031f6b4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031f6b7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031f6ba jg 0x1031f71e */
  if ((!C.zf&&C.sf==C.of)) goto L_1031f71e;
  /* 1031f6bc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031f6c0 je 0x1031f71e */
  if (C.zf) goto L_1031f71e;
  /* 1031f6c2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031f6c5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f6c8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1031f6c9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031f6cb sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1031f6cd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1031f6d0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031f6d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031f6d6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 1031f6d9 push eax */
  push32((uint32_t)(EAX));
  /* 1031f6da mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1031f6dd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1031f6df push edx */
  push32((uint32_t)(EDX));
  /* 1031f6e0 call 0x10321d90 */
  push32(0x1031f6e5u); f_10321d90();
  /* 1031f6e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f6e8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1031f6eb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031f6ef jne 0x1031f702 */
  if (!C.zf) goto L_1031f702;
  /* 1031f6f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031f6f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031f6f7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 1031f6fb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1031f6fe mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1031f700 jmp 0x1031f71c */
  goto L_1031f71c;
L_1031f702:;
  /* 1031f702 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031f706 jge 0x1031f713 */
  if ((C.sf==C.of)) goto L_1031f713;
  /* 1031f708 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031f70b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031f70e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1031f711 jmp 0x1031f71c */
  goto L_1031f71c;
L_1031f713:;
  /* 1031f713 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031f716 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f719 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1031f71c:;
  /* 1031f71c jmp 0x1031f6b4 */
  goto L_1031f6b4;
L_1031f71e:;
  /* 1031f71e mov esp, ebp */
  ESP = (EBP);
  /* 1031f720 pop ebp */
  EBP = (pop32());
  /* 1031f721 ret  */
  ESPCHK(0x1031f6a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f730 @ 0x1031f730 (186 bytes, 50 insns) */
void f_1031f730(void) {
  FTRACE(0x1031f730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031f730 push ebp */
  push32((uint32_t)(EBP));
  /* 1031f731 mov ebp, esp */
  EBP = (ESP);
  /* 1031f733 push ecx */
  push32((uint32_t)(ECX));
  /* 1031f734 mov eax, dword ptr [0x1033f734] */
  EAX = (r32((uint32_t)(0x1033f734)));
  /* 1031f739 push eax */
  push32((uint32_t)(EAX));
  /* 1031f73a call 0x103164f0 */
  push32(0x1031f73fu); f_103164f0();
  /* 1031f73f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f742 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1031f744 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031f747 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1031f74a mov dword ptr [0x1033f730], ecx */
  w32((uint32_t)(0x1033f730), (ECX));
  /* 1031f750 mov edx, dword ptr [0x1033f738] */
  EDX = (r32((uint32_t)(0x1033f738)));
  /* 1031f756 push edx */
  push32((uint32_t)(EDX));
  /* 1031f757 call 0x103164f0 */
  push32(0x1031f75cu); f_103164f0();
  /* 1031f75c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f75f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1031f761 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031f764 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1031f767 mov dword ptr [0x1033f728], ecx */
  w32((uint32_t)(0x1033f728), (ECX));
  /* 1031f76d mov dword ptr [0x1033f724], 0 */
  w32((uint32_t)(0x1033f724), (0x0u));
  /* 1031f777 cmp dword ptr [0x1033f730], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f730))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031f77e je 0x1031f789 */
  if (C.zf) goto L_1031f789;
  /* 1031f780 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1031f787 jmp 0x1031f79b */
  goto L_1031f79b;
L_1031f789:;
  /* 1031f789 mov edx, dword ptr [0x1033f734] */
  EDX = (r32((uint32_t)(0x1033f734)));
  /* 1031f78f push edx */
  push32((uint32_t)(EDX));
  /* 1031f790 call 0x103201d0 */
  push32(0x1031f795u); f_103201d0();
  /* 1031f795 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f798 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1031f79b:;
  /* 1031f79b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031f79e mov dword ptr [0x1033f72c], eax */
  w32((uint32_t)(0x1033f72c), (EAX));
  /* 1031f7a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1031f7a5 push 0x1031f7f0 */
  push32((uint32_t)(0x1031f7f0u));
  /* 1031f7aa call dword ptr [0x1034227c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034227c))), 0x1031f7b0u);
  /* 1031f7b0 mov ecx, dword ptr [0x1033f73c] */
  ECX = (r32((uint32_t)(0x1033f73c)));
  /* 1031f7b6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1031f7bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1031f7be je 0x1031f7dc */
  if (C.zf) goto L_1031f7dc;
  /* 1031f7c0 mov edx, dword ptr [0x1033f73c] */
  EDX = (r32((uint32_t)(0x1033f73c)));
  /* 1031f7c6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 1031f7cc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1031f7ce je 0x1031f7dc */
  if (C.zf) goto L_1031f7dc;
  /* 1031f7d0 mov eax, dword ptr [0x1033f73c] */
  EAX = (r32((uint32_t)(0x1033f73c)));
  /* 1031f7d5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 1031f7d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031f7da jne 0x1031f7e6 */
  if (!C.zf) goto L_1031f7e6;
L_1031f7dc:;
  /* 1031f7dc mov dword ptr [0x1033f73c], 0 */
  w32((uint32_t)(0x1033f73c), (0x0u));
L_1031f7e6:;
  /* 1031f7e6 mov esp, ebp */
  ESP = (EBP);
  /* 1031f7e8 pop ebp */
  EBP = (pop32());
  /* 1031f7e9 ret  */
  ESPCHK(0x1031f730u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f7f0 @ 0x1031f7f0 (804 bytes, 220 insns) */
void f_1031f7f0(void) {
  FTRACE(0x1031f7f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031f7f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1031f7f1 mov ebp, esp */
  EBP = (ESP);
  /* 1031f7f3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031f7f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031f7f9 push eax */
  push32((uint32_t)(EAX));
  /* 1031f7fa call 0x10320150 */
  push32(0x1031f7ffu); f_10320150();
  /* 1031f7ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f802 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 1031f805 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1031f807 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1031f80a push ecx */
  push32((uint32_t)(ECX));
  /* 1031f80b mov edx, dword ptr [0x1033f728] */
  EDX = (r32((uint32_t)(0x1033f728)));
  /* 1031f811 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1031f813 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031f815 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1031f81b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f821 push edx */
  push32((uint32_t)(EDX));
  /* 1031f822 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1031f825 push eax */
  push32((uint32_t)(EAX));
  /* 1031f826 call dword ptr [0x1033f744] */
  call_ind((uint32_t)(r32((uint32_t)(0x1033f744))), 0x1031f82cu);
  /* 1031f82c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031f82e jne 0x1031f844 */
  if (!C.zf) goto L_1031f844;
  /* 1031f830 mov dword ptr [0x1033f73c], 0 */
  w32((uint32_t)(0x1033f73c), (0x0u));
  /* 1031f83a mov eax, 1 */
  EAX = (0x1u);
  /* 1031f83f jmp 0x1031fb0e */
  goto L_1031fb0e;
L_1031f844:;
  /* 1031f844 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1031f847 push ecx */
  push32((uint32_t)(ECX));
  /* 1031f848 mov edx, dword ptr [0x1033f738] */
  EDX = (r32((uint32_t)(0x1033f738)));
  /* 1031f84e push edx */
  push32((uint32_t)(EDX));
  /* 1031f84f call 0x10321d90 */
  push32(0x1031f854u); f_10321d90();
  /* 1031f854 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f857 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031f859 jne 0x1031f97f */
  if (!C.zf) goto L_1031f97f;
  /* 1031f85f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1031f861 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1031f864 push eax */
  push32((uint32_t)(EAX));
  /* 1031f865 mov ecx, dword ptr [0x1033f730] */
  ECX = (r32((uint32_t)(0x1033f730)));
  /* 1031f86b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1031f86d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031f86f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1031f875 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f87b push ecx */
  push32((uint32_t)(ECX));
  /* 1031f87c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1031f87f push edx */
  push32((uint32_t)(EDX));
  /* 1031f880 call dword ptr [0x1033f744] */
  call_ind((uint32_t)(r32((uint32_t)(0x1033f744))), 0x1031f886u);
  /* 1031f886 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031f888 jne 0x1031f89e */
  if (!C.zf) goto L_1031f89e;
  /* 1031f88a mov dword ptr [0x1033f73c], 0 */
  w32((uint32_t)(0x1033f73c), (0x0u));
  /* 1031f894 mov eax, 1 */
  EAX = (0x1u);
  /* 1031f899 jmp 0x1031fb0e */
  goto L_1031fb0e;
L_1031f89e:;
  /* 1031f89e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1031f8a1 push eax */
  push32((uint32_t)(EAX));
  /* 1031f8a2 mov ecx, dword ptr [0x1033f734] */
  ECX = (r32((uint32_t)(0x1033f734)));
  /* 1031f8a8 push ecx */
  push32((uint32_t)(ECX));
  /* 1031f8a9 call 0x10321d90 */
  push32(0x1031f8aeu); f_10321d90();
  /* 1031f8ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f8b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031f8b3 jne 0x1031f8e0 */
  if (!C.zf) goto L_1031f8e0;
  /* 1031f8b5 mov edx, dword ptr [0x1033f73c] */
  EDX = (r32((uint32_t)(0x1033f73c)));
  /* 1031f8bb or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 1031f8c1 mov dword ptr [0x1033f73c], edx */
  w32((uint32_t)(0x1033f73c), (EDX));
  /* 1031f8c7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1031f8ca mov dword ptr [0x1033f740], eax */
  w32((uint32_t)(0x1033f740), (EAX));
  /* 1031f8cf mov ecx, dword ptr [0x1033f740] */
  ECX = (r32((uint32_t)(0x1033f740)));
  /* 1031f8d5 mov dword ptr [0x1033f724], ecx */
  w32((uint32_t)(0x1033f724), (ECX));
  /* 1031f8db jmp 0x1031f97f */
  goto L_1031f97f;
L_1031f8e0:;
  /* 1031f8e0 mov edx, dword ptr [0x1033f73c] */
  EDX = (r32((uint32_t)(0x1033f73c)));
  /* 1031f8e6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1031f8e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1031f8eb jne 0x1031f97f */
  if (!C.zf) goto L_1031f97f;
  /* 1031f8f1 cmp dword ptr [0x1033f72c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f72c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031f8f8 je 0x1031f94d */
  if (C.zf) goto L_1031f94d;
  /* 1031f8fa mov eax, dword ptr [0x1033f72c] */
  EAX = (r32((uint32_t)(0x1033f72c)));
  /* 1031f8ff push eax */
  push32((uint32_t)(EAX));
  /* 1031f900 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1031f903 push ecx */
  push32((uint32_t)(ECX));
  /* 1031f904 mov edx, dword ptr [0x1033f734] */
  EDX = (r32((uint32_t)(0x1033f734)));
  /* 1031f90a push edx */
  push32((uint32_t)(EDX));
  /* 1031f90b call 0x10321e60 */
  push32(0x1031f910u); f_10321e60();
  /* 1031f910 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f913 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031f915 jne 0x1031f94d */
  if (!C.zf) goto L_1031f94d;
  /* 1031f917 mov eax, dword ptr [0x1033f73c] */
  EAX = (r32((uint32_t)(0x1033f73c)));
  /* 1031f91c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1031f91e mov dword ptr [0x1033f73c], eax */
  w32((uint32_t)(0x1033f73c), (EAX));
  /* 1031f923 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1031f926 mov dword ptr [0x1033f740], ecx */
  w32((uint32_t)(0x1033f740), (ECX));
  /* 1031f92c mov edx, dword ptr [0x1033f734] */
  EDX = (r32((uint32_t)(0x1033f734)));
  /* 1031f932 push edx */
  push32((uint32_t)(EDX));
  /* 1031f933 call 0x103164f0 */
  push32(0x1031f938u); f_103164f0();
  /* 1031f938 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f93b cmp eax, dword ptr [0x1033f72c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1033f72c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031f941 jne 0x1031f94b */
  if (!C.zf) goto L_1031f94b;
  /* 1031f943 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1031f946 mov dword ptr [0x1033f724], eax */
  w32((uint32_t)(0x1033f724), (EAX));
L_1031f94b:;
  /* 1031f94b jmp 0x1031f97f */
  goto L_1031f97f;
L_1031f94d:;
  /* 1031f94d mov ecx, dword ptr [0x1033f73c] */
  ECX = (r32((uint32_t)(0x1033f73c)));
  /* 1031f953 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1031f956 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1031f958 jne 0x1031f97f */
  if (!C.zf) goto L_1031f97f;
  /* 1031f95a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1031f95d push edx */
  push32((uint32_t)(EDX));
  /* 1031f95e call 0x1031fe90 */
  push32(0x1031f963u); f_1031fe90();
  /* 1031f963 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f966 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031f968 je 0x1031f97f */
  if (C.zf) goto L_1031f97f;
  /* 1031f96a mov eax, dword ptr [0x1033f73c] */
  EAX = (r32((uint32_t)(0x1033f73c)));
  /* 1031f96f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1031f971 mov dword ptr [0x1033f73c], eax */
  w32((uint32_t)(0x1033f73c), (EAX));
  /* 1031f976 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1031f979 mov dword ptr [0x1033f740], ecx */
  w32((uint32_t)(0x1033f740), (ECX));
L_1031f97f:;
  /* 1031f97f mov edx, dword ptr [0x1033f73c] */
  EDX = (r32((uint32_t)(0x1033f73c)));
  /* 1031f985 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 1031f98b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031f991 je 0x1031fb01 */
  if (C.zf) goto L_1031fb01;
  /* 1031f997 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1031f999 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1031f99c push eax */
  push32((uint32_t)(EAX));
  /* 1031f99d mov ecx, dword ptr [0x1033f730] */
  ECX = (r32((uint32_t)(0x1033f730)));
  /* 1031f9a3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1031f9a5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031f9a7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1031f9ad add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f9b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1031f9b4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1031f9b7 push edx */
  push32((uint32_t)(EDX));
  /* 1031f9b8 call dword ptr [0x1033f744] */
  call_ind((uint32_t)(r32((uint32_t)(0x1033f744))), 0x1031f9beu);
  /* 1031f9be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031f9c0 jne 0x1031f9d6 */
  if (!C.zf) goto L_1031f9d6;
  /* 1031f9c2 mov dword ptr [0x1033f73c], 0 */
  w32((uint32_t)(0x1033f73c), (0x0u));
  /* 1031f9cc mov eax, 1 */
  EAX = (0x1u);
  /* 1031f9d1 jmp 0x1031fb0e */
  goto L_1031fb0e;
L_1031f9d6:;
  /* 1031f9d6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1031f9d9 push eax */
  push32((uint32_t)(EAX));
  /* 1031f9da mov ecx, dword ptr [0x1033f734] */
  ECX = (r32((uint32_t)(0x1033f734)));
  /* 1031f9e0 push ecx */
  push32((uint32_t)(ECX));
  /* 1031f9e1 call 0x10321d90 */
  push32(0x1031f9e6u); f_10321d90();
  /* 1031f9e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031f9e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031f9eb jne 0x1031faa0 */
  if (!C.zf) goto L_1031faa0;
  /* 1031f9f1 mov edx, dword ptr [0x1033f73c] */
  EDX = (r32((uint32_t)(0x1033f73c)));
  /* 1031f9f7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1031f9fa mov dword ptr [0x1033f73c], edx */
  w32((uint32_t)(0x1033f73c), (EDX));
  /* 1031fa00 cmp dword ptr [0x1033f730], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f730))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031fa07 je 0x1031fa2a */
  if (C.zf) goto L_1031fa2a;
  /* 1031fa09 mov eax, dword ptr [0x1033f73c] */
  EAX = (r32((uint32_t)(0x1033f73c)));
  /* 1031fa0e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1031fa11 mov dword ptr [0x1033f73c], eax */
  w32((uint32_t)(0x1033f73c), (EAX));
  /* 1031fa16 cmp dword ptr [0x1033f724], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f724))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031fa1d jne 0x1031fa28 */
  if (!C.zf) goto L_1031fa28;
  /* 1031fa1f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1031fa22 mov dword ptr [0x1033f724], ecx */
  w32((uint32_t)(0x1033f724), (ECX));
L_1031fa28:;
  /* 1031fa28 jmp 0x1031fa9e */
  goto L_1031fa9e;
L_1031fa2a:;
  /* 1031fa2a cmp dword ptr [0x1033f72c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f72c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031fa31 je 0x1031fa7f */
  if (C.zf) goto L_1031fa7f;
  /* 1031fa33 mov edx, dword ptr [0x1033f734] */
  EDX = (r32((uint32_t)(0x1033f734)));
  /* 1031fa39 push edx */
  push32((uint32_t)(EDX));
  /* 1031fa3a call 0x103164f0 */
  push32(0x1031fa3fu); f_103164f0();
  /* 1031fa3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031fa42 cmp eax, dword ptr [0x1033f72c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1033f72c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031fa48 jne 0x1031fa7f */
  if (!C.zf) goto L_1031fa7f;
  /* 1031fa4a push 1 */
  push32((uint32_t)(0x1u));
  /* 1031fa4c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1031fa4f push eax */
  push32((uint32_t)(EAX));
  /* 1031fa50 call 0x1031fee0 */
  push32(0x1031fa55u); f_1031fee0();
  /* 1031fa55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031fa58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031fa5a je 0x1031fa7d */
  if (C.zf) goto L_1031fa7d;
  /* 1031fa5c mov ecx, dword ptr [0x1033f73c] */
  ECX = (r32((uint32_t)(0x1033f73c)));
  /* 1031fa62 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1031fa65 mov dword ptr [0x1033f73c], ecx */
  w32((uint32_t)(0x1033f73c), (ECX));
  /* 1031fa6b cmp dword ptr [0x1033f724], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f724))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031fa72 jne 0x1031fa7d */
  if (!C.zf) goto L_1031fa7d;
  /* 1031fa74 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1031fa77 mov dword ptr [0x1033f724], edx */
  w32((uint32_t)(0x1033f724), (EDX));
L_1031fa7d:;
  /* 1031fa7d jmp 0x1031fa9e */
  goto L_1031fa9e;
L_1031fa7f:;
  /* 1031fa7f mov eax, dword ptr [0x1033f73c] */
  EAX = (r32((uint32_t)(0x1033f73c)));
  /* 1031fa84 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1031fa87 mov dword ptr [0x1033f73c], eax */
  w32((uint32_t)(0x1033f73c), (EAX));
  /* 1031fa8c cmp dword ptr [0x1033f724], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f724))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031fa93 jne 0x1031fa9e */
  if (!C.zf) goto L_1031fa9e;
  /* 1031fa95 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1031fa98 mov dword ptr [0x1033f724], ecx */
  w32((uint32_t)(0x1033f724), (ECX));
L_1031fa9e:;
  /* 1031fa9e jmp 0x1031fb01 */
  goto L_1031fb01;
L_1031faa0:;
  /* 1031faa0 cmp dword ptr [0x1033f730], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f730))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031faa7 jne 0x1031fb01 */
  if (!C.zf) goto L_1031fb01;
  /* 1031faa9 cmp dword ptr [0x1033f72c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f72c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031fab0 je 0x1031fb01 */
  if (C.zf) goto L_1031fb01;
  /* 1031fab2 mov edx, dword ptr [0x1033f72c] */
  EDX = (r32((uint32_t)(0x1033f72c)));
  /* 1031fab8 push edx */
  push32((uint32_t)(EDX));
  /* 1031fab9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1031fabc push eax */
  push32((uint32_t)(EAX));
  /* 1031fabd mov ecx, dword ptr [0x1033f734] */
  ECX = (r32((uint32_t)(0x1033f734)));
  /* 1031fac3 push ecx */
  push32((uint32_t)(ECX));
  /* 1031fac4 call 0x10321e60 */
  push32(0x1031fac9u); f_10321e60();
  /* 1031fac9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031facc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031face jne 0x1031fb01 */
  if (!C.zf) goto L_1031fb01;
  /* 1031fad0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031fad2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1031fad5 push edx */
  push32((uint32_t)(EDX));
  /* 1031fad6 call 0x1031fee0 */
  push32(0x1031fadbu); f_1031fee0();
  /* 1031fadb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031fade test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031fae0 je 0x1031fb01 */
  if (C.zf) goto L_1031fb01;
  /* 1031fae2 mov eax, dword ptr [0x1033f73c] */
  EAX = (r32((uint32_t)(0x1033f73c)));
  /* 1031fae7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1031faea mov dword ptr [0x1033f73c], eax */
  w32((uint32_t)(0x1033f73c), (EAX));
  /* 1031faef cmp dword ptr [0x1033f724], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f724))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031faf6 jne 0x1031fb01 */
  if (!C.zf) goto L_1031fb01;
  /* 1031faf8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1031fafb mov dword ptr [0x1033f724], ecx */
  w32((uint32_t)(0x1033f724), (ECX));
L_1031fb01:;
  /* 1031fb01 mov eax, dword ptr [0x1033f73c] */
  EAX = (r32((uint32_t)(0x1033f73c)));
  /* 1031fb06 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1031fb09 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1031fb0b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031fb0d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1031fb0e:;
  /* 1031fb0e mov esp, ebp */
  ESP = (EBP);
  /* 1031fb10 pop ebp */
  EBP = (pop32());
  /* 1031fb11 ret 4 */
  ESPCHK(0x1031f7f0u, _esp0);
  ESP += 8; return;
}

/* FUN_1000fb20 @ 0x1031fb20 (116 bytes, 33 insns) */
void f_1031fb20(void) {
  FTRACE(0x1031fb20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031fb20 push ebp */
  push32((uint32_t)(EBP));
  /* 1031fb21 mov ebp, esp */
  EBP = (ESP);
  /* 1031fb23 push ecx */
  push32((uint32_t)(ECX));
  /* 1031fb24 mov eax, dword ptr [0x1033f734] */
  EAX = (r32((uint32_t)(0x1033f734)));
  /* 1031fb29 push eax */
  push32((uint32_t)(EAX));
  /* 1031fb2a call 0x103164f0 */
  push32(0x1031fb2fu); f_103164f0();
  /* 1031fb2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031fb32 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1031fb34 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031fb37 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1031fb3a mov dword ptr [0x1033f730], ecx */
  w32((uint32_t)(0x1033f730), (ECX));
  /* 1031fb40 cmp dword ptr [0x1033f730], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f730))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031fb47 je 0x1031fb52 */
  if (C.zf) goto L_1031fb52;
  /* 1031fb49 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1031fb50 jmp 0x1031fb64 */
  goto L_1031fb64;
L_1031fb52:;
  /* 1031fb52 mov edx, dword ptr [0x1033f734] */
  EDX = (r32((uint32_t)(0x1033f734)));
  /* 1031fb58 push edx */
  push32((uint32_t)(EDX));
  /* 1031fb59 call 0x103201d0 */
  push32(0x1031fb5eu); f_103201d0();
  /* 1031fb5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031fb61 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1031fb64:;
  /* 1031fb64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031fb67 mov dword ptr [0x1033f72c], eax */
  w32((uint32_t)(0x1033f72c), (EAX));
  /* 1031fb6c push 1 */
  push32((uint32_t)(0x1u));
  /* 1031fb6e push 0x1031fba0 */
  push32((uint32_t)(0x1031fba0u));
  /* 1031fb73 call dword ptr [0x1034227c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034227c))), 0x1031fb79u);
  /* 1031fb79 mov ecx, dword ptr [0x1033f73c] */
  ECX = (r32((uint32_t)(0x1033f73c)));
  /* 1031fb7f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1031fb82 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1031fb84 jne 0x1031fb90 */
  if (!C.zf) goto L_1031fb90;
  /* 1031fb86 mov dword ptr [0x1033f73c], 0 */
  w32((uint32_t)(0x1033f73c), (0x0u));
L_1031fb90:;
  /* 1031fb90 mov esp, ebp */
  ESP = (EBP);
  /* 1031fb92 pop ebp */
  EBP = (pop32());
  /* 1031fb93 ret  */
  ESPCHK(0x1031fb20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fba0 @ 0x1031fba0 (287 bytes, 86 insns) */
void f_1031fba0(void) {
  FTRACE(0x1031fba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031fba0 push ebp */
  push32((uint32_t)(EBP));
  /* 1031fba1 mov ebp, esp */
  EBP = (ESP);
  /* 1031fba3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031fba6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031fba9 push eax */
  push32((uint32_t)(EAX));
  /* 1031fbaa call 0x10320150 */
  push32(0x1031fbafu); f_10320150();
  /* 1031fbaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031fbb2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 1031fbb5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1031fbb7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1031fbba push ecx */
  push32((uint32_t)(ECX));
  /* 1031fbbb mov edx, dword ptr [0x1033f730] */
  EDX = (r32((uint32_t)(0x1033f730)));
  /* 1031fbc1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1031fbc3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031fbc5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 1031fbcb add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031fbd1 push edx */
  push32((uint32_t)(EDX));
  /* 1031fbd2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1031fbd5 push eax */
  push32((uint32_t)(EAX));
  /* 1031fbd6 call dword ptr [0x1033f744] */
  call_ind((uint32_t)(r32((uint32_t)(0x1033f744))), 0x1031fbdcu);
  /* 1031fbdc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031fbde jne 0x1031fbf4 */
  if (!C.zf) goto L_1031fbf4;
  /* 1031fbe0 mov dword ptr [0x1033f73c], 0 */
  w32((uint32_t)(0x1033f73c), (0x0u));
  /* 1031fbea mov eax, 1 */
  EAX = (0x1u);
  /* 1031fbef jmp 0x1031fcb9 */
  goto L_1031fcb9;
L_1031fbf4:;
  /* 1031fbf4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1031fbf7 push ecx */
  push32((uint32_t)(ECX));
  /* 1031fbf8 mov edx, dword ptr [0x1033f734] */
  EDX = (r32((uint32_t)(0x1033f734)));
  /* 1031fbfe push edx */
  push32((uint32_t)(EDX));
  /* 1031fbff call 0x10321d90 */
  push32(0x1031fc04u); f_10321d90();
  /* 1031fc04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031fc07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031fc09 jne 0x1031fc49 */
  if (!C.zf) goto L_1031fc49;
  /* 1031fc0b cmp dword ptr [0x1033f730], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f730))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031fc12 jne 0x1031fc26 */
  if (!C.zf) goto L_1031fc26;
  /* 1031fc14 push 1 */
  push32((uint32_t)(0x1u));
  /* 1031fc16 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1031fc19 push eax */
  push32((uint32_t)(EAX));
  /* 1031fc1a call 0x1031fee0 */
  push32(0x1031fc1fu); f_1031fee0();
  /* 1031fc1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031fc22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031fc24 je 0x1031fc47 */
  if (C.zf) goto L_1031fc47;
L_1031fc26:;
  /* 1031fc26 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1031fc29 mov dword ptr [0x1033f740], ecx */
  w32((uint32_t)(0x1033f740), (ECX));
  /* 1031fc2f mov edx, dword ptr [0x1033f740] */
  EDX = (r32((uint32_t)(0x1033f740)));
  /* 1031fc35 mov dword ptr [0x1033f724], edx */
  w32((uint32_t)(0x1033f724), (EDX));
  /* 1031fc3b mov eax, dword ptr [0x1033f73c] */
  EAX = (r32((uint32_t)(0x1033f73c)));
  /* 1031fc40 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1031fc42 mov dword ptr [0x1033f73c], eax */
  w32((uint32_t)(0x1033f73c), (EAX));
L_1031fc47:;
  /* 1031fc47 jmp 0x1031fcac */
  goto L_1031fcac;
L_1031fc49:;
  /* 1031fc49 cmp dword ptr [0x1033f730], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f730))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031fc50 jne 0x1031fcac */
  if (!C.zf) goto L_1031fcac;
  /* 1031fc52 cmp dword ptr [0x1033f72c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f72c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031fc59 je 0x1031fcac */
  if (C.zf) goto L_1031fcac;
  /* 1031fc5b mov ecx, dword ptr [0x1033f72c] */
  ECX = (r32((uint32_t)(0x1033f72c)));
  /* 1031fc61 push ecx */
  push32((uint32_t)(ECX));
  /* 1031fc62 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 1031fc65 push edx */
  push32((uint32_t)(EDX));
  /* 1031fc66 mov eax, dword ptr [0x1033f734] */
  EAX = (r32((uint32_t)(0x1033f734)));
  /* 1031fc6b push eax */
  push32((uint32_t)(EAX));
  /* 1031fc6c call 0x10321e60 */
  push32(0x1031fc71u); f_10321e60();
  /* 1031fc71 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031fc74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031fc76 jne 0x1031fcac */
  if (!C.zf) goto L_1031fcac;
  /* 1031fc78 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031fc7a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1031fc7d push ecx */
  push32((uint32_t)(ECX));
  /* 1031fc7e call 0x1031fee0 */
  push32(0x1031fc83u); f_1031fee0();
  /* 1031fc83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031fc86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031fc88 je 0x1031fcac */
  if (C.zf) goto L_1031fcac;
  /* 1031fc8a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1031fc8d mov dword ptr [0x1033f740], edx */
  w32((uint32_t)(0x1033f740), (EDX));
  /* 1031fc93 mov eax, dword ptr [0x1033f740] */
  EAX = (r32((uint32_t)(0x1033f740)));
  /* 1031fc98 mov dword ptr [0x1033f724], eax */
  w32((uint32_t)(0x1033f724), (EAX));
  /* 1031fc9d mov ecx, dword ptr [0x1033f73c] */
  ECX = (r32((uint32_t)(0x1033f73c)));
  /* 1031fca3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1031fca6 mov dword ptr [0x1033f73c], ecx */
  w32((uint32_t)(0x1033f73c), (ECX));
L_1031fcac:;
  /* 1031fcac mov eax, dword ptr [0x1033f73c] */
  EAX = (r32((uint32_t)(0x1033f73c)));
  /* 1031fcb1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1031fcb4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1031fcb6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031fcb8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1031fcb9:;
  /* 1031fcb9 mov esp, ebp */
  ESP = (EBP);
  /* 1031fcbb pop ebp */
  EBP = (pop32());
  /* 1031fcbc ret 4 */
  ESPCHK(0x1031fba0u, _esp0);
  ESP += 8; return;
}

/* FUN_1000fcc0 @ 0x1031fcc0 (69 bytes, 20 insns) */
void f_1031fcc0(void) {
  FTRACE(0x1031fcc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031fcc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1031fcc1 mov ebp, esp */
  EBP = (ESP);
  /* 1031fcc3 mov eax, dword ptr [0x1033f738] */
  EAX = (r32((uint32_t)(0x1033f738)));
  /* 1031fcc8 push eax */
  push32((uint32_t)(EAX));
  /* 1031fcc9 call 0x103164f0 */
  push32(0x1031fcceu); f_103164f0();
  /* 1031fcce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031fcd1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1031fcd3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031fcd6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1031fcd9 mov dword ptr [0x1033f728], ecx */
  w32((uint32_t)(0x1033f728), (ECX));
  /* 1031fcdf push 1 */
  push32((uint32_t)(0x1u));
  /* 1031fce1 push 0x1031fd10 */
  push32((uint32_t)(0x1031fd10u));
  /* 1031fce6 call dword ptr [0x1034227c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034227c))), 0x1031fcecu);
  /* 1031fcec mov edx, dword ptr [0x1033f73c] */
  EDX = (r32((uint32_t)(0x1033f73c)));
  /* 1031fcf2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1031fcf5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1031fcf7 jne 0x1031fd03 */
  if (!C.zf) goto L_1031fd03;
  /* 1031fcf9 mov dword ptr [0x1033f73c], 0 */
  w32((uint32_t)(0x1033f73c), (0x0u));
L_1031fd03:;
  /* 1031fd03 pop ebp */
  EBP = (pop32());
  /* 1031fd04 ret  */
  ESPCHK(0x1031fcc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd10 @ 0x1031fd10 (172 bytes, 54 insns) */
void f_1031fd10(void) {
  FTRACE(0x1031fd10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031fd10 push ebp */
  push32((uint32_t)(EBP));
  /* 1031fd11 mov ebp, esp */
  EBP = (ESP);
  /* 1031fd13 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031fd16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031fd19 push eax */
  push32((uint32_t)(EAX));
  /* 1031fd1a call 0x10320150 */
  push32(0x1031fd1fu); f_10320150();
  /* 1031fd1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031fd22 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 1031fd25 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1031fd27 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1031fd2a push ecx */
  push32((uint32_t)(ECX));
  /* 1031fd2b mov edx, dword ptr [0x1033f728] */
  EDX = (r32((uint32_t)(0x1033f728)));
  /* 1031fd31 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1031fd33 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031fd35 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1031fd3b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031fd41 push edx */
  push32((uint32_t)(EDX));
  /* 1031fd42 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1031fd45 push eax */
  push32((uint32_t)(EAX));
  /* 1031fd46 call dword ptr [0x1033f744] */
  call_ind((uint32_t)(r32((uint32_t)(0x1033f744))), 0x1031fd4cu);
  /* 1031fd4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031fd4e jne 0x1031fd61 */
  if (!C.zf) goto L_1031fd61;
  /* 1031fd50 mov dword ptr [0x1033f73c], 0 */
  w32((uint32_t)(0x1033f73c), (0x0u));
  /* 1031fd5a mov eax, 1 */
  EAX = (0x1u);
  /* 1031fd5f jmp 0x1031fdb6 */
  goto L_1031fdb6;
L_1031fd61:;
  /* 1031fd61 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1031fd64 push ecx */
  push32((uint32_t)(ECX));
  /* 1031fd65 mov edx, dword ptr [0x1033f738] */
  EDX = (r32((uint32_t)(0x1033f738)));
  /* 1031fd6b push edx */
  push32((uint32_t)(EDX));
  /* 1031fd6c call 0x10321d90 */
  push32(0x1031fd71u); f_10321d90();
  /* 1031fd71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031fd74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031fd76 jne 0x1031fda9 */
  if (!C.zf) goto L_1031fda9;
  /* 1031fd78 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1031fd7b push eax */
  push32((uint32_t)(EAX));
  /* 1031fd7c call 0x1031fe90 */
  push32(0x1031fd81u); f_1031fe90();
  /* 1031fd81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031fd84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031fd86 je 0x1031fda9 */
  if (C.zf) goto L_1031fda9;
  /* 1031fd88 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1031fd8b mov dword ptr [0x1033f740], ecx */
  w32((uint32_t)(0x1033f740), (ECX));
  /* 1031fd91 mov edx, dword ptr [0x1033f740] */
  EDX = (r32((uint32_t)(0x1033f740)));
  /* 1031fd97 mov dword ptr [0x1033f724], edx */
  w32((uint32_t)(0x1033f724), (EDX));
  /* 1031fd9d mov eax, dword ptr [0x1033f73c] */
  EAX = (r32((uint32_t)(0x1033f73c)));
  /* 1031fda2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1031fda4 mov dword ptr [0x1033f73c], eax */
  w32((uint32_t)(0x1033f73c), (EAX));
L_1031fda9:;
  /* 1031fda9 mov eax, dword ptr [0x1033f73c] */
  EAX = (r32((uint32_t)(0x1033f73c)));
  /* 1031fdae and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1031fdb1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1031fdb3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031fdb5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1031fdb6:;
  /* 1031fdb6 mov esp, ebp */
  ESP = (EBP);
  /* 1031fdb8 pop ebp */
  EBP = (pop32());
  /* 1031fdb9 ret 4 */
  ESPCHK(0x1031fd10u, _esp0);
  ESP += 8; return;
}

/* FUN_1000fdc0 @ 0x1031fdc0 (43 bytes, 11 insns) */
void f_1031fdc0(void) {
  FTRACE(0x1031fdc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031fdc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1031fdc1 mov ebp, esp */
  EBP = (ESP);
  /* 1031fdc3 mov eax, dword ptr [0x1033f73c] */
  EAX = (r32((uint32_t)(0x1033f73c)));
  /* 1031fdc8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 1031fdcd mov dword ptr [0x1033f73c], eax */
  w32((uint32_t)(0x1033f73c), (EAX));
  /* 1031fdd2 call dword ptr [0x10342278] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342278))), 0x1031fdd8u);
  /* 1031fdd8 mov dword ptr [0x1033f740], eax */
  w32((uint32_t)(0x1033f740), (EAX));
  /* 1031fddd mov ecx, dword ptr [0x1033f740] */
  ECX = (r32((uint32_t)(0x1033f740)));
  /* 1031fde3 mov dword ptr [0x1033f724], ecx */
  w32((uint32_t)(0x1033f724), (ECX));
  /* 1031fde9 pop ebp */
  EBP = (pop32());
  /* 1031fdea ret  */
  ESPCHK(0x1031fdc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fdf0 @ 0x1031fdf0 (155 bytes, 57 insns) */
void f_1031fdf0(void) {
  FTRACE(0x1031fdf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031fdf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1031fdf1 mov ebp, esp */
  EBP = (ESP);
  /* 1031fdf3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031fdf6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031fdfa je 0x1031fe1b */
  if (C.zf) goto L_1031fe1b;
  /* 1031fdfc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031fdff movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1031fe02 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1031fe04 je 0x1031fe1b */
  if (C.zf) goto L_1031fe1b;
  /* 1031fe06 push 0x1033b714 */
  push32((uint32_t)(0x1033b714u));
  /* 1031fe0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031fe0e push edx */
  push32((uint32_t)(EDX));
  /* 1031fe0f call 0x1031f350 */
  push32(0x1031fe14u); f_1031f350();
  /* 1031fe14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031fe17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031fe19 jne 0x1031fe43 */
  if (!C.zf) goto L_1031fe43;
L_1031fe1b:;
  /* 1031fe1b push 8 */
  push32((uint32_t)(0x8u));
  /* 1031fe1d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1031fe20 push eax */
  push32((uint32_t)(EAX));
  /* 1031fe21 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 1031fe26 mov ecx, dword ptr [0x1033f740] */
  ECX = (r32((uint32_t)(0x1033f740)));
  /* 1031fe2c push ecx */
  push32((uint32_t)(ECX));
  /* 1031fe2d call dword ptr [0x1033f744] */
  call_ind((uint32_t)(r32((uint32_t)(0x1033f744))), 0x1031fe33u);
  /* 1031fe33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031fe35 jne 0x1031fe3b */
  if (!C.zf) goto L_1031fe3b;
  /* 1031fe37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031fe39 jmp 0x1031fe87 */
  goto L_1031fe87;
L_1031fe3b:;
  /* 1031fe3b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 1031fe3e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1031fe41 jmp 0x1031fe7b */
  goto L_1031fe7b;
L_1031fe43:;
  /* 1031fe43 push 0x1033b710 */
  push32((uint32_t)(0x1033b710u));
  /* 1031fe48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031fe4b push eax */
  push32((uint32_t)(EAX));
  /* 1031fe4c call 0x1031f350 */
  push32(0x1031fe51u); f_1031f350();
  /* 1031fe51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031fe54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031fe56 jne 0x1031fe7b */
  if (!C.zf) goto L_1031fe7b;
  /* 1031fe58 push 8 */
  push32((uint32_t)(0x8u));
  /* 1031fe5a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1031fe5d push ecx */
  push32((uint32_t)(ECX));
  /* 1031fe5e push 0xb */
  push32((uint32_t)(0xbu));
  /* 1031fe60 mov edx, dword ptr [0x1033f740] */
  EDX = (r32((uint32_t)(0x1033f740)));
  /* 1031fe66 push edx */
  push32((uint32_t)(EDX));
  /* 1031fe67 call dword ptr [0x1033f744] */
  call_ind((uint32_t)(r32((uint32_t)(0x1033f744))), 0x1031fe6du);
  /* 1031fe6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031fe6f jne 0x1031fe75 */
  if (!C.zf) goto L_1031fe75;
  /* 1031fe71 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031fe73 jmp 0x1031fe87 */
  goto L_1031fe87;
L_1031fe75:;
  /* 1031fe75 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1031fe78 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1031fe7b:;
  /* 1031fe7b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031fe7e push ecx */
  push32((uint32_t)(ECX));
  /* 1031fe7f call 0x10321f70 */
  push32(0x1031fe84u); f_10321f70();
  /* 1031fe84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1031fe87:;
  /* 1031fe87 mov esp, ebp */
  ESP = (EBP);
  /* 1031fe89 pop ebp */
  EBP = (pop32());
  /* 1031fe8a ret  */
  ESPCHK(0x1031fdf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe90 @ 0x1031fe90 (79 bytes, 26 insns) */
void f_1031fe90(void) {
  FTRACE(0x1031fe90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031fe90 push ebp */
  push32((uint32_t)(EBP));
  /* 1031fe91 mov ebp, esp */
  EBP = (ESP);
  /* 1031fe93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031fe96 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 1031fe9a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 1031fe9e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1031fea5 jmp 0x1031feb0 */
  goto L_1031feb0;
L_1031fea7:;
  /* 1031fea7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031feaa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031fead mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1031feb0:;
  /* 1031feb0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031feb4 jae 0x1031fed6 */
  if (!C.cf) goto L_1031fed6;
  /* 1031feb6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031feb9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1031febf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031fec2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1031fec4 mov cx, word ptr [eax*2 + 0x1033e9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x1033e9c4)));
  /* 1031fecc cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031fece jne 0x1031fed4 */
  if (!C.zf) goto L_1031fed4;
  /* 1031fed0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031fed2 jmp 0x1031fedb */
  goto L_1031fedb;
L_1031fed4:;
  /* 1031fed4 jmp 0x1031fea7 */
  goto L_1031fea7;
L_1031fed6:;
  /* 1031fed6 mov eax, 1 */
  EAX = (0x1u);
L_1031fedb:;
  /* 1031fedb mov esp, ebp */
  ESP = (EBP);
  /* 1031fedd pop ebp */
  EBP = (pop32());
  /* 1031fede ret  */
  ESPCHK(0x1031fe90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fee0 @ 0x1031fee0 (135 bytes, 48 insns) */
void f_1031fee0(void) {
  FTRACE(0x1031fee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031fee0 push ebp */
  push32((uint32_t)(EBP));
  /* 1031fee1 mov ebp, esp */
  EBP = (ESP);
  /* 1031fee3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031fee6 push esi */
  push32((uint32_t)(ESI));
  /* 1031fee7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031feea and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1031feef and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 1031fef4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1031fef9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 1031fefc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1031ff01 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1031ff04 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1031ff06 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 1031ff09 push ecx */
  push32((uint32_t)(ECX));
  /* 1031ff0a push 1 */
  push32((uint32_t)(0x1u));
  /* 1031ff0c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031ff0f push edx */
  push32((uint32_t)(EDX));
  /* 1031ff10 call dword ptr [0x1033f744] */
  call_ind((uint32_t)(r32((uint32_t)(0x1033f744))), 0x1031ff16u);
  /* 1031ff16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031ff18 jne 0x1031ff1e */
  if (!C.zf) goto L_1031ff1e;
  /* 1031ff1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031ff1c jmp 0x1031ff62 */
  goto L_1031ff62;
L_1031ff1e:;
  /* 1031ff1e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 1031ff21 push eax */
  push32((uint32_t)(EAX));
  /* 1031ff22 call 0x10320150 */
  push32(0x1031ff27u); f_10320150();
  /* 1031ff27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ff2a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031ff2d je 0x1031ff5d */
  if (C.zf) goto L_1031ff5d;
  /* 1031ff2f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031ff33 je 0x1031ff5d */
  if (C.zf) goto L_1031ff5d;
  /* 1031ff35 mov ecx, dword ptr [0x1033f734] */
  ECX = (r32((uint32_t)(0x1033f734)));
  /* 1031ff3b push ecx */
  push32((uint32_t)(ECX));
  /* 1031ff3c call 0x103201d0 */
  push32(0x1031ff41u); f_103201d0();
  /* 1031ff41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ff44 mov esi, eax */
  ESI = (EAX);
  /* 1031ff46 mov edx, dword ptr [0x1033f734] */
  EDX = (r32((uint32_t)(0x1033f734)));
  /* 1031ff4c push edx */
  push32((uint32_t)(EDX));
  /* 1031ff4d call 0x103164f0 */
  push32(0x1031ff52u); f_103164f0();
  /* 1031ff52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ff55 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031ff57 jne 0x1031ff5d */
  if (!C.zf) goto L_1031ff5d;
  /* 1031ff59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031ff5b jmp 0x1031ff62 */
  goto L_1031ff62;
L_1031ff5d:;
  /* 1031ff5d mov eax, 1 */
  EAX = (0x1u);
L_1031ff62:;
  /* 1031ff62 pop esi */
  ESI = (pop32());
  /* 1031ff63 mov esp, ebp */
  ESP = (EBP);
  /* 1031ff65 pop ebp */
  EBP = (pop32());
  /* 1031ff66 ret  */
  ESPCHK(0x1031fee0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff70 @ 0x1031ff70 (77 bytes, 18 insns) */
void f_1031ff70(void) {
  FTRACE(0x1031ff70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031ff70 push ebp */
  push32((uint32_t)(EBP));
  /* 1031ff71 mov ebp, esp */
  EBP = (ESP);
  /* 1031ff73 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031ff79 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 1031ff83 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 1031ff89 push eax */
  push32((uint32_t)(EAX));
  /* 1031ff8a call dword ptr [0x10342274] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342274))), 0x1031ff90u);
  /* 1031ff90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031ff92 je 0x1031ffa9 */
  if (C.zf) goto L_1031ffa9;
  /* 1031ff94 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031ff9b jne 0x1031ffa9 */
  if (!C.zf) goto L_1031ffa9;
  /* 1031ff9d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 1031ffa7 jmp 0x1031ffb3 */
  goto L_1031ffb3;
L_1031ffa9:;
  /* 1031ffa9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_1031ffb3:;
  /* 1031ffb3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 1031ffb9 mov esp, ebp */
  ESP = (EBP);
  /* 1031ffbb pop ebp */
  EBP = (pop32());
  /* 1031ffbc ret  */
  ESPCHK(0x1031ff70u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x1031ffc0 (388 bytes, 118 insns) */
void f_1031ffc0(void) {
  FTRACE(0x1031ffc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031ffc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1031ffc1 mov ebp, esp */
  EBP = (ESP);
  /* 1031ffc3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031ffc6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1031ffcd mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 1031ffd4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1031ffdb:;
  /* 1031ffdb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1031ffde cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031ffe1 jg 0x10320128 */
  if ((!C.zf&&C.sf==C.of)) goto L_10320128;
  /* 1031ffe7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1031ffea add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031ffed cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1031ffee sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031fff0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1031fff2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1031fff5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031fff8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031fffb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031fffe cmp edx, dword ptr [ecx + 0x1033e520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x1033e520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10320004 jne 0x103200fe */
  if (!C.zf) goto L_103200fe;
  /* 1032000a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1032000d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10320010 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10320014 ja 0x10320037 */
  if ((!C.cf&&!C.zf)) goto L_10320037;
  /* 10320016 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032001a je 0x103200a9 */
  if (C.zf) goto L_103200a9;
  /* 10320020 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10320024 je 0x10320054 */
  if (C.zf) goto L_10320054;
  /* 10320026 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032002a je 0x10320076 */
  if (C.zf) goto L_10320076;
  /* 1032002c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10320030 je 0x10320098 */
  if (C.zf) goto L_10320098;
  /* 10320032 jmp 0x103200c8 */
  goto L_103200c8;
L_10320037:;
  /* 10320037 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032003e je 0x10320065 */
  if (C.zf) goto L_10320065;
  /* 10320040 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10320047 je 0x10320087 */
  if (C.zf) goto L_10320087;
  /* 10320049 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10320050 je 0x103200ba */
  if (C.zf) goto L_103200ba;
  /* 10320052 jmp 0x103200c8 */
  goto L_103200c8;
L_10320054:;
  /* 10320054 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10320057 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1032005a add ecx, 0x1033e524 */
  { uint32_t _a=(ECX),_b=(0x1033e524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10320060 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10320063 jmp 0x103200c8 */
  goto L_103200c8;
L_10320065:;
  /* 10320065 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10320068 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1032006b mov eax, dword ptr [edx + 0x1033e52c] */
  EAX = (r32((uint32_t)(EDX + 0x1033e52c)));
  /* 10320071 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10320074 jmp 0x103200c8 */
  goto L_103200c8;
L_10320076:;
  /* 10320076 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10320079 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1032007c add ecx, 0x1033e530 */
  { uint32_t _a=(ECX),_b=(0x1033e530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10320082 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10320085 jmp 0x103200c8 */
  goto L_103200c8;
L_10320087:;
  /* 10320087 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1032008a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1032008d mov eax, dword ptr [edx + 0x1033e534] */
  EAX = (r32((uint32_t)(EDX + 0x1033e534)));
  /* 10320093 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10320096 jmp 0x103200c8 */
  goto L_103200c8;
L_10320098:;
  /* 10320098 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1032009b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1032009e add ecx, 0x1033e538 */
  { uint32_t _a=(ECX),_b=(0x1033e538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103200a4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103200a7 jmp 0x103200c8 */
  goto L_103200c8;
L_103200a9:;
  /* 103200a9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103200ac imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103200af add edx, 0x1033e53c */
  { uint32_t _a=(EDX),_b=(0x1033e53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103200b5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 103200b8 jmp 0x103200c8 */
  goto L_103200c8;
L_103200ba:;
  /* 103200ba mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103200bd imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103200c0 add eax, 0x1033e544 */
  { uint32_t _a=(EAX),_b=(0x1033e544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103200c5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_103200c8:;
  /* 103200c8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103200cc je 0x103200d4 */
  if (C.zf) goto L_103200d4;
  /* 103200ce cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103200d2 jge 0x103200d6 */
  if ((C.sf==C.of)) goto L_103200d6;
L_103200d4:;
  /* 103200d4 jmp 0x10320128 */
  goto L_10320128;
L_103200d6:;
  /* 103200d6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103200d9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103200dc push ecx */
  push32((uint32_t)(ECX));
  /* 103200dd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103200e0 push edx */
  push32((uint32_t)(EDX));
  /* 103200e1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103200e4 push eax */
  push32((uint32_t)(EAX));
  /* 103200e5 call 0x10316ee0 */
  push32(0x103200eau); f_10316ee0();
  /* 103200ea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103200ed mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103200f0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103200f3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 103200f7 mov eax, 1 */
  EAX = (0x1u);
  /* 103200fc jmp 0x1032013e */
  goto L_1032013e;
L_103200fe:;
  /* 103200fe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10320101 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10320104 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10320107 cmp eax, dword ptr [edx + 0x1033e520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x1033e520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032010d jae 0x1032011a */
  if (!C.cf) goto L_1032011a;
  /* 1032010f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10320112 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10320115 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10320118 jmp 0x10320123 */
  goto L_10320123;
L_1032011a:;
  /* 1032011a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1032011d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10320120 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10320123:;
  /* 10320123 jmp 0x1031ffdb */
  goto L_1031ffdb;
L_10320128:;
  /* 10320128 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1032012b push eax */
  push32((uint32_t)(EAX));
  /* 1032012c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1032012f push ecx */
  push32((uint32_t)(ECX));
  /* 10320130 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10320133 push edx */
  push32((uint32_t)(EDX));
  /* 10320134 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10320137 push eax */
  push32((uint32_t)(EAX));
  /* 10320138 call dword ptr [0x10342280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342280))), 0x1032013eu);
L_1032013e:;
  /* 1032013e mov esp, ebp */
  ESP = (EBP);
  /* 10320140 pop ebp */
  EBP = (pop32());
  /* 10320141 ret 0x10 */
  ESPCHK(0x1031ffc0u, _esp0);
  ESP += 20; return;
}

/* FUN_10010150 @ 0x10320150 (118 bytes, 42 insns) */
void f_10320150(void) {
  FTRACE(0x10320150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10320150 push ebp */
  push32((uint32_t)(EBP));
  /* 10320151 mov ebp, esp */
  EBP = (ESP);
  /* 10320153 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10320156 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1032015d:;
  /* 1032015d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10320160 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10320162 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10320165 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10320169 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1032016c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1032016f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10320172 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10320174 je 0x103201bf */
  if (C.zf) goto L_103201bf;
  /* 10320176 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1032017a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032017d jl 0x10320192 */
  if ((C.sf!=C.of)) goto L_10320192;
  /* 1032017f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10320183 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10320186 jg 0x10320192 */
  if ((!C.zf&&C.sf==C.of)) goto L_10320192;
  /* 10320188 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1032018b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1032018d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10320190 jmp 0x103201ac */
  goto L_103201ac;
L_10320192:;
  /* 10320192 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10320196 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10320199 jl 0x103201ac */
  if ((C.sf!=C.of)) goto L_103201ac;
  /* 1032019b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1032019f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103201a2 jg 0x103201ac */
  if ((!C.zf&&C.sf==C.of)) goto L_103201ac;
  /* 103201a4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 103201a7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 103201a9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_103201ac:;
  /* 103201ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103201af shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 103201b2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 103201b6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 103201ba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103201bd jmp 0x1032015d */
  goto L_1032015d;
L_103201bf:;
  /* 103201bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103201c2 mov esp, ebp */
  ESP = (EBP);
  /* 103201c4 pop ebp */
  EBP = (pop32());
  /* 103201c5 ret  */
  ESPCHK(0x10320150u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x103201d0 (101 bytes, 36 insns) */
void f_103201d0(void) {
  FTRACE(0x103201d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103201d0 push ebp */
  push32((uint32_t)(EBP));
  /* 103201d1 mov ebp, esp */
  EBP = (ESP);
  /* 103201d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103201d6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 103201dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103201e0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 103201e2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 103201e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103201e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103201eb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_103201ee:;
  /* 103201ee movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 103201f2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103201f5 jl 0x10320200 */
  if ((C.sf!=C.of)) goto L_10320200;
  /* 103201f7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 103201fb cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103201fe jle 0x10320212 */
  if ((C.zf||C.sf!=C.of)) goto L_10320212;
L_10320200:;
  /* 10320200 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10320204 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10320207 jl 0x1032022e */
  if ((C.sf!=C.of)) goto L_1032022e;
  /* 10320209 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1032020d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10320210 jg 0x1032022e */
  if ((!C.zf&&C.sf==C.of)) goto L_1032022e;
L_10320212:;
  /* 10320212 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10320215 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10320218 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1032021b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1032021e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10320220 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 10320223 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10320226 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10320229 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1032022c jmp 0x103201ee */
  goto L_103201ee;
L_1032022e:;
  /* 1032022e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10320231 mov esp, ebp */
  ESP = (EBP);
  /* 10320233 pop ebp */
  EBP = (pop32());
  /* 10320234 ret  */
  ESPCHK(0x103201d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010240 @ 0x10320240 (122 bytes, 39 insns) */
void f_10320240(void) {
  FTRACE(0x10320240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10320240 push ebp */
  push32((uint32_t)(EBP));
  /* 10320241 mov ebp, esp */
  EBP = (ESP);
  /* 10320243 push ecx */
  push32((uint32_t)(ECX));
  /* 10320244 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10320247 cmp eax, dword ptr [0x10340fdc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10340fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032024d jae 0x10320271 */
  if (!C.cf) goto L_10320271;
  /* 1032024f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10320252 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10320255 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10320258 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1032025b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1032025e mov eax, dword ptr [ecx*4 + 0x10340ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10340ea0)));
  /* 10320265 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1032026a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1032026d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1032026f jne 0x1032028c */
  if (!C.zf) goto L_1032028c;
L_10320271:;
  /* 10320271 call 0x1031b590 */
  push32(0x10320276u); f_1031b590();
  /* 10320276 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1032027c call 0x1031b5a0 */
  push32(0x10320281u); f_1031b5a0();
  /* 10320281 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10320287 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1032028a jmp 0x103202b6 */
  goto L_103202b6;
L_1032028c:;
  /* 1032028c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1032028f push edx */
  push32((uint32_t)(EDX));
  /* 10320290 call 0x1031cdb0 */
  push32(0x10320295u); f_1031cdb0();
  /* 10320295 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10320298 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1032029b push eax */
  push32((uint32_t)(EAX));
  /* 1032029c call 0x103202c0 */
  push32(0x103202a1u); f_103202c0();
  /* 103202a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103202a4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103202a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103202aa push ecx */
  push32((uint32_t)(ECX));
  /* 103202ab call 0x1031ce40 */
  push32(0x103202b0u); f_1031ce40();
  /* 103202b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103202b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_103202b6:;
  /* 103202b6 mov esp, ebp */
  ESP = (EBP);
  /* 103202b8 pop ebp */
  EBP = (pop32());
  /* 103202b9 ret  */
  ESPCHK(0x10320240u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x103202c0 (170 bytes, 59 insns) */
void f_103202c0(void) {
  FTRACE(0x103202c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103202c0 push ebp */
  push32((uint32_t)(EBP));
  /* 103202c1 mov ebp, esp */
  EBP = (ESP);
  /* 103202c3 push ecx */
  push32((uint32_t)(ECX));
  /* 103202c4 push esi */
  push32((uint32_t)(ESI));
  /* 103202c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103202c8 push eax */
  push32((uint32_t)(EAX));
  /* 103202c9 call 0x1031cc30 */
  push32(0x103202ceu); f_1031cc30();
  /* 103202ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103202d1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103202d4 je 0x10320313 */
  if (C.zf) goto L_10320313;
  /* 103202d6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103202da je 0x103202e2 */
  if (C.zf) goto L_103202e2;
  /* 103202dc cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103202e0 jne 0x103202fc */
  if (!C.zf) goto L_103202fc;
L_103202e2:;
  /* 103202e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 103202e4 call 0x1031cc30 */
  push32(0x103202e9u); f_1031cc30();
  /* 103202e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103202ec mov esi, eax */
  ESI = (EAX);
  /* 103202ee push 2 */
  push32((uint32_t)(0x2u));
  /* 103202f0 call 0x1031cc30 */
  push32(0x103202f5u); f_1031cc30();
  /* 103202f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103202f8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103202fa je 0x10320313 */
  if (C.zf) goto L_10320313;
L_103202fc:;
  /* 103202fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103202ff push ecx */
  push32((uint32_t)(ECX));
  /* 10320300 call 0x1031cc30 */
  push32(0x10320305u); f_1031cc30();
  /* 10320305 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10320308 push eax */
  push32((uint32_t)(EAX));
  /* 10320309 call dword ptr [0x10342270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342270))), 0x1032030fu);
  /* 1032030f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10320311 je 0x1032031c */
  if (C.zf) goto L_1032031c;
L_10320313:;
  /* 10320313 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1032031a jmp 0x10320325 */
  goto L_10320325;
L_1032031c:;
  /* 1032031c call dword ptr [0x103422fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422fc))), 0x10320322u);
  /* 10320322 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10320325:;
  /* 10320325 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10320328 push edx */
  push32((uint32_t)(EDX));
  /* 10320329 call 0x1031cb50 */
  push32(0x1032032eu); f_1031cb50();
  /* 1032032e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10320331 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10320334 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10320337 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1032033a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1032033d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10320340 mov edx, dword ptr [eax*4 + 0x10340ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10340ea0)));
  /* 10320347 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 1032034c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10320350 je 0x10320363 */
  if (C.zf) goto L_10320363;
  /* 10320352 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10320355 push eax */
  push32((uint32_t)(EAX));
  /* 10320356 call 0x1031b4f0 */
  push32(0x1032035bu); f_1031b4f0();
  /* 1032035b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1032035e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10320361 jmp 0x10320365 */
  goto L_10320365;
L_10320363:;
  /* 10320363 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10320365:;
  /* 10320365 pop esi */
  ESI = (pop32());
  /* 10320366 mov esp, ebp */
  ESP = (EBP);
  /* 10320368 pop ebp */
  EBP = (pop32());
  /* 10320369 ret  */
  ESPCHK(0x103202c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010370 @ 0x10320370 (146 bytes, 52 insns) */
void f_10320370(void) {
  FTRACE(0x10320370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10320370 push ebp */
  push32((uint32_t)(EBP));
  /* 10320371 mov ebp, esp */
  EBP = (ESP);
  /* 10320373 push ebx */
  push32((uint32_t)(EBX));
  /* 10320374 push esi */
  push32((uint32_t)(ESI));
  /* 10320375 push edi */
  push32((uint32_t)(EDI));
L_10320376:;
  /* 10320376 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032037a jne 0x1032039a */
  if (!C.zf) goto L_1032039a;
  /* 1032037c push 0x1033b050 */
  push32((uint32_t)(0x1033b050u));
  /* 10320381 push 0 */
  push32((uint32_t)(0x0u));
  /* 10320383 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10320385 push 0x1033b718 */
  push32((uint32_t)(0x1033b718u));
  /* 1032038a push 2 */
  push32((uint32_t)(0x2u));
  /* 1032038c call 0x10312780 */
  push32(0x10320391u); f_10312780();
  /* 10320391 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10320394 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10320397 jne 0x1032039a */
  if (!C.zf) goto L_1032039a;
  /* 10320399 int3  */
  x86_unimpl("int3 @ 0x10320399");
L_1032039a:;
  /* 1032039a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1032039c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1032039e jne 0x10320376 */
  if (!C.zf) goto L_10320376;
  /* 103203a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103203a3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 103203a6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 103203ac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103203ae je 0x103203fd */
  if (C.zf) goto L_103203fd;
  /* 103203b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103203b3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 103203b6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 103203b9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103203bb je 0x103203fd */
  if (C.zf) goto L_103203fd;
  /* 103203bd push 2 */
  push32((uint32_t)(0x2u));
  /* 103203bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103203c2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 103203c5 push eax */
  push32((uint32_t)(EAX));
  /* 103203c6 call 0x10314150 */
  push32(0x103203cbu); f_10314150();
  /* 103203cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103203ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103203d1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 103203d4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 103203da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103203dd mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 103203e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103203e3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 103203e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103203ec mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 103203f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103203f6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_103203fd:;
  /* 103203fd pop edi */
  EDI = (pop32());
  /* 103203fe pop esi */
  ESI = (pop32());
  /* 103203ff pop ebx */
  EBX = (pop32());
  /* 10320400 pop ebp */
  EBP = (pop32());
  /* 10320401 ret  */
  ESPCHK(0x10320370u, _esp0);
  ESP += 4; return;
}

/* FUN_10010410 @ 0x10320410 (289 bytes, 97 insns) */
void f_10320410(void) {
  FTRACE(0x10320410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10320410 push ebp */
  push32((uint32_t)(EBP));
  /* 10320411 mov ebp, esp */
  EBP = (ESP);
  /* 10320413 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10320416 push esi */
  push32((uint32_t)(ESI));
  /* 10320417 mov eax, dword ptr [0x1033ec98] */
  EAX = (r32((uint32_t)(0x1033ec98)));
  /* 1032041c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1032041f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10320426 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1032042d jmp 0x10320438 */
  goto L_10320438;
L_1032042f:;
  /* 1032042f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10320432 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10320435 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10320438:;
  /* 10320438 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032043c jae 0x10320471 */
  if (!C.cf) goto L_10320471;
  /* 1032043e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10320441 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10320444 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10320447 push ecx */
  push32((uint32_t)(ECX));
  /* 10320448 call 0x103164f0 */
  push32(0x1032044du); f_103164f0();
  /* 1032044d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10320450 mov esi, eax */
  ESI = (EAX);
  /* 10320452 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10320455 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10320458 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1032045c push ecx */
  push32((uint32_t)(ECX));
  /* 1032045d call 0x103164f0 */
  push32(0x10320462u); f_103164f0();
  /* 10320462 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10320465 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10320468 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1032046c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1032046f jmp 0x1032042f */
  goto L_1032042f;
L_10320471:;
  /* 10320471 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10320474 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10320477 push eax */
  push32((uint32_t)(EAX));
  /* 10320478 call 0x103136a0 */
  push32(0x1032047du); f_103136a0();
  /* 1032047d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10320480 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10320483 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10320487 je 0x10320529 */
  if (C.zf) goto L_10320529;
  /* 1032048d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10320490 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10320493 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1032049a jmp 0x103204a5 */
  goto L_103204a5;
L_1032049c:;
  /* 1032049c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1032049f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103204a2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_103204a5:;
  /* 103204a5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103204a9 jae 0x1032051a */
  if (!C.cf) goto L_1032051a;
  /* 103204ab mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103204ae mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 103204b1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103204b4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103204b7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 103204ba mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103204bd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103204c0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 103204c3 push ecx */
  push32((uint32_t)(ECX));
  /* 103204c4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103204c7 push edx */
  push32((uint32_t)(EDX));
  /* 103204c8 call 0x10316670 */
  push32(0x103204cdu); f_10316670();
  /* 103204cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103204d0 push eax */
  push32((uint32_t)(EAX));
  /* 103204d1 call 0x103164f0 */
  push32(0x103204d6u); f_103164f0();
  /* 103204d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103204d9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103204dc add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103204de mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 103204e1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103204e4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 103204e7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103204ea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103204ed mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 103204f0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103204f3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103204f6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 103204fa push eax */
  push32((uint32_t)(EAX));
  /* 103204fb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103204fe push ecx */
  push32((uint32_t)(ECX));
  /* 103204ff call 0x10316670 */
  push32(0x10320504u); f_10316670();
  /* 10320504 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10320507 push eax */
  push32((uint32_t)(EAX));
  /* 10320508 call 0x103164f0 */
  push32(0x1032050du); f_103164f0();
  /* 1032050d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10320510 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10320513 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10320515 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10320518 jmp 0x1032049c */
  goto L_1032049c;
L_1032051a:;
  /* 1032051a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1032051d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10320520 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10320523 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10320526 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10320529:;
  /* 10320529 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1032052c pop esi */
  ESI = (pop32());
  /* 1032052d mov esp, ebp */
  ESP = (EBP);
  /* 1032052f pop ebp */
  EBP = (pop32());
  /* 10320530 ret  */
  ESPCHK(0x10320410u, _esp0);
  ESP += 4; return;
}

/* FUN_10010540 @ 0x10320540 (291 bytes, 97 insns) */
void f_10320540(void) {
  FTRACE(0x10320540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10320540 push ebp */
  push32((uint32_t)(EBP));
  /* 10320541 mov ebp, esp */
  EBP = (ESP);
  /* 10320543 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10320546 push esi */
  push32((uint32_t)(ESI));
  /* 10320547 mov eax, dword ptr [0x1033ec98] */
  EAX = (r32((uint32_t)(0x1033ec98)));
  /* 1032054c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1032054f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10320556 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1032055d jmp 0x10320568 */
  goto L_10320568;
L_1032055f:;
  /* 1032055f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10320562 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10320565 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10320568:;
  /* 10320568 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032056c jae 0x103205a2 */
  if (!C.cf) goto L_103205a2;
  /* 1032056e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10320571 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10320574 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10320578 push ecx */
  push32((uint32_t)(ECX));
  /* 10320579 call 0x103164f0 */
  push32(0x1032057eu); f_103164f0();
  /* 1032057e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10320581 mov esi, eax */
  ESI = (EAX);
  /* 10320583 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10320586 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10320589 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 1032058d push ecx */
  push32((uint32_t)(ECX));
  /* 1032058e call 0x103164f0 */
  push32(0x10320593u); f_103164f0();
  /* 10320593 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10320596 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10320599 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1032059d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 103205a0 jmp 0x1032055f */
  goto L_1032055f;
L_103205a2:;
  /* 103205a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103205a5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103205a8 push eax */
  push32((uint32_t)(EAX));
  /* 103205a9 call 0x103136a0 */
  push32(0x103205aeu); f_103136a0();
  /* 103205ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103205b1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103205b4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103205b8 je 0x1032065b */
  if (C.zf) goto L_1032065b;
  /* 103205be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103205c1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 103205c4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 103205cb jmp 0x103205d6 */
  goto L_103205d6;
L_103205cd:;
  /* 103205cd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103205d0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103205d3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_103205d6:;
  /* 103205d6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103205da jae 0x1032064c */
  if (!C.cf) goto L_1032064c;
  /* 103205dc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103205df mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 103205e2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103205e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103205e8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 103205eb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103205ee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103205f1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 103205f5 push ecx */
  push32((uint32_t)(ECX));
  /* 103205f6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103205f9 push edx */
  push32((uint32_t)(EDX));
  /* 103205fa call 0x10316670 */
  push32(0x103205ffu); f_10316670();
  /* 103205ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10320602 push eax */
  push32((uint32_t)(EAX));
  /* 10320603 call 0x103164f0 */
  push32(0x10320608u); f_103164f0();
  /* 10320608 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1032060b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1032060e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10320610 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10320613 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10320616 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10320619 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1032061c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1032061f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10320622 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10320625 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10320628 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 1032062c push eax */
  push32((uint32_t)(EAX));
  /* 1032062d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10320630 push ecx */
  push32((uint32_t)(ECX));
  /* 10320631 call 0x10316670 */
  push32(0x10320636u); f_10316670();
  /* 10320636 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10320639 push eax */
  push32((uint32_t)(EAX));
  /* 1032063a call 0x103164f0 */
  push32(0x1032063fu); f_103164f0();
  /* 1032063f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10320642 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10320645 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10320647 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1032064a jmp 0x103205cd */
  goto L_103205cd;
L_1032064c:;
  /* 1032064c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1032064f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10320652 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10320655 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10320658 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1032065b:;
  /* 1032065b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1032065e pop esi */
  ESI = (pop32());
  /* 1032065f mov esp, ebp */
  ESP = (EBP);
  /* 10320661 pop ebp */
  EBP = (pop32());
  /* 10320662 ret  */
  ESPCHK(0x10320540u, _esp0);
  ESP += 4; return;
}

/* FUN_10010670 @ 0x10320670 (878 bytes, 273 insns) */
void f_10320670(void) {
  FTRACE(0x10320670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10320670 push ebp */
  push32((uint32_t)(EBP));
  /* 10320671 mov ebp, esp */
  EBP = (ESP);
  /* 10320673 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10320676 push esi */
  push32((uint32_t)(ESI));
  /* 10320677 mov eax, dword ptr [0x1033ec98] */
  EAX = (r32((uint32_t)(0x1033ec98)));
  /* 1032067c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1032067f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10320686 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1032068d jmp 0x10320698 */
  goto L_10320698;
L_1032068f:;
  /* 1032068f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10320692 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10320695 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10320698:;
  /* 10320698 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1032069c jae 0x103206d1 */
  if (!C.cf) goto L_103206d1;
  /* 1032069e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103206a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103206a4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 103206a7 push ecx */
  push32((uint32_t)(ECX));
  /* 103206a8 call 0x103164f0 */
  push32(0x103206adu); f_103164f0();
  /* 103206ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103206b0 mov esi, eax */
  ESI = (EAX);
  /* 103206b2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103206b5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103206b8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 103206bc push ecx */
  push32((uint32_t)(ECX));
  /* 103206bd call 0x103164f0 */
  push32(0x103206c2u); f_103164f0();
  /* 103206c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103206c5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103206c8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 103206cc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 103206cf jmp 0x1032068f */
  goto L_1032068f;
L_103206d1:;
  /* 103206d1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 103206d8 jmp 0x103206e3 */
  goto L_103206e3;
L_103206da:;
  /* 103206da mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103206dd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103206e0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_103206e3:;
  /* 103206e3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103206e7 jae 0x1032071d */
  if (!C.cf) goto L_1032071d;
  /* 103206e9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103206ec mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103206ef mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 103206f3 push eax */
  push32((uint32_t)(EAX));
  /* 103206f4 call 0x103164f0 */
  push32(0x103206f9u); f_103164f0();
  /* 103206f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103206fc mov esi, eax */
  ESI = (EAX);
  /* 103206fe mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10320701 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10320704 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10320708 push eax */
  push32((uint32_t)(EAX));
  /* 10320709 call 0x103164f0 */
  push32(0x1032070eu); f_103164f0();
  /* 1032070e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10320711 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10320714 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10320718 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1032071b jmp 0x103206da */
  goto L_103206da;
L_1032071d:;
  /* 1032071d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10320720 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10320726 push eax */
  push32((uint32_t)(EAX));
  /* 10320727 call 0x103164f0 */
  push32(0x1032072cu); f_103164f0();
  /* 1032072c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1032072f mov esi, eax */
  ESI = (EAX);
  /* 10320731 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10320734 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 1032073a push edx */
  push32((uint32_t)(EDX));
  /* 1032073b call 0x103164f0 */
  push32(0x10320740u); f_103164f0();
  /* 10320740 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10320743 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10320746 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1032074a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1032074d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10320750 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10320756 push edx */
  push32((uint32_t)(EDX));
  /* 10320757 call 0x103164f0 */
  push32(0x1032075cu); f_103164f0();
  /* 1032075c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1032075f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10320762 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10320766 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10320769 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1032076c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 10320772 push ecx */
  push32((uint32_t)(ECX));
  /* 10320773 call 0x103164f0 */
  push32(0x10320778u); f_103164f0();
  /* 10320778 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1032077b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1032077e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10320782 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10320785 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10320788 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1032078e push edx */
  push32((uint32_t)(EDX));
  /* 1032078f call 0x103164f0 */
  push32(0x10320794u); f_103164f0();
  /* 10320794 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10320797 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1032079a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1032079e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 103207a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103207a4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103207a9 push eax */
  push32((uint32_t)(EAX));
  /* 103207aa call 0x103136a0 */
  push32(0x103207afu); f_103136a0();
  /* 103207af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103207b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103207b5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103207b9 je 0x103209d6 */
  if (C.zf) goto L_103209d6;
  /* 103207bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103207c2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 103207c5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103207c8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103207ce mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 103207d1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 103207d6 mov eax, dword ptr [0x1033ec98] */
  EAX = (r32((uint32_t)(0x1033ec98)));
  /* 103207db push eax */
  push32((uint32_t)(EAX));
  /* 103207dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103207df push ecx */
  push32((uint32_t)(ECX));
  /* 103207e0 call 0x10319fa0 */
  push32(0x103207e5u); f_10319fa0();
  /* 103207e5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103207e8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 103207ef jmp 0x103207fa */
  goto L_103207fa;
L_103207f1:;
  /* 103207f1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103207f4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103207f7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_103207fa:;
  /* 103207fa cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103207fe jae 0x1032086e */
  if (!C.cf) goto L_1032086e;
  /* 10320800 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10320803 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10320806 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10320809 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1032080c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1032080f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10320812 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10320815 push edx */
  push32((uint32_t)(EDX));
  /* 10320816 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10320819 push eax */
  push32((uint32_t)(EAX));
  /* 1032081a call 0x10316670 */
  push32(0x1032081fu); f_10316670();
  /* 1032081f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10320822 push eax */
  push32((uint32_t)(EAX));
  /* 10320823 call 0x103164f0 */
  push32(0x10320828u); f_103164f0();
  /* 10320828 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1032082b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1032082e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10320832 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10320835 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10320838 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1032083b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1032083e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 10320842 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10320845 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10320848 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 1032084c push edx */
  push32((uint32_t)(EDX));
  /* 1032084d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10320850 push eax */
  push32((uint32_t)(EAX));
  /* 10320851 call 0x10316670 */
  push32(0x10320856u); f_10316670();
  /* 10320856 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10320859 push eax */
  push32((uint32_t)(EAX));
  /* 1032085a call 0x103164f0 */
  push32(0x1032085fu); f_103164f0();
  /* 1032085f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10320862 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10320865 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10320869 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1032086c jmp 0x103207f1 */
  goto L_103207f1;
L_1032086e:;
  /* 1032086e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10320875 jmp 0x10320880 */
  goto L_10320880;
L_10320877:;
  /* 10320877 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1032087a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1032087d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10320880:;
  /* 10320880 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10320884 jae 0x103208f6 */
  if (!C.cf) goto L_103208f6;
  /* 10320886 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10320889 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1032088c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1032088f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 10320893 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10320896 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10320899 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1032089d push eax */
  push32((uint32_t)(EAX));
  /* 1032089e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103208a1 push ecx */
  push32((uint32_t)(ECX));
  /* 103208a2 call 0x10316670 */
  push32(0x103208a7u); f_10316670();
  /* 103208a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103208aa push eax */
  push32((uint32_t)(EAX));
  /* 103208ab call 0x103164f0 */
  push32(0x103208b0u); f_103164f0();
  /* 103208b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103208b3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103208b6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 103208ba mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 103208bd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103208c0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103208c3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103208c6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 103208ca mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103208cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103208d0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 103208d4 push eax */
  push32((uint32_t)(EAX));
  /* 103208d5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103208d8 push ecx */
  push32((uint32_t)(ECX));
  /* 103208d9 call 0x10316670 */
  push32(0x103208deu); f_10316670();
  /* 103208de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103208e1 push eax */
  push32((uint32_t)(EAX));
  /* 103208e2 call 0x103164f0 */
  push32(0x103208e7u); f_103164f0();
  /* 103208e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103208ea mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103208ed lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 103208f1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 103208f4 jmp 0x10320877 */
  goto L_10320877;
L_103208f6:;
  /* 103208f6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103208f9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103208fc mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 10320902 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10320905 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1032090b push ecx */
  push32((uint32_t)(ECX));
  /* 1032090c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1032090f push edx */
  push32((uint32_t)(EDX));
  /* 10320910 call 0x10316670 */
  push32(0x10320915u); f_10316670();
  /* 10320915 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10320918 push eax */
  push32((uint32_t)(EAX));
  /* 10320919 call 0x103164f0 */
  push32(0x1032091eu); f_103164f0();
  /* 1032091e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10320921 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10320924 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10320928 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1032092b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1032092e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10320931 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 10320937 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1032093a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10320940 push eax */
  push32((uint32_t)(EAX));
  /* 10320941 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10320944 push ecx */
  push32((uint32_t)(ECX));
  /* 10320945 call 0x10316670 */
  push32(0x1032094au); f_10316670();
  /* 1032094a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1032094d push eax */
  push32((uint32_t)(EAX));
  /* 1032094e call 0x103164f0 */
  push32(0x10320953u); f_103164f0();
  /* 10320953 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10320956 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10320959 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1032095d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10320960 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10320963 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10320966 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 1032096c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1032096f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 10320975 push ecx */
  push32((uint32_t)(ECX));
  /* 10320976 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10320979 push edx */
  push32((uint32_t)(EDX));
  /* 1032097a call 0x10316670 */
  push32(0x1032097fu); f_10316670();
  /* 1032097f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10320982 push eax */
  push32((uint32_t)(EAX));
  /* 10320983 call 0x103164f0 */
  push32(0x10320988u); f_103164f0();
  /* 10320988 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1032098b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1032098e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10320992 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10320995 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10320998 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1032099b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 103209a1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103209a4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 103209aa push eax */
  push32((uint32_t)(EAX));
  /* 103209ab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103209ae push ecx */
  push32((uint32_t)(ECX));
  /* 103209af call 0x10316670 */
  push32(0x103209b4u); f_10316670();
  /* 103209b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103209b7 push eax */
  push32((uint32_t)(EAX));
  /* 103209b8 call 0x103164f0 */
  push32(0x103209bdu); f_103164f0();
  /* 103209bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103209c0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103209c3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 103209c7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 103209ca mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103209cd mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103209d0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_103209d6:;
  /* 103209d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103209d9 pop esi */
  ESI = (pop32());
  /* 103209da mov esp, ebp */
  ESP = (EBP);
  /* 103209dc pop ebp */
  EBP = (pop32());
  /* 103209dd ret  */
  ESPCHK(0x10320670u, _esp0);
  ESP += 4; return;
}

/* FUN_100109e0 @ 0x103209e0 (31 bytes, 15 insns) */
void f_103209e0(void) {
  FTRACE(0x103209e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103209e0 push ebp */
  push32((uint32_t)(EBP));
  /* 103209e1 mov ebp, esp */
  EBP = (ESP);
  /* 103209e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103209e5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103209e8 push eax */
  push32((uint32_t)(EAX));
  /* 103209e9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103209ec push ecx */
  push32((uint32_t)(ECX));
  /* 103209ed mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103209f0 push edx */
  push32((uint32_t)(EDX));
  /* 103209f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103209f4 push eax */
  push32((uint32_t)(EAX));
  /* 103209f5 call 0x10320a00 */
  push32(0x103209fau); f_10320a00();
  /* 103209fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103209fd pop ebp */
  EBP = (pop32());
  /* 103209fe ret  */
  ESPCHK(0x103209e0u, _esp0);
  ESP += 4; return;
}

