#include "recomp.h"

/* FUN_10006900 @ 0x10cd6900 (10 bytes, 5 insns) */
void f_10cd6900(void) {
  FTRACE(0x10cd6900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd6900 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd6901 mov ebp, esp */
  EBP = (ESP);
  /* 10cd6903 mov eax, dword ptr [0x10cfcc94] */
  EAX = (r32((uint32_t)(0x10cfcc94)));
  /* 10cd6908 pop ebp */
  EBP = (pop32());
  /* 10cd6909 ret  */
  ESPCHK(0x10cd6900u, _esp0);
  ESP += 4; return;
}

/* FUN_10006910 @ 0x10cd6910 (31 bytes, 11 insns) */
void f_10cd6910(void) {
  FTRACE(0x10cd6910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd6910 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd6911 mov ebp, esp */
  EBP = (ESP);
  /* 10cd6913 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd691a jbe 0x10cd6920 */
  if ((C.cf||C.zf)) goto L_10cd6920;
  /* 10cd691c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd691e jmp 0x10cd692d */
  goto L_10cd692d;
L_10cd6920:;
  /* 10cd6920 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd6923 mov dword ptr [0x10cfcc94], eax */
  w32((uint32_t)(0x10cfcc94), (EAX));
  /* 10cd6928 mov eax, 1 */
  EAX = (0x1u);
L_10cd692d:;
  /* 10cd692d pop ebp */
  EBP = (pop32());
  /* 10cd692e ret  */
  ESPCHK(0x10cd6910u, _esp0);
  ESP += 4; return;
}

/* FUN_10006930 @ 0x10cd6930 (89 bytes, 20 insns) */
void f_10cd6930(void) {
  FTRACE(0x10cd6930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd6930 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd6931 mov ebp, esp */
  EBP = (ESP);
  /* 10cd6933 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 10cd6938 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd693a mov eax, dword ptr [0x10cffdac] */
  EAX = (r32((uint32_t)(0x10cffdac)));
  /* 10cd693f push eax */
  push32((uint32_t)(EAX));
  /* 10cd6940 call dword ptr [0x10d002d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002d0))), 0x10cd6946u);
  /* 10cd6946 mov dword ptr [0x10cffda8], eax */
  w32((uint32_t)(0x10cffda8), (EAX));
  /* 10cd694b cmp dword ptr [0x10cffda8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cffda8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd6952 jne 0x10cd6958 */
  if (!C.zf) goto L_10cd6958;
  /* 10cd6954 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd6956 jmp 0x10cd6987 */
  goto L_10cd6987;
L_10cd6958:;
  /* 10cd6958 mov ecx, dword ptr [0x10cffda8] */
  ECX = (r32((uint32_t)(0x10cffda8)));
  /* 10cd695e mov dword ptr [0x10cffd9c], ecx */
  w32((uint32_t)(0x10cffd9c), (ECX));
  /* 10cd6964 mov dword ptr [0x10cffda0], 0 */
  w32((uint32_t)(0x10cffda0), (0x0u));
  /* 10cd696e mov dword ptr [0x10cffda4], 0 */
  w32((uint32_t)(0x10cffda4), (0x0u));
  /* 10cd6978 mov dword ptr [0x10cffd88], 0x10 */
  w32((uint32_t)(0x10cffd88), (0x10u));
  /* 10cd6982 mov eax, 1 */
  EAX = (0x1u);
L_10cd6987:;
  /* 10cd6987 pop ebp */
  EBP = (pop32());
  /* 10cd6988 ret  */
  ESPCHK(0x10cd6930u, _esp0);
  ESP += 4; return;
}

/* FUN_10006990 @ 0x10cd6990 (85 bytes, 29 insns) */
void f_10cd6990(void) {
  FTRACE(0x10cd6990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd6990 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd6991 mov ebp, esp */
  EBP = (ESP);
  /* 10cd6993 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd6996 mov eax, dword ptr [0x10cffda4] */
  EAX = (r32((uint32_t)(0x10cffda4)));
  /* 10cd699b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cd699e mov ecx, dword ptr [0x10cffda8] */
  ECX = (r32((uint32_t)(0x10cffda8)));
  /* 10cd69a4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd69a6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cd69a9 mov edx, dword ptr [0x10cffda8] */
  EDX = (r32((uint32_t)(0x10cffda8)));
  /* 10cd69af mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10cd69b2:;
  /* 10cd69b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd69b5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd69b8 jae 0x10cd69df */
  if (!C.cf) goto L_10cd69df;
  /* 10cd69ba mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd69bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd69c0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd69c3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10cd69c6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd69cd jae 0x10cd69d4 */
  if (!C.cf) goto L_10cd69d4;
  /* 10cd69cf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd69d2 jmp 0x10cd69e1 */
  goto L_10cd69e1;
L_10cd69d4:;
  /* 10cd69d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd69d7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd69da mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10cd69dd jmp 0x10cd69b2 */
  goto L_10cd69b2;
L_10cd69df:;
  /* 10cd69df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10cd69e1:;
  /* 10cd69e1 mov esp, ebp */
  ESP = (EBP);
  /* 10cd69e3 pop ebp */
  EBP = (pop32());
  /* 10cd69e4 ret  */
  ESPCHK(0x10cd6990u, _esp0);
  ESP += 4; return;
}

/* FUN_100069f0 @ 0x10cd69f0 (95 bytes, 33 insns) */
void f_10cd69f0(void) {
  FTRACE(0x10cd69f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd69f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd69f1 mov ebp, esp */
  EBP = (ESP);
  /* 10cd69f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd69f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd69f9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd69fc sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd69ff mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10cd6a02 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd6a05 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10cd6a08 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10cd6a0b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10cd6a10 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd6a13 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10cd6a15 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd6a18 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10cd6a1b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd6a1d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd6a1f jne 0x10cd6a41 */
  if (!C.zf) goto L_10cd6a41;
  /* 10cd6a21 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd6a24 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10cd6a27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd6a29 jne 0x10cd6a41 */
  if (!C.zf) goto L_10cd6a41;
  /* 10cd6a2b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd6a2e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 10cd6a34 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd6a36 je 0x10cd6a41 */
  if (C.zf) goto L_10cd6a41;
  /* 10cd6a38 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 10cd6a3f jmp 0x10cd6a48 */
  goto L_10cd6a48;
L_10cd6a41:;
  /* 10cd6a41 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10cd6a48:;
  /* 10cd6a48 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd6a4b mov esp, ebp */
  ESP = (EBP);
  /* 10cd6a4d pop ebp */
  EBP = (pop32());
  /* 10cd6a4e ret  */
  ESPCHK(0x10cd69f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a50 @ 0x10cd6a50 (1485 bytes, 453 insns) */
void f_10cd6a50(void) {
  FTRACE(0x10cd6a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd6a50 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd6a51 mov ebp, esp */
  EBP = (ESP);
  /* 10cd6a53 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd6a56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd6a59 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10cd6a5c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 10cd6a5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd6a62 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd6a65 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd6a68 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10cd6a6b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd6a6e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10cd6a71 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10cd6a74 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd6a77 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cd6a7d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10cd6a80 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 10cd6a87 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10cd6a8a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd6a8d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd6a90 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10cd6a93 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10cd6a96 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10cd6a98 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd6a9b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10cd6a9e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10cd6aa1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6aa4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 10cd6aa7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10cd6aaa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10cd6aac mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10cd6aaf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10cd6ab2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10cd6ab5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10cd6ab8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd6abb and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10cd6abe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd6ac0 jne 0x10cd6be8 */
  if (!C.zf) goto L_10cd6be8;
  /* 10cd6ac6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd6ac9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10cd6acc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd6acf mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10cd6ad2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd6ad6 jbe 0x10cd6adf */
  if ((C.cf||C.zf)) goto L_10cd6adf;
  /* 10cd6ad8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10cd6adf:;
  /* 10cd6adf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10cd6ae2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10cd6ae5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10cd6ae8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd6aeb jne 0x10cd6bc1 */
  if (!C.zf) goto L_10cd6bc1;
  /* 10cd6af1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd6af5 jae 0x10cd6b56 */
  if (!C.cf) goto L_10cd6b56;
  /* 10cd6af7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10cd6afc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd6aff shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10cd6b01 not eax */
  EAX = (~(EAX));
  /* 10cd6b03 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd6b06 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10cd6b09 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10cd6b0d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd6b0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd6b12 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10cd6b15 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10cd6b19 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10cd6b1c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6b1f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10cd6b22 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10cd6b25 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10cd6b28 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6b2b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10cd6b2e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10cd6b31 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6b34 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10cd6b38 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd6b3a jne 0x10cd6b54 */
  if (!C.zf) goto L_10cd6b54;
  /* 10cd6b3c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10cd6b41 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd6b44 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10cd6b46 not eax */
  EAX = (~(EAX));
  /* 10cd6b48 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd6b4b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10cd6b4d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd6b4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd6b52 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10cd6b54:;
  /* 10cd6b54 jmp 0x10cd6bc1 */
  goto L_10cd6bc1;
L_10cd6b56:;
  /* 10cd6b56 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd6b59 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd6b5c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10cd6b61 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10cd6b63 not edx */
  EDX = (~(EDX));
  /* 10cd6b65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd6b68 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10cd6b6b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10cd6b72 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd6b74 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd6b77 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10cd6b7a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10cd6b81 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10cd6b84 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6b87 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10cd6b8a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10cd6b8d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10cd6b90 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6b93 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10cd6b96 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10cd6b99 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6b9c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10cd6ba0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd6ba2 jne 0x10cd6bc1 */
  if (!C.zf) goto L_10cd6bc1;
  /* 10cd6ba4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd6ba7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd6baa mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10cd6baf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10cd6bb1 not edx */
  EDX = (~(EDX));
  /* 10cd6bb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd6bb6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10cd6bb9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd6bbb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd6bbe mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10cd6bc1:;
  /* 10cd6bc1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10cd6bc4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10cd6bc7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10cd6bca mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10cd6bcd mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10cd6bd0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10cd6bd3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10cd6bd6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10cd6bd9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10cd6bdc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10cd6bdf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd6be2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6be5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_10cd6be8:;
  /* 10cd6be8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd6beb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10cd6bee sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd6bf1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10cd6bf4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd6bf8 jbe 0x10cd6c01 */
  if ((C.cf||C.zf)) goto L_10cd6c01;
  /* 10cd6bfa mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10cd6c01:;
  /* 10cd6c01 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd6c04 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10cd6c07 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd6c09 jne 0x10cd6d65 */
  if (!C.zf) goto L_10cd6d65;
  /* 10cd6c0f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10cd6c12 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd6c15 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 10cd6c18 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd6c1b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10cd6c1e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd6c21 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10cd6c24 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd6c28 jbe 0x10cd6c31 */
  if ((C.cf||C.zf)) goto L_10cd6c31;
  /* 10cd6c2a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_10cd6c31:;
  /* 10cd6c31 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd6c34 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6c37 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10cd6c3a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd6c3d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10cd6c40 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd6c43 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10cd6c46 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd6c4a jbe 0x10cd6c53 */
  if ((C.cf||C.zf)) goto L_10cd6c53;
  /* 10cd6c4c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10cd6c53:;
  /* 10cd6c53 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10cd6c56 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd6c59 je 0x10cd6d5f */
  if (C.zf) goto L_10cd6d5f;
  /* 10cd6c5f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10cd6c62 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10cd6c65 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10cd6c68 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd6c6b jne 0x10cd6d41 */
  if (!C.zf) goto L_10cd6d41;
  /* 10cd6c71 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd6c75 jae 0x10cd6cd6 */
  if (!C.cf) goto L_10cd6cd6;
  /* 10cd6c77 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10cd6c7c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10cd6c7f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10cd6c81 not edx */
  EDX = (~(EDX));
  /* 10cd6c83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd6c86 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10cd6c89 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10cd6c8d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd6c8f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd6c92 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10cd6c95 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10cd6c99 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10cd6c9c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6c9f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10cd6ca2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10cd6ca5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10cd6ca8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6cab mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10cd6cae mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10cd6cb1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6cb4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10cd6cb8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd6cba jne 0x10cd6cd4 */
  if (!C.zf) goto L_10cd6cd4;
  /* 10cd6cbc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10cd6cc1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10cd6cc4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10cd6cc6 not edx */
  EDX = (~(EDX));
  /* 10cd6cc8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd6ccb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10cd6ccd and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd6ccf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd6cd2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10cd6cd4:;
  /* 10cd6cd4 jmp 0x10cd6d41 */
  goto L_10cd6d41;
L_10cd6cd6:;
  /* 10cd6cd6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10cd6cd9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd6cdc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10cd6ce1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10cd6ce3 not eax */
  EAX = (~(EAX));
  /* 10cd6ce5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd6ce8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10cd6ceb mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10cd6cf2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd6cf4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd6cf7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10cd6cfa mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10cd6d01 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10cd6d04 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6d07 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10cd6d0a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10cd6d0d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10cd6d10 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6d13 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10cd6d16 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10cd6d19 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6d1c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10cd6d20 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd6d22 jne 0x10cd6d41 */
  if (!C.zf) goto L_10cd6d41;
  /* 10cd6d24 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10cd6d27 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd6d2a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10cd6d2f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10cd6d31 not eax */
  EAX = (~(EAX));
  /* 10cd6d33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd6d36 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10cd6d39 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd6d3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd6d3e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10cd6d41:;
  /* 10cd6d41 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10cd6d44 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10cd6d47 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10cd6d4a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10cd6d4d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10cd6d50 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10cd6d53 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10cd6d56 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10cd6d59 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10cd6d5c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_10cd6d5f:;
  /* 10cd6d5f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10cd6d62 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_10cd6d65:;
  /* 10cd6d65 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd6d68 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10cd6d6b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd6d6d jne 0x10cd6d7b */
  if (!C.zf) goto L_10cd6d7b;
  /* 10cd6d6f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10cd6d72 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd6d75 je 0x10cd6e8b */
  if (C.zf) goto L_10cd6e8b;
L_10cd6d7b:;
  /* 10cd6d7b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10cd6d7e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd6d81 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10cd6d84 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10cd6d87 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10cd6d8a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cd6d8d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10cd6d90 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10cd6d93 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10cd6d96 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cd6d99 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10cd6d9c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cd6d9f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10cd6da2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10cd6da5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10cd6da8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10cd6dab mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10cd6dae mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10cd6db1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10cd6db4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10cd6db7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10cd6dba cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd6dbd jne 0x10cd6e8b */
  if (!C.zf) goto L_10cd6e8b;
  /* 10cd6dc3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd6dc7 jae 0x10cd6e24 */
  if (!C.cf) goto L_10cd6e24;
  /* 10cd6dc9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10cd6dcc add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6dcf movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10cd6dd3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10cd6dd6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6dd9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10cd6ddc add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10cd6ddf mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10cd6de2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6de5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10cd6de8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd6dea jne 0x10cd6e02 */
  if (!C.zf) goto L_10cd6e02;
  /* 10cd6dec mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10cd6df1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10cd6df4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10cd6df6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd6df9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10cd6dfb or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd6dfd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd6e00 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10cd6e02:;
  /* 10cd6e02 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10cd6e07 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10cd6e0a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10cd6e0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd6e0f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10cd6e12 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10cd6e16 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd6e18 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd6e1b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10cd6e1e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10cd6e22 jmp 0x10cd6e8b */
  goto L_10cd6e8b;
L_10cd6e24:;
  /* 10cd6e24 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10cd6e27 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6e2a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10cd6e2e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10cd6e31 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6e34 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10cd6e37 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10cd6e3a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10cd6e3d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6e40 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10cd6e43 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd6e45 jne 0x10cd6e62 */
  if (!C.zf) goto L_10cd6e62;
  /* 10cd6e47 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10cd6e4a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd6e4d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10cd6e52 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10cd6e54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd6e57 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10cd6e5a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd6e5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd6e5f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10cd6e62:;
  /* 10cd6e62 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10cd6e65 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd6e68 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10cd6e6d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10cd6e6f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd6e72 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10cd6e75 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10cd6e7c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd6e7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd6e81 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10cd6e84 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10cd6e8b:;
  /* 10cd6e8b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10cd6e8e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd6e91 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10cd6e93 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10cd6e96 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6e99 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd6e9c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 10cd6e9f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd6ea2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10cd6ea4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd6ea7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd6eaa mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10cd6eac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd6eaf cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd6eb2 jne 0x10cd7019 */
  if (!C.zf) goto L_10cd7019;
  /* 10cd6eb8 cmp dword ptr [0x10cffda0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cffda0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd6ebf je 0x10cd7008 */
  if (C.zf) goto L_10cd7008;
  /* 10cd6ec5 mov eax, dword ptr [0x10cffd98] */
  EAX = (r32((uint32_t)(0x10cffd98)));
  /* 10cd6eca shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10cd6ecd mov ecx, dword ptr [0x10cffda0] */
  ECX = (r32((uint32_t)(0x10cffda0)));
  /* 10cd6ed3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10cd6ed6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6ed8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10cd6edb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10cd6ee0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10cd6ee5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd6ee8 push eax */
  push32((uint32_t)(EAX));
  /* 10cd6ee9 call dword ptr [0x10d002b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002b4))), 0x10cd6eefu);
  /* 10cd6eef mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10cd6ef4 mov ecx, dword ptr [0x10cffd98] */
  ECX = (r32((uint32_t)(0x10cffd98)));
  /* 10cd6efa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10cd6efc mov eax, dword ptr [0x10cffda0] */
  EAX = (r32((uint32_t)(0x10cffda0)));
  /* 10cd6f01 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10cd6f04 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd6f06 mov edx, dword ptr [0x10cffda0] */
  EDX = (r32((uint32_t)(0x10cffda0)));
  /* 10cd6f0c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10cd6f0f mov eax, dword ptr [0x10cffda0] */
  EAX = (r32((uint32_t)(0x10cffda0)));
  /* 10cd6f14 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10cd6f17 mov edx, dword ptr [0x10cffd98] */
  EDX = (r32((uint32_t)(0x10cffd98)));
  /* 10cd6f1d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10cd6f28 mov eax, dword ptr [0x10cffda0] */
  EAX = (r32((uint32_t)(0x10cffda0)));
  /* 10cd6f2d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10cd6f30 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10cd6f33 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10cd6f36 mov eax, dword ptr [0x10cffda0] */
  EAX = (r32((uint32_t)(0x10cffda0)));
  /* 10cd6f3b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10cd6f3e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10cd6f41 mov edx, dword ptr [0x10cffda0] */
  EDX = (r32((uint32_t)(0x10cffda0)));
  /* 10cd6f47 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10cd6f4a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10cd6f4e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd6f50 jne 0x10cd6f66 */
  if (!C.zf) goto L_10cd6f66;
  /* 10cd6f52 mov edx, dword ptr [0x10cffda0] */
  EDX = (r32((uint32_t)(0x10cffda0)));
  /* 10cd6f58 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10cd6f5b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10cd6f5d mov ecx, dword ptr [0x10cffda0] */
  ECX = (r32((uint32_t)(0x10cffda0)));
  /* 10cd6f63 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10cd6f66:;
  /* 10cd6f66 mov edx, dword ptr [0x10cffda0] */
  EDX = (r32((uint32_t)(0x10cffda0)));
  /* 10cd6f6c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd6f70 jne 0x10cd7008 */
  if (!C.zf) goto L_10cd7008;
  /* 10cd6f76 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10cd6f7b push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd6f7d mov eax, dword ptr [0x10cffda0] */
  EAX = (r32((uint32_t)(0x10cffda0)));
  /* 10cd6f82 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10cd6f85 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd6f86 call dword ptr [0x10d002b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002b4))), 0x10cd6f8cu);
  /* 10cd6f8c mov edx, dword ptr [0x10cffda0] */
  EDX = (r32((uint32_t)(0x10cffda0)));
  /* 10cd6f92 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10cd6f95 push eax */
  push32((uint32_t)(EAX));
  /* 10cd6f96 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd6f98 mov ecx, dword ptr [0x10cffdac] */
  ECX = (r32((uint32_t)(0x10cffdac)));
  /* 10cd6f9e push ecx */
  push32((uint32_t)(ECX));
  /* 10cd6f9f call dword ptr [0x10d002b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002b0))), 0x10cd6fa5u);
  /* 10cd6fa5 mov edx, dword ptr [0x10cffda4] */
  EDX = (r32((uint32_t)(0x10cffda4)));
  /* 10cd6fab imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cd6fae mov eax, dword ptr [0x10cffda8] */
  EAX = (r32((uint32_t)(0x10cffda8)));
  /* 10cd6fb3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6fb5 mov ecx, dword ptr [0x10cffda0] */
  ECX = (r32((uint32_t)(0x10cffda0)));
  /* 10cd6fbb add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6fbe sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd6fc0 push eax */
  push32((uint32_t)(EAX));
  /* 10cd6fc1 mov edx, dword ptr [0x10cffda0] */
  EDX = (r32((uint32_t)(0x10cffda0)));
  /* 10cd6fc7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6fca push edx */
  push32((uint32_t)(EDX));
  /* 10cd6fcb mov eax, dword ptr [0x10cffda0] */
  EAX = (r32((uint32_t)(0x10cffda0)));
  /* 10cd6fd0 push eax */
  push32((uint32_t)(EAX));
  /* 10cd6fd1 call 0x10cda580 */
  push32(0x10cd6fd6u); f_10cda580();
  /* 10cd6fd6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6fd9 mov ecx, dword ptr [0x10cffda4] */
  ECX = (r32((uint32_t)(0x10cffda4)));
  /* 10cd6fdf sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd6fe2 mov dword ptr [0x10cffda4], ecx */
  w32((uint32_t)(0x10cffda4), (ECX));
  /* 10cd6fe8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd6feb cmp edx, dword ptr [0x10cffda0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10cffda0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd6ff1 jbe 0x10cd6ffc */
  if ((C.cf||C.zf)) goto L_10cd6ffc;
  /* 10cd6ff3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd6ff6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd6ff9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10cd6ffc:;
  /* 10cd6ffc mov ecx, dword ptr [0x10cffda8] */
  ECX = (r32((uint32_t)(0x10cffda8)));
  /* 10cd7002 mov dword ptr [0x10cffd9c], ecx */
  w32((uint32_t)(0x10cffd9c), (ECX));
L_10cd7008:;
  /* 10cd7008 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd700b mov dword ptr [0x10cffda0], edx */
  w32((uint32_t)(0x10cffda0), (EDX));
  /* 10cd7011 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd7014 mov dword ptr [0x10cffd98], eax */
  w32((uint32_t)(0x10cffd98), (EAX));
L_10cd7019:;
  /* 10cd7019 mov esp, ebp */
  ESP = (EBP);
  /* 10cd701b pop ebp */
  EBP = (pop32());
  /* 10cd701c ret  */
  ESPCHK(0x10cd6a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10007020 @ 0x10cd7020 (1334 bytes, 427 insns) */
void f_10cd7020(void) {
  FTRACE(0x10cd7020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd7020 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd7021 mov ebp, esp */
  EBP = (ESP);
  /* 10cd7023 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd7026 push esi */
  push32((uint32_t)(ESI));
  /* 10cd7027 mov eax, dword ptr [0x10cffda4] */
  EAX = (r32((uint32_t)(0x10cffda4)));
  /* 10cd702c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cd702f mov ecx, dword ptr [0x10cffda8] */
  ECX = (r32((uint32_t)(0x10cffda8)));
  /* 10cd7035 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7037 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10cd703a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd703d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7040 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10cd7043 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10cd7046 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10cd7049 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10cd704c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd704f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10cd7052 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd7056 jge 0x10cd706c */
  if ((C.sf==C.of)) goto L_10cd706c;
  /* 10cd7058 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10cd705b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cd705e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10cd7060 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10cd7063 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 10cd706a jmp 0x10cd7081 */
  goto L_10cd7081;
L_10cd706c:;
  /* 10cd706c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10cd7073 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cd7076 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd7079 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cd707c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10cd707e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_10cd7081:;
  /* 10cd7081 mov ecx, dword ptr [0x10cffd9c] */
  ECX = (r32((uint32_t)(0x10cffd9c)));
  /* 10cd7087 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10cd708a:;
  /* 10cd708a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd708d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd7090 jae 0x10cd70b6 */
  if (!C.cf) goto L_10cd70b6;
  /* 10cd7092 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd7095 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd7098 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 10cd709a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd709d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10cd70a0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 10cd70a3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd70a5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd70a7 je 0x10cd70ab */
  if (C.zf) goto L_10cd70ab;
  /* 10cd70a9 jmp 0x10cd70b6 */
  goto L_10cd70b6;
L_10cd70ab:;
  /* 10cd70ab mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd70ae add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd70b1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10cd70b4 jmp 0x10cd708a */
  goto L_10cd708a;
L_10cd70b6:;
  /* 10cd70b6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd70b9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd70bc jne 0x10cd719d */
  if (!C.zf) goto L_10cd719d;
  /* 10cd70c2 mov eax, dword ptr [0x10cffda8] */
  EAX = (r32((uint32_t)(0x10cffda8)));
  /* 10cd70c7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10cd70ca:;
  /* 10cd70ca mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd70cd cmp ecx, dword ptr [0x10cffd9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10cffd9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd70d3 jae 0x10cd70f9 */
  if (!C.cf) goto L_10cd70f9;
  /* 10cd70d5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd70d8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd70db and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 10cd70dd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd70e0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10cd70e3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10cd70e6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd70e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd70ea je 0x10cd70ee */
  if (C.zf) goto L_10cd70ee;
  /* 10cd70ec jmp 0x10cd70f9 */
  goto L_10cd70f9;
L_10cd70ee:;
  /* 10cd70ee mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd70f1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd70f4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10cd70f7 jmp 0x10cd70ca */
  goto L_10cd70ca;
L_10cd70f9:;
  /* 10cd70f9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd70fc cmp ecx, dword ptr [0x10cffd9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10cffd9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd7102 jne 0x10cd719d */
  if (!C.zf) goto L_10cd719d;
L_10cd7108:;
  /* 10cd7108 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd710b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd710e jae 0x10cd7126 */
  if (!C.cf) goto L_10cd7126;
  /* 10cd7110 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd7113 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd7117 je 0x10cd711b */
  if (C.zf) goto L_10cd711b;
  /* 10cd7119 jmp 0x10cd7126 */
  goto L_10cd7126;
L_10cd711b:;
  /* 10cd711b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd711e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7121 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10cd7124 jmp 0x10cd7108 */
  goto L_10cd7108;
L_10cd7126:;
  /* 10cd7126 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd7129 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd712c jne 0x10cd7177 */
  if (!C.zf) goto L_10cd7177;
  /* 10cd712e mov eax, dword ptr [0x10cffda8] */
  EAX = (r32((uint32_t)(0x10cffda8)));
  /* 10cd7133 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10cd7136:;
  /* 10cd7136 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd7139 cmp ecx, dword ptr [0x10cffd9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10cffd9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd713f jae 0x10cd7157 */
  if (!C.cf) goto L_10cd7157;
  /* 10cd7141 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd7144 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd7148 je 0x10cd714c */
  if (C.zf) goto L_10cd714c;
  /* 10cd714a jmp 0x10cd7157 */
  goto L_10cd7157;
L_10cd714c:;
  /* 10cd714c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd714f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7152 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10cd7155 jmp 0x10cd7136 */
  goto L_10cd7136;
L_10cd7157:;
  /* 10cd7157 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd715a cmp ecx, dword ptr [0x10cffd9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10cffd9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd7160 jne 0x10cd7177 */
  if (!C.zf) goto L_10cd7177;
  /* 10cd7162 call 0x10cd7560 */
  push32(0x10cd7167u); f_10cd7560();
  /* 10cd7167 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10cd716a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd716e jne 0x10cd7177 */
  if (!C.zf) goto L_10cd7177;
  /* 10cd7170 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd7172 jmp 0x10cd7551 */
  goto L_10cd7551;
L_10cd7177:;
  /* 10cd7177 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd717a push edx */
  push32((uint32_t)(EDX));
  /* 10cd717b call 0x10cd7670 */
  push32(0x10cd7180u); f_10cd7670();
  /* 10cd7180 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7183 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd7186 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10cd7189 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10cd718b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd718e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10cd7191 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd7194 jne 0x10cd719d */
  if (!C.zf) goto L_10cd719d;
  /* 10cd7196 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd7198 jmp 0x10cd7551 */
  goto L_10cd7551;
L_10cd719d:;
  /* 10cd719d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd71a0 mov dword ptr [0x10cffd9c], edx */
  w32((uint32_t)(0x10cffd9c), (EDX));
  /* 10cd71a6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd71a9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10cd71ac mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 10cd71af mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10cd71b2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10cd71b4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10cd71b7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd71bb je 0x10cd71e0 */
  if (C.zf) goto L_10cd71e0;
  /* 10cd71bd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd71c0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10cd71c3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd71c6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 10cd71ca mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd71cd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10cd71d0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10cd71d3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10cd71da or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10cd71dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd71de jne 0x10cd7215 */
  if (!C.zf) goto L_10cd7215;
L_10cd71e0:;
  /* 10cd71e0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_10cd71e7:;
  /* 10cd71e7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd71ea mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10cd71ed mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd71f0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10cd71f4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd71f7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10cd71fa mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10cd71fd and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10cd7204 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10cd7206 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd7208 jne 0x10cd7215 */
  if (!C.zf) goto L_10cd7215;
  /* 10cd720a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd720d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7210 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10cd7213 jmp 0x10cd71e7 */
  goto L_10cd71e7;
L_10cd7215:;
  /* 10cd7215 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd7218 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cd721e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10cd7221 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10cd7228 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10cd722b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10cd7232 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd7235 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10cd7238 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd723b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10cd723f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10cd7242 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd7246 jne 0x10cd7262 */
  if (!C.zf) goto L_10cd7262;
  /* 10cd7248 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 10cd724f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd7252 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10cd7255 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10cd7258 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 10cd725f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_10cd7262:;
  /* 10cd7262 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd7266 jl 0x10cd727b */
  if ((C.sf!=C.of)) goto L_10cd727b;
  /* 10cd7268 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10cd726b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10cd726d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10cd7270 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cd7273 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7276 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10cd7279 jmp 0x10cd7262 */
  goto L_10cd7262;
L_10cd727b:;
  /* 10cd727b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cd727e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd7281 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 10cd7285 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10cd7288 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd728b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10cd728d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd7290 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10cd7293 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd7296 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10cd7299 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd729c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10cd729f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd72a3 jle 0x10cd72ac */
  if ((C.zf||C.sf!=C.of)) goto L_10cd72ac;
  /* 10cd72a5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_10cd72ac:;
  /* 10cd72ac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd72af cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd72b2 je 0x10cd74d0 */
  if (C.zf) goto L_10cd74d0;
  /* 10cd72b8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd72bb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd72be mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10cd72c1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd72c4 jne 0x10cd739a */
  if (!C.zf) goto L_10cd739a;
  /* 10cd72ca cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd72ce jge 0x10cd732f */
  if ((C.sf==C.of)) goto L_10cd732f;
  /* 10cd72d0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10cd72d5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cd72d8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10cd72da not eax */
  EAX = (~(EAX));
  /* 10cd72dc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd72df mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10cd72e2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10cd72e6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd72e8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd72eb mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10cd72ee mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10cd72f2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10cd72f5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd72f8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10cd72fb sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10cd72fe mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10cd7301 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7304 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10cd7307 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10cd730a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd730d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10cd7311 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd7313 jne 0x10cd732d */
  if (!C.zf) goto L_10cd732d;
  /* 10cd7315 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10cd731a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cd731d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10cd731f not eax */
  EAX = (~(EAX));
  /* 10cd7321 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd7324 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10cd7326 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd7328 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd732b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10cd732d:;
  /* 10cd732d jmp 0x10cd739a */
  goto L_10cd739a;
L_10cd732f:;
  /* 10cd732f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cd7332 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd7335 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10cd733a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10cd733c not edx */
  EDX = (~(EDX));
  /* 10cd733e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd7341 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10cd7344 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10cd734b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd734d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd7350 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10cd7353 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10cd735a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10cd735d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7360 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10cd7363 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10cd7366 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10cd7369 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd736c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10cd736f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10cd7372 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7375 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10cd7379 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd737b jne 0x10cd739a */
  if (!C.zf) goto L_10cd739a;
  /* 10cd737d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cd7380 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd7383 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10cd7388 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10cd738a not edx */
  EDX = (~(EDX));
  /* 10cd738c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd738f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10cd7392 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd7394 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd7397 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10cd739a:;
  /* 10cd739a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd739d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10cd73a0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd73a3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10cd73a6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10cd73a9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd73ac mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10cd73af mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd73b2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10cd73b5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10cd73b8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd73bc je 0x10cd74d0 */
  if (C.zf) goto L_10cd74d0;
  /* 10cd73c2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd73c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd73c8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10cd73cb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cd73ce mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd73d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd73d4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10cd73d7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10cd73da mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd73dd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd73e0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10cd73e3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd73e6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd73e9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10cd73ec mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd73ef mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10cd73f2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd73f5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10cd73f8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd73fb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd73fe mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10cd7401 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd7404 jne 0x10cd74d0 */
  if (!C.zf) goto L_10cd74d0;
  /* 10cd740a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd740e jge 0x10cd746a */
  if ((C.sf==C.of)) goto L_10cd746a;
  /* 10cd7410 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10cd7413 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7416 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10cd741a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10cd741d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7420 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10cd7423 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10cd7425 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10cd7428 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd742b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10cd742e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd7430 jne 0x10cd7448 */
  if (!C.zf) goto L_10cd7448;
  /* 10cd7432 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10cd7437 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd743a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10cd743c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd743f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10cd7441 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd7443 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd7446 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10cd7448:;
  /* 10cd7448 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10cd744d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd7450 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10cd7452 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd7455 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10cd7458 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10cd745c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd745e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd7461 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10cd7464 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10cd7468 jmp 0x10cd74d0 */
  goto L_10cd74d0;
L_10cd746a:;
  /* 10cd746a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10cd746d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7470 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10cd7474 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10cd7477 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd747a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10cd747d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10cd747f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10cd7482 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7485 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10cd7488 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd748a jne 0x10cd74a7 */
  if (!C.zf) goto L_10cd74a7;
  /* 10cd748c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd748f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd7492 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10cd7497 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10cd7499 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd749c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10cd749f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd74a1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd74a4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10cd74a7:;
  /* 10cd74a7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd74aa sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd74ad mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10cd74b2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10cd74b4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd74b7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10cd74ba mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10cd74c1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd74c3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd74c6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10cd74c9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10cd74d0:;
  /* 10cd74d0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd74d4 je 0x10cd74ea */
  if (C.zf) goto L_10cd74ea;
  /* 10cd74d6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd74d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd74dc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10cd74de mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd74e1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd74e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd74e7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10cd74ea:;
  /* 10cd74ea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd74ed add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd74f0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10cd74f3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10cd74f6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd74f9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd74fc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10cd74fe mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10cd7501 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7504 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd7507 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd750a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10cd750d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd7510 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10cd7512 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd7515 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10cd7517 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd751a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd751d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10cd751f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd7521 jne 0x10cd7543 */
  if (!C.zf) goto L_10cd7543;
  /* 10cd7523 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd7526 cmp eax, dword ptr [0x10cffda0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cffda0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd752c jne 0x10cd7543 */
  if (!C.zf) goto L_10cd7543;
  /* 10cd752e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd7531 cmp ecx, dword ptr [0x10cffd98] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10cffd98))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd7537 jne 0x10cd7543 */
  if (!C.zf) goto L_10cd7543;
  /* 10cd7539 mov dword ptr [0x10cffda0], 0 */
  w32((uint32_t)(0x10cffda0), (0x0u));
L_10cd7543:;
  /* 10cd7543 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10cd7546 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd7549 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10cd754b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd754e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10cd7551:;
  /* 10cd7551 pop esi */
  ESI = (pop32());
  /* 10cd7552 mov esp, ebp */
  ESP = (EBP);
  /* 10cd7554 pop ebp */
  EBP = (pop32());
  /* 10cd7555 ret  */
  ESPCHK(0x10cd7020u, _esp0);
  ESP += 4; return;
}

/* FUN_10007560 @ 0x10cd7560 (271 bytes, 78 insns) */
void f_10cd7560(void) {
  FTRACE(0x10cd7560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd7560 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd7561 mov ebp, esp */
  EBP = (ESP);
  /* 10cd7563 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd7564 mov eax, dword ptr [0x10cffda4] */
  EAX = (r32((uint32_t)(0x10cffda4)));
  /* 10cd7569 cmp eax, dword ptr [0x10cffd88] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cffd88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd756f jne 0x10cd75bb */
  if (!C.zf) goto L_10cd75bb;
  /* 10cd7571 mov ecx, dword ptr [0x10cffd88] */
  ECX = (r32((uint32_t)(0x10cffd88)));
  /* 10cd7577 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd757a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cd757d push ecx */
  push32((uint32_t)(ECX));
  /* 10cd757e mov edx, dword ptr [0x10cffda8] */
  EDX = (r32((uint32_t)(0x10cffda8)));
  /* 10cd7584 push edx */
  push32((uint32_t)(EDX));
  /* 10cd7585 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd7587 mov eax, dword ptr [0x10cffdac] */
  EAX = (r32((uint32_t)(0x10cffdac)));
  /* 10cd758c push eax */
  push32((uint32_t)(EAX));
  /* 10cd758d call dword ptr [0x10d002d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002d4))), 0x10cd7593u);
  /* 10cd7593 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd7596 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd759a jne 0x10cd75a3 */
  if (!C.zf) goto L_10cd75a3;
  /* 10cd759c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd759e jmp 0x10cd766b */
  goto L_10cd766b;
L_10cd75a3:;
  /* 10cd75a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd75a6 mov dword ptr [0x10cffda8], ecx */
  w32((uint32_t)(0x10cffda8), (ECX));
  /* 10cd75ac mov edx, dword ptr [0x10cffd88] */
  EDX = (r32((uint32_t)(0x10cffd88)));
  /* 10cd75b2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd75b5 mov dword ptr [0x10cffd88], edx */
  w32((uint32_t)(0x10cffd88), (EDX));
L_10cd75bb:;
  /* 10cd75bb mov eax, dword ptr [0x10cffda4] */
  EAX = (r32((uint32_t)(0x10cffda4)));
  /* 10cd75c0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cd75c3 mov ecx, dword ptr [0x10cffda8] */
  ECX = (r32((uint32_t)(0x10cffda8)));
  /* 10cd75c9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd75cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10cd75ce push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10cd75d3 push 8 */
  push32((uint32_t)(0x8u));
  /* 10cd75d5 mov edx, dword ptr [0x10cffdac] */
  EDX = (r32((uint32_t)(0x10cffdac)));
  /* 10cd75db push edx */
  push32((uint32_t)(EDX));
  /* 10cd75dc call dword ptr [0x10d002d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002d0))), 0x10cd75e2u);
  /* 10cd75e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd75e5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 10cd75e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd75eb cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd75ef jne 0x10cd75f5 */
  if (!C.zf) goto L_10cd75f5;
  /* 10cd75f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd75f3 jmp 0x10cd766b */
  goto L_10cd766b;
L_10cd75f5:;
  /* 10cd75f5 push 4 */
  push32((uint32_t)(0x4u));
  /* 10cd75f7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10cd75fc push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10cd7601 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd7603 call dword ptr [0x10d002d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002d8))), 0x10cd7609u);
  /* 10cd7609 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd760c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10cd760f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd7612 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd7616 jne 0x10cd7632 */
  if (!C.zf) goto L_10cd7632;
  /* 10cd7618 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd761b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10cd761e push ecx */
  push32((uint32_t)(ECX));
  /* 10cd761f push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd7621 mov edx, dword ptr [0x10cffdac] */
  EDX = (r32((uint32_t)(0x10cffdac)));
  /* 10cd7627 push edx */
  push32((uint32_t)(EDX));
  /* 10cd7628 call dword ptr [0x10d002b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002b0))), 0x10cd762eu);
  /* 10cd762e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd7630 jmp 0x10cd766b */
  goto L_10cd766b;
L_10cd7632:;
  /* 10cd7632 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd7635 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10cd763b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd763e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10cd7645 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd7648 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 10cd764f mov eax, dword ptr [0x10cffda4] */
  EAX = (r32((uint32_t)(0x10cffda4)));
  /* 10cd7654 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7657 mov dword ptr [0x10cffda4], eax */
  w32((uint32_t)(0x10cffda4), (EAX));
  /* 10cd765c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd765f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10cd7662 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 10cd7668 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10cd766b:;
  /* 10cd766b mov esp, ebp */
  ESP = (EBP);
  /* 10cd766d pop ebp */
  EBP = (pop32());
  /* 10cd766e ret  */
  ESPCHK(0x10cd7560u, _esp0);
  ESP += 4; return;
}

/* FUN_10007670 @ 0x10cd7670 (494 bytes, 149 insns) */
void f_10cd7670(void) {
  FTRACE(0x10cd7670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd7670 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd7671 mov ebp, esp */
  EBP = (ESP);
  /* 10cd7673 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd7676 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd7679 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10cd767c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10cd767f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd7682 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10cd7685 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10cd7688 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_10cd768f:;
  /* 10cd768f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd7693 jl 0x10cd76a8 */
  if ((C.sf!=C.of)) goto L_10cd76a8;
  /* 10cd7695 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd7698 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10cd769a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10cd769d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10cd76a0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd76a3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10cd76a6 jmp 0x10cd768f */
  goto L_10cd768f;
L_10cd76a8:;
  /* 10cd76a8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10cd76ab imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cd76b1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10cd76b4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10cd76bb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10cd76be mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10cd76c5 jmp 0x10cd76d0 */
  goto L_10cd76d0;
L_10cd76c7:;
  /* 10cd76c7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cd76ca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd76cd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10cd76d0:;
  /* 10cd76d0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd76d4 jge 0x10cd76f6 */
  if ((C.sf==C.of)) goto L_10cd76f6;
  /* 10cd76d6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cd76d9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd76dc lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 10cd76df mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10cd76e2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd76e5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd76e8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10cd76eb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd76ee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd76f1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10cd76f4 jmp 0x10cd76c7 */
  goto L_10cd76c7;
L_10cd76f6:;
  /* 10cd76f6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10cd76f9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10cd76fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd76ff mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10cd7702 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7704 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10cd7707 push 4 */
  push32((uint32_t)(0x4u));
  /* 10cd7709 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10cd770e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10cd7713 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd7716 push edx */
  push32((uint32_t)(EDX));
  /* 10cd7717 call dword ptr [0x10d002d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002d8))), 0x10cd771du);
  /* 10cd771d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd771f jne 0x10cd7729 */
  if (!C.zf) goto L_10cd7729;
  /* 10cd7721 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cd7724 jmp 0x10cd785a */
  goto L_10cd785a;
L_10cd7729:;
  /* 10cd7729 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd772c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7731 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10cd7734 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd7737 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10cd773a jmp 0x10cd7748 */
  goto L_10cd7748;
L_10cd773c:;
  /* 10cd773c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd773f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7745 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10cd7748:;
  /* 10cd7748 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd774b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd774e ja 0x10cd77ad */
  if ((!C.cf&&!C.zf)) goto L_10cd77ad;
  /* 10cd7750 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd7753 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 10cd775a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd775d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 10cd7767 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd776a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd776d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10cd7770 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd7773 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10cd7779 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd777c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7782 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd7785 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10cd7788 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd778b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd7791 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd7794 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10cd7797 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd779a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd779f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10cd77a2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd77a5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10cd77ab jmp 0x10cd773c */
  goto L_10cd773c;
L_10cd77ad:;
  /* 10cd77ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd77b0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd77b6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10cd77b9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd77bc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd77bf mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd77c2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10cd77c5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd77c8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10cd77cb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10cd77ce mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd77d1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd77d4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10cd77d7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10cd77da add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd77dd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd77e0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10cd77e3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd77e6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10cd77e9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10cd77ec mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd77ef mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd77f2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10cd77f5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10cd77f8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10cd77fb mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 10cd7803 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10cd7806 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10cd7809 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 10cd7814 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10cd7817 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 10cd781b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10cd781e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 10cd7821 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10cd7824 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10cd7827 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 10cd782a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd782c jne 0x10cd783d */
  if (!C.zf) goto L_10cd783d;
  /* 10cd782e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd7831 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10cd7834 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10cd7837 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd783a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10cd783d:;
  /* 10cd783d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10cd7842 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10cd7845 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10cd7847 not edx */
  EDX = (~(EDX));
  /* 10cd7849 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd784c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10cd784f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd7851 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd7854 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10cd7857 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_10cd785a:;
  /* 10cd785a mov esp, ebp */
  ESP = (EBP);
  /* 10cd785c pop ebp */
  EBP = (pop32());
  /* 10cd785d ret  */
  ESPCHK(0x10cd7670u, _esp0);
  ESP += 4; return;
}

/* FUN_10007860 @ 0x10cd7860 (1515 bytes, 489 insns) */
void f_10cd7860(void) {
  FTRACE(0x10cd7860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd7860 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd7861 mov ebp, esp */
  EBP = (ESP);
  /* 10cd7863 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd7866 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd7869 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd786c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10cd786e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10cd7871 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd7874 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10cd7877 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10cd787a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd787d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd7880 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd7883 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cd7886 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd7889 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10cd788c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10cd788f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd7892 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cd7898 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd789b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10cd78a2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10cd78a5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd78a8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd78ab mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10cd78ae mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd78b1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10cd78b3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd78b6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10cd78b9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd78bc add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd78bf mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10cd78c2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10cd78c5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10cd78c7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10cd78ca mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10cd78cd cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd78d0 jle 0x10cd7b86 */
  if ((C.zf||C.sf!=C.of)) goto L_10cd7b86;
  /* 10cd78d6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd78d9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10cd78dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd78de jne 0x10cd78eb */
  if (!C.zf) goto L_10cd78eb;
  /* 10cd78e0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10cd78e3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd78e6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd78e9 jle 0x10cd78f2 */
  if ((C.zf||C.sf!=C.of)) goto L_10cd78f2;
L_10cd78eb:;
  /* 10cd78eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd78ed jmp 0x10cd7e47 */
  goto L_10cd7e47;
L_10cd78f2:;
  /* 10cd78f2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd78f5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10cd78f8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd78fb mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10cd78fe cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd7902 jbe 0x10cd790b */
  if ((C.cf||C.zf)) goto L_10cd790b;
  /* 10cd7904 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10cd790b:;
  /* 10cd790b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10cd790e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10cd7911 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10cd7914 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd7917 jne 0x10cd79ed */
  if (!C.zf) goto L_10cd79ed;
  /* 10cd791d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd7921 jae 0x10cd7982 */
  if (!C.cf) goto L_10cd7982;
  /* 10cd7923 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10cd7928 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cd792b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10cd792d not edx */
  EDX = (~(EDX));
  /* 10cd792f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd7932 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd7935 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10cd7939 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd793b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd793e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd7941 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10cd7945 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd7948 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd794b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10cd794e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10cd7951 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd7954 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7957 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10cd795a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd795d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7960 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10cd7964 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd7966 jne 0x10cd7980 */
  if (!C.zf) goto L_10cd7980;
  /* 10cd7968 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10cd796d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cd7970 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10cd7972 not edx */
  EDX = (~(EDX));
  /* 10cd7974 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd7977 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10cd7979 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd797b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd797e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10cd7980:;
  /* 10cd7980 jmp 0x10cd79ed */
  goto L_10cd79ed;
L_10cd7982:;
  /* 10cd7982 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cd7985 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd7988 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10cd798d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10cd798f not eax */
  EAX = (~(EAX));
  /* 10cd7991 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd7994 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd7997 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10cd799e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd79a0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd79a3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd79a6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10cd79ad mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd79b0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd79b3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10cd79b6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10cd79b9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd79bc add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd79bf mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10cd79c2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd79c5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd79c8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10cd79cc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd79ce jne 0x10cd79ed */
  if (!C.zf) goto L_10cd79ed;
  /* 10cd79d0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cd79d3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd79d6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10cd79db shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10cd79dd not eax */
  EAX = (~(EAX));
  /* 10cd79df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd79e2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10cd79e5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd79e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd79ea mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10cd79ed:;
  /* 10cd79ed mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10cd79f0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10cd79f3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10cd79f6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10cd79f9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10cd79fc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10cd79ff mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10cd7a02 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10cd7a05 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10cd7a08 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10cd7a0b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10cd7a0e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7a11 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd7a14 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10cd7a17 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd7a1b jle 0x10cd7b67 */
  if ((C.zf||C.sf!=C.of)) goto L_10cd7b67;
  /* 10cd7a21 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd7a24 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7a27 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10cd7a2a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd7a2d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10cd7a30 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd7a33 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10cd7a36 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd7a3a jbe 0x10cd7a43 */
  if ((C.cf||C.zf)) goto L_10cd7a43;
  /* 10cd7a3c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10cd7a43:;
  /* 10cd7a43 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cd7a46 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd7a49 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10cd7a4c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10cd7a4f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10cd7a52 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd7a55 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10cd7a58 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10cd7a5b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10cd7a5e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd7a61 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10cd7a64 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd7a67 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10cd7a6a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10cd7a6d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10cd7a70 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10cd7a73 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10cd7a76 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10cd7a79 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10cd7a7c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10cd7a7f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10cd7a82 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd7a85 jne 0x10cd7b53 */
  if (!C.zf) goto L_10cd7b53;
  /* 10cd7a8b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd7a8f jae 0x10cd7aec */
  if (!C.cf) goto L_10cd7aec;
  /* 10cd7a91 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd7a94 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7a97 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10cd7a9b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd7a9e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7aa1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10cd7aa4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10cd7aa7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd7aaa add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7aad mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10cd7ab0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd7ab2 jne 0x10cd7aca */
  if (!C.zf) goto L_10cd7aca;
  /* 10cd7ab4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10cd7ab9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cd7abc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10cd7abe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd7ac1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10cd7ac3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd7ac5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd7ac8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10cd7aca:;
  /* 10cd7aca mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10cd7acf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cd7ad2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10cd7ad4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd7ad7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd7ada mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10cd7ade or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd7ae0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd7ae3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd7ae6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10cd7aea jmp 0x10cd7b53 */
  goto L_10cd7b53;
L_10cd7aec:;
  /* 10cd7aec mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd7aef add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7af2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10cd7af6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd7af9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7afc mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10cd7aff add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10cd7b02 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd7b05 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7b08 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10cd7b0b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd7b0d jne 0x10cd7b2a */
  if (!C.zf) goto L_10cd7b2a;
  /* 10cd7b0f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cd7b12 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd7b15 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10cd7b1a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10cd7b1c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd7b1f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10cd7b22 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd7b24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd7b27 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10cd7b2a:;
  /* 10cd7b2a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cd7b2d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd7b30 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10cd7b35 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10cd7b37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd7b3a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd7b3d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10cd7b44 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd7b46 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd7b49 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd7b4c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10cd7b53:;
  /* 10cd7b53 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10cd7b56 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd7b59 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10cd7b5b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10cd7b5e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7b61 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd7b64 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_10cd7b67:;
  /* 10cd7b67 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10cd7b6a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7b6d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd7b70 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10cd7b72 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10cd7b75 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7b78 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd7b7b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7b7e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10cd7b81 jmp 0x10cd7e42 */
  goto L_10cd7e42;
L_10cd7b86:;
  /* 10cd7b86 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10cd7b89 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd7b8c jge 0x10cd7e42 */
  if ((C.sf==C.of)) goto L_10cd7e42;
  /* 10cd7b92 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10cd7b95 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7b98 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd7b9b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10cd7b9d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10cd7ba0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7ba3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd7ba6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7ba9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 10cd7bac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd7baf add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7bb2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10cd7bb5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10cd7bb8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd7bbb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10cd7bbe mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10cd7bc1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10cd7bc4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd7bc7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10cd7bca cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd7bce jbe 0x10cd7bd7 */
  if ((C.cf||C.zf)) goto L_10cd7bd7;
  /* 10cd7bd0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10cd7bd7:;
  /* 10cd7bd7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd7bda and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10cd7bdd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd7bdf jne 0x10cd7d20 */
  if (!C.zf) goto L_10cd7d20;
  /* 10cd7be5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd7be8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10cd7beb sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd7bee mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10cd7bf1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd7bf5 jbe 0x10cd7bfe */
  if ((C.cf||C.zf)) goto L_10cd7bfe;
  /* 10cd7bf7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10cd7bfe:;
  /* 10cd7bfe mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10cd7c01 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10cd7c04 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10cd7c07 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd7c0a jne 0x10cd7ce0 */
  if (!C.zf) goto L_10cd7ce0;
  /* 10cd7c10 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd7c14 jae 0x10cd7c75 */
  if (!C.cf) goto L_10cd7c75;
  /* 10cd7c16 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10cd7c1b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cd7c1e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10cd7c20 not edx */
  EDX = (~(EDX));
  /* 10cd7c22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd7c25 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd7c28 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10cd7c2c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd7c2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd7c31 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd7c34 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10cd7c38 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd7c3b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7c3e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10cd7c41 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10cd7c44 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd7c47 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7c4a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10cd7c4d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd7c50 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7c53 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10cd7c57 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd7c59 jne 0x10cd7c73 */
  if (!C.zf) goto L_10cd7c73;
  /* 10cd7c5b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10cd7c60 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cd7c63 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10cd7c65 not edx */
  EDX = (~(EDX));
  /* 10cd7c67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd7c6a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10cd7c6c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd7c6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd7c71 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10cd7c73:;
  /* 10cd7c73 jmp 0x10cd7ce0 */
  goto L_10cd7ce0;
L_10cd7c75:;
  /* 10cd7c75 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cd7c78 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd7c7b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10cd7c80 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10cd7c82 not eax */
  EAX = (~(EAX));
  /* 10cd7c84 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd7c87 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd7c8a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10cd7c91 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd7c93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd7c96 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd7c99 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10cd7ca0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd7ca3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7ca6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10cd7ca9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10cd7cac mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd7caf add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7cb2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10cd7cb5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd7cb8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7cbb movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10cd7cbf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd7cc1 jne 0x10cd7ce0 */
  if (!C.zf) goto L_10cd7ce0;
  /* 10cd7cc3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cd7cc6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd7cc9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10cd7cce shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10cd7cd0 not eax */
  EAX = (~(EAX));
  /* 10cd7cd2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd7cd5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10cd7cd8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd7cda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd7cdd mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10cd7ce0:;
  /* 10cd7ce0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10cd7ce3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10cd7ce6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10cd7ce9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10cd7cec mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10cd7cef mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10cd7cf2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10cd7cf5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10cd7cf8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10cd7cfb mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10cd7cfe mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10cd7d01 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7d04 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10cd7d07 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10cd7d0a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10cd7d0d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd7d10 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10cd7d13 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd7d17 jbe 0x10cd7d20 */
  if ((C.cf||C.zf)) goto L_10cd7d20;
  /* 10cd7d19 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10cd7d20:;
  /* 10cd7d20 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd7d23 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd7d26 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10cd7d29 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10cd7d2c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd7d2f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd7d32 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10cd7d35 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10cd7d38 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd7d3b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd7d3e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10cd7d41 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd7d44 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd7d47 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10cd7d4a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd7d4d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10cd7d50 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd7d53 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10cd7d56 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd7d59 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd7d5c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10cd7d5f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd7d62 jne 0x10cd7e2e */
  if (!C.zf) goto L_10cd7e2e;
  /* 10cd7d68 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd7d6c jae 0x10cd7dc8 */
  if (!C.cf) goto L_10cd7dc8;
  /* 10cd7d6e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd7d71 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7d74 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10cd7d78 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd7d7b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7d7e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10cd7d81 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10cd7d83 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd7d86 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7d89 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10cd7d8c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd7d8e jne 0x10cd7da6 */
  if (!C.zf) goto L_10cd7da6;
  /* 10cd7d90 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10cd7d95 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd7d98 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10cd7d9a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd7d9d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10cd7d9f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd7da1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd7da4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10cd7da6:;
  /* 10cd7da6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10cd7dab mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd7dae shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10cd7db0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd7db3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd7db6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10cd7dba or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd7dbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd7dbf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd7dc2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10cd7dc6 jmp 0x10cd7e2e */
  goto L_10cd7e2e;
L_10cd7dc8:;
  /* 10cd7dc8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd7dcb add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7dce movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10cd7dd2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd7dd5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7dd8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10cd7ddb add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10cd7ddd mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd7de0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7de3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10cd7de6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd7de8 jne 0x10cd7e05 */
  if (!C.zf) goto L_10cd7e05;
  /* 10cd7dea mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd7ded sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd7df0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10cd7df5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10cd7df7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd7dfa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10cd7dfd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd7dff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd7e02 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10cd7e05:;
  /* 10cd7e05 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd7e08 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd7e0b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10cd7e10 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10cd7e12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd7e15 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd7e18 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10cd7e1f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd7e21 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd7e24 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cd7e27 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10cd7e2e:;
  /* 10cd7e2e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd7e31 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10cd7e34 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10cd7e36 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd7e39 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7e3c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10cd7e3f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10cd7e42:;
  /* 10cd7e42 mov eax, 1 */
  EAX = (0x1u);
L_10cd7e47:;
  /* 10cd7e47 mov esp, ebp */
  ESP = (EBP);
  /* 10cd7e49 pop ebp */
  EBP = (pop32());
  /* 10cd7e4a ret  */
  ESPCHK(0x10cd7860u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e50 @ 0x10cd7e50 (304 bytes, 79 insns) */
void f_10cd7e50(void) {
  FTRACE(0x10cd7e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd7e50 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd7e51 mov ebp, esp */
  EBP = (ESP);
  /* 10cd7e53 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd7e54 cmp dword ptr [0x10cffda0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cffda0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd7e5b je 0x10cd7f7c */
  if (C.zf) goto L_10cd7f7c;
  /* 10cd7e61 mov eax, dword ptr [0x10cffd98] */
  EAX = (r32((uint32_t)(0x10cffd98)));
  /* 10cd7e66 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10cd7e69 mov ecx, dword ptr [0x10cffda0] */
  ECX = (r32((uint32_t)(0x10cffda0)));
  /* 10cd7e6f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10cd7e72 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7e74 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10cd7e77 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10cd7e7c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10cd7e81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd7e84 push eax */
  push32((uint32_t)(EAX));
  /* 10cd7e85 call dword ptr [0x10d002b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002b4))), 0x10cd7e8bu);
  /* 10cd7e8b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10cd7e90 mov ecx, dword ptr [0x10cffd98] */
  ECX = (r32((uint32_t)(0x10cffd98)));
  /* 10cd7e96 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10cd7e98 mov eax, dword ptr [0x10cffda0] */
  EAX = (r32((uint32_t)(0x10cffda0)));
  /* 10cd7e9d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10cd7ea0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd7ea2 mov edx, dword ptr [0x10cffda0] */
  EDX = (r32((uint32_t)(0x10cffda0)));
  /* 10cd7ea8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10cd7eab mov eax, dword ptr [0x10cffda0] */
  EAX = (r32((uint32_t)(0x10cffda0)));
  /* 10cd7eb0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10cd7eb3 mov edx, dword ptr [0x10cffd98] */
  EDX = (r32((uint32_t)(0x10cffd98)));
  /* 10cd7eb9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10cd7ec4 mov eax, dword ptr [0x10cffda0] */
  EAX = (r32((uint32_t)(0x10cffda0)));
  /* 10cd7ec9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10cd7ecc mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10cd7ecf sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10cd7ed2 mov eax, dword ptr [0x10cffda0] */
  EAX = (r32((uint32_t)(0x10cffda0)));
  /* 10cd7ed7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10cd7eda mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10cd7edd mov edx, dword ptr [0x10cffda0] */
  EDX = (r32((uint32_t)(0x10cffda0)));
  /* 10cd7ee3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10cd7ee6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10cd7eea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd7eec jne 0x10cd7f02 */
  if (!C.zf) goto L_10cd7f02;
  /* 10cd7eee mov edx, dword ptr [0x10cffda0] */
  EDX = (r32((uint32_t)(0x10cffda0)));
  /* 10cd7ef4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10cd7ef7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10cd7ef9 mov ecx, dword ptr [0x10cffda0] */
  ECX = (r32((uint32_t)(0x10cffda0)));
  /* 10cd7eff mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10cd7f02:;
  /* 10cd7f02 mov edx, dword ptr [0x10cffda0] */
  EDX = (r32((uint32_t)(0x10cffda0)));
  /* 10cd7f08 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd7f0c jne 0x10cd7f72 */
  if (!C.zf) goto L_10cd7f72;
  /* 10cd7f0e cmp dword ptr [0x10cffda4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cffda4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd7f15 jle 0x10cd7f72 */
  if ((C.zf||C.sf!=C.of)) goto L_10cd7f72;
  /* 10cd7f17 mov eax, dword ptr [0x10cffda0] */
  EAX = (r32((uint32_t)(0x10cffda0)));
  /* 10cd7f1c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10cd7f1f push ecx */
  push32((uint32_t)(ECX));
  /* 10cd7f20 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd7f22 mov edx, dword ptr [0x10cffdac] */
  EDX = (r32((uint32_t)(0x10cffdac)));
  /* 10cd7f28 push edx */
  push32((uint32_t)(EDX));
  /* 10cd7f29 call dword ptr [0x10d002b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002b0))), 0x10cd7f2fu);
  /* 10cd7f2f mov eax, dword ptr [0x10cffda4] */
  EAX = (r32((uint32_t)(0x10cffda4)));
  /* 10cd7f34 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cd7f37 mov ecx, dword ptr [0x10cffda8] */
  ECX = (r32((uint32_t)(0x10cffda8)));
  /* 10cd7f3d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7f3f mov edx, dword ptr [0x10cffda0] */
  EDX = (r32((uint32_t)(0x10cffda0)));
  /* 10cd7f45 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7f48 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd7f4a push ecx */
  push32((uint32_t)(ECX));
  /* 10cd7f4b mov eax, dword ptr [0x10cffda0] */
  EAX = (r32((uint32_t)(0x10cffda0)));
  /* 10cd7f50 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7f53 push eax */
  push32((uint32_t)(EAX));
  /* 10cd7f54 mov ecx, dword ptr [0x10cffda0] */
  ECX = (r32((uint32_t)(0x10cffda0)));
  /* 10cd7f5a push ecx */
  push32((uint32_t)(ECX));
  /* 10cd7f5b call 0x10cda580 */
  push32(0x10cd7f60u); f_10cda580();
  /* 10cd7f60 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7f63 mov edx, dword ptr [0x10cffda4] */
  EDX = (r32((uint32_t)(0x10cffda4)));
  /* 10cd7f69 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd7f6c mov dword ptr [0x10cffda4], edx */
  w32((uint32_t)(0x10cffda4), (EDX));
L_10cd7f72:;
  /* 10cd7f72 mov dword ptr [0x10cffda0], 0 */
  w32((uint32_t)(0x10cffda0), (0x0u));
L_10cd7f7c:;
  /* 10cd7f7c mov esp, ebp */
  ESP = (EBP);
  /* 10cd7f7e pop ebp */
  EBP = (pop32());
  /* 10cd7f7f ret  */
  ESPCHK(0x10cd7e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f80 @ 0x10cd7f80 (1565 bytes, 343 insns) */
void f_10cd7f80(void) {
  FTRACE(0x10cd7f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd7f80 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd7f81 mov ebp, esp */
  EBP = (ESP);
  /* 10cd7f83 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd7f89 mov eax, dword ptr [0x10cffda4] */
  EAX = (r32((uint32_t)(0x10cffda4)));
  /* 10cd7f8e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cd7f91 push eax */
  push32((uint32_t)(EAX));
  /* 10cd7f92 mov ecx, dword ptr [0x10cffda8] */
  ECX = (r32((uint32_t)(0x10cffda8)));
  /* 10cd7f98 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd7f99 call dword ptr [0x10d00288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00288))), 0x10cd7f9fu);
  /* 10cd7f9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd7fa1 je 0x10cd7fab */
  if (C.zf) goto L_10cd7fab;
  /* 10cd7fa3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cd7fa6 jmp 0x10cd8599 */
  goto L_10cd8599;
L_10cd7fab:;
  /* 10cd7fab mov edx, dword ptr [0x10cffda8] */
  EDX = (r32((uint32_t)(0x10cffda8)));
  /* 10cd7fb1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 10cd7fb7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 10cd7fc1 jmp 0x10cd7fd2 */
  goto L_10cd7fd2;
L_10cd7fc3:;
  /* 10cd7fc3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 10cd7fc9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd7fcc mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_10cd7fd2:;
  /* 10cd7fd2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 10cd7fd8 cmp ecx, dword ptr [0x10cffda4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10cffda4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd7fde jge 0x10cd8597 */
  if ((C.sf==C.of)) goto L_10cd8597;
  /* 10cd7fe4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10cd7fea mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10cd7fed mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 10cd7ff3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10cd7ff8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10cd7ffe push ecx */
  push32((uint32_t)(ECX));
  /* 10cd7fff call dword ptr [0x10d00288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00288))), 0x10cd8005u);
  /* 10cd8005 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd8007 je 0x10cd8013 */
  if (C.zf) goto L_10cd8013;
  /* 10cd8009 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10cd800e jmp 0x10cd8599 */
  goto L_10cd8599;
L_10cd8013:;
  /* 10cd8013 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10cd8019 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10cd801c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 10cd8022 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10cd8028 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd802e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10cd8031 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10cd8037 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10cd803a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd803d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 10cd8047 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 10cd8051 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10cd8058 jmp 0x10cd8063 */
  goto L_10cd8063;
L_10cd805a:;
  /* 10cd805a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd805d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd8060 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10cd8063:;
  /* 10cd8063 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd8067 jge 0x10cd855b */
  if ((C.sf==C.of)) goto L_10cd855b;
  /* 10cd806d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 10cd8077 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 10cd8081 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 10cd808b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 10cd8095 jmp 0x10cd80a6 */
  goto L_10cd80a6;
L_10cd8097:;
  /* 10cd8097 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10cd809d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd80a0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_10cd80a6:;
  /* 10cd80a6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd80ad jge 0x10cd80c2 */
  if ((C.sf==C.of)) goto L_10cd80c2;
  /* 10cd80af mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10cd80b5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 10cd80c0 jmp 0x10cd8097 */
  goto L_10cd8097;
L_10cd80c2:;
  /* 10cd80c2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd80c6 jl 0x10cd84fd */
  if ((C.sf!=C.of)) goto L_10cd84fd;
  /* 10cd80cc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10cd80d1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 10cd80d7 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd80d8 call dword ptr [0x10d00288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00288))), 0x10cd80deu);
  /* 10cd80de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd80e0 je 0x10cd80ec */
  if (C.zf) goto L_10cd80ec;
  /* 10cd80e2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 10cd80e7 jmp 0x10cd8599 */
  goto L_10cd8599;
L_10cd80ec:;
  /* 10cd80ec mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10cd80f2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10cd80f5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 10cd80ff jmp 0x10cd8110 */
  goto L_10cd8110;
L_10cd8101:;
  /* 10cd8101 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 10cd8107 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd810a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_10cd8110:;
  /* 10cd8110 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd8117 jge 0x10cd8294 */
  if ((C.sf==C.of)) goto L_10cd8294;
  /* 10cd811d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd8120 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd8123 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 10cd8129 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10cd812f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd8135 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 10cd813b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10cd8141 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd8145 jne 0x10cd8152 */
  if (!C.zf) goto L_10cd8152;
  /* 10cd8147 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 10cd814d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd8150 je 0x10cd815c */
  if (C.zf) goto L_10cd815c;
L_10cd8152:;
  /* 10cd8152 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 10cd8157 jmp 0x10cd8599 */
  goto L_10cd8599;
L_10cd815c:;
  /* 10cd815c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10cd8162 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10cd8164 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10cd816a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 10cd8170 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 10cd8176 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 10cd817c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10cd817f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd8181 je 0x10cd81b9 */
  if (C.zf) goto L_10cd81b9;
  /* 10cd8183 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10cd8189 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd818c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10cd8192 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd819c jle 0x10cd81a8 */
  if ((C.zf||C.sf!=C.of)) goto L_10cd81a8;
  /* 10cd819e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 10cd81a3 jmp 0x10cd8599 */
  goto L_10cd8599;
L_10cd81a8:;
  /* 10cd81a8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 10cd81ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd81b1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 10cd81b7 jmp 0x10cd81fb */
  goto L_10cd81fb;
L_10cd81b9:;
  /* 10cd81b9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 10cd81bf sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10cd81c2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd81c5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10cd81cb cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd81d2 jle 0x10cd81de */
  if ((C.zf||C.sf!=C.of)) goto L_10cd81de;
  /* 10cd81d4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10cd81de:;
  /* 10cd81de mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10cd81e4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 10cd81eb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd81ee mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10cd81f4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_10cd81fb:;
  /* 10cd81fb cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd8202 jl 0x10cd821d */
  if ((C.sf!=C.of)) goto L_10cd821d;
  /* 10cd8204 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10cd820a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10cd820d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd820f jne 0x10cd821d */
  if (!C.zf) goto L_10cd821d;
  /* 10cd8211 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd821b jle 0x10cd8227 */
  if ((C.zf||C.sf!=C.of)) goto L_10cd8227;
L_10cd821d:;
  /* 10cd821d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 10cd8222 jmp 0x10cd8599 */
  goto L_10cd8599;
L_10cd8227:;
  /* 10cd8227 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10cd822d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd8233 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10cd8236 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd823c je 0x10cd8248 */
  if (C.zf) goto L_10cd8248;
  /* 10cd823e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10cd8243 jmp 0x10cd8599 */
  goto L_10cd8599;
L_10cd8248:;
  /* 10cd8248 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10cd824e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd8254 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10cd825a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10cd8260 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd8266 jb 0x10cd815c */
  if (C.cf) goto L_10cd815c;
  /* 10cd826c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10cd8272 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd8278 je 0x10cd8284 */
  if (C.zf) goto L_10cd8284;
  /* 10cd827a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10cd827f jmp 0x10cd8599 */
  goto L_10cd8599;
L_10cd8284:;
  /* 10cd8284 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd8287 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd828c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10cd828f jmp 0x10cd8101 */
  goto L_10cd8101;
L_10cd8294:;
  /* 10cd8294 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd8297 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10cd8299 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd829f je 0x10cd82ab */
  if (C.zf) goto L_10cd82ab;
  /* 10cd82a1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 10cd82a6 jmp 0x10cd8599 */
  goto L_10cd8599;
L_10cd82ab:;
  /* 10cd82ab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd82ae mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 10cd82b4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10cd82bb jmp 0x10cd82c6 */
  goto L_10cd82c6;
L_10cd82bd:;
  /* 10cd82bd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd82c0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd82c3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10cd82c6:;
  /* 10cd82c6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd82ca jge 0x10cd84fd */
  if ((C.sf==C.of)) goto L_10cd84fd;
  /* 10cd82d0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 10cd82da mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10cd82e0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_10cd82e6:;
  /* 10cd82e6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10cd82ec mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10cd82ef mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 10cd82f5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10cd82fb cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd8301 je 0x10cd842a */
  if (C.zf) goto L_10cd842a;
  /* 10cd8307 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd830a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10cd8310 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd8317 je 0x10cd842a */
  if (C.zf) goto L_10cd842a;
  /* 10cd831d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10cd8323 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd8329 jb 0x10cd833e */
  if (C.cf) goto L_10cd833e;
  /* 10cd832b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 10cd8331 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd8336 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd833c jb 0x10cd8348 */
  if (C.cf) goto L_10cd8348;
L_10cd833e:;
  /* 10cd833e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 10cd8343 jmp 0x10cd8599 */
  goto L_10cd8599;
L_10cd8348:;
  /* 10cd8348 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10cd834e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 10cd8354 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 10cd835a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 10cd8360 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd8363 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10cd8366 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd8369 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd836e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_10cd8374:;
  /* 10cd8374 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd8377 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd837d je 0x10cd839e */
  if (C.zf) goto L_10cd839e;
  /* 10cd837f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd8382 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd8388 jne 0x10cd838c */
  if (!C.zf) goto L_10cd838c;
  /* 10cd838a jmp 0x10cd839e */
  goto L_10cd839e;
L_10cd838c:;
  /* 10cd838c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd838f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10cd8391 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 10cd8394 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd8397 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd8399 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10cd839c jmp 0x10cd8374 */
  goto L_10cd8374;
L_10cd839e:;
  /* 10cd839e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd83a1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd83a7 jne 0x10cd83b3 */
  if (!C.zf) goto L_10cd83b3;
  /* 10cd83a9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 10cd83ae jmp 0x10cd8599 */
  goto L_10cd8599;
L_10cd83b3:;
  /* 10cd83b3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10cd83b9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10cd83bb sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10cd83be sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd83c1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10cd83c7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd83ce jle 0x10cd83da */
  if ((C.zf||C.sf!=C.of)) goto L_10cd83da;
  /* 10cd83d0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10cd83da:;
  /* 10cd83da mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10cd83e0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd83e3 je 0x10cd83ef */
  if (C.zf) goto L_10cd83ef;
  /* 10cd83e5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 10cd83ea jmp 0x10cd8599 */
  goto L_10cd8599;
L_10cd83ef:;
  /* 10cd83ef mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10cd83f5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10cd83f8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd83fe je 0x10cd840a */
  if (C.zf) goto L_10cd840a;
  /* 10cd8400 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 10cd8405 jmp 0x10cd8599 */
  goto L_10cd8599;
L_10cd840a:;
  /* 10cd840a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10cd8410 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10cd8416 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10cd841c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd841f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 10cd8425 jmp 0x10cd82e6 */
  goto L_10cd82e6;
L_10cd842a:;
  /* 10cd842a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd8431 je 0x10cd84a1 */
  if (C.zf) goto L_10cd84a1;
  /* 10cd8433 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd8437 jge 0x10cd846b */
  if ((C.sf==C.of)) goto L_10cd846b;
  /* 10cd8439 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10cd843e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd8441 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10cd8443 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10cd8449 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd844b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 10cd8451 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10cd8456 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd8459 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10cd845b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10cd8461 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd8463 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 10cd8469 jmp 0x10cd84a1 */
  goto L_10cd84a1;
L_10cd846b:;
  /* 10cd846b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd846e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd8471 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10cd8476 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10cd8478 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 10cd847e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd8480 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 10cd8486 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd8489 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd848c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10cd8491 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10cd8493 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 10cd8499 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd849b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_10cd84a1:;
  /* 10cd84a1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10cd84a7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10cd84aa cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd84b0 jne 0x10cd84c4 */
  if (!C.zf) goto L_10cd84c4;
  /* 10cd84b2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd84b5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10cd84bb cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd84c2 je 0x10cd84ce */
  if (C.zf) goto L_10cd84ce;
L_10cd84c4:;
  /* 10cd84c4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 10cd84c9 jmp 0x10cd8599 */
  goto L_10cd8599;
L_10cd84ce:;
  /* 10cd84ce mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10cd84d4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10cd84d7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd84dd je 0x10cd84e9 */
  if (C.zf) goto L_10cd84e9;
  /* 10cd84df mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 10cd84e4 jmp 0x10cd8599 */
  goto L_10cd8599;
L_10cd84e9:;
  /* 10cd84e9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 10cd84ef add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd84f2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 10cd84f8 jmp 0x10cd82bd */
  goto L_10cd82bd;
L_10cd84fd:;
  /* 10cd84fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd8500 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10cd8506 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10cd850c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd8510 jne 0x10cd852a */
  if (!C.zf) goto L_10cd852a;
  /* 10cd8512 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd8515 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10cd851b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 10cd8521 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd8528 je 0x10cd8531 */
  if (C.zf) goto L_10cd8531;
L_10cd852a:;
  /* 10cd852a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 10cd852f jmp 0x10cd8599 */
  goto L_10cd8599;
L_10cd8531:;
  /* 10cd8531 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10cd8537 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd853d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 10cd8543 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd8546 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd854b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10cd854e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd8551 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10cd8553 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10cd8556 jmp 0x10cd805a */
  goto L_10cd805a;
L_10cd855b:;
  /* 10cd855b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10cd8561 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10cd8567 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd8569 jne 0x10cd857c */
  if (!C.zf) goto L_10cd857c;
  /* 10cd856b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10cd8571 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 10cd8577 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd857a je 0x10cd8583 */
  if (C.zf) goto L_10cd8583;
L_10cd857c:;
  /* 10cd857c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 10cd8581 jmp 0x10cd8599 */
  goto L_10cd8599;
L_10cd8583:;
  /* 10cd8583 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10cd8589 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd858c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 10cd8592 jmp 0x10cd7fc3 */
  goto L_10cd7fc3;
L_10cd8597:;
  /* 10cd8597 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10cd8599:;
  /* 10cd8599 mov esp, ebp */
  ESP = (EBP);
  /* 10cd859b pop ebp */
  EBP = (pop32());
  /* 10cd859c ret  */
  ESPCHK(0x10cd7f80u, _esp0);
  ESP += 4; return;
}

/* FUN_100085a0 @ 0x10cd85a0 (250 bytes, 92 insns) */
void f_10cd85a0(void) {
  FTRACE(0x10cd85a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd85a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd85a1 mov ebp, esp */
  EBP = (ESP);
  /* 10cd85a3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd85a6 push ebx */
  push32((uint32_t)(EBX));
  /* 10cd85a7 push esi */
  push32((uint32_t)(ESI));
  /* 10cd85a8 push edi */
  push32((uint32_t)(EDI));
  /* 10cd85a9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10cd85ac mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10cd85af lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10cd85b2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10cd85b5:;
  /* 10cd85b5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd85b9 jne 0x10cd85d9 */
  if (!C.zf) goto L_10cd85d9;
  /* 10cd85bb push 0x10cf9db0 */
  push32((uint32_t)(0x10cf9db0u));
  /* 10cd85c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd85c2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10cd85c4 push 0x10cf9da4 */
  push32((uint32_t)(0x10cf9da4u));
  /* 10cd85c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd85cb call 0x10cd1750 */
  push32(0x10cd85d0u); f_10cd1750();
  /* 10cd85d0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd85d3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd85d6 jne 0x10cd85d9 */
  if (!C.zf) goto L_10cd85d9;
  /* 10cd85d8 int3  */
  x86_unimpl("int3 @ 0x10cd85d8");
L_10cd85d9:;
  /* 10cd85d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd85db test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd85dd jne 0x10cd85b5 */
  if (!C.zf) goto L_10cd85b5;
L_10cd85df:;
  /* 10cd85df cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd85e3 jne 0x10cd8603 */
  if (!C.zf) goto L_10cd8603;
  /* 10cd85e5 push 0x10cf9d94 */
  push32((uint32_t)(0x10cf9d94u));
  /* 10cd85ea push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd85ec push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10cd85ee push 0x10cf9da4 */
  push32((uint32_t)(0x10cf9da4u));
  /* 10cd85f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd85f5 call 0x10cd1750 */
  push32(0x10cd85fau); f_10cd1750();
  /* 10cd85fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd85fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd8600 jne 0x10cd8603 */
  if (!C.zf) goto L_10cd8603;
  /* 10cd8602 int3  */
  x86_unimpl("int3 @ 0x10cd8602");
L_10cd8603:;
  /* 10cd8603 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd8605 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd8607 jne 0x10cd85df */
  if (!C.zf) goto L_10cd85df;
  /* 10cd8609 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd860c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10cd8613 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd8616 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd8619 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10cd861c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd861f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd8622 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10cd8624 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd8627 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 10cd862e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10cd8631 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd8632 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd8635 push edx */
  push32((uint32_t)(EDX));
  /* 10cd8636 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd8639 push eax */
  push32((uint32_t)(EAX));
  /* 10cd863a call 0x10cd9620 */
  push32(0x10cd863fu); f_10cd9620();
  /* 10cd863f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd8642 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10cd8645 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd8648 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10cd864b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd864e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd8651 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10cd8654 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd8657 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd865b jl 0x10cd867f */
  if ((C.sf!=C.of)) goto L_10cd867f;
  /* 10cd865d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd8660 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10cd8662 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10cd8665 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd8667 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10cd866d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10cd8670 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd8673 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10cd8675 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd8678 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd867b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10cd867d jmp 0x10cd8690 */
  goto L_10cd8690;
L_10cd867f:;
  /* 10cd867f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd8682 push edx */
  push32((uint32_t)(EDX));
  /* 10cd8683 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd8685 call 0x10cd93a0 */
  push32(0x10cd868au); f_10cd93a0();
  /* 10cd868a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd868d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10cd8690:;
  /* 10cd8690 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10cd8693 pop edi */
  EDI = (pop32());
  /* 10cd8694 pop esi */
  ESI = (pop32());
  /* 10cd8695 pop ebx */
  EBX = (pop32());
  /* 10cd8696 mov esp, ebp */
  ESP = (EBP);
  /* 10cd8698 pop ebp */
  EBP = (pop32());
  /* 10cd8699 ret  */
  ESPCHK(0x10cd85a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100086a0 @ 0x10cd86a0 (183 bytes, 58 insns) */
void f_10cd86a0(void) {
  FTRACE(0x10cd86a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd86a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd86a1 mov ebp, esp */
  EBP = (ESP);
  /* 10cd86a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd86a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd86a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd86ac cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd86b1 ja 0x10cd86ca */
  if ((!C.cf&&!C.zf)) goto L_10cd86ca;
  /* 10cd86b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd86b6 mov edx, dword ptr [0x10cfcc98] */
  EDX = (r32((uint32_t)(0x10cfcc98)));
  /* 10cd86bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd86be mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10cd86c2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 10cd86c5 jmp 0x10cd8753 */
  goto L_10cd8753;
L_10cd86ca:;
  /* 10cd86ca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd86cd sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10cd86d0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10cd86d6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10cd86dc mov edx, dword ptr [0x10cfcc98] */
  EDX = (r32((uint32_t)(0x10cfcc98)));
  /* 10cd86e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd86e4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10cd86e8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10cd86ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd86ef je 0x10cd8713 */
  if (C.zf) goto L_10cd8713;
  /* 10cd86f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd86f4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10cd86f7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10cd86fd mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10cd8700 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 10cd8703 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 10cd8706 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 10cd870a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 10cd8711 jmp 0x10cd8724 */
  goto L_10cd8724;
L_10cd8713:;
  /* 10cd8713 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10cd8716 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10cd8719 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 10cd871d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10cd8724:;
  /* 10cd8724 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd8726 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd8728 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd872a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10cd872d push ecx */
  push32((uint32_t)(ECX));
  /* 10cd872e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd8731 push edx */
  push32((uint32_t)(EDX));
  /* 10cd8732 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10cd8735 push eax */
  push32((uint32_t)(EAX));
  /* 10cd8736 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd8738 call 0x10cda8c0 */
  push32(0x10cd873du); f_10cda8c0();
  /* 10cd873d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd8740 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd8742 jne 0x10cd8748 */
  if (!C.zf) goto L_10cd8748;
  /* 10cd8744 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd8746 jmp 0x10cd8753 */
  goto L_10cd8753;
L_10cd8748:;
  /* 10cd8748 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd874b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cd8750 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_10cd8753:;
  /* 10cd8753 mov esp, ebp */
  ESP = (EBP);
  /* 10cd8755 pop ebp */
  EBP = (pop32());
  /* 10cd8756 ret  */
  ESPCHK(0x10cd86a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008760 @ 0x10cd8760 (836 bytes, 238 insns) */
void f_10cd8760(void) {
  FTRACE(0x10cd8760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd8760 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd8761 mov ebp, esp */
  EBP = (ESP);
  /* 10cd8763 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd8766 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10cd8768 call 0x10cd6090 */
  push32(0x10cd876du); f_10cd6090();
  /* 10cd876d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd8770 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd8773 push eax */
  push32((uint32_t)(EAX));
  /* 10cd8774 call 0x10cd8ab0 */
  push32(0x10cd8779u); f_10cd8ab0();
  /* 10cd8779 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd877c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10cd877f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd8782 cmp ecx, dword ptr [0x10cffae4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10cffae4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd8788 jne 0x10cd879b */
  if (!C.zf) goto L_10cd879b;
  /* 10cd878a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10cd878c call 0x10cd6130 */
  push32(0x10cd8791u); f_10cd6130();
  /* 10cd8791 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd8794 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd8796 jmp 0x10cd8aa0 */
  goto L_10cd8aa0;
L_10cd879b:;
  /* 10cd879b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd879f jne 0x10cd87bc */
  if (!C.zf) goto L_10cd87bc;
  /* 10cd87a1 call 0x10cd8b90 */
  push32(0x10cd87a6u); f_10cd8b90();
  /* 10cd87a6 call 0x10cd8c10 */
  push32(0x10cd87abu); f_10cd8c10();
  /* 10cd87ab push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10cd87ad call 0x10cd6130 */
  push32(0x10cd87b2u); f_10cd6130();
  /* 10cd87b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd87b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd87b7 jmp 0x10cd8aa0 */
  goto L_10cd8aa0;
L_10cd87bc:;
  /* 10cd87bc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10cd87c3 jmp 0x10cd87ce */
  goto L_10cd87ce;
L_10cd87c5:;
  /* 10cd87c5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd87c8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd87cb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10cd87ce:;
  /* 10cd87ce cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd87d2 jae 0x10cd891f */
  if (!C.cf) goto L_10cd891f;
  /* 10cd87d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd87db imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cd87de mov ecx, dword ptr [eax + 0x10cfceb8] */
  ECX = (r32((uint32_t)(EAX + 0x10cfceb8)));
  /* 10cd87e4 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd87e7 jne 0x10cd891a */
  if (!C.zf) goto L_10cd891a;
  /* 10cd87ed mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10cd87f4 jmp 0x10cd87ff */
  goto L_10cd87ff;
L_10cd87f6:;
  /* 10cd87f6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd87f9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd87fc mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10cd87ff:;
  /* 10cd87ff cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd8806 jae 0x10cd8814 */
  if (!C.cf) goto L_10cd8814;
  /* 10cd8808 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd880b mov byte ptr [eax + 0x10cffc80], 0 */
  w8((uint32_t)(EAX + 0x10cffc80), (0x0u));
  /* 10cd8812 jmp 0x10cd87f6 */
  goto L_10cd87f6;
L_10cd8814:;
  /* 10cd8814 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10cd881b jmp 0x10cd8826 */
  goto L_10cd8826;
L_10cd881d:;
  /* 10cd881d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd8820 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd8823 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10cd8826:;
  /* 10cd8826 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd882a jae 0x10cd88a7 */
  if (!C.cf) goto L_10cd88a7;
  /* 10cd882c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd882f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cd8832 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd8835 lea ecx, [edx + eax*8 + 0x10cfcec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x10cfcec8));
  /* 10cd883c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10cd883f jmp 0x10cd884a */
  goto L_10cd884a;
L_10cd8841:;
  /* 10cd8841 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd8844 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd8847 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10cd884a:;
  /* 10cd884a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd884d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd884f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10cd8851 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd8853 je 0x10cd88a2 */
  if (C.zf) goto L_10cd88a2;
  /* 10cd8855 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd8858 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd885a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10cd885d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd885f je 0x10cd88a2 */
  if (C.zf) goto L_10cd88a2;
  /* 10cd8861 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd8864 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd8866 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10cd8868 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10cd886b jmp 0x10cd8876 */
  goto L_10cd8876;
L_10cd886d:;
  /* 10cd886d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd8870 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd8873 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10cd8876:;
  /* 10cd8876 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd8879 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd887b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10cd887e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd8881 ja 0x10cd88a0 */
  if ((!C.cf&&!C.zf)) goto L_10cd88a0;
  /* 10cd8883 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd8886 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd8889 mov dl, byte ptr [eax + 0x10cffc81] */
  DL = (r8((uint32_t)(EAX + 0x10cffc81)));
  /* 10cd888f or dl, byte ptr [ecx + 0x10cfceb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x10cfceb0))); DL = (_r); fl_logic(_r,8); }
  /* 10cd8895 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd8898 mov byte ptr [eax + 0x10cffc81], dl */
  w8((uint32_t)(EAX + 0x10cffc81), (DL));
  /* 10cd889e jmp 0x10cd886d */
  goto L_10cd886d;
L_10cd88a0:;
  /* 10cd88a0 jmp 0x10cd8841 */
  goto L_10cd8841;
L_10cd88a2:;
  /* 10cd88a2 jmp 0x10cd881d */
  goto L_10cd881d;
L_10cd88a7:;
  /* 10cd88a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd88aa mov dword ptr [0x10cffae4], ecx */
  w32((uint32_t)(0x10cffae4), (ECX));
  /* 10cd88b0 mov dword ptr [0x10cffb6c], 1 */
  w32((uint32_t)(0x10cffb6c), (0x1u));
  /* 10cd88ba mov edx, dword ptr [0x10cffae4] */
  EDX = (r32((uint32_t)(0x10cffae4)));
  /* 10cd88c0 push edx */
  push32((uint32_t)(EDX));
  /* 10cd88c1 call 0x10cd8b10 */
  push32(0x10cd88c6u); f_10cd8b10();
  /* 10cd88c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd88c9 mov dword ptr [0x10cffd84], eax */
  w32((uint32_t)(0x10cffd84), (EAX));
  /* 10cd88ce mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10cd88d5 jmp 0x10cd88e0 */
  goto L_10cd88e0;
L_10cd88d7:;
  /* 10cd88d7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd88da add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd88dd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10cd88e0:;
  /* 10cd88e0 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd88e4 jae 0x10cd8904 */
  if (!C.cf) goto L_10cd8904;
  /* 10cd88e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd88e9 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cd88ec mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd88ef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd88f2 mov cx, word ptr [ecx + eax*2 + 0x10cfcebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x10cfcebc)));
  /* 10cd88fa mov word ptr [edx*2 + 0x10cffb60], cx */
  w16((uint32_t)(EDX*2 + 0x10cffb60), (CX));
  /* 10cd8902 jmp 0x10cd88d7 */
  goto L_10cd88d7;
L_10cd8904:;
  /* 10cd8904 call 0x10cd8c10 */
  push32(0x10cd8909u); f_10cd8c10();
  /* 10cd8909 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10cd890b call 0x10cd6130 */
  push32(0x10cd8910u); f_10cd6130();
  /* 10cd8910 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd8913 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd8915 jmp 0x10cd8aa0 */
  goto L_10cd8aa0;
L_10cd891a:;
  /* 10cd891a jmp 0x10cd87c5 */
  goto L_10cd87c5;
L_10cd891f:;
  /* 10cd891f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 10cd8922 push edx */
  push32((uint32_t)(EDX));
  /* 10cd8923 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd8926 push eax */
  push32((uint32_t)(EAX));
  /* 10cd8927 call dword ptr [0x10d002dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002dc))), 0x10cd892du);
  /* 10cd892d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd8930 jne 0x10cd8a72 */
  if (!C.zf) goto L_10cd8a72;
  /* 10cd8936 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10cd893d jmp 0x10cd8948 */
  goto L_10cd8948;
L_10cd893f:;
  /* 10cd893f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd8942 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd8945 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10cd8948:;
  /* 10cd8948 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd894f jae 0x10cd895d */
  if (!C.cf) goto L_10cd895d;
  /* 10cd8951 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd8954 mov byte ptr [edx + 0x10cffc80], 0 */
  w8((uint32_t)(EDX + 0x10cffc80), (0x0u));
  /* 10cd895b jmp 0x10cd893f */
  goto L_10cd893f;
L_10cd895d:;
  /* 10cd895d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd8960 mov dword ptr [0x10cffae4], eax */
  w32((uint32_t)(0x10cffae4), (EAX));
  /* 10cd8965 mov dword ptr [0x10cffd84], 0 */
  w32((uint32_t)(0x10cffd84), (0x0u));
  /* 10cd896f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd8973 jbe 0x10cd8a2e */
  if ((C.cf||C.zf)) goto L_10cd8a2e;
  /* 10cd8979 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 10cd897c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10cd897f jmp 0x10cd898a */
  goto L_10cd898a;
L_10cd8981:;
  /* 10cd8981 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10cd8984 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd8987 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_10cd898a:;
  /* 10cd898a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10cd898d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd898f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10cd8991 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd8993 je 0x10cd89dc */
  if (C.zf) goto L_10cd89dc;
  /* 10cd8995 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10cd8998 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd899a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10cd899d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd899f je 0x10cd89dc */
  if (C.zf) goto L_10cd89dc;
  /* 10cd89a1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10cd89a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd89a6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10cd89a8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10cd89ab jmp 0x10cd89b6 */
  goto L_10cd89b6;
L_10cd89ad:;
  /* 10cd89ad mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd89b0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd89b3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10cd89b6:;
  /* 10cd89b6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10cd89b9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd89bb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10cd89be cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd89c1 ja 0x10cd89da */
  if ((!C.cf&&!C.zf)) goto L_10cd89da;
  /* 10cd89c3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd89c6 mov cl, byte ptr [eax + 0x10cffc81] */
  CL = (r8((uint32_t)(EAX + 0x10cffc81)));
  /* 10cd89cc or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 10cd89cf mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd89d2 mov byte ptr [edx + 0x10cffc81], cl */
  w8((uint32_t)(EDX + 0x10cffc81), (CL));
  /* 10cd89d8 jmp 0x10cd89ad */
  goto L_10cd89ad;
L_10cd89da:;
  /* 10cd89da jmp 0x10cd8981 */
  goto L_10cd8981;
L_10cd89dc:;
  /* 10cd89dc mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 10cd89e3 jmp 0x10cd89ee */
  goto L_10cd89ee;
L_10cd89e5:;
  /* 10cd89e5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd89e8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd89eb mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10cd89ee:;
  /* 10cd89ee cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd89f5 jae 0x10cd8a0e */
  if (!C.cf) goto L_10cd8a0e;
  /* 10cd89f7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd89fa mov dl, byte ptr [ecx + 0x10cffc81] */
  DL = (r8((uint32_t)(ECX + 0x10cffc81)));
  /* 10cd8a00 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10cd8a03 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd8a06 mov byte ptr [eax + 0x10cffc81], dl */
  w8((uint32_t)(EAX + 0x10cffc81), (DL));
  /* 10cd8a0c jmp 0x10cd89e5 */
  goto L_10cd89e5;
L_10cd8a0e:;
  /* 10cd8a0e mov ecx, dword ptr [0x10cffae4] */
  ECX = (r32((uint32_t)(0x10cffae4)));
  /* 10cd8a14 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd8a15 call 0x10cd8b10 */
  push32(0x10cd8a1au); f_10cd8b10();
  /* 10cd8a1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd8a1d mov dword ptr [0x10cffd84], eax */
  w32((uint32_t)(0x10cffd84), (EAX));
  /* 10cd8a22 mov dword ptr [0x10cffb6c], 1 */
  w32((uint32_t)(0x10cffb6c), (0x1u));
  /* 10cd8a2c jmp 0x10cd8a38 */
  goto L_10cd8a38;
L_10cd8a2e:;
  /* 10cd8a2e mov dword ptr [0x10cffb6c], 0 */
  w32((uint32_t)(0x10cffb6c), (0x0u));
L_10cd8a38:;
  /* 10cd8a38 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10cd8a3f jmp 0x10cd8a4a */
  goto L_10cd8a4a;
L_10cd8a41:;
  /* 10cd8a41 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd8a44 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd8a47 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10cd8a4a:;
  /* 10cd8a4a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd8a4e jae 0x10cd8a5f */
  if (!C.cf) goto L_10cd8a5f;
  /* 10cd8a50 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd8a53 mov word ptr [eax*2 + 0x10cffb60], 0 */
  w16((uint32_t)(EAX*2 + 0x10cffb60), (0x0u));
  /* 10cd8a5d jmp 0x10cd8a41 */
  goto L_10cd8a41;
L_10cd8a5f:;
  /* 10cd8a5f call 0x10cd8c10 */
  push32(0x10cd8a64u); f_10cd8c10();
  /* 10cd8a64 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10cd8a66 call 0x10cd6130 */
  push32(0x10cd8a6bu); f_10cd6130();
  /* 10cd8a6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd8a6e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd8a70 jmp 0x10cd8aa0 */
  goto L_10cd8aa0;
L_10cd8a72:;
  /* 10cd8a72 cmp dword ptr [0x10cfe5f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe5f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd8a79 je 0x10cd8a93 */
  if (C.zf) goto L_10cd8a93;
  /* 10cd8a7b call 0x10cd8b90 */
  push32(0x10cd8a80u); f_10cd8b90();
  /* 10cd8a80 call 0x10cd8c10 */
  push32(0x10cd8a85u); f_10cd8c10();
  /* 10cd8a85 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10cd8a87 call 0x10cd6130 */
  push32(0x10cd8a8cu); f_10cd6130();
  /* 10cd8a8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd8a8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd8a91 jmp 0x10cd8aa0 */
  goto L_10cd8aa0;
L_10cd8a93:;
  /* 10cd8a93 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10cd8a95 call 0x10cd6130 */
  push32(0x10cd8a9au); f_10cd6130();
  /* 10cd8a9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd8a9d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10cd8aa0:;
  /* 10cd8aa0 mov esp, ebp */
  ESP = (EBP);
  /* 10cd8aa2 pop ebp */
  EBP = (pop32());
  /* 10cd8aa3 ret  */
  ESPCHK(0x10cd8760u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x10cd8ab0 (89 bytes, 21 insns) */
void f_10cd8ab0(void) {
  FTRACE(0x10cd8ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd8ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd8ab1 mov ebp, esp */
  EBP = (ESP);
  /* 10cd8ab3 mov dword ptr [0x10cfe5f0], 0 */
  w32((uint32_t)(0x10cfe5f0), (0x0u));
  /* 10cd8abd cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd8ac1 jne 0x10cd8ad5 */
  if (!C.zf) goto L_10cd8ad5;
  /* 10cd8ac3 mov dword ptr [0x10cfe5f0], 1 */
  w32((uint32_t)(0x10cfe5f0), (0x1u));
  /* 10cd8acd call dword ptr [0x10d002e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002e4))), 0x10cd8ad3u);
  /* 10cd8ad3 jmp 0x10cd8b07 */
  goto L_10cd8b07;
L_10cd8ad5:;
  /* 10cd8ad5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd8ad9 jne 0x10cd8aed */
  if (!C.zf) goto L_10cd8aed;
  /* 10cd8adb mov dword ptr [0x10cfe5f0], 1 */
  w32((uint32_t)(0x10cfe5f0), (0x1u));
  /* 10cd8ae5 call dword ptr [0x10d002e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002e0))), 0x10cd8aebu);
  /* 10cd8aeb jmp 0x10cd8b07 */
  goto L_10cd8b07;
L_10cd8aed:;
  /* 10cd8aed cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd8af1 jne 0x10cd8b04 */
  if (!C.zf) goto L_10cd8b04;
  /* 10cd8af3 mov dword ptr [0x10cfe5f0], 1 */
  w32((uint32_t)(0x10cfe5f0), (0x1u));
  /* 10cd8afd mov eax, dword ptr [0x10cfe610] */
  EAX = (r32((uint32_t)(0x10cfe610)));
  /* 10cd8b02 jmp 0x10cd8b07 */
  goto L_10cd8b07;
L_10cd8b04:;
  /* 10cd8b04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10cd8b07:;
  /* 10cd8b07 pop ebp */
  EBP = (pop32());
  /* 10cd8b08 ret  */
  ESPCHK(0x10cd8ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b10 @ 0x10cd8b10 (80 bytes, 26 insns) [1 switch table(s)] */
void f_10cd8b10(void) {
  FTRACE(0x10cd8b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd8b10 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd8b11 mov ebp, esp */
  EBP = (ESP);
  /* 10cd8b13 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd8b14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd8b17 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd8b1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd8b1d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd8b23 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10cd8b26 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd8b2a ja 0x10cd8b5a */
  if ((!C.cf&&!C.zf)) goto L_10cd8b5a;
  /* 10cd8b2c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd8b2f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd8b31 mov dl, byte ptr [eax + 0x10cd8b74] */
  DL = (r8((uint32_t)(EAX + 0x10cd8b74)));
  /* 10cd8b37 jmp dword ptr [edx*4 + 0x10cd8b60] */
  switch (EDX) {
    case 0: goto L_10cd8b3e;
    case 1: goto L_10cd8b45;
    case 2: goto L_10cd8b4c;
    case 3: goto L_10cd8b53;
    case 4: goto L_10cd8b5a;
    default: x86_unimpl("switch@0x10cd8b37 out of table"); return;
  }
L_10cd8b3e:;
  /* 10cd8b3e mov eax, 0x411 */
  EAX = (0x411u);
  /* 10cd8b43 jmp 0x10cd8b5c */
  goto L_10cd8b5c;
L_10cd8b45:;
  /* 10cd8b45 mov eax, 0x804 */
  EAX = (0x804u);
  /* 10cd8b4a jmp 0x10cd8b5c */
  goto L_10cd8b5c;
L_10cd8b4c:;
  /* 10cd8b4c mov eax, 0x412 */
  EAX = (0x412u);
  /* 10cd8b51 jmp 0x10cd8b5c */
  goto L_10cd8b5c;
L_10cd8b53:;
  /* 10cd8b53 mov eax, 0x404 */
  EAX = (0x404u);
  /* 10cd8b58 jmp 0x10cd8b5c */
  goto L_10cd8b5c;
L_10cd8b5a:;
  /* 10cd8b5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10cd8b5c:;
  /* 10cd8b5c mov esp, ebp */
  ESP = (EBP);
  /* 10cd8b5e pop ebp */
  EBP = (pop32());
  /* 10cd8b5f ret  */
  ESPCHK(0x10cd8b10u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x10cd8b90 (116 bytes, 29 insns) */
void f_10cd8b90(void) {
  FTRACE(0x10cd8b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd8b90 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd8b91 mov ebp, esp */
  EBP = (ESP);
  /* 10cd8b93 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd8b94 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10cd8b9b jmp 0x10cd8ba6 */
  goto L_10cd8ba6;
L_10cd8b9d:;
  /* 10cd8b9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd8ba0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd8ba3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10cd8ba6:;
  /* 10cd8ba6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd8bad jge 0x10cd8bbb */
  if ((C.sf==C.of)) goto L_10cd8bbb;
  /* 10cd8baf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd8bb2 mov byte ptr [ecx + 0x10cffc80], 0 */
  w8((uint32_t)(ECX + 0x10cffc80), (0x0u));
  /* 10cd8bb9 jmp 0x10cd8b9d */
  goto L_10cd8b9d;
L_10cd8bbb:;
  /* 10cd8bbb mov dword ptr [0x10cffae4], 0 */
  w32((uint32_t)(0x10cffae4), (0x0u));
  /* 10cd8bc5 mov dword ptr [0x10cffb6c], 0 */
  w32((uint32_t)(0x10cffb6c), (0x0u));
  /* 10cd8bcf mov dword ptr [0x10cffd84], 0 */
  w32((uint32_t)(0x10cffd84), (0x0u));
  /* 10cd8bd9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10cd8be0 jmp 0x10cd8beb */
  goto L_10cd8beb;
L_10cd8be2:;
  /* 10cd8be2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd8be5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd8be8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10cd8beb:;
  /* 10cd8beb cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd8bef jge 0x10cd8c00 */
  if ((C.sf==C.of)) goto L_10cd8c00;
  /* 10cd8bf1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd8bf4 mov word ptr [eax*2 + 0x10cffb60], 0 */
  w16((uint32_t)(EAX*2 + 0x10cffb60), (0x0u));
  /* 10cd8bfe jmp 0x10cd8be2 */
  goto L_10cd8be2;
L_10cd8c00:;
  /* 10cd8c00 mov esp, ebp */
  ESP = (EBP);
  /* 10cd8c02 pop ebp */
  EBP = (pop32());
  /* 10cd8c03 ret  */
  ESPCHK(0x10cd8b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c10 @ 0x10cd8c10 (770 bytes, 175 insns) */
void f_10cd8c10(void) {
  FTRACE(0x10cd8c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd8c10 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd8c11 mov ebp, esp */
  EBP = (ESP);
  /* 10cd8c13 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd8c19 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 10cd8c1f push eax */
  push32((uint32_t)(EAX));
  /* 10cd8c20 mov ecx, dword ptr [0x10cffae4] */
  ECX = (r32((uint32_t)(0x10cffae4)));
  /* 10cd8c26 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd8c27 call dword ptr [0x10d002dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002dc))), 0x10cd8c2du);
  /* 10cd8c2d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd8c30 jne 0x10cd8e49 */
  if (!C.zf) goto L_10cd8e49;
  /* 10cd8c36 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10cd8c40 jmp 0x10cd8c51 */
  goto L_10cd8c51;
L_10cd8c42:;
  /* 10cd8c42 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10cd8c48 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd8c4b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10cd8c51:;
  /* 10cd8c51 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd8c5b jae 0x10cd8c72 */
  if (!C.cf) goto L_10cd8c72;
  /* 10cd8c5d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10cd8c63 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 10cd8c69 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 10cd8c70 jmp 0x10cd8c42 */
  goto L_10cd8c42;
L_10cd8c72:;
  /* 10cd8c72 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 10cd8c79 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 10cd8c7f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10cd8c82 jmp 0x10cd8c8d */
  goto L_10cd8c8d;
L_10cd8c84:;
  /* 10cd8c84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd8c87 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd8c8a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10cd8c8d:;
  /* 10cd8c8d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd8c90 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd8c92 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10cd8c94 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd8c96 je 0x10cd8cd8 */
  if (C.zf) goto L_10cd8cd8;
  /* 10cd8c98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd8c9b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd8c9d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10cd8c9f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 10cd8ca5 jmp 0x10cd8cb6 */
  goto L_10cd8cb6;
L_10cd8ca7:;
  /* 10cd8ca7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10cd8cad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd8cb0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10cd8cb6:;
  /* 10cd8cb6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd8cb9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd8cbb mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10cd8cbe cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd8cc4 ja 0x10cd8cd6 */
  if ((!C.cf&&!C.zf)) goto L_10cd8cd6;
  /* 10cd8cc6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10cd8ccc mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 10cd8cd4 jmp 0x10cd8ca7 */
  goto L_10cd8ca7;
L_10cd8cd6:;
  /* 10cd8cd6 jmp 0x10cd8c84 */
  goto L_10cd8c84;
L_10cd8cd8:;
  /* 10cd8cd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd8cda mov eax, dword ptr [0x10cffd84] */
  EAX = (r32((uint32_t)(0x10cffd84)));
  /* 10cd8cdf push eax */
  push32((uint32_t)(EAX));
  /* 10cd8ce0 mov ecx, dword ptr [0x10cffae4] */
  ECX = (r32((uint32_t)(0x10cffae4)));
  /* 10cd8ce6 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd8ce7 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 10cd8ced push edx */
  push32((uint32_t)(EDX));
  /* 10cd8cee push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10cd8cf3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10cd8cf9 push eax */
  push32((uint32_t)(EAX));
  /* 10cd8cfa push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd8cfc call 0x10cda8c0 */
  push32(0x10cd8d01u); f_10cda8c0();
  /* 10cd8d01 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd8d04 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd8d06 mov ecx, dword ptr [0x10cffae4] */
  ECX = (r32((uint32_t)(0x10cffae4)));
  /* 10cd8d0c push ecx */
  push32((uint32_t)(ECX));
  /* 10cd8d0d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10cd8d12 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10cd8d18 push edx */
  push32((uint32_t)(EDX));
  /* 10cd8d19 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10cd8d1e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10cd8d24 push eax */
  push32((uint32_t)(EAX));
  /* 10cd8d25 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10cd8d2a mov ecx, dword ptr [0x10cffd84] */
  ECX = (r32((uint32_t)(0x10cffd84)));
  /* 10cd8d30 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd8d31 call 0x10cdaa80 */
  push32(0x10cd8d36u); f_10cdaa80();
  /* 10cd8d36 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd8d39 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd8d3b mov edx, dword ptr [0x10cffae4] */
  EDX = (r32((uint32_t)(0x10cffae4)));
  /* 10cd8d41 push edx */
  push32((uint32_t)(EDX));
  /* 10cd8d42 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10cd8d47 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 10cd8d4d push eax */
  push32((uint32_t)(EAX));
  /* 10cd8d4e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10cd8d53 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 10cd8d59 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd8d5a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 10cd8d5f mov edx, dword ptr [0x10cffd84] */
  EDX = (r32((uint32_t)(0x10cffd84)));
  /* 10cd8d65 push edx */
  push32((uint32_t)(EDX));
  /* 10cd8d66 call 0x10cdaa80 */
  push32(0x10cd8d6bu); f_10cdaa80();
  /* 10cd8d6b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd8d6e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10cd8d78 jmp 0x10cd8d89 */
  goto L_10cd8d89;
L_10cd8d7a:;
  /* 10cd8d7a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10cd8d80 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd8d83 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10cd8d89:;
  /* 10cd8d89 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd8d93 jae 0x10cd8e44 */
  if (!C.cf) goto L_10cd8e44;
  /* 10cd8d99 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10cd8d9f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd8da1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 10cd8da9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10cd8dac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd8dae je 0x10cd8de6 */
  if (C.zf) goto L_10cd8de6;
  /* 10cd8db0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10cd8db6 mov cl, byte ptr [eax + 0x10cffc81] */
  CL = (r8((uint32_t)(EAX + 0x10cffc81)));
  /* 10cd8dbc or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 10cd8dbf mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10cd8dc5 mov byte ptr [edx + 0x10cffc81], cl */
  w8((uint32_t)(EDX + 0x10cffc81), (CL));
  /* 10cd8dcb mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10cd8dd1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10cd8dd7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 10cd8dde mov byte ptr [eax + 0x10cffb80], dl */
  w8((uint32_t)(EAX + 0x10cffb80), (DL));
  /* 10cd8de4 jmp 0x10cd8e3f */
  goto L_10cd8e3f;
L_10cd8de6:;
  /* 10cd8de6 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10cd8dec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd8dee mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 10cd8df6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10cd8df9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd8dfb je 0x10cd8e32 */
  if (C.zf) goto L_10cd8e32;
  /* 10cd8dfd mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10cd8e03 mov al, byte ptr [edx + 0x10cffc81] */
  AL = (r8((uint32_t)(EDX + 0x10cffc81)));
  /* 10cd8e09 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10cd8e0b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10cd8e11 mov byte ptr [ecx + 0x10cffc81], al */
  w8((uint32_t)(ECX + 0x10cffc81), (AL));
  /* 10cd8e17 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10cd8e1d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10cd8e23 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 10cd8e2a mov byte ptr [edx + 0x10cffb80], cl */
  w8((uint32_t)(EDX + 0x10cffb80), (CL));
  /* 10cd8e30 jmp 0x10cd8e3f */
  goto L_10cd8e3f;
L_10cd8e32:;
  /* 10cd8e32 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10cd8e38 mov byte ptr [edx + 0x10cffb80], 0 */
  w8((uint32_t)(EDX + 0x10cffb80), (0x0u));
L_10cd8e3f:;
  /* 10cd8e3f jmp 0x10cd8d7a */
  goto L_10cd8d7a;
L_10cd8e44:;
  /* 10cd8e44 jmp 0x10cd8f0e */
  goto L_10cd8f0e;
L_10cd8e49:;
  /* 10cd8e49 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10cd8e53 jmp 0x10cd8e64 */
  goto L_10cd8e64;
L_10cd8e55:;
  /* 10cd8e55 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10cd8e5b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd8e5e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10cd8e64:;
  /* 10cd8e64 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd8e6e jae 0x10cd8f0e */
  if (!C.cf) goto L_10cd8f0e;
  /* 10cd8e74 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd8e7b jb 0x10cd8eb8 */
  if (C.cf) goto L_10cd8eb8;
  /* 10cd8e7d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd8e84 ja 0x10cd8eb8 */
  if ((!C.cf&&!C.zf)) goto L_10cd8eb8;
  /* 10cd8e86 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10cd8e8c mov dl, byte ptr [ecx + 0x10cffc81] */
  DL = (r8((uint32_t)(ECX + 0x10cffc81)));
  /* 10cd8e92 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10cd8e95 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10cd8e9b mov byte ptr [eax + 0x10cffc81], dl */
  w8((uint32_t)(EAX + 0x10cffc81), (DL));
  /* 10cd8ea1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10cd8ea7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd8eaa mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10cd8eb0 mov byte ptr [edx + 0x10cffb80], cl */
  w8((uint32_t)(EDX + 0x10cffb80), (CL));
  /* 10cd8eb6 jmp 0x10cd8f09 */
  goto L_10cd8f09;
L_10cd8eb8:;
  /* 10cd8eb8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd8ebf jb 0x10cd8efc */
  if (C.cf) goto L_10cd8efc;
  /* 10cd8ec1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd8ec8 ja 0x10cd8efc */
  if ((!C.cf&&!C.zf)) goto L_10cd8efc;
  /* 10cd8eca mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10cd8ed0 mov cl, byte ptr [eax + 0x10cffc81] */
  CL = (r8((uint32_t)(EAX + 0x10cffc81)));
  /* 10cd8ed6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10cd8ed9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10cd8edf mov byte ptr [edx + 0x10cffc81], cl */
  w8((uint32_t)(EDX + 0x10cffc81), (CL));
  /* 10cd8ee5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10cd8eeb sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd8eee mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10cd8ef4 mov byte ptr [ecx + 0x10cffb80], al */
  w8((uint32_t)(ECX + 0x10cffb80), (AL));
  /* 10cd8efa jmp 0x10cd8f09 */
  goto L_10cd8f09;
L_10cd8efc:;
  /* 10cd8efc mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10cd8f02 mov byte ptr [edx + 0x10cffb80], 0 */
  w8((uint32_t)(EDX + 0x10cffb80), (0x0u));
L_10cd8f09:;
  /* 10cd8f09 jmp 0x10cd8e55 */
  goto L_10cd8e55;
L_10cd8f0e:;
  /* 10cd8f0e mov esp, ebp */
  ESP = (EBP);
  /* 10cd8f10 pop ebp */
  EBP = (pop32());
  /* 10cd8f11 ret  */
  ESPCHK(0x10cd8c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f20 @ 0x10cd8f20 (23 bytes, 9 insns) */
void f_10cd8f20(void) {
  FTRACE(0x10cd8f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd8f20 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd8f21 mov ebp, esp */
  EBP = (ESP);
  /* 10cd8f23 cmp dword ptr [0x10cffb6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cffb6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd8f2a je 0x10cd8f33 */
  if (C.zf) goto L_10cd8f33;
  /* 10cd8f2c mov eax, dword ptr [0x10cffae4] */
  EAX = (r32((uint32_t)(0x10cffae4)));
  /* 10cd8f31 jmp 0x10cd8f35 */
  goto L_10cd8f35;
L_10cd8f33:;
  /* 10cd8f33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10cd8f35:;
  /* 10cd8f35 pop ebp */
  EBP = (pop32());
  /* 10cd8f36 ret  */
  ESPCHK(0x10cd8f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f40 @ 0x10cd8f40 (34 bytes, 10 insns) */
void f_10cd8f40(void) {
  FTRACE(0x10cd8f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd8f40 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd8f41 mov ebp, esp */
  EBP = (ESP);
  /* 10cd8f43 cmp dword ptr [0x10cfff30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfff30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd8f4a jne 0x10cd8f60 */
  if (!C.zf) goto L_10cd8f60;
  /* 10cd8f4c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 10cd8f4e call 0x10cd8760 */
  push32(0x10cd8f53u); f_10cd8760();
  /* 10cd8f53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd8f56 mov dword ptr [0x10cfff30], 1 */
  w32((uint32_t)(0x10cfff30), (0x1u));
L_10cd8f60:;
  /* 10cd8f60 pop ebp */
  EBP = (pop32());
  /* 10cd8f61 ret  */
  ESPCHK(0x10cd8f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f70 @ 0x10cd8f70 (664 bytes, 265 insns) [15 switch table(s)] */
void f_10cd8f70(void) {
  FTRACE(0x10cd8f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd8f70 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd8f71 mov ebp, esp */
  EBP = (ESP);
  /* 10cd8f73 push edi */
  push32((uint32_t)(EDI));
  /* 10cd8f74 push esi */
  push32((uint32_t)(ESI));
  /* 10cd8f75 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd8f78 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd8f7b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd8f7e mov eax, ecx */
  EAX = (ECX);
  /* 10cd8f80 mov edx, ecx */
  EDX = (ECX);
  /* 10cd8f82 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd8f84 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd8f86 jbe 0x10cd8f90 */
  if ((C.cf||C.zf)) goto L_10cd8f90;
  /* 10cd8f88 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd8f8a jb 0x10cd9108 */
  if (C.cf) goto L_10cd9108;
L_10cd8f90:;
  /* 10cd8f90 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10cd8f96 jne 0x10cd8fac */
  if (!C.zf) goto L_10cd8fac;
  /* 10cd8f98 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10cd8f9b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10cd8f9e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd8fa1 jb 0x10cd8fcc */
  if (C.cf) goto L_10cd8fcc;
  /* 10cd8fa3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10cd8fa5 jmp dword ptr [edx*4 + 0x10cd90b8] */
  switch (EDX) {
    case 0: goto L_10cd90c8;
    case 1: goto L_10cd90d0;
    case 2: goto L_10cd90dc;
    case 3: goto L_10cd90f0;
    default: x86_unimpl("switch@0x10cd8fa5 out of table"); return;
  }
L_10cd8fac:;
  /* 10cd8fac mov eax, edi */
  EAX = (EDI);
  /* 10cd8fae mov edx, 3 */
  EDX = (0x3u);
  /* 10cd8fb3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd8fb6 jb 0x10cd8fc4 */
  if (C.cf) goto L_10cd8fc4;
  /* 10cd8fb8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10cd8fbb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd8fbd jmp dword ptr [eax*4 + 0x10cd8fd0] */
  switch (EAX) {
    case 1: goto L_10cd8fe0;
    case 2: goto L_10cd900c;
    case 3: goto L_10cd9030;
    default: x86_unimpl("switch@0x10cd8fbd out of table"); return;
  }
L_10cd8fc4:;
  /* 10cd8fc4 jmp dword ptr [ecx*4 + 0x10cd90c8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10cd90c8)))); return;
  /* 10cd8fcb nop  */
  /* nop */
L_10cd8fcc:;
  /* 10cd8fcc jmp dword ptr [ecx*4 + 0x10cd904c] */
  switch (ECX) {
    case 0: goto L_10cd90af;
    case 1: goto L_10cd909c;
    case 2: goto L_10cd9094;
    case 3: goto L_10cd908c;
    case 4: goto L_10cd9084;
    case 5: goto L_10cd907c;
    case 6: goto L_10cd9074;
    case 7: goto L_10cd906c;
    default: x86_unimpl("switch@0x10cd8fcc out of table"); return;
  }
  /* 10cd8fd3 nop  */
  /* nop */
L_10cd8fe0:;
  /* 10cd8fe0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd8fe2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10cd8fe4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10cd8fe6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10cd8fe9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10cd8fec mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10cd8fef shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10cd8ff2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10cd8ff5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd8ff8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd8ffb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd8ffe jb 0x10cd8fcc */
  if (C.cf) goto L_10cd8fcc;
  /* 10cd9000 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10cd9002 jmp dword ptr [edx*4 + 0x10cd90b8] */
  switch (EDX) {
    case 0: goto L_10cd90c8;
    case 1: goto L_10cd90d0;
    case 2: goto L_10cd90dc;
    case 3: goto L_10cd90f0;
    default: x86_unimpl("switch@0x10cd9002 out of table"); return;
  }
  /* 10cd9009 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10cd900c:;
  /* 10cd900c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd900e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10cd9010 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10cd9012 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10cd9015 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10cd9018 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10cd901b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd901e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd9021 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd9024 jb 0x10cd8fcc */
  if (C.cf) goto L_10cd8fcc;
  /* 10cd9026 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10cd9028 jmp dword ptr [edx*4 + 0x10cd90b8] */
  switch (EDX) {
    case 0: goto L_10cd90c8;
    case 1: goto L_10cd90d0;
    case 2: goto L_10cd90dc;
    case 3: goto L_10cd90f0;
    default: x86_unimpl("switch@0x10cd9028 out of table"); return;
  }
  /* 10cd902f nop  */
  /* nop */
L_10cd9030:;
  /* 10cd9030 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd9032 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10cd9034 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10cd9036 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10cd9037 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10cd903a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10cd903b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd903e jb 0x10cd8fcc */
  if (C.cf) goto L_10cd8fcc;
  /* 10cd9040 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10cd9042 jmp dword ptr [edx*4 + 0x10cd90b8] */
  switch (EDX) {
    case 0: goto L_10cd90c8;
    case 1: goto L_10cd90d0;
    case 2: goto L_10cd90dc;
    case 3: goto L_10cd90f0;
    default: x86_unimpl("switch@0x10cd9042 out of table"); return;
  }
  /* 10cd9049 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10cd906c:;
  /* 10cd906c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10cd9070 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10cd9074:;
  /* 10cd9074 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10cd9078 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10cd907c:;
  /* 10cd907c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10cd9080 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10cd9084:;
  /* 10cd9084 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10cd9088 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10cd908c:;
  /* 10cd908c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10cd9090 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10cd9094:;
  /* 10cd9094 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10cd9098 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10cd909c:;
  /* 10cd909c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10cd90a0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10cd90a4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10cd90ab add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd90ad add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10cd90af:;
  /* 10cd90af jmp dword ptr [edx*4 + 0x10cd90b8] */
  switch (EDX) {
    case 0: goto L_10cd90c8;
    case 1: goto L_10cd90d0;
    case 2: goto L_10cd90dc;
    case 3: goto L_10cd90f0;
    default: x86_unimpl("switch@0x10cd90af out of table"); return;
  }
  /* 10cd90b6 mov edi, edi */
  EDI = (EDI);
L_10cd90c8:;
  /* 10cd90c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd90cb pop esi */
  ESI = (pop32());
  /* 10cd90cc pop edi */
  EDI = (pop32());
  /* 10cd90cd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10cd90ce ret  */
  ESPCHK(0x10cd8f70u, _esp0);
  ESP += 4; return;
  /* 10cd90cf nop  */
  /* nop */
L_10cd90d0:;
  /* 10cd90d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10cd90d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10cd90d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd90d7 pop esi */
  ESI = (pop32());
  /* 10cd90d8 pop edi */
  EDI = (pop32());
  /* 10cd90d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10cd90da ret  */
  ESPCHK(0x10cd8f70u, _esp0);
  ESP += 4; return;
  /* 10cd90db nop  */
  /* nop */
L_10cd90dc:;
  /* 10cd90dc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10cd90de mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10cd90e0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10cd90e3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10cd90e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd90e9 pop esi */
  ESI = (pop32());
  /* 10cd90ea pop edi */
  EDI = (pop32());
  /* 10cd90eb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10cd90ec ret  */
  ESPCHK(0x10cd8f70u, _esp0);
  ESP += 4; return;
  /* 10cd90ed lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10cd90f0:;
  /* 10cd90f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10cd90f2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10cd90f4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10cd90f7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10cd90fa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10cd90fd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10cd9100 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd9103 pop esi */
  ESI = (pop32());
  /* 10cd9104 pop edi */
  EDI = (pop32());
  /* 10cd9105 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10cd9106 ret  */
  ESPCHK(0x10cd8f70u, _esp0);
  ESP += 4; return;
  /* 10cd9107 nop  */
  /* nop */
L_10cd9108:;
  /* 10cd9108 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10cd910c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10cd9110 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10cd9116 jne 0x10cd913c */
  if (!C.zf) goto L_10cd913c;
  /* 10cd9118 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10cd911b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10cd911e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd9121 jb 0x10cd9130 */
  if (C.cf) goto L_10cd9130;
  /* 10cd9123 std  */
  C.df=1;
  /* 10cd9124 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10cd9126 cld  */
  C.df=0;
  /* 10cd9127 jmp dword ptr [edx*4 + 0x10cd9250] */
  switch (EDX) {
    case 0: goto L_10cd9260;
    case 1: goto L_10cd9268;
    case 2: goto L_10cd9278;
    case 3: goto L_10cd928c;
    default: x86_unimpl("switch@0x10cd9127 out of table"); return;
  }
  /* 10cd912e mov edi, edi */
  EDI = (EDI);
L_10cd9130:;
  /* 10cd9130 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10cd9132 jmp dword ptr [ecx*4 + 0x10cd9200] */
  switch (ECX) {
    case 0: goto L_10cd9247;
    default: x86_unimpl("switch@0x10cd9132 out of table"); return;
  }
  /* 10cd9139 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10cd913c:;
  /* 10cd913c mov eax, edi */
  EAX = (EDI);
  /* 10cd913e mov edx, 3 */
  EDX = (0x3u);
  /* 10cd9143 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd9146 jb 0x10cd9154 */
  if (C.cf) goto L_10cd9154;
  /* 10cd9148 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10cd914b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd914d jmp dword ptr [eax*4 + 0x10cd9158] */
  switch (EAX) {
    case 1: goto L_10cd9168;
    case 2: goto L_10cd9188;
    case 3: goto L_10cd91b0;
    default: x86_unimpl("switch@0x10cd914d out of table"); return;
  }
L_10cd9154:;
  /* 10cd9154 jmp dword ptr [ecx*4 + 0x10cd9250] */
  switch (ECX) {
    case 0: goto L_10cd9260;
    case 1: goto L_10cd9268;
    case 2: goto L_10cd9278;
    case 3: goto L_10cd928c;
    default: x86_unimpl("switch@0x10cd9154 out of table"); return;
  }
  /* 10cd915b nop  */
  /* nop */
L_10cd9168:;
  /* 10cd9168 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10cd916b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd916d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10cd9170 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10cd9171 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10cd9174 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10cd9175 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd9178 jb 0x10cd9130 */
  if (C.cf) goto L_10cd9130;
  /* 10cd917a std  */
  C.df=1;
  /* 10cd917b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10cd917d cld  */
  C.df=0;
  /* 10cd917e jmp dword ptr [edx*4 + 0x10cd9250] */
  switch (EDX) {
    case 0: goto L_10cd9260;
    case 1: goto L_10cd9268;
    case 2: goto L_10cd9278;
    case 3: goto L_10cd928c;
    default: x86_unimpl("switch@0x10cd917e out of table"); return;
  }
  /* 10cd9185 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10cd9188:;
  /* 10cd9188 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10cd918b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd918d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10cd9190 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10cd9193 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10cd9196 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10cd9199 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd919c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd919f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd91a2 jb 0x10cd9130 */
  if (C.cf) goto L_10cd9130;
  /* 10cd91a4 std  */
  C.df=1;
  /* 10cd91a5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10cd91a7 cld  */
  C.df=0;
  /* 10cd91a8 jmp dword ptr [edx*4 + 0x10cd9250] */
  switch (EDX) {
    case 0: goto L_10cd9260;
    case 1: goto L_10cd9268;
    case 2: goto L_10cd9278;
    case 3: goto L_10cd928c;
    default: x86_unimpl("switch@0x10cd91a8 out of table"); return;
  }
  /* 10cd91af nop  */
  /* nop */
L_10cd91b0:;
  /* 10cd91b0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10cd91b3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd91b5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10cd91b8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10cd91bb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10cd91be mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10cd91c1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10cd91c4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10cd91c7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd91ca sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd91cd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd91d0 jb 0x10cd9130 */
  if (C.cf) goto L_10cd9130;
  /* 10cd91d6 std  */
  C.df=1;
  /* 10cd91d7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10cd91d9 cld  */
  C.df=0;
  /* 10cd91da jmp dword ptr [edx*4 + 0x10cd9250] */
  switch (EDX) {
    case 0: goto L_10cd9260;
    case 1: goto L_10cd9268;
    case 2: goto L_10cd9278;
    case 3: goto L_10cd928c;
    default: x86_unimpl("switch@0x10cd91da out of table"); return;
  }
  /* 10cd91e1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10cd91e4 add al, 0x92 */
  { uint32_t _a=(AL),_b=(0x92u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10cd91e6 int 0x10 */
  x86_unimpl("int @ 0x10cd91e6");
  /* 10cd91e8 or al, 0x92 */
  { uint32_t _r=(AL)|(0x92u); AL = (_r); fl_logic(_r,8); }
  /* 10cd91ea int 0x10 */
  x86_unimpl("int @ 0x10cd91ea");
  /* 10cd91ec adc al, 0x92 */
  { uint32_t _a=(AL),_b=(0x92u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10cd91ee int 0x10 */
  x86_unimpl("int @ 0x10cd91ee");
  /* 10cd91f0 sbb al, 0x92 */
  { uint32_t _a=(AL),_b=(0x92u),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10cd91f2 int 0x10 */
  x86_unimpl("int @ 0x10cd91f2");
  /* 10cd91f4 and al, 0x92 */
  { uint32_t _r=(AL)&(0x92u); AL = (_r); fl_logic(_r,8); }
  /* 10cd91f6 int 0x10 */
  x86_unimpl("int @ 0x10cd91f6");
  /* 10cd91f8 sub al, 0x92 */
  { uint32_t _a=(AL),_b=(0x92u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10cd91fa int 0x10 */
  x86_unimpl("int @ 0x10cd91fa");
  /* 10cd91fc xor al, 0x92 */
  { uint32_t _r=(AL)^(0x92u); AL = (_r); fl_logic(_r,8); }
  /* 10cd91fe int 0x10 */
  x86_unimpl("int @ 0x10cd91fe");
  /* 10cd9204 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10cd9208 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10cd920c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10cd9210 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10cd9214 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10cd9218 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10cd921c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10cd9220 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10cd9224 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10cd9228 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10cd922c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10cd9230 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10cd9234 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10cd9238 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10cd923c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10cd9243 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd9245 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10cd9247:;
  /* 10cd9247 jmp dword ptr [edx*4 + 0x10cd9250] */
  switch (EDX) {
    case 0: goto L_10cd9260;
    case 1: goto L_10cd9268;
    case 2: goto L_10cd9278;
    case 3: goto L_10cd928c;
    default: x86_unimpl("switch@0x10cd9247 out of table"); return;
  }
  /* 10cd924e mov edi, edi */
  EDI = (EDI);
L_10cd9260:;
  /* 10cd9260 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd9263 pop esi */
  ESI = (pop32());
  /* 10cd9264 pop edi */
  EDI = (pop32());
  /* 10cd9265 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10cd9266 ret  */
  ESPCHK(0x10cd8f70u, _esp0);
  ESP += 4; return;
  /* 10cd9267 nop  */
  /* nop */
L_10cd9268:;
  /* 10cd9268 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10cd926b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10cd926e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd9271 pop esi */
  ESI = (pop32());
  /* 10cd9272 pop edi */
  EDI = (pop32());
  /* 10cd9273 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10cd9274 ret  */
  ESPCHK(0x10cd8f70u, _esp0);
  ESP += 4; return;
  /* 10cd9275 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10cd9278:;
  /* 10cd9278 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10cd927b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10cd927e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10cd9281 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10cd9284 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd9287 pop esi */
  ESI = (pop32());
  /* 10cd9288 pop edi */
  EDI = (pop32());
  /* 10cd9289 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10cd928a ret  */
  ESPCHK(0x10cd8f70u, _esp0);
  ESP += 4; return;
  /* 10cd928b nop  */
  /* nop */
L_10cd928c:;
  /* 10cd928c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10cd928f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10cd9292 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10cd9295 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10cd9298 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10cd929b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10cd929e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd92a1 pop esi */
  ESI = (pop32());
  /* 10cd92a2 pop edi */
  EDI = (pop32());
  /* 10cd92a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10cd92a4 ret  */
  ESPCHK(0x10cd8f70u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x10cd92b0 (104 bytes, 43 insns) */
void f_10cd92b0(void) {
  FTRACE(0x10cd92b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd92b0 push ebx */
  push32((uint32_t)(EBX));
  /* 10cd92b1 push esi */
  push32((uint32_t)(ESI));
  /* 10cd92b2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10cd92b6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd92b8 jne 0x10cd92d2 */
  if (!C.zf) goto L_10cd92d2;
  /* 10cd92ba mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 10cd92be mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10cd92c2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd92c4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10cd92c6 mov ebx, eax */
  EBX = (EAX);
  /* 10cd92c8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10cd92cc div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10cd92ce mov edx, ebx */
  EDX = (EBX);
  /* 10cd92d0 jmp 0x10cd9313 */
  goto L_10cd9313;
L_10cd92d2:;
  /* 10cd92d2 mov ecx, eax */
  ECX = (EAX);
  /* 10cd92d4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10cd92d8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 10cd92dc mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_10cd92e0:;
  /* 10cd92e0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10cd92e2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10cd92e4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10cd92e6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10cd92e8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd92ea jne 0x10cd92e0 */
  if (!C.zf) goto L_10cd92e0;
  /* 10cd92ec div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10cd92ee mov esi, eax */
  ESI = (EAX);
  /* 10cd92f0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10cd92f4 mov ecx, eax */
  ECX = (EAX);
  /* 10cd92f6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10cd92fa mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10cd92fc add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd92fe jb 0x10cd930e */
  if (C.cf) goto L_10cd930e;
  /* 10cd9300 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd9304 ja 0x10cd930e */
  if ((!C.cf&&!C.zf)) goto L_10cd930e;
  /* 10cd9306 jb 0x10cd930f */
  if (C.cf) goto L_10cd930f;
  /* 10cd9308 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd930c jbe 0x10cd930f */
  if ((C.cf||C.zf)) goto L_10cd930f;
L_10cd930e:;
  /* 10cd930e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_10cd930f:;
  /* 10cd930f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd9311 mov eax, esi */
  EAX = (ESI);
L_10cd9313:;
  /* 10cd9313 pop esi */
  ESI = (pop32());
  /* 10cd9314 pop ebx */
  EBX = (pop32());
  /* 10cd9315 ret 0x10 */
  ESPCHK(0x10cd92b0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x10cd9320 (117 bytes, 44 insns) */
void f_10cd9320(void) {
  FTRACE(0x10cd9320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd9320 push ebx */
  push32((uint32_t)(EBX));
  /* 10cd9321 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10cd9325 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd9327 jne 0x10cd9341 */
  if (!C.zf) goto L_10cd9341;
  /* 10cd9329 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10cd932d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10cd9331 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd9333 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10cd9335 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10cd9339 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10cd933b mov eax, edx */
  EAX = (EDX);
  /* 10cd933d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd933f jmp 0x10cd9391 */
  goto L_10cd9391;
L_10cd9341:;
  /* 10cd9341 mov ecx, eax */
  ECX = (EAX);
  /* 10cd9343 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 10cd9347 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10cd934b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_10cd934f:;
  /* 10cd934f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10cd9351 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10cd9353 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10cd9355 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10cd9357 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd9359 jne 0x10cd934f */
  if (!C.zf) goto L_10cd934f;
  /* 10cd935b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10cd935d mov ecx, eax */
  ECX = (EAX);
  /* 10cd935f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10cd9363 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 10cd9364 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10cd9368 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd936a jb 0x10cd937a */
  if (C.cf) goto L_10cd937a;
  /* 10cd936c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd9370 ja 0x10cd937a */
  if ((!C.cf&&!C.zf)) goto L_10cd937a;
  /* 10cd9372 jb 0x10cd9382 */
  if (C.cf) goto L_10cd9382;
  /* 10cd9374 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd9378 jbe 0x10cd9382 */
  if ((C.cf||C.zf)) goto L_10cd9382;
L_10cd937a:;
  /* 10cd937a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd937e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10cd9382:;
  /* 10cd9382 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd9386 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd938a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10cd938c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10cd938e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10cd9391:;
  /* 10cd9391 pop ebx */
  EBX = (pop32());
  /* 10cd9392 ret 0x10 */
  ESPCHK(0x10cd9320u, _esp0);
  ESP += 20; return;
}

/* FUN_100093a0 @ 0x10cd93a0 (628 bytes, 214 insns) */
void f_10cd93a0(void) {
  FTRACE(0x10cd93a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd93a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd93a1 mov ebp, esp */
  EBP = (ESP);
  /* 10cd93a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd93a6 push ebx */
  push32((uint32_t)(EBX));
  /* 10cd93a7 push esi */
  push32((uint32_t)(ESI));
  /* 10cd93a8 push edi */
  push32((uint32_t)(EDI));
L_10cd93a9:;
  /* 10cd93a9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd93ad jne 0x10cd93cd */
  if (!C.zf) goto L_10cd93cd;
  /* 10cd93af push 0x10cf9e5c */
  push32((uint32_t)(0x10cf9e5cu));
  /* 10cd93b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd93b6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 10cd93b8 push 0x10cf9e50 */
  push32((uint32_t)(0x10cf9e50u));
  /* 10cd93bd push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd93bf call 0x10cd1750 */
  push32(0x10cd93c4u); f_10cd1750();
  /* 10cd93c4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd93c7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd93ca jne 0x10cd93cd */
  if (!C.zf) goto L_10cd93cd;
  /* 10cd93cc int3  */
  x86_unimpl("int3 @ 0x10cd93cc");
L_10cd93cd:;
  /* 10cd93cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd93cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd93d1 jne 0x10cd93a9 */
  if (!C.zf) goto L_10cd93a9;
  /* 10cd93d3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd93d6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10cd93d9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd93dc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10cd93df mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10cd93e2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd93e5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10cd93e8 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 10cd93ee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd93f0 je 0x10cd93ff */
  if (C.zf) goto L_10cd93ff;
  /* 10cd93f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd93f5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10cd93f8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10cd93fb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd93fd je 0x10cd9415 */
  if (C.zf) goto L_10cd9415;
L_10cd93ff:;
  /* 10cd93ff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd9402 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10cd9405 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10cd9407 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd940a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10cd940d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cd9410 jmp 0x10cd960d */
  goto L_10cd960d;
L_10cd9415:;
  /* 10cd9415 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd9418 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10cd941b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10cd941e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd9420 je 0x10cd946c */
  if (C.zf) goto L_10cd946c;
  /* 10cd9422 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd9425 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10cd942c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd942f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10cd9432 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10cd9435 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd9437 je 0x10cd9455 */
  if (C.zf) goto L_10cd9455;
  /* 10cd9439 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd943c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd943f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10cd9442 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10cd9444 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd9447 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10cd944a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 10cd944d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd9450 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10cd9453 jmp 0x10cd946c */
  goto L_10cd946c;
L_10cd9455:;
  /* 10cd9455 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd9458 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10cd945b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10cd945e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd9461 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10cd9464 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cd9467 jmp 0x10cd960d */
  goto L_10cd960d;
L_10cd946c:;
  /* 10cd946c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd946f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10cd9472 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10cd9475 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd9478 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10cd947b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd947e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10cd9481 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 10cd9484 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd9487 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10cd948a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd948d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10cd9494 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10cd949b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd949e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10cd94a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd94a4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10cd94a7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 10cd94ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd94af jne 0x10cd94df */
  if (!C.zf) goto L_10cd94df;
  /* 10cd94b1 cmp dword ptr [ebp - 8], 0x10cfd140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10cfd140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd94b8 je 0x10cd94c3 */
  if (C.zf) goto L_10cd94c3;
  /* 10cd94ba cmp dword ptr [ebp - 8], 0x10cfd160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10cfd160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd94c1 jne 0x10cd94d3 */
  if (!C.zf) goto L_10cd94d3;
L_10cd94c3:;
  /* 10cd94c3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd94c6 push edx */
  push32((uint32_t)(EDX));
  /* 10cd94c7 call 0x10cdb310 */
  push32(0x10cd94ccu); f_10cdb310();
  /* 10cd94cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd94cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd94d1 jne 0x10cd94df */
  if (!C.zf) goto L_10cd94df;
L_10cd94d3:;
  /* 10cd94d3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd94d6 push eax */
  push32((uint32_t)(EAX));
  /* 10cd94d7 call 0x10cdb240 */
  push32(0x10cd94dcu); f_10cdb240();
  /* 10cd94dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd94df:;
  /* 10cd94df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd94e2 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10cd94e5 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 10cd94eb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd94ed je 0x10cd95cb */
  if (C.zf) goto L_10cd95cb;
L_10cd94f3:;
  /* 10cd94f3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd94f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd94f9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10cd94fb sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd94fe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd9500 jge 0x10cd9523 */
  if ((C.sf==C.of)) goto L_10cd9523;
  /* 10cd9502 push 0x10cf9e10 */
  push32((uint32_t)(0x10cf9e10u));
  /* 10cd9507 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd9509 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10cd950e push 0x10cf9e50 */
  push32((uint32_t)(0x10cf9e50u));
  /* 10cd9513 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd9515 call 0x10cd1750 */
  push32(0x10cd951au); f_10cd1750();
  /* 10cd951a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd951d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd9520 jne 0x10cd9523 */
  if (!C.zf) goto L_10cd9523;
  /* 10cd9522 int3  */
  x86_unimpl("int3 @ 0x10cd9522");
L_10cd9523:;
  /* 10cd9523 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd9525 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd9527 jne 0x10cd94f3 */
  if (!C.zf) goto L_10cd94f3;
  /* 10cd9529 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd952c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd952f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10cd9531 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd9534 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd9537 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd953a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10cd953d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd9540 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd9543 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10cd9545 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd9548 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10cd954b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd954e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd9551 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10cd9554 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd9558 jle 0x10cd9576 */
  if ((C.zf||C.sf!=C.of)) goto L_10cd9576;
  /* 10cd955a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd955d push ecx */
  push32((uint32_t)(ECX));
  /* 10cd955e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd9561 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10cd9564 push eax */
  push32((uint32_t)(EAX));
  /* 10cd9565 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd9568 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd9569 call 0x10cdaf30 */
  push32(0x10cd956eu); f_10cdaf30();
  /* 10cd956e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd9571 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10cd9574 jmp 0x10cd95be */
  goto L_10cd95be;
L_10cd9576:;
  /* 10cd9576 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd957a je 0x10cd9599 */
  if (C.zf) goto L_10cd9599;
  /* 10cd957c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd957f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10cd9582 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd9585 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10cd9588 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cd958b mov ecx, dword ptr [edx*4 + 0x10cffde0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10cffde0)));
  /* 10cd9592 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd9594 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10cd9597 jmp 0x10cd95a0 */
  goto L_10cd95a0;
L_10cd9599:;
  /* 10cd9599 mov dword ptr [ebp - 0x14], 0x10cfca60 */
  w32((uint32_t)(EBP + -0x14), (0x10cfca60u));
L_10cd95a0:;
  /* 10cd95a0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd95a3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 10cd95a7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10cd95aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd95ac je 0x10cd95be */
  if (C.zf) goto L_10cd95be;
  /* 10cd95ae push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd95b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd95b2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd95b5 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd95b6 call 0x10cdade0 */
  push32(0x10cd95bbu); f_10cdade0();
  /* 10cd95bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd95be:;
  /* 10cd95be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd95c1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10cd95c4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10cd95c7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10cd95c9 jmp 0x10cd95e9 */
  goto L_10cd95e9;
L_10cd95cb:;
  /* 10cd95cb mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10cd95d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd95d5 push edx */
  push32((uint32_t)(EDX));
  /* 10cd95d6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10cd95d9 push eax */
  push32((uint32_t)(EAX));
  /* 10cd95da mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd95dd push ecx */
  push32((uint32_t)(ECX));
  /* 10cd95de call 0x10cdaf30 */
  push32(0x10cd95e3u); f_10cdaf30();
  /* 10cd95e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd95e6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10cd95e9:;
  /* 10cd95e9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd95ec cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd95ef je 0x10cd9605 */
  if (C.zf) goto L_10cd9605;
  /* 10cd95f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd95f4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10cd95f7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10cd95fa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd95fd mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10cd9600 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cd9603 jmp 0x10cd960d */
  goto L_10cd960d;
L_10cd9605:;
  /* 10cd9605 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd9608 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_10cd960d:;
  /* 10cd960d pop edi */
  EDI = (pop32());
  /* 10cd960e pop esi */
  ESI = (pop32());
  /* 10cd960f pop ebx */
  EBX = (pop32());
  /* 10cd9610 mov esp, ebp */
  ESP = (EBP);
  /* 10cd9612 pop ebp */
  EBP = (pop32());
  /* 10cd9613 ret  */
  ESPCHK(0x10cd93a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009620 @ 0x10cd9620 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_10cd9620(void) {
  FTRACE(0x10cd9620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd9620 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd9621 mov ebp, esp */
  EBP = (ESP);
  /* 10cd9623 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd9629 push ebx */
  push32((uint32_t)(EBX));
  /* 10cd962a push esi */
  push32((uint32_t)(ESI));
  /* 10cd962b push edi */
  push32((uint32_t)(EDI));
  /* 10cd962c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10cd9633 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 10cd963d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10cd9644:;
  /* 10cd9644 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd9647 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10cd9649 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 10cd964c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10cd9650 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd9653 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd9656 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10cd9659 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd965b je 0x10cda237 */
  if (C.zf) goto L_10cda237;
  /* 10cd9661 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd9668 jl 0x10cda237 */
  if ((C.sf!=C.of)) goto L_10cda237;
  /* 10cd966e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10cd9672 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd9675 jl 0x10cd9696 */
  if ((C.sf!=C.of)) goto L_10cd9696;
  /* 10cd9677 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10cd967b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd967e jg 0x10cd9696 */
  if ((!C.zf&&C.sf==C.of)) goto L_10cd9696;
  /* 10cd9680 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10cd9684 movsx ecx, byte ptr [eax + 0x10cf9e48] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x10cf9e48))));
  /* 10cd968b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 10cd968e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 10cd9694 jmp 0x10cd96a0 */
  goto L_10cd96a0;
L_10cd9696:;
  /* 10cd9696 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_10cd96a0:;
  /* 10cd96a0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 10cd96a6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10cd96a9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd96ac mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd96af movsx edx, byte ptr [ecx + eax*8 + 0x10cf9e68] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x10cf9e68))));
  /* 10cd96b7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10cd96ba mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10cd96bd mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd96c0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 10cd96c6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd96cd ja 0x10cda232 */
  if ((!C.cf&&!C.zf)) goto L_10cda232;
  /* 10cd96d3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 10cd96d9 jmp dword ptr [ecx*4 + 0x10cda244] */
  switch (ECX) {
    case 0: goto L_10cd96e0;
    case 1: goto L_10cd977a;
    case 2: goto L_10cd97bc;
    case 3: goto L_10cd982b;
    case 4: goto L_10cd9883;
    case 5: goto L_10cd9892;
    case 6: goto L_10cd98de;
    case 7: goto L_10cd9971;
    case 8: goto L_10cd9808;
    case 9: goto L_10cd9813;
    case 10: goto L_10cd97fe;
    case 11: goto L_10cd97f3;
    case 12: goto L_10cd981e;
    case 13: goto L_10cd9826;
    default: x86_unimpl("switch@0x10cd96d9 out of table"); return;
  }
L_10cd96e0:;
  /* 10cd96e0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10cd96e7 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10cd96ea and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10cd96f0 mov eax, dword ptr [0x10cfcc98] */
  EAX = (r32((uint32_t)(0x10cfcc98)));
  /* 10cd96f5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd96f7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10cd96fb and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10cd9701 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd9703 je 0x10cd975d */
  if (C.zf) goto L_10cd975d;
  /* 10cd9705 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 10cd970b push edx */
  push32((uint32_t)(EDX));
  /* 10cd970c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd970f push eax */
  push32((uint32_t)(EAX));
  /* 10cd9710 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10cd9714 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd9715 call 0x10cda350 */
  push32(0x10cd971au); f_10cda350();
  /* 10cd971a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd971d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd9720 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10cd9722 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 10cd9725 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd9728 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd972b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10cd972e:;
  /* 10cd972e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10cd9732 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd9734 jne 0x10cd9757 */
  if (!C.zf) goto L_10cd9757;
  /* 10cd9736 push 0x10cf9ee8 */
  push32((uint32_t)(0x10cf9ee8u));
  /* 10cd973b push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd973d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 10cd9742 push 0x10cf9edc */
  push32((uint32_t)(0x10cf9edcu));
  /* 10cd9747 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd9749 call 0x10cd1750 */
  push32(0x10cd974eu); f_10cd1750();
  /* 10cd974e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd9751 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd9754 jne 0x10cd9757 */
  if (!C.zf) goto L_10cd9757;
  /* 10cd9756 int3  */
  x86_unimpl("int3 @ 0x10cd9756");
L_10cd9757:;
  /* 10cd9757 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd9759 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd975b jne 0x10cd972e */
  if (!C.zf) goto L_10cd972e;
L_10cd975d:;
  /* 10cd975d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10cd9763 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd9764 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd9767 push edx */
  push32((uint32_t)(EDX));
  /* 10cd9768 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10cd976c push eax */
  push32((uint32_t)(EAX));
  /* 10cd976d call 0x10cda350 */
  push32(0x10cd9772u); f_10cda350();
  /* 10cd9772 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd9775 jmp 0x10cda232 */
  goto L_10cda232;
L_10cd977a:;
  /* 10cd977a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10cd9781 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd9784 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 10cd978a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 10cd9790 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 10cd9796 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 10cd979c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10cd979f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10cd97a6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 10cd97b0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10cd97b7 jmp 0x10cda232 */
  goto L_10cda232;
L_10cd97bc:;
  /* 10cd97bc movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10cd97c0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 10cd97c6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 10cd97cc sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd97cf mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 10cd97d5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd97dc ja 0x10cd9826 */
  if ((!C.cf&&!C.zf)) goto L_10cd9826;
  /* 10cd97de mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 10cd97e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd97e6 mov al, byte ptr [ecx + 0x10cda27c] */
  AL = (r8((uint32_t)(ECX + 0x10cda27c)));
  /* 10cd97ec jmp dword ptr [eax*4 + 0x10cda264] */
  switch (EAX) {
    case 0: goto L_10cd9808;
    case 1: goto L_10cd9813;
    case 2: goto L_10cd97fe;
    case 3: goto L_10cd97f3;
    case 4: goto L_10cd981e;
    case 5: goto L_10cd9826;
    default: x86_unimpl("switch@0x10cd97ec out of table"); return;
  }
L_10cd97f3:;
  /* 10cd97f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd97f6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10cd97f9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10cd97fc jmp 0x10cd9826 */
  goto L_10cd9826;
L_10cd97fe:;
  /* 10cd97fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd9801 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10cd9803 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd9806 jmp 0x10cd9826 */
  goto L_10cd9826;
L_10cd9808:;
  /* 10cd9808 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd980b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10cd980e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10cd9811 jmp 0x10cd9826 */
  goto L_10cd9826;
L_10cd9813:;
  /* 10cd9813 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd9816 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 10cd9819 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10cd981c jmp 0x10cd9826 */
  goto L_10cd9826;
L_10cd981e:;
  /* 10cd981e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd9821 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 10cd9823 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10cd9826:;
  /* 10cd9826 jmp 0x10cda232 */
  goto L_10cda232;
L_10cd982b:;
  /* 10cd982b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10cd982f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd9832 jne 0x10cd9867 */
  if (!C.zf) goto L_10cd9867;
  /* 10cd9834 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10cd9837 push edx */
  push32((uint32_t)(EDX));
  /* 10cd9838 call 0x10cda460 */
  push32(0x10cd983du); f_10cda460();
  /* 10cd983d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd9840 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 10cd9846 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd984d jge 0x10cd9865 */
  if ((C.sf==C.of)) goto L_10cd9865;
  /* 10cd984f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd9852 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10cd9854 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd9857 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 10cd985d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10cd985f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_10cd9865:;
  /* 10cd9865 jmp 0x10cd987e */
  goto L_10cd987e;
L_10cd9867:;
  /* 10cd9867 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 10cd986d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cd9870 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10cd9874 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 10cd9878 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_10cd987e:;
  /* 10cd987e jmp 0x10cda232 */
  goto L_10cda232;
L_10cd9883:;
  /* 10cd9883 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 10cd988d jmp 0x10cda232 */
  goto L_10cda232;
L_10cd9892:;
  /* 10cd9892 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10cd9896 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd9899 jne 0x10cd98c2 */
  if (!C.zf) goto L_10cd98c2;
  /* 10cd989b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10cd989e push eax */
  push32((uint32_t)(EAX));
  /* 10cd989f call 0x10cda460 */
  push32(0x10cd98a4u); f_10cda460();
  /* 10cd98a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd98a7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 10cd98ad cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd98b4 jge 0x10cd98c0 */
  if ((C.sf==C.of)) goto L_10cd98c0;
  /* 10cd98b6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_10cd98c0:;
  /* 10cd98c0 jmp 0x10cd98d9 */
  goto L_10cd98d9;
L_10cd98c2:;
  /* 10cd98c2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 10cd98c8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cd98cb movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10cd98cf lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10cd98d3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_10cd98d9:;
  /* 10cd98d9 jmp 0x10cda232 */
  goto L_10cda232;
L_10cd98de:;
  /* 10cd98de movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10cd98e2 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 10cd98e8 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10cd98ee sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd98f1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 10cd98f7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd98fe ja 0x10cd996c */
  if ((!C.cf&&!C.zf)) goto L_10cd996c;
  /* 10cd9900 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10cd9906 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd9908 mov al, byte ptr [ecx + 0x10cda2a1] */
  AL = (r8((uint32_t)(ECX + 0x10cda2a1)));
  /* 10cd990e jmp dword ptr [eax*4 + 0x10cda28d] */
  switch (EAX) {
    case 0: goto L_10cd9920;
    case 1: goto L_10cd9959;
    case 2: goto L_10cd9915;
    case 3: goto L_10cd9963;
    case 4: goto L_10cd996c;
    default: x86_unimpl("switch@0x10cd990e out of table"); return;
  }
L_10cd9915:;
  /* 10cd9915 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd9918 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 10cd991b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10cd991e jmp 0x10cd996c */
  goto L_10cd996c;
L_10cd9920:;
  /* 10cd9920 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd9923 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10cd9926 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd9929 jne 0x10cd994b */
  if (!C.zf) goto L_10cd994b;
  /* 10cd992b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd992e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10cd9932 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd9935 jne 0x10cd994b */
  if (!C.zf) goto L_10cd994b;
  /* 10cd9937 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd993a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd993d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10cd9940 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd9943 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10cd9946 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10cd9949 jmp 0x10cd9957 */
  goto L_10cd9957;
L_10cd994b:;
  /* 10cd994b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10cd9952 jmp 0x10cd96e0 */
  goto L_10cd96e0;
L_10cd9957:;
  /* 10cd9957 jmp 0x10cd996c */
  goto L_10cd996c;
L_10cd9959:;
  /* 10cd9959 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd995c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10cd995e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd9961 jmp 0x10cd996c */
  goto L_10cd996c;
L_10cd9963:;
  /* 10cd9963 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd9966 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10cd9969 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10cd996c:;
  /* 10cd996c jmp 0x10cda232 */
  goto L_10cda232;
L_10cd9971:;
  /* 10cd9971 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10cd9975 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 10cd997b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10cd9981 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd9984 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 10cd998a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd9991 ja 0x10cda057 */
  if ((!C.cf&&!C.zf)) goto L_10cda057;
  /* 10cd9997 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10cd999d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd999f mov cl, byte ptr [edx + 0x10cda30c] */
  CL = (r8((uint32_t)(EDX + 0x10cda30c)));
  /* 10cd99a5 jmp dword ptr [ecx*4 + 0x10cda2d0] */
  switch (ECX) {
    case 0: goto L_10cd99ac;
    case 1: goto L_10cd9c40;
    case 2: goto L_10cd9ad0;
    case 3: goto L_10cd9d79;
    case 4: goto L_10cd9a3b;
    case 5: goto L_10cd99c1;
    case 6: goto L_10cd9d4b;
    case 7: goto L_10cd9c50;
    case 8: goto L_10cd9bf5;
    case 9: goto L_10cd9dc5;
    case 10: goto L_10cd9d6f;
    case 11: goto L_10cd9ae6;
    case 12: goto L_10cd9d63;
    case 13: goto L_10cd9d85;
    case 14: goto L_10cda057;
    default: x86_unimpl("switch@0x10cd99a5 out of table"); return;
  }
L_10cd99ac:;
  /* 10cd99ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd99af and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 10cd99b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd99b6 jne 0x10cd99c1 */
  if (!C.zf) goto L_10cd99c1;
  /* 10cd99b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd99bb or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10cd99be mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10cd99c1:;
  /* 10cd99c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd99c4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 10cd99ca test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd99cc je 0x10cd9a07 */
  if (C.zf) goto L_10cd9a07;
  /* 10cd99ce lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10cd99d1 push eax */
  push32((uint32_t)(EAX));
  /* 10cd99d2 call 0x10cda4a0 */
  push32(0x10cd99d7u); f_10cda4a0();
  /* 10cd99d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd99da mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 10cd99de mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 10cd99e2 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd99e3 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10cd99e9 push edx */
  push32((uint32_t)(EDX));
  /* 10cd99ea call 0x10cdb580 */
  push32(0x10cd99efu); f_10cdb580();
  /* 10cd99ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd99f2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10cd99f5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd99f9 jge 0x10cd9a05 */
  if ((C.sf==C.of)) goto L_10cd9a05;
  /* 10cd99fb mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_10cd9a05:;
  /* 10cd9a05 jmp 0x10cd9a2d */
  goto L_10cd9a2d;
L_10cd9a07:;
  /* 10cd9a07 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10cd9a0a push eax */
  push32((uint32_t)(EAX));
  /* 10cd9a0b call 0x10cda460 */
  push32(0x10cd9a10u); f_10cda460();
  /* 10cd9a10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd9a13 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 10cd9a1a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 10cd9a20 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 10cd9a26 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_10cd9a2d:;
  /* 10cd9a2d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10cd9a33 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10cd9a36 jmp 0x10cda057 */
  goto L_10cda057;
L_10cd9a3b:;
  /* 10cd9a3b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10cd9a3e push eax */
  push32((uint32_t)(EAX));
  /* 10cd9a3f call 0x10cda460 */
  push32(0x10cd9a44u); f_10cda460();
  /* 10cd9a44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd9a47 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 10cd9a4d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd9a54 je 0x10cd9a62 */
  if (C.zf) goto L_10cd9a62;
  /* 10cd9a56 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10cd9a5c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd9a60 jne 0x10cd9a7c */
  if (!C.zf) goto L_10cd9a7c;
L_10cd9a62:;
  /* 10cd9a62 mov edx, dword ptr [0x10cfcfb0] */
  EDX = (r32((uint32_t)(0x10cfcfb0)));
  /* 10cd9a68 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10cd9a6b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cd9a6e push eax */
  push32((uint32_t)(EAX));
  /* 10cd9a6f call 0x10cd54c0 */
  push32(0x10cd9a74u); f_10cd54c0();
  /* 10cd9a74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd9a77 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10cd9a7a jmp 0x10cd9acb */
  goto L_10cd9acb;
L_10cd9a7c:;
  /* 10cd9a7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd9a7f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 10cd9a85 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd9a87 je 0x10cd9aac */
  if (C.zf) goto L_10cd9aac;
  /* 10cd9a89 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10cd9a8f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10cd9a92 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10cd9a95 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10cd9a9b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 10cd9a9e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10cd9aa0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10cd9aa3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10cd9aaa jmp 0x10cd9acb */
  goto L_10cd9acb;
L_10cd9aac:;
  /* 10cd9aac mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10cd9ab3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10cd9ab9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10cd9abc mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10cd9abf mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10cd9ac5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 10cd9ac8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10cd9acb:;
  /* 10cd9acb jmp 0x10cda057 */
  goto L_10cda057;
L_10cd9ad0:;
  /* 10cd9ad0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd9ad3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 10cd9ad9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd9adb jne 0x10cd9ae6 */
  if (!C.zf) goto L_10cd9ae6;
  /* 10cd9add mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd9ae0 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10cd9ae3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10cd9ae6:;
  /* 10cd9ae6 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd9aed jne 0x10cd9afb */
  if (!C.zf) goto L_10cd9afb;
  /* 10cd9aef mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 10cd9af9 jmp 0x10cd9b07 */
  goto L_10cd9b07;
L_10cd9afb:;
  /* 10cd9afb mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 10cd9b01 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_10cd9b07:;
  /* 10cd9b07 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 10cd9b0d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10cd9b13 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10cd9b16 push edx */
  push32((uint32_t)(EDX));
  /* 10cd9b17 call 0x10cda460 */
  push32(0x10cd9b1cu); f_10cda460();
  /* 10cd9b1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd9b1f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10cd9b22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd9b25 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 10cd9b2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd9b2c je 0x10cd9b96 */
  if (C.zf) goto L_10cd9b96;
  /* 10cd9b2e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd9b32 jne 0x10cd9b3d */
  if (!C.zf) goto L_10cd9b3d;
  /* 10cd9b34 mov ecx, dword ptr [0x10cfcfb4] */
  ECX = (r32((uint32_t)(0x10cfcfb4)));
  /* 10cd9b3a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10cd9b3d:;
  /* 10cd9b3d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10cd9b44 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cd9b47 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_10cd9b4d:;
  /* 10cd9b4d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10cd9b53 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 10cd9b59 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd9b5c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10cd9b62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd9b64 je 0x10cd9b86 */
  if (C.zf) goto L_10cd9b86;
  /* 10cd9b66 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 10cd9b6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd9b6e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10cd9b71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd9b73 je 0x10cd9b86 */
  if (C.zf) goto L_10cd9b86;
  /* 10cd9b75 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 10cd9b7b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd9b7e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 10cd9b84 jmp 0x10cd9b4d */
  goto L_10cd9b4d;
L_10cd9b86:;
  /* 10cd9b86 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 10cd9b8c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd9b8f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10cd9b91 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10cd9b94 jmp 0x10cd9bf0 */
  goto L_10cd9bf0;
L_10cd9b96:;
  /* 10cd9b96 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd9b9a jne 0x10cd9ba4 */
  if (!C.zf) goto L_10cd9ba4;
  /* 10cd9b9c mov eax, dword ptr [0x10cfcfb0] */
  EAX = (r32((uint32_t)(0x10cfcfb0)));
  /* 10cd9ba1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10cd9ba4:;
  /* 10cd9ba4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cd9ba7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_10cd9bad:;
  /* 10cd9bad mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 10cd9bb3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10cd9bb9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd9bbc mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 10cd9bc2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd9bc4 je 0x10cd9be4 */
  if (C.zf) goto L_10cd9be4;
  /* 10cd9bc6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 10cd9bcc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10cd9bcf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd9bd1 je 0x10cd9be4 */
  if (C.zf) goto L_10cd9be4;
  /* 10cd9bd3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 10cd9bd9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd9bdc mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 10cd9be2 jmp 0x10cd9bad */
  goto L_10cd9bad;
L_10cd9be4:;
  /* 10cd9be4 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 10cd9bea sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd9bed mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10cd9bf0:;
  /* 10cd9bf0 jmp 0x10cda057 */
  goto L_10cda057;
L_10cd9bf5:;
  /* 10cd9bf5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10cd9bf8 push edx */
  push32((uint32_t)(EDX));
  /* 10cd9bf9 call 0x10cda460 */
  push32(0x10cd9bfeu); f_10cda460();
  /* 10cd9bfe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd9c01 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 10cd9c07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd9c0a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10cd9c0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd9c0f je 0x10cd9c23 */
  if (C.zf) goto L_10cd9c23;
  /* 10cd9c11 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10cd9c17 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 10cd9c1e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 10cd9c21 jmp 0x10cd9c31 */
  goto L_10cd9c31;
L_10cd9c23:;
  /* 10cd9c23 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10cd9c29 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 10cd9c2f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_10cd9c31:;
  /* 10cd9c31 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 10cd9c3b jmp 0x10cda057 */
  goto L_10cda057;
L_10cd9c40:;
  /* 10cd9c40 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10cd9c47 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 10cd9c4a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 10cd9c4d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_10cd9c50:;
  /* 10cd9c50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd9c53 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10cd9c55 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd9c58 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 10cd9c5e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10cd9c61 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd9c68 jge 0x10cd9c76 */
  if ((C.sf==C.of)) goto L_10cd9c76;
  /* 10cd9c6a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 10cd9c74 jmp 0x10cd9c92 */
  goto L_10cd9c92;
L_10cd9c76:;
  /* 10cd9c76 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd9c7d jne 0x10cd9c92 */
  if (!C.zf) goto L_10cd9c92;
  /* 10cd9c7f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10cd9c83 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd9c86 jne 0x10cd9c92 */
  if (!C.zf) goto L_10cd9c92;
  /* 10cd9c88 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_10cd9c92:;
  /* 10cd9c92 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd9c95 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd9c98 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10cd9c9b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd9c9e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd9ca1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10cd9ca3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10cd9ca6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 10cd9cac mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 10cd9cb2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd9cb5 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd9cb6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 10cd9cbc push edx */
  push32((uint32_t)(EDX));
  /* 10cd9cbd movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10cd9cc1 push eax */
  push32((uint32_t)(EAX));
  /* 10cd9cc2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cd9cc5 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd9cc6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 10cd9ccc push edx */
  push32((uint32_t)(EDX));
  /* 10cd9ccd call dword ptr [0x10cfd3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cfd3a0))), 0x10cd9cd3u);
  /* 10cd9cd3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd9cd6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd9cd9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10cd9cde test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd9ce0 je 0x10cd9cf8 */
  if (C.zf) goto L_10cd9cf8;
  /* 10cd9ce2 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd9ce9 jne 0x10cd9cf8 */
  if (!C.zf) goto L_10cd9cf8;
  /* 10cd9ceb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cd9cee push ecx */
  push32((uint32_t)(ECX));
  /* 10cd9cef call dword ptr [0x10cfd3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cfd3ac))), 0x10cd9cf5u);
  /* 10cd9cf5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd9cf8:;
  /* 10cd9cf8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10cd9cfc cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd9cff jne 0x10cd9d1a */
  if (!C.zf) goto L_10cd9d1a;
  /* 10cd9d01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd9d04 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10cd9d09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd9d0b jne 0x10cd9d1a */
  if (!C.zf) goto L_10cd9d1a;
  /* 10cd9d0d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cd9d10 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd9d11 call dword ptr [0x10cfd3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cfd3a4))), 0x10cd9d17u);
  /* 10cd9d17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd9d1a:;
  /* 10cd9d1a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cd9d1d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10cd9d20 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd9d23 jne 0x10cd9d37 */
  if (!C.zf) goto L_10cd9d37;
  /* 10cd9d25 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd9d28 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10cd9d2b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10cd9d2e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cd9d31 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd9d34 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10cd9d37:;
  /* 10cd9d37 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cd9d3a push eax */
  push32((uint32_t)(EAX));
  /* 10cd9d3b call 0x10cd54c0 */
  push32(0x10cd9d40u); f_10cd54c0();
  /* 10cd9d40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd9d43 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10cd9d46 jmp 0x10cda057 */
  goto L_10cda057;
L_10cd9d4b:;
  /* 10cd9d4b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd9d4e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10cd9d51 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10cd9d54 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 10cd9d5e jmp 0x10cd9de5 */
  goto L_10cd9de5;
L_10cd9d63:;
  /* 10cd9d63 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 10cd9d6d jmp 0x10cd9de5 */
  goto L_10cd9de5;
L_10cd9d6f:;
  /* 10cd9d6f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_10cd9d79:;
  /* 10cd9d79 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 10cd9d83 jmp 0x10cd9d8f */
  goto L_10cd9d8f;
L_10cd9d85:;
  /* 10cd9d85 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_10cd9d8f:;
  /* 10cd9d8f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 10cd9d99 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd9d9c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 10cd9da2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd9da4 je 0x10cd9dc3 */
  if (C.zf) goto L_10cd9dc3;
  /* 10cd9da6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 10cd9dad mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 10cd9db3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd9db6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 10cd9dbc mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_10cd9dc3:;
  /* 10cd9dc3 jmp 0x10cd9de5 */
  goto L_10cd9de5;
L_10cd9dc5:;
  /* 10cd9dc5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 10cd9dcf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd9dd2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 10cd9dd8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd9dda je 0x10cd9de5 */
  if (C.zf) goto L_10cd9de5;
  /* 10cd9ddc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd9ddf or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10cd9de2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10cd9de5:;
  /* 10cd9de5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd9de8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10cd9ded test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd9def je 0x10cd9e0e */
  if (C.zf) goto L_10cd9e0e;
  /* 10cd9df1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10cd9df4 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd9df5 call 0x10cda480 */
  push32(0x10cd9dfau); f_10cda480();
  /* 10cd9dfa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd9dfd mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10cd9e03 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10cd9e09 jmp 0x10cd9e9f */
  goto L_10cd9e9f;
L_10cd9e0e:;
  /* 10cd9e0e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd9e11 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10cd9e14 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd9e16 je 0x10cd9e60 */
  if (C.zf) goto L_10cd9e60;
  /* 10cd9e18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd9e1b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10cd9e1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd9e20 je 0x10cd9e40 */
  if (C.zf) goto L_10cd9e40;
  /* 10cd9e22 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10cd9e25 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd9e26 call 0x10cda460 */
  push32(0x10cd9e2bu); f_10cda460();
  /* 10cd9e2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd9e2e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 10cd9e31 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10cd9e32 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10cd9e38 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10cd9e3e jmp 0x10cd9e5e */
  goto L_10cd9e5e;
L_10cd9e40:;
  /* 10cd9e40 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10cd9e43 push edx */
  push32((uint32_t)(EDX));
  /* 10cd9e44 call 0x10cda460 */
  push32(0x10cd9e49u); f_10cda460();
  /* 10cd9e49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd9e4c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cd9e51 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10cd9e52 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10cd9e58 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_10cd9e5e:;
  /* 10cd9e5e jmp 0x10cd9e9f */
  goto L_10cd9e9f;
L_10cd9e60:;
  /* 10cd9e60 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd9e63 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10cd9e66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd9e68 je 0x10cd9e85 */
  if (C.zf) goto L_10cd9e85;
  /* 10cd9e6a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10cd9e6d push ecx */
  push32((uint32_t)(ECX));
  /* 10cd9e6e call 0x10cda460 */
  push32(0x10cd9e73u); f_10cda460();
  /* 10cd9e73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd9e76 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10cd9e77 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10cd9e7d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10cd9e83 jmp 0x10cd9e9f */
  goto L_10cd9e9f;
L_10cd9e85:;
  /* 10cd9e85 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10cd9e88 push edx */
  push32((uint32_t)(EDX));
  /* 10cd9e89 call 0x10cda460 */
  push32(0x10cd9e8eu); f_10cda460();
  /* 10cd9e8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd9e91 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd9e93 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10cd9e99 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_10cd9e9f:;
  /* 10cd9e9f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd9ea2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 10cd9ea5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd9ea7 je 0x10cd9ee7 */
  if (C.zf) goto L_10cd9ee7;
  /* 10cd9ea9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd9eb0 jg 0x10cd9ee7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10cd9ee7;
  /* 10cd9eb2 jl 0x10cd9ebd */
  if ((C.sf!=C.of)) goto L_10cd9ebd;
  /* 10cd9eb4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd9ebb jae 0x10cd9ee7 */
  if (!C.cf) goto L_10cd9ee7;
L_10cd9ebd:;
  /* 10cd9ebd mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 10cd9ec3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10cd9ec5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 10cd9ecb adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd9ece neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10cd9ed0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10cd9ed6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 10cd9edc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd9edf or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10cd9ee2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10cd9ee5 jmp 0x10cd9eff */
  goto L_10cd9eff;
L_10cd9ee7:;
  /* 10cd9ee7 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 10cd9eed mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10cd9ef3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 10cd9ef9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_10cd9eff:;
  /* 10cd9eff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd9f02 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10cd9f08 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd9f0a jne 0x10cd9f27 */
  if (!C.zf) goto L_10cd9f27;
  /* 10cd9f0c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10cd9f12 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 10cd9f18 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 10cd9f1b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10cd9f21 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_10cd9f27:;
  /* 10cd9f27 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd9f2e jge 0x10cd9f3c */
  if ((C.sf==C.of)) goto L_10cd9f3c;
  /* 10cd9f30 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 10cd9f3a jmp 0x10cd9f45 */
  goto L_10cd9f45;
L_10cd9f3c:;
  /* 10cd9f3c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd9f3f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 10cd9f42 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10cd9f45:;
  /* 10cd9f45 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10cd9f4b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 10cd9f51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd9f53 jne 0x10cd9f5c */
  if (!C.zf) goto L_10cd9f5c;
  /* 10cd9f55 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10cd9f5c:;
  /* 10cd9f5c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 10cd9f5f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10cd9f62:;
  /* 10cd9f62 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 10cd9f68 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 10cd9f6e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd9f71 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 10cd9f77 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd9f79 jg 0x10cd9f8f */
  if ((!C.zf&&C.sf==C.of)) goto L_10cd9f8f;
  /* 10cd9f7b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10cd9f81 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 10cd9f87 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd9f89 je 0x10cda010 */
  if (C.zf) goto L_10cda010;
L_10cd9f8f:;
  /* 10cd9f8f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 10cd9f95 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10cd9f96 push edx */
  push32((uint32_t)(EDX));
  /* 10cd9f97 push eax */
  push32((uint32_t)(EAX));
  /* 10cd9f98 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 10cd9f9e push edx */
  push32((uint32_t)(EDX));
  /* 10cd9f9f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10cd9fa5 push eax */
  push32((uint32_t)(EAX));
  /* 10cd9fa6 call 0x10cd9320 */
  push32(0x10cd9fabu); f_10cd9320();
  /* 10cd9fab add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd9fae mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 10cd9fb4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 10cd9fba cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10cd9fbb push edx */
  push32((uint32_t)(EDX));
  /* 10cd9fbc push eax */
  push32((uint32_t)(EAX));
  /* 10cd9fbd mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 10cd9fc3 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd9fc4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10cd9fca push edx */
  push32((uint32_t)(EDX));
  /* 10cd9fcb call 0x10cd92b0 */
  push32(0x10cd9fd0u); f_10cd92b0();
  /* 10cd9fd0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10cd9fd6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 10cd9fdc cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd9fe3 jle 0x10cd9ff7 */
  if ((C.zf||C.sf!=C.of)) goto L_10cd9ff7;
  /* 10cd9fe5 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 10cd9feb add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd9ff1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_10cd9ff7:;
  /* 10cd9ff7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cd9ffa mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 10cda000 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10cda002 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cda005 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cda008 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10cda00b jmp 0x10cd9f62 */
  goto L_10cd9f62;
L_10cda010:;
  /* 10cda010 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 10cda013 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cda016 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10cda019 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cda01c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cda01f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10cda022 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cda025 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 10cda02a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cda02c je 0x10cda057 */
  if (C.zf) goto L_10cda057;
  /* 10cda02e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cda031 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10cda034 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cda037 jne 0x10cda03f */
  if (!C.zf) goto L_10cda03f;
  /* 10cda039 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cda03d jne 0x10cda057 */
  if (!C.zf) goto L_10cda057;
L_10cda03f:;
  /* 10cda03f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cda042 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cda045 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10cda048 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cda04b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 10cda04e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cda051 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cda054 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10cda057:;
  /* 10cda057 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cda05e jne 0x10cda232 */
  if (!C.zf) goto L_10cda232;
  /* 10cda064 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cda067 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10cda06a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cda06c je 0x10cda0bd */
  if (C.zf) goto L_10cda0bd;
  /* 10cda06e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cda071 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10cda077 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cda079 je 0x10cda08b */
  if (C.zf) goto L_10cda08b;
  /* 10cda07b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 10cda082 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10cda089 jmp 0x10cda0bd */
  goto L_10cda0bd;
L_10cda08b:;
  /* 10cda08b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cda08e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10cda091 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cda093 je 0x10cda0a5 */
  if (C.zf) goto L_10cda0a5;
  /* 10cda095 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 10cda09c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10cda0a3 jmp 0x10cda0bd */
  goto L_10cda0bd;
L_10cda0a5:;
  /* 10cda0a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cda0a8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 10cda0ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cda0ad je 0x10cda0bd */
  if (C.zf) goto L_10cda0bd;
  /* 10cda0af mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 10cda0b6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_10cda0bd:;
  /* 10cda0bd mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 10cda0c3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cda0c6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cda0c9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 10cda0cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cda0d2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 10cda0d5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cda0d7 jne 0x10cda0f5 */
  if (!C.zf) goto L_10cda0f5;
  /* 10cda0d9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10cda0df push eax */
  push32((uint32_t)(EAX));
  /* 10cda0e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cda0e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10cda0e4 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10cda0ea push edx */
  push32((uint32_t)(EDX));
  /* 10cda0eb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10cda0ed call 0x10cda3d0 */
  push32(0x10cda0f2u); f_10cda3d0();
  /* 10cda0f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cda0f5:;
  /* 10cda0f5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10cda0fb push eax */
  push32((uint32_t)(EAX));
  /* 10cda0fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cda0ff push ecx */
  push32((uint32_t)(ECX));
  /* 10cda100 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cda103 push edx */
  push32((uint32_t)(EDX));
  /* 10cda104 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 10cda10a push eax */
  push32((uint32_t)(EAX));
  /* 10cda10b call 0x10cda410 */
  push32(0x10cda110u); f_10cda410();
  /* 10cda110 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cda113 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cda116 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10cda119 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cda11b je 0x10cda143 */
  if (C.zf) goto L_10cda143;
  /* 10cda11d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cda120 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10cda123 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cda125 jne 0x10cda143 */
  if (!C.zf) goto L_10cda143;
  /* 10cda127 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10cda12d push eax */
  push32((uint32_t)(EAX));
  /* 10cda12e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cda131 push ecx */
  push32((uint32_t)(ECX));
  /* 10cda132 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10cda138 push edx */
  push32((uint32_t)(EDX));
  /* 10cda139 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10cda13b call 0x10cda3d0 */
  push32(0x10cda140u); f_10cda3d0();
  /* 10cda140 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cda143:;
  /* 10cda143 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cda147 je 0x10cda1f1 */
  if (C.zf) goto L_10cda1f1;
  /* 10cda14d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cda151 jle 0x10cda1f1 */
  if ((C.zf||C.sf!=C.of)) goto L_10cda1f1;
  /* 10cda157 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cda15a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 10cda160 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cda163 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_10cda169:;
  /* 10cda169 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 10cda16f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 10cda175 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cda178 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 10cda17e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cda180 je 0x10cda1ef */
  if (C.zf) goto L_10cda1ef;
  /* 10cda182 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 10cda188 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10cda18b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 10cda192 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 10cda199 push eax */
  push32((uint32_t)(EAX));
  /* 10cda19a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 10cda1a0 push ecx */
  push32((uint32_t)(ECX));
  /* 10cda1a1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 10cda1a7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cda1aa mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 10cda1b0 call 0x10cdb580 */
  push32(0x10cda1b5u); f_10cdb580();
  /* 10cda1b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cda1b8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 10cda1be cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cda1c5 jg 0x10cda1c9 */
  if ((!C.zf&&C.sf==C.of)) goto L_10cda1c9;
  /* 10cda1c7 jmp 0x10cda1ef */
  goto L_10cda1ef;
L_10cda1c9:;
  /* 10cda1c9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10cda1cf push eax */
  push32((uint32_t)(EAX));
  /* 10cda1d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cda1d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10cda1d4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 10cda1da push edx */
  push32((uint32_t)(EDX));
  /* 10cda1db lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 10cda1e1 push eax */
  push32((uint32_t)(EAX));
  /* 10cda1e2 call 0x10cda410 */
  push32(0x10cda1e7u); f_10cda410();
  /* 10cda1e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cda1ea jmp 0x10cda169 */
  goto L_10cda169;
L_10cda1ef:;
  /* 10cda1ef jmp 0x10cda20c */
  goto L_10cda20c;
L_10cda1f1:;
  /* 10cda1f1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10cda1f7 push ecx */
  push32((uint32_t)(ECX));
  /* 10cda1f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cda1fb push edx */
  push32((uint32_t)(EDX));
  /* 10cda1fc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cda1ff push eax */
  push32((uint32_t)(EAX));
  /* 10cda200 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cda203 push ecx */
  push32((uint32_t)(ECX));
  /* 10cda204 call 0x10cda410 */
  push32(0x10cda209u); f_10cda410();
  /* 10cda209 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cda20c:;
  /* 10cda20c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cda20f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10cda212 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cda214 je 0x10cda232 */
  if (C.zf) goto L_10cda232;
  /* 10cda216 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10cda21c push eax */
  push32((uint32_t)(EAX));
  /* 10cda21d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cda220 push ecx */
  push32((uint32_t)(ECX));
  /* 10cda221 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10cda227 push edx */
  push32((uint32_t)(EDX));
  /* 10cda228 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10cda22a call 0x10cda3d0 */
  push32(0x10cda22fu); f_10cda3d0();
  /* 10cda22f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cda232:;
  /* 10cda232 jmp 0x10cd9644 */
  goto L_10cd9644;
L_10cda237:;
  /* 10cda237 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 10cda23d pop edi */
  EDI = (pop32());
  /* 10cda23e pop esi */
  ESI = (pop32());
  /* 10cda23f pop ebx */
  EBX = (pop32());
  /* 10cda240 mov esp, ebp */
  ESP = (EBP);
  /* 10cda242 pop ebp */
  EBP = (pop32());
  /* 10cda243 ret  */
  ESPCHK(0x10cd9620u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a350 @ 0x10cda350 (119 bytes, 44 insns) */
void f_10cda350(void) {
  FTRACE(0x10cda350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cda350 push ebp */
  push32((uint32_t)(EBP));
  /* 10cda351 mov ebp, esp */
  EBP = (ESP);
  /* 10cda353 push ecx */
  push32((uint32_t)(ECX));
  /* 10cda354 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cda357 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10cda35a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cda35d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cda360 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10cda363 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cda366 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cda36a jl 0x10cda392 */
  if ((C.sf!=C.of)) goto L_10cda392;
  /* 10cda36c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cda36f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10cda371 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10cda374 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10cda376 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10cda37a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10cda380 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10cda383 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cda386 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10cda388 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cda38b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cda38e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10cda390 jmp 0x10cda3a5 */
  goto L_10cda3a5;
L_10cda392:;
  /* 10cda392 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cda395 push edx */
  push32((uint32_t)(EDX));
  /* 10cda396 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cda399 push eax */
  push32((uint32_t)(EAX));
  /* 10cda39a call 0x10cd93a0 */
  push32(0x10cda39fu); f_10cd93a0();
  /* 10cda39f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cda3a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10cda3a5:;
  /* 10cda3a5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cda3a9 jne 0x10cda3b6 */
  if (!C.zf) goto L_10cda3b6;
  /* 10cda3ab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cda3ae mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10cda3b4 jmp 0x10cda3c3 */
  goto L_10cda3c3;
L_10cda3b6:;
  /* 10cda3b6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cda3b9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10cda3bb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cda3be mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cda3c1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10cda3c3:;
  /* 10cda3c3 mov esp, ebp */
  ESP = (EBP);
  /* 10cda3c5 pop ebp */
  EBP = (pop32());
  /* 10cda3c6 ret  */
  ESPCHK(0x10cda350u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3d0 @ 0x10cda3d0 (53 bytes, 23 insns) */
void f_10cda3d0(void) {
  FTRACE(0x10cda3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cda3d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cda3d1 mov ebp, esp */
  EBP = (ESP);
L_10cda3d3:;
  /* 10cda3d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cda3d6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cda3d9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cda3dc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10cda3df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cda3e1 jle 0x10cda403 */
  if ((C.zf||C.sf!=C.of)) goto L_10cda403;
  /* 10cda3e3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cda3e6 push edx */
  push32((uint32_t)(EDX));
  /* 10cda3e7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cda3ea push eax */
  push32((uint32_t)(EAX));
  /* 10cda3eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cda3ee push ecx */
  push32((uint32_t)(ECX));
  /* 10cda3ef call 0x10cda350 */
  push32(0x10cda3f4u); f_10cda350();
  /* 10cda3f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cda3f7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cda3fa cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cda3fd jne 0x10cda401 */
  if (!C.zf) goto L_10cda401;
  /* 10cda3ff jmp 0x10cda403 */
  goto L_10cda403;
L_10cda401:;
  /* 10cda401 jmp 0x10cda3d3 */
  goto L_10cda3d3;
L_10cda403:;
  /* 10cda403 pop ebp */
  EBP = (pop32());
  /* 10cda404 ret  */
  ESPCHK(0x10cda3d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a410 @ 0x10cda410 (74 bytes, 31 insns) */
void f_10cda410(void) {
  FTRACE(0x10cda410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cda410 push ebp */
  push32((uint32_t)(EBP));
  /* 10cda411 mov ebp, esp */
  EBP = (ESP);
  /* 10cda413 push ecx */
  push32((uint32_t)(ECX));
L_10cda414:;
  /* 10cda414 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cda417 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cda41a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cda41d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10cda420 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cda422 jle 0x10cda456 */
  if ((C.zf||C.sf!=C.of)) goto L_10cda456;
  /* 10cda424 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cda427 push edx */
  push32((uint32_t)(EDX));
  /* 10cda428 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cda42b push eax */
  push32((uint32_t)(EAX));
  /* 10cda42c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cda42f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10cda432 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10cda435 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cda438 push eax */
  push32((uint32_t)(EAX));
  /* 10cda439 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cda43c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cda43f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10cda442 call 0x10cda350 */
  push32(0x10cda447u); f_10cda350();
  /* 10cda447 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cda44a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cda44d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cda450 jne 0x10cda454 */
  if (!C.zf) goto L_10cda454;
  /* 10cda452 jmp 0x10cda456 */
  goto L_10cda456;
L_10cda454:;
  /* 10cda454 jmp 0x10cda414 */
  goto L_10cda414;
L_10cda456:;
  /* 10cda456 mov esp, ebp */
  ESP = (EBP);
  /* 10cda458 pop ebp */
  EBP = (pop32());
  /* 10cda459 ret  */
  ESPCHK(0x10cda410u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a460 @ 0x10cda460 (26 bytes, 12 insns) */
void f_10cda460(void) {
  FTRACE(0x10cda460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cda460 push ebp */
  push32((uint32_t)(EBP));
  /* 10cda461 mov ebp, esp */
  EBP = (ESP);
  /* 10cda463 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cda466 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10cda468 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cda46b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cda46e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10cda470 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cda473 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10cda475 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10cda478 pop ebp */
  EBP = (pop32());
  /* 10cda479 ret  */
  ESPCHK(0x10cda460u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a480 @ 0x10cda480 (31 bytes, 14 insns) */
void f_10cda480(void) {
  FTRACE(0x10cda480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cda480 push ebp */
  push32((uint32_t)(EBP));
  /* 10cda481 mov ebp, esp */
  EBP = (ESP);
  /* 10cda483 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cda486 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10cda488 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cda48b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cda48e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10cda490 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cda493 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10cda495 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cda498 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10cda49a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10cda49d pop ebp */
  EBP = (pop32());
  /* 10cda49e ret  */
  ESPCHK(0x10cda480u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a4a0 @ 0x10cda4a0 (27 bytes, 12 insns) */
void f_10cda4a0(void) {
  FTRACE(0x10cda4a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cda4a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cda4a1 mov ebp, esp */
  EBP = (ESP);
  /* 10cda4a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cda4a6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10cda4a8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cda4ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cda4ae mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10cda4b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cda4b3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10cda4b5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 10cda4b9 pop ebp */
  EBP = (pop32());
  /* 10cda4ba ret  */
  ESPCHK(0x10cda4a0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x10cda4c0 (145 bytes, 42 insns) */
void f_10cda4c0(void) {
  FTRACE(0x10cda4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cda4c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cda4c1 mov ebp, esp */
  EBP = (ESP);
  /* 10cda4c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10cda4c4 call 0x10cda570 */
  push32(0x10cda4c9u); f_10cda570();
  /* 10cda4c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cda4cc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10cda4ce mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10cda4d5 jmp 0x10cda4e0 */
  goto L_10cda4e0;
L_10cda4d7:;
  /* 10cda4d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cda4da add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cda4dd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10cda4e0:;
  /* 10cda4e0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cda4e4 jae 0x10cda50a */
  if (!C.cf) goto L_10cda50a;
  /* 10cda4e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cda4e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cda4ec cmp ecx, dword ptr [eax*8 + 0x10cfcfb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10cfcfb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cda4f3 jne 0x10cda508 */
  if (!C.zf) goto L_10cda508;
  /* 10cda4f5 call 0x10cda560 */
  push32(0x10cda4fau); f_10cda560();
  /* 10cda4fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cda4fd mov ecx, dword ptr [edx*8 + 0x10cfcfbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x10cfcfbc)));
  /* 10cda504 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10cda506 jmp 0x10cda54d */
  goto L_10cda54d;
L_10cda508:;
  /* 10cda508 jmp 0x10cda4d7 */
  goto L_10cda4d7;
L_10cda50a:;
  /* 10cda50a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cda50e jb 0x10cda523 */
  if (C.cf) goto L_10cda523;
  /* 10cda510 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cda514 ja 0x10cda523 */
  if ((!C.cf&&!C.zf)) goto L_10cda523;
  /* 10cda516 call 0x10cda560 */
  push32(0x10cda51bu); f_10cda560();
  /* 10cda51b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 10cda521 jmp 0x10cda54d */
  goto L_10cda54d;
L_10cda523:;
  /* 10cda523 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cda52a jb 0x10cda542 */
  if (C.cf) goto L_10cda542;
  /* 10cda52c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cda533 ja 0x10cda542 */
  if ((!C.cf&&!C.zf)) goto L_10cda542;
  /* 10cda535 call 0x10cda560 */
  push32(0x10cda53au); f_10cda560();
  /* 10cda53a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 10cda540 jmp 0x10cda54d */
  goto L_10cda54d;
L_10cda542:;
  /* 10cda542 call 0x10cda560 */
  push32(0x10cda547u); f_10cda560();
  /* 10cda547 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_10cda54d:;
  /* 10cda54d mov esp, ebp */
  ESP = (EBP);
  /* 10cda54f pop ebp */
  EBP = (pop32());
  /* 10cda550 ret  */
  ESPCHK(0x10cda4c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a560 @ 0x10cda560 (13 bytes, 6 insns) */
void f_10cda560(void) {
  FTRACE(0x10cda560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cda560 push ebp */
  push32((uint32_t)(EBP));
  /* 10cda561 mov ebp, esp */
  EBP = (ESP);
  /* 10cda563 call 0x10cd20d0 */
  push32(0x10cda568u); f_10cd20d0();
  /* 10cda568 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cda56b pop ebp */
  EBP = (pop32());
  /* 10cda56c ret  */
  ESPCHK(0x10cda560u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a570 @ 0x10cda570 (13 bytes, 6 insns) */
void f_10cda570(void) {
  FTRACE(0x10cda570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cda570 push ebp */
  push32((uint32_t)(EBP));
  /* 10cda571 mov ebp, esp */
  EBP = (ESP);
  /* 10cda573 call 0x10cd20d0 */
  push32(0x10cda578u); f_10cd20d0();
  /* 10cda578 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cda57b pop ebp */
  EBP = (pop32());
  /* 10cda57c ret  */
  ESPCHK(0x10cda570u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a580 @ 0x10cda580 (664 bytes, 265 insns) [15 switch table(s)] */
void f_10cda580(void) {
  FTRACE(0x10cda580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cda580 push ebp */
  push32((uint32_t)(EBP));
  /* 10cda581 mov ebp, esp */
  EBP = (ESP);
  /* 10cda583 push edi */
  push32((uint32_t)(EDI));
  /* 10cda584 push esi */
  push32((uint32_t)(ESI));
  /* 10cda585 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10cda588 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cda58b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10cda58e mov eax, ecx */
  EAX = (ECX);
  /* 10cda590 mov edx, ecx */
  EDX = (ECX);
  /* 10cda592 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cda594 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cda596 jbe 0x10cda5a0 */
  if ((C.cf||C.zf)) goto L_10cda5a0;
  /* 10cda598 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cda59a jb 0x10cda718 */
  if (C.cf) goto L_10cda718;
L_10cda5a0:;
  /* 10cda5a0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10cda5a6 jne 0x10cda5bc */
  if (!C.zf) goto L_10cda5bc;
  /* 10cda5a8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10cda5ab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10cda5ae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cda5b1 jb 0x10cda5dc */
  if (C.cf) goto L_10cda5dc;
  /* 10cda5b3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10cda5b5 jmp dword ptr [edx*4 + 0x10cda6c8] */
  switch (EDX) {
    case 0: goto L_10cda6d8;
    case 1: goto L_10cda6e0;
    case 2: goto L_10cda6ec;
    case 3: goto L_10cda700;
    default: x86_unimpl("switch@0x10cda5b5 out of table"); return;
  }
L_10cda5bc:;
  /* 10cda5bc mov eax, edi */
  EAX = (EDI);
  /* 10cda5be mov edx, 3 */
  EDX = (0x3u);
  /* 10cda5c3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cda5c6 jb 0x10cda5d4 */
  if (C.cf) goto L_10cda5d4;
  /* 10cda5c8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10cda5cb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cda5cd jmp dword ptr [eax*4 + 0x10cda5e0] */
  switch (EAX) {
    case 1: goto L_10cda5f0;
    case 2: goto L_10cda61c;
    case 3: goto L_10cda640;
    default: x86_unimpl("switch@0x10cda5cd out of table"); return;
  }
L_10cda5d4:;
  /* 10cda5d4 jmp dword ptr [ecx*4 + 0x10cda6d8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10cda6d8)))); return;
  /* 10cda5db nop  */
  /* nop */
L_10cda5dc:;
  /* 10cda5dc jmp dword ptr [ecx*4 + 0x10cda65c] */
  switch (ECX) {
    case 0: goto L_10cda6bf;
    case 1: goto L_10cda6ac;
    case 2: goto L_10cda6a4;
    case 3: goto L_10cda69c;
    case 4: goto L_10cda694;
    case 5: goto L_10cda68c;
    case 6: goto L_10cda684;
    case 7: goto L_10cda67c;
    default: x86_unimpl("switch@0x10cda5dc out of table"); return;
  }
  /* 10cda5e3 nop  */
  /* nop */
L_10cda5f0:;
  /* 10cda5f0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10cda5f2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10cda5f4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10cda5f6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10cda5f9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10cda5fc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10cda5ff shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10cda602 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10cda605 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10cda608 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10cda60b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cda60e jb 0x10cda5dc */
  if (C.cf) goto L_10cda5dc;
  /* 10cda610 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10cda612 jmp dword ptr [edx*4 + 0x10cda6c8] */
  switch (EDX) {
    case 0: goto L_10cda6d8;
    case 1: goto L_10cda6e0;
    case 2: goto L_10cda6ec;
    case 3: goto L_10cda700;
    default: x86_unimpl("switch@0x10cda612 out of table"); return;
  }
  /* 10cda619 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10cda61c:;
  /* 10cda61c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10cda61e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10cda620 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10cda622 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10cda625 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10cda628 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10cda62b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10cda62e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10cda631 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cda634 jb 0x10cda5dc */
  if (C.cf) goto L_10cda5dc;
  /* 10cda636 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10cda638 jmp dword ptr [edx*4 + 0x10cda6c8] */
  switch (EDX) {
    case 0: goto L_10cda6d8;
    case 1: goto L_10cda6e0;
    case 2: goto L_10cda6ec;
    case 3: goto L_10cda700;
    default: x86_unimpl("switch@0x10cda638 out of table"); return;
  }
  /* 10cda63f nop  */
  /* nop */
L_10cda640:;
  /* 10cda640 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10cda642 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10cda644 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10cda646 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10cda647 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10cda64a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10cda64b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cda64e jb 0x10cda5dc */
  if (C.cf) goto L_10cda5dc;
  /* 10cda650 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10cda652 jmp dword ptr [edx*4 + 0x10cda6c8] */
  switch (EDX) {
    case 0: goto L_10cda6d8;
    case 1: goto L_10cda6e0;
    case 2: goto L_10cda6ec;
    case 3: goto L_10cda700;
    default: x86_unimpl("switch@0x10cda652 out of table"); return;
  }
  /* 10cda659 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10cda67c:;
  /* 10cda67c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10cda680 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10cda684:;
  /* 10cda684 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10cda688 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10cda68c:;
  /* 10cda68c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10cda690 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10cda694:;
  /* 10cda694 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10cda698 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10cda69c:;
  /* 10cda69c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10cda6a0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10cda6a4:;
  /* 10cda6a4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10cda6a8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10cda6ac:;
  /* 10cda6ac mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10cda6b0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10cda6b4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10cda6bb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10cda6bd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10cda6bf:;
  /* 10cda6bf jmp dword ptr [edx*4 + 0x10cda6c8] */
  switch (EDX) {
    case 0: goto L_10cda6d8;
    case 1: goto L_10cda6e0;
    case 2: goto L_10cda6ec;
    case 3: goto L_10cda700;
    default: x86_unimpl("switch@0x10cda6bf out of table"); return;
  }
  /* 10cda6c6 mov edi, edi */
  EDI = (EDI);
L_10cda6d8:;
  /* 10cda6d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cda6db pop esi */
  ESI = (pop32());
  /* 10cda6dc pop edi */
  EDI = (pop32());
  /* 10cda6dd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10cda6de ret  */
  ESPCHK(0x10cda580u, _esp0);
  ESP += 4; return;
  /* 10cda6df nop  */
  /* nop */
L_10cda6e0:;
  /* 10cda6e0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10cda6e2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10cda6e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cda6e7 pop esi */
  ESI = (pop32());
  /* 10cda6e8 pop edi */
  EDI = (pop32());
  /* 10cda6e9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10cda6ea ret  */
  ESPCHK(0x10cda580u, _esp0);
  ESP += 4; return;
  /* 10cda6eb nop  */
  /* nop */
L_10cda6ec:;
  /* 10cda6ec mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10cda6ee mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10cda6f0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10cda6f3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10cda6f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cda6f9 pop esi */
  ESI = (pop32());
  /* 10cda6fa pop edi */
  EDI = (pop32());
  /* 10cda6fb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10cda6fc ret  */
  ESPCHK(0x10cda580u, _esp0);
  ESP += 4; return;
  /* 10cda6fd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10cda700:;
  /* 10cda700 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10cda702 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10cda704 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10cda707 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10cda70a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10cda70d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10cda710 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cda713 pop esi */
  ESI = (pop32());
  /* 10cda714 pop edi */
  EDI = (pop32());
  /* 10cda715 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10cda716 ret  */
  ESPCHK(0x10cda580u, _esp0);
  ESP += 4; return;
  /* 10cda717 nop  */
  /* nop */
L_10cda718:;
  /* 10cda718 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10cda71c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10cda720 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10cda726 jne 0x10cda74c */
  if (!C.zf) goto L_10cda74c;
  /* 10cda728 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10cda72b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10cda72e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cda731 jb 0x10cda740 */
  if (C.cf) goto L_10cda740;
  /* 10cda733 std  */
  C.df=1;
  /* 10cda734 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10cda736 cld  */
  C.df=0;
  /* 10cda737 jmp dword ptr [edx*4 + 0x10cda860] */
  switch (EDX) {
    case 0: goto L_10cda870;
    case 1: goto L_10cda878;
    case 2: goto L_10cda888;
    case 3: goto L_10cda89c;
    default: x86_unimpl("switch@0x10cda737 out of table"); return;
  }
  /* 10cda73e mov edi, edi */
  EDI = (EDI);
L_10cda740:;
  /* 10cda740 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10cda742 jmp dword ptr [ecx*4 + 0x10cda810] */
  switch (ECX) {
    case 0: goto L_10cda857;
    default: x86_unimpl("switch@0x10cda742 out of table"); return;
  }
  /* 10cda749 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10cda74c:;
  /* 10cda74c mov eax, edi */
  EAX = (EDI);
  /* 10cda74e mov edx, 3 */
  EDX = (0x3u);
  /* 10cda753 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cda756 jb 0x10cda764 */
  if (C.cf) goto L_10cda764;
  /* 10cda758 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10cda75b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cda75d jmp dword ptr [eax*4 + 0x10cda768] */
  switch (EAX) {
    case 1: goto L_10cda778;
    case 2: goto L_10cda798;
    case 3: goto L_10cda7c0;
    default: x86_unimpl("switch@0x10cda75d out of table"); return;
  }
L_10cda764:;
  /* 10cda764 jmp dword ptr [ecx*4 + 0x10cda860] */
  switch (ECX) {
    case 0: goto L_10cda870;
    case 1: goto L_10cda878;
    case 2: goto L_10cda888;
    case 3: goto L_10cda89c;
    default: x86_unimpl("switch@0x10cda764 out of table"); return;
  }
  /* 10cda76b nop  */
  /* nop */
L_10cda778:;
  /* 10cda778 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10cda77b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10cda77d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10cda780 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10cda781 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10cda784 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10cda785 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cda788 jb 0x10cda740 */
  if (C.cf) goto L_10cda740;
  /* 10cda78a std  */
  C.df=1;
  /* 10cda78b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10cda78d cld  */
  C.df=0;
  /* 10cda78e jmp dword ptr [edx*4 + 0x10cda860] */
  switch (EDX) {
    case 0: goto L_10cda870;
    case 1: goto L_10cda878;
    case 2: goto L_10cda888;
    case 3: goto L_10cda89c;
    default: x86_unimpl("switch@0x10cda78e out of table"); return;
  }
  /* 10cda795 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10cda798:;
  /* 10cda798 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10cda79b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10cda79d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10cda7a0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10cda7a3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10cda7a6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10cda7a9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cda7ac sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cda7af cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cda7b2 jb 0x10cda740 */
  if (C.cf) goto L_10cda740;
  /* 10cda7b4 std  */
  C.df=1;
  /* 10cda7b5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10cda7b7 cld  */
  C.df=0;
  /* 10cda7b8 jmp dword ptr [edx*4 + 0x10cda860] */
  switch (EDX) {
    case 0: goto L_10cda870;
    case 1: goto L_10cda878;
    case 2: goto L_10cda888;
    case 3: goto L_10cda89c;
    default: x86_unimpl("switch@0x10cda7b8 out of table"); return;
  }
  /* 10cda7bf nop  */
  /* nop */
L_10cda7c0:;
  /* 10cda7c0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10cda7c3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10cda7c5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10cda7c8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10cda7cb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10cda7ce mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10cda7d1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10cda7d4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10cda7d7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cda7da sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cda7dd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cda7e0 jb 0x10cda740 */
  if (C.cf) goto L_10cda740;
  /* 10cda7e6 std  */
  C.df=1;
  /* 10cda7e7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10cda7e9 cld  */
  C.df=0;
  /* 10cda7ea jmp dword ptr [edx*4 + 0x10cda860] */
  switch (EDX) {
    case 0: goto L_10cda870;
    case 1: goto L_10cda878;
    case 2: goto L_10cda888;
    case 3: goto L_10cda89c;
    default: x86_unimpl("switch@0x10cda7ea out of table"); return;
  }
  /* 10cda7f1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10cda7f4 adc al, 0xa8 */
  { uint32_t _a=(AL),_b=(0xa8u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10cda7f6 int 0x10 */
  x86_unimpl("int @ 0x10cda7f6");
  /* 10cda7f8 sbb al, 0xa8 */
  { uint32_t _a=(AL),_b=(0xa8u),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10cda7fa int 0x10 */
  x86_unimpl("int @ 0x10cda7fa");
  /* 10cda7fc and al, 0xa8 */
  { uint32_t _r=(AL)&(0xa8u); AL = (_r); fl_logic(_r,8); }
  /* 10cda7fe int 0x10 */
  x86_unimpl("int @ 0x10cda7fe");
  /* 10cda800 sub al, 0xa8 */
  { uint32_t _a=(AL),_b=(0xa8u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10cda802 int 0x10 */
  x86_unimpl("int @ 0x10cda802");
  /* 10cda804 xor al, 0xa8 */
  { uint32_t _r=(AL)^(0xa8u); AL = (_r); fl_logic(_r,8); }
  /* 10cda806 int 0x10 */
  x86_unimpl("int @ 0x10cda806");
  /* 10cda808 cmp al, 0xa8 */
  { uint32_t _a=(AL),_b=(0xa8u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10cda80a int 0x10 */
  x86_unimpl("int @ 0x10cda80a");
  /* 10cda80c inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 10cda80d test al, 0xcd */
  { uint32_t _r=(AL)&(0xcdu); fl_logic(_r,8); }
  /* 10cda814 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10cda818 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10cda81c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10cda820 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10cda824 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10cda828 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10cda82c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10cda830 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10cda834 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10cda838 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10cda83c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10cda840 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10cda844 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10cda848 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10cda84c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10cda853 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10cda855 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10cda857:;
  /* 10cda857 jmp dword ptr [edx*4 + 0x10cda860] */
  switch (EDX) {
    case 0: goto L_10cda870;
    case 1: goto L_10cda878;
    case 2: goto L_10cda888;
    case 3: goto L_10cda89c;
    default: x86_unimpl("switch@0x10cda857 out of table"); return;
  }
  /* 10cda85e mov edi, edi */
  EDI = (EDI);
L_10cda870:;
  /* 10cda870 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cda873 pop esi */
  ESI = (pop32());
  /* 10cda874 pop edi */
  EDI = (pop32());
  /* 10cda875 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10cda876 ret  */
  ESPCHK(0x10cda580u, _esp0);
  ESP += 4; return;
  /* 10cda877 nop  */
  /* nop */
L_10cda878:;
  /* 10cda878 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10cda87b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10cda87e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cda881 pop esi */
  ESI = (pop32());
  /* 10cda882 pop edi */
  EDI = (pop32());
  /* 10cda883 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10cda884 ret  */
  ESPCHK(0x10cda580u, _esp0);
  ESP += 4; return;
  /* 10cda885 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10cda888:;
  /* 10cda888 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10cda88b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10cda88e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10cda891 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10cda894 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cda897 pop esi */
  ESI = (pop32());
  /* 10cda898 pop edi */
  EDI = (pop32());
  /* 10cda899 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10cda89a ret  */
  ESPCHK(0x10cda580u, _esp0);
  ESP += 4; return;
  /* 10cda89b nop  */
  /* nop */
L_10cda89c:;
  /* 10cda89c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10cda89f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10cda8a2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10cda8a5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10cda8a8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10cda8ab mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10cda8ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cda8b1 pop esi */
  ESI = (pop32());
  /* 10cda8b2 pop edi */
  EDI = (pop32());
  /* 10cda8b3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10cda8b4 ret  */
  ESPCHK(0x10cda580u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a8c0 @ 0x10cda8c0 (421 bytes, 148 insns) */
void f_10cda8c0(void) {
  FTRACE(0x10cda8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cda8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cda8c1 mov ebp, esp */
  EBP = (ESP);
  /* 10cda8c3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10cda8c5 push 0x10cf9f00 */
  push32((uint32_t)(0x10cf9f00u));
  /* 10cda8ca push 0x10cdb798 */
  push32((uint32_t)(0x10cdb798u));
  /* 10cda8cf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10cda8d5 push eax */
  push32((uint32_t)(EAX));
  /* 10cda8d6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10cda8dd add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cda8e0 push ebx */
  push32((uint32_t)(EBX));
  /* 10cda8e1 push esi */
  push32((uint32_t)(ESI));
  /* 10cda8e2 push edi */
  push32((uint32_t)(EDI));
  /* 10cda8e3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10cda8e6 cmp dword ptr [0x10cfe5f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe5f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cda8ed jne 0x10cda93e */
  if (!C.zf) goto L_10cda93e;
  /* 10cda8ef lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10cda8f2 push eax */
  push32((uint32_t)(EAX));
  /* 10cda8f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cda8f5 push 0x10cf9efc */
  push32((uint32_t)(0x10cf9efcu));
  /* 10cda8fa push 1 */
  push32((uint32_t)(0x1u));
  /* 10cda8fc call dword ptr [0x10d002f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002f0))), 0x10cda902u);
  /* 10cda902 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cda904 je 0x10cda912 */
  if (C.zf) goto L_10cda912;
  /* 10cda906 mov dword ptr [0x10cfe5f4], 1 */
  w32((uint32_t)(0x10cfe5f4), (0x1u));
  /* 10cda910 jmp 0x10cda93e */
  goto L_10cda93e;
L_10cda912:;
  /* 10cda912 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10cda915 push ecx */
  push32((uint32_t)(ECX));
  /* 10cda916 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cda918 push 0x10cf9ef8 */
  push32((uint32_t)(0x10cf9ef8u));
  /* 10cda91d push 1 */
  push32((uint32_t)(0x1u));
  /* 10cda91f push 0 */
  push32((uint32_t)(0x0u));
  /* 10cda921 call dword ptr [0x10d002ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002ec))), 0x10cda927u);
  /* 10cda927 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cda929 je 0x10cda937 */
  if (C.zf) goto L_10cda937;
  /* 10cda92b mov dword ptr [0x10cfe5f4], 2 */
  w32((uint32_t)(0x10cfe5f4), (0x2u));
  /* 10cda935 jmp 0x10cda93e */
  goto L_10cda93e;
L_10cda937:;
  /* 10cda937 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cda939 jmp 0x10cdaa68 */
  goto L_10cdaa68;
L_10cda93e:;
  /* 10cda93e cmp dword ptr [0x10cfe5f4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe5f4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cda945 jne 0x10cda975 */
  if (!C.zf) goto L_10cda975;
  /* 10cda947 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cda94b jne 0x10cda956 */
  if (!C.zf) goto L_10cda956;
  /* 10cda94d mov edx, dword ptr [0x10cfe600] */
  EDX = (r32((uint32_t)(0x10cfe600)));
  /* 10cda953 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10cda956:;
  /* 10cda956 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cda959 push eax */
  push32((uint32_t)(EAX));
  /* 10cda95a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cda95d push ecx */
  push32((uint32_t)(ECX));
  /* 10cda95e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cda961 push edx */
  push32((uint32_t)(EDX));
  /* 10cda962 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cda965 push eax */
  push32((uint32_t)(EAX));
  /* 10cda966 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10cda969 push ecx */
  push32((uint32_t)(ECX));
  /* 10cda96a call dword ptr [0x10d002ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002ec))), 0x10cda970u);
  /* 10cda970 jmp 0x10cdaa68 */
  goto L_10cdaa68;
L_10cda975:;
  /* 10cda975 cmp dword ptr [0x10cfe5f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe5f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cda97c jne 0x10cdaa66 */
  if (!C.zf) goto L_10cdaa66;
  /* 10cda982 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cda986 jne 0x10cda991 */
  if (!C.zf) goto L_10cda991;
  /* 10cda988 mov edx, dword ptr [0x10cfe610] */
  EDX = (r32((uint32_t)(0x10cfe610)));
  /* 10cda98e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_10cda991:;
  /* 10cda991 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cda993 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cda995 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cda998 push eax */
  push32((uint32_t)(EAX));
  /* 10cda999 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cda99c push ecx */
  push32((uint32_t)(ECX));
  /* 10cda99d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10cda9a0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10cda9a2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cda9a4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10cda9a7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cda9aa push edx */
  push32((uint32_t)(EDX));
  /* 10cda9ab mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cda9ae push eax */
  push32((uint32_t)(EAX));
  /* 10cda9af call dword ptr [0x10d002a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002a4))), 0x10cda9b5u);
  /* 10cda9b5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10cda9b8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cda9bc jne 0x10cda9c5 */
  if (!C.zf) goto L_10cda9c5;
  /* 10cda9be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cda9c0 jmp 0x10cdaa68 */
  goto L_10cdaa68;
L_10cda9c5:;
  /* 10cda9c5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10cda9cc mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cda9cf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10cda9d1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cda9d4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10cda9d6 call 0x10cd5830 */
  push32(0x10cda9dbu); f_10cd5830();
  /* 10cda9db mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 10cda9de mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10cda9e1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10cda9e4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10cda9e7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cda9ea shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10cda9ec push edx */
  push32((uint32_t)(EDX));
  /* 10cda9ed push 0 */
  push32((uint32_t)(0x0u));
  /* 10cda9ef mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cda9f2 push eax */
  push32((uint32_t)(EAX));
  /* 10cda9f3 call 0x10cd6400 */
  push32(0x10cda9f8u); f_10cd6400();
  /* 10cda9f8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cda9fb mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10cdaa02 jmp 0x10cdaa1b */
  goto L_10cdaa1b;
  /* 10cdaa04 mov eax, 1 */
  EAX = (0x1u);
  /* 10cdaa09 ret  */
  ESPCHK(0x10cda8c0u, _esp0);
  ESP += 4; return;
  /* 10cdaa0a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10cdaa0d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10cdaa14 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10cdaa1b:;
  /* 10cdaa1b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdaa1f jne 0x10cdaa25 */
  if (!C.zf) goto L_10cdaa25;
  /* 10cdaa21 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cdaa23 jmp 0x10cdaa68 */
  goto L_10cdaa68;
L_10cdaa25:;
  /* 10cdaa25 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cdaa28 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdaa29 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cdaa2c push edx */
  push32((uint32_t)(EDX));
  /* 10cdaa2d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdaa30 push eax */
  push32((uint32_t)(EAX));
  /* 10cdaa31 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdaa34 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdaa35 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdaa37 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cdaa3a push edx */
  push32((uint32_t)(EDX));
  /* 10cdaa3b call dword ptr [0x10d002a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002a4))), 0x10cdaa41u);
  /* 10cdaa41 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10cdaa44 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdaa48 jne 0x10cdaa4e */
  if (!C.zf) goto L_10cdaa4e;
  /* 10cdaa4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cdaa4c jmp 0x10cdaa68 */
  goto L_10cdaa68;
L_10cdaa4e:;
  /* 10cdaa4e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cdaa51 push eax */
  push32((uint32_t)(EAX));
  /* 10cdaa52 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10cdaa55 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdaa56 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cdaa59 push edx */
  push32((uint32_t)(EDX));
  /* 10cdaa5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdaa5d push eax */
  push32((uint32_t)(EAX));
  /* 10cdaa5e call dword ptr [0x10d002f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002f0))), 0x10cdaa64u);
  /* 10cdaa64 jmp 0x10cdaa68 */
  goto L_10cdaa68;
L_10cdaa66:;
  /* 10cdaa66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10cdaa68:;
  /* 10cdaa68 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 10cdaa6b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cdaa6e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10cdaa75 pop edi */
  EDI = (pop32());
  /* 10cdaa76 pop esi */
  ESI = (pop32());
  /* 10cdaa77 pop ebx */
  EBX = (pop32());
  /* 10cdaa78 mov esp, ebp */
  ESP = (EBP);
  /* 10cdaa7a pop ebp */
  EBP = (pop32());
  /* 10cdaa7b ret  */
  ESPCHK(0x10cda8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa80 @ 0x10cdaa80 (727 bytes, 263 insns) */
void f_10cdaa80(void) {
  FTRACE(0x10cdaa80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdaa80 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdaa81 mov ebp, esp */
  EBP = (ESP);
  /* 10cdaa83 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10cdaa85 push 0x10cf9f10 */
  push32((uint32_t)(0x10cf9f10u));
  /* 10cdaa8a push 0x10cdb798 */
  push32((uint32_t)(0x10cdb798u));
  /* 10cdaa8f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10cdaa95 push eax */
  push32((uint32_t)(EAX));
  /* 10cdaa96 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10cdaa9d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdaaa0 push ebx */
  push32((uint32_t)(EBX));
  /* 10cdaaa1 push esi */
  push32((uint32_t)(ESI));
  /* 10cdaaa2 push edi */
  push32((uint32_t)(EDI));
  /* 10cdaaa3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10cdaaa6 cmp dword ptr [0x10cfe618], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe618))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdaaad jne 0x10cdab06 */
  if (!C.zf) goto L_10cdab06;
  /* 10cdaaaf push 0 */
  push32((uint32_t)(0x0u));
  /* 10cdaab1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cdaab3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdaab5 push 0x10cf9efc */
  push32((uint32_t)(0x10cf9efcu));
  /* 10cdaaba push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10cdaabf push 0 */
  push32((uint32_t)(0x0u));
  /* 10cdaac1 call dword ptr [0x10d002f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002f8))), 0x10cdaac7u);
  /* 10cdaac7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdaac9 je 0x10cdaad7 */
  if (C.zf) goto L_10cdaad7;
  /* 10cdaacb mov dword ptr [0x10cfe618], 1 */
  w32((uint32_t)(0x10cfe618), (0x1u));
  /* 10cdaad5 jmp 0x10cdab06 */
  goto L_10cdab06;
L_10cdaad7:;
  /* 10cdaad7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cdaad9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cdaadb push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdaadd push 0x10cf9ef8 */
  push32((uint32_t)(0x10cf9ef8u));
  /* 10cdaae2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10cdaae7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cdaae9 call dword ptr [0x10d002f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002f4))), 0x10cdaaefu);
  /* 10cdaaef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdaaf1 je 0x10cdaaff */
  if (C.zf) goto L_10cdaaff;
  /* 10cdaaf3 mov dword ptr [0x10cfe618], 2 */
  w32((uint32_t)(0x10cfe618), (0x2u));
  /* 10cdaafd jmp 0x10cdab06 */
  goto L_10cdab06;
L_10cdaaff:;
  /* 10cdaaff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cdab01 jmp 0x10cdad71 */
  goto L_10cdad71;
L_10cdab06:;
  /* 10cdab06 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdab0a jle 0x10cdab1f */
  if ((C.zf||C.sf!=C.of)) goto L_10cdab1f;
  /* 10cdab0c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cdab0f push eax */
  push32((uint32_t)(EAX));
  /* 10cdab10 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdab13 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdab14 call 0x10cdad90 */
  push32(0x10cdab19u); f_10cdad90();
  /* 10cdab19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdab1c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10cdab1f:;
  /* 10cdab1f cmp dword ptr [0x10cfe618], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe618))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdab26 jne 0x10cdab4b */
  if (!C.zf) goto L_10cdab4b;
  /* 10cdab28 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10cdab2b push edx */
  push32((uint32_t)(EDX));
  /* 10cdab2c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cdab2f push eax */
  push32((uint32_t)(EAX));
  /* 10cdab30 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cdab33 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdab34 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdab37 push edx */
  push32((uint32_t)(EDX));
  /* 10cdab38 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdab3b push eax */
  push32((uint32_t)(EAX));
  /* 10cdab3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdab3f push ecx */
  push32((uint32_t)(ECX));
  /* 10cdab40 call dword ptr [0x10d002f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002f4))), 0x10cdab46u);
  /* 10cdab46 jmp 0x10cdad71 */
  goto L_10cdad71;
L_10cdab4b:;
  /* 10cdab4b cmp dword ptr [0x10cfe618], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe618))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdab52 jne 0x10cdad6f */
  if (!C.zf) goto L_10cdad6f;
  /* 10cdab58 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdab5c jne 0x10cdab67 */
  if (!C.zf) goto L_10cdab67;
  /* 10cdab5e mov edx, dword ptr [0x10cfe610] */
  EDX = (r32((uint32_t)(0x10cfe610)));
  /* 10cdab64 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_10cdab67:;
  /* 10cdab67 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cdab69 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cdab6b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cdab6e push eax */
  push32((uint32_t)(EAX));
  /* 10cdab6f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdab72 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdab73 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 10cdab76 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10cdab78 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdab7a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10cdab7d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdab80 push edx */
  push32((uint32_t)(EDX));
  /* 10cdab81 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10cdab84 push eax */
  push32((uint32_t)(EAX));
  /* 10cdab85 call dword ptr [0x10d002a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002a4))), 0x10cdab8bu);
  /* 10cdab8b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10cdab8e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdab92 jne 0x10cdab9b */
  if (!C.zf) goto L_10cdab9b;
  /* 10cdab94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cdab96 jmp 0x10cdad71 */
  goto L_10cdad71;
L_10cdab9b:;
  /* 10cdab9b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10cdaba2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10cdaba5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10cdaba7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdabaa and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10cdabac call 0x10cd5830 */
  push32(0x10cdabb1u); f_10cd5830();
  /* 10cdabb1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10cdabb4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10cdabb7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cdabba mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10cdabbd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10cdabc4 jmp 0x10cdabdd */
  goto L_10cdabdd;
  /* 10cdabc6 mov eax, 1 */
  EAX = (0x1u);
  /* 10cdabcb ret  */
  ESPCHK(0x10cdaa80u, _esp0);
  ESP += 4; return;
  /* 10cdabcc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10cdabcf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10cdabd6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10cdabdd:;
  /* 10cdabdd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdabe1 jne 0x10cdabea */
  if (!C.zf) goto L_10cdabea;
  /* 10cdabe3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cdabe5 jmp 0x10cdad71 */
  goto L_10cdad71;
L_10cdabea:;
  /* 10cdabea mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10cdabed push edx */
  push32((uint32_t)(EDX));
  /* 10cdabee mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cdabf1 push eax */
  push32((uint32_t)(EAX));
  /* 10cdabf2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cdabf5 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdabf6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdabf9 push edx */
  push32((uint32_t)(EDX));
  /* 10cdabfa push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdabfc mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10cdabff push eax */
  push32((uint32_t)(EAX));
  /* 10cdac00 call dword ptr [0x10d002a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002a4))), 0x10cdac06u);
  /* 10cdac06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdac08 jne 0x10cdac11 */
  if (!C.zf) goto L_10cdac11;
  /* 10cdac0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cdac0c jmp 0x10cdad71 */
  goto L_10cdad71;
L_10cdac11:;
  /* 10cdac11 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cdac13 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cdac15 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10cdac18 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdac19 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cdac1c push edx */
  push32((uint32_t)(EDX));
  /* 10cdac1d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdac20 push eax */
  push32((uint32_t)(EAX));
  /* 10cdac21 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdac24 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdac25 call dword ptr [0x10d002f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002f8))), 0x10cdac2bu);
  /* 10cdac2b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10cdac2e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdac32 jne 0x10cdac3b */
  if (!C.zf) goto L_10cdac3b;
  /* 10cdac34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cdac36 jmp 0x10cdad71 */
  goto L_10cdad71;
L_10cdac3b:;
  /* 10cdac3b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdac3e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 10cdac44 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cdac46 je 0x10cdac8b */
  if (C.zf) goto L_10cdac8b;
  /* 10cdac48 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdac4c je 0x10cdac86 */
  if (C.zf) goto L_10cdac86;
  /* 10cdac4e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10cdac51 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdac54 jle 0x10cdac5d */
  if ((C.zf||C.sf!=C.of)) goto L_10cdac5d;
  /* 10cdac56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cdac58 jmp 0x10cdad71 */
  goto L_10cdad71;
L_10cdac5d:;
  /* 10cdac5d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10cdac60 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdac61 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cdac64 push edx */
  push32((uint32_t)(EDX));
  /* 10cdac65 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10cdac68 push eax */
  push32((uint32_t)(EAX));
  /* 10cdac69 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cdac6c push ecx */
  push32((uint32_t)(ECX));
  /* 10cdac6d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdac70 push edx */
  push32((uint32_t)(EDX));
  /* 10cdac71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdac74 push eax */
  push32((uint32_t)(EAX));
  /* 10cdac75 call dword ptr [0x10d002f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002f8))), 0x10cdac7bu);
  /* 10cdac7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdac7d jne 0x10cdac86 */
  if (!C.zf) goto L_10cdac86;
  /* 10cdac7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cdac81 jmp 0x10cdad71 */
  goto L_10cdad71;
L_10cdac86:;
  /* 10cdac86 jmp 0x10cdad6a */
  goto L_10cdad6a;
L_10cdac8b:;
  /* 10cdac8b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10cdac8e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10cdac91 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10cdac98 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10cdac9b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10cdac9d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdaca0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10cdaca2 call 0x10cd5830 */
  push32(0x10cdaca7u); f_10cd5830();
  /* 10cdaca7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10cdacaa mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10cdacad mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10cdacb0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10cdacb3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10cdacba jmp 0x10cdacd3 */
  goto L_10cdacd3;
  /* 10cdacbc mov eax, 1 */
  EAX = (0x1u);
  /* 10cdacc1 ret  */
  ESPCHK(0x10cdaa80u, _esp0);
  ESP += 4; return;
  /* 10cdacc2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10cdacc5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10cdaccc mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10cdacd3:;
  /* 10cdacd3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdacd7 jne 0x10cdace0 */
  if (!C.zf) goto L_10cdace0;
  /* 10cdacd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cdacdb jmp 0x10cdad71 */
  goto L_10cdad71;
L_10cdace0:;
  /* 10cdace0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10cdace3 push eax */
  push32((uint32_t)(EAX));
  /* 10cdace4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cdace7 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdace8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10cdaceb push edx */
  push32((uint32_t)(EDX));
  /* 10cdacec mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cdacef push eax */
  push32((uint32_t)(EAX));
  /* 10cdacf0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdacf3 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdacf4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdacf7 push edx */
  push32((uint32_t)(EDX));
  /* 10cdacf8 call dword ptr [0x10d002f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002f8))), 0x10cdacfeu);
  /* 10cdacfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdad00 jne 0x10cdad06 */
  if (!C.zf) goto L_10cdad06;
  /* 10cdad02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cdad04 jmp 0x10cdad71 */
  goto L_10cdad71;
L_10cdad06:;
  /* 10cdad06 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdad0a jne 0x10cdad3a */
  if (!C.zf) goto L_10cdad3a;
  /* 10cdad0c push 0 */
  push32((uint32_t)(0x0u));
  /* 10cdad0e push 0 */
  push32((uint32_t)(0x0u));
  /* 10cdad10 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cdad12 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cdad14 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10cdad17 push eax */
  push32((uint32_t)(EAX));
  /* 10cdad18 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cdad1b push ecx */
  push32((uint32_t)(ECX));
  /* 10cdad1c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10cdad21 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10cdad24 push edx */
  push32((uint32_t)(EDX));
  /* 10cdad25 call dword ptr [0x10d0029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d0029c))), 0x10cdad2bu);
  /* 10cdad2b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10cdad2e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdad32 jne 0x10cdad38 */
  if (!C.zf) goto L_10cdad38;
  /* 10cdad34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cdad36 jmp 0x10cdad71 */
  goto L_10cdad71;
L_10cdad38:;
  /* 10cdad38 jmp 0x10cdad6a */
  goto L_10cdad6a;
L_10cdad3a:;
  /* 10cdad3a push 0 */
  push32((uint32_t)(0x0u));
  /* 10cdad3c push 0 */
  push32((uint32_t)(0x0u));
  /* 10cdad3e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10cdad41 push eax */
  push32((uint32_t)(EAX));
  /* 10cdad42 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cdad45 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdad46 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10cdad49 push edx */
  push32((uint32_t)(EDX));
  /* 10cdad4a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cdad4d push eax */
  push32((uint32_t)(EAX));
  /* 10cdad4e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10cdad53 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10cdad56 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdad57 call dword ptr [0x10d0029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d0029c))), 0x10cdad5du);
  /* 10cdad5d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10cdad60 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdad64 jne 0x10cdad6a */
  if (!C.zf) goto L_10cdad6a;
  /* 10cdad66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cdad68 jmp 0x10cdad71 */
  goto L_10cdad71;
L_10cdad6a:;
  /* 10cdad6a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10cdad6d jmp 0x10cdad71 */
  goto L_10cdad71;
L_10cdad6f:;
  /* 10cdad6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10cdad71:;
  /* 10cdad71 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10cdad74 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cdad77 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10cdad7e pop edi */
  EDI = (pop32());
  /* 10cdad7f pop esi */
  ESI = (pop32());
  /* 10cdad80 pop ebx */
  EBX = (pop32());
  /* 10cdad81 mov esp, ebp */
  ESP = (EBP);
  /* 10cdad83 pop ebp */
  EBP = (pop32());
  /* 10cdad84 ret  */
  ESPCHK(0x10cdaa80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ad90 @ 0x10cdad90 (80 bytes, 32 insns) */
void f_10cdad90(void) {
  FTRACE(0x10cdad90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdad90 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdad91 mov ebp, esp */
  EBP = (ESP);
  /* 10cdad93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdad96 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdad99 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10cdad9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdad9f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10cdada2:;
  /* 10cdada2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdada5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdada8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdadab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10cdadae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cdadb0 je 0x10cdadc7 */
  if (C.zf) goto L_10cdadc7;
  /* 10cdadb2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdadb5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10cdadb8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cdadba je 0x10cdadc7 */
  if (C.zf) goto L_10cdadc7;
  /* 10cdadbc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdadbf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdadc2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cdadc5 jmp 0x10cdada2 */
  goto L_10cdada2;
L_10cdadc7:;
  /* 10cdadc7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdadca movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10cdadcd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cdadcf jne 0x10cdadd9 */
  if (!C.zf) goto L_10cdadd9;
  /* 10cdadd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdadd4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdadd7 jmp 0x10cdaddc */
  goto L_10cdaddc;
L_10cdadd9:;
  /* 10cdadd9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10cdaddc:;
  /* 10cdaddc mov esp, ebp */
  ESP = (EBP);
  /* 10cdadde pop ebp */
  EBP = (pop32());
  /* 10cdaddf ret  */
  ESPCHK(0x10cdad90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ade0 @ 0x10cdade0 (130 bytes, 43 insns) */
void f_10cdade0(void) {
  FTRACE(0x10cdade0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdade0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdade1 mov ebp, esp */
  EBP = (ESP);
  /* 10cdade3 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdade4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdade7 cmp eax, dword ptr [0x10cfff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cfff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdaded jae 0x10cdae11 */
  if (!C.cf) goto L_10cdae11;
  /* 10cdadef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdadf2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10cdadf5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdadf8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10cdadfb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdadfe mov eax, dword ptr [ecx*4 + 0x10cffde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10cffde0)));
  /* 10cdae05 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10cdae0a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10cdae0d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cdae0f jne 0x10cdae2c */
  if (!C.zf) goto L_10cdae2c;
L_10cdae11:;
  /* 10cdae11 call 0x10cda560 */
  push32(0x10cdae16u); f_10cda560();
  /* 10cdae16 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10cdae1c call 0x10cda570 */
  push32(0x10cdae21u); f_10cda570();
  /* 10cdae21 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10cdae27 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cdae2a jmp 0x10cdae5e */
  goto L_10cdae5e;
L_10cdae2c:;
  /* 10cdae2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdae2f push edx */
  push32((uint32_t)(EDX));
  /* 10cdae30 call 0x10cdbd80 */
  push32(0x10cdae35u); f_10cdbd80();
  /* 10cdae35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdae38 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdae3b push eax */
  push32((uint32_t)(EAX));
  /* 10cdae3c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdae3f push ecx */
  push32((uint32_t)(ECX));
  /* 10cdae40 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdae43 push edx */
  push32((uint32_t)(EDX));
  /* 10cdae44 call 0x10cdae70 */
  push32(0x10cdae49u); f_10cdae70();
  /* 10cdae49 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdae4c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cdae4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdae52 push eax */
  push32((uint32_t)(EAX));
  /* 10cdae53 call 0x10cdbe10 */
  push32(0x10cdae58u); f_10cdbe10();
  /* 10cdae58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdae5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10cdae5e:;
  /* 10cdae5e mov esp, ebp */
  ESP = (EBP);
  /* 10cdae60 pop ebp */
  EBP = (pop32());
  /* 10cdae61 ret  */
  ESPCHK(0x10cdade0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae70 @ 0x10cdae70 (178 bytes, 56 insns) */
void f_10cdae70(void) {
  FTRACE(0x10cdae70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdae70 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdae71 mov ebp, esp */
  EBP = (ESP);
  /* 10cdae73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdae76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdae79 push eax */
  push32((uint32_t)(EAX));
  /* 10cdae7a call 0x10cdbc00 */
  push32(0x10cdae7fu); f_10cdbc00();
  /* 10cdae7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdae82 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10cdae85 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdae89 jne 0x10cdae9e */
  if (!C.zf) goto L_10cdae9e;
  /* 10cdae8b call 0x10cda560 */
  push32(0x10cdae90u); f_10cda560();
  /* 10cdae90 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10cdae96 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cdae99 jmp 0x10cdaf1e */
  goto L_10cdaf1e;
L_10cdae9e:;
  /* 10cdae9e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdaea1 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdaea2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cdaea4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdaea7 push edx */
  push32((uint32_t)(EDX));
  /* 10cdaea8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdaeab push eax */
  push32((uint32_t)(EAX));
  /* 10cdaeac call dword ptr [0x10d002fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002fc))), 0x10cdaeb2u);
  /* 10cdaeb2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10cdaeb5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdaeb9 jne 0x10cdaec6 */
  if (!C.zf) goto L_10cdaec6;
  /* 10cdaebb call dword ptr [0x10d00270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00270))), 0x10cdaec1u);
  /* 10cdaec1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cdaec4 jmp 0x10cdaecd */
  goto L_10cdaecd;
L_10cdaec6:;
  /* 10cdaec6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10cdaecd:;
  /* 10cdaecd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdaed1 je 0x10cdaee4 */
  if (C.zf) goto L_10cdaee4;
  /* 10cdaed3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdaed6 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdaed7 call 0x10cda4c0 */
  push32(0x10cdaedcu); f_10cda4c0();
  /* 10cdaedc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdaedf or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cdaee2 jmp 0x10cdaf1e */
  goto L_10cdaf1e;
L_10cdaee4:;
  /* 10cdaee4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdaee7 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10cdaeea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdaeed and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10cdaef0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdaef3 mov ecx, dword ptr [edx*4 + 0x10cffde0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10cffde0)));
  /* 10cdaefa mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 10cdaefe and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 10cdaf01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdaf04 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10cdaf07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdaf0a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10cdaf0d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdaf10 mov eax, dword ptr [eax*4 + 0x10cffde0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10cffde0)));
  /* 10cdaf17 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 10cdaf1b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10cdaf1e:;
  /* 10cdaf1e mov esp, ebp */
  ESP = (EBP);
  /* 10cdaf20 pop ebp */
  EBP = (pop32());
  /* 10cdaf21 ret  */
  ESPCHK(0x10cdae70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af30 @ 0x10cdaf30 (130 bytes, 43 insns) */
void f_10cdaf30(void) {
  FTRACE(0x10cdaf30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdaf30 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdaf31 mov ebp, esp */
  EBP = (ESP);
  /* 10cdaf33 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdaf34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdaf37 cmp eax, dword ptr [0x10cfff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cfff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdaf3d jae 0x10cdaf61 */
  if (!C.cf) goto L_10cdaf61;
  /* 10cdaf3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdaf42 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10cdaf45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdaf48 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10cdaf4b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdaf4e mov eax, dword ptr [ecx*4 + 0x10cffde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10cffde0)));
  /* 10cdaf55 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10cdaf5a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10cdaf5d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cdaf5f jne 0x10cdaf7c */
  if (!C.zf) goto L_10cdaf7c;
L_10cdaf61:;
  /* 10cdaf61 call 0x10cda560 */
  push32(0x10cdaf66u); f_10cda560();
  /* 10cdaf66 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10cdaf6c call 0x10cda570 */
  push32(0x10cdaf71u); f_10cda570();
  /* 10cdaf71 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10cdaf77 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cdaf7a jmp 0x10cdafae */
  goto L_10cdafae;
L_10cdaf7c:;
  /* 10cdaf7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdaf7f push edx */
  push32((uint32_t)(EDX));
  /* 10cdaf80 call 0x10cdbd80 */
  push32(0x10cdaf85u); f_10cdbd80();
  /* 10cdaf85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdaf88 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdaf8b push eax */
  push32((uint32_t)(EAX));
  /* 10cdaf8c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdaf8f push ecx */
  push32((uint32_t)(ECX));
  /* 10cdaf90 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdaf93 push edx */
  push32((uint32_t)(EDX));
  /* 10cdaf94 call 0x10cdafc0 */
  push32(0x10cdaf99u); f_10cdafc0();
  /* 10cdaf99 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdaf9c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cdaf9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdafa2 push eax */
  push32((uint32_t)(EAX));
  /* 10cdafa3 call 0x10cdbe10 */
  push32(0x10cdafa8u); f_10cdbe10();
  /* 10cdafa8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdafab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10cdafae:;
  /* 10cdafae mov esp, ebp */
  ESP = (EBP);
  /* 10cdafb0 pop ebp */
  EBP = (pop32());
  /* 10cdafb1 ret  */
  ESPCHK(0x10cdaf30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000afc0 @ 0x10cdafc0 (627 bytes, 182 insns) */
void f_10cdafc0(void) {
  FTRACE(0x10cdafc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdafc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdafc1 mov ebp, esp */
  EBP = (ESP);
  /* 10cdafc3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdafc9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10cdafd0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cdafd3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 10cdafd9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdafdd jne 0x10cdafe6 */
  if (!C.zf) goto L_10cdafe6;
  /* 10cdafdf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cdafe1 jmp 0x10cdb22f */
  goto L_10cdb22f;
L_10cdafe6:;
  /* 10cdafe6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdafe9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10cdafec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdafef and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10cdaff2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdaff5 mov eax, dword ptr [ecx*4 + 0x10cffde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10cffde0)));
  /* 10cdaffc movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10cdb001 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10cdb004 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cdb006 je 0x10cdb018 */
  if (C.zf) goto L_10cdb018;
  /* 10cdb008 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdb00a push 0 */
  push32((uint32_t)(0x0u));
  /* 10cdb00c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdb00f push edx */
  push32((uint32_t)(EDX));
  /* 10cdb010 call 0x10cdae70 */
  push32(0x10cdb015u); f_10cdae70();
  /* 10cdb015 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cdb018:;
  /* 10cdb018 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdb01b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10cdb01e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdb021 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10cdb024 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdb027 mov edx, dword ptr [eax*4 + 0x10cffde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10cffde0)));
  /* 10cdb02e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10cdb033 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10cdb038 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdb03a je 0x10cdb14c */
  if (C.zf) goto L_10cdb14c;
  /* 10cdb040 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdb043 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10cdb046 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10cdb04d:;
  /* 10cdb04d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdb050 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdb053 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdb056 jae 0x10cdb14a */
  if (!C.cf) goto L_10cdb14a;
  /* 10cdb05c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10cdb062 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10cdb065:;
  /* 10cdb065 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdb068 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10cdb06e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdb070 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdb076 jge 0x10cdb0d7 */
  if ((C.sf==C.of)) goto L_10cdb0d7;
  /* 10cdb078 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdb07b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdb07e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdb081 jae 0x10cdb0d7 */
  if (!C.cf) goto L_10cdb0d7;
  /* 10cdb083 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdb086 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10cdb088 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 10cdb08e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdb091 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdb094 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cdb097 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 10cdb09e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdb0a1 jne 0x10cdb0c1 */
  if (!C.zf) goto L_10cdb0c1;
  /* 10cdb0a3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 10cdb0a9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdb0ac mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 10cdb0b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdb0b5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 10cdb0b8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdb0bb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdb0be mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10cdb0c1:;
  /* 10cdb0c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdb0c4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 10cdb0ca mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10cdb0cc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdb0cf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdb0d2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10cdb0d5 jmp 0x10cdb065 */
  goto L_10cdb065;
L_10cdb0d7:;
  /* 10cdb0d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cdb0d9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10cdb0df push edx */
  push32((uint32_t)(EDX));
  /* 10cdb0e0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdb0e3 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 10cdb0e9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdb0eb push eax */
  push32((uint32_t)(EAX));
  /* 10cdb0ec lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10cdb0f2 push edx */
  push32((uint32_t)(EDX));
  /* 10cdb0f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdb0f6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10cdb0f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdb0fc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10cdb0ff imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdb102 mov edx, dword ptr [eax*4 + 0x10cffde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10cffde0)));
  /* 10cdb109 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 10cdb10c push eax */
  push32((uint32_t)(EAX));
  /* 10cdb10d call dword ptr [0x10d00230] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00230))), 0x10cdb113u);
  /* 10cdb113 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdb115 je 0x10cdb13a */
  if (C.zf) goto L_10cdb13a;
  /* 10cdb117 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cdb11a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdb120 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10cdb123 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdb126 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10cdb12c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdb12e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdb134 jge 0x10cdb138 */
  if ((C.sf==C.of)) goto L_10cdb138;
  /* 10cdb136 jmp 0x10cdb14a */
  goto L_10cdb14a;
L_10cdb138:;
  /* 10cdb138 jmp 0x10cdb145 */
  goto L_10cdb145;
L_10cdb13a:;
  /* 10cdb13a call dword ptr [0x10d00270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00270))), 0x10cdb140u);
  /* 10cdb140 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10cdb143 jmp 0x10cdb14a */
  goto L_10cdb14a;
L_10cdb145:;
  /* 10cdb145 jmp 0x10cdb04d */
  goto L_10cdb04d;
L_10cdb14a:;
  /* 10cdb14a jmp 0x10cdb19c */
  goto L_10cdb19c;
L_10cdb14c:;
  /* 10cdb14c push 0 */
  push32((uint32_t)(0x0u));
  /* 10cdb14e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 10cdb154 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdb155 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdb158 push edx */
  push32((uint32_t)(EDX));
  /* 10cdb159 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdb15c push eax */
  push32((uint32_t)(EAX));
  /* 10cdb15d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdb160 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10cdb163 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdb166 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10cdb169 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdb16c mov eax, dword ptr [ecx*4 + 0x10cffde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10cffde0)));
  /* 10cdb173 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 10cdb176 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdb177 call dword ptr [0x10d00230] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00230))), 0x10cdb17du);
  /* 10cdb17d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdb17f je 0x10cdb193 */
  if (C.zf) goto L_10cdb193;
  /* 10cdb181 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10cdb188 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 10cdb18e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10cdb191 jmp 0x10cdb19c */
  goto L_10cdb19c;
L_10cdb193:;
  /* 10cdb193 call dword ptr [0x10d00270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00270))), 0x10cdb199u);
  /* 10cdb199 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10cdb19c:;
  /* 10cdb19c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdb1a0 jne 0x10cdb226 */
  if (!C.zf) goto L_10cdb226;
  /* 10cdb1a6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdb1aa je 0x10cdb1da */
  if (C.zf) goto L_10cdb1da;
  /* 10cdb1ac cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdb1b0 jne 0x10cdb1c9 */
  if (!C.zf) goto L_10cdb1c9;
  /* 10cdb1b2 call 0x10cda560 */
  push32(0x10cdb1b7u); f_10cda560();
  /* 10cdb1b7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10cdb1bd call 0x10cda570 */
  push32(0x10cdb1c2u); f_10cda570();
  /* 10cdb1c2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdb1c5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10cdb1c7 jmp 0x10cdb1d5 */
  goto L_10cdb1d5;
L_10cdb1c9:;
  /* 10cdb1c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdb1cc push edx */
  push32((uint32_t)(EDX));
  /* 10cdb1cd call 0x10cda4c0 */
  push32(0x10cdb1d2u); f_10cda4c0();
  /* 10cdb1d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cdb1d5:;
  /* 10cdb1d5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cdb1d8 jmp 0x10cdb22f */
  goto L_10cdb22f;
L_10cdb1da:;
  /* 10cdb1da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdb1dd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10cdb1e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdb1e3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10cdb1e6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdb1e9 mov edx, dword ptr [eax*4 + 0x10cffde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10cffde0)));
  /* 10cdb1f0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10cdb1f5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10cdb1f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdb1fa je 0x10cdb20b */
  if (C.zf) goto L_10cdb20b;
  /* 10cdb1fc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdb1ff movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10cdb202 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdb205 jne 0x10cdb20b */
  if (!C.zf) goto L_10cdb20b;
  /* 10cdb207 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cdb209 jmp 0x10cdb22f */
  goto L_10cdb22f;
L_10cdb20b:;
  /* 10cdb20b call 0x10cda560 */
  push32(0x10cdb210u); f_10cda560();
  /* 10cdb210 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 10cdb216 call 0x10cda570 */
  push32(0x10cdb21bu); f_10cda570();
  /* 10cdb21b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10cdb221 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cdb224 jmp 0x10cdb22f */
  goto L_10cdb22f;
L_10cdb226:;
  /* 10cdb226 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cdb229 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10cdb22f:;
  /* 10cdb22f mov esp, ebp */
  ESP = (EBP);
  /* 10cdb231 pop ebp */
  EBP = (pop32());
  /* 10cdb232 ret  */
  ESPCHK(0x10cdafc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b240 @ 0x10cdb240 (199 bytes, 68 insns) */
void f_10cdb240(void) {
  FTRACE(0x10cdb240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdb240 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdb241 mov ebp, esp */
  EBP = (ESP);
  /* 10cdb243 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdb244 push ebx */
  push32((uint32_t)(EBX));
  /* 10cdb245 push esi */
  push32((uint32_t)(ESI));
  /* 10cdb246 push edi */
  push32((uint32_t)(EDI));
L_10cdb247:;
  /* 10cdb247 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdb24b jne 0x10cdb26b */
  if (!C.zf) goto L_10cdb26b;
  /* 10cdb24d push 0x10cf9e5c */
  push32((uint32_t)(0x10cf9e5cu));
  /* 10cdb252 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cdb254 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10cdb256 push 0x10cf9f28 */
  push32((uint32_t)(0x10cf9f28u));
  /* 10cdb25b push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdb25d call 0x10cd1750 */
  push32(0x10cdb262u); f_10cd1750();
  /* 10cdb262 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdb265 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdb268 jne 0x10cdb26b */
  if (!C.zf) goto L_10cdb26b;
  /* 10cdb26a int3  */
  x86_unimpl("int3 @ 0x10cdb26a");
L_10cdb26b:;
  /* 10cdb26b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cdb26d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdb26f jne 0x10cdb247 */
  if (!C.zf) goto L_10cdb247;
  /* 10cdb271 mov ecx, dword ptr [0x10cfe61c] */
  ECX = (r32((uint32_t)(0x10cfe61c)));
  /* 10cdb277 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdb27a mov dword ptr [0x10cfe61c], ecx */
  w32((uint32_t)(0x10cfe61c), (ECX));
  /* 10cdb280 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdb283 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10cdb286 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10cdb288 push 0x10cf9f28 */
  push32((uint32_t)(0x10cf9f28u));
  /* 10cdb28d push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdb28f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10cdb294 call 0x10cd2690 */
  push32(0x10cdb299u); f_10cd2690();
  /* 10cdb299 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdb29c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdb29f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10cdb2a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdb2a5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdb2a9 je 0x10cdb2c6 */
  if (C.zf) goto L_10cdb2c6;
  /* 10cdb2ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdb2ae mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10cdb2b1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10cdb2b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdb2b7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10cdb2ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdb2bd mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 10cdb2c4 jmp 0x10cdb2eb */
  goto L_10cdb2eb;
L_10cdb2c6:;
  /* 10cdb2c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdb2c9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10cdb2cc or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10cdb2cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdb2d2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10cdb2d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdb2d8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdb2db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdb2de mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10cdb2e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdb2e4 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_10cdb2eb:;
  /* 10cdb2eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdb2ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdb2f1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10cdb2f4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10cdb2f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdb2f9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10cdb300 pop edi */
  EDI = (pop32());
  /* 10cdb301 pop esi */
  ESI = (pop32());
  /* 10cdb302 pop ebx */
  EBX = (pop32());
  /* 10cdb303 mov esp, ebp */
  ESP = (EBP);
  /* 10cdb305 pop ebp */
  EBP = (pop32());
  /* 10cdb306 ret  */
  ESPCHK(0x10cdb240u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x10cdb310 (50 bytes, 17 insns) */
void f_10cdb310(void) {
  FTRACE(0x10cdb310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdb310 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdb311 mov ebp, esp */
  EBP = (ESP);
  /* 10cdb313 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdb316 cmp eax, dword ptr [0x10cfff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cfff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdb31c jb 0x10cdb322 */
  if (C.cf) goto L_10cdb322;
  /* 10cdb31e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cdb320 jmp 0x10cdb340 */
  goto L_10cdb340;
L_10cdb322:;
  /* 10cdb322 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdb325 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10cdb328 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdb32b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10cdb32e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdb331 mov eax, dword ptr [ecx*4 + 0x10cffde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10cffde0)));
  /* 10cdb338 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10cdb33d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_10cdb340:;
  /* 10cdb340 pop ebp */
  EBP = (pop32());
  /* 10cdb341 ret  */
  ESPCHK(0x10cdb310u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b350 @ 0x10cdb350 (300 bytes, 80 insns) */
void f_10cdb350(void) {
  FTRACE(0x10cdb350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdb350 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdb351 mov ebp, esp */
  EBP = (ESP);
  /* 10cdb353 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdb354 cmp dword ptr [0x10cffae0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cffae0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdb35b jne 0x10cdb369 */
  if (!C.zf) goto L_10cdb369;
  /* 10cdb35d mov dword ptr [0x10cffae0], 0x200 */
  w32((uint32_t)(0x10cffae0), (0x200u));
  /* 10cdb367 jmp 0x10cdb37c */
  goto L_10cdb37c;
L_10cdb369:;
  /* 10cdb369 cmp dword ptr [0x10cffae0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x10cffae0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdb370 jge 0x10cdb37c */
  if ((C.sf==C.of)) goto L_10cdb37c;
  /* 10cdb372 mov dword ptr [0x10cffae0], 0x14 */
  w32((uint32_t)(0x10cffae0), (0x14u));
L_10cdb37c:;
  /* 10cdb37c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 10cdb381 push 0x10cf9f34 */
  push32((uint32_t)(0x10cf9f34u));
  /* 10cdb386 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdb388 push 4 */
  push32((uint32_t)(0x4u));
  /* 10cdb38a mov eax, dword ptr [0x10cffae0] */
  EAX = (r32((uint32_t)(0x10cffae0)));
  /* 10cdb38f push eax */
  push32((uint32_t)(EAX));
  /* 10cdb390 call 0x10cd2aa0 */
  push32(0x10cdb395u); f_10cd2aa0();
  /* 10cdb395 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdb398 mov dword ptr [0x10cfe790], eax */
  w32((uint32_t)(0x10cfe790), (EAX));
  /* 10cdb39d cmp dword ptr [0x10cfe790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdb3a4 jne 0x10cdb3e5 */
  if (!C.zf) goto L_10cdb3e5;
  /* 10cdb3a6 mov dword ptr [0x10cffae0], 0x14 */
  w32((uint32_t)(0x10cffae0), (0x14u));
  /* 10cdb3b0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 10cdb3b5 push 0x10cf9f34 */
  push32((uint32_t)(0x10cf9f34u));
  /* 10cdb3ba push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdb3bc push 4 */
  push32((uint32_t)(0x4u));
  /* 10cdb3be mov ecx, dword ptr [0x10cffae0] */
  ECX = (r32((uint32_t)(0x10cffae0)));
  /* 10cdb3c4 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdb3c5 call 0x10cd2aa0 */
  push32(0x10cdb3cau); f_10cd2aa0();
  /* 10cdb3ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdb3cd mov dword ptr [0x10cfe790], eax */
  w32((uint32_t)(0x10cfe790), (EAX));
  /* 10cdb3d2 cmp dword ptr [0x10cfe790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdb3d9 jne 0x10cdb3e5 */
  if (!C.zf) goto L_10cdb3e5;
  /* 10cdb3db push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10cdb3dd call 0x10cd1600 */
  push32(0x10cdb3e2u); f_10cd1600();
  /* 10cdb3e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cdb3e5:;
  /* 10cdb3e5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10cdb3ec jmp 0x10cdb3f7 */
  goto L_10cdb3f7;
L_10cdb3ee:;
  /* 10cdb3ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdb3f1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdb3f4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10cdb3f7:;
  /* 10cdb3f7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdb3fb jge 0x10cdb416 */
  if ((C.sf==C.of)) goto L_10cdb416;
  /* 10cdb3fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdb400 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10cdb403 add eax, 0x10cfd120 */
  { uint32_t _a=(EAX),_b=(0x10cfd120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdb408 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdb40b mov edx, dword ptr [0x10cfe790] */
  EDX = (r32((uint32_t)(0x10cfe790)));
  /* 10cdb411 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10cdb414 jmp 0x10cdb3ee */
  goto L_10cdb3ee;
L_10cdb416:;
  /* 10cdb416 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10cdb41d jmp 0x10cdb428 */
  goto L_10cdb428;
L_10cdb41f:;
  /* 10cdb41f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdb422 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdb425 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10cdb428:;
  /* 10cdb428 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdb42c jge 0x10cdb478 */
  if ((C.sf==C.of)) goto L_10cdb478;
  /* 10cdb42e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdb431 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10cdb434 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdb437 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10cdb43a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdb43d mov eax, dword ptr [ecx*4 + 0x10cffde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10cffde0)));
  /* 10cdb444 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdb448 je 0x10cdb466 */
  if (C.zf) goto L_10cdb466;
  /* 10cdb44a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdb44d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10cdb450 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdb453 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10cdb456 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdb459 mov eax, dword ptr [ecx*4 + 0x10cffde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10cffde0)));
  /* 10cdb460 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdb464 jne 0x10cdb476 */
  if (!C.zf) goto L_10cdb476;
L_10cdb466:;
  /* 10cdb466 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdb469 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10cdb46c mov dword ptr [ecx + 0x10cfd130], 0xffffffff */
  w32((uint32_t)(ECX + 0x10cfd130), (0xffffffffu));
L_10cdb476:;
  /* 10cdb476 jmp 0x10cdb41f */
  goto L_10cdb41f;
L_10cdb478:;
  /* 10cdb478 mov esp, ebp */
  ESP = (EBP);
  /* 10cdb47a pop ebp */
  EBP = (pop32());
  /* 10cdb47b ret  */
  ESPCHK(0x10cdb350u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b480 @ 0x10cdb480 (26 bytes, 9 insns) */
void f_10cdb480(void) {
  FTRACE(0x10cdb480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdb480 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdb481 mov ebp, esp */
  EBP = (ESP);
  /* 10cdb483 call 0x10cdc080 */
  push32(0x10cdb488u); f_10cdc080();
  /* 10cdb488 movsx eax, byte ptr [0x10cfe434] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x10cfe434))));
  /* 10cdb48f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdb491 je 0x10cdb498 */
  if (C.zf) goto L_10cdb498;
  /* 10cdb493 call 0x10cdbe40 */
  push32(0x10cdb498u); f_10cdbe40();
L_10cdb498:;
  /* 10cdb498 pop ebp */
  EBP = (pop32());
  /* 10cdb499 ret  */
  ESPCHK(0x10cdb480u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b4a0 @ 0x10cdb4a0 (61 bytes, 20 insns) */
void f_10cdb4a0(void) {
  FTRACE(0x10cdb4a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdb4a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdb4a1 mov ebp, esp */
  EBP = (ESP);
  /* 10cdb4a3 cmp dword ptr [ebp + 8], 0x10cfd120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10cfd120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdb4aa jb 0x10cdb4ce */
  if (C.cf) goto L_10cdb4ce;
  /* 10cdb4ac cmp dword ptr [ebp + 8], 0x10cfd380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10cfd380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdb4b3 ja 0x10cdb4ce */
  if ((!C.cf&&!C.zf)) goto L_10cdb4ce;
  /* 10cdb4b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdb4b8 sub eax, 0x10cfd120 */
  { uint32_t _a=(EAX),_b=(0x10cfd120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdb4bd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10cdb4c0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdb4c3 push eax */
  push32((uint32_t)(EAX));
  /* 10cdb4c4 call 0x10cd6090 */
  push32(0x10cdb4c9u); f_10cd6090();
  /* 10cdb4c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdb4cc jmp 0x10cdb4db */
  goto L_10cdb4db;
L_10cdb4ce:;
  /* 10cdb4ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdb4d1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdb4d4 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdb4d5 call dword ptr [0x10d002c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002c0))), 0x10cdb4dbu);
L_10cdb4db:;
  /* 10cdb4db pop ebp */
  EBP = (pop32());
  /* 10cdb4dc ret  */
  ESPCHK(0x10cdb4a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b4e0 @ 0x10cdb4e0 (41 bytes, 16 insns) */
void f_10cdb4e0(void) {
  FTRACE(0x10cdb4e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdb4e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdb4e1 mov ebp, esp */
  EBP = (ESP);
  /* 10cdb4e3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdb4e7 jge 0x10cdb4fa */
  if ((C.sf==C.of)) goto L_10cdb4fa;
  /* 10cdb4e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdb4ec add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdb4ef push eax */
  push32((uint32_t)(EAX));
  /* 10cdb4f0 call 0x10cd6090 */
  push32(0x10cdb4f5u); f_10cd6090();
  /* 10cdb4f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdb4f8 jmp 0x10cdb507 */
  goto L_10cdb507;
L_10cdb4fa:;
  /* 10cdb4fa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdb4fd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdb500 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdb501 call dword ptr [0x10d002c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002c0))), 0x10cdb507u);
L_10cdb507:;
  /* 10cdb507 pop ebp */
  EBP = (pop32());
  /* 10cdb508 ret  */
  ESPCHK(0x10cdb4e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b510 @ 0x10cdb510 (61 bytes, 20 insns) */
void f_10cdb510(void) {
  FTRACE(0x10cdb510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdb510 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdb511 mov ebp, esp */
  EBP = (ESP);
  /* 10cdb513 cmp dword ptr [ebp + 8], 0x10cfd120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10cfd120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdb51a jb 0x10cdb53e */
  if (C.cf) goto L_10cdb53e;
  /* 10cdb51c cmp dword ptr [ebp + 8], 0x10cfd380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10cfd380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdb523 ja 0x10cdb53e */
  if ((!C.cf&&!C.zf)) goto L_10cdb53e;
  /* 10cdb525 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdb528 sub eax, 0x10cfd120 */
  { uint32_t _a=(EAX),_b=(0x10cfd120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdb52d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10cdb530 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdb533 push eax */
  push32((uint32_t)(EAX));
  /* 10cdb534 call 0x10cd6130 */
  push32(0x10cdb539u); f_10cd6130();
  /* 10cdb539 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdb53c jmp 0x10cdb54b */
  goto L_10cdb54b;
L_10cdb53e:;
  /* 10cdb53e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdb541 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdb544 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdb545 call dword ptr [0x10d002c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002c4))), 0x10cdb54bu);
L_10cdb54b:;
  /* 10cdb54b pop ebp */
  EBP = (pop32());
  /* 10cdb54c ret  */
  ESPCHK(0x10cdb510u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b550 @ 0x10cdb550 (41 bytes, 16 insns) */
void f_10cdb550(void) {
  FTRACE(0x10cdb550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdb550 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdb551 mov ebp, esp */
  EBP = (ESP);
  /* 10cdb553 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdb557 jge 0x10cdb56a */
  if ((C.sf==C.of)) goto L_10cdb56a;
  /* 10cdb559 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdb55c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdb55f push eax */
  push32((uint32_t)(EAX));
  /* 10cdb560 call 0x10cd6130 */
  push32(0x10cdb565u); f_10cd6130();
  /* 10cdb565 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdb568 jmp 0x10cdb577 */
  goto L_10cdb577;
L_10cdb56a:;
  /* 10cdb56a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdb56d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdb570 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdb571 call dword ptr [0x10d002c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002c4))), 0x10cdb577u);
L_10cdb577:;
  /* 10cdb577 pop ebp */
  EBP = (pop32());
  /* 10cdb578 ret  */
  ESPCHK(0x10cdb550u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b580 @ 0x10cdb580 (119 bytes, 34 insns) */
void f_10cdb580(void) {
  FTRACE(0x10cdb580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdb580 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdb581 mov ebp, esp */
  EBP = (ESP);
  /* 10cdb583 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdb586 push 0x10cfe78c */
  push32((uint32_t)(0x10cfe78cu));
  /* 10cdb58b call dword ptr [0x10d00244] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00244))), 0x10cdb591u);
  /* 10cdb591 cmp dword ptr [0x10cfe77c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe77c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdb598 je 0x10cdb5b8 */
  if (C.zf) goto L_10cdb5b8;
  /* 10cdb59a push 0x10cfe78c */
  push32((uint32_t)(0x10cfe78cu));
  /* 10cdb59f call dword ptr [0x10d00234] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00234))), 0x10cdb5a5u);
  /* 10cdb5a5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10cdb5a7 call 0x10cd6090 */
  push32(0x10cdb5acu); f_10cd6090();
  /* 10cdb5ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdb5af mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10cdb5b6 jmp 0x10cdb5bf */
  goto L_10cdb5bf;
L_10cdb5b8:;
  /* 10cdb5b8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10cdb5bf:;
  /* 10cdb5bf mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 10cdb5c3 push eax */
  push32((uint32_t)(EAX));
  /* 10cdb5c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdb5c7 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdb5c8 call 0x10cdb600 */
  push32(0x10cdb5cdu); f_10cdb600();
  /* 10cdb5cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdb5d0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10cdb5d3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdb5d7 je 0x10cdb5e5 */
  if (C.zf) goto L_10cdb5e5;
  /* 10cdb5d9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10cdb5db call 0x10cd6130 */
  push32(0x10cdb5e0u); f_10cd6130();
  /* 10cdb5e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdb5e3 jmp 0x10cdb5f0 */
  goto L_10cdb5f0;
L_10cdb5e5:;
  /* 10cdb5e5 push 0x10cfe78c */
  push32((uint32_t)(0x10cfe78cu));
  /* 10cdb5ea call dword ptr [0x10d00234] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00234))), 0x10cdb5f0u);
L_10cdb5f0:;
  /* 10cdb5f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdb5f3 mov esp, ebp */
  ESP = (EBP);
  /* 10cdb5f5 pop ebp */
  EBP = (pop32());
  /* 10cdb5f6 ret  */
  ESPCHK(0x10cdb580u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b600 @ 0x10cdb600 (160 bytes, 50 insns) */
void f_10cdb600(void) {
  FTRACE(0x10cdb600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdb600 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdb601 mov ebp, esp */
  EBP = (ESP);
  /* 10cdb603 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdb606 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdb60a jne 0x10cdb613 */
  if (!C.zf) goto L_10cdb613;
  /* 10cdb60c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cdb60e jmp 0x10cdb69c */
  goto L_10cdb69c;
L_10cdb613:;
  /* 10cdb613 cmp dword ptr [0x10cfe600], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe600))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdb61a jne 0x10cdb64a */
  if (!C.zf) goto L_10cdb64a;
  /* 10cdb61c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdb61f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cdb624 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdb629 jle 0x10cdb63b */
  if ((C.zf||C.sf!=C.of)) goto L_10cdb63b;
  /* 10cdb62b call 0x10cda560 */
  push32(0x10cdb630u); f_10cda560();
  /* 10cdb630 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10cdb636 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cdb639 jmp 0x10cdb69c */
  goto L_10cdb69c;
L_10cdb63b:;
  /* 10cdb63b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdb63e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 10cdb641 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10cdb643 mov eax, 1 */
  EAX = (0x1u);
  /* 10cdb648 jmp 0x10cdb69c */
  goto L_10cdb69c;
L_10cdb64a:;
  /* 10cdb64a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10cdb651 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10cdb654 push eax */
  push32((uint32_t)(EAX));
  /* 10cdb655 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cdb657 mov ecx, dword ptr [0x10cfcea4] */
  ECX = (r32((uint32_t)(0x10cfcea4)));
  /* 10cdb65d push ecx */
  push32((uint32_t)(ECX));
  /* 10cdb65e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdb661 push edx */
  push32((uint32_t)(EDX));
  /* 10cdb662 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdb664 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 10cdb667 push eax */
  push32((uint32_t)(EAX));
  /* 10cdb668 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10cdb66d mov ecx, dword ptr [0x10cfe610] */
  ECX = (r32((uint32_t)(0x10cfe610)));
  /* 10cdb673 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdb674 call dword ptr [0x10d0029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d0029c))), 0x10cdb67au);
  /* 10cdb67a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cdb67d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdb681 je 0x10cdb689 */
  if (C.zf) goto L_10cdb689;
  /* 10cdb683 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdb687 je 0x10cdb699 */
  if (C.zf) goto L_10cdb699;
L_10cdb689:;
  /* 10cdb689 call 0x10cda560 */
  push32(0x10cdb68eu); f_10cda560();
  /* 10cdb68e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10cdb694 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cdb697 jmp 0x10cdb69c */
  goto L_10cdb69c;
L_10cdb699:;
  /* 10cdb699 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10cdb69c:;
  /* 10cdb69c mov esp, ebp */
  ESP = (EBP);
  /* 10cdb69e pop ebp */
  EBP = (pop32());
  /* 10cdb69f ret  */
  ESPCHK(0x10cdb600u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x10cdb6a0 (32 bytes, 18 insns) */
void f_10cdb6a0(void) {
  FTRACE(0x10cdb6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdb6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdb6a1 mov ebp, esp */
  EBP = (ESP);
  /* 10cdb6a3 push ebx */
  push32((uint32_t)(EBX));
  /* 10cdb6a4 push esi */
  push32((uint32_t)(ESI));
  /* 10cdb6a5 push edi */
  push32((uint32_t)(EDI));
  /* 10cdb6a6 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdb6a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cdb6a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cdb6ab push 0x10cdb6b8 */
  push32((uint32_t)(0x10cdb6b8u));
  /* 10cdb6b0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10cdb6b3 call 0x10ce2dec */
  push32(0x10cdb6b8u); f_10ce2dec();
  /* 10cdb6b8 pop ebp */
  EBP = (pop32());
  /* 10cdb6b9 pop edi */
  EDI = (pop32());
  /* 10cdb6ba pop esi */
  ESI = (pop32());
  /* 10cdb6bb pop ebx */
  EBX = (pop32());
  /* 10cdb6bc mov esp, ebp */
  ESP = (EBP);
  /* 10cdb6be pop ebp */
  EBP = (pop32());
  /* 10cdb6bf ret  */
  ESPCHK(0x10cdb6a0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x10cdb6e2 (104 bytes, 33 insns) */
void f_10cdb6e2(void) {
  FTRACE(0x10cdb6e2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdb6e2 push ebx */
  push32((uint32_t)(EBX));
  /* 10cdb6e3 push esi */
  push32((uint32_t)(ESI));
  /* 10cdb6e4 push edi */
  push32((uint32_t)(EDI));
  /* 10cdb6e5 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10cdb6e9 push eax */
  push32((uint32_t)(EAX));
  /* 10cdb6ea push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 10cdb6ec push 0x10cdb6c0 */
  push32((uint32_t)(0x10cdb6c0u));
  /* 10cdb6f1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 10cdb6f8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_10cdb6ff:;
  /* 10cdb6ff mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 10cdb703 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 10cdb706 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 10cdb709 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdb70c je 0x10cdb73c */
  if (C.zf) goto L_10cdb73c;
  /* 10cdb70e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdb712 je 0x10cdb73c */
  if (C.zf) goto L_10cdb73c;
  /* 10cdb714 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 10cdb717 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 10cdb71a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 10cdb71e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 10cdb721 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdb726 jne 0x10cdb73a */
  if (!C.zf) goto L_10cdb73a;
  /* 10cdb728 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10cdb72d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 10cdb731 call 0x10cdb776 */
  push32(0x10cdb736u); f_10cdb776();
  /* 10cdb736 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x10cdb73au);
L_10cdb73a:;
  /* 10cdb73a jmp 0x10cdb6ff */
  goto L_10cdb6ff;
L_10cdb73c:;
  /* 10cdb73c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 10cdb743 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdb746 pop edi */
  EDI = (pop32());
  /* 10cdb747 pop esi */
  ESI = (pop32());
  /* 10cdb748 pop ebx */
  EBX = (pop32());
  /* 10cdb749 ret  */
  ESPCHK(0x10cdb6e2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b776 @ 0x10cdb776 (24 bytes, 10 insns) */
void f_10cdb776(void) {
  FTRACE(0x10cdb776u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdb776 push ebx */
  push32((uint32_t)(EBX));
  /* 10cdb777 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdb778 mov ebx, 0x10cfd3b8 */
  EBX = (0x10cfd3b8u);
  /* 10cdb77d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdb780 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 10cdb783 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 10cdb786 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 10cdb789 pop ecx */
  ECX = (pop32());
  /* 10cdb78a pop ebx */
  EBX = (pop32());
  /* 10cdb78b ret 4 */
  ESPCHK(0x10cdb776u, _esp0);
  ESP += 8; return;
}

/* FUN_1000b855 @ 0x10cdb855 (27 bytes, 11 insns) */
void f_10cdb855(void) {
  FTRACE(0x10cdb855u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdb855 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdb856 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10cdb85a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 10cdb85c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10cdb85f push eax */
  push32((uint32_t)(EAX));
  /* 10cdb860 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 10cdb863 push eax */
  push32((uint32_t)(EAX));
  /* 10cdb864 call 0x10cdb6e2 */
  push32(0x10cdb869u); f_10cdb6e2();
  /* 10cdb869 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdb86c pop ebp */
  EBP = (pop32());
  /* 10cdb86d ret 4 */
  ESPCHK(0x10cdb855u, _esp0);
  ESP += 8; return;
}

/* FUN_1000b870 @ 0x10cdb870 (482 bytes, 138 insns) */
void f_10cdb870(void) {
  FTRACE(0x10cdb870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdb870 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdb871 mov ebp, esp */
  EBP = (ESP);
  /* 10cdb873 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdb876 push esi */
  push32((uint32_t)(ESI));
  /* 10cdb877 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 10cdb87e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10cdb880 call 0x10cd6090 */
  push32(0x10cdb885u); f_10cd6090();
  /* 10cdb885 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdb888 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10cdb88f jmp 0x10cdb89a */
  goto L_10cdb89a;
L_10cdb891:;
  /* 10cdb891 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdb894 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdb897 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10cdb89a:;
  /* 10cdb89a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdb89e jge 0x10cdba40 */
  if ((C.sf==C.of)) goto L_10cdba40;
  /* 10cdb8a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdb8a7 cmp dword ptr [ecx*4 + 0x10cffde0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10cffde0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdb8af je 0x10cdb9a6 */
  if (C.zf) goto L_10cdb9a6;
  /* 10cdb8b5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdb8b8 mov eax, dword ptr [edx*4 + 0x10cffde0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10cffde0)));
  /* 10cdb8bf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cdb8c2 jmp 0x10cdb8cd */
  goto L_10cdb8cd;
L_10cdb8c4:;
  /* 10cdb8c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdb8c7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdb8ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10cdb8cd:;
  /* 10cdb8cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdb8d0 mov eax, dword ptr [edx*4 + 0x10cffde0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10cffde0)));
  /* 10cdb8d7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdb8dc cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdb8df jae 0x10cdb996 */
  if (!C.cf) goto L_10cdb996;
  /* 10cdb8e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdb8e8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10cdb8ec and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10cdb8ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cdb8f1 jne 0x10cdb991 */
  if (!C.zf) goto L_10cdb991;
  /* 10cdb8f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdb8fa cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdb8fe jne 0x10cdb939 */
  if (!C.zf) goto L_10cdb939;
  /* 10cdb900 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10cdb902 call 0x10cd6090 */
  push32(0x10cdb907u); f_10cd6090();
  /* 10cdb907 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdb90a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdb90d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdb911 jne 0x10cdb92f */
  if (!C.zf) goto L_10cdb92f;
  /* 10cdb913 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdb916 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdb919 push edx */
  push32((uint32_t)(EDX));
  /* 10cdb91a call dword ptr [0x10d002bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002bc))), 0x10cdb920u);
  /* 10cdb920 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdb923 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10cdb926 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdb929 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdb92c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10cdb92f:;
  /* 10cdb92f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10cdb931 call 0x10cd6130 */
  push32(0x10cdb936u); f_10cd6130();
  /* 10cdb936 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cdb939:;
  /* 10cdb939 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdb93c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdb93f push eax */
  push32((uint32_t)(EAX));
  /* 10cdb940 call dword ptr [0x10d002c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002c0))), 0x10cdb946u);
  /* 10cdb946 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdb949 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10cdb94d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10cdb950 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cdb952 je 0x10cdb966 */
  if (C.zf) goto L_10cdb966;
  /* 10cdb954 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdb957 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdb95a push eax */
  push32((uint32_t)(EAX));
  /* 10cdb95b call dword ptr [0x10d002c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002c4))), 0x10cdb961u);
  /* 10cdb961 jmp 0x10cdb8c4 */
  goto L_10cdb8c4;
L_10cdb966:;
  /* 10cdb966 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdb969 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10cdb96f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdb972 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10cdb975 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdb978 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdb97b sub eax, dword ptr [edx*4 + 0x10cffde0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x10cffde0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdb982 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10cdb983 mov esi, 0x24 */
  ESI = (0x24u);
  /* 10cdb988 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10cdb98a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdb98c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10cdb98f jmp 0x10cdb996 */
  goto L_10cdb996;
L_10cdb991:;
  /* 10cdb991 jmp 0x10cdb8c4 */
  goto L_10cdb8c4;
L_10cdb996:;
  /* 10cdb996 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdb99a je 0x10cdb9a1 */
  if (C.zf) goto L_10cdb9a1;
  /* 10cdb99c jmp 0x10cdba40 */
  goto L_10cdba40;
L_10cdb9a1:;
  /* 10cdb9a1 jmp 0x10cdba3b */
  goto L_10cdba3b;
L_10cdb9a6:;
  /* 10cdb9a6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10cdb9a8 push 0x10cf9f3c */
  push32((uint32_t)(0x10cf9f3cu));
  /* 10cdb9ad push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdb9af push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10cdb9b4 call 0x10cd2690 */
  push32(0x10cdb9b9u); f_10cd2690();
  /* 10cdb9b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdb9bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cdb9bf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdb9c3 je 0x10cdba39 */
  if (C.zf) goto L_10cdba39;
  /* 10cdb9c5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdb9c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdb9cb mov dword ptr [eax*4 + 0x10cffde0], ecx */
  w32((uint32_t)(EAX*4 + 0x10cffde0), (ECX));
  /* 10cdb9d2 mov edx, dword ptr [0x10cfff1c] */
  EDX = (r32((uint32_t)(0x10cfff1c)));
  /* 10cdb9d8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdb9db mov dword ptr [0x10cfff1c], edx */
  w32((uint32_t)(0x10cfff1c), (EDX));
  /* 10cdb9e1 jmp 0x10cdb9ec */
  goto L_10cdb9ec;
L_10cdb9e3:;
  /* 10cdb9e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdb9e6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdb9e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10cdb9ec:;
  /* 10cdb9ec mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdb9ef mov edx, dword ptr [ecx*4 + 0x10cffde0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10cffde0)));
  /* 10cdb9f6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdb9fc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdb9ff jae 0x10cdba24 */
  if (!C.cf) goto L_10cdba24;
  /* 10cdba01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdba04 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10cdba08 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdba0b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10cdba11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdba14 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10cdba18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdba1b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10cdba22 jmp 0x10cdb9e3 */
  goto L_10cdb9e3;
L_10cdba24:;
  /* 10cdba24 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdba27 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10cdba2a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10cdba2d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdba30 push edx */
  push32((uint32_t)(EDX));
  /* 10cdba31 call 0x10cdbd80 */
  push32(0x10cdba36u); f_10cdbd80();
  /* 10cdba36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cdba39:;
  /* 10cdba39 jmp 0x10cdba40 */
  goto L_10cdba40;
L_10cdba3b:;
  /* 10cdba3b jmp 0x10cdb891 */
  goto L_10cdb891;
L_10cdba40:;
  /* 10cdba40 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10cdba42 call 0x10cd6130 */
  push32(0x10cdba47u); f_10cd6130();
  /* 10cdba47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdba4a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdba4d pop esi */
  ESI = (pop32());
  /* 10cdba4e mov esp, ebp */
  ESP = (EBP);
  /* 10cdba50 pop ebp */
  EBP = (pop32());
  /* 10cdba51 ret  */
  ESPCHK(0x10cdb870u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x10cdba60 (183 bytes, 57 insns) */
void f_10cdba60(void) {
  FTRACE(0x10cdba60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdba60 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdba61 mov ebp, esp */
  EBP = (ESP);
  /* 10cdba63 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdba64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdba67 cmp eax, dword ptr [0x10cfff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cfff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdba6d jae 0x10cdbafa */
  if (!C.cf) goto L_10cdbafa;
  /* 10cdba73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdba76 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10cdba79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdba7c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10cdba7f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdba82 mov eax, dword ptr [ecx*4 + 0x10cffde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10cffde0)));
  /* 10cdba89 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdba8d jne 0x10cdbafa */
  if (!C.zf) goto L_10cdbafa;
  /* 10cdba8f cmp dword ptr [0x10cfe3f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe3f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdba96 jne 0x10cdbada */
  if (!C.zf) goto L_10cdbada;
  /* 10cdba98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdba9b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10cdba9e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdbaa2 je 0x10cdbab2 */
  if (C.zf) goto L_10cdbab2;
  /* 10cdbaa4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdbaa8 je 0x10cdbac0 */
  if (C.zf) goto L_10cdbac0;
  /* 10cdbaaa cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdbaae je 0x10cdbace */
  if (C.zf) goto L_10cdbace;
  /* 10cdbab0 jmp 0x10cdbada */
  goto L_10cdbada;
L_10cdbab2:;
  /* 10cdbab2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdbab5 push edx */
  push32((uint32_t)(EDX));
  /* 10cdbab6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10cdbab8 call dword ptr [0x10d00304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00304))), 0x10cdbabeu);
  /* 10cdbabe jmp 0x10cdbada */
  goto L_10cdbada;
L_10cdbac0:;
  /* 10cdbac0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdbac3 push eax */
  push32((uint32_t)(EAX));
  /* 10cdbac4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10cdbac6 call dword ptr [0x10d00304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00304))), 0x10cdbaccu);
  /* 10cdbacc jmp 0x10cdbada */
  goto L_10cdbada;
L_10cdbace:;
  /* 10cdbace mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdbad1 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdbad2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10cdbad4 call dword ptr [0x10d00304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00304))), 0x10cdbadau);
L_10cdbada:;
  /* 10cdbada mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdbadd sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10cdbae0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdbae3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10cdbae6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdbae9 mov ecx, dword ptr [edx*4 + 0x10cffde0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10cffde0)));
  /* 10cdbaf0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdbaf3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 10cdbaf6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cdbaf8 jmp 0x10cdbb13 */
  goto L_10cdbb13;
L_10cdbafa:;
  /* 10cdbafa call 0x10cda560 */
  push32(0x10cdbaffu); f_10cda560();
  /* 10cdbaff mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10cdbb05 call 0x10cda570 */
  push32(0x10cdbb0au); f_10cda570();
  /* 10cdbb0a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10cdbb10 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10cdbb13:;
  /* 10cdbb13 mov esp, ebp */
  ESP = (EBP);
  /* 10cdbb15 pop ebp */
  EBP = (pop32());
  /* 10cdbb16 ret  */
  ESPCHK(0x10cdba60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb20 @ 0x10cdbb20 (216 bytes, 63 insns) */
void f_10cdbb20(void) {
  FTRACE(0x10cdbb20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdbb20 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdbb21 mov ebp, esp */
  EBP = (ESP);
  /* 10cdbb23 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdbb24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdbb27 cmp eax, dword ptr [0x10cfff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cfff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdbb2d jae 0x10cdbbdb */
  if (!C.cf) goto L_10cdbbdb;
  /* 10cdbb33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdbb36 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10cdbb39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdbb3c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10cdbb3f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdbb42 mov eax, dword ptr [ecx*4 + 0x10cffde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10cffde0)));
  /* 10cdbb49 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10cdbb4e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10cdbb51 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cdbb53 je 0x10cdbbdb */
  if (C.zf) goto L_10cdbbdb;
  /* 10cdbb59 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdbb5c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10cdbb5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdbb62 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10cdbb65 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdbb68 mov ecx, dword ptr [edx*4 + 0x10cffde0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10cffde0)));
  /* 10cdbb6f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdbb73 je 0x10cdbbdb */
  if (C.zf) goto L_10cdbbdb;
  /* 10cdbb75 cmp dword ptr [0x10cfe3f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe3f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdbb7c jne 0x10cdbbba */
  if (!C.zf) goto L_10cdbbba;
  /* 10cdbb7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdbb81 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10cdbb84 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdbb88 je 0x10cdbb98 */
  if (C.zf) goto L_10cdbb98;
  /* 10cdbb8a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdbb8e je 0x10cdbba4 */
  if (C.zf) goto L_10cdbba4;
  /* 10cdbb90 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdbb94 je 0x10cdbbb0 */
  if (C.zf) goto L_10cdbbb0;
  /* 10cdbb96 jmp 0x10cdbbba */
  goto L_10cdbbba;
L_10cdbb98:;
  /* 10cdbb98 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cdbb9a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10cdbb9c call dword ptr [0x10d00304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00304))), 0x10cdbba2u);
  /* 10cdbba2 jmp 0x10cdbbba */
  goto L_10cdbbba;
L_10cdbba4:;
  /* 10cdbba4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cdbba6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10cdbba8 call dword ptr [0x10d00304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00304))), 0x10cdbbaeu);
  /* 10cdbbae jmp 0x10cdbbba */
  goto L_10cdbbba;
L_10cdbbb0:;
  /* 10cdbbb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cdbbb2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10cdbbb4 call dword ptr [0x10d00304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00304))), 0x10cdbbbau);
L_10cdbbba:;
  /* 10cdbbba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdbbbd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10cdbbc0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdbbc3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10cdbbc6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdbbc9 mov edx, dword ptr [eax*4 + 0x10cffde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10cffde0)));
  /* 10cdbbd0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 10cdbbd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cdbbd9 jmp 0x10cdbbf4 */
  goto L_10cdbbf4;
L_10cdbbdb:;
  /* 10cdbbdb call 0x10cda560 */
  push32(0x10cdbbe0u); f_10cda560();
  /* 10cdbbe0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10cdbbe6 call 0x10cda570 */
  push32(0x10cdbbebu); f_10cda570();
  /* 10cdbbeb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10cdbbf1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10cdbbf4:;
  /* 10cdbbf4 mov esp, ebp */
  ESP = (EBP);
  /* 10cdbbf6 pop ebp */
  EBP = (pop32());
  /* 10cdbbf7 ret  */
  ESPCHK(0x10cdbb20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc00 @ 0x10cdbc00 (102 bytes, 30 insns) */
void f_10cdbc00(void) {
  FTRACE(0x10cdbc00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdbc00 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdbc01 mov ebp, esp */
  EBP = (ESP);
  /* 10cdbc03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdbc06 cmp eax, dword ptr [0x10cfff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cfff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdbc0c jae 0x10cdbc4b */
  if (!C.cf) goto L_10cdbc4b;
  /* 10cdbc0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdbc11 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10cdbc14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdbc17 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10cdbc1a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdbc1d mov eax, dword ptr [ecx*4 + 0x10cffde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10cffde0)));
  /* 10cdbc24 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10cdbc29 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10cdbc2c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cdbc2e je 0x10cdbc4b */
  if (C.zf) goto L_10cdbc4b;
  /* 10cdbc30 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdbc33 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10cdbc36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdbc39 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10cdbc3c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdbc3f mov ecx, dword ptr [edx*4 + 0x10cffde0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10cffde0)));
  /* 10cdbc46 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 10cdbc49 jmp 0x10cdbc64 */
  goto L_10cdbc64;
L_10cdbc4b:;
  /* 10cdbc4b call 0x10cda560 */
  push32(0x10cdbc50u); f_10cda560();
  /* 10cdbc50 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10cdbc56 call 0x10cda570 */
  push32(0x10cdbc5bu); f_10cda570();
  /* 10cdbc5b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10cdbc61 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10cdbc64:;
  /* 10cdbc64 pop ebp */
  EBP = (pop32());
  /* 10cdbc65 ret  */
  ESPCHK(0x10cdbc00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc70 @ 0x10cdbc70 (260 bytes, 83 insns) */
void f_10cdbc70(void) {
  FTRACE(0x10cdbc70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdbc70 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdbc71 mov ebp, esp */
  EBP = (ESP);
  /* 10cdbc73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdbc76 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 10cdbc7a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdbc7d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10cdbc80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdbc82 je 0x10cdbc8d */
  if (C.zf) goto L_10cdbc8d;
  /* 10cdbc84 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10cdbc87 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10cdbc8a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_10cdbc8d:;
  /* 10cdbc8d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdbc90 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 10cdbc96 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cdbc98 je 0x10cdbca2 */
  if (C.zf) goto L_10cdbca2;
  /* 10cdbc9a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10cdbc9d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 10cdbc9f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_10cdbca2:;
  /* 10cdbca2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdbca5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 10cdbcab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cdbcad je 0x10cdbcb8 */
  if (C.zf) goto L_10cdbcb8;
  /* 10cdbcaf mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10cdbcb2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10cdbcb5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_10cdbcb8:;
  /* 10cdbcb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdbcbb push eax */
  push32((uint32_t)(EAX));
  /* 10cdbcbc call dword ptr [0x10d0027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d0027c))), 0x10cdbcc2u);
  /* 10cdbcc2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cdbcc5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdbcc9 jne 0x10cdbce2 */
  if (!C.zf) goto L_10cdbce2;
  /* 10cdbccb call dword ptr [0x10d00270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00270))), 0x10cdbcd1u);
  /* 10cdbcd1 push eax */
  push32((uint32_t)(EAX));
  /* 10cdbcd2 call 0x10cda4c0 */
  push32(0x10cdbcd7u); f_10cda4c0();
  /* 10cdbcd7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdbcda or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cdbcdd jmp 0x10cdbd70 */
  goto L_10cdbd70;
L_10cdbce2:;
  /* 10cdbce2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdbce6 jne 0x10cdbcf3 */
  if (!C.zf) goto L_10cdbcf3;
  /* 10cdbce8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10cdbceb or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10cdbcee mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10cdbcf1 jmp 0x10cdbd02 */
  goto L_10cdbd02;
L_10cdbcf3:;
  /* 10cdbcf3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdbcf7 jne 0x10cdbd02 */
  if (!C.zf) goto L_10cdbd02;
  /* 10cdbcf9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10cdbcfc or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10cdbcff mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_10cdbd02:;
  /* 10cdbd02 call 0x10cdb870 */
  push32(0x10cdbd07u); f_10cdb870();
  /* 10cdbd07 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10cdbd0a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdbd0e jne 0x10cdbd2b */
  if (!C.zf) goto L_10cdbd2b;
  /* 10cdbd10 call 0x10cda560 */
  push32(0x10cdbd15u); f_10cda560();
  /* 10cdbd15 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 10cdbd1b call 0x10cda570 */
  push32(0x10cdbd20u); f_10cda570();
  /* 10cdbd20 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10cdbd26 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cdbd29 jmp 0x10cdbd70 */
  goto L_10cdbd70;
L_10cdbd2b:;
  /* 10cdbd2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdbd2e push eax */
  push32((uint32_t)(EAX));
  /* 10cdbd2f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdbd32 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdbd33 call 0x10cdba60 */
  push32(0x10cdbd38u); f_10cdba60();
  /* 10cdbd38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdbd3b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10cdbd3e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 10cdbd41 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10cdbd44 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdbd47 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10cdbd4a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdbd4d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10cdbd50 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdbd53 mov edx, dword ptr [eax*4 + 0x10cffde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10cffde0)));
  /* 10cdbd5a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10cdbd5d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 10cdbd61 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdbd64 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdbd65 call 0x10cdbe10 */
  push32(0x10cdbd6au); f_10cdbe10();
  /* 10cdbd6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdbd6d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10cdbd70:;
  /* 10cdbd70 mov esp, ebp */
  ESP = (EBP);
  /* 10cdbd72 pop ebp */
  EBP = (pop32());
  /* 10cdbd73 ret  */
  ESPCHK(0x10cdbc70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd80 @ 0x10cdbd80 (134 bytes, 44 insns) */
void f_10cdbd80(void) {
  FTRACE(0x10cdbd80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdbd80 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdbd81 mov ebp, esp */
  EBP = (ESP);
  /* 10cdbd83 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdbd84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdbd87 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10cdbd8a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdbd8d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10cdbd90 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdbd93 mov edx, dword ptr [eax*4 + 0x10cffde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10cffde0)));
  /* 10cdbd9a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdbd9c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10cdbd9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdbda2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdbda6 jne 0x10cdbde1 */
  if (!C.zf) goto L_10cdbde1;
  /* 10cdbda8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10cdbdaa call 0x10cd6090 */
  push32(0x10cdbdafu); f_10cd6090();
  /* 10cdbdaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdbdb2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdbdb5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdbdb9 jne 0x10cdbdd7 */
  if (!C.zf) goto L_10cdbdd7;
  /* 10cdbdbb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdbdbe add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdbdc1 push edx */
  push32((uint32_t)(EDX));
  /* 10cdbdc2 call dword ptr [0x10d002bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002bc))), 0x10cdbdc8u);
  /* 10cdbdc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdbdcb mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10cdbdce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdbdd1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdbdd4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10cdbdd7:;
  /* 10cdbdd7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10cdbdd9 call 0x10cd6130 */
  push32(0x10cdbddeu); f_10cd6130();
  /* 10cdbdde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cdbde1:;
  /* 10cdbde1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdbde4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10cdbde7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdbdea and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10cdbded imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdbdf0 mov edx, dword ptr [eax*4 + 0x10cffde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10cffde0)));
  /* 10cdbdf7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 10cdbdfb push eax */
  push32((uint32_t)(EAX));
  /* 10cdbdfc call dword ptr [0x10d002c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002c0))), 0x10cdbe02u);
  /* 10cdbe02 mov esp, ebp */
  ESP = (EBP);
  /* 10cdbe04 pop ebp */
  EBP = (pop32());
  /* 10cdbe05 ret  */
  ESPCHK(0x10cdbd80u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x10cdbe10 (38 bytes, 13 insns) */
void f_10cdbe10(void) {
  FTRACE(0x10cdbe10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdbe10 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdbe11 mov ebp, esp */
  EBP = (ESP);
  /* 10cdbe13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdbe16 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10cdbe19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdbe1c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10cdbe1f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdbe22 mov edx, dword ptr [eax*4 + 0x10cffde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10cffde0)));
  /* 10cdbe29 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 10cdbe2d push eax */
  push32((uint32_t)(EAX));
  /* 10cdbe2e call dword ptr [0x10d002c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002c4))), 0x10cdbe34u);
  /* 10cdbe34 pop ebp */
  EBP = (pop32());
  /* 10cdbe35 ret  */
  ESPCHK(0x10cdbe10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be40 @ 0x10cdbe40 (218 bytes, 63 insns) */
void f_10cdbe40(void) {
  FTRACE(0x10cdbe40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdbe40 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdbe41 mov ebp, esp */
  EBP = (ESP);
  /* 10cdbe43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdbe46 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10cdbe4d push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdbe4f call 0x10cd6090 */
  push32(0x10cdbe54u); f_10cd6090();
  /* 10cdbe54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdbe57 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 10cdbe5e jmp 0x10cdbe69 */
  goto L_10cdbe69;
L_10cdbe60:;
  /* 10cdbe60 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdbe63 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdbe66 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10cdbe69:;
  /* 10cdbe69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdbe6c cmp ecx, dword ptr [0x10cffae0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10cffae0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdbe72 jge 0x10cdbf09 */
  if ((C.sf==C.of)) goto L_10cdbf09;
  /* 10cdbe78 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdbe7b mov eax, dword ptr [0x10cfe790] */
  EAX = (r32((uint32_t)(0x10cfe790)));
  /* 10cdbe80 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdbe84 je 0x10cdbf04 */
  if (C.zf) goto L_10cdbf04;
  /* 10cdbe86 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdbe89 mov edx, dword ptr [0x10cfe790] */
  EDX = (r32((uint32_t)(0x10cfe790)));
  /* 10cdbe8f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10cdbe92 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10cdbe95 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 10cdbe9b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cdbe9d je 0x10cdbec1 */
  if (C.zf) goto L_10cdbec1;
  /* 10cdbe9f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdbea2 mov eax, dword ptr [0x10cfe790] */
  EAX = (r32((uint32_t)(0x10cfe790)));
  /* 10cdbea7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10cdbeaa push ecx */
  push32((uint32_t)(ECX));
  /* 10cdbeab call 0x10cdcc30 */
  push32(0x10cdbeb0u); f_10cdcc30();
  /* 10cdbeb0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdbeb3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdbeb6 je 0x10cdbec1 */
  if (C.zf) goto L_10cdbec1;
  /* 10cdbeb8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdbebb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdbebe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10cdbec1:;
  /* 10cdbec1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdbec5 jl 0x10cdbf04 */
  if ((C.sf!=C.of)) goto L_10cdbf04;
  /* 10cdbec7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdbeca mov ecx, dword ptr [0x10cfe790] */
  ECX = (r32((uint32_t)(0x10cfe790)));
  /* 10cdbed0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10cdbed3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdbed6 push edx */
  push32((uint32_t)(EDX));
  /* 10cdbed7 call dword ptr [0x10d00284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00284))), 0x10cdbeddu);
  /* 10cdbedd push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdbedf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdbee2 mov ecx, dword ptr [0x10cfe790] */
  ECX = (r32((uint32_t)(0x10cfe790)));
  /* 10cdbee8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10cdbeeb push edx */
  push32((uint32_t)(EDX));
  /* 10cdbeec call 0x10cd3120 */
  push32(0x10cdbef1u); f_10cd3120();
  /* 10cdbef1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdbef4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdbef7 mov ecx, dword ptr [0x10cfe790] */
  ECX = (r32((uint32_t)(0x10cfe790)));
  /* 10cdbefd mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_10cdbf04:;
  /* 10cdbf04 jmp 0x10cdbe60 */
  goto L_10cdbe60;
L_10cdbf09:;
  /* 10cdbf09 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdbf0b call 0x10cd6130 */
  push32(0x10cdbf10u); f_10cd6130();
  /* 10cdbf10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdbf13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdbf16 mov esp, ebp */
  ESP = (EBP);
  /* 10cdbf18 pop ebp */
  EBP = (pop32());
  /* 10cdbf19 ret  */
  ESPCHK(0x10cdbe40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf20 @ 0x10cdbf20 (68 bytes, 26 insns) */
void f_10cdbf20(void) {
  FTRACE(0x10cdbf20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdbf20 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdbf21 mov ebp, esp */
  EBP = (ESP);
  /* 10cdbf23 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdbf24 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdbf28 jne 0x10cdbf36 */
  if (!C.zf) goto L_10cdbf36;
  /* 10cdbf2a push 0 */
  push32((uint32_t)(0x0u));
  /* 10cdbf2c call 0x10cdc090 */
  push32(0x10cdbf31u); f_10cdc090();
  /* 10cdbf31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdbf34 jmp 0x10cdbf60 */
  goto L_10cdbf60;
L_10cdbf36:;
  /* 10cdbf36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdbf39 push eax */
  push32((uint32_t)(EAX));
  /* 10cdbf3a call 0x10cdb4a0 */
  push32(0x10cdbf3fu); f_10cdb4a0();
  /* 10cdbf3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdbf42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdbf45 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdbf46 call 0x10cdbf70 */
  push32(0x10cdbf4bu); f_10cdbf70();
  /* 10cdbf4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdbf4e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cdbf51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdbf54 push edx */
  push32((uint32_t)(EDX));
  /* 10cdbf55 call 0x10cdb510 */
  push32(0x10cdbf5au); f_10cdb510();
  /* 10cdbf5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdbf5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10cdbf60:;
  /* 10cdbf60 mov esp, ebp */
  ESP = (EBP);
  /* 10cdbf62 pop ebp */
  EBP = (pop32());
  /* 10cdbf63 ret  */
  ESPCHK(0x10cdbf20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf70 @ 0x10cdbf70 (65 bytes, 26 insns) */
void f_10cdbf70(void) {
  FTRACE(0x10cdbf70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdbf70 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdbf71 mov ebp, esp */
  EBP = (ESP);
  /* 10cdbf73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdbf76 push eax */
  push32((uint32_t)(EAX));
  /* 10cdbf77 call 0x10cdbfc0 */
  push32(0x10cdbf7cu); f_10cdbfc0();
  /* 10cdbf7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdbf7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdbf81 je 0x10cdbf88 */
  if (C.zf) goto L_10cdbf88;
  /* 10cdbf83 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cdbf86 jmp 0x10cdbfaf */
  goto L_10cdbfaf;
L_10cdbf88:;
  /* 10cdbf88 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdbf8b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10cdbf8e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 10cdbf94 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cdbf96 je 0x10cdbfad */
  if (C.zf) goto L_10cdbfad;
  /* 10cdbf98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdbf9b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10cdbf9e push ecx */
  push32((uint32_t)(ECX));
  /* 10cdbf9f call 0x10cdcd80 */
  push32(0x10cdbfa4u); f_10cdcd80();
  /* 10cdbfa4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdbfa7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10cdbfa9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdbfab jmp 0x10cdbfaf */
  goto L_10cdbfaf;
L_10cdbfad:;
  /* 10cdbfad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10cdbfaf:;
  /* 10cdbfaf pop ebp */
  EBP = (pop32());
  /* 10cdbfb0 ret  */
  ESPCHK(0x10cdbf70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bfc0 @ 0x10cdbfc0 (183 bytes, 62 insns) */
void f_10cdbfc0(void) {
  FTRACE(0x10cdbfc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdbfc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdbfc1 mov ebp, esp */
  EBP = (ESP);
  /* 10cdbfc3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdbfc6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10cdbfcd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdbfd0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10cdbfd3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdbfd6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10cdbfd9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10cdbfdc cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdbfdf jne 0x10cdc05b */
  if (!C.zf) goto L_10cdc05b;
  /* 10cdbfe1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdbfe4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10cdbfe7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 10cdbfed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cdbfef je 0x10cdc05b */
  if (C.zf) goto L_10cdc05b;
  /* 10cdbff1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdbff4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdbff7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10cdbff9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdbffc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cdbfff cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc003 jle 0x10cdc05b */
  if ((C.zf||C.sf!=C.of)) goto L_10cdc05b;
  /* 10cdc005 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdc008 push edx */
  push32((uint32_t)(EDX));
  /* 10cdc009 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdc00c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10cdc00f push ecx */
  push32((uint32_t)(ECX));
  /* 10cdc010 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdc013 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10cdc016 push eax */
  push32((uint32_t)(EAX));
  /* 10cdc017 call 0x10cdaf30 */
  push32(0x10cdc01cu); f_10cdaf30();
  /* 10cdc01c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc01f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc022 jne 0x10cdc045 */
  if (!C.zf) goto L_10cdc045;
  /* 10cdc024 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdc027 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10cdc02a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 10cdc030 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cdc032 je 0x10cdc043 */
  if (C.zf) goto L_10cdc043;
  /* 10cdc034 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdc037 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10cdc03a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 10cdc03d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdc040 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_10cdc043:;
  /* 10cdc043 jmp 0x10cdc05b */
  goto L_10cdc05b;
L_10cdc045:;
  /* 10cdc045 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdc048 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10cdc04b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10cdc04e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdc051 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10cdc054 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10cdc05b:;
  /* 10cdc05b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdc05e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdc061 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10cdc064 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10cdc066 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdc069 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10cdc070 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdc073 mov esp, ebp */
  ESP = (EBP);
  /* 10cdc075 pop ebp */
  EBP = (pop32());
  /* 10cdc076 ret  */
  ESPCHK(0x10cdbfc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c080 @ 0x10cdc080 (15 bytes, 7 insns) */
void f_10cdc080(void) {
  FTRACE(0x10cdc080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdc080 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdc081 mov ebp, esp */
  EBP = (ESP);
  /* 10cdc083 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdc085 call 0x10cdc090 */
  push32(0x10cdc08au); f_10cdc090();
  /* 10cdc08a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc08d pop ebp */
  EBP = (pop32());
  /* 10cdc08e ret  */
  ESPCHK(0x10cdc080u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c090 @ 0x10cdc090 (319 bytes, 94 insns) */
void f_10cdc090(void) {
  FTRACE(0x10cdc090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdc090 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdc091 mov ebp, esp */
  EBP = (ESP);
  /* 10cdc093 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdc096 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10cdc09d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10cdc0a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdc0a6 call 0x10cd6090 */
  push32(0x10cdc0abu); f_10cd6090();
  /* 10cdc0ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc0ae mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10cdc0b5 jmp 0x10cdc0c0 */
  goto L_10cdc0c0;
L_10cdc0b7:;
  /* 10cdc0b7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdc0ba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc0bd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10cdc0c0:;
  /* 10cdc0c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdc0c3 cmp ecx, dword ptr [0x10cffae0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10cffae0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc0c9 jge 0x10cdc1b3 */
  if ((C.sf==C.of)) goto L_10cdc1b3;
  /* 10cdc0cf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdc0d2 mov eax, dword ptr [0x10cfe790] */
  EAX = (r32((uint32_t)(0x10cfe790)));
  /* 10cdc0d7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc0db je 0x10cdc1ae */
  if (C.zf) goto L_10cdc1ae;
  /* 10cdc0e1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdc0e4 mov edx, dword ptr [0x10cfe790] */
  EDX = (r32((uint32_t)(0x10cfe790)));
  /* 10cdc0ea mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10cdc0ed mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10cdc0f0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 10cdc0f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cdc0f8 je 0x10cdc1ae */
  if (C.zf) goto L_10cdc1ae;
  /* 10cdc0fe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdc101 mov eax, dword ptr [0x10cfe790] */
  EAX = (r32((uint32_t)(0x10cfe790)));
  /* 10cdc106 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10cdc109 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdc10a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdc10d push edx */
  push32((uint32_t)(EDX));
  /* 10cdc10e call 0x10cdb4e0 */
  push32(0x10cdc113u); f_10cdb4e0();
  /* 10cdc113 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc116 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdc119 mov ecx, dword ptr [0x10cfe790] */
  ECX = (r32((uint32_t)(0x10cfe790)));
  /* 10cdc11f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10cdc122 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10cdc125 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 10cdc12a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdc12c je 0x10cdc195 */
  if (C.zf) goto L_10cdc195;
  /* 10cdc12e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc132 jne 0x10cdc159 */
  if (!C.zf) goto L_10cdc159;
  /* 10cdc134 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdc137 mov edx, dword ptr [0x10cfe790] */
  EDX = (r32((uint32_t)(0x10cfe790)));
  /* 10cdc13d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10cdc140 push eax */
  push32((uint32_t)(EAX));
  /* 10cdc141 call 0x10cdbf70 */
  push32(0x10cdc146u); f_10cdbf70();
  /* 10cdc146 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc149 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc14c je 0x10cdc157 */
  if (C.zf) goto L_10cdc157;
  /* 10cdc14e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdc151 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc154 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10cdc157:;
  /* 10cdc157 jmp 0x10cdc195 */
  goto L_10cdc195;
L_10cdc159:;
  /* 10cdc159 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc15d jne 0x10cdc195 */
  if (!C.zf) goto L_10cdc195;
  /* 10cdc15f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdc162 mov eax, dword ptr [0x10cfe790] */
  EAX = (r32((uint32_t)(0x10cfe790)));
  /* 10cdc167 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10cdc16a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10cdc16d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10cdc170 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cdc172 je 0x10cdc195 */
  if (C.zf) goto L_10cdc195;
  /* 10cdc174 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdc177 mov ecx, dword ptr [0x10cfe790] */
  ECX = (r32((uint32_t)(0x10cfe790)));
  /* 10cdc17d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10cdc180 push edx */
  push32((uint32_t)(EDX));
  /* 10cdc181 call 0x10cdbf70 */
  push32(0x10cdc186u); f_10cdbf70();
  /* 10cdc186 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc189 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc18c jne 0x10cdc195 */
  if (!C.zf) goto L_10cdc195;
  /* 10cdc18e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_10cdc195:;
  /* 10cdc195 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdc198 mov ecx, dword ptr [0x10cfe790] */
  ECX = (r32((uint32_t)(0x10cfe790)));
  /* 10cdc19e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10cdc1a1 push edx */
  push32((uint32_t)(EDX));
  /* 10cdc1a2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdc1a5 push eax */
  push32((uint32_t)(EAX));
  /* 10cdc1a6 call 0x10cdb550 */
  push32(0x10cdc1abu); f_10cdb550();
  /* 10cdc1ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cdc1ae:;
  /* 10cdc1ae jmp 0x10cdc0b7 */
  goto L_10cdc0b7;
L_10cdc1b3:;
  /* 10cdc1b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdc1b5 call 0x10cd6130 */
  push32(0x10cdc1bau); f_10cd6130();
  /* 10cdc1ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc1bd cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc1c1 jne 0x10cdc1c8 */
  if (!C.zf) goto L_10cdc1c8;
  /* 10cdc1c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdc1c6 jmp 0x10cdc1cb */
  goto L_10cdc1cb;
L_10cdc1c8:;
  /* 10cdc1c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10cdc1cb:;
  /* 10cdc1cb mov esp, ebp */
  ESP = (EBP);
  /* 10cdc1cd pop ebp */
  EBP = (pop32());
  /* 10cdc1ce ret  */
  ESPCHK(0x10cdc090u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x10cdc1d0 (15 bytes, 7 insns) */
void f_10cdc1d0(void) {
  FTRACE(0x10cdc1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdc1d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdc1d1 mov ebp, esp */
  EBP = (ESP);
  /* 10cdc1d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdc1d5 call 0x10cd1600 */
  push32(0x10cdc1dau); f_10cd1600();
  /* 10cdc1da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc1dd pop ebp */
  EBP = (pop32());
  /* 10cdc1de ret  */
  ESPCHK(0x10cdc1d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1e0 @ 0x10cdc1e0 (1007 bytes, 269 insns) */
void f_10cdc1e0(void) {
  FTRACE(0x10cdc1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdc1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdc1e1 mov ebp, esp */
  EBP = (ESP);
  /* 10cdc1e3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdc1e9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc1ed jl 0x10cdc1f5 */
  if ((C.sf!=C.of)) goto L_10cdc1f5;
  /* 10cdc1ef cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc1f3 jle 0x10cdc1fc */
  if ((C.zf||C.sf!=C.of)) goto L_10cdc1fc;
L_10cdc1f5:;
  /* 10cdc1f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cdc1f7 jmp 0x10cdc5cb */
  goto L_10cdc5cb;
L_10cdc1fc:;
  /* 10cdc1fc push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10cdc1fe call 0x10cd6090 */
  push32(0x10cdc203u); f_10cd6090();
  /* 10cdc203 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc206 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10cdc20d mov eax, dword ptr [0x10cfe77c] */
  EAX = (r32((uint32_t)(0x10cfe77c)));
  /* 10cdc212 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc215 mov dword ptr [0x10cfe77c], eax */
  w32((uint32_t)(0x10cfe77c), (EAX));
L_10cdc21a:;
  /* 10cdc21a cmp dword ptr [0x10cfe78c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe78c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc221 je 0x10cdc22d */
  if (C.zf) goto L_10cdc22d;
  /* 10cdc223 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdc225 call dword ptr [0x10d002e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002e8))), 0x10cdc22bu);
  /* 10cdc22b jmp 0x10cdc21a */
  goto L_10cdc21a;
L_10cdc22d:;
  /* 10cdc22d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc231 je 0x10cdc271 */
  if (C.zf) goto L_10cdc271;
  /* 10cdc233 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc237 je 0x10cdc251 */
  if (C.zf) goto L_10cdc251;
  /* 10cdc239 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdc23c push ecx */
  push32((uint32_t)(ECX));
  /* 10cdc23d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdc240 push edx */
  push32((uint32_t)(EDX));
  /* 10cdc241 call 0x10cdc5d0 */
  push32(0x10cdc246u); f_10cdc5d0();
  /* 10cdc246 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc249 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10cdc24f jmp 0x10cdc263 */
  goto L_10cdc263;
L_10cdc251:;
  /* 10cdc251 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdc254 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdc257 mov ecx, dword ptr [eax + 0x10cfd4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10cfd4dc)));
  /* 10cdc25d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_10cdc263:;
  /* 10cdc263 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 10cdc269 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10cdc26c jmp 0x10cdc5ab */
  goto L_10cdc5ab;
L_10cdc271:;
  /* 10cdc271 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 10cdc278 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10cdc27f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc283 je 0x10cdc5a3 */
  if (C.zf) goto L_10cdc5a3;
  /* 10cdc289 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdc28c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10cdc28f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc292 jne 0x10cdc4b4 */
  if (!C.zf) goto L_10cdc4b4;
  /* 10cdc298 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdc29b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10cdc29f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc2a2 jne 0x10cdc4b4 */
  if (!C.zf) goto L_10cdc4b4;
  /* 10cdc2a8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdc2ab movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 10cdc2af cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc2b2 jne 0x10cdc4b4 */
  if (!C.zf) goto L_10cdc4b4;
  /* 10cdc2b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdc2bb mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_10cdc2c1:;
  /* 10cdc2c1 push 0x10cf9f8c */
  push32((uint32_t)(0x10cf9f8cu));
  /* 10cdc2c6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10cdc2cc push ecx */
  push32((uint32_t)(ECX));
  /* 10cdc2cd call 0x10cde430 */
  push32(0x10cdc2d2u); f_10cde430();
  /* 10cdc2d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc2d5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 10cdc2db cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc2e2 je 0x10cdc30d */
  if (C.zf) goto L_10cdc30d;
  /* 10cdc2e4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10cdc2ea sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdc2f0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 10cdc2f6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc2fd je 0x10cdc30d */
  if (C.zf) goto L_10cdc30d;
  /* 10cdc2ff mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10cdc305 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10cdc308 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc30b jne 0x10cdc333 */
  if (!C.zf) goto L_10cdc333;
L_10cdc30d:;
  /* 10cdc30d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc311 je 0x10cdc32c */
  if (C.zf) goto L_10cdc32c;
  /* 10cdc313 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10cdc315 call 0x10cd6130 */
  push32(0x10cdc31au); f_10cd6130();
  /* 10cdc31a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc31d mov edx, dword ptr [0x10cfe77c] */
  EDX = (r32((uint32_t)(0x10cfe77c)));
  /* 10cdc323 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdc326 mov dword ptr [0x10cfe77c], edx */
  w32((uint32_t)(0x10cfe77c), (EDX));
L_10cdc32c:;
  /* 10cdc32c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cdc32e jmp 0x10cdc5cb */
  goto L_10cdc5cb;
L_10cdc333:;
  /* 10cdc333 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10cdc33a jmp 0x10cdc345 */
  goto L_10cdc345;
L_10cdc33c:;
  /* 10cdc33c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cdc33f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc342 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10cdc345:;
  /* 10cdc345 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc349 jg 0x10cdc393 */
  if ((!C.zf&&C.sf==C.of)) goto L_10cdc393;
  /* 10cdc34b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10cdc351 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdc352 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10cdc358 push edx */
  push32((uint32_t)(EDX));
  /* 10cdc359 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cdc35c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdc35f mov ecx, dword ptr [eax + 0x10cfd4d8] */
  ECX = (r32((uint32_t)(EAX + 0x10cfd4d8)));
  /* 10cdc365 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdc366 call 0x10cde3f0 */
  push32(0x10cdc36bu); f_10cde3f0();
  /* 10cdc36b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc36e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdc370 jne 0x10cdc391 */
  if (!C.zf) goto L_10cdc391;
  /* 10cdc372 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cdc375 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdc378 mov eax, dword ptr [edx + 0x10cfd4d8] */
  EAX = (r32((uint32_t)(EDX + 0x10cfd4d8)));
  /* 10cdc37e push eax */
  push32((uint32_t)(EAX));
  /* 10cdc37f call 0x10cd54c0 */
  push32(0x10cdc384u); f_10cd54c0();
  /* 10cdc384 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc387 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc38d jne 0x10cdc391 */
  if (!C.zf) goto L_10cdc391;
  /* 10cdc38f jmp 0x10cdc393 */
  goto L_10cdc393;
L_10cdc391:;
  /* 10cdc391 jmp 0x10cdc33c */
  goto L_10cdc33c;
L_10cdc393:;
  /* 10cdc393 push 0x10cf9f88 */
  push32((uint32_t)(0x10cf9f88u));
  /* 10cdc398 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10cdc39e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc3a1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 10cdc3a7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10cdc3ad push edx */
  push32((uint32_t)(EDX));
  /* 10cdc3ae call 0x10cde3b0 */
  push32(0x10cdc3b3u); f_10cde3b0();
  /* 10cdc3b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc3b6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 10cdc3bc cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc3c3 jne 0x10cdc3f9 */
  if (!C.zf) goto L_10cdc3f9;
  /* 10cdc3c5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10cdc3cb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10cdc3ce cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc3d1 je 0x10cdc3f9 */
  if (C.zf) goto L_10cdc3f9;
  /* 10cdc3d3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc3d7 je 0x10cdc3f2 */
  if (C.zf) goto L_10cdc3f2;
  /* 10cdc3d9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10cdc3db call 0x10cd6130 */
  push32(0x10cdc3e0u); f_10cd6130();
  /* 10cdc3e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc3e3 mov edx, dword ptr [0x10cfe77c] */
  EDX = (r32((uint32_t)(0x10cfe77c)));
  /* 10cdc3e9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdc3ec mov dword ptr [0x10cfe77c], edx */
  w32((uint32_t)(0x10cfe77c), (EDX));
L_10cdc3f2:;
  /* 10cdc3f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cdc3f4 jmp 0x10cdc5cb */
  goto L_10cdc5cb;
L_10cdc3f9:;
  /* 10cdc3f9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc3fd jg 0x10cdc44a */
  if ((!C.zf&&C.sf==C.of)) goto L_10cdc44a;
  /* 10cdc3ff mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10cdc405 push eax */
  push32((uint32_t)(EAX));
  /* 10cdc406 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10cdc40c push ecx */
  push32((uint32_t)(ECX));
  /* 10cdc40d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 10cdc413 push edx */
  push32((uint32_t)(EDX));
  /* 10cdc414 call 0x10cd5eb0 */
  push32(0x10cdc419u); f_10cd5eb0();
  /* 10cdc419 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc41c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10cdc422 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 10cdc42a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 10cdc430 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdc431 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cdc434 push edx */
  push32((uint32_t)(EDX));
  /* 10cdc435 call 0x10cdc5d0 */
  push32(0x10cdc43au); f_10cdc5d0();
  /* 10cdc43a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc43d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdc43f je 0x10cdc44a */
  if (C.zf) goto L_10cdc44a;
  /* 10cdc441 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdc444 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc447 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10cdc44a:;
  /* 10cdc44a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10cdc450 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc456 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10cdc45c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10cdc462 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10cdc465 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdc467 je 0x10cdc478 */
  if (C.zf) goto L_10cdc478;
  /* 10cdc469 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10cdc46f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc472 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_10cdc478:;
  /* 10cdc478 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10cdc47e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10cdc481 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdc483 jne 0x10cdc2c1 */
  if (!C.zf) goto L_10cdc2c1;
  /* 10cdc489 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc48d je 0x10cdc49c */
  if (C.zf) goto L_10cdc49c;
  /* 10cdc48f call 0x10cdc770 */
  push32(0x10cdc494u); f_10cdc770();
  /* 10cdc494 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 10cdc49a jmp 0x10cdc4a6 */
  goto L_10cdc4a6;
L_10cdc49c:;
  /* 10cdc49c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_10cdc4a6:;
  /* 10cdc4a6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 10cdc4ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10cdc4af jmp 0x10cdc5a1 */
  goto L_10cdc5a1;
L_10cdc4b4:;
  /* 10cdc4b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdc4b7 push edx */
  push32((uint32_t)(EDX));
  /* 10cdc4b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cdc4ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10cdc4bc lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10cdc4c2 push eax */
  push32((uint32_t)(EAX));
  /* 10cdc4c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdc4c6 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdc4c7 call 0x10cdc870 */
  push32(0x10cdc4ccu); f_10cdc870();
  /* 10cdc4cc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc4cf mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10cdc4d2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc4d6 je 0x10cdc5a1 */
  if (C.zf) goto L_10cdc5a1;
  /* 10cdc4dc mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10cdc4e3 jmp 0x10cdc4ee */
  goto L_10cdc4ee;
L_10cdc4e5:;
  /* 10cdc4e5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cdc4e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc4eb mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10cdc4ee:;
  /* 10cdc4ee cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc4f2 jg 0x10cdc550 */
  if ((!C.zf&&C.sf==C.of)) goto L_10cdc550;
  /* 10cdc4f4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc4f8 je 0x10cdc54e */
  if (C.zf) goto L_10cdc54e;
  /* 10cdc4fa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cdc4fd imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdc500 mov ecx, dword ptr [eax + 0x10cfd4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10cfd4dc)));
  /* 10cdc506 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdc507 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 10cdc50d push edx */
  push32((uint32_t)(EDX));
  /* 10cdc50e call 0x10cde320 */
  push32(0x10cdc513u); f_10cde320();
  /* 10cdc513 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc516 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdc518 je 0x10cdc545 */
  if (C.zf) goto L_10cdc545;
  /* 10cdc51a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10cdc520 push eax */
  push32((uint32_t)(EAX));
  /* 10cdc521 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cdc524 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdc525 call 0x10cdc5d0 */
  push32(0x10cdc52au); f_10cdc5d0();
  /* 10cdc52a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc52d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdc52f je 0x10cdc53c */
  if (C.zf) goto L_10cdc53c;
  /* 10cdc531 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdc534 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc537 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10cdc53a jmp 0x10cdc543 */
  goto L_10cdc543;
L_10cdc53c:;
  /* 10cdc53c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10cdc543:;
  /* 10cdc543 jmp 0x10cdc54e */
  goto L_10cdc54e;
L_10cdc545:;
  /* 10cdc545 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdc548 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc54b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10cdc54e:;
  /* 10cdc54e jmp 0x10cdc4e5 */
  goto L_10cdc4e5;
L_10cdc550:;
  /* 10cdc550 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc554 je 0x10cdc57b */
  if (C.zf) goto L_10cdc57b;
  /* 10cdc556 call 0x10cdc770 */
  push32(0x10cdc55bu); f_10cdc770();
  /* 10cdc55b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10cdc55e push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdc560 mov ecx, dword ptr [0x10cfd4dc] */
  ECX = (r32((uint32_t)(0x10cfd4dc)));
  /* 10cdc566 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdc567 call 0x10cd3120 */
  push32(0x10cdc56cu); f_10cd3120();
  /* 10cdc56c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc56f mov dword ptr [0x10cfd4dc], 0 */
  w32((uint32_t)(0x10cfd4dc), (0x0u));
  /* 10cdc579 jmp 0x10cdc5a1 */
  goto L_10cdc5a1;
L_10cdc57b:;
  /* 10cdc57b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc57f je 0x10cdc58e */
  if (C.zf) goto L_10cdc58e;
  /* 10cdc581 call 0x10cdc770 */
  push32(0x10cdc586u); f_10cdc770();
  /* 10cdc586 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 10cdc58c jmp 0x10cdc598 */
  goto L_10cdc598;
L_10cdc58e:;
  /* 10cdc58e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_10cdc598:;
  /* 10cdc598 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 10cdc59e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10cdc5a1:;
  /* 10cdc5a1 jmp 0x10cdc5ab */
  goto L_10cdc5ab;
L_10cdc5a3:;
  /* 10cdc5a3 call 0x10cdc770 */
  push32(0x10cdc5a8u); f_10cdc770();
  /* 10cdc5a8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10cdc5ab:;
  /* 10cdc5ab cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc5af je 0x10cdc5c8 */
  if (C.zf) goto L_10cdc5c8;
  /* 10cdc5b1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10cdc5b3 call 0x10cd6130 */
  push32(0x10cdc5b8u); f_10cd6130();
  /* 10cdc5b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc5bb mov eax, dword ptr [0x10cfe77c] */
  EAX = (r32((uint32_t)(0x10cfe77c)));
  /* 10cdc5c0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdc5c3 mov dword ptr [0x10cfe77c], eax */
  w32((uint32_t)(0x10cfe77c), (EAX));
L_10cdc5c8:;
  /* 10cdc5c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10cdc5cb:;
  /* 10cdc5cb mov esp, ebp */
  ESP = (EBP);
  /* 10cdc5cd pop ebp */
  EBP = (pop32());
  /* 10cdc5ce ret  */
  ESPCHK(0x10cdc1e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c5d0 @ 0x10cdc5d0 (403 bytes, 117 insns) */
void f_10cdc5d0(void) {
  FTRACE(0x10cdc5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdc5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdc5d1 mov ebp, esp */
  EBP = (ESP);
  /* 10cdc5d3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdc5d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdc5dc push eax */
  push32((uint32_t)(EAX));
  /* 10cdc5dd lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 10cdc5e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdc5e4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 10cdc5ea push edx */
  push32((uint32_t)(EDX));
  /* 10cdc5eb lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 10cdc5f1 push eax */
  push32((uint32_t)(EAX));
  /* 10cdc5f2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdc5f5 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdc5f6 call 0x10cdc870 */
  push32(0x10cdc5fbu); f_10cdc870();
  /* 10cdc5fb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc5fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdc600 jne 0x10cdc609 */
  if (!C.zf) goto L_10cdc609;
  /* 10cdc602 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cdc604 jmp 0x10cdc75f */
  goto L_10cdc75f;
L_10cdc609:;
  /* 10cdc609 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 10cdc60e push 0x10cf9f90 */
  push32((uint32_t)(0x10cf9f90u));
  /* 10cdc613 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdc615 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 10cdc61b push edx */
  push32((uint32_t)(EDX));
  /* 10cdc61c call 0x10cd54c0 */
  push32(0x10cdc621u); f_10cd54c0();
  /* 10cdc621 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc624 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc627 push eax */
  push32((uint32_t)(EAX));
  /* 10cdc628 call 0x10cd2690 */
  push32(0x10cdc62du); f_10cd2690();
  /* 10cdc62d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc630 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10cdc633 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc637 jne 0x10cdc640 */
  if (!C.zf) goto L_10cdc640;
  /* 10cdc639 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cdc63b jmp 0x10cdc75f */
  goto L_10cdc75f;
L_10cdc640:;
  /* 10cdc640 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdc643 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdc646 mov ecx, dword ptr [eax + 0x10cfd4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10cfd4dc)));
  /* 10cdc64c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cdc64f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdc652 mov eax, dword ptr [edx*4 + 0x10cfe5f8] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10cfe5f8)));
  /* 10cdc659 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cdc65c push 6 */
  push32((uint32_t)(0x6u));
  /* 10cdc65e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdc661 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdc664 add ecx, 0x10cfe648 */
  { uint32_t _a=(ECX),_b=(0x10cfe648u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc66a push ecx */
  push32((uint32_t)(ECX));
  /* 10cdc66b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 10cdc66e push edx */
  push32((uint32_t)(EDX));
  /* 10cdc66f call 0x10cd8f70 */
  push32(0x10cdc674u); f_10cd8f70();
  /* 10cdc674 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc677 mov eax, dword ptr [0x10cfe610] */
  EAX = (r32((uint32_t)(0x10cfe610)));
  /* 10cdc67c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10cdc67f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 10cdc685 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdc686 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdc689 push edx */
  push32((uint32_t)(EDX));
  /* 10cdc68a call 0x10cd5640 */
  push32(0x10cdc68fu); f_10cd5640();
  /* 10cdc68f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc692 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdc695 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdc698 mov dword ptr [ecx + 0x10cfd4dc], eax */
  w32((uint32_t)(ECX + 0x10cfd4dc), (EAX));
  /* 10cdc69e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 10cdc6a4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10cdc6aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdc6ad mov dword ptr [eax*4 + 0x10cfe5f8], edx */
  w32((uint32_t)(EAX*4 + 0x10cfe5f8), (EDX));
  /* 10cdc6b4 push 6 */
  push32((uint32_t)(0x6u));
  /* 10cdc6b6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 10cdc6bc push ecx */
  push32((uint32_t)(ECX));
  /* 10cdc6bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdc6c0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdc6c3 add edx, 0x10cfe648 */
  { uint32_t _a=(EDX),_b=(0x10cfe648u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc6c9 push edx */
  push32((uint32_t)(EDX));
  /* 10cdc6ca call 0x10cd8f70 */
  push32(0x10cdc6cfu); f_10cd8f70();
  /* 10cdc6cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc6d2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc6d6 jne 0x10cdc6e3 */
  if (!C.zf) goto L_10cdc6e3;
  /* 10cdc6d8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10cdc6de mov dword ptr [0x10cfe610], eax */
  w32((uint32_t)(0x10cfe610), (EAX));
L_10cdc6e3:;
  /* 10cdc6e3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc6e7 jne 0x10cdc6f5 */
  if (!C.zf) goto L_10cdc6f5;
  /* 10cdc6e9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10cdc6ef mov dword ptr [0x10cfe614], ecx */
  w32((uint32_t)(0x10cfe614), (ECX));
L_10cdc6f5:;
  /* 10cdc6f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdc6f8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdc6fb call dword ptr [edx + 0x10cfd4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x10cfd4e0))), 0x10cdc701u);
  /* 10cdc701 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdc703 je 0x10cdc73c */
  if (C.zf) goto L_10cdc73c;
  /* 10cdc705 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdc708 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdc70b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdc70e mov dword ptr [eax + 0x10cfd4dc], ecx */
  w32((uint32_t)(EAX + 0x10cfd4dc), (ECX));
  /* 10cdc714 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdc716 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdc719 push edx */
  push32((uint32_t)(EDX));
  /* 10cdc71a call 0x10cd3120 */
  push32(0x10cdc71fu); f_10cd3120();
  /* 10cdc71f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc722 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdc725 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdc728 mov dword ptr [eax*4 + 0x10cfe5f8], ecx */
  w32((uint32_t)(EAX*4 + 0x10cfe5f8), (ECX));
  /* 10cdc72f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cdc732 mov dword ptr [0x10cfe610], edx */
  w32((uint32_t)(0x10cfe610), (EDX));
  /* 10cdc738 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cdc73a jmp 0x10cdc75f */
  goto L_10cdc75f;
L_10cdc73c:;
  /* 10cdc73c cmp dword ptr [ebp - 0xc], 0x10cfd3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x10cfd3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc743 je 0x10cdc753 */
  if (C.zf) goto L_10cdc753;
  /* 10cdc745 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdc747 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdc74a push eax */
  push32((uint32_t)(EAX));
  /* 10cdc74b call 0x10cd3120 */
  push32(0x10cdc750u); f_10cd3120();
  /* 10cdc750 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cdc753:;
  /* 10cdc753 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdc756 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdc759 mov eax, dword ptr [ecx + 0x10cfd4dc] */
  EAX = (r32((uint32_t)(ECX + 0x10cfd4dc)));
L_10cdc75f:;
  /* 10cdc75f mov esp, ebp */
  ESP = (EBP);
  /* 10cdc761 pop ebp */
  EBP = (pop32());
  /* 10cdc762 ret  */
  ESPCHK(0x10cdc5d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c770 @ 0x10cdc770 (256 bytes, 72 insns) */
void f_10cdc770(void) {
  FTRACE(0x10cdc770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdc770 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdc771 mov ebp, esp */
  EBP = (ESP);
  /* 10cdc773 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdc776 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10cdc77d cmp dword ptr [0x10cfd4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfd4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc784 jne 0x10cdc7a4 */
  if (!C.zf) goto L_10cdc7a4;
  /* 10cdc786 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 10cdc78b push 0x10cf9f90 */
  push32((uint32_t)(0x10cf9f90u));
  /* 10cdc790 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdc792 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 10cdc797 call 0x10cd2690 */
  push32(0x10cdc79cu); f_10cd2690();
  /* 10cdc79c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc79f mov dword ptr [0x10cfd4dc], eax */
  w32((uint32_t)(0x10cfd4dc), (EAX));
L_10cdc7a4:;
  /* 10cdc7a4 mov eax, dword ptr [0x10cfd4dc] */
  EAX = (r32((uint32_t)(0x10cfd4dc)));
  /* 10cdc7a9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10cdc7ac mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10cdc7b3 jmp 0x10cdc7be */
  goto L_10cdc7be;
L_10cdc7b5:;
  /* 10cdc7b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdc7b8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc7bb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10cdc7be:;
  /* 10cdc7be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdc7c1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdc7c4 mov eax, dword ptr [edx + 0x10cfd4dc] */
  EAX = (r32((uint32_t)(EDX + 0x10cfd4dc)));
  /* 10cdc7ca push eax */
  push32((uint32_t)(EAX));
  /* 10cdc7cb push 0x10cf9f9c */
  push32((uint32_t)(0x10cf9f9cu));
  /* 10cdc7d0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdc7d3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdc7d6 mov edx, dword ptr [ecx + 0x10cfd4d8] */
  EDX = (r32((uint32_t)(ECX + 0x10cfd4d8)));
  /* 10cdc7dc push edx */
  push32((uint32_t)(EDX));
  /* 10cdc7dd push 3 */
  push32((uint32_t)(0x3u));
  /* 10cdc7df mov eax, dword ptr [0x10cfd4dc] */
  EAX = (r32((uint32_t)(0x10cfd4dc)));
  /* 10cdc7e4 push eax */
  push32((uint32_t)(EAX));
  /* 10cdc7e5 call 0x10cdca10 */
  push32(0x10cdc7eau); f_10cdca10();
  /* 10cdc7ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc7ed cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc7f1 jge 0x10cdc839 */
  if ((C.sf==C.of)) goto L_10cdc839;
  /* 10cdc7f3 push 0x10cf9f88 */
  push32((uint32_t)(0x10cf9f88u));
  /* 10cdc7f8 mov ecx, dword ptr [0x10cfd4dc] */
  ECX = (r32((uint32_t)(0x10cfd4dc)));
  /* 10cdc7fe push ecx */
  push32((uint32_t)(ECX));
  /* 10cdc7ff call 0x10cd5650 */
  push32(0x10cdc804u); f_10cd5650();
  /* 10cdc804 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc807 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdc80a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc80d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdc810 mov eax, dword ptr [edx + 0x10cfd4dc] */
  EAX = (r32((uint32_t)(EDX + 0x10cfd4dc)));
  /* 10cdc816 push eax */
  push32((uint32_t)(EAX));
  /* 10cdc817 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdc81a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdc81d mov edx, dword ptr [ecx + 0x10cfd4dc] */
  EDX = (r32((uint32_t)(ECX + 0x10cfd4dc)));
  /* 10cdc823 push edx */
  push32((uint32_t)(EDX));
  /* 10cdc824 call 0x10cde320 */
  push32(0x10cdc829u); f_10cde320();
  /* 10cdc829 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc82c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdc82e je 0x10cdc837 */
  if (C.zf) goto L_10cdc837;
  /* 10cdc830 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10cdc837:;
  /* 10cdc837 jmp 0x10cdc867 */
  goto L_10cdc867;
L_10cdc839:;
  /* 10cdc839 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc83d jne 0x10cdc846 */
  if (!C.zf) goto L_10cdc846;
  /* 10cdc83f mov eax, dword ptr [0x10cfd4dc] */
  EAX = (r32((uint32_t)(0x10cfd4dc)));
  /* 10cdc844 jmp 0x10cdc86c */
  goto L_10cdc86c;
L_10cdc846:;
  /* 10cdc846 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdc848 mov eax, dword ptr [0x10cfd4dc] */
  EAX = (r32((uint32_t)(0x10cfd4dc)));
  /* 10cdc84d push eax */
  push32((uint32_t)(EAX));
  /* 10cdc84e call 0x10cd3120 */
  push32(0x10cdc853u); f_10cd3120();
  /* 10cdc853 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc856 mov dword ptr [0x10cfd4dc], 0 */
  w32((uint32_t)(0x10cfd4dc), (0x0u));
  /* 10cdc860 mov eax, dword ptr [0x10cfd4f4] */
  EAX = (r32((uint32_t)(0x10cfd4f4)));
  /* 10cdc865 jmp 0x10cdc86c */
  goto L_10cdc86c;
L_10cdc867:;
  /* 10cdc867 jmp 0x10cdc7b5 */
  goto L_10cdc7b5;
L_10cdc86c:;
  /* 10cdc86c mov esp, ebp */
  ESP = (EBP);
  /* 10cdc86e pop ebp */
  EBP = (pop32());
  /* 10cdc86f ret  */
  ESPCHK(0x10cdc770u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c870 @ 0x10cdc870 (388 bytes, 115 insns) */
void f_10cdc870(void) {
  FTRACE(0x10cdc870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdc870 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdc871 mov ebp, esp */
  EBP = (ESP);
  /* 10cdc873 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdc879 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc87d jne 0x10cdc886 */
  if (!C.zf) goto L_10cdc886;
  /* 10cdc87f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cdc881 jmp 0x10cdc9f0 */
  goto L_10cdc9f0;
L_10cdc886:;
  /* 10cdc886 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdc889 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10cdc88c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc88f jne 0x10cdc8e0 */
  if (!C.zf) goto L_10cdc8e0;
  /* 10cdc891 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdc894 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10cdc898 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdc89a jne 0x10cdc8e0 */
  if (!C.zf) goto L_10cdc8e0;
  /* 10cdc89c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdc89f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 10cdc8a2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdc8a5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 10cdc8a9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc8ad je 0x10cdc8c9 */
  if (C.zf) goto L_10cdc8c9;
  /* 10cdc8af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdc8b2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 10cdc8b7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdc8ba mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 10cdc8c0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdc8c3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_10cdc8c9:;
  /* 10cdc8c9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc8cd je 0x10cdc8d8 */
  if (C.zf) goto L_10cdc8d8;
  /* 10cdc8cf mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cdc8d2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10cdc8d8:;
  /* 10cdc8d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdc8db jmp 0x10cdc9f0 */
  goto L_10cdc9f0;
L_10cdc8e0:;
  /* 10cdc8e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdc8e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdc8e4 push 0x10cfd450 */
  push32((uint32_t)(0x10cfd450u));
  /* 10cdc8e9 call 0x10cde320 */
  push32(0x10cdc8eeu); f_10cde320();
  /* 10cdc8ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc8f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdc8f3 je 0x10cdc9a8 */
  if (C.zf) goto L_10cdc9a8;
  /* 10cdc8f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdc8fc push edx */
  push32((uint32_t)(EDX));
  /* 10cdc8fd push 0x10cfd3cc */
  push32((uint32_t)(0x10cfd3ccu));
  /* 10cdc902 call 0x10cde320 */
  push32(0x10cdc907u); f_10cde320();
  /* 10cdc907 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc90a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdc90c je 0x10cdc9a8 */
  if (C.zf) goto L_10cdc9a8;
  /* 10cdc912 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdc915 push eax */
  push32((uint32_t)(EAX));
  /* 10cdc916 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 10cdc91c push ecx */
  push32((uint32_t)(ECX));
  /* 10cdc91d call 0x10cdca60 */
  push32(0x10cdc922u); f_10cdca60();
  /* 10cdc922 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc925 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdc927 je 0x10cdc930 */
  if (C.zf) goto L_10cdc930;
  /* 10cdc929 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cdc92b jmp 0x10cdc9f0 */
  goto L_10cdc9f0;
L_10cdc930:;
  /* 10cdc930 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 10cdc936 push edx */
  push32((uint32_t)(EDX));
  /* 10cdc937 push 0x10cfe620 */
  push32((uint32_t)(0x10cfe620u));
  /* 10cdc93c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 10cdc942 push eax */
  push32((uint32_t)(EAX));
  /* 10cdc943 call 0x10cde470 */
  push32(0x10cdc948u); f_10cde470();
  /* 10cdc948 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc94b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdc94d jne 0x10cdc956 */
  if (!C.zf) goto L_10cdc956;
  /* 10cdc94f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cdc951 jmp 0x10cdc9f0 */
  goto L_10cdc9f0;
L_10cdc956:;
  /* 10cdc956 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdc958 mov cx, word ptr [0x10cfe624] */
  CX = (r16((uint32_t)(0x10cfe624)));
  /* 10cdc95f mov dword ptr [0x10cfe628], ecx */
  w32((uint32_t)(0x10cfe628), (ECX));
  /* 10cdc965 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 10cdc96b push edx */
  push32((uint32_t)(EDX));
  /* 10cdc96c push 0x10cfd450 */
  push32((uint32_t)(0x10cfd450u));
  /* 10cdc971 call 0x10cdcbc0 */
  push32(0x10cdc976u); f_10cdcbc0();
  /* 10cdc976 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc979 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdc97c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10cdc97f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cdc981 je 0x10cdc996 */
  if (C.zf) goto L_10cdc996;
  /* 10cdc983 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdc986 push edx */
  push32((uint32_t)(EDX));
  /* 10cdc987 push 0x10cfd3cc */
  push32((uint32_t)(0x10cfd3ccu));
  /* 10cdc98c call 0x10cd5640 */
  push32(0x10cdc991u); f_10cd5640();
  /* 10cdc991 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc994 jmp 0x10cdc9a8 */
  goto L_10cdc9a8;
L_10cdc996:;
  /* 10cdc996 push 0x10cfd450 */
  push32((uint32_t)(0x10cfd450u));
  /* 10cdc99b push 0x10cfd3cc */
  push32((uint32_t)(0x10cfd3ccu));
  /* 10cdc9a0 call 0x10cd5640 */
  push32(0x10cdc9a5u); f_10cd5640();
  /* 10cdc9a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cdc9a8:;
  /* 10cdc9a8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc9ac je 0x10cdc9c1 */
  if (C.zf) goto L_10cdc9c1;
  /* 10cdc9ae push 6 */
  push32((uint32_t)(0x6u));
  /* 10cdc9b0 push 0x10cfe620 */
  push32((uint32_t)(0x10cfe620u));
  /* 10cdc9b5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdc9b8 push eax */
  push32((uint32_t)(EAX));
  /* 10cdc9b9 call 0x10cd8f70 */
  push32(0x10cdc9beu); f_10cd8f70();
  /* 10cdc9be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cdc9c1:;
  /* 10cdc9c1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdc9c5 je 0x10cdc9da */
  if (C.zf) goto L_10cdc9da;
  /* 10cdc9c7 push 4 */
  push32((uint32_t)(0x4u));
  /* 10cdc9c9 push 0x10cfe628 */
  push32((uint32_t)(0x10cfe628u));
  /* 10cdc9ce mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cdc9d1 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdc9d2 call 0x10cd8f70 */
  push32(0x10cdc9d7u); f_10cd8f70();
  /* 10cdc9d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cdc9da:;
  /* 10cdc9da push 0x10cfd450 */
  push32((uint32_t)(0x10cfd450u));
  /* 10cdc9df mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdc9e2 push edx */
  push32((uint32_t)(EDX));
  /* 10cdc9e3 call 0x10cd5640 */
  push32(0x10cdc9e8u); f_10cd5640();
  /* 10cdc9e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdc9eb mov eax, 0x10cfd450 */
  EAX = (0x10cfd450u);
L_10cdc9f0:;
  /* 10cdc9f0 mov esp, ebp */
  ESP = (EBP);
  /* 10cdc9f2 pop ebp */
  EBP = (pop32());
  /* 10cdc9f3 ret  */
  ESPCHK(0x10cdc870u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca00 @ 0x10cdca00 (7 bytes, 5 insns) */
void f_10cdca00(void) {
  FTRACE(0x10cdca00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdca00 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdca01 mov ebp, esp */
  EBP = (ESP);
  /* 10cdca03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cdca05 pop ebp */
  EBP = (pop32());
  /* 10cdca06 ret  */
  ESPCHK(0x10cdca00u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x10cdca10 (79 bytes, 28 insns) */
void f_10cdca10(void) {
  FTRACE(0x10cdca10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdca10 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdca11 mov ebp, esp */
  EBP = (ESP);
  /* 10cdca13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdca16 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10cdca19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cdca1c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10cdca23 jmp 0x10cdca2e */
  goto L_10cdca2e;
L_10cdca25:;
  /* 10cdca25 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdca28 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdca2b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10cdca2e:;
  /* 10cdca2e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdca31 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdca34 jge 0x10cdca54 */
  if ((C.sf==C.of)) goto L_10cdca54;
  /* 10cdca36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdca39 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdca3c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cdca3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdca42 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10cdca45 push edx */
  push32((uint32_t)(EDX));
  /* 10cdca46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdca49 push eax */
  push32((uint32_t)(EAX));
  /* 10cdca4a call 0x10cd5650 */
  push32(0x10cdca4fu); f_10cd5650();
  /* 10cdca4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdca52 jmp 0x10cdca25 */
  goto L_10cdca25;
L_10cdca54:;
  /* 10cdca54 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10cdca5b mov esp, ebp */
  ESP = (EBP);
  /* 10cdca5d pop ebp */
  EBP = (pop32());
  /* 10cdca5e ret  */
  ESPCHK(0x10cdca10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca60 @ 0x10cdca60 (349 bytes, 122 insns) */
void f_10cdca60(void) {
  FTRACE(0x10cdca60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdca60 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdca61 mov ebp, esp */
  EBP = (ESP);
  /* 10cdca63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdca66 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 10cdca6b push 0 */
  push32((uint32_t)(0x0u));
  /* 10cdca6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdca70 push eax */
  push32((uint32_t)(EAX));
  /* 10cdca71 call 0x10cd6400 */
  push32(0x10cdca76u); f_10cd6400();
  /* 10cdca76 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdca79 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdca7c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10cdca7f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cdca81 jne 0x10cdca8a */
  if (!C.zf) goto L_10cdca8a;
  /* 10cdca83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cdca85 jmp 0x10cdcbb9 */
  goto L_10cdcbb9;
L_10cdca8a:;
  /* 10cdca8a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdca8d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10cdca90 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdca93 jne 0x10cdcac0 */
  if (!C.zf) goto L_10cdcac0;
  /* 10cdca95 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdca98 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10cdca9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdca9e je 0x10cdcac0 */
  if (C.zf) goto L_10cdcac0;
  /* 10cdcaa0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdcaa3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdcaa6 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdcaa7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdcaaa add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdcab0 push edx */
  push32((uint32_t)(EDX));
  /* 10cdcab1 call 0x10cd5640 */
  push32(0x10cdcab6u); f_10cd5640();
  /* 10cdcab6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdcab9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cdcabb jmp 0x10cdcbb9 */
  goto L_10cdcbb9;
L_10cdcac0:;
  /* 10cdcac0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10cdcac7 jmp 0x10cdcad2 */
  goto L_10cdcad2;
L_10cdcac9:;
  /* 10cdcac9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdcacc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdcacf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10cdcad2:;
  /* 10cdcad2 push 0x10cf9fa0 */
  push32((uint32_t)(0x10cf9fa0u));
  /* 10cdcad7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdcada push ecx */
  push32((uint32_t)(ECX));
  /* 10cdcadb call 0x10cde3b0 */
  push32(0x10cdcae0u); f_10cde3b0();
  /* 10cdcae0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdcae3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10cdcae6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdcaea jne 0x10cdcaf4 */
  if (!C.zf) goto L_10cdcaf4;
  /* 10cdcaec or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cdcaef jmp 0x10cdcbb9 */
  goto L_10cdcbb9;
L_10cdcaf4:;
  /* 10cdcaf4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdcaf7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdcafa mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10cdcafc mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10cdcaff cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdcb03 jne 0x10cdcb2a */
  if (!C.zf) goto L_10cdcb2a;
  /* 10cdcb05 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdcb09 jge 0x10cdcb2a */
  if ((C.sf==C.of)) goto L_10cdcb2a;
  /* 10cdcb0b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10cdcb0f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdcb12 je 0x10cdcb2a */
  if (C.zf) goto L_10cdcb2a;
  /* 10cdcb14 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdcb17 push edx */
  push32((uint32_t)(EDX));
  /* 10cdcb18 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdcb1b push eax */
  push32((uint32_t)(EAX));
  /* 10cdcb1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdcb1f push ecx */
  push32((uint32_t)(ECX));
  /* 10cdcb20 call 0x10cd5eb0 */
  push32(0x10cdcb25u); f_10cd5eb0();
  /* 10cdcb25 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdcb28 jmp 0x10cdcb90 */
  goto L_10cdcb90;
L_10cdcb2a:;
  /* 10cdcb2a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdcb2e jne 0x10cdcb58 */
  if (!C.zf) goto L_10cdcb58;
  /* 10cdcb30 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdcb34 jge 0x10cdcb58 */
  if ((C.sf==C.of)) goto L_10cdcb58;
  /* 10cdcb36 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10cdcb3a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdcb3d je 0x10cdcb58 */
  if (C.zf) goto L_10cdcb58;
  /* 10cdcb3f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdcb42 push eax */
  push32((uint32_t)(EAX));
  /* 10cdcb43 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdcb46 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdcb47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdcb4a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdcb4d push edx */
  push32((uint32_t)(EDX));
  /* 10cdcb4e call 0x10cd5eb0 */
  push32(0x10cdcb53u); f_10cd5eb0();
  /* 10cdcb53 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdcb56 jmp 0x10cdcb90 */
  goto L_10cdcb90;
L_10cdcb58:;
  /* 10cdcb58 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdcb5c jne 0x10cdcb8b */
  if (!C.zf) goto L_10cdcb8b;
  /* 10cdcb5e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10cdcb62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdcb64 je 0x10cdcb6f */
  if (C.zf) goto L_10cdcb6f;
  /* 10cdcb66 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10cdcb6a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdcb6d jne 0x10cdcb8b */
  if (!C.zf) goto L_10cdcb8b;
L_10cdcb6f:;
  /* 10cdcb6f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdcb72 push edx */
  push32((uint32_t)(EDX));
  /* 10cdcb73 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdcb76 push eax */
  push32((uint32_t)(EAX));
  /* 10cdcb77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdcb7a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdcb80 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdcb81 call 0x10cd5eb0 */
  push32(0x10cdcb86u); f_10cd5eb0();
  /* 10cdcb86 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdcb89 jmp 0x10cdcb90 */
  goto L_10cdcb90;
L_10cdcb8b:;
  /* 10cdcb8b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cdcb8e jmp 0x10cdcbb9 */
  goto L_10cdcbb9;
L_10cdcb90:;
  /* 10cdcb90 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10cdcb94 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdcb97 jne 0x10cdcb9b */
  if (!C.zf) goto L_10cdcb9b;
  /* 10cdcb99 jmp 0x10cdcbb7 */
  goto L_10cdcbb7;
L_10cdcb9b:;
  /* 10cdcb9b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10cdcb9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdcba1 jne 0x10cdcba5 */
  if (!C.zf) goto L_10cdcba5;
  /* 10cdcba3 jmp 0x10cdcbb7 */
  goto L_10cdcbb7;
L_10cdcba5:;
  /* 10cdcba5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdcba8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdcbab lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 10cdcbaf mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10cdcbb2 jmp 0x10cdcac9 */
  goto L_10cdcac9;
L_10cdcbb7:;
  /* 10cdcbb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10cdcbb9:;
  /* 10cdcbb9 mov esp, ebp */
  ESP = (EBP);
  /* 10cdcbbb pop ebp */
  EBP = (pop32());
  /* 10cdcbbc ret  */
  ESPCHK(0x10cdca60u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x10cdcbc0 (101 bytes, 36 insns) */
void f_10cdcbc0(void) {
  FTRACE(0x10cdcbc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdcbc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdcbc1 mov ebp, esp */
  EBP = (ESP);
  /* 10cdcbc3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdcbc6 push eax */
  push32((uint32_t)(EAX));
  /* 10cdcbc7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdcbca push ecx */
  push32((uint32_t)(ECX));
  /* 10cdcbcb call 0x10cd5640 */
  push32(0x10cdcbd0u); f_10cd5640();
  /* 10cdcbd0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdcbd3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdcbd6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 10cdcbda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdcbdc je 0x10cdcbf8 */
  if (C.zf) goto L_10cdcbf8;
  /* 10cdcbde mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdcbe1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdcbe4 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdcbe5 push 0x10cf9fa8 */
  push32((uint32_t)(0x10cf9fa8u));
  /* 10cdcbea push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdcbec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdcbef push edx */
  push32((uint32_t)(EDX));
  /* 10cdcbf0 call 0x10cdca10 */
  push32(0x10cdcbf5u); f_10cdca10();
  /* 10cdcbf5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cdcbf8:;
  /* 10cdcbf8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdcbfb movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 10cdcc02 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cdcc04 je 0x10cdcc23 */
  if (C.zf) goto L_10cdcc23;
  /* 10cdcc06 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdcc09 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdcc0f push edx */
  push32((uint32_t)(EDX));
  /* 10cdcc10 push 0x10cf9fa4 */
  push32((uint32_t)(0x10cf9fa4u));
  /* 10cdcc15 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdcc17 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdcc1a push eax */
  push32((uint32_t)(EAX));
  /* 10cdcc1b call 0x10cdca10 */
  push32(0x10cdcc20u); f_10cdca10();
  /* 10cdcc20 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cdcc23:;
  /* 10cdcc23 pop ebp */
  EBP = (pop32());
  /* 10cdcc24 ret  */
  ESPCHK(0x10cdcbc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc30 @ 0x10cdcc30 (130 bytes, 50 insns) */
void f_10cdcc30(void) {
  FTRACE(0x10cdcc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdcc30 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdcc31 mov ebp, esp */
  EBP = (ESP);
  /* 10cdcc33 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdcc34 push ebx */
  push32((uint32_t)(EBX));
  /* 10cdcc35 push esi */
  push32((uint32_t)(ESI));
  /* 10cdcc36 push edi */
  push32((uint32_t)(EDI));
  /* 10cdcc37 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10cdcc3e:;
  /* 10cdcc3e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdcc42 jne 0x10cdcc62 */
  if (!C.zf) goto L_10cdcc62;
  /* 10cdcc44 push 0x10cf9fb8 */
  push32((uint32_t)(0x10cf9fb8u));
  /* 10cdcc49 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cdcc4b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10cdcc4d push 0x10cf9fac */
  push32((uint32_t)(0x10cf9facu));
  /* 10cdcc52 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdcc54 call 0x10cd1750 */
  push32(0x10cdcc59u); f_10cd1750();
  /* 10cdcc59 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdcc5c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdcc5f jne 0x10cdcc62 */
  if (!C.zf) goto L_10cdcc62;
  /* 10cdcc61 int3  */
  x86_unimpl("int3 @ 0x10cdcc61");
L_10cdcc62:;
  /* 10cdcc62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cdcc64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdcc66 jne 0x10cdcc3e */
  if (!C.zf) goto L_10cdcc3e;
  /* 10cdcc68 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdcc6b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10cdcc6e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 10cdcc71 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cdcc73 je 0x10cdcc81 */
  if (C.zf) goto L_10cdcc81;
  /* 10cdcc75 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdcc78 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 10cdcc7f jmp 0x10cdcca8 */
  goto L_10cdcca8;
L_10cdcc81:;
  /* 10cdcc81 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdcc84 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdcc85 call 0x10cdb4a0 */
  push32(0x10cdcc8au); f_10cdb4a0();
  /* 10cdcc8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdcc8d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdcc90 push edx */
  push32((uint32_t)(EDX));
  /* 10cdcc91 call 0x10cdccc0 */
  push32(0x10cdcc96u); f_10cdccc0();
  /* 10cdcc96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdcc99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cdcc9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdcc9f push eax */
  push32((uint32_t)(EAX));
  /* 10cdcca0 call 0x10cdb510 */
  push32(0x10cdcca5u); f_10cdb510();
  /* 10cdcca5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cdcca8:;
  /* 10cdcca8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdccab pop edi */
  EDI = (pop32());
  /* 10cdccac pop esi */
  ESI = (pop32());
  /* 10cdccad pop ebx */
  EBX = (pop32());
  /* 10cdccae mov esp, ebp */
  ESP = (EBP);
  /* 10cdccb0 pop ebp */
  EBP = (pop32());
  /* 10cdccb1 ret  */
  ESPCHK(0x10cdcc30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ccc0 @ 0x10cdccc0 (190 bytes, 67 insns) */
void f_10cdccc0(void) {
  FTRACE(0x10cdccc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdccc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdccc1 mov ebp, esp */
  EBP = (ESP);
  /* 10cdccc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdccc6 push ebx */
  push32((uint32_t)(EBX));
  /* 10cdccc7 push esi */
  push32((uint32_t)(ESI));
  /* 10cdccc8 push edi */
  push32((uint32_t)(EDI));
  /* 10cdccc9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10cdccd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdccd3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10cdccd6:;
  /* 10cdccd6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdccda jne 0x10cdccfa */
  if (!C.zf) goto L_10cdccfa;
  /* 10cdccdc push 0x10cf9e5c */
  push32((uint32_t)(0x10cf9e5cu));
  /* 10cdcce1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cdcce3 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 10cdcce5 push 0x10cf9fac */
  push32((uint32_t)(0x10cf9facu));
  /* 10cdccea push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdccec call 0x10cd1750 */
  push32(0x10cdccf1u); f_10cd1750();
  /* 10cdccf1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdccf4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdccf7 jne 0x10cdccfa */
  if (!C.zf) goto L_10cdccfa;
  /* 10cdccf9 int3  */
  x86_unimpl("int3 @ 0x10cdccf9");
L_10cdccfa:;
  /* 10cdccfa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdccfc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cdccfe jne 0x10cdccd6 */
  if (!C.zf) goto L_10cdccd6;
  /* 10cdcd00 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdcd03 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10cdcd06 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 10cdcd0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdcd0d je 0x10cdcd6a */
  if (C.zf) goto L_10cdcd6a;
  /* 10cdcd0f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdcd12 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdcd13 call 0x10cdbfc0 */
  push32(0x10cdcd18u); f_10cdbfc0();
  /* 10cdcd18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdcd1b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cdcd1e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdcd21 push edx */
  push32((uint32_t)(EDX));
  /* 10cdcd22 call 0x10cdf340 */
  push32(0x10cdcd27u); f_10cdf340();
  /* 10cdcd27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdcd2a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdcd2d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10cdcd30 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdcd31 call 0x10cdf210 */
  push32(0x10cdcd36u); f_10cdf210();
  /* 10cdcd36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdcd39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdcd3b jge 0x10cdcd46 */
  if ((C.sf==C.of)) goto L_10cdcd46;
  /* 10cdcd3d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10cdcd44 jmp 0x10cdcd6a */
  goto L_10cdcd6a;
L_10cdcd46:;
  /* 10cdcd46 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdcd49 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdcd4d je 0x10cdcd6a */
  if (C.zf) goto L_10cdcd6a;
  /* 10cdcd4f push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdcd51 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdcd54 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10cdcd57 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdcd58 call 0x10cd3120 */
  push32(0x10cdcd5du); f_10cd3120();
  /* 10cdcd5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdcd60 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdcd63 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_10cdcd6a:;
  /* 10cdcd6a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdcd6d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 10cdcd74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdcd77 pop edi */
  EDI = (pop32());
  /* 10cdcd78 pop esi */
  ESI = (pop32());
  /* 10cdcd79 pop ebx */
  EBX = (pop32());
  /* 10cdcd7a mov esp, ebp */
  ESP = (EBP);
  /* 10cdcd7c pop ebp */
  EBP = (pop32());
  /* 10cdcd7d ret  */
  ESPCHK(0x10cdccc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd80 @ 0x10cdcd80 (210 bytes, 63 insns) */
void f_10cdcd80(void) {
  FTRACE(0x10cdcd80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdcd80 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdcd81 mov ebp, esp */
  EBP = (ESP);
  /* 10cdcd83 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdcd84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdcd87 cmp eax, dword ptr [0x10cfff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cfff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdcd8d jae 0x10cdcdb1 */
  if (!C.cf) goto L_10cdcdb1;
  /* 10cdcd8f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdcd92 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10cdcd95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdcd98 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10cdcd9b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdcd9e mov eax, dword ptr [ecx*4 + 0x10cffde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10cffde0)));
  /* 10cdcda5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10cdcdaa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10cdcdad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cdcdaf jne 0x10cdcdc4 */
  if (!C.zf) goto L_10cdcdc4;
L_10cdcdb1:;
  /* 10cdcdb1 call 0x10cda560 */
  push32(0x10cdcdb6u); f_10cda560();
  /* 10cdcdb6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10cdcdbc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cdcdbf jmp 0x10cdce4e */
  goto L_10cdce4e;
L_10cdcdc4:;
  /* 10cdcdc4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdcdc7 push edx */
  push32((uint32_t)(EDX));
  /* 10cdcdc8 call 0x10cdbd80 */
  push32(0x10cdcdcdu); f_10cdbd80();
  /* 10cdcdcd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdcdd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdcdd3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10cdcdd6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdcdd9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10cdcddc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdcddf mov edx, dword ptr [eax*4 + 0x10cffde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10cffde0)));
  /* 10cdcde6 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10cdcdeb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10cdcdee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdcdf0 je 0x10cdce2d */
  if (C.zf) goto L_10cdce2d;
  /* 10cdcdf2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdcdf5 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdcdf6 call 0x10cdbc00 */
  push32(0x10cdcdfbu); f_10cdbc00();
  /* 10cdcdfb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdcdfe push eax */
  push32((uint32_t)(EAX));
  /* 10cdcdff call dword ptr [0x10d0030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d0030c))), 0x10cdce05u);
  /* 10cdce05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdce07 jne 0x10cdce14 */
  if (!C.zf) goto L_10cdce14;
  /* 10cdce09 call dword ptr [0x10d00270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00270))), 0x10cdce0fu);
  /* 10cdce0f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cdce12 jmp 0x10cdce1b */
  goto L_10cdce1b;
L_10cdce14:;
  /* 10cdce14 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10cdce1b:;
  /* 10cdce1b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdce1f jne 0x10cdce23 */
  if (!C.zf) goto L_10cdce23;
  /* 10cdce21 jmp 0x10cdce3f */
  goto L_10cdce3f;
L_10cdce23:;
  /* 10cdce23 call 0x10cda570 */
  push32(0x10cdce28u); f_10cda570();
  /* 10cdce28 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdce2b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10cdce2d:;
  /* 10cdce2d call 0x10cda560 */
  push32(0x10cdce32u); f_10cda560();
  /* 10cdce32 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10cdce38 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10cdce3f:;
  /* 10cdce3f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdce42 push eax */
  push32((uint32_t)(EAX));
  /* 10cdce43 call 0x10cdbe10 */
  push32(0x10cdce48u); f_10cdbe10();
  /* 10cdce48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdce4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10cdce4e:;
  /* 10cdce4e mov esp, ebp */
  ESP = (EBP);
  /* 10cdce50 pop ebp */
  EBP = (pop32());
  /* 10cdce51 ret  */
  ESPCHK(0x10cdcd80u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x10cdce60 (219 bytes, 64 insns) */
void f_10cdce60(void) {
  FTRACE(0x10cdce60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdce60 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdce61 mov ebp, esp */
  EBP = (ESP);
  /* 10cdce63 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdce64 cmp dword ptr [0x10cfe60c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe60c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdce6b je 0x10cdcf01 */
  if (C.zf) goto L_10cdcf01;
  /* 10cdce71 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10cdce73 push 0x10cf9fc8 */
  push32((uint32_t)(0x10cf9fc8u));
  /* 10cdce78 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdce7a push 0xac */
  push32((uint32_t)(0xacu));
  /* 10cdce7f push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdce81 call 0x10cd2aa0 */
  push32(0x10cdce86u); f_10cd2aa0();
  /* 10cdce86 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdce89 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cdce8c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdce90 jne 0x10cdce9c */
  if (!C.zf) goto L_10cdce9c;
  /* 10cdce92 mov eax, 1 */
  EAX = (0x1u);
  /* 10cdce97 jmp 0x10cdcf37 */
  goto L_10cdcf37;
L_10cdce9c:;
  /* 10cdce9c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdce9f push eax */
  push32((uint32_t)(EAX));
  /* 10cdcea0 call 0x10cdcf40 */
  push32(0x10cdcea5u); f_10cdcf40();
  /* 10cdcea5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdcea8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdceaa je 0x10cdcecd */
  if (C.zf) goto L_10cdcecd;
  /* 10cdceac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdceaf push ecx */
  push32((uint32_t)(ECX));
  /* 10cdceb0 call 0x10cdd4d0 */
  push32(0x10cdceb5u); f_10cdd4d0();
  /* 10cdceb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdceb8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdceba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdcebd push edx */
  push32((uint32_t)(EDX));
  /* 10cdcebe call 0x10cd3120 */
  push32(0x10cdcec3u); f_10cd3120();
  /* 10cdcec3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdcec6 mov eax, 1 */
  EAX = (0x1u);
  /* 10cdcecb jmp 0x10cdcf37 */
  goto L_10cdcf37;
L_10cdcecd:;
  /* 10cdcecd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdced0 mov dword ptr [0x10cfdc98], eax */
  w32((uint32_t)(0x10cfdc98), (EAX));
  /* 10cdced5 mov ecx, dword ptr [0x10cfe62c] */
  ECX = (r32((uint32_t)(0x10cfe62c)));
  /* 10cdcedb push ecx */
  push32((uint32_t)(ECX));
  /* 10cdcedc call 0x10cdd4d0 */
  push32(0x10cdcee1u); f_10cdd4d0();
  /* 10cdcee1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdcee4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdcee6 mov edx, dword ptr [0x10cfe62c] */
  EDX = (r32((uint32_t)(0x10cfe62c)));
  /* 10cdceec push edx */
  push32((uint32_t)(EDX));
  /* 10cdceed call 0x10cd3120 */
  push32(0x10cdcef2u); f_10cd3120();
  /* 10cdcef2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdcef5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdcef8 mov dword ptr [0x10cfe62c], eax */
  w32((uint32_t)(0x10cfe62c), (EAX));
  /* 10cdcefd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cdceff jmp 0x10cdcf37 */
  goto L_10cdcf37;
L_10cdcf01:;
  /* 10cdcf01 mov dword ptr [0x10cfdc98], 0x10cfdca0 */
  w32((uint32_t)(0x10cfdc98), (0x10cfdca0u));
  /* 10cdcf0b mov ecx, dword ptr [0x10cfe62c] */
  ECX = (r32((uint32_t)(0x10cfe62c)));
  /* 10cdcf11 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdcf12 call 0x10cdd4d0 */
  push32(0x10cdcf17u); f_10cdd4d0();
  /* 10cdcf17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdcf1a push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdcf1c mov edx, dword ptr [0x10cfe62c] */
  EDX = (r32((uint32_t)(0x10cfe62c)));
  /* 10cdcf22 push edx */
  push32((uint32_t)(EDX));
  /* 10cdcf23 call 0x10cd3120 */
  push32(0x10cdcf28u); f_10cd3120();
  /* 10cdcf28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdcf2b mov dword ptr [0x10cfe62c], 0 */
  w32((uint32_t)(0x10cfe62c), (0x0u));
  /* 10cdcf35 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10cdcf37:;
  /* 10cdcf37 mov esp, ebp */
  ESP = (EBP);
  /* 10cdcf39 pop ebp */
  EBP = (pop32());
  /* 10cdcf3a ret  */
  ESPCHK(0x10cdce60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf40 @ 0x10cdcf40 (1423 bytes, 533 insns) */
void f_10cdcf40(void) {
  FTRACE(0x10cdcf40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdcf40 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdcf41 mov ebp, esp */
  EBP = (ESP);
  /* 10cdcf43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdcf46 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10cdcf4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cdcf4f mov ax, word ptr [0x10cfe666] */
  AX = (r16((uint32_t)(0x10cfe666)));
  /* 10cdcf55 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cdcf58 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdcf5a mov cx, word ptr [0x10cfe668] */
  CX = (r16((uint32_t)(0x10cfe668)));
  /* 10cdcf61 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10cdcf64 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdcf68 jne 0x10cdcf72 */
  if (!C.zf) goto L_10cdcf72;
  /* 10cdcf6a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cdcf6d jmp 0x10cdd4cb */
  goto L_10cdd4cb;
L_10cdcf72:;
  /* 10cdcf72 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdcf75 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdcf78 push edx */
  push32((uint32_t)(EDX));
  /* 10cdcf79 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 10cdcf7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdcf7e push eax */
  push32((uint32_t)(EAX));
  /* 10cdcf7f push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdcf81 call 0x10ce0850 */
  push32(0x10cdcf86u); f_10ce0850();
  /* 10cdcf86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdcf89 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdcf8c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdcf8e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cdcf91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdcf94 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdcf97 push edx */
  push32((uint32_t)(EDX));
  /* 10cdcf98 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10cdcf9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdcf9d push eax */
  push32((uint32_t)(EAX));
  /* 10cdcf9e push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdcfa0 call 0x10ce0850 */
  push32(0x10cdcfa5u); f_10ce0850();
  /* 10cdcfa5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdcfa8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdcfab or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdcfad mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cdcfb0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdcfb3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdcfb6 push edx */
  push32((uint32_t)(EDX));
  /* 10cdcfb7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10cdcfb9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdcfbc push eax */
  push32((uint32_t)(EAX));
  /* 10cdcfbd push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdcfbf call 0x10ce0850 */
  push32(0x10cdcfc4u); f_10ce0850();
  /* 10cdcfc4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdcfc7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdcfca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdcfcc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cdcfcf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdcfd2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdcfd5 push edx */
  push32((uint32_t)(EDX));
  /* 10cdcfd6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 10cdcfd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdcfdb push eax */
  push32((uint32_t)(EAX));
  /* 10cdcfdc push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdcfde call 0x10ce0850 */
  push32(0x10cdcfe3u); f_10ce0850();
  /* 10cdcfe3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdcfe6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdcfe9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdcfeb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cdcfee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdcff1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdcff4 push edx */
  push32((uint32_t)(EDX));
  /* 10cdcff5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 10cdcff7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdcffa push eax */
  push32((uint32_t)(EAX));
  /* 10cdcffb push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdcffd call 0x10ce0850 */
  push32(0x10cdd002u); f_10ce0850();
  /* 10cdd002 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd005 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdd008 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdd00a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cdd00d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd010 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd013 push edx */
  push32((uint32_t)(EDX));
  /* 10cdd014 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 10cdd016 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdd019 push eax */
  push32((uint32_t)(EAX));
  /* 10cdd01a push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdd01c call 0x10ce0850 */
  push32(0x10cdd021u); f_10ce0850();
  /* 10cdd021 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd024 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdd027 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdd029 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cdd02c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd02f push edx */
  push32((uint32_t)(EDX));
  /* 10cdd030 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 10cdd032 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdd035 push eax */
  push32((uint32_t)(EAX));
  /* 10cdd036 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdd038 call 0x10ce0850 */
  push32(0x10cdd03du); f_10ce0850();
  /* 10cdd03d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd040 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdd043 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdd045 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cdd048 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd04b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd04e push edx */
  push32((uint32_t)(EDX));
  /* 10cdd04f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10cdd051 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdd054 push eax */
  push32((uint32_t)(EAX));
  /* 10cdd055 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdd057 call 0x10ce0850 */
  push32(0x10cdd05cu); f_10ce0850();
  /* 10cdd05c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd05f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdd062 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdd064 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cdd067 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd06a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd06d push edx */
  push32((uint32_t)(EDX));
  /* 10cdd06e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 10cdd070 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdd073 push eax */
  push32((uint32_t)(EAX));
  /* 10cdd074 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdd076 call 0x10ce0850 */
  push32(0x10cdd07bu); f_10ce0850();
  /* 10cdd07b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd07e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdd081 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdd083 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cdd086 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd089 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd08c push edx */
  push32((uint32_t)(EDX));
  /* 10cdd08d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 10cdd08f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdd092 push eax */
  push32((uint32_t)(EAX));
  /* 10cdd093 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdd095 call 0x10ce0850 */
  push32(0x10cdd09au); f_10ce0850();
  /* 10cdd09a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd09d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdd0a0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdd0a2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cdd0a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd0a8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd0ab push edx */
  push32((uint32_t)(EDX));
  /* 10cdd0ac push 0x2d */
  push32((uint32_t)(0x2du));
  /* 10cdd0ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdd0b1 push eax */
  push32((uint32_t)(EAX));
  /* 10cdd0b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdd0b4 call 0x10ce0850 */
  push32(0x10cdd0b9u); f_10ce0850();
  /* 10cdd0b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd0bc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdd0bf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdd0c1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cdd0c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd0c7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd0ca push edx */
  push32((uint32_t)(EDX));
  /* 10cdd0cb push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10cdd0cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdd0d0 push eax */
  push32((uint32_t)(EAX));
  /* 10cdd0d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdd0d3 call 0x10ce0850 */
  push32(0x10cdd0d8u); f_10ce0850();
  /* 10cdd0d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd0db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdd0de or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdd0e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cdd0e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd0e6 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd0e9 push edx */
  push32((uint32_t)(EDX));
  /* 10cdd0ea push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 10cdd0ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdd0ef push eax */
  push32((uint32_t)(EAX));
  /* 10cdd0f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdd0f2 call 0x10ce0850 */
  push32(0x10cdd0f7u); f_10ce0850();
  /* 10cdd0f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd0fa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdd0fd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdd0ff mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cdd102 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd105 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd108 push edx */
  push32((uint32_t)(EDX));
  /* 10cdd109 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10cdd10b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdd10e push eax */
  push32((uint32_t)(EAX));
  /* 10cdd10f push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdd111 call 0x10ce0850 */
  push32(0x10cdd116u); f_10ce0850();
  /* 10cdd116 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd119 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdd11c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdd11e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cdd121 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd124 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd127 push edx */
  push32((uint32_t)(EDX));
  /* 10cdd128 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10cdd12a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdd12d push eax */
  push32((uint32_t)(EAX));
  /* 10cdd12e push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdd130 call 0x10ce0850 */
  push32(0x10cdd135u); f_10ce0850();
  /* 10cdd135 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd138 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdd13b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdd13d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cdd140 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd143 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd146 push edx */
  push32((uint32_t)(EDX));
  /* 10cdd147 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10cdd149 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdd14c push eax */
  push32((uint32_t)(EAX));
  /* 10cdd14d push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdd14f call 0x10ce0850 */
  push32(0x10cdd154u); f_10ce0850();
  /* 10cdd154 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd157 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdd15a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdd15c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cdd15f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd162 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd165 push edx */
  push32((uint32_t)(EDX));
  /* 10cdd166 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10cdd168 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdd16b push eax */
  push32((uint32_t)(EAX));
  /* 10cdd16c push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdd16e call 0x10ce0850 */
  push32(0x10cdd173u); f_10ce0850();
  /* 10cdd173 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd176 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdd179 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdd17b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cdd17e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd181 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd184 push edx */
  push32((uint32_t)(EDX));
  /* 10cdd185 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10cdd187 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdd18a push eax */
  push32((uint32_t)(EAX));
  /* 10cdd18b push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdd18d call 0x10ce0850 */
  push32(0x10cdd192u); f_10ce0850();
  /* 10cdd192 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd195 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdd198 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdd19a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cdd19d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd1a0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd1a3 push edx */
  push32((uint32_t)(EDX));
  /* 10cdd1a4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10cdd1a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdd1a9 push eax */
  push32((uint32_t)(EAX));
  /* 10cdd1aa push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdd1ac call 0x10ce0850 */
  push32(0x10cdd1b1u); f_10ce0850();
  /* 10cdd1b1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd1b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdd1b7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdd1b9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cdd1bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd1bf add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd1c2 push edx */
  push32((uint32_t)(EDX));
  /* 10cdd1c3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 10cdd1c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdd1c8 push eax */
  push32((uint32_t)(EAX));
  /* 10cdd1c9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdd1cb call 0x10ce0850 */
  push32(0x10cdd1d0u); f_10ce0850();
  /* 10cdd1d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd1d3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdd1d6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdd1d8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cdd1db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd1de add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd1e1 push edx */
  push32((uint32_t)(EDX));
  /* 10cdd1e2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10cdd1e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdd1e7 push eax */
  push32((uint32_t)(EAX));
  /* 10cdd1e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdd1ea call 0x10ce0850 */
  push32(0x10cdd1efu); f_10ce0850();
  /* 10cdd1ef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd1f2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdd1f5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdd1f7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cdd1fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd1fd add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd200 push edx */
  push32((uint32_t)(EDX));
  /* 10cdd201 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10cdd203 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdd206 push eax */
  push32((uint32_t)(EAX));
  /* 10cdd207 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdd209 call 0x10ce0850 */
  push32(0x10cdd20eu); f_10ce0850();
  /* 10cdd20e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd211 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdd214 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdd216 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cdd219 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd21c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd21f push edx */
  push32((uint32_t)(EDX));
  /* 10cdd220 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 10cdd222 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdd225 push eax */
  push32((uint32_t)(EAX));
  /* 10cdd226 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdd228 call 0x10ce0850 */
  push32(0x10cdd22du); f_10ce0850();
  /* 10cdd22d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd230 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdd233 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdd235 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cdd238 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd23b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd23e push edx */
  push32((uint32_t)(EDX));
  /* 10cdd23f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 10cdd241 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdd244 push eax */
  push32((uint32_t)(EAX));
  /* 10cdd245 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdd247 call 0x10ce0850 */
  push32(0x10cdd24cu); f_10ce0850();
  /* 10cdd24c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd24f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdd252 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdd254 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cdd257 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd25a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd25d push edx */
  push32((uint32_t)(EDX));
  /* 10cdd25e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 10cdd260 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdd263 push eax */
  push32((uint32_t)(EAX));
  /* 10cdd264 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdd266 call 0x10ce0850 */
  push32(0x10cdd26bu); f_10ce0850();
  /* 10cdd26b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd26e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdd271 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdd273 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cdd276 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd279 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd27c push edx */
  push32((uint32_t)(EDX));
  /* 10cdd27d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 10cdd27f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdd282 push eax */
  push32((uint32_t)(EAX));
  /* 10cdd283 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdd285 call 0x10ce0850 */
  push32(0x10cdd28au); f_10ce0850();
  /* 10cdd28a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd28d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdd290 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdd292 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cdd295 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd298 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd29b push edx */
  push32((uint32_t)(EDX));
  /* 10cdd29c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 10cdd29e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdd2a1 push eax */
  push32((uint32_t)(EAX));
  /* 10cdd2a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdd2a4 call 0x10ce0850 */
  push32(0x10cdd2a9u); f_10ce0850();
  /* 10cdd2a9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd2ac mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdd2af or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdd2b1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cdd2b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd2b7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd2ba push edx */
  push32((uint32_t)(EDX));
  /* 10cdd2bb push 0x39 */
  push32((uint32_t)(0x39u));
  /* 10cdd2bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdd2c0 push eax */
  push32((uint32_t)(EAX));
  /* 10cdd2c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdd2c3 call 0x10ce0850 */
  push32(0x10cdd2c8u); f_10ce0850();
  /* 10cdd2c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd2cb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdd2ce or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdd2d0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cdd2d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd2d6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd2d9 push edx */
  push32((uint32_t)(EDX));
  /* 10cdd2da push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10cdd2dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdd2df push eax */
  push32((uint32_t)(EAX));
  /* 10cdd2e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdd2e2 call 0x10ce0850 */
  push32(0x10cdd2e7u); f_10ce0850();
  /* 10cdd2e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd2ea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdd2ed or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdd2ef mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cdd2f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd2f5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd2f8 push edx */
  push32((uint32_t)(EDX));
  /* 10cdd2f9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10cdd2fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdd2fe push eax */
  push32((uint32_t)(EAX));
  /* 10cdd2ff push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdd301 call 0x10ce0850 */
  push32(0x10cdd306u); f_10ce0850();
  /* 10cdd306 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd309 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdd30c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdd30e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cdd311 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd314 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd317 push edx */
  push32((uint32_t)(EDX));
  /* 10cdd318 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10cdd31a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdd31d push eax */
  push32((uint32_t)(EAX));
  /* 10cdd31e push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdd320 call 0x10ce0850 */
  push32(0x10cdd325u); f_10ce0850();
  /* 10cdd325 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd328 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdd32b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdd32d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cdd330 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd333 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd336 push edx */
  push32((uint32_t)(EDX));
  /* 10cdd337 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10cdd339 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdd33c push eax */
  push32((uint32_t)(EAX));
  /* 10cdd33d push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdd33f call 0x10ce0850 */
  push32(0x10cdd344u); f_10ce0850();
  /* 10cdd344 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd347 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdd34a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdd34c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cdd34f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd352 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd358 push edx */
  push32((uint32_t)(EDX));
  /* 10cdd359 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 10cdd35b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdd35e push eax */
  push32((uint32_t)(EAX));
  /* 10cdd35f push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdd361 call 0x10ce0850 */
  push32(0x10cdd366u); f_10ce0850();
  /* 10cdd366 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd369 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdd36c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdd36e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cdd371 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd374 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd37a push edx */
  push32((uint32_t)(EDX));
  /* 10cdd37b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10cdd37d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdd380 push eax */
  push32((uint32_t)(EAX));
  /* 10cdd381 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdd383 call 0x10ce0850 */
  push32(0x10cdd388u); f_10ce0850();
  /* 10cdd388 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd38b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdd38e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdd390 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cdd393 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd396 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd39c push edx */
  push32((uint32_t)(EDX));
  /* 10cdd39d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10cdd39f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdd3a2 push eax */
  push32((uint32_t)(EAX));
  /* 10cdd3a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdd3a5 call 0x10ce0850 */
  push32(0x10cdd3aau); f_10ce0850();
  /* 10cdd3aa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd3ad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdd3b0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdd3b2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cdd3b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd3b8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd3be push edx */
  push32((uint32_t)(EDX));
  /* 10cdd3bf push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10cdd3c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdd3c4 push eax */
  push32((uint32_t)(EAX));
  /* 10cdd3c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdd3c7 call 0x10ce0850 */
  push32(0x10cdd3ccu); f_10ce0850();
  /* 10cdd3cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd3cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdd3d2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdd3d4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cdd3d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd3da add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd3e0 push edx */
  push32((uint32_t)(EDX));
  /* 10cdd3e1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10cdd3e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdd3e6 push eax */
  push32((uint32_t)(EAX));
  /* 10cdd3e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdd3e9 call 0x10ce0850 */
  push32(0x10cdd3eeu); f_10ce0850();
  /* 10cdd3ee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd3f1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdd3f4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdd3f6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cdd3f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd3fc add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd402 push edx */
  push32((uint32_t)(EDX));
  /* 10cdd403 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10cdd405 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdd408 push eax */
  push32((uint32_t)(EAX));
  /* 10cdd409 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdd40b call 0x10ce0850 */
  push32(0x10cdd410u); f_10ce0850();
  /* 10cdd410 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd413 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdd416 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdd418 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cdd41b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd41e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd424 push edx */
  push32((uint32_t)(EDX));
  /* 10cdd425 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10cdd427 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdd42a push eax */
  push32((uint32_t)(EAX));
  /* 10cdd42b push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdd42d call 0x10ce0850 */
  push32(0x10cdd432u); f_10ce0850();
  /* 10cdd432 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd435 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdd438 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdd43a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cdd43d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd440 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd446 push edx */
  push32((uint32_t)(EDX));
  /* 10cdd447 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10cdd449 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdd44c push eax */
  push32((uint32_t)(EAX));
  /* 10cdd44d push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdd44f call 0x10ce0850 */
  push32(0x10cdd454u); f_10ce0850();
  /* 10cdd454 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd457 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdd45a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdd45c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cdd45f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd462 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd468 push edx */
  push32((uint32_t)(EDX));
  /* 10cdd469 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10cdd46b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdd46e push eax */
  push32((uint32_t)(EAX));
  /* 10cdd46f push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdd471 call 0x10ce0850 */
  push32(0x10cdd476u); f_10ce0850();
  /* 10cdd476 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd479 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdd47c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdd47e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cdd481 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd484 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd48a push edx */
  push32((uint32_t)(EDX));
  /* 10cdd48b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10cdd48d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdd490 push eax */
  push32((uint32_t)(EAX));
  /* 10cdd491 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdd493 call 0x10ce0850 */
  push32(0x10cdd498u); f_10ce0850();
  /* 10cdd498 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd49b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdd49e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdd4a0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cdd4a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd4a6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd4ac push edx */
  push32((uint32_t)(EDX));
  /* 10cdd4ad push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 10cdd4b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdd4b5 push eax */
  push32((uint32_t)(EAX));
  /* 10cdd4b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdd4b8 call 0x10ce0850 */
  push32(0x10cdd4bdu); f_10ce0850();
  /* 10cdd4bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd4c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdd4c3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdd4c5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cdd4c8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_10cdd4cb:;
  /* 10cdd4cb mov esp, ebp */
  ESP = (EBP);
  /* 10cdd4cd pop ebp */
  EBP = (pop32());
  /* 10cdd4ce ret  */
  ESPCHK(0x10cdcf40u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x10cdd4d0 (779 bytes, 265 insns) */
void f_10cdd4d0(void) {
  FTRACE(0x10cdd4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdd4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdd4d1 mov ebp, esp */
  EBP = (ESP);
  /* 10cdd4d3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdd4d7 jne 0x10cdd4de */
  if (!C.zf) goto L_10cdd4de;
  /* 10cdd4d9 jmp 0x10cdd7d9 */
  goto L_10cdd7d9;
L_10cdd4de:;
  /* 10cdd4de push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd4e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd4e3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10cdd4e6 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdd4e7 call 0x10cd3120 */
  push32(0x10cdd4ecu); f_10cd3120();
  /* 10cdd4ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd4ef push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd4f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd4f4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10cdd4f7 push eax */
  push32((uint32_t)(EAX));
  /* 10cdd4f8 call 0x10cd3120 */
  push32(0x10cdd4fdu); f_10cd3120();
  /* 10cdd4fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd500 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd502 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd505 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10cdd508 push edx */
  push32((uint32_t)(EDX));
  /* 10cdd509 call 0x10cd3120 */
  push32(0x10cdd50eu); f_10cd3120();
  /* 10cdd50e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd511 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd513 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd516 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10cdd519 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdd51a call 0x10cd3120 */
  push32(0x10cdd51fu); f_10cd3120();
  /* 10cdd51f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd522 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd524 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd527 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10cdd52a push eax */
  push32((uint32_t)(EAX));
  /* 10cdd52b call 0x10cd3120 */
  push32(0x10cdd530u); f_10cd3120();
  /* 10cdd530 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd533 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd535 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd538 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10cdd53b push edx */
  push32((uint32_t)(EDX));
  /* 10cdd53c call 0x10cd3120 */
  push32(0x10cdd541u); f_10cd3120();
  /* 10cdd541 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd544 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd546 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd549 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10cdd54b push ecx */
  push32((uint32_t)(ECX));
  /* 10cdd54c call 0x10cd3120 */
  push32(0x10cdd551u); f_10cd3120();
  /* 10cdd551 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd554 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd556 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd559 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10cdd55c push eax */
  push32((uint32_t)(EAX));
  /* 10cdd55d call 0x10cd3120 */
  push32(0x10cdd562u); f_10cd3120();
  /* 10cdd562 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd565 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd567 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd56a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10cdd56d push edx */
  push32((uint32_t)(EDX));
  /* 10cdd56e call 0x10cd3120 */
  push32(0x10cdd573u); f_10cd3120();
  /* 10cdd573 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd576 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd578 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd57b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 10cdd57e push ecx */
  push32((uint32_t)(ECX));
  /* 10cdd57f call 0x10cd3120 */
  push32(0x10cdd584u); f_10cd3120();
  /* 10cdd584 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd587 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd589 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd58c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 10cdd58f push eax */
  push32((uint32_t)(EAX));
  /* 10cdd590 call 0x10cd3120 */
  push32(0x10cdd595u); f_10cd3120();
  /* 10cdd595 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd598 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd59a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd59d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10cdd5a0 push edx */
  push32((uint32_t)(EDX));
  /* 10cdd5a1 call 0x10cd3120 */
  push32(0x10cdd5a6u); f_10cd3120();
  /* 10cdd5a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd5a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd5ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd5ae mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 10cdd5b1 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdd5b2 call 0x10cd3120 */
  push32(0x10cdd5b7u); f_10cd3120();
  /* 10cdd5b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd5ba push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd5bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd5bf mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10cdd5c2 push eax */
  push32((uint32_t)(EAX));
  /* 10cdd5c3 call 0x10cd3120 */
  push32(0x10cdd5c8u); f_10cd3120();
  /* 10cdd5c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd5cb push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd5cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd5d0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 10cdd5d3 push edx */
  push32((uint32_t)(EDX));
  /* 10cdd5d4 call 0x10cd3120 */
  push32(0x10cdd5d9u); f_10cd3120();
  /* 10cdd5d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd5dc push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd5de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd5e1 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 10cdd5e4 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdd5e5 call 0x10cd3120 */
  push32(0x10cdd5eau); f_10cd3120();
  /* 10cdd5ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd5ed push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd5ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd5f2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10cdd5f5 push eax */
  push32((uint32_t)(EAX));
  /* 10cdd5f6 call 0x10cd3120 */
  push32(0x10cdd5fbu); f_10cd3120();
  /* 10cdd5fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd5fe push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd600 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd603 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 10cdd606 push edx */
  push32((uint32_t)(EDX));
  /* 10cdd607 call 0x10cd3120 */
  push32(0x10cdd60cu); f_10cd3120();
  /* 10cdd60c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd60f push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd611 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd614 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 10cdd617 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdd618 call 0x10cd3120 */
  push32(0x10cdd61du); f_10cd3120();
  /* 10cdd61d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd620 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd622 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd625 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 10cdd628 push eax */
  push32((uint32_t)(EAX));
  /* 10cdd629 call 0x10cd3120 */
  push32(0x10cdd62eu); f_10cd3120();
  /* 10cdd62e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd631 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd633 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd636 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10cdd639 push edx */
  push32((uint32_t)(EDX));
  /* 10cdd63a call 0x10cd3120 */
  push32(0x10cdd63fu); f_10cd3120();
  /* 10cdd63f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd642 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd644 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd647 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10cdd64a push ecx */
  push32((uint32_t)(ECX));
  /* 10cdd64b call 0x10cd3120 */
  push32(0x10cdd650u); f_10cd3120();
  /* 10cdd650 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd653 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd655 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd658 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 10cdd65b push eax */
  push32((uint32_t)(EAX));
  /* 10cdd65c call 0x10cd3120 */
  push32(0x10cdd661u); f_10cd3120();
  /* 10cdd661 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd664 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd666 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd669 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 10cdd66c push edx */
  push32((uint32_t)(EDX));
  /* 10cdd66d call 0x10cd3120 */
  push32(0x10cdd672u); f_10cd3120();
  /* 10cdd672 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd675 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd677 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd67a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 10cdd67d push ecx */
  push32((uint32_t)(ECX));
  /* 10cdd67e call 0x10cd3120 */
  push32(0x10cdd683u); f_10cd3120();
  /* 10cdd683 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd686 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd688 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd68b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 10cdd68e push eax */
  push32((uint32_t)(EAX));
  /* 10cdd68f call 0x10cd3120 */
  push32(0x10cdd694u); f_10cd3120();
  /* 10cdd694 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd697 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd699 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd69c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 10cdd69f push edx */
  push32((uint32_t)(EDX));
  /* 10cdd6a0 call 0x10cd3120 */
  push32(0x10cdd6a5u); f_10cd3120();
  /* 10cdd6a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd6a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd6aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd6ad mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 10cdd6b0 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdd6b1 call 0x10cd3120 */
  push32(0x10cdd6b6u); f_10cd3120();
  /* 10cdd6b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd6b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd6bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd6be mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 10cdd6c1 push eax */
  push32((uint32_t)(EAX));
  /* 10cdd6c2 call 0x10cd3120 */
  push32(0x10cdd6c7u); f_10cd3120();
  /* 10cdd6c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd6ca push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd6cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd6cf mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 10cdd6d2 push edx */
  push32((uint32_t)(EDX));
  /* 10cdd6d3 call 0x10cd3120 */
  push32(0x10cdd6d8u); f_10cd3120();
  /* 10cdd6d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd6db push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd6dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd6e0 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 10cdd6e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdd6e4 call 0x10cd3120 */
  push32(0x10cdd6e9u); f_10cd3120();
  /* 10cdd6e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd6ec push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd6ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd6f1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 10cdd6f4 push eax */
  push32((uint32_t)(EAX));
  /* 10cdd6f5 call 0x10cd3120 */
  push32(0x10cdd6fau); f_10cd3120();
  /* 10cdd6fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd6fd push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd6ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd702 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 10cdd708 push edx */
  push32((uint32_t)(EDX));
  /* 10cdd709 call 0x10cd3120 */
  push32(0x10cdd70eu); f_10cd3120();
  /* 10cdd70e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd711 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd713 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd716 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 10cdd71c push ecx */
  push32((uint32_t)(ECX));
  /* 10cdd71d call 0x10cd3120 */
  push32(0x10cdd722u); f_10cd3120();
  /* 10cdd722 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd725 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd727 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd72a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 10cdd730 push eax */
  push32((uint32_t)(EAX));
  /* 10cdd731 call 0x10cd3120 */
  push32(0x10cdd736u); f_10cd3120();
  /* 10cdd736 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd739 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd73b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd73e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 10cdd744 push edx */
  push32((uint32_t)(EDX));
  /* 10cdd745 call 0x10cd3120 */
  push32(0x10cdd74au); f_10cd3120();
  /* 10cdd74a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd74d push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd74f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd752 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 10cdd758 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdd759 call 0x10cd3120 */
  push32(0x10cdd75eu); f_10cd3120();
  /* 10cdd75e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd761 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd763 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd766 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 10cdd76c push eax */
  push32((uint32_t)(EAX));
  /* 10cdd76d call 0x10cd3120 */
  push32(0x10cdd772u); f_10cd3120();
  /* 10cdd772 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd775 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd777 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd77a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 10cdd780 push edx */
  push32((uint32_t)(EDX));
  /* 10cdd781 call 0x10cd3120 */
  push32(0x10cdd786u); f_10cd3120();
  /* 10cdd786 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd789 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd78b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd78e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10cdd794 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdd795 call 0x10cd3120 */
  push32(0x10cdd79au); f_10cd3120();
  /* 10cdd79a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd79d push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd79f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd7a2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10cdd7a8 push eax */
  push32((uint32_t)(EAX));
  /* 10cdd7a9 call 0x10cd3120 */
  push32(0x10cdd7aeu); f_10cd3120();
  /* 10cdd7ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd7b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd7b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd7b6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10cdd7bc push edx */
  push32((uint32_t)(EDX));
  /* 10cdd7bd call 0x10cd3120 */
  push32(0x10cdd7c2u); f_10cd3120();
  /* 10cdd7c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd7c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd7c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdd7ca mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 10cdd7d0 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdd7d1 call 0x10cd3120 */
  push32(0x10cdd7d6u); f_10cd3120();
  /* 10cdd7d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cdd7d9:;
  /* 10cdd7d9 pop ebp */
  EBP = (pop32());
  /* 10cdd7da ret  */
  ESPCHK(0x10cdd4d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d7e0 @ 0x10cdd7e0 (678 bytes, 180 insns) */
void f_10cdd7e0(void) {
  FTRACE(0x10cdd7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdd7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdd7e1 mov ebp, esp */
  EBP = (ESP);
  /* 10cdd7e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdd7e6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10cdd7ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cdd7ef mov ax, word ptr [0x10cfe662] */
  AX = (r16((uint32_t)(0x10cfe662)));
  /* 10cdd7f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cdd7f8 cmp dword ptr [0x10cfe608], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe608))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdd7ff je 0x10cdd95a */
  if (C.zf) goto L_10cdd95a;
  /* 10cdd805 push 0x10cfe630 */
  push32((uint32_t)(0x10cfe630u));
  /* 10cdd80a push 0xe */
  push32((uint32_t)(0xeu));
  /* 10cdd80c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdd80f push ecx */
  push32((uint32_t)(ECX));
  /* 10cdd810 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdd812 call 0x10ce0850 */
  push32(0x10cdd817u); f_10ce0850();
  /* 10cdd817 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd81a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdd81d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10cdd81f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10cdd822 push 0x10cfe634 */
  push32((uint32_t)(0x10cfe634u));
  /* 10cdd827 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10cdd829 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdd82c push eax */
  push32((uint32_t)(EAX));
  /* 10cdd82d push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdd82f call 0x10ce0850 */
  push32(0x10cdd834u); f_10ce0850();
  /* 10cdd834 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd837 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdd83a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdd83c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10cdd83f push 0x10cfe638 */
  push32((uint32_t)(0x10cfe638u));
  /* 10cdd844 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10cdd846 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdd849 push edx */
  push32((uint32_t)(EDX));
  /* 10cdd84a push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdd84c call 0x10ce0850 */
  push32(0x10cdd851u); f_10ce0850();
  /* 10cdd851 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd854 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdd857 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdd859 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10cdd85c mov edx, dword ptr [0x10cfe638] */
  EDX = (r32((uint32_t)(0x10cfe638)));
  /* 10cdd862 push edx */
  push32((uint32_t)(EDX));
  /* 10cdd863 call 0x10cdda90 */
  push32(0x10cdd868u); f_10cdda90();
  /* 10cdd868 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd86b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdd86f je 0x10cdd8c9 */
  if (C.zf) goto L_10cdd8c9;
  /* 10cdd871 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd873 mov eax, dword ptr [0x10cfe630] */
  EAX = (r32((uint32_t)(0x10cfe630)));
  /* 10cdd878 push eax */
  push32((uint32_t)(EAX));
  /* 10cdd879 call 0x10cd3120 */
  push32(0x10cdd87eu); f_10cd3120();
  /* 10cdd87e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd881 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd883 mov ecx, dword ptr [0x10cfe634] */
  ECX = (r32((uint32_t)(0x10cfe634)));
  /* 10cdd889 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdd88a call 0x10cd3120 */
  push32(0x10cdd88fu); f_10cd3120();
  /* 10cdd88f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd892 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd894 mov edx, dword ptr [0x10cfe638] */
  EDX = (r32((uint32_t)(0x10cfe638)));
  /* 10cdd89a push edx */
  push32((uint32_t)(EDX));
  /* 10cdd89b call 0x10cd3120 */
  push32(0x10cdd8a0u); f_10cd3120();
  /* 10cdd8a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd8a3 mov dword ptr [0x10cfe630], 0 */
  w32((uint32_t)(0x10cfe630), (0x0u));
  /* 10cdd8ad mov dword ptr [0x10cfe634], 0 */
  w32((uint32_t)(0x10cfe634), (0x0u));
  /* 10cdd8b7 mov dword ptr [0x10cfe638], 0 */
  w32((uint32_t)(0x10cfe638), (0x0u));
  /* 10cdd8c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cdd8c4 jmp 0x10cdda82 */
  goto L_10cdda82;
L_10cdd8c9:;
  /* 10cdd8c9 mov eax, dword ptr [0x10cfdd88] */
  EAX = (r32((uint32_t)(0x10cfdd88)));
  /* 10cdd8ce cmp dword ptr [eax], 0x10cfdd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x10cfdd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdd8d4 je 0x10cdd910 */
  if (C.zf) goto L_10cdd910;
  /* 10cdd8d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd8d8 mov ecx, dword ptr [0x10cfdd88] */
  ECX = (r32((uint32_t)(0x10cfdd88)));
  /* 10cdd8de mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10cdd8e0 push edx */
  push32((uint32_t)(EDX));
  /* 10cdd8e1 call 0x10cd3120 */
  push32(0x10cdd8e6u); f_10cd3120();
  /* 10cdd8e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd8e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd8eb mov eax, dword ptr [0x10cfdd88] */
  EAX = (r32((uint32_t)(0x10cfdd88)));
  /* 10cdd8f0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10cdd8f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdd8f4 call 0x10cd3120 */
  push32(0x10cdd8f9u); f_10cd3120();
  /* 10cdd8f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd8fc push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd8fe mov edx, dword ptr [0x10cfdd88] */
  EDX = (r32((uint32_t)(0x10cfdd88)));
  /* 10cdd904 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10cdd907 push eax */
  push32((uint32_t)(EAX));
  /* 10cdd908 call 0x10cd3120 */
  push32(0x10cdd90du); f_10cd3120();
  /* 10cdd90d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cdd910:;
  /* 10cdd910 mov ecx, dword ptr [0x10cfdd88] */
  ECX = (r32((uint32_t)(0x10cfdd88)));
  /* 10cdd916 mov edx, dword ptr [0x10cfe630] */
  EDX = (r32((uint32_t)(0x10cfe630)));
  /* 10cdd91c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10cdd91e mov eax, dword ptr [0x10cfdd88] */
  EAX = (r32((uint32_t)(0x10cfdd88)));
  /* 10cdd923 mov ecx, dword ptr [0x10cfe634] */
  ECX = (r32((uint32_t)(0x10cfe634)));
  /* 10cdd929 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10cdd92c mov edx, dword ptr [0x10cfdd88] */
  EDX = (r32((uint32_t)(0x10cfdd88)));
  /* 10cdd932 mov eax, dword ptr [0x10cfe638] */
  EAX = (r32((uint32_t)(0x10cfe638)));
  /* 10cdd937 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10cdd93a mov ecx, dword ptr [0x10cfdd88] */
  ECX = (r32((uint32_t)(0x10cfdd88)));
  /* 10cdd940 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10cdd942 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10cdd944 mov byte ptr [0x10cfcea8], al */
  w8((uint32_t)(0x10cfcea8), (AL));
  /* 10cdd949 mov dword ptr [0x10cfceac], 1 */
  w32((uint32_t)(0x10cfceac), (0x1u));
  /* 10cdd953 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cdd955 jmp 0x10cdda82 */
  goto L_10cdda82;
L_10cdd95a:;
  /* 10cdd95a push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd95c mov ecx, dword ptr [0x10cfe630] */
  ECX = (r32((uint32_t)(0x10cfe630)));
  /* 10cdd962 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdd963 call 0x10cd3120 */
  push32(0x10cdd968u); f_10cd3120();
  /* 10cdd968 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd96b push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd96d mov edx, dword ptr [0x10cfe634] */
  EDX = (r32((uint32_t)(0x10cfe634)));
  /* 10cdd973 push edx */
  push32((uint32_t)(EDX));
  /* 10cdd974 call 0x10cd3120 */
  push32(0x10cdd979u); f_10cd3120();
  /* 10cdd979 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd97c push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd97e mov eax, dword ptr [0x10cfe638] */
  EAX = (r32((uint32_t)(0x10cfe638)));
  /* 10cdd983 push eax */
  push32((uint32_t)(EAX));
  /* 10cdd984 call 0x10cd3120 */
  push32(0x10cdd989u); f_10cd3120();
  /* 10cdd989 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd98c mov dword ptr [0x10cfe630], 0 */
  w32((uint32_t)(0x10cfe630), (0x0u));
  /* 10cdd996 mov dword ptr [0x10cfe634], 0 */
  w32((uint32_t)(0x10cfe634), (0x0u));
  /* 10cdd9a0 mov dword ptr [0x10cfe638], 0 */
  w32((uint32_t)(0x10cfe638), (0x0u));
  /* 10cdd9aa push 0x88 */
  push32((uint32_t)(0x88u));
  /* 10cdd9af push 0x10cf9fd4 */
  push32((uint32_t)(0x10cf9fd4u));
  /* 10cdd9b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd9b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd9b8 call 0x10cd2690 */
  push32(0x10cdd9bdu); f_10cd2690();
  /* 10cdd9bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd9c0 mov ecx, dword ptr [0x10cfdd88] */
  ECX = (r32((uint32_t)(0x10cfdd88)));
  /* 10cdd9c6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10cdd9c8 mov edx, dword ptr [0x10cfdd88] */
  EDX = (r32((uint32_t)(0x10cfdd88)));
  /* 10cdd9ce cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdd9d1 jne 0x10cdd9db */
  if (!C.zf) goto L_10cdd9db;
  /* 10cdd9d3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cdd9d6 jmp 0x10cdda82 */
  goto L_10cdda82;
L_10cdd9db:;
  /* 10cdd9db push 0x10cf9fa4 */
  push32((uint32_t)(0x10cf9fa4u));
  /* 10cdd9e0 mov eax, dword ptr [0x10cfdd88] */
  EAX = (r32((uint32_t)(0x10cfdd88)));
  /* 10cdd9e5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10cdd9e7 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdd9e8 call 0x10cd5640 */
  push32(0x10cdd9edu); f_10cd5640();
  /* 10cdd9ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdd9f0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 10cdd9f5 push 0x10cf9fd4 */
  push32((uint32_t)(0x10cf9fd4u));
  /* 10cdd9fa push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd9fc push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdd9fe call 0x10cd2690 */
  push32(0x10cdda03u); f_10cd2690();
  /* 10cdda03 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdda06 mov edx, dword ptr [0x10cfdd88] */
  EDX = (r32((uint32_t)(0x10cfdd88)));
  /* 10cdda0c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10cdda0f mov eax, dword ptr [0x10cfdd88] */
  EAX = (r32((uint32_t)(0x10cfdd88)));
  /* 10cdda14 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdda18 jne 0x10cdda1f */
  if (!C.zf) goto L_10cdda1f;
  /* 10cdda1a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cdda1d jmp 0x10cdda82 */
  goto L_10cdda82;
L_10cdda1f:;
  /* 10cdda1f mov ecx, dword ptr [0x10cfdd88] */
  ECX = (r32((uint32_t)(0x10cfdd88)));
  /* 10cdda25 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10cdda28 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10cdda2b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 10cdda30 push 0x10cf9fd4 */
  push32((uint32_t)(0x10cf9fd4u));
  /* 10cdda35 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdda37 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdda39 call 0x10cd2690 */
  push32(0x10cdda3eu); f_10cd2690();
  /* 10cdda3e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdda41 mov ecx, dword ptr [0x10cfdd88] */
  ECX = (r32((uint32_t)(0x10cfdd88)));
  /* 10cdda47 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10cdda4a mov edx, dword ptr [0x10cfdd88] */
  EDX = (r32((uint32_t)(0x10cfdd88)));
  /* 10cdda50 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdda54 jne 0x10cdda5b */
  if (!C.zf) goto L_10cdda5b;
  /* 10cdda56 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cdda59 jmp 0x10cdda82 */
  goto L_10cdda82;
L_10cdda5b:;
  /* 10cdda5b mov eax, dword ptr [0x10cfdd88] */
  EAX = (r32((uint32_t)(0x10cfdd88)));
  /* 10cdda60 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10cdda63 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10cdda66 mov edx, dword ptr [0x10cfdd88] */
  EDX = (r32((uint32_t)(0x10cfdd88)));
  /* 10cdda6c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10cdda6e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10cdda70 mov byte ptr [0x10cfcea8], cl */
  w8((uint32_t)(0x10cfcea8), (CL));
  /* 10cdda76 mov dword ptr [0x10cfceac], 1 */
  w32((uint32_t)(0x10cfceac), (0x1u));
  /* 10cdda80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10cdda82:;
  /* 10cdda82 mov esp, ebp */
  ESP = (EBP);
  /* 10cdda84 pop ebp */
  EBP = (pop32());
  /* 10cdda85 ret  */
  ESPCHK(0x10cdd7e0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10cdda90 (125 bytes, 49 insns) */
void f_10cdda90(void) {
  FTRACE(0x10cdda90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdda90 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdda91 mov ebp, esp */
  EBP = (ESP);
  /* 10cdda93 push ecx */
  push32((uint32_t)(ECX));
L_10cdda94:;
  /* 10cdda94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdda97 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10cdda9a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cdda9c je 0x10cddb09 */
  if (C.zf) goto L_10cddb09;
  /* 10cdda9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cddaa1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10cddaa4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cddaa7 jl 0x10cddacd */
  if ((C.sf!=C.of)) goto L_10cddacd;
  /* 10cddaa9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cddaac movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10cddaaf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cddab2 jg 0x10cddacd */
  if ((!C.zf&&C.sf==C.of)) goto L_10cddacd;
  /* 10cddab4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cddab7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10cddaba sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cddabd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cddac0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10cddac2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cddac5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cddac8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10cddacb jmp 0x10cddb07 */
  goto L_10cddb07;
L_10cddacd:;
  /* 10cddacd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cddad0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10cddad3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cddad6 jne 0x10cddafe */
  if (!C.zf) goto L_10cddafe;
  /* 10cddad8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cddadb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10cddade:;
  /* 10cddade mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cddae1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cddae4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10cddae7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10cddae9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cddaec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cddaef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10cddaf2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cddaf5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10cddaf8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cddafa jne 0x10cddade */
  if (!C.zf) goto L_10cddade;
  /* 10cddafc jmp 0x10cddb07 */
  goto L_10cddb07;
L_10cddafe:;
  /* 10cddafe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cddb01 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cddb04 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10cddb07:;
  /* 10cddb07 jmp 0x10cdda94 */
  goto L_10cdda94;
L_10cddb09:;
  /* 10cddb09 mov esp, ebp */
  ESP = (EBP);
  /* 10cddb0b pop ebp */
  EBP = (pop32());
  /* 10cddb0c ret  */
  ESPCHK(0x10cdda90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db10 @ 0x10cddb10 (304 bytes, 85 insns) */
void f_10cddb10(void) {
  FTRACE(0x10cddb10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cddb10 push ebp */
  push32((uint32_t)(EBP));
  /* 10cddb11 mov ebp, esp */
  EBP = (ESP);
  /* 10cddb13 push ecx */
  push32((uint32_t)(ECX));
  /* 10cddb14 cmp dword ptr [0x10cfe604], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe604))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cddb1b je 0x10cddbdc */
  if (C.zf) goto L_10cddbdc;
  /* 10cddb21 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10cddb23 push 0x10cf9fe0 */
  push32((uint32_t)(0x10cf9fe0u));
  /* 10cddb28 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cddb2a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10cddb2c push 1 */
  push32((uint32_t)(0x1u));
  /* 10cddb2e call 0x10cd2aa0 */
  push32(0x10cddb33u); f_10cd2aa0();
  /* 10cddb33 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cddb36 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cddb39 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cddb3d jne 0x10cddb49 */
  if (!C.zf) goto L_10cddb49;
  /* 10cddb3f mov eax, 1 */
  EAX = (0x1u);
  /* 10cddb44 jmp 0x10cddc3c */
  goto L_10cddc3c;
L_10cddb49:;
  /* 10cddb49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cddb4c push eax */
  push32((uint32_t)(EAX));
  /* 10cddb4d call 0x10cddc40 */
  push32(0x10cddb52u); f_10cddc40();
  /* 10cddb52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cddb55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cddb57 je 0x10cddb7d */
  if (C.zf) goto L_10cddb7d;
  /* 10cddb59 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cddb5c push ecx */
  push32((uint32_t)(ECX));
  /* 10cddb5d call 0x10cdded0 */
  push32(0x10cddb62u); f_10cdded0();
  /* 10cddb62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cddb65 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cddb67 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cddb6a push edx */
  push32((uint32_t)(EDX));
  /* 10cddb6b call 0x10cd3120 */
  push32(0x10cddb70u); f_10cd3120();
  /* 10cddb70 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cddb73 mov eax, 1 */
  EAX = (0x1u);
  /* 10cddb78 jmp 0x10cddc3c */
  goto L_10cddc3c;
L_10cddb7d:;
  /* 10cddb7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cddb80 mov ecx, dword ptr [0x10cfdd88] */
  ECX = (r32((uint32_t)(0x10cfdd88)));
  /* 10cddb86 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10cddb88 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10cddb8a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cddb8d mov ecx, dword ptr [0x10cfdd88] */
  ECX = (r32((uint32_t)(0x10cfdd88)));
  /* 10cddb93 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10cddb96 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10cddb99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cddb9c mov ecx, dword ptr [0x10cfdd88] */
  ECX = (r32((uint32_t)(0x10cfdd88)));
  /* 10cddba2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10cddba5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10cddba8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cddbab mov dword ptr [0x10cfdd88], eax */
  w32((uint32_t)(0x10cfdd88), (EAX));
  /* 10cddbb0 mov ecx, dword ptr [0x10cfe63c] */
  ECX = (r32((uint32_t)(0x10cfe63c)));
  /* 10cddbb6 push ecx */
  push32((uint32_t)(ECX));
  /* 10cddbb7 call 0x10cdded0 */
  push32(0x10cddbbcu); f_10cdded0();
  /* 10cddbbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cddbbf push 2 */
  push32((uint32_t)(0x2u));
  /* 10cddbc1 mov edx, dword ptr [0x10cfe63c] */
  EDX = (r32((uint32_t)(0x10cfe63c)));
  /* 10cddbc7 push edx */
  push32((uint32_t)(EDX));
  /* 10cddbc8 call 0x10cd3120 */
  push32(0x10cddbcdu); f_10cd3120();
  /* 10cddbcd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cddbd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cddbd3 mov dword ptr [0x10cfe63c], eax */
  w32((uint32_t)(0x10cfe63c), (EAX));
  /* 10cddbd8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cddbda jmp 0x10cddc3c */
  goto L_10cddc3c;
L_10cddbdc:;
  /* 10cddbdc mov ecx, dword ptr [0x10cfdd88] */
  ECX = (r32((uint32_t)(0x10cfdd88)));
  /* 10cddbe2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10cddbe4 mov dword ptr [0x10cfdd58], edx */
  w32((uint32_t)(0x10cfdd58), (EDX));
  /* 10cddbea mov eax, dword ptr [0x10cfdd88] */
  EAX = (r32((uint32_t)(0x10cfdd88)));
  /* 10cddbef mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10cddbf2 mov dword ptr [0x10cfdd5c], ecx */
  w32((uint32_t)(0x10cfdd5c), (ECX));
  /* 10cddbf8 mov edx, dword ptr [0x10cfdd88] */
  EDX = (r32((uint32_t)(0x10cfdd88)));
  /* 10cddbfe mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10cddc01 mov dword ptr [0x10cfdd60], eax */
  w32((uint32_t)(0x10cfdd60), (EAX));
  /* 10cddc06 mov dword ptr [0x10cfdd88], 0x10cfdd58 */
  w32((uint32_t)(0x10cfdd88), (0x10cfdd58u));
  /* 10cddc10 mov ecx, dword ptr [0x10cfe63c] */
  ECX = (r32((uint32_t)(0x10cfe63c)));
  /* 10cddc16 push ecx */
  push32((uint32_t)(ECX));
  /* 10cddc17 call 0x10cdded0 */
  push32(0x10cddc1cu); f_10cdded0();
  /* 10cddc1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cddc1f push 2 */
  push32((uint32_t)(0x2u));
  /* 10cddc21 mov edx, dword ptr [0x10cfe63c] */
  EDX = (r32((uint32_t)(0x10cfe63c)));
  /* 10cddc27 push edx */
  push32((uint32_t)(EDX));
  /* 10cddc28 call 0x10cd3120 */
  push32(0x10cddc2du); f_10cd3120();
  /* 10cddc2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cddc30 mov dword ptr [0x10cfe63c], 0 */
  w32((uint32_t)(0x10cfe63c), (0x0u));
  /* 10cddc3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10cddc3c:;
  /* 10cddc3c mov esp, ebp */
  ESP = (EBP);
  /* 10cddc3e pop ebp */
  EBP = (pop32());
  /* 10cddc3f ret  */
  ESPCHK(0x10cddb10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc40 @ 0x10cddc40 (525 bytes, 200 insns) */
void f_10cddc40(void) {
  FTRACE(0x10cddc40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cddc40 push ebp */
  push32((uint32_t)(EBP));
  /* 10cddc41 mov ebp, esp */
  EBP = (ESP);
  /* 10cddc43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cddc46 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10cddc4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cddc4f mov ax, word ptr [0x10cfe65c] */
  AX = (r16((uint32_t)(0x10cfe65c)));
  /* 10cddc55 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cddc58 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cddc5c jne 0x10cddc66 */
  if (!C.zf) goto L_10cddc66;
  /* 10cddc5e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cddc61 jmp 0x10cdde49 */
  goto L_10cdde49;
L_10cddc66:;
  /* 10cddc66 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cddc69 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cddc6c push ecx */
  push32((uint32_t)(ECX));
  /* 10cddc6d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10cddc6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cddc72 push edx */
  push32((uint32_t)(EDX));
  /* 10cddc73 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cddc75 call 0x10ce0850 */
  push32(0x10cddc7au); f_10ce0850();
  /* 10cddc7a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cddc7d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cddc80 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cddc82 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10cddc85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cddc88 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cddc8b push edx */
  push32((uint32_t)(EDX));
  /* 10cddc8c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10cddc8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cddc91 push eax */
  push32((uint32_t)(EAX));
  /* 10cddc92 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cddc94 call 0x10ce0850 */
  push32(0x10cddc99u); f_10ce0850();
  /* 10cddc99 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cddc9c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cddc9f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cddca1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10cddca4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cddca7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cddcaa push edx */
  push32((uint32_t)(EDX));
  /* 10cddcab push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10cddcad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cddcb0 push eax */
  push32((uint32_t)(EAX));
  /* 10cddcb1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cddcb3 call 0x10ce0850 */
  push32(0x10cddcb8u); f_10ce0850();
  /* 10cddcb8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cddcbb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cddcbe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cddcc0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10cddcc3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cddcc6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cddcc9 push edx */
  push32((uint32_t)(EDX));
  /* 10cddcca push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10cddccc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cddccf push eax */
  push32((uint32_t)(EAX));
  /* 10cddcd0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cddcd2 call 0x10ce0850 */
  push32(0x10cddcd7u); f_10ce0850();
  /* 10cddcd7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cddcda mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cddcdd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cddcdf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10cddce2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cddce5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cddce8 push edx */
  push32((uint32_t)(EDX));
  /* 10cddce9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10cddceb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cddcee push eax */
  push32((uint32_t)(EAX));
  /* 10cddcef push 1 */
  push32((uint32_t)(0x1u));
  /* 10cddcf1 call 0x10ce0850 */
  push32(0x10cddcf6u); f_10ce0850();
  /* 10cddcf6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cddcf9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cddcfc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cddcfe mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10cddd01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cddd04 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10cddd07 push eax */
  push32((uint32_t)(EAX));
  /* 10cddd08 call 0x10cdde50 */
  push32(0x10cddd0du); f_10cdde50();
  /* 10cddd0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cddd10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cddd13 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cddd16 push ecx */
  push32((uint32_t)(ECX));
  /* 10cddd17 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10cddd19 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cddd1c push edx */
  push32((uint32_t)(EDX));
  /* 10cddd1d push 1 */
  push32((uint32_t)(0x1u));
  /* 10cddd1f call 0x10ce0850 */
  push32(0x10cddd24u); f_10ce0850();
  /* 10cddd24 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cddd27 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cddd2a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cddd2c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10cddd2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cddd32 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cddd35 push edx */
  push32((uint32_t)(EDX));
  /* 10cddd36 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 10cddd38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cddd3b push eax */
  push32((uint32_t)(EAX));
  /* 10cddd3c push 1 */
  push32((uint32_t)(0x1u));
  /* 10cddd3e call 0x10ce0850 */
  push32(0x10cddd43u); f_10ce0850();
  /* 10cddd43 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cddd46 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cddd49 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cddd4b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10cddd4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cddd51 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cddd54 push edx */
  push32((uint32_t)(EDX));
  /* 10cddd55 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10cddd57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cddd5a push eax */
  push32((uint32_t)(EAX));
  /* 10cddd5b push 0 */
  push32((uint32_t)(0x0u));
  /* 10cddd5d call 0x10ce0850 */
  push32(0x10cddd62u); f_10ce0850();
  /* 10cddd62 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cddd65 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cddd68 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cddd6a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10cddd6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cddd70 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cddd73 push edx */
  push32((uint32_t)(EDX));
  /* 10cddd74 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10cddd76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cddd79 push eax */
  push32((uint32_t)(EAX));
  /* 10cddd7a push 0 */
  push32((uint32_t)(0x0u));
  /* 10cddd7c call 0x10ce0850 */
  push32(0x10cddd81u); f_10ce0850();
  /* 10cddd81 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cddd84 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cddd87 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cddd89 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10cddd8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cddd8f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cddd92 push edx */
  push32((uint32_t)(EDX));
  /* 10cddd93 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 10cddd95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cddd98 push eax */
  push32((uint32_t)(EAX));
  /* 10cddd99 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cddd9b call 0x10ce0850 */
  push32(0x10cddda0u); f_10ce0850();
  /* 10cddda0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cddda3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cddda6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cddda8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10cdddab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdddae add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdddb1 push edx */
  push32((uint32_t)(EDX));
  /* 10cdddb2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10cdddb4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdddb7 push eax */
  push32((uint32_t)(EAX));
  /* 10cdddb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cdddba call 0x10ce0850 */
  push32(0x10cdddbfu); f_10ce0850();
  /* 10cdddbf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdddc2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdddc5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdddc7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10cdddca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdddcd add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdddd0 push edx */
  push32((uint32_t)(EDX));
  /* 10cdddd1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 10cdddd3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdddd6 push eax */
  push32((uint32_t)(EAX));
  /* 10cdddd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cdddd9 call 0x10ce0850 */
  push32(0x10cddddeu); f_10ce0850();
  /* 10cdddde add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cddde1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cddde4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cddde6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10cddde9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdddec add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdddef push edx */
  push32((uint32_t)(EDX));
  /* 10cdddf0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 10cdddf2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdddf5 push eax */
  push32((uint32_t)(EAX));
  /* 10cdddf6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cdddf8 call 0x10ce0850 */
  push32(0x10cdddfdu); f_10ce0850();
  /* 10cdddfd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdde00 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdde03 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdde05 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10cdde08 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdde0b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdde0e push edx */
  push32((uint32_t)(EDX));
  /* 10cdde0f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 10cdde11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdde14 push eax */
  push32((uint32_t)(EAX));
  /* 10cdde15 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cdde17 call 0x10ce0850 */
  push32(0x10cdde1cu); f_10ce0850();
  /* 10cdde1c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdde1f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdde22 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdde24 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10cdde27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdde2a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdde2d push edx */
  push32((uint32_t)(EDX));
  /* 10cdde2e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 10cdde30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdde33 push eax */
  push32((uint32_t)(EAX));
  /* 10cdde34 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cdde36 call 0x10ce0850 */
  push32(0x10cdde3bu); f_10ce0850();
  /* 10cdde3b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdde3e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdde41 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdde43 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10cdde46 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10cdde49:;
  /* 10cdde49 mov esp, ebp */
  ESP = (EBP);
  /* 10cdde4b pop ebp */
  EBP = (pop32());
  /* 10cdde4c ret  */
  ESPCHK(0x10cddc40u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10cdde50 (125 bytes, 49 insns) */
void f_10cdde50(void) {
  FTRACE(0x10cdde50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdde50 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdde51 mov ebp, esp */
  EBP = (ESP);
  /* 10cdde53 push ecx */
  push32((uint32_t)(ECX));
L_10cdde54:;
  /* 10cdde54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdde57 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10cdde5a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cdde5c je 0x10cddec9 */
  if (C.zf) goto L_10cddec9;
  /* 10cdde5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdde61 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10cdde64 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdde67 jl 0x10cdde8d */
  if ((C.sf!=C.of)) goto L_10cdde8d;
  /* 10cdde69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdde6c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10cdde6f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdde72 jg 0x10cdde8d */
  if ((!C.zf&&C.sf==C.of)) goto L_10cdde8d;
  /* 10cdde74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdde77 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10cdde7a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdde7d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdde80 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10cdde82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdde85 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdde88 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10cdde8b jmp 0x10cddec7 */
  goto L_10cddec7;
L_10cdde8d:;
  /* 10cdde8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdde90 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10cdde93 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdde96 jne 0x10cddebe */
  if (!C.zf) goto L_10cddebe;
  /* 10cdde98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdde9b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10cdde9e:;
  /* 10cdde9e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cddea1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cddea4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10cddea7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10cddea9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cddeac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cddeaf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10cddeb2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cddeb5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10cddeb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cddeba jne 0x10cdde9e */
  if (!C.zf) goto L_10cdde9e;
  /* 10cddebc jmp 0x10cddec7 */
  goto L_10cddec7;
L_10cddebe:;
  /* 10cddebe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cddec1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cddec4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10cddec7:;
  /* 10cddec7 jmp 0x10cdde54 */
  goto L_10cdde54;
L_10cddec9:;
  /* 10cddec9 mov esp, ebp */
  ESP = (EBP);
  /* 10cddecb pop ebp */
  EBP = (pop32());
  /* 10cddecc ret  */
  ESPCHK(0x10cdde50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ded0 @ 0x10cdded0 (147 bytes, 52 insns) */
void f_10cdded0(void) {
  FTRACE(0x10cdded0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdded0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdded1 mov ebp, esp */
  EBP = (ESP);
  /* 10cdded3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdded7 jne 0x10cddede */
  if (!C.zf) goto L_10cddede;
  /* 10cdded9 jmp 0x10cddf61 */
  goto L_10cddf61;
L_10cddede:;
  /* 10cddede mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cddee1 cmp dword ptr [eax + 0xc], 0x10cfe698 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x10cfe698u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cddee8 je 0x10cddf61 */
  if (C.zf) goto L_10cddf61;
  /* 10cddeea push 2 */
  push32((uint32_t)(0x2u));
  /* 10cddeec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cddeef mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10cddef2 push edx */
  push32((uint32_t)(EDX));
  /* 10cddef3 call 0x10cd3120 */
  push32(0x10cddef8u); f_10cd3120();
  /* 10cddef8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cddefb push 2 */
  push32((uint32_t)(0x2u));
  /* 10cddefd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cddf00 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10cddf03 push ecx */
  push32((uint32_t)(ECX));
  /* 10cddf04 call 0x10cd3120 */
  push32(0x10cddf09u); f_10cd3120();
  /* 10cddf09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cddf0c push 2 */
  push32((uint32_t)(0x2u));
  /* 10cddf0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cddf11 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10cddf14 push eax */
  push32((uint32_t)(EAX));
  /* 10cddf15 call 0x10cd3120 */
  push32(0x10cddf1au); f_10cd3120();
  /* 10cddf1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cddf1d push 2 */
  push32((uint32_t)(0x2u));
  /* 10cddf1f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cddf22 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10cddf25 push edx */
  push32((uint32_t)(EDX));
  /* 10cddf26 call 0x10cd3120 */
  push32(0x10cddf2bu); f_10cd3120();
  /* 10cddf2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cddf2e push 2 */
  push32((uint32_t)(0x2u));
  /* 10cddf30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cddf33 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10cddf36 push ecx */
  push32((uint32_t)(ECX));
  /* 10cddf37 call 0x10cd3120 */
  push32(0x10cddf3cu); f_10cd3120();
  /* 10cddf3c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cddf3f push 2 */
  push32((uint32_t)(0x2u));
  /* 10cddf41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cddf44 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10cddf47 push eax */
  push32((uint32_t)(EAX));
  /* 10cddf48 call 0x10cd3120 */
  push32(0x10cddf4du); f_10cd3120();
  /* 10cddf4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cddf50 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cddf52 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cddf55 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10cddf58 push edx */
  push32((uint32_t)(EDX));
  /* 10cddf59 call 0x10cd3120 */
  push32(0x10cddf5eu); f_10cd3120();
  /* 10cddf5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cddf61:;
  /* 10cddf61 pop ebp */
  EBP = (pop32());
  /* 10cddf62 ret  */
  ESPCHK(0x10cdded0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df70 @ 0x10cddf70 (928 bytes, 284 insns) */
void f_10cddf70(void) {
  FTRACE(0x10cddf70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cddf70 push ebp */
  push32((uint32_t)(EBP));
  /* 10cddf71 mov ebp, esp */
  EBP = (ESP);
  /* 10cddf73 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cddf76 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10cddf7d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10cddf84 cmp dword ptr [0x10cfe600], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe600))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cddf8b je 0x10cde2c1 */
  if (C.zf) goto L_10cde2c1;
  /* 10cddf91 cmp dword ptr [0x10cfe610], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe610))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cddf98 jne 0x10cddfc0 */
  if (!C.zf) goto L_10cddfc0;
  /* 10cddf9a push 0x10cfe610 */
  push32((uint32_t)(0x10cfe610u));
  /* 10cddf9f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10cddfa4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cddfa6 mov ax, word ptr [0x10cfe654] */
  AX = (r16((uint32_t)(0x10cfe654)));
  /* 10cddfac push eax */
  push32((uint32_t)(EAX));
  /* 10cddfad push 0 */
  push32((uint32_t)(0x0u));
  /* 10cddfaf call 0x10ce0850 */
  push32(0x10cddfb4u); f_10ce0850();
  /* 10cddfb4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cddfb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cddfb9 je 0x10cddfc0 */
  if (C.zf) goto L_10cddfc0;
  /* 10cddfbb jmp 0x10cde282 */
  goto L_10cde282;
L_10cddfc0:;
  /* 10cddfc0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10cddfc2 push 0x10cf9fec */
  push32((uint32_t)(0x10cf9fecu));
  /* 10cddfc7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cddfc9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10cddfce call 0x10cd2690 */
  push32(0x10cddfd3u); f_10cd2690();
  /* 10cddfd3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cddfd6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10cddfd9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10cddfdb push 0x10cf9fec */
  push32((uint32_t)(0x10cf9fecu));
  /* 10cddfe0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cddfe2 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10cddfe7 call 0x10cd2690 */
  push32(0x10cddfecu); f_10cd2690();
  /* 10cddfec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cddfef mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10cddff2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 10cddff4 push 0x10cf9fec */
  push32((uint32_t)(0x10cf9fecu));
  /* 10cddff9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cddffb push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10cde000 call 0x10cd2690 */
  push32(0x10cde005u); f_10cd2690();
  /* 10cde005 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde008 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10cde00b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10cde00d push 0x10cf9fec */
  push32((uint32_t)(0x10cf9fecu));
  /* 10cde012 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cde014 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10cde019 call 0x10cd2690 */
  push32(0x10cde01eu); f_10cd2690();
  /* 10cde01e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde021 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10cde024 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cde028 je 0x10cde03c */
  if (C.zf) goto L_10cde03c;
  /* 10cde02a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cde02e je 0x10cde03c */
  if (C.zf) goto L_10cde03c;
  /* 10cde030 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cde034 je 0x10cde03c */
  if (C.zf) goto L_10cde03c;
  /* 10cde036 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cde03a jne 0x10cde041 */
  if (!C.zf) goto L_10cde041;
L_10cde03c:;
  /* 10cde03c jmp 0x10cde282 */
  goto L_10cde282;
L_10cde041:;
  /* 10cde041 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10cde044 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10cde047 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10cde04e jmp 0x10cde059 */
  goto L_10cde059;
L_10cde050:;
  /* 10cde050 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cde053 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde056 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10cde059:;
  /* 10cde059 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cde060 jge 0x10cde075 */
  if ((C.sf==C.of)) goto L_10cde075;
  /* 10cde062 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cde065 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 10cde068 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10cde06a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cde06d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde070 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10cde073 jmp 0x10cde050 */
  goto L_10cde050;
L_10cde075:;
  /* 10cde075 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10cde078 push eax */
  push32((uint32_t)(EAX));
  /* 10cde079 mov ecx, dword ptr [0x10cfe610] */
  ECX = (r32((uint32_t)(0x10cfe610)));
  /* 10cde07f push ecx */
  push32((uint32_t)(ECX));
  /* 10cde080 call dword ptr [0x10d002dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002dc))), 0x10cde086u);
  /* 10cde086 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cde088 jne 0x10cde08f */
  if (!C.zf) goto L_10cde08f;
  /* 10cde08a jmp 0x10cde282 */
  goto L_10cde282;
L_10cde08f:;
  /* 10cde08f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cde093 jbe 0x10cde09a */
  if ((C.cf||C.zf)) goto L_10cde09a;
  /* 10cde095 jmp 0x10cde282 */
  goto L_10cde282;
L_10cde09a:;
  /* 10cde09a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cde09d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10cde0a3 mov dword ptr [0x10cfcea4], edx */
  w32((uint32_t)(0x10cfcea4), (EDX));
  /* 10cde0a9 cmp dword ptr [0x10cfcea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cfcea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cde0b0 jle 0x10cde109 */
  if ((C.zf||C.sf!=C.of)) goto L_10cde109;
  /* 10cde0b2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 10cde0b5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10cde0b8 jmp 0x10cde0c3 */
  goto L_10cde0c3;
L_10cde0ba:;
  /* 10cde0ba mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cde0bd add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde0c0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10cde0c3:;
  /* 10cde0c3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cde0c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cde0c8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10cde0ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cde0cc je 0x10cde109 */
  if (C.zf) goto L_10cde109;
  /* 10cde0ce mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cde0d1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cde0d3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10cde0d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cde0d8 je 0x10cde109 */
  if (C.zf) goto L_10cde109;
  /* 10cde0da mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cde0dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cde0df mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10cde0e1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10cde0e4 jmp 0x10cde0ef */
  goto L_10cde0ef;
L_10cde0e6:;
  /* 10cde0e6 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cde0e9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde0ec mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10cde0ef:;
  /* 10cde0ef mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cde0f2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cde0f4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10cde0f7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cde0fa jg 0x10cde107 */
  if ((!C.zf&&C.sf==C.of)) goto L_10cde107;
  /* 10cde0fc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10cde0ff add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde102 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10cde105 jmp 0x10cde0e6 */
  goto L_10cde0e6;
L_10cde107:;
  /* 10cde107 jmp 0x10cde0ba */
  goto L_10cde0ba;
L_10cde109:;
  /* 10cde109 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cde10b push 0 */
  push32((uint32_t)(0x0u));
  /* 10cde10d push 0 */
  push32((uint32_t)(0x0u));
  /* 10cde10f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cde112 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde115 push eax */
  push32((uint32_t)(EAX));
  /* 10cde116 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10cde11b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10cde11e push ecx */
  push32((uint32_t)(ECX));
  /* 10cde11f push 1 */
  push32((uint32_t)(0x1u));
  /* 10cde121 call 0x10cda8c0 */
  push32(0x10cde126u); f_10cda8c0();
  /* 10cde126 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde129 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cde12b jne 0x10cde132 */
  if (!C.zf) goto L_10cde132;
  /* 10cde12d jmp 0x10cde282 */
  goto L_10cde282;
L_10cde132:;
  /* 10cde132 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cde135 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 10cde13a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10cde13d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10cde140 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10cde147 jmp 0x10cde152 */
  goto L_10cde152;
L_10cde149:;
  /* 10cde149 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cde14c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde14f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10cde152:;
  /* 10cde152 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cde159 jge 0x10cde170 */
  if ((C.sf==C.of)) goto L_10cde170;
  /* 10cde15b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cde15e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 10cde162 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10cde165 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cde168 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde16b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10cde16e jmp 0x10cde149 */
  goto L_10cde149;
L_10cde170:;
  /* 10cde170 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cde172 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cde174 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10cde177 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde17a push edx */
  push32((uint32_t)(EDX));
  /* 10cde17b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10cde180 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10cde183 push eax */
  push32((uint32_t)(EAX));
  /* 10cde184 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cde186 call 0x10ce0af0 */
  push32(0x10cde18bu); f_10ce0af0();
  /* 10cde18b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde18e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cde190 jne 0x10cde197 */
  if (!C.zf) goto L_10cde197;
  /* 10cde192 jmp 0x10cde282 */
  goto L_10cde282;
L_10cde197:;
  /* 10cde197 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10cde19a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 10cde19f cmp dword ptr [0x10cfcea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cfcea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cde1a6 jle 0x10cde203 */
  if ((C.zf||C.sf!=C.of)) goto L_10cde203;
  /* 10cde1a8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 10cde1ab mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10cde1ae jmp 0x10cde1b9 */
  goto L_10cde1b9;
L_10cde1b0:;
  /* 10cde1b0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cde1b3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde1b6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10cde1b9:;
  /* 10cde1b9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cde1bc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cde1be mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10cde1c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cde1c2 je 0x10cde203 */
  if (C.zf) goto L_10cde203;
  /* 10cde1c4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cde1c7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cde1c9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10cde1cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cde1ce je 0x10cde203 */
  if (C.zf) goto L_10cde203;
  /* 10cde1d0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cde1d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cde1d5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10cde1d7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10cde1da jmp 0x10cde1e5 */
  goto L_10cde1e5;
L_10cde1dc:;
  /* 10cde1dc mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cde1df add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde1e2 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10cde1e5:;
  /* 10cde1e5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cde1e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cde1ea mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10cde1ed cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cde1f0 jg 0x10cde201 */
  if ((!C.zf&&C.sf==C.of)) goto L_10cde201;
  /* 10cde1f2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cde1f5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cde1f8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 10cde1ff jmp 0x10cde1dc */
  goto L_10cde1dc;
L_10cde201:;
  /* 10cde201 jmp 0x10cde1b0 */
  goto L_10cde1b0;
L_10cde203:;
  /* 10cde203 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cde206 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde209 mov dword ptr [0x10cfcc98], eax */
  w32((uint32_t)(0x10cfcc98), (EAX));
  /* 10cde20e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10cde211 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde214 mov dword ptr [0x10cfcc9c], ecx */
  w32((uint32_t)(0x10cfcc9c), (ECX));
  /* 10cde21a cmp dword ptr [0x10cfe640], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe640))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cde221 je 0x10cde234 */
  if (C.zf) goto L_10cde234;
  /* 10cde223 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cde225 mov edx, dword ptr [0x10cfe640] */
  EDX = (r32((uint32_t)(0x10cfe640)));
  /* 10cde22b push edx */
  push32((uint32_t)(EDX));
  /* 10cde22c call 0x10cd3120 */
  push32(0x10cde231u); f_10cd3120();
  /* 10cde231 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cde234:;
  /* 10cde234 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cde237 mov dword ptr [0x10cfe640], eax */
  w32((uint32_t)(0x10cfe640), (EAX));
  /* 10cde23c cmp dword ptr [0x10cfe644], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe644))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cde243 je 0x10cde256 */
  if (C.zf) goto L_10cde256;
  /* 10cde245 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cde247 mov ecx, dword ptr [0x10cfe644] */
  ECX = (r32((uint32_t)(0x10cfe644)));
  /* 10cde24d push ecx */
  push32((uint32_t)(ECX));
  /* 10cde24e call 0x10cd3120 */
  push32(0x10cde253u); f_10cd3120();
  /* 10cde253 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cde256:;
  /* 10cde256 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10cde259 mov dword ptr [0x10cfe644], edx */
  w32((uint32_t)(0x10cfe644), (EDX));
  /* 10cde25f push 2 */
  push32((uint32_t)(0x2u));
  /* 10cde261 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10cde264 push eax */
  push32((uint32_t)(EAX));
  /* 10cde265 call 0x10cd3120 */
  push32(0x10cde26au); f_10cd3120();
  /* 10cde26a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde26d push 2 */
  push32((uint32_t)(0x2u));
  /* 10cde26f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10cde272 push ecx */
  push32((uint32_t)(ECX));
  /* 10cde273 call 0x10cd3120 */
  push32(0x10cde278u); f_10cd3120();
  /* 10cde278 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde27b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cde27d jmp 0x10cde30c */
  goto L_10cde30c;
L_10cde282:;
  /* 10cde282 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cde284 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10cde287 push edx */
  push32((uint32_t)(EDX));
  /* 10cde288 call 0x10cd3120 */
  push32(0x10cde28du); f_10cd3120();
  /* 10cde28d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde290 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cde292 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10cde295 push eax */
  push32((uint32_t)(EAX));
  /* 10cde296 call 0x10cd3120 */
  push32(0x10cde29bu); f_10cd3120();
  /* 10cde29b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde29e push 2 */
  push32((uint32_t)(0x2u));
  /* 10cde2a0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10cde2a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10cde2a4 call 0x10cd3120 */
  push32(0x10cde2a9u); f_10cd3120();
  /* 10cde2a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde2ac push 2 */
  push32((uint32_t)(0x2u));
  /* 10cde2ae mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10cde2b1 push edx */
  push32((uint32_t)(EDX));
  /* 10cde2b2 call 0x10cd3120 */
  push32(0x10cde2b7u); f_10cd3120();
  /* 10cde2b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde2ba mov eax, 1 */
  EAX = (0x1u);
  /* 10cde2bf jmp 0x10cde30c */
  goto L_10cde30c;
L_10cde2c1:;
  /* 10cde2c1 mov dword ptr [0x10cfcc98], 0x10cfcca2 */
  w32((uint32_t)(0x10cfcc98), (0x10cfcca2u));
  /* 10cde2cb mov dword ptr [0x10cfcc9c], 0x10cfcca2 */
  w32((uint32_t)(0x10cfcc9c), (0x10cfcca2u));
  /* 10cde2d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cde2d7 mov eax, dword ptr [0x10cfe640] */
  EAX = (r32((uint32_t)(0x10cfe640)));
  /* 10cde2dc push eax */
  push32((uint32_t)(EAX));
  /* 10cde2dd call 0x10cd3120 */
  push32(0x10cde2e2u); f_10cd3120();
  /* 10cde2e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde2e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cde2e7 mov ecx, dword ptr [0x10cfe644] */
  ECX = (r32((uint32_t)(0x10cfe644)));
  /* 10cde2ed push ecx */
  push32((uint32_t)(ECX));
  /* 10cde2ee call 0x10cd3120 */
  push32(0x10cde2f3u); f_10cd3120();
  /* 10cde2f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde2f6 mov dword ptr [0x10cfe640], 0 */
  w32((uint32_t)(0x10cfe640), (0x0u));
  /* 10cde300 mov dword ptr [0x10cfe644], 0 */
  w32((uint32_t)(0x10cfe644), (0x0u));
  /* 10cde30a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10cde30c:;
  /* 10cde30c mov esp, ebp */
  ESP = (EBP);
  /* 10cde30e pop ebp */
  EBP = (pop32());
  /* 10cde30f ret  */
  ESPCHK(0x10cddf70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e310 @ 0x10cde310 (7 bytes, 5 insns) */
void f_10cde310(void) {
  FTRACE(0x10cde310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cde310 push ebp */
  push32((uint32_t)(EBP));
  /* 10cde311 mov ebp, esp */
  EBP = (ESP);
  /* 10cde313 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cde315 pop ebp */
  EBP = (pop32());
  /* 10cde316 ret  */
  ESPCHK(0x10cde310u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x10cde320 (129 bytes, 56 insns) */
void f_10cde320(void) {
  FTRACE(0x10cde320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cde320 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 10cde324 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10cde328 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10cde32e jne 0x10cde36c */
  if (!C.zf) goto L_10cde36c;
L_10cde330:;
  /* 10cde330 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10cde332 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10cde334 jne 0x10cde364 */
  if (!C.zf) goto L_10cde364;
  /* 10cde336 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10cde338 je 0x10cde360 */
  if (C.zf) goto L_10cde360;
  /* 10cde33a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10cde33d jne 0x10cde364 */
  if (!C.zf) goto L_10cde364;
  /* 10cde33f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10cde341 je 0x10cde360 */
  if (C.zf) goto L_10cde360;
  /* 10cde343 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10cde346 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10cde349 jne 0x10cde364 */
  if (!C.zf) goto L_10cde364;
  /* 10cde34b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10cde34d je 0x10cde360 */
  if (C.zf) goto L_10cde360;
  /* 10cde34f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10cde352 jne 0x10cde364 */
  if (!C.zf) goto L_10cde364;
  /* 10cde354 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde357 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde35a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10cde35c jne 0x10cde330 */
  if (!C.zf) goto L_10cde330;
  /* 10cde35e mov edi, edi */
  EDI = (EDI);
L_10cde360:;
  /* 10cde360 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cde362 ret  */
  ESPCHK(0x10cde320u, _esp0);
  ESP += 4; return;
  /* 10cde363 nop  */
  /* nop */
L_10cde364:;
  /* 10cde364 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cde366 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10cde368 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10cde369 ret  */
  ESPCHK(0x10cde320u, _esp0);
  ESP += 4; return;
  /* 10cde36a mov edi, edi */
  EDI = (EDI);
L_10cde36c:;
  /* 10cde36c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 10cde372 je 0x10cde388 */
  if (C.zf) goto L_10cde388;
  /* 10cde374 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10cde376 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10cde377 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10cde379 jne 0x10cde364 */
  if (!C.zf) goto L_10cde364;
  /* 10cde37b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10cde37c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10cde37e je 0x10cde360 */
  if (C.zf) goto L_10cde360;
  /* 10cde380 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 10cde386 je 0x10cde330 */
  if (C.zf) goto L_10cde330;
L_10cde388:;
  /* 10cde388 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10cde38b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde38e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10cde390 jne 0x10cde364 */
  if (!C.zf) goto L_10cde364;
  /* 10cde392 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10cde394 je 0x10cde360 */
  if (C.zf) goto L_10cde360;
  /* 10cde396 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10cde399 jne 0x10cde364 */
  if (!C.zf) goto L_10cde364;
  /* 10cde39b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10cde39d je 0x10cde360 */
  if (C.zf) goto L_10cde360;
  /* 10cde39f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde3a2 jmp 0x10cde330 */
  goto L_10cde330;
}

/* FUN_1000e3b0 @ 0x10cde3b0 (62 bytes, 35 insns) */
void f_10cde3b0(void) {
  FTRACE(0x10cde3b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cde3b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cde3b1 mov ebp, esp */
  EBP = (ESP);
  /* 10cde3b3 push esi */
  push32((uint32_t)(ESI));
  /* 10cde3b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cde3b6 push eax */
  push32((uint32_t)(EAX));
  /* 10cde3b7 push eax */
  push32((uint32_t)(EAX));
  /* 10cde3b8 push eax */
  push32((uint32_t)(EAX));
  /* 10cde3b9 push eax */
  push32((uint32_t)(EAX));
  /* 10cde3ba push eax */
  push32((uint32_t)(EAX));
  /* 10cde3bb push eax */
  push32((uint32_t)(EAX));
  /* 10cde3bc push eax */
  push32((uint32_t)(EAX));
  /* 10cde3bd push eax */
  push32((uint32_t)(EAX));
  /* 10cde3be mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cde3c1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10cde3c4:;
  /* 10cde3c4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10cde3c6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10cde3c8 je 0x10cde3d1 */
  if (C.zf) goto L_10cde3d1;
  /* 10cde3ca inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10cde3cb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10cde3cb");
  /* 10cde3cf jmp 0x10cde3c4 */
  goto L_10cde3c4;
L_10cde3d1:;
  /* 10cde3d1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10cde3d4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10cde3d7 nop  */
  /* nop */
L_10cde3d8:;
  /* 10cde3d8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10cde3d9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10cde3db or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10cde3dd je 0x10cde3e6 */
  if (C.zf) goto L_10cde3e6;
  /* 10cde3df inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10cde3e0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10cde3e0");
  /* 10cde3e4 jae 0x10cde3d8 */
  if (!C.cf) goto L_10cde3d8;
L_10cde3e6:;
  /* 10cde3e6 mov eax, ecx */
  EAX = (ECX);
  /* 10cde3e8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde3eb pop esi */
  ESI = (pop32());
  /* 10cde3ec leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10cde3ed ret  */
  ESPCHK(0x10cde3b0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x10cde3f0 (56 bytes, 31 insns) */
void f_10cde3f0(void) {
  FTRACE(0x10cde3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cde3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cde3f1 mov ebp, esp */
  EBP = (ESP);
  /* 10cde3f3 push edi */
  push32((uint32_t)(EDI));
  /* 10cde3f4 push esi */
  push32((uint32_t)(ESI));
  /* 10cde3f5 push ebx */
  push32((uint32_t)(EBX));
  /* 10cde3f6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cde3f9 jecxz 0x10cde421 */
  x86_unimpl("jecxz @ 0x10cde3f9");
  /* 10cde3fb mov ebx, ecx */
  EBX = (ECX);
  /* 10cde3fd mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10cde400 mov esi, edi */
  ESI = (EDI);
  /* 10cde402 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cde404 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 10cde406 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10cde408 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde40a mov edi, esi */
  EDI = (ESI);
  /* 10cde40c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10cde40f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 10cde411 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 10cde414 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cde416 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10cde419 ja 0x10cde41f */
  if ((!C.cf&&!C.zf)) goto L_10cde41f;
  /* 10cde41b je 0x10cde421 */
  if (C.zf) goto L_10cde421;
  /* 10cde41d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10cde41e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_10cde41f:;
  /* 10cde41f not ecx */
  ECX = (~(ECX));
L_10cde421:;
  /* 10cde421 mov eax, ecx */
  EAX = (ECX);
  /* 10cde423 pop ebx */
  EBX = (pop32());
  /* 10cde424 pop esi */
  ESI = (pop32());
  /* 10cde425 pop edi */
  EDI = (pop32());
  /* 10cde426 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10cde427 ret  */
  ESPCHK(0x10cde3f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e430 @ 0x10cde430 (58 bytes, 32 insns) */
void f_10cde430(void) {
  FTRACE(0x10cde430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cde430 push ebp */
  push32((uint32_t)(EBP));
  /* 10cde431 mov ebp, esp */
  EBP = (ESP);
  /* 10cde433 push esi */
  push32((uint32_t)(ESI));
  /* 10cde434 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cde436 push eax */
  push32((uint32_t)(EAX));
  /* 10cde437 push eax */
  push32((uint32_t)(EAX));
  /* 10cde438 push eax */
  push32((uint32_t)(EAX));
  /* 10cde439 push eax */
  push32((uint32_t)(EAX));
  /* 10cde43a push eax */
  push32((uint32_t)(EAX));
  /* 10cde43b push eax */
  push32((uint32_t)(EAX));
  /* 10cde43c push eax */
  push32((uint32_t)(EAX));
  /* 10cde43d push eax */
  push32((uint32_t)(EAX));
  /* 10cde43e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cde441 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10cde444:;
  /* 10cde444 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10cde446 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10cde448 je 0x10cde451 */
  if (C.zf) goto L_10cde451;
  /* 10cde44a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10cde44b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10cde44b");
  /* 10cde44f jmp 0x10cde444 */
  goto L_10cde444;
L_10cde451:;
  /* 10cde451 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_10cde454:;
  /* 10cde454 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10cde456 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10cde458 je 0x10cde464 */
  if (C.zf) goto L_10cde464;
  /* 10cde45a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10cde45b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10cde45b");
  /* 10cde45f jae 0x10cde454 */
  if (!C.cf) goto L_10cde454;
  /* 10cde461 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_10cde464:;
  /* 10cde464 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde467 pop esi */
  ESI = (pop32());
  /* 10cde468 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10cde469 ret  */
  ESPCHK(0x10cde430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e470 @ 0x10cde470 (512 bytes, 147 insns) */
void f_10cde470(void) {
  FTRACE(0x10cde470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cde470 push ebp */
  push32((uint32_t)(EBP));
  /* 10cde471 mov ebp, esp */
  EBP = (ESP);
  /* 10cde473 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cde476 cmp dword ptr [0x10cfe68c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe68c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cde47d jne 0x10cde4a2 */
  if (!C.zf) goto L_10cde4a2;
  /* 10cde47f call 0x10cdef40 */
  push32(0x10cde484u); f_10cdef40();
  /* 10cde484 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cde486 je 0x10cde492 */
  if (C.zf) goto L_10cde492;
  /* 10cde488 mov eax, dword ptr [0x10d00308] */
  EAX = (r32((uint32_t)(0x10d00308)));
  /* 10cde48d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10cde490 jmp 0x10cde499 */
  goto L_10cde499;
L_10cde492:;
  /* 10cde492 mov dword ptr [ebp - 8], 0x10cdef90 */
  w32((uint32_t)(EBP + -0x8), (0x10cdef90u));
L_10cde499:;
  /* 10cde499 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cde49c mov dword ptr [0x10cfe68c], ecx */
  w32((uint32_t)(0x10cfe68c), (ECX));
L_10cde4a2:;
  /* 10cde4a2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cde4a6 jne 0x10cde4b2 */
  if (!C.zf) goto L_10cde4b2;
  /* 10cde4a8 call 0x10cded90 */
  push32(0x10cde4adu); f_10cded90();
  /* 10cde4ad jmp 0x10cde57e */
  goto L_10cde57e;
L_10cde4b2:;
  /* 10cde4b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cde4b5 mov dword ptr [0x10cfe67c], edx */
  w32((uint32_t)(0x10cfe67c), (EDX));
  /* 10cde4bb cmp dword ptr [0x10cfe67c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe67c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cde4c2 je 0x10cde4e4 */
  if (C.zf) goto L_10cde4e4;
  /* 10cde4c4 mov eax, dword ptr [0x10cfe67c] */
  EAX = (r32((uint32_t)(0x10cfe67c)));
  /* 10cde4c9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10cde4cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cde4ce je 0x10cde4e4 */
  if (C.zf) goto L_10cde4e4;
  /* 10cde4d0 push 0x10cfe67c */
  push32((uint32_t)(0x10cfe67cu));
  /* 10cde4d5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10cde4d7 push 0x10cfda90 */
  push32((uint32_t)(0x10cfda90u));
  /* 10cde4dc call 0x10cde670 */
  push32(0x10cde4e1u); f_10cde670();
  /* 10cde4e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cde4e4:;
  /* 10cde4e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cde4e7 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde4ea mov dword ptr [0x10cfe680], edx */
  w32((uint32_t)(0x10cfe680), (EDX));
  /* 10cde4f0 cmp dword ptr [0x10cfe680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cde4f7 je 0x10cde519 */
  if (C.zf) goto L_10cde519;
  /* 10cde4f9 mov eax, dword ptr [0x10cfe680] */
  EAX = (r32((uint32_t)(0x10cfe680)));
  /* 10cde4fe movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10cde501 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cde503 je 0x10cde519 */
  if (C.zf) goto L_10cde519;
  /* 10cde505 push 0x10cfe680 */
  push32((uint32_t)(0x10cfe680u));
  /* 10cde50a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10cde50c push 0x10cfd9d8 */
  push32((uint32_t)(0x10cfd9d8u));
  /* 10cde511 call 0x10cde670 */
  push32(0x10cde516u); f_10cde670();
  /* 10cde516 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cde519:;
  /* 10cde519 mov dword ptr [0x10cfe684], 0 */
  w32((uint32_t)(0x10cfe684), (0x0u));
  /* 10cde523 cmp dword ptr [0x10cfe67c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe67c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cde52a je 0x10cde55d */
  if (C.zf) goto L_10cde55d;
  /* 10cde52c mov edx, dword ptr [0x10cfe67c] */
  EDX = (r32((uint32_t)(0x10cfe67c)));
  /* 10cde532 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10cde535 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cde537 je 0x10cde55d */
  if (C.zf) goto L_10cde55d;
  /* 10cde539 cmp dword ptr [0x10cfe680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cde540 je 0x10cde556 */
  if (C.zf) goto L_10cde556;
  /* 10cde542 mov ecx, dword ptr [0x10cfe680] */
  ECX = (r32((uint32_t)(0x10cfe680)));
  /* 10cde548 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10cde54b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cde54d je 0x10cde556 */
  if (C.zf) goto L_10cde556;
  /* 10cde54f call 0x10cde700 */
  push32(0x10cde554u); f_10cde700();
  /* 10cde554 jmp 0x10cde55b */
  goto L_10cde55b;
L_10cde556:;
  /* 10cde556 call 0x10cdeaf0 */
  push32(0x10cde55bu); f_10cdeaf0();
L_10cde55b:;
  /* 10cde55b jmp 0x10cde57e */
  goto L_10cde57e;
L_10cde55d:;
  /* 10cde55d cmp dword ptr [0x10cfe680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cde564 je 0x10cde579 */
  if (C.zf) goto L_10cde579;
  /* 10cde566 mov eax, dword ptr [0x10cfe680] */
  EAX = (r32((uint32_t)(0x10cfe680)));
  /* 10cde56b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10cde56e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cde570 je 0x10cde579 */
  if (C.zf) goto L_10cde579;
  /* 10cde572 call 0x10cdec90 */
  push32(0x10cde577u); f_10cdec90();
  /* 10cde577 jmp 0x10cde57e */
  goto L_10cde57e;
L_10cde579:;
  /* 10cde579 call 0x10cded90 */
  push32(0x10cde57eu); f_10cded90();
L_10cde57e:;
  /* 10cde57e cmp dword ptr [0x10cfe684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cde585 jne 0x10cde58e */
  if (!C.zf) goto L_10cde58e;
  /* 10cde587 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cde589 jmp 0x10cde66c */
  goto L_10cde66c;
L_10cde58e:;
  /* 10cde58e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cde591 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde597 push edx */
  push32((uint32_t)(EDX));
  /* 10cde598 call 0x10cdedc0 */
  push32(0x10cde59du); f_10cdedc0();
  /* 10cde59d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde5a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cde5a3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cde5a7 je 0x10cde5bc */
  if (C.zf) goto L_10cde5bc;
  /* 10cde5a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cde5ac and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cde5b1 push eax */
  push32((uint32_t)(EAX));
  /* 10cde5b2 call dword ptr [0x10d00314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00314))), 0x10cde5b8u);
  /* 10cde5b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cde5ba jne 0x10cde5c3 */
  if (!C.zf) goto L_10cde5c3;
L_10cde5bc:;
  /* 10cde5bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cde5be jmp 0x10cde66c */
  goto L_10cde66c;
L_10cde5c3:;
  /* 10cde5c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cde5c5 mov ecx, dword ptr [0x10cfe66c] */
  ECX = (r32((uint32_t)(0x10cfe66c)));
  /* 10cde5cb push ecx */
  push32((uint32_t)(ECX));
  /* 10cde5cc call dword ptr [0x10d00310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00310))), 0x10cde5d2u);
  /* 10cde5d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cde5d4 jne 0x10cde5dd */
  if (!C.zf) goto L_10cde5dd;
  /* 10cde5d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cde5d8 jmp 0x10cde66c */
  goto L_10cde66c;
L_10cde5dd:;
  /* 10cde5dd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cde5e1 je 0x10cde608 */
  if (C.zf) goto L_10cde608;
  /* 10cde5e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cde5e6 mov ax, word ptr [0x10cfe66c] */
  AX = (r16((uint32_t)(0x10cfe66c)));
  /* 10cde5ec mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10cde5ef mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cde5f2 mov dx, word ptr [0x10cfe688] */
  DX = (r16((uint32_t)(0x10cfe688)));
  /* 10cde5f9 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 10cde5fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cde600 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 10cde604 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_10cde608:;
  /* 10cde608 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cde60c je 0x10cde667 */
  if (C.zf) goto L_10cde667;
  /* 10cde60e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10cde610 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cde613 push edx */
  push32((uint32_t)(EDX));
  /* 10cde614 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 10cde619 mov eax, dword ptr [0x10cfe66c] */
  EAX = (r32((uint32_t)(0x10cfe66c)));
  /* 10cde61e push eax */
  push32((uint32_t)(EAX));
  /* 10cde61f call dword ptr [0x10cfe68c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cfe68c))), 0x10cde625u);
  /* 10cde625 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cde627 jne 0x10cde62d */
  if (!C.zf) goto L_10cde62d;
  /* 10cde629 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cde62b jmp 0x10cde66c */
  goto L_10cde66c;
L_10cde62d:;
  /* 10cde62d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10cde62f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cde632 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde635 push ecx */
  push32((uint32_t)(ECX));
  /* 10cde636 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 10cde63b mov edx, dword ptr [0x10cfe688] */
  EDX = (r32((uint32_t)(0x10cfe688)));
  /* 10cde641 push edx */
  push32((uint32_t)(EDX));
  /* 10cde642 call dword ptr [0x10cfe68c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cfe68c))), 0x10cde648u);
  /* 10cde648 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cde64a jne 0x10cde650 */
  if (!C.zf) goto L_10cde650;
  /* 10cde64c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cde64e jmp 0x10cde66c */
  goto L_10cde66c;
L_10cde650:;
  /* 10cde650 push 0xa */
  push32((uint32_t)(0xau));
  /* 10cde652 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cde655 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde65a push eax */
  push32((uint32_t)(EAX));
  /* 10cde65b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cde65e push ecx */
  push32((uint32_t)(ECX));
  /* 10cde65f call 0x10cd51d0 */
  push32(0x10cde664u); f_10cd51d0();
  /* 10cde664 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cde667:;
  /* 10cde667 mov eax, 1 */
  EAX = (0x1u);
L_10cde66c:;
  /* 10cde66c mov esp, ebp */
  ESP = (EBP);
  /* 10cde66e pop ebp */
  EBP = (pop32());
  /* 10cde66f ret  */
  ESPCHK(0x10cde470u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e670 @ 0x10cde670 (130 bytes, 47 insns) */
void f_10cde670(void) {
  FTRACE(0x10cde670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cde670 push ebp */
  push32((uint32_t)(EBP));
  /* 10cde671 mov ebp, esp */
  EBP = (ESP);
  /* 10cde673 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cde676 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10cde67d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10cde684:;
  /* 10cde684 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cde687 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cde68a jg 0x10cde6ee */
  if ((!C.zf&&C.sf==C.of)) goto L_10cde6ee;
  /* 10cde68c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cde690 je 0x10cde6ee */
  if (C.zf) goto L_10cde6ee;
  /* 10cde692 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cde695 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde698 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10cde699 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cde69b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10cde69d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cde6a0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cde6a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cde6a6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 10cde6a9 push eax */
  push32((uint32_t)(EAX));
  /* 10cde6aa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cde6ad mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10cde6af push edx */
  push32((uint32_t)(EDX));
  /* 10cde6b0 call 0x10ce0d60 */
  push32(0x10cde6b5u); f_10ce0d60();
  /* 10cde6b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde6b8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10cde6bb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cde6bf jne 0x10cde6d2 */
  if (!C.zf) goto L_10cde6d2;
  /* 10cde6c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cde6c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cde6c7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 10cde6cb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cde6ce mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10cde6d0 jmp 0x10cde6ec */
  goto L_10cde6ec;
L_10cde6d2:;
  /* 10cde6d2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cde6d6 jge 0x10cde6e3 */
  if ((C.sf==C.of)) goto L_10cde6e3;
  /* 10cde6d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cde6db sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cde6de mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10cde6e1 jmp 0x10cde6ec */
  goto L_10cde6ec;
L_10cde6e3:;
  /* 10cde6e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cde6e6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde6e9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10cde6ec:;
  /* 10cde6ec jmp 0x10cde684 */
  goto L_10cde684;
L_10cde6ee:;
  /* 10cde6ee mov esp, ebp */
  ESP = (EBP);
  /* 10cde6f0 pop ebp */
  EBP = (pop32());
  /* 10cde6f1 ret  */
  ESPCHK(0x10cde670u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e700 @ 0x10cde700 (186 bytes, 50 insns) */
void f_10cde700(void) {
  FTRACE(0x10cde700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cde700 push ebp */
  push32((uint32_t)(EBP));
  /* 10cde701 mov ebp, esp */
  EBP = (ESP);
  /* 10cde703 push ecx */
  push32((uint32_t)(ECX));
  /* 10cde704 mov eax, dword ptr [0x10cfe67c] */
  EAX = (r32((uint32_t)(0x10cfe67c)));
  /* 10cde709 push eax */
  push32((uint32_t)(EAX));
  /* 10cde70a call 0x10cd54c0 */
  push32(0x10cde70fu); f_10cd54c0();
  /* 10cde70f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde712 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cde714 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cde717 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10cde71a mov dword ptr [0x10cfe678], ecx */
  w32((uint32_t)(0x10cfe678), (ECX));
  /* 10cde720 mov edx, dword ptr [0x10cfe680] */
  EDX = (r32((uint32_t)(0x10cfe680)));
  /* 10cde726 push edx */
  push32((uint32_t)(EDX));
  /* 10cde727 call 0x10cd54c0 */
  push32(0x10cde72cu); f_10cd54c0();
  /* 10cde72c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde72f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cde731 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cde734 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10cde737 mov dword ptr [0x10cfe670], ecx */
  w32((uint32_t)(0x10cfe670), (ECX));
  /* 10cde73d mov dword ptr [0x10cfe66c], 0 */
  w32((uint32_t)(0x10cfe66c), (0x0u));
  /* 10cde747 cmp dword ptr [0x10cfe678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cde74e je 0x10cde759 */
  if (C.zf) goto L_10cde759;
  /* 10cde750 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10cde757 jmp 0x10cde76b */
  goto L_10cde76b;
L_10cde759:;
  /* 10cde759 mov edx, dword ptr [0x10cfe67c] */
  EDX = (r32((uint32_t)(0x10cfe67c)));
  /* 10cde75f push edx */
  push32((uint32_t)(EDX));
  /* 10cde760 call 0x10cdf1a0 */
  push32(0x10cde765u); f_10cdf1a0();
  /* 10cde765 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde768 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10cde76b:;
  /* 10cde76b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cde76e mov dword ptr [0x10cfe674], eax */
  w32((uint32_t)(0x10cfe674), (EAX));
  /* 10cde773 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cde775 push 0x10cde7c0 */
  push32((uint32_t)(0x10cde7c0u));
  /* 10cde77a call dword ptr [0x10d00318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00318))), 0x10cde780u);
  /* 10cde780 mov ecx, dword ptr [0x10cfe684] */
  ECX = (r32((uint32_t)(0x10cfe684)));
  /* 10cde786 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10cde78c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cde78e je 0x10cde7ac */
  if (C.zf) goto L_10cde7ac;
  /* 10cde790 mov edx, dword ptr [0x10cfe684] */
  EDX = (r32((uint32_t)(0x10cfe684)));
  /* 10cde796 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 10cde79c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cde79e je 0x10cde7ac */
  if (C.zf) goto L_10cde7ac;
  /* 10cde7a0 mov eax, dword ptr [0x10cfe684] */
  EAX = (r32((uint32_t)(0x10cfe684)));
  /* 10cde7a5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 10cde7a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cde7aa jne 0x10cde7b6 */
  if (!C.zf) goto L_10cde7b6;
L_10cde7ac:;
  /* 10cde7ac mov dword ptr [0x10cfe684], 0 */
  w32((uint32_t)(0x10cfe684), (0x0u));
L_10cde7b6:;
  /* 10cde7b6 mov esp, ebp */
  ESP = (EBP);
  /* 10cde7b8 pop ebp */
  EBP = (pop32());
  /* 10cde7b9 ret  */
  ESPCHK(0x10cde700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e7c0 @ 0x10cde7c0 (804 bytes, 220 insns) */
void f_10cde7c0(void) {
  FTRACE(0x10cde7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cde7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cde7c1 mov ebp, esp */
  EBP = (ESP);
  /* 10cde7c3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cde7c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cde7c9 push eax */
  push32((uint32_t)(EAX));
  /* 10cde7ca call 0x10cdf120 */
  push32(0x10cde7cfu); f_10cdf120();
  /* 10cde7cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde7d2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10cde7d5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10cde7d7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10cde7da push ecx */
  push32((uint32_t)(ECX));
  /* 10cde7db mov edx, dword ptr [0x10cfe670] */
  EDX = (r32((uint32_t)(0x10cfe670)));
  /* 10cde7e1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10cde7e3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cde7e5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10cde7eb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde7f1 push edx */
  push32((uint32_t)(EDX));
  /* 10cde7f2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10cde7f5 push eax */
  push32((uint32_t)(EAX));
  /* 10cde7f6 call dword ptr [0x10cfe68c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cfe68c))), 0x10cde7fcu);
  /* 10cde7fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cde7fe jne 0x10cde814 */
  if (!C.zf) goto L_10cde814;
  /* 10cde800 mov dword ptr [0x10cfe684], 0 */
  w32((uint32_t)(0x10cfe684), (0x0u));
  /* 10cde80a mov eax, 1 */
  EAX = (0x1u);
  /* 10cde80f jmp 0x10cdeade */
  goto L_10cdeade;
L_10cde814:;
  /* 10cde814 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10cde817 push ecx */
  push32((uint32_t)(ECX));
  /* 10cde818 mov edx, dword ptr [0x10cfe680] */
  EDX = (r32((uint32_t)(0x10cfe680)));
  /* 10cde81e push edx */
  push32((uint32_t)(EDX));
  /* 10cde81f call 0x10ce0d60 */
  push32(0x10cde824u); f_10ce0d60();
  /* 10cde824 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde827 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cde829 jne 0x10cde94f */
  if (!C.zf) goto L_10cde94f;
  /* 10cde82f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10cde831 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10cde834 push eax */
  push32((uint32_t)(EAX));
  /* 10cde835 mov ecx, dword ptr [0x10cfe678] */
  ECX = (r32((uint32_t)(0x10cfe678)));
  /* 10cde83b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10cde83d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cde83f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10cde845 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde84b push ecx */
  push32((uint32_t)(ECX));
  /* 10cde84c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10cde84f push edx */
  push32((uint32_t)(EDX));
  /* 10cde850 call dword ptr [0x10cfe68c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cfe68c))), 0x10cde856u);
  /* 10cde856 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cde858 jne 0x10cde86e */
  if (!C.zf) goto L_10cde86e;
  /* 10cde85a mov dword ptr [0x10cfe684], 0 */
  w32((uint32_t)(0x10cfe684), (0x0u));
  /* 10cde864 mov eax, 1 */
  EAX = (0x1u);
  /* 10cde869 jmp 0x10cdeade */
  goto L_10cdeade;
L_10cde86e:;
  /* 10cde86e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10cde871 push eax */
  push32((uint32_t)(EAX));
  /* 10cde872 mov ecx, dword ptr [0x10cfe67c] */
  ECX = (r32((uint32_t)(0x10cfe67c)));
  /* 10cde878 push ecx */
  push32((uint32_t)(ECX));
  /* 10cde879 call 0x10ce0d60 */
  push32(0x10cde87eu); f_10ce0d60();
  /* 10cde87e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde881 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cde883 jne 0x10cde8b0 */
  if (!C.zf) goto L_10cde8b0;
  /* 10cde885 mov edx, dword ptr [0x10cfe684] */
  EDX = (r32((uint32_t)(0x10cfe684)));
  /* 10cde88b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 10cde891 mov dword ptr [0x10cfe684], edx */
  w32((uint32_t)(0x10cfe684), (EDX));
  /* 10cde897 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10cde89a mov dword ptr [0x10cfe688], eax */
  w32((uint32_t)(0x10cfe688), (EAX));
  /* 10cde89f mov ecx, dword ptr [0x10cfe688] */
  ECX = (r32((uint32_t)(0x10cfe688)));
  /* 10cde8a5 mov dword ptr [0x10cfe66c], ecx */
  w32((uint32_t)(0x10cfe66c), (ECX));
  /* 10cde8ab jmp 0x10cde94f */
  goto L_10cde94f;
L_10cde8b0:;
  /* 10cde8b0 mov edx, dword ptr [0x10cfe684] */
  EDX = (r32((uint32_t)(0x10cfe684)));
  /* 10cde8b6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10cde8b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cde8bb jne 0x10cde94f */
  if (!C.zf) goto L_10cde94f;
  /* 10cde8c1 cmp dword ptr [0x10cfe674], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe674))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cde8c8 je 0x10cde91d */
  if (C.zf) goto L_10cde91d;
  /* 10cde8ca mov eax, dword ptr [0x10cfe674] */
  EAX = (r32((uint32_t)(0x10cfe674)));
  /* 10cde8cf push eax */
  push32((uint32_t)(EAX));
  /* 10cde8d0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10cde8d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10cde8d4 mov edx, dword ptr [0x10cfe67c] */
  EDX = (r32((uint32_t)(0x10cfe67c)));
  /* 10cde8da push edx */
  push32((uint32_t)(EDX));
  /* 10cde8db call 0x10ce0e30 */
  push32(0x10cde8e0u); f_10ce0e30();
  /* 10cde8e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde8e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cde8e5 jne 0x10cde91d */
  if (!C.zf) goto L_10cde91d;
  /* 10cde8e7 mov eax, dword ptr [0x10cfe684] */
  EAX = (r32((uint32_t)(0x10cfe684)));
  /* 10cde8ec or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 10cde8ee mov dword ptr [0x10cfe684], eax */
  w32((uint32_t)(0x10cfe684), (EAX));
  /* 10cde8f3 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10cde8f6 mov dword ptr [0x10cfe688], ecx */
  w32((uint32_t)(0x10cfe688), (ECX));
  /* 10cde8fc mov edx, dword ptr [0x10cfe67c] */
  EDX = (r32((uint32_t)(0x10cfe67c)));
  /* 10cde902 push edx */
  push32((uint32_t)(EDX));
  /* 10cde903 call 0x10cd54c0 */
  push32(0x10cde908u); f_10cd54c0();
  /* 10cde908 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde90b cmp eax, dword ptr [0x10cfe674] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cfe674))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cde911 jne 0x10cde91b */
  if (!C.zf) goto L_10cde91b;
  /* 10cde913 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10cde916 mov dword ptr [0x10cfe66c], eax */
  w32((uint32_t)(0x10cfe66c), (EAX));
L_10cde91b:;
  /* 10cde91b jmp 0x10cde94f */
  goto L_10cde94f;
L_10cde91d:;
  /* 10cde91d mov ecx, dword ptr [0x10cfe684] */
  ECX = (r32((uint32_t)(0x10cfe684)));
  /* 10cde923 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10cde926 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cde928 jne 0x10cde94f */
  if (!C.zf) goto L_10cde94f;
  /* 10cde92a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10cde92d push edx */
  push32((uint32_t)(EDX));
  /* 10cde92e call 0x10cdee60 */
  push32(0x10cde933u); f_10cdee60();
  /* 10cde933 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde936 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cde938 je 0x10cde94f */
  if (C.zf) goto L_10cde94f;
  /* 10cde93a mov eax, dword ptr [0x10cfe684] */
  EAX = (r32((uint32_t)(0x10cfe684)));
  /* 10cde93f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10cde941 mov dword ptr [0x10cfe684], eax */
  w32((uint32_t)(0x10cfe684), (EAX));
  /* 10cde946 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10cde949 mov dword ptr [0x10cfe688], ecx */
  w32((uint32_t)(0x10cfe688), (ECX));
L_10cde94f:;
  /* 10cde94f mov edx, dword ptr [0x10cfe684] */
  EDX = (r32((uint32_t)(0x10cfe684)));
  /* 10cde955 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 10cde95b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cde961 je 0x10cdead1 */
  if (C.zf) goto L_10cdead1;
  /* 10cde967 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10cde969 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10cde96c push eax */
  push32((uint32_t)(EAX));
  /* 10cde96d mov ecx, dword ptr [0x10cfe678] */
  ECX = (r32((uint32_t)(0x10cfe678)));
  /* 10cde973 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10cde975 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cde977 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10cde97d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde983 push ecx */
  push32((uint32_t)(ECX));
  /* 10cde984 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10cde987 push edx */
  push32((uint32_t)(EDX));
  /* 10cde988 call dword ptr [0x10cfe68c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cfe68c))), 0x10cde98eu);
  /* 10cde98e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cde990 jne 0x10cde9a6 */
  if (!C.zf) goto L_10cde9a6;
  /* 10cde992 mov dword ptr [0x10cfe684], 0 */
  w32((uint32_t)(0x10cfe684), (0x0u));
  /* 10cde99c mov eax, 1 */
  EAX = (0x1u);
  /* 10cde9a1 jmp 0x10cdeade */
  goto L_10cdeade;
L_10cde9a6:;
  /* 10cde9a6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10cde9a9 push eax */
  push32((uint32_t)(EAX));
  /* 10cde9aa mov ecx, dword ptr [0x10cfe67c] */
  ECX = (r32((uint32_t)(0x10cfe67c)));
  /* 10cde9b0 push ecx */
  push32((uint32_t)(ECX));
  /* 10cde9b1 call 0x10ce0d60 */
  push32(0x10cde9b6u); f_10ce0d60();
  /* 10cde9b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cde9b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cde9bb jne 0x10cdea70 */
  if (!C.zf) goto L_10cdea70;
  /* 10cde9c1 mov edx, dword ptr [0x10cfe684] */
  EDX = (r32((uint32_t)(0x10cfe684)));
  /* 10cde9c7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10cde9ca mov dword ptr [0x10cfe684], edx */
  w32((uint32_t)(0x10cfe684), (EDX));
  /* 10cde9d0 cmp dword ptr [0x10cfe678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cde9d7 je 0x10cde9fa */
  if (C.zf) goto L_10cde9fa;
  /* 10cde9d9 mov eax, dword ptr [0x10cfe684] */
  EAX = (r32((uint32_t)(0x10cfe684)));
  /* 10cde9de or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10cde9e1 mov dword ptr [0x10cfe684], eax */
  w32((uint32_t)(0x10cfe684), (EAX));
  /* 10cde9e6 cmp dword ptr [0x10cfe66c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe66c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cde9ed jne 0x10cde9f8 */
  if (!C.zf) goto L_10cde9f8;
  /* 10cde9ef mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10cde9f2 mov dword ptr [0x10cfe66c], ecx */
  w32((uint32_t)(0x10cfe66c), (ECX));
L_10cde9f8:;
  /* 10cde9f8 jmp 0x10cdea6e */
  goto L_10cdea6e;
L_10cde9fa:;
  /* 10cde9fa cmp dword ptr [0x10cfe674], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe674))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdea01 je 0x10cdea4f */
  if (C.zf) goto L_10cdea4f;
  /* 10cdea03 mov edx, dword ptr [0x10cfe67c] */
  EDX = (r32((uint32_t)(0x10cfe67c)));
  /* 10cdea09 push edx */
  push32((uint32_t)(EDX));
  /* 10cdea0a call 0x10cd54c0 */
  push32(0x10cdea0fu); f_10cd54c0();
  /* 10cdea0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdea12 cmp eax, dword ptr [0x10cfe674] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cfe674))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdea18 jne 0x10cdea4f */
  if (!C.zf) goto L_10cdea4f;
  /* 10cdea1a push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdea1c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10cdea1f push eax */
  push32((uint32_t)(EAX));
  /* 10cdea20 call 0x10cdeeb0 */
  push32(0x10cdea25u); f_10cdeeb0();
  /* 10cdea25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdea28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdea2a je 0x10cdea4d */
  if (C.zf) goto L_10cdea4d;
  /* 10cdea2c mov ecx, dword ptr [0x10cfe684] */
  ECX = (r32((uint32_t)(0x10cfe684)));
  /* 10cdea32 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10cdea35 mov dword ptr [0x10cfe684], ecx */
  w32((uint32_t)(0x10cfe684), (ECX));
  /* 10cdea3b cmp dword ptr [0x10cfe66c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe66c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdea42 jne 0x10cdea4d */
  if (!C.zf) goto L_10cdea4d;
  /* 10cdea44 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10cdea47 mov dword ptr [0x10cfe66c], edx */
  w32((uint32_t)(0x10cfe66c), (EDX));
L_10cdea4d:;
  /* 10cdea4d jmp 0x10cdea6e */
  goto L_10cdea6e;
L_10cdea4f:;
  /* 10cdea4f mov eax, dword ptr [0x10cfe684] */
  EAX = (r32((uint32_t)(0x10cfe684)));
  /* 10cdea54 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10cdea57 mov dword ptr [0x10cfe684], eax */
  w32((uint32_t)(0x10cfe684), (EAX));
  /* 10cdea5c cmp dword ptr [0x10cfe66c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe66c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdea63 jne 0x10cdea6e */
  if (!C.zf) goto L_10cdea6e;
  /* 10cdea65 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10cdea68 mov dword ptr [0x10cfe66c], ecx */
  w32((uint32_t)(0x10cfe66c), (ECX));
L_10cdea6e:;
  /* 10cdea6e jmp 0x10cdead1 */
  goto L_10cdead1;
L_10cdea70:;
  /* 10cdea70 cmp dword ptr [0x10cfe678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdea77 jne 0x10cdead1 */
  if (!C.zf) goto L_10cdead1;
  /* 10cdea79 cmp dword ptr [0x10cfe674], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe674))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdea80 je 0x10cdead1 */
  if (C.zf) goto L_10cdead1;
  /* 10cdea82 mov edx, dword ptr [0x10cfe674] */
  EDX = (r32((uint32_t)(0x10cfe674)));
  /* 10cdea88 push edx */
  push32((uint32_t)(EDX));
  /* 10cdea89 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10cdea8c push eax */
  push32((uint32_t)(EAX));
  /* 10cdea8d mov ecx, dword ptr [0x10cfe67c] */
  ECX = (r32((uint32_t)(0x10cfe67c)));
  /* 10cdea93 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdea94 call 0x10ce0e30 */
  push32(0x10cdea99u); f_10ce0e30();
  /* 10cdea99 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdea9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdea9e jne 0x10cdead1 */
  if (!C.zf) goto L_10cdead1;
  /* 10cdeaa0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cdeaa2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10cdeaa5 push edx */
  push32((uint32_t)(EDX));
  /* 10cdeaa6 call 0x10cdeeb0 */
  push32(0x10cdeaabu); f_10cdeeb0();
  /* 10cdeaab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdeaae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdeab0 je 0x10cdead1 */
  if (C.zf) goto L_10cdead1;
  /* 10cdeab2 mov eax, dword ptr [0x10cfe684] */
  EAX = (r32((uint32_t)(0x10cfe684)));
  /* 10cdeab7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10cdeaba mov dword ptr [0x10cfe684], eax */
  w32((uint32_t)(0x10cfe684), (EAX));
  /* 10cdeabf cmp dword ptr [0x10cfe66c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe66c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdeac6 jne 0x10cdead1 */
  if (!C.zf) goto L_10cdead1;
  /* 10cdeac8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10cdeacb mov dword ptr [0x10cfe66c], ecx */
  w32((uint32_t)(0x10cfe66c), (ECX));
L_10cdead1:;
  /* 10cdead1 mov eax, dword ptr [0x10cfe684] */
  EAX = (r32((uint32_t)(0x10cfe684)));
  /* 10cdead6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10cdead9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10cdeadb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdeadd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10cdeade:;
  /* 10cdeade mov esp, ebp */
  ESP = (EBP);
  /* 10cdeae0 pop ebp */
  EBP = (pop32());
  /* 10cdeae1 ret 4 */
  ESPCHK(0x10cde7c0u, _esp0);
  ESP += 8; return;
}

/* FUN_1000eaf0 @ 0x10cdeaf0 (116 bytes, 33 insns) */
void f_10cdeaf0(void) {
  FTRACE(0x10cdeaf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdeaf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdeaf1 mov ebp, esp */
  EBP = (ESP);
  /* 10cdeaf3 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdeaf4 mov eax, dword ptr [0x10cfe67c] */
  EAX = (r32((uint32_t)(0x10cfe67c)));
  /* 10cdeaf9 push eax */
  push32((uint32_t)(EAX));
  /* 10cdeafa call 0x10cd54c0 */
  push32(0x10cdeaffu); f_10cd54c0();
  /* 10cdeaff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdeb02 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdeb04 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdeb07 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10cdeb0a mov dword ptr [0x10cfe678], ecx */
  w32((uint32_t)(0x10cfe678), (ECX));
  /* 10cdeb10 cmp dword ptr [0x10cfe678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdeb17 je 0x10cdeb22 */
  if (C.zf) goto L_10cdeb22;
  /* 10cdeb19 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10cdeb20 jmp 0x10cdeb34 */
  goto L_10cdeb34;
L_10cdeb22:;
  /* 10cdeb22 mov edx, dword ptr [0x10cfe67c] */
  EDX = (r32((uint32_t)(0x10cfe67c)));
  /* 10cdeb28 push edx */
  push32((uint32_t)(EDX));
  /* 10cdeb29 call 0x10cdf1a0 */
  push32(0x10cdeb2eu); f_10cdf1a0();
  /* 10cdeb2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdeb31 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10cdeb34:;
  /* 10cdeb34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdeb37 mov dword ptr [0x10cfe674], eax */
  w32((uint32_t)(0x10cfe674), (EAX));
  /* 10cdeb3c push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdeb3e push 0x10cdeb70 */
  push32((uint32_t)(0x10cdeb70u));
  /* 10cdeb43 call dword ptr [0x10d00318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00318))), 0x10cdeb49u);
  /* 10cdeb49 mov ecx, dword ptr [0x10cfe684] */
  ECX = (r32((uint32_t)(0x10cfe684)));
  /* 10cdeb4f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10cdeb52 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cdeb54 jne 0x10cdeb60 */
  if (!C.zf) goto L_10cdeb60;
  /* 10cdeb56 mov dword ptr [0x10cfe684], 0 */
  w32((uint32_t)(0x10cfe684), (0x0u));
L_10cdeb60:;
  /* 10cdeb60 mov esp, ebp */
  ESP = (EBP);
  /* 10cdeb62 pop ebp */
  EBP = (pop32());
  /* 10cdeb63 ret  */
  ESPCHK(0x10cdeaf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb70 @ 0x10cdeb70 (287 bytes, 86 insns) */
void f_10cdeb70(void) {
  FTRACE(0x10cdeb70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdeb70 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdeb71 mov ebp, esp */
  EBP = (ESP);
  /* 10cdeb73 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdeb76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdeb79 push eax */
  push32((uint32_t)(EAX));
  /* 10cdeb7a call 0x10cdf120 */
  push32(0x10cdeb7fu); f_10cdf120();
  /* 10cdeb7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdeb82 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10cdeb85 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10cdeb87 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10cdeb8a push ecx */
  push32((uint32_t)(ECX));
  /* 10cdeb8b mov edx, dword ptr [0x10cfe678] */
  EDX = (r32((uint32_t)(0x10cfe678)));
  /* 10cdeb91 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10cdeb93 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdeb95 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 10cdeb9b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdeba1 push edx */
  push32((uint32_t)(EDX));
  /* 10cdeba2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10cdeba5 push eax */
  push32((uint32_t)(EAX));
  /* 10cdeba6 call dword ptr [0x10cfe68c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cfe68c))), 0x10cdebacu);
  /* 10cdebac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdebae jne 0x10cdebc4 */
  if (!C.zf) goto L_10cdebc4;
  /* 10cdebb0 mov dword ptr [0x10cfe684], 0 */
  w32((uint32_t)(0x10cfe684), (0x0u));
  /* 10cdebba mov eax, 1 */
  EAX = (0x1u);
  /* 10cdebbf jmp 0x10cdec89 */
  goto L_10cdec89;
L_10cdebc4:;
  /* 10cdebc4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10cdebc7 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdebc8 mov edx, dword ptr [0x10cfe67c] */
  EDX = (r32((uint32_t)(0x10cfe67c)));
  /* 10cdebce push edx */
  push32((uint32_t)(EDX));
  /* 10cdebcf call 0x10ce0d60 */
  push32(0x10cdebd4u); f_10ce0d60();
  /* 10cdebd4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdebd7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdebd9 jne 0x10cdec19 */
  if (!C.zf) goto L_10cdec19;
  /* 10cdebdb cmp dword ptr [0x10cfe678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdebe2 jne 0x10cdebf6 */
  if (!C.zf) goto L_10cdebf6;
  /* 10cdebe4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdebe6 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10cdebe9 push eax */
  push32((uint32_t)(EAX));
  /* 10cdebea call 0x10cdeeb0 */
  push32(0x10cdebefu); f_10cdeeb0();
  /* 10cdebef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdebf2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdebf4 je 0x10cdec17 */
  if (C.zf) goto L_10cdec17;
L_10cdebf6:;
  /* 10cdebf6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10cdebf9 mov dword ptr [0x10cfe688], ecx */
  w32((uint32_t)(0x10cfe688), (ECX));
  /* 10cdebff mov edx, dword ptr [0x10cfe688] */
  EDX = (r32((uint32_t)(0x10cfe688)));
  /* 10cdec05 mov dword ptr [0x10cfe66c], edx */
  w32((uint32_t)(0x10cfe66c), (EDX));
  /* 10cdec0b mov eax, dword ptr [0x10cfe684] */
  EAX = (r32((uint32_t)(0x10cfe684)));
  /* 10cdec10 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10cdec12 mov dword ptr [0x10cfe684], eax */
  w32((uint32_t)(0x10cfe684), (EAX));
L_10cdec17:;
  /* 10cdec17 jmp 0x10cdec7c */
  goto L_10cdec7c;
L_10cdec19:;
  /* 10cdec19 cmp dword ptr [0x10cfe678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdec20 jne 0x10cdec7c */
  if (!C.zf) goto L_10cdec7c;
  /* 10cdec22 cmp dword ptr [0x10cfe674], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe674))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdec29 je 0x10cdec7c */
  if (C.zf) goto L_10cdec7c;
  /* 10cdec2b mov ecx, dword ptr [0x10cfe674] */
  ECX = (r32((uint32_t)(0x10cfe674)));
  /* 10cdec31 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdec32 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 10cdec35 push edx */
  push32((uint32_t)(EDX));
  /* 10cdec36 mov eax, dword ptr [0x10cfe67c] */
  EAX = (r32((uint32_t)(0x10cfe67c)));
  /* 10cdec3b push eax */
  push32((uint32_t)(EAX));
  /* 10cdec3c call 0x10ce0e30 */
  push32(0x10cdec41u); f_10ce0e30();
  /* 10cdec41 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdec44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdec46 jne 0x10cdec7c */
  if (!C.zf) goto L_10cdec7c;
  /* 10cdec48 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cdec4a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10cdec4d push ecx */
  push32((uint32_t)(ECX));
  /* 10cdec4e call 0x10cdeeb0 */
  push32(0x10cdec53u); f_10cdeeb0();
  /* 10cdec53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdec56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdec58 je 0x10cdec7c */
  if (C.zf) goto L_10cdec7c;
  /* 10cdec5a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10cdec5d mov dword ptr [0x10cfe688], edx */
  w32((uint32_t)(0x10cfe688), (EDX));
  /* 10cdec63 mov eax, dword ptr [0x10cfe688] */
  EAX = (r32((uint32_t)(0x10cfe688)));
  /* 10cdec68 mov dword ptr [0x10cfe66c], eax */
  w32((uint32_t)(0x10cfe66c), (EAX));
  /* 10cdec6d mov ecx, dword ptr [0x10cfe684] */
  ECX = (r32((uint32_t)(0x10cfe684)));
  /* 10cdec73 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10cdec76 mov dword ptr [0x10cfe684], ecx */
  w32((uint32_t)(0x10cfe684), (ECX));
L_10cdec7c:;
  /* 10cdec7c mov eax, dword ptr [0x10cfe684] */
  EAX = (r32((uint32_t)(0x10cfe684)));
  /* 10cdec81 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10cdec84 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10cdec86 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdec88 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10cdec89:;
  /* 10cdec89 mov esp, ebp */
  ESP = (EBP);
  /* 10cdec8b pop ebp */
  EBP = (pop32());
  /* 10cdec8c ret 4 */
  ESPCHK(0x10cdeb70u, _esp0);
  ESP += 8; return;
}

/* FUN_1000ec90 @ 0x10cdec90 (69 bytes, 20 insns) */
void f_10cdec90(void) {
  FTRACE(0x10cdec90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdec90 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdec91 mov ebp, esp */
  EBP = (ESP);
  /* 10cdec93 mov eax, dword ptr [0x10cfe680] */
  EAX = (r32((uint32_t)(0x10cfe680)));
  /* 10cdec98 push eax */
  push32((uint32_t)(EAX));
  /* 10cdec99 call 0x10cd54c0 */
  push32(0x10cdec9eu); f_10cd54c0();
  /* 10cdec9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdeca1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdeca3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdeca6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10cdeca9 mov dword ptr [0x10cfe670], ecx */
  w32((uint32_t)(0x10cfe670), (ECX));
  /* 10cdecaf push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdecb1 push 0x10cdece0 */
  push32((uint32_t)(0x10cdece0u));
  /* 10cdecb6 call dword ptr [0x10d00318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00318))), 0x10cdecbcu);
  /* 10cdecbc mov edx, dword ptr [0x10cfe684] */
  EDX = (r32((uint32_t)(0x10cfe684)));
  /* 10cdecc2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10cdecc5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cdecc7 jne 0x10cdecd3 */
  if (!C.zf) goto L_10cdecd3;
  /* 10cdecc9 mov dword ptr [0x10cfe684], 0 */
  w32((uint32_t)(0x10cfe684), (0x0u));
L_10cdecd3:;
  /* 10cdecd3 pop ebp */
  EBP = (pop32());
  /* 10cdecd4 ret  */
  ESPCHK(0x10cdec90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ece0 @ 0x10cdece0 (172 bytes, 54 insns) */
void f_10cdece0(void) {
  FTRACE(0x10cdece0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdece0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdece1 mov ebp, esp */
  EBP = (ESP);
  /* 10cdece3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdece6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdece9 push eax */
  push32((uint32_t)(EAX));
  /* 10cdecea call 0x10cdf120 */
  push32(0x10cdecefu); f_10cdf120();
  /* 10cdecef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdecf2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10cdecf5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10cdecf7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10cdecfa push ecx */
  push32((uint32_t)(ECX));
  /* 10cdecfb mov edx, dword ptr [0x10cfe670] */
  EDX = (r32((uint32_t)(0x10cfe670)));
  /* 10cded01 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10cded03 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cded05 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10cded0b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cded11 push edx */
  push32((uint32_t)(EDX));
  /* 10cded12 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10cded15 push eax */
  push32((uint32_t)(EAX));
  /* 10cded16 call dword ptr [0x10cfe68c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cfe68c))), 0x10cded1cu);
  /* 10cded1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cded1e jne 0x10cded31 */
  if (!C.zf) goto L_10cded31;
  /* 10cded20 mov dword ptr [0x10cfe684], 0 */
  w32((uint32_t)(0x10cfe684), (0x0u));
  /* 10cded2a mov eax, 1 */
  EAX = (0x1u);
  /* 10cded2f jmp 0x10cded86 */
  goto L_10cded86;
L_10cded31:;
  /* 10cded31 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10cded34 push ecx */
  push32((uint32_t)(ECX));
  /* 10cded35 mov edx, dword ptr [0x10cfe680] */
  EDX = (r32((uint32_t)(0x10cfe680)));
  /* 10cded3b push edx */
  push32((uint32_t)(EDX));
  /* 10cded3c call 0x10ce0d60 */
  push32(0x10cded41u); f_10ce0d60();
  /* 10cded41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cded44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cded46 jne 0x10cded79 */
  if (!C.zf) goto L_10cded79;
  /* 10cded48 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10cded4b push eax */
  push32((uint32_t)(EAX));
  /* 10cded4c call 0x10cdee60 */
  push32(0x10cded51u); f_10cdee60();
  /* 10cded51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cded54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cded56 je 0x10cded79 */
  if (C.zf) goto L_10cded79;
  /* 10cded58 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10cded5b mov dword ptr [0x10cfe688], ecx */
  w32((uint32_t)(0x10cfe688), (ECX));
  /* 10cded61 mov edx, dword ptr [0x10cfe688] */
  EDX = (r32((uint32_t)(0x10cfe688)));
  /* 10cded67 mov dword ptr [0x10cfe66c], edx */
  w32((uint32_t)(0x10cfe66c), (EDX));
  /* 10cded6d mov eax, dword ptr [0x10cfe684] */
  EAX = (r32((uint32_t)(0x10cfe684)));
  /* 10cded72 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10cded74 mov dword ptr [0x10cfe684], eax */
  w32((uint32_t)(0x10cfe684), (EAX));
L_10cded79:;
  /* 10cded79 mov eax, dword ptr [0x10cfe684] */
  EAX = (r32((uint32_t)(0x10cfe684)));
  /* 10cded7e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10cded81 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10cded83 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cded85 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10cded86:;
  /* 10cded86 mov esp, ebp */
  ESP = (EBP);
  /* 10cded88 pop ebp */
  EBP = (pop32());
  /* 10cded89 ret 4 */
  ESPCHK(0x10cdece0u, _esp0);
  ESP += 8; return;
}

/* FUN_1000ed90 @ 0x10cded90 (43 bytes, 11 insns) */
void f_10cded90(void) {
  FTRACE(0x10cded90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cded90 push ebp */
  push32((uint32_t)(EBP));
  /* 10cded91 mov ebp, esp */
  EBP = (ESP);
  /* 10cded93 mov eax, dword ptr [0x10cfe684] */
  EAX = (r32((uint32_t)(0x10cfe684)));
  /* 10cded98 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 10cded9d mov dword ptr [0x10cfe684], eax */
  w32((uint32_t)(0x10cfe684), (EAX));
  /* 10cdeda2 call dword ptr [0x10d0031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d0031c))), 0x10cdeda8u);
  /* 10cdeda8 mov dword ptr [0x10cfe688], eax */
  w32((uint32_t)(0x10cfe688), (EAX));
  /* 10cdedad mov ecx, dword ptr [0x10cfe688] */
  ECX = (r32((uint32_t)(0x10cfe688)));
  /* 10cdedb3 mov dword ptr [0x10cfe66c], ecx */
  w32((uint32_t)(0x10cfe66c), (ECX));
  /* 10cdedb9 pop ebp */
  EBP = (pop32());
  /* 10cdedba ret  */
  ESPCHK(0x10cded90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000edc0 @ 0x10cdedc0 (155 bytes, 57 insns) */
void f_10cdedc0(void) {
  FTRACE(0x10cdedc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdedc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdedc1 mov ebp, esp */
  EBP = (ESP);
  /* 10cdedc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdedc6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdedca je 0x10cdedeb */
  if (C.zf) goto L_10cdedeb;
  /* 10cdedcc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdedcf movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10cdedd2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cdedd4 je 0x10cdedeb */
  if (C.zf) goto L_10cdedeb;
  /* 10cdedd6 push 0x10cfa67c */
  push32((uint32_t)(0x10cfa67cu));
  /* 10cdeddb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdedde push edx */
  push32((uint32_t)(EDX));
  /* 10cdeddf call 0x10cde320 */
  push32(0x10cdede4u); f_10cde320();
  /* 10cdede4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdede7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdede9 jne 0x10cdee13 */
  if (!C.zf) goto L_10cdee13;
L_10cdedeb:;
  /* 10cdedeb push 8 */
  push32((uint32_t)(0x8u));
  /* 10cdeded lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10cdedf0 push eax */
  push32((uint32_t)(EAX));
  /* 10cdedf1 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10cdedf6 mov ecx, dword ptr [0x10cfe688] */
  ECX = (r32((uint32_t)(0x10cfe688)));
  /* 10cdedfc push ecx */
  push32((uint32_t)(ECX));
  /* 10cdedfd call dword ptr [0x10cfe68c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cfe68c))), 0x10cdee03u);
  /* 10cdee03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdee05 jne 0x10cdee0b */
  if (!C.zf) goto L_10cdee0b;
  /* 10cdee07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cdee09 jmp 0x10cdee57 */
  goto L_10cdee57;
L_10cdee0b:;
  /* 10cdee0b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 10cdee0e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10cdee11 jmp 0x10cdee4b */
  goto L_10cdee4b;
L_10cdee13:;
  /* 10cdee13 push 0x10cfa678 */
  push32((uint32_t)(0x10cfa678u));
  /* 10cdee18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdee1b push eax */
  push32((uint32_t)(EAX));
  /* 10cdee1c call 0x10cde320 */
  push32(0x10cdee21u); f_10cde320();
  /* 10cdee21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdee24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdee26 jne 0x10cdee4b */
  if (!C.zf) goto L_10cdee4b;
  /* 10cdee28 push 8 */
  push32((uint32_t)(0x8u));
  /* 10cdee2a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10cdee2d push ecx */
  push32((uint32_t)(ECX));
  /* 10cdee2e push 0xb */
  push32((uint32_t)(0xbu));
  /* 10cdee30 mov edx, dword ptr [0x10cfe688] */
  EDX = (r32((uint32_t)(0x10cfe688)));
  /* 10cdee36 push edx */
  push32((uint32_t)(EDX));
  /* 10cdee37 call dword ptr [0x10cfe68c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cfe68c))), 0x10cdee3du);
  /* 10cdee3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdee3f jne 0x10cdee45 */
  if (!C.zf) goto L_10cdee45;
  /* 10cdee41 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cdee43 jmp 0x10cdee57 */
  goto L_10cdee57;
L_10cdee45:;
  /* 10cdee45 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10cdee48 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10cdee4b:;
  /* 10cdee4b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdee4e push ecx */
  push32((uint32_t)(ECX));
  /* 10cdee4f call 0x10ce0f40 */
  push32(0x10cdee54u); f_10ce0f40();
  /* 10cdee54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cdee57:;
  /* 10cdee57 mov esp, ebp */
  ESP = (EBP);
  /* 10cdee59 pop ebp */
  EBP = (pop32());
  /* 10cdee5a ret  */
  ESPCHK(0x10cdedc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee60 @ 0x10cdee60 (79 bytes, 26 insns) */
void f_10cdee60(void) {
  FTRACE(0x10cdee60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdee60 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdee61 mov ebp, esp */
  EBP = (ESP);
  /* 10cdee63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdee66 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 10cdee6a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 10cdee6e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10cdee75 jmp 0x10cdee80 */
  goto L_10cdee80;
L_10cdee77:;
  /* 10cdee77 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdee7a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdee7d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10cdee80:;
  /* 10cdee80 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdee84 jae 0x10cdeea6 */
  if (!C.cf) goto L_10cdeea6;
  /* 10cdee86 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdee89 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10cdee8f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdee92 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cdee94 mov cx, word ptr [eax*2 + 0x10cfd9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x10cfd9c4)));
  /* 10cdee9c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdee9e jne 0x10cdeea4 */
  if (!C.zf) goto L_10cdeea4;
  /* 10cdeea0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cdeea2 jmp 0x10cdeeab */
  goto L_10cdeeab;
L_10cdeea4:;
  /* 10cdeea4 jmp 0x10cdee77 */
  goto L_10cdee77;
L_10cdeea6:;
  /* 10cdeea6 mov eax, 1 */
  EAX = (0x1u);
L_10cdeeab:;
  /* 10cdeeab mov esp, ebp */
  ESP = (EBP);
  /* 10cdeead pop ebp */
  EBP = (pop32());
  /* 10cdeeae ret  */
  ESPCHK(0x10cdee60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eeb0 @ 0x10cdeeb0 (135 bytes, 48 insns) */
void f_10cdeeb0(void) {
  FTRACE(0x10cdeeb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdeeb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdeeb1 mov ebp, esp */
  EBP = (ESP);
  /* 10cdeeb3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdeeb6 push esi */
  push32((uint32_t)(ESI));
  /* 10cdeeb7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdeeba and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cdeebf and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cdeec4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cdeec9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 10cdeecc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cdeed1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cdeed4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10cdeed6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 10cdeed9 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdeeda push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdeedc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdeedf push edx */
  push32((uint32_t)(EDX));
  /* 10cdeee0 call dword ptr [0x10cfe68c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cfe68c))), 0x10cdeee6u);
  /* 10cdeee6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdeee8 jne 0x10cdeeee */
  if (!C.zf) goto L_10cdeeee;
  /* 10cdeeea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cdeeec jmp 0x10cdef32 */
  goto L_10cdef32;
L_10cdeeee:;
  /* 10cdeeee lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 10cdeef1 push eax */
  push32((uint32_t)(EAX));
  /* 10cdeef2 call 0x10cdf120 */
  push32(0x10cdeef7u); f_10cdf120();
  /* 10cdeef7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdeefa cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdeefd je 0x10cdef2d */
  if (C.zf) goto L_10cdef2d;
  /* 10cdeeff cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdef03 je 0x10cdef2d */
  if (C.zf) goto L_10cdef2d;
  /* 10cdef05 mov ecx, dword ptr [0x10cfe67c] */
  ECX = (r32((uint32_t)(0x10cfe67c)));
  /* 10cdef0b push ecx */
  push32((uint32_t)(ECX));
  /* 10cdef0c call 0x10cdf1a0 */
  push32(0x10cdef11u); f_10cdf1a0();
  /* 10cdef11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdef14 mov esi, eax */
  ESI = (EAX);
  /* 10cdef16 mov edx, dword ptr [0x10cfe67c] */
  EDX = (r32((uint32_t)(0x10cfe67c)));
  /* 10cdef1c push edx */
  push32((uint32_t)(EDX));
  /* 10cdef1d call 0x10cd54c0 */
  push32(0x10cdef22u); f_10cd54c0();
  /* 10cdef22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdef25 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdef27 jne 0x10cdef2d */
  if (!C.zf) goto L_10cdef2d;
  /* 10cdef29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cdef2b jmp 0x10cdef32 */
  goto L_10cdef32;
L_10cdef2d:;
  /* 10cdef2d mov eax, 1 */
  EAX = (0x1u);
L_10cdef32:;
  /* 10cdef32 pop esi */
  ESI = (pop32());
  /* 10cdef33 mov esp, ebp */
  ESP = (EBP);
  /* 10cdef35 pop ebp */
  EBP = (pop32());
  /* 10cdef36 ret  */
  ESPCHK(0x10cdeeb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef40 @ 0x10cdef40 (77 bytes, 18 insns) */
void f_10cdef40(void) {
  FTRACE(0x10cdef40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdef40 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdef41 mov ebp, esp */
  EBP = (ESP);
  /* 10cdef43 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdef49 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 10cdef53 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 10cdef59 push eax */
  push32((uint32_t)(EAX));
  /* 10cdef5a call dword ptr [0x10d00320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00320))), 0x10cdef60u);
  /* 10cdef60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdef62 je 0x10cdef79 */
  if (C.zf) goto L_10cdef79;
  /* 10cdef64 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdef6b jne 0x10cdef79 */
  if (!C.zf) goto L_10cdef79;
  /* 10cdef6d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 10cdef77 jmp 0x10cdef83 */
  goto L_10cdef83;
L_10cdef79:;
  /* 10cdef79 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_10cdef83:;
  /* 10cdef83 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10cdef89 mov esp, ebp */
  ESP = (EBP);
  /* 10cdef8b pop ebp */
  EBP = (pop32());
  /* 10cdef8c ret  */
  ESPCHK(0x10cdef40u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x10cdef90 (388 bytes, 118 insns) */
void f_10cdef90(void) {
  FTRACE(0x10cdef90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdef90 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdef91 mov ebp, esp */
  EBP = (ESP);
  /* 10cdef93 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdef96 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10cdef9d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 10cdefa4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10cdefab:;
  /* 10cdefab mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cdefae cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdefb1 jg 0x10cdf0f8 */
  if ((!C.zf&&C.sf==C.of)) goto L_10cdf0f8;
  /* 10cdefb7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cdefba add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdefbd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10cdefbe sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdefc0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10cdefc2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10cdefc5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdefc8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdefcb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdefce cmp edx, dword ptr [ecx + 0x10cfd520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10cfd520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdefd4 jne 0x10cdf0ce */
  if (!C.zf) goto L_10cdf0ce;
  /* 10cdefda mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdefdd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10cdefe0 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdefe4 ja 0x10cdf007 */
  if ((!C.cf&&!C.zf)) goto L_10cdf007;
  /* 10cdefe6 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdefea je 0x10cdf079 */
  if (C.zf) goto L_10cdf079;
  /* 10cdeff0 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdeff4 je 0x10cdf024 */
  if (C.zf) goto L_10cdf024;
  /* 10cdeff6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdeffa je 0x10cdf046 */
  if (C.zf) goto L_10cdf046;
  /* 10cdeffc cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdf000 je 0x10cdf068 */
  if (C.zf) goto L_10cdf068;
  /* 10cdf002 jmp 0x10cdf098 */
  goto L_10cdf098;
L_10cdf007:;
  /* 10cdf007 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdf00e je 0x10cdf035 */
  if (C.zf) goto L_10cdf035;
  /* 10cdf010 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdf017 je 0x10cdf057 */
  if (C.zf) goto L_10cdf057;
  /* 10cdf019 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdf020 je 0x10cdf08a */
  if (C.zf) goto L_10cdf08a;
  /* 10cdf022 jmp 0x10cdf098 */
  goto L_10cdf098;
L_10cdf024:;
  /* 10cdf024 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdf027 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdf02a add ecx, 0x10cfd524 */
  { uint32_t _a=(ECX),_b=(0x10cfd524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf030 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10cdf033 jmp 0x10cdf098 */
  goto L_10cdf098;
L_10cdf035:;
  /* 10cdf035 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdf038 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdf03b mov eax, dword ptr [edx + 0x10cfd52c] */
  EAX = (r32((uint32_t)(EDX + 0x10cfd52c)));
  /* 10cdf041 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10cdf044 jmp 0x10cdf098 */
  goto L_10cdf098;
L_10cdf046:;
  /* 10cdf046 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdf049 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdf04c add ecx, 0x10cfd530 */
  { uint32_t _a=(ECX),_b=(0x10cfd530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf052 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10cdf055 jmp 0x10cdf098 */
  goto L_10cdf098;
L_10cdf057:;
  /* 10cdf057 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdf05a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdf05d mov eax, dword ptr [edx + 0x10cfd534] */
  EAX = (r32((uint32_t)(EDX + 0x10cfd534)));
  /* 10cdf063 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10cdf066 jmp 0x10cdf098 */
  goto L_10cdf098;
L_10cdf068:;
  /* 10cdf068 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdf06b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdf06e add ecx, 0x10cfd538 */
  { uint32_t _a=(ECX),_b=(0x10cfd538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf074 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10cdf077 jmp 0x10cdf098 */
  goto L_10cdf098;
L_10cdf079:;
  /* 10cdf079 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdf07c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdf07f add edx, 0x10cfd53c */
  { uint32_t _a=(EDX),_b=(0x10cfd53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf085 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10cdf088 jmp 0x10cdf098 */
  goto L_10cdf098;
L_10cdf08a:;
  /* 10cdf08a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdf08d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdf090 add eax, 0x10cfd544 */
  { uint32_t _a=(EAX),_b=(0x10cfd544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf095 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10cdf098:;
  /* 10cdf098 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdf09c je 0x10cdf0a4 */
  if (C.zf) goto L_10cdf0a4;
  /* 10cdf09e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdf0a2 jge 0x10cdf0a6 */
  if ((C.sf==C.of)) goto L_10cdf0a6;
L_10cdf0a4:;
  /* 10cdf0a4 jmp 0x10cdf0f8 */
  goto L_10cdf0f8;
L_10cdf0a6:;
  /* 10cdf0a6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cdf0a9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdf0ac push ecx */
  push32((uint32_t)(ECX));
  /* 10cdf0ad mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdf0b0 push edx */
  push32((uint32_t)(EDX));
  /* 10cdf0b1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdf0b4 push eax */
  push32((uint32_t)(EAX));
  /* 10cdf0b5 call 0x10cd5eb0 */
  push32(0x10cdf0bau); f_10cd5eb0();
  /* 10cdf0ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf0bd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdf0c0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf0c3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 10cdf0c7 mov eax, 1 */
  EAX = (0x1u);
  /* 10cdf0cc jmp 0x10cdf10e */
  goto L_10cdf10e;
L_10cdf0ce:;
  /* 10cdf0ce mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdf0d1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdf0d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdf0d7 cmp eax, dword ptr [edx + 0x10cfd520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10cfd520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdf0dd jae 0x10cdf0ea */
  if (!C.cf) goto L_10cdf0ea;
  /* 10cdf0df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdf0e2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdf0e5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10cdf0e8 jmp 0x10cdf0f3 */
  goto L_10cdf0f3;
L_10cdf0ea:;
  /* 10cdf0ea mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdf0ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf0f0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10cdf0f3:;
  /* 10cdf0f3 jmp 0x10cdefab */
  goto L_10cdefab;
L_10cdf0f8:;
  /* 10cdf0f8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cdf0fb push eax */
  push32((uint32_t)(EAX));
  /* 10cdf0fc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdf0ff push ecx */
  push32((uint32_t)(ECX));
  /* 10cdf100 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdf103 push edx */
  push32((uint32_t)(EDX));
  /* 10cdf104 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdf107 push eax */
  push32((uint32_t)(EAX));
  /* 10cdf108 call dword ptr [0x10d00308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00308))), 0x10cdf10eu);
L_10cdf10e:;
  /* 10cdf10e mov esp, ebp */
  ESP = (EBP);
  /* 10cdf110 pop ebp */
  EBP = (pop32());
  /* 10cdf111 ret 0x10 */
  ESPCHK(0x10cdef90u, _esp0);
  ESP += 20; return;
}

/* FUN_1000f120 @ 0x10cdf120 (118 bytes, 42 insns) */
void f_10cdf120(void) {
  FTRACE(0x10cdf120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdf120 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdf121 mov ebp, esp */
  EBP = (ESP);
  /* 10cdf123 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdf126 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10cdf12d:;
  /* 10cdf12d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdf130 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10cdf132 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10cdf135 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10cdf139 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdf13c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf13f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10cdf142 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cdf144 je 0x10cdf18f */
  if (C.zf) goto L_10cdf18f;
  /* 10cdf146 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10cdf14a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdf14d jl 0x10cdf162 */
  if ((C.sf!=C.of)) goto L_10cdf162;
  /* 10cdf14f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10cdf153 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdf156 jg 0x10cdf162 */
  if ((!C.zf&&C.sf==C.of)) goto L_10cdf162;
  /* 10cdf158 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10cdf15b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10cdf15d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10cdf160 jmp 0x10cdf17c */
  goto L_10cdf17c;
L_10cdf162:;
  /* 10cdf162 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10cdf166 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdf169 jl 0x10cdf17c */
  if ((C.sf!=C.of)) goto L_10cdf17c;
  /* 10cdf16b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10cdf16f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdf172 jg 0x10cdf17c */
  if ((!C.zf&&C.sf==C.of)) goto L_10cdf17c;
  /* 10cdf174 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10cdf177 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10cdf179 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_10cdf17c:;
  /* 10cdf17c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdf17f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10cdf182 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10cdf186 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10cdf18a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cdf18d jmp 0x10cdf12d */
  goto L_10cdf12d;
L_10cdf18f:;
  /* 10cdf18f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdf192 mov esp, ebp */
  ESP = (EBP);
  /* 10cdf194 pop ebp */
  EBP = (pop32());
  /* 10cdf195 ret  */
  ESPCHK(0x10cdf120u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x10cdf1a0 (101 bytes, 36 insns) */
void f_10cdf1a0(void) {
  FTRACE(0x10cdf1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdf1a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdf1a1 mov ebp, esp */
  EBP = (ESP);
  /* 10cdf1a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdf1a6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10cdf1ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdf1b0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10cdf1b2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 10cdf1b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdf1b8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf1bb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10cdf1be:;
  /* 10cdf1be movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10cdf1c2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdf1c5 jl 0x10cdf1d0 */
  if ((C.sf!=C.of)) goto L_10cdf1d0;
  /* 10cdf1c7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10cdf1cb cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdf1ce jle 0x10cdf1e2 */
  if ((C.zf||C.sf!=C.of)) goto L_10cdf1e2;
L_10cdf1d0:;
  /* 10cdf1d0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10cdf1d4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdf1d7 jl 0x10cdf1fe */
  if ((C.sf!=C.of)) goto L_10cdf1fe;
  /* 10cdf1d9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10cdf1dd cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdf1e0 jg 0x10cdf1fe */
  if ((!C.zf&&C.sf==C.of)) goto L_10cdf1fe;
L_10cdf1e2:;
  /* 10cdf1e2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdf1e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf1e8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10cdf1eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdf1ee mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10cdf1f0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 10cdf1f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdf1f6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf1f9 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10cdf1fc jmp 0x10cdf1be */
  goto L_10cdf1be;
L_10cdf1fe:;
  /* 10cdf1fe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdf201 mov esp, ebp */
  ESP = (EBP);
  /* 10cdf203 pop ebp */
  EBP = (pop32());
  /* 10cdf204 ret  */
  ESPCHK(0x10cdf1a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f210 @ 0x10cdf210 (122 bytes, 39 insns) */
void f_10cdf210(void) {
  FTRACE(0x10cdf210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdf210 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdf211 mov ebp, esp */
  EBP = (ESP);
  /* 10cdf213 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdf214 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdf217 cmp eax, dword ptr [0x10cfff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cfff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdf21d jae 0x10cdf241 */
  if (!C.cf) goto L_10cdf241;
  /* 10cdf21f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdf222 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10cdf225 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdf228 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10cdf22b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdf22e mov eax, dword ptr [ecx*4 + 0x10cffde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10cffde0)));
  /* 10cdf235 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10cdf23a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10cdf23d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cdf23f jne 0x10cdf25c */
  if (!C.zf) goto L_10cdf25c;
L_10cdf241:;
  /* 10cdf241 call 0x10cda560 */
  push32(0x10cdf246u); f_10cda560();
  /* 10cdf246 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10cdf24c call 0x10cda570 */
  push32(0x10cdf251u); f_10cda570();
  /* 10cdf251 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10cdf257 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cdf25a jmp 0x10cdf286 */
  goto L_10cdf286;
L_10cdf25c:;
  /* 10cdf25c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdf25f push edx */
  push32((uint32_t)(EDX));
  /* 10cdf260 call 0x10cdbd80 */
  push32(0x10cdf265u); f_10cdbd80();
  /* 10cdf265 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf268 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdf26b push eax */
  push32((uint32_t)(EAX));
  /* 10cdf26c call 0x10cdf290 */
  push32(0x10cdf271u); f_10cdf290();
  /* 10cdf271 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf274 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cdf277 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdf27a push ecx */
  push32((uint32_t)(ECX));
  /* 10cdf27b call 0x10cdbe10 */
  push32(0x10cdf280u); f_10cdbe10();
  /* 10cdf280 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf283 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10cdf286:;
  /* 10cdf286 mov esp, ebp */
  ESP = (EBP);
  /* 10cdf288 pop ebp */
  EBP = (pop32());
  /* 10cdf289 ret  */
  ESPCHK(0x10cdf210u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x10cdf290 (170 bytes, 59 insns) */
void f_10cdf290(void) {
  FTRACE(0x10cdf290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdf290 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdf291 mov ebp, esp */
  EBP = (ESP);
  /* 10cdf293 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdf294 push esi */
  push32((uint32_t)(ESI));
  /* 10cdf295 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdf298 push eax */
  push32((uint32_t)(EAX));
  /* 10cdf299 call 0x10cdbc00 */
  push32(0x10cdf29eu); f_10cdbc00();
  /* 10cdf29e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf2a1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdf2a4 je 0x10cdf2e3 */
  if (C.zf) goto L_10cdf2e3;
  /* 10cdf2a6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdf2aa je 0x10cdf2b2 */
  if (C.zf) goto L_10cdf2b2;
  /* 10cdf2ac cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdf2b0 jne 0x10cdf2cc */
  if (!C.zf) goto L_10cdf2cc;
L_10cdf2b2:;
  /* 10cdf2b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cdf2b4 call 0x10cdbc00 */
  push32(0x10cdf2b9u); f_10cdbc00();
  /* 10cdf2b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf2bc mov esi, eax */
  ESI = (EAX);
  /* 10cdf2be push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdf2c0 call 0x10cdbc00 */
  push32(0x10cdf2c5u); f_10cdbc00();
  /* 10cdf2c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf2c8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdf2ca je 0x10cdf2e3 */
  if (C.zf) goto L_10cdf2e3;
L_10cdf2cc:;
  /* 10cdf2cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdf2cf push ecx */
  push32((uint32_t)(ECX));
  /* 10cdf2d0 call 0x10cdbc00 */
  push32(0x10cdf2d5u); f_10cdbc00();
  /* 10cdf2d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf2d8 push eax */
  push32((uint32_t)(EAX));
  /* 10cdf2d9 call dword ptr [0x10d00324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00324))), 0x10cdf2dfu);
  /* 10cdf2df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdf2e1 je 0x10cdf2ec */
  if (C.zf) goto L_10cdf2ec;
L_10cdf2e3:;
  /* 10cdf2e3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10cdf2ea jmp 0x10cdf2f5 */
  goto L_10cdf2f5;
L_10cdf2ec:;
  /* 10cdf2ec call dword ptr [0x10d00270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00270))), 0x10cdf2f2u);
  /* 10cdf2f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10cdf2f5:;
  /* 10cdf2f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdf2f8 push edx */
  push32((uint32_t)(EDX));
  /* 10cdf2f9 call 0x10cdbb20 */
  push32(0x10cdf2feu); f_10cdbb20();
  /* 10cdf2fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf301 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdf304 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10cdf307 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdf30a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10cdf30d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cdf310 mov edx, dword ptr [eax*4 + 0x10cffde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10cffde0)));
  /* 10cdf317 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 10cdf31c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdf320 je 0x10cdf333 */
  if (C.zf) goto L_10cdf333;
  /* 10cdf322 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdf325 push eax */
  push32((uint32_t)(EAX));
  /* 10cdf326 call 0x10cda4c0 */
  push32(0x10cdf32bu); f_10cda4c0();
  /* 10cdf32b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf32e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cdf331 jmp 0x10cdf335 */
  goto L_10cdf335;
L_10cdf333:;
  /* 10cdf333 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10cdf335:;
  /* 10cdf335 pop esi */
  ESI = (pop32());
  /* 10cdf336 mov esp, ebp */
  ESP = (EBP);
  /* 10cdf338 pop ebp */
  EBP = (pop32());
  /* 10cdf339 ret  */
  ESPCHK(0x10cdf290u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f340 @ 0x10cdf340 (146 bytes, 52 insns) */
void f_10cdf340(void) {
  FTRACE(0x10cdf340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdf340 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdf341 mov ebp, esp */
  EBP = (ESP);
  /* 10cdf343 push ebx */
  push32((uint32_t)(EBX));
  /* 10cdf344 push esi */
  push32((uint32_t)(ESI));
  /* 10cdf345 push edi */
  push32((uint32_t)(EDI));
L_10cdf346:;
  /* 10cdf346 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdf34a jne 0x10cdf36a */
  if (!C.zf) goto L_10cdf36a;
  /* 10cdf34c push 0x10cf9fb8 */
  push32((uint32_t)(0x10cf9fb8u));
  /* 10cdf351 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cdf353 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10cdf355 push 0x10cfa680 */
  push32((uint32_t)(0x10cfa680u));
  /* 10cdf35a push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdf35c call 0x10cd1750 */
  push32(0x10cdf361u); f_10cd1750();
  /* 10cdf361 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf364 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdf367 jne 0x10cdf36a */
  if (!C.zf) goto L_10cdf36a;
  /* 10cdf369 int3  */
  x86_unimpl("int3 @ 0x10cdf369");
L_10cdf36a:;
  /* 10cdf36a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cdf36c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cdf36e jne 0x10cdf346 */
  if (!C.zf) goto L_10cdf346;
  /* 10cdf370 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdf373 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10cdf376 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 10cdf37c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cdf37e je 0x10cdf3cd */
  if (C.zf) goto L_10cdf3cd;
  /* 10cdf380 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdf383 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10cdf386 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10cdf389 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cdf38b je 0x10cdf3cd */
  if (C.zf) goto L_10cdf3cd;
  /* 10cdf38d push 2 */
  push32((uint32_t)(0x2u));
  /* 10cdf38f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdf392 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10cdf395 push eax */
  push32((uint32_t)(EAX));
  /* 10cdf396 call 0x10cd3120 */
  push32(0x10cdf39bu); f_10cd3120();
  /* 10cdf39b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf39e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdf3a1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10cdf3a4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 10cdf3aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdf3ad mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10cdf3b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdf3b3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10cdf3b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdf3bc mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10cdf3c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdf3c6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_10cdf3cd:;
  /* 10cdf3cd pop edi */
  EDI = (pop32());
  /* 10cdf3ce pop esi */
  ESI = (pop32());
  /* 10cdf3cf pop ebx */
  EBX = (pop32());
  /* 10cdf3d0 pop ebp */
  EBP = (pop32());
  /* 10cdf3d1 ret  */
  ESPCHK(0x10cdf340u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f3e0 @ 0x10cdf3e0 (289 bytes, 97 insns) */
void f_10cdf3e0(void) {
  FTRACE(0x10cdf3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdf3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdf3e1 mov ebp, esp */
  EBP = (ESP);
  /* 10cdf3e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdf3e6 push esi */
  push32((uint32_t)(ESI));
  /* 10cdf3e7 mov eax, dword ptr [0x10cfdc98] */
  EAX = (r32((uint32_t)(0x10cfdc98)));
  /* 10cdf3ec mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10cdf3ef mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10cdf3f6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10cdf3fd jmp 0x10cdf408 */
  goto L_10cdf408;
L_10cdf3ff:;
  /* 10cdf3ff mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cdf402 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf405 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10cdf408:;
  /* 10cdf408 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdf40c jae 0x10cdf441 */
  if (!C.cf) goto L_10cdf441;
  /* 10cdf40e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cdf411 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdf414 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10cdf417 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdf418 call 0x10cd54c0 */
  push32(0x10cdf41du); f_10cd54c0();
  /* 10cdf41d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf420 mov esi, eax */
  ESI = (EAX);
  /* 10cdf422 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cdf425 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdf428 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10cdf42c push ecx */
  push32((uint32_t)(ECX));
  /* 10cdf42d call 0x10cd54c0 */
  push32(0x10cdf432u); f_10cd54c0();
  /* 10cdf432 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf435 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf438 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10cdf43c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10cdf43f jmp 0x10cdf3ff */
  goto L_10cdf3ff;
L_10cdf441:;
  /* 10cdf441 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdf444 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf447 push eax */
  push32((uint32_t)(EAX));
  /* 10cdf448 call 0x10cd2670 */
  push32(0x10cdf44du); f_10cd2670();
  /* 10cdf44d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf450 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cdf453 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdf457 je 0x10cdf4f9 */
  if (C.zf) goto L_10cdf4f9;
  /* 10cdf45d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdf460 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10cdf463 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10cdf46a jmp 0x10cdf475 */
  goto L_10cdf475;
L_10cdf46c:;
  /* 10cdf46c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cdf46f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf472 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10cdf475:;
  /* 10cdf475 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdf479 jae 0x10cdf4ea */
  if (!C.cf) goto L_10cdf4ea;
  /* 10cdf47b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cdf47e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10cdf481 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cdf484 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf487 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10cdf48a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cdf48d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdf490 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10cdf493 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdf494 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cdf497 push edx */
  push32((uint32_t)(EDX));
  /* 10cdf498 call 0x10cd5640 */
  push32(0x10cdf49du); f_10cd5640();
  /* 10cdf49d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf4a0 push eax */
  push32((uint32_t)(EAX));
  /* 10cdf4a1 call 0x10cd54c0 */
  push32(0x10cdf4a6u); f_10cd54c0();
  /* 10cdf4a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf4a9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cdf4ac add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf4ae mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10cdf4b1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cdf4b4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10cdf4b7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cdf4ba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf4bd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10cdf4c0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cdf4c3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdf4c6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10cdf4ca push eax */
  push32((uint32_t)(EAX));
  /* 10cdf4cb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cdf4ce push ecx */
  push32((uint32_t)(ECX));
  /* 10cdf4cf call 0x10cd5640 */
  push32(0x10cdf4d4u); f_10cd5640();
  /* 10cdf4d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf4d7 push eax */
  push32((uint32_t)(EAX));
  /* 10cdf4d8 call 0x10cd54c0 */
  push32(0x10cdf4ddu); f_10cd54c0();
  /* 10cdf4dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf4e0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cdf4e3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf4e5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10cdf4e8 jmp 0x10cdf46c */
  goto L_10cdf46c;
L_10cdf4ea:;
  /* 10cdf4ea mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cdf4ed mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10cdf4f0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cdf4f3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf4f6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10cdf4f9:;
  /* 10cdf4f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdf4fc pop esi */
  ESI = (pop32());
  /* 10cdf4fd mov esp, ebp */
  ESP = (EBP);
  /* 10cdf4ff pop ebp */
  EBP = (pop32());
  /* 10cdf500 ret  */
  ESPCHK(0x10cdf3e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f510 @ 0x10cdf510 (291 bytes, 97 insns) */
void f_10cdf510(void) {
  FTRACE(0x10cdf510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdf510 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdf511 mov ebp, esp */
  EBP = (ESP);
  /* 10cdf513 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdf516 push esi */
  push32((uint32_t)(ESI));
  /* 10cdf517 mov eax, dword ptr [0x10cfdc98] */
  EAX = (r32((uint32_t)(0x10cfdc98)));
  /* 10cdf51c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10cdf51f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10cdf526 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10cdf52d jmp 0x10cdf538 */
  goto L_10cdf538;
L_10cdf52f:;
  /* 10cdf52f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cdf532 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf535 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10cdf538:;
  /* 10cdf538 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdf53c jae 0x10cdf572 */
  if (!C.cf) goto L_10cdf572;
  /* 10cdf53e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cdf541 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdf544 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10cdf548 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdf549 call 0x10cd54c0 */
  push32(0x10cdf54eu); f_10cd54c0();
  /* 10cdf54e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf551 mov esi, eax */
  ESI = (EAX);
  /* 10cdf553 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cdf556 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdf559 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 10cdf55d push ecx */
  push32((uint32_t)(ECX));
  /* 10cdf55e call 0x10cd54c0 */
  push32(0x10cdf563u); f_10cd54c0();
  /* 10cdf563 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf566 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf569 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10cdf56d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10cdf570 jmp 0x10cdf52f */
  goto L_10cdf52f;
L_10cdf572:;
  /* 10cdf572 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdf575 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf578 push eax */
  push32((uint32_t)(EAX));
  /* 10cdf579 call 0x10cd2670 */
  push32(0x10cdf57eu); f_10cd2670();
  /* 10cdf57e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf581 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cdf584 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdf588 je 0x10cdf62b */
  if (C.zf) goto L_10cdf62b;
  /* 10cdf58e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdf591 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10cdf594 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10cdf59b jmp 0x10cdf5a6 */
  goto L_10cdf5a6;
L_10cdf59d:;
  /* 10cdf59d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cdf5a0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf5a3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10cdf5a6:;
  /* 10cdf5a6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdf5aa jae 0x10cdf61c */
  if (!C.cf) goto L_10cdf61c;
  /* 10cdf5ac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cdf5af mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10cdf5b2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cdf5b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf5b8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10cdf5bb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cdf5be mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdf5c1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10cdf5c5 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdf5c6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cdf5c9 push edx */
  push32((uint32_t)(EDX));
  /* 10cdf5ca call 0x10cd5640 */
  push32(0x10cdf5cfu); f_10cd5640();
  /* 10cdf5cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf5d2 push eax */
  push32((uint32_t)(EAX));
  /* 10cdf5d3 call 0x10cd54c0 */
  push32(0x10cdf5d8u); f_10cd54c0();
  /* 10cdf5d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf5db mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cdf5de add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf5e0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10cdf5e3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cdf5e6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10cdf5e9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cdf5ec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf5ef mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10cdf5f2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cdf5f5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdf5f8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10cdf5fc push eax */
  push32((uint32_t)(EAX));
  /* 10cdf5fd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cdf600 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdf601 call 0x10cd5640 */
  push32(0x10cdf606u); f_10cd5640();
  /* 10cdf606 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf609 push eax */
  push32((uint32_t)(EAX));
  /* 10cdf60a call 0x10cd54c0 */
  push32(0x10cdf60fu); f_10cd54c0();
  /* 10cdf60f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf612 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cdf615 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf617 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10cdf61a jmp 0x10cdf59d */
  goto L_10cdf59d;
L_10cdf61c:;
  /* 10cdf61c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cdf61f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10cdf622 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cdf625 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf628 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10cdf62b:;
  /* 10cdf62b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdf62e pop esi */
  ESI = (pop32());
  /* 10cdf62f mov esp, ebp */
  ESP = (EBP);
  /* 10cdf631 pop ebp */
  EBP = (pop32());
  /* 10cdf632 ret  */
  ESPCHK(0x10cdf510u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f640 @ 0x10cdf640 (878 bytes, 273 insns) */
void f_10cdf640(void) {
  FTRACE(0x10cdf640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdf640 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdf641 mov ebp, esp */
  EBP = (ESP);
  /* 10cdf643 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cdf646 push esi */
  push32((uint32_t)(ESI));
  /* 10cdf647 mov eax, dword ptr [0x10cfdc98] */
  EAX = (r32((uint32_t)(0x10cfdc98)));
  /* 10cdf64c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10cdf64f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10cdf656 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10cdf65d jmp 0x10cdf668 */
  goto L_10cdf668;
L_10cdf65f:;
  /* 10cdf65f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cdf662 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf665 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10cdf668:;
  /* 10cdf668 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdf66c jae 0x10cdf6a1 */
  if (!C.cf) goto L_10cdf6a1;
  /* 10cdf66e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cdf671 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdf674 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10cdf677 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdf678 call 0x10cd54c0 */
  push32(0x10cdf67du); f_10cd54c0();
  /* 10cdf67d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf680 mov esi, eax */
  ESI = (EAX);
  /* 10cdf682 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cdf685 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdf688 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10cdf68c push ecx */
  push32((uint32_t)(ECX));
  /* 10cdf68d call 0x10cd54c0 */
  push32(0x10cdf692u); f_10cd54c0();
  /* 10cdf692 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf695 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf698 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10cdf69c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10cdf69f jmp 0x10cdf65f */
  goto L_10cdf65f;
L_10cdf6a1:;
  /* 10cdf6a1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10cdf6a8 jmp 0x10cdf6b3 */
  goto L_10cdf6b3;
L_10cdf6aa:;
  /* 10cdf6aa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cdf6ad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf6b0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10cdf6b3:;
  /* 10cdf6b3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdf6b7 jae 0x10cdf6ed */
  if (!C.cf) goto L_10cdf6ed;
  /* 10cdf6b9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cdf6bc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdf6bf mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10cdf6c3 push eax */
  push32((uint32_t)(EAX));
  /* 10cdf6c4 call 0x10cd54c0 */
  push32(0x10cdf6c9u); f_10cd54c0();
  /* 10cdf6c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf6cc mov esi, eax */
  ESI = (EAX);
  /* 10cdf6ce mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cdf6d1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdf6d4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10cdf6d8 push eax */
  push32((uint32_t)(EAX));
  /* 10cdf6d9 call 0x10cd54c0 */
  push32(0x10cdf6deu); f_10cd54c0();
  /* 10cdf6de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf6e1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf6e4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10cdf6e8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10cdf6eb jmp 0x10cdf6aa */
  goto L_10cdf6aa;
L_10cdf6ed:;
  /* 10cdf6ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdf6f0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10cdf6f6 push eax */
  push32((uint32_t)(EAX));
  /* 10cdf6f7 call 0x10cd54c0 */
  push32(0x10cdf6fcu); f_10cd54c0();
  /* 10cdf6fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf6ff mov esi, eax */
  ESI = (EAX);
  /* 10cdf701 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdf704 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 10cdf70a push edx */
  push32((uint32_t)(EDX));
  /* 10cdf70b call 0x10cd54c0 */
  push32(0x10cdf710u); f_10cd54c0();
  /* 10cdf710 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf713 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf716 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10cdf71a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10cdf71d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdf720 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10cdf726 push edx */
  push32((uint32_t)(EDX));
  /* 10cdf727 call 0x10cd54c0 */
  push32(0x10cdf72cu); f_10cd54c0();
  /* 10cdf72c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf72f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdf732 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10cdf736 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10cdf739 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdf73c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 10cdf742 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdf743 call 0x10cd54c0 */
  push32(0x10cdf748u); f_10cd54c0();
  /* 10cdf748 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf74b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdf74e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10cdf752 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10cdf755 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdf758 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10cdf75e push edx */
  push32((uint32_t)(EDX));
  /* 10cdf75f call 0x10cd54c0 */
  push32(0x10cdf764u); f_10cd54c0();
  /* 10cdf764 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf767 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdf76a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10cdf76e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10cdf771 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cdf774 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf779 push eax */
  push32((uint32_t)(EAX));
  /* 10cdf77a call 0x10cd2670 */
  push32(0x10cdf77fu); f_10cd2670();
  /* 10cdf77f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf782 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cdf785 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdf789 je 0x10cdf9a6 */
  if (C.zf) goto L_10cdf9a6;
  /* 10cdf78f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdf792 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10cdf795 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdf798 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf79e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10cdf7a1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 10cdf7a6 mov eax, dword ptr [0x10cfdc98] */
  EAX = (r32((uint32_t)(0x10cfdc98)));
  /* 10cdf7ab push eax */
  push32((uint32_t)(EAX));
  /* 10cdf7ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdf7af push ecx */
  push32((uint32_t)(ECX));
  /* 10cdf7b0 call 0x10cd8f70 */
  push32(0x10cdf7b5u); f_10cd8f70();
  /* 10cdf7b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf7b8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10cdf7bf jmp 0x10cdf7ca */
  goto L_10cdf7ca;
L_10cdf7c1:;
  /* 10cdf7c1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cdf7c4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf7c7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10cdf7ca:;
  /* 10cdf7ca cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdf7ce jae 0x10cdf83e */
  if (!C.cf) goto L_10cdf83e;
  /* 10cdf7d0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cdf7d3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cdf7d6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cdf7d9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10cdf7dc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cdf7df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdf7e2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10cdf7e5 push edx */
  push32((uint32_t)(EDX));
  /* 10cdf7e6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cdf7e9 push eax */
  push32((uint32_t)(EAX));
  /* 10cdf7ea call 0x10cd5640 */
  push32(0x10cdf7efu); f_10cd5640();
  /* 10cdf7ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf7f2 push eax */
  push32((uint32_t)(EAX));
  /* 10cdf7f3 call 0x10cd54c0 */
  push32(0x10cdf7f8u); f_10cd54c0();
  /* 10cdf7f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf7fb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cdf7fe lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10cdf802 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10cdf805 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cdf808 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cdf80b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cdf80e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 10cdf812 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cdf815 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdf818 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 10cdf81c push edx */
  push32((uint32_t)(EDX));
  /* 10cdf81d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cdf820 push eax */
  push32((uint32_t)(EAX));
  /* 10cdf821 call 0x10cd5640 */
  push32(0x10cdf826u); f_10cd5640();
  /* 10cdf826 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf829 push eax */
  push32((uint32_t)(EAX));
  /* 10cdf82a call 0x10cd54c0 */
  push32(0x10cdf82fu); f_10cd54c0();
  /* 10cdf82f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf832 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cdf835 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10cdf839 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10cdf83c jmp 0x10cdf7c1 */
  goto L_10cdf7c1;
L_10cdf83e:;
  /* 10cdf83e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10cdf845 jmp 0x10cdf850 */
  goto L_10cdf850;
L_10cdf847:;
  /* 10cdf847 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cdf84a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf84d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10cdf850:;
  /* 10cdf850 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cdf854 jae 0x10cdf8c6 */
  if (!C.cf) goto L_10cdf8c6;
  /* 10cdf856 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cdf859 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cdf85c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cdf85f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 10cdf863 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cdf866 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdf869 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10cdf86d push eax */
  push32((uint32_t)(EAX));
  /* 10cdf86e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cdf871 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdf872 call 0x10cd5640 */
  push32(0x10cdf877u); f_10cd5640();
  /* 10cdf877 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf87a push eax */
  push32((uint32_t)(EAX));
  /* 10cdf87b call 0x10cd54c0 */
  push32(0x10cdf880u); f_10cd54c0();
  /* 10cdf880 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf883 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cdf886 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10cdf88a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10cdf88d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cdf890 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cdf893 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cdf896 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 10cdf89a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cdf89d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdf8a0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10cdf8a4 push eax */
  push32((uint32_t)(EAX));
  /* 10cdf8a5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cdf8a8 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdf8a9 call 0x10cd5640 */
  push32(0x10cdf8aeu); f_10cd5640();
  /* 10cdf8ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf8b1 push eax */
  push32((uint32_t)(EAX));
  /* 10cdf8b2 call 0x10cd54c0 */
  push32(0x10cdf8b7u); f_10cd54c0();
  /* 10cdf8b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf8ba mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cdf8bd lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10cdf8c1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10cdf8c4 jmp 0x10cdf847 */
  goto L_10cdf847;
L_10cdf8c6:;
  /* 10cdf8c6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cdf8c9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cdf8cc mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 10cdf8d2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdf8d5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10cdf8db push ecx */
  push32((uint32_t)(ECX));
  /* 10cdf8dc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cdf8df push edx */
  push32((uint32_t)(EDX));
  /* 10cdf8e0 call 0x10cd5640 */
  push32(0x10cdf8e5u); f_10cd5640();
  /* 10cdf8e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf8e8 push eax */
  push32((uint32_t)(EAX));
  /* 10cdf8e9 call 0x10cd54c0 */
  push32(0x10cdf8eeu); f_10cd54c0();
  /* 10cdf8ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf8f1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cdf8f4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10cdf8f8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10cdf8fb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cdf8fe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cdf901 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 10cdf907 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdf90a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10cdf910 push eax */
  push32((uint32_t)(EAX));
  /* 10cdf911 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cdf914 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdf915 call 0x10cd5640 */
  push32(0x10cdf91au); f_10cd5640();
  /* 10cdf91a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf91d push eax */
  push32((uint32_t)(EAX));
  /* 10cdf91e call 0x10cd54c0 */
  push32(0x10cdf923u); f_10cd54c0();
  /* 10cdf923 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf926 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cdf929 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10cdf92d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10cdf930 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cdf933 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cdf936 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 10cdf93c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdf93f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 10cdf945 push ecx */
  push32((uint32_t)(ECX));
  /* 10cdf946 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cdf949 push edx */
  push32((uint32_t)(EDX));
  /* 10cdf94a call 0x10cd5640 */
  push32(0x10cdf94fu); f_10cd5640();
  /* 10cdf94f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf952 push eax */
  push32((uint32_t)(EAX));
  /* 10cdf953 call 0x10cd54c0 */
  push32(0x10cdf958u); f_10cd54c0();
  /* 10cdf958 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf95b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cdf95e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10cdf962 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10cdf965 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cdf968 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cdf96b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 10cdf971 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cdf974 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10cdf97a push eax */
  push32((uint32_t)(EAX));
  /* 10cdf97b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cdf97e push ecx */
  push32((uint32_t)(ECX));
  /* 10cdf97f call 0x10cd5640 */
  push32(0x10cdf984u); f_10cd5640();
  /* 10cdf984 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf987 push eax */
  push32((uint32_t)(EAX));
  /* 10cdf988 call 0x10cd54c0 */
  push32(0x10cdf98du); f_10cd54c0();
  /* 10cdf98d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf990 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cdf993 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10cdf997 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10cdf99a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cdf99d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cdf9a0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_10cdf9a6:;
  /* 10cdf9a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cdf9a9 pop esi */
  ESI = (pop32());
  /* 10cdf9aa mov esp, ebp */
  ESP = (EBP);
  /* 10cdf9ac pop ebp */
  EBP = (pop32());
  /* 10cdf9ad ret  */
  ESPCHK(0x10cdf640u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f9b0 @ 0x10cdf9b0 (31 bytes, 15 insns) */
void f_10cdf9b0(void) {
  FTRACE(0x10cdf9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cdf9b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cdf9b1 mov ebp, esp */
  EBP = (ESP);
  /* 10cdf9b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cdf9b5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cdf9b8 push eax */
  push32((uint32_t)(EAX));
  /* 10cdf9b9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cdf9bc push ecx */
  push32((uint32_t)(ECX));
  /* 10cdf9bd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cdf9c0 push edx */
  push32((uint32_t)(EDX));
  /* 10cdf9c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cdf9c4 push eax */
  push32((uint32_t)(EAX));
  /* 10cdf9c5 call 0x10cdf9d0 */
  push32(0x10cdf9cau); f_10cdf9d0();
  /* 10cdf9ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cdf9cd pop ebp */
  EBP = (pop32());
  /* 10cdf9ce ret  */
  ESPCHK(0x10cdf9b0u, _esp0);
  ESP += 4; return;
}

