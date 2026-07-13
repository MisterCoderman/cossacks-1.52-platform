#include "recomp.h"

/* FUN_1000b9e0 @ 0x1197b9e0 (10 bytes, 5 insns) */
void f_1197b9e0(void) {
  FTRACE(0x1197b9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197b9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1197b9e1 mov ebp, esp */
  EBP = (ESP);
  /* 1197b9e3 mov eax, dword ptr [0x119a1c94] */
  EAX = (r32((uint32_t)(0x119a1c94)));
  /* 1197b9e8 pop ebp */
  EBP = (pop32());
  /* 1197b9e9 ret  */
  ESPCHK(0x1197b9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9f0 @ 0x1197b9f0 (31 bytes, 11 insns) */
void f_1197b9f0(void) {
  FTRACE(0x1197b9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197b9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1197b9f1 mov ebp, esp */
  EBP = (ESP);
  /* 1197b9f3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197b9fa jbe 0x1197ba00 */
  if ((C.cf||C.zf)) goto L_1197ba00;
  /* 1197b9fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197b9fe jmp 0x1197ba0d */
  goto L_1197ba0d;
L_1197ba00:;
  /* 1197ba00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197ba03 mov dword ptr [0x119a1c94], eax */
  w32((uint32_t)(0x119a1c94), (EAX));
  /* 1197ba08 mov eax, 1 */
  EAX = (0x1u);
L_1197ba0d:;
  /* 1197ba0d pop ebp */
  EBP = (pop32());
  /* 1197ba0e ret  */
  ESPCHK(0x1197b9f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba10 @ 0x1197ba10 (89 bytes, 20 insns) */
void f_1197ba10(void) {
  FTRACE(0x1197ba10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197ba10 push ebp */
  push32((uint32_t)(EBP));
  /* 1197ba11 mov ebp, esp */
  EBP = (ESP);
  /* 1197ba13 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1197ba18 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197ba1a mov eax, dword ptr [0x119a520c] */
  EAX = (r32((uint32_t)(0x119a520c)));
  /* 1197ba1f push eax */
  push32((uint32_t)(EAX));
  /* 1197ba20 call dword ptr [0x119a633c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a633c))), 0x1197ba26u);
  /* 1197ba26 mov dword ptr [0x119a5208], eax */
  w32((uint32_t)(0x119a5208), (EAX));
  /* 1197ba2b cmp dword ptr [0x119a5208], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a5208))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197ba32 jne 0x1197ba38 */
  if (!C.zf) goto L_1197ba38;
  /* 1197ba34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197ba36 jmp 0x1197ba67 */
  goto L_1197ba67;
L_1197ba38:;
  /* 1197ba38 mov ecx, dword ptr [0x119a5208] */
  ECX = (r32((uint32_t)(0x119a5208)));
  /* 1197ba3e mov dword ptr [0x119a51fc], ecx */
  w32((uint32_t)(0x119a51fc), (ECX));
  /* 1197ba44 mov dword ptr [0x119a5200], 0 */
  w32((uint32_t)(0x119a5200), (0x0u));
  /* 1197ba4e mov dword ptr [0x119a5204], 0 */
  w32((uint32_t)(0x119a5204), (0x0u));
  /* 1197ba58 mov dword ptr [0x119a51e8], 0x10 */
  w32((uint32_t)(0x119a51e8), (0x10u));
  /* 1197ba62 mov eax, 1 */
  EAX = (0x1u);
L_1197ba67:;
  /* 1197ba67 pop ebp */
  EBP = (pop32());
  /* 1197ba68 ret  */
  ESPCHK(0x1197ba10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba70 @ 0x1197ba70 (85 bytes, 29 insns) */
void f_1197ba70(void) {
  FTRACE(0x1197ba70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197ba70 push ebp */
  push32((uint32_t)(EBP));
  /* 1197ba71 mov ebp, esp */
  EBP = (ESP);
  /* 1197ba73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197ba76 mov eax, dword ptr [0x119a5204] */
  EAX = (r32((uint32_t)(0x119a5204)));
  /* 1197ba7b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1197ba7e mov ecx, dword ptr [0x119a5208] */
  ECX = (r32((uint32_t)(0x119a5208)));
  /* 1197ba84 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197ba86 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1197ba89 mov edx, dword ptr [0x119a5208] */
  EDX = (r32((uint32_t)(0x119a5208)));
  /* 1197ba8f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1197ba92:;
  /* 1197ba92 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197ba95 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197ba98 jae 0x1197babf */
  if (!C.cf) goto L_1197babf;
  /* 1197ba9a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197ba9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197baa0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197baa3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1197baa6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197baad jae 0x1197bab4 */
  if (!C.cf) goto L_1197bab4;
  /* 1197baaf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197bab2 jmp 0x1197bac1 */
  goto L_1197bac1;
L_1197bab4:;
  /* 1197bab4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197bab7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197baba mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1197babd jmp 0x1197ba92 */
  goto L_1197ba92;
L_1197babf:;
  /* 1197babf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1197bac1:;
  /* 1197bac1 mov esp, ebp */
  ESP = (EBP);
  /* 1197bac3 pop ebp */
  EBP = (pop32());
  /* 1197bac4 ret  */
  ESPCHK(0x1197ba70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bad0 @ 0x1197bad0 (95 bytes, 33 insns) */
void f_1197bad0(void) {
  FTRACE(0x1197bad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197bad0 push ebp */
  push32((uint32_t)(EBP));
  /* 1197bad1 mov ebp, esp */
  EBP = (ESP);
  /* 1197bad3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197bad6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197bad9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197badc sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197badf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1197bae2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197bae5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1197bae8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1197baeb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1197baf0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197baf3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1197baf5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197baf8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1197bafb and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1197bafd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197baff jne 0x1197bb21 */
  if (!C.zf) goto L_1197bb21;
  /* 1197bb01 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197bb04 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1197bb07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197bb09 jne 0x1197bb21 */
  if (!C.zf) goto L_1197bb21;
  /* 1197bb0b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197bb0e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 1197bb14 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1197bb16 je 0x1197bb21 */
  if (C.zf) goto L_1197bb21;
  /* 1197bb18 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 1197bb1f jmp 0x1197bb28 */
  goto L_1197bb28;
L_1197bb21:;
  /* 1197bb21 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1197bb28:;
  /* 1197bb28 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197bb2b mov esp, ebp */
  ESP = (EBP);
  /* 1197bb2d pop ebp */
  EBP = (pop32());
  /* 1197bb2e ret  */
  ESPCHK(0x1197bad0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb30 @ 0x1197bb30 (1485 bytes, 453 insns) */
void f_1197bb30(void) {
  FTRACE(0x1197bb30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197bb30 push ebp */
  push32((uint32_t)(EBP));
  /* 1197bb31 mov ebp, esp */
  EBP = (ESP);
  /* 1197bb33 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197bb36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197bb39 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1197bb3c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 1197bb3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197bb42 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197bb45 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197bb48 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1197bb4b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197bb4e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 1197bb51 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1197bb54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197bb57 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1197bb5d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1197bb60 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 1197bb67 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1197bb6a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197bb6d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197bb70 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1197bb73 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1197bb76 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1197bb78 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197bb7b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1197bb7e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1197bb81 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197bb84 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 1197bb87 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1197bb8a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1197bb8c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1197bb8f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1197bb92 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1197bb95 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1197bb98 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1197bb9b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1197bb9e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1197bba0 jne 0x1197bcc8 */
  if (!C.zf) goto L_1197bcc8;
  /* 1197bba6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1197bba9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1197bbac sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197bbaf mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1197bbb2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197bbb6 jbe 0x1197bbbf */
  if ((C.cf||C.zf)) goto L_1197bbbf;
  /* 1197bbb8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1197bbbf:;
  /* 1197bbbf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1197bbc2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1197bbc5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1197bbc8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197bbcb jne 0x1197bca1 */
  if (!C.zf) goto L_1197bca1;
  /* 1197bbd1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197bbd5 jae 0x1197bc36 */
  if (!C.cf) goto L_1197bc36;
  /* 1197bbd7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1197bbdc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197bbdf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1197bbe1 not eax */
  EAX = (~(EAX));
  /* 1197bbe3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197bbe6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1197bbe9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1197bbed and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1197bbef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197bbf2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1197bbf5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1197bbf9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1197bbfc add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197bbff mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1197bc02 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1197bc05 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1197bc08 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197bc0b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1197bc0e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1197bc11 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197bc14 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1197bc18 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197bc1a jne 0x1197bc34 */
  if (!C.zf) goto L_1197bc34;
  /* 1197bc1c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1197bc21 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197bc24 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1197bc26 not eax */
  EAX = (~(EAX));
  /* 1197bc28 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197bc2b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1197bc2d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1197bc2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197bc32 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1197bc34:;
  /* 1197bc34 jmp 0x1197bca1 */
  goto L_1197bca1;
L_1197bc36:;
  /* 1197bc36 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197bc39 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197bc3c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1197bc41 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1197bc43 not edx */
  EDX = (~(EDX));
  /* 1197bc45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197bc48 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1197bc4b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1197bc52 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1197bc54 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197bc57 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1197bc5a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1197bc61 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1197bc64 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197bc67 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1197bc6a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1197bc6d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1197bc70 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197bc73 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1197bc76 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1197bc79 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197bc7c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1197bc80 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1197bc82 jne 0x1197bca1 */
  if (!C.zf) goto L_1197bca1;
  /* 1197bc84 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197bc87 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197bc8a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1197bc8f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1197bc91 not edx */
  EDX = (~(EDX));
  /* 1197bc93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197bc96 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1197bc99 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1197bc9b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197bc9e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1197bca1:;
  /* 1197bca1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1197bca4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1197bca7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1197bcaa mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1197bcad mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1197bcb0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1197bcb3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1197bcb6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1197bcb9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1197bcbc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1197bcbf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197bcc2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197bcc5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_1197bcc8:;
  /* 1197bcc8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197bccb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1197bcce sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197bcd1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1197bcd4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197bcd8 jbe 0x1197bce1 */
  if ((C.cf||C.zf)) goto L_1197bce1;
  /* 1197bcda mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1197bce1:;
  /* 1197bce1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197bce4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1197bce7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1197bce9 jne 0x1197be45 */
  if (!C.zf) goto L_1197be45;
  /* 1197bcef mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1197bcf2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197bcf5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 1197bcf8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197bcfb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1197bcfe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197bd01 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1197bd04 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197bd08 jbe 0x1197bd11 */
  if ((C.cf||C.zf)) goto L_1197bd11;
  /* 1197bd0a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_1197bd11:;
  /* 1197bd11 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197bd14 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197bd17 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1197bd1a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197bd1d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1197bd20 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197bd23 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1197bd26 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197bd2a jbe 0x1197bd33 */
  if ((C.cf||C.zf)) goto L_1197bd33;
  /* 1197bd2c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1197bd33:;
  /* 1197bd33 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1197bd36 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197bd39 je 0x1197be3f */
  if (C.zf) goto L_1197be3f;
  /* 1197bd3f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1197bd42 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1197bd45 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1197bd48 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197bd4b jne 0x1197be21 */
  if (!C.zf) goto L_1197be21;
  /* 1197bd51 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197bd55 jae 0x1197bdb6 */
  if (!C.cf) goto L_1197bdb6;
  /* 1197bd57 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1197bd5c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1197bd5f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1197bd61 not edx */
  EDX = (~(EDX));
  /* 1197bd63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197bd66 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1197bd69 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1197bd6d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1197bd6f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197bd72 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1197bd75 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1197bd79 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1197bd7c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197bd7f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1197bd82 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1197bd85 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1197bd88 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197bd8b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1197bd8e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1197bd91 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197bd94 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1197bd98 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1197bd9a jne 0x1197bdb4 */
  if (!C.zf) goto L_1197bdb4;
  /* 1197bd9c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1197bda1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1197bda4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1197bda6 not edx */
  EDX = (~(EDX));
  /* 1197bda8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197bdab mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1197bdad and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1197bdaf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197bdb2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1197bdb4:;
  /* 1197bdb4 jmp 0x1197be21 */
  goto L_1197be21;
L_1197bdb6:;
  /* 1197bdb6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1197bdb9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197bdbc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1197bdc1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1197bdc3 not eax */
  EAX = (~(EAX));
  /* 1197bdc5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197bdc8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1197bdcb mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1197bdd2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1197bdd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197bdd7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1197bdda mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1197bde1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1197bde4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197bde7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1197bdea sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1197bded mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1197bdf0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197bdf3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1197bdf6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1197bdf9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197bdfc movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1197be00 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197be02 jne 0x1197be21 */
  if (!C.zf) goto L_1197be21;
  /* 1197be04 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1197be07 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197be0a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1197be0f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1197be11 not eax */
  EAX = (~(EAX));
  /* 1197be13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197be16 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1197be19 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1197be1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197be1e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1197be21:;
  /* 1197be21 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1197be24 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1197be27 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1197be2a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1197be2d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1197be30 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1197be33 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1197be36 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1197be39 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1197be3c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_1197be3f:;
  /* 1197be3f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1197be42 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_1197be45:;
  /* 1197be45 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197be48 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1197be4b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1197be4d jne 0x1197be5b */
  if (!C.zf) goto L_1197be5b;
  /* 1197be4f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1197be52 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197be55 je 0x1197bf6b */
  if (C.zf) goto L_1197bf6b;
L_1197be5b:;
  /* 1197be5b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1197be5e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197be61 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1197be64 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1197be67 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1197be6a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197be6d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1197be70 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1197be73 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1197be76 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197be79 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1197be7c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197be7f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1197be82 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1197be85 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1197be88 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1197be8b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1197be8e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1197be91 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1197be94 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1197be97 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1197be9a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197be9d jne 0x1197bf6b */
  if (!C.zf) goto L_1197bf6b;
  /* 1197bea3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197bea7 jae 0x1197bf04 */
  if (!C.cf) goto L_1197bf04;
  /* 1197bea9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1197beac add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197beaf movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1197beb3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1197beb6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197beb9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1197bebc add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1197bebf mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1197bec2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197bec5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1197bec8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197beca jne 0x1197bee2 */
  if (!C.zf) goto L_1197bee2;
  /* 1197becc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1197bed1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1197bed4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1197bed6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197bed9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1197bedb or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1197bedd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197bee0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1197bee2:;
  /* 1197bee2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1197bee7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1197beea shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1197beec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197beef mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1197bef2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1197bef6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1197bef8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197befb mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1197befe mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1197bf02 jmp 0x1197bf6b */
  goto L_1197bf6b;
L_1197bf04:;
  /* 1197bf04 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1197bf07 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197bf0a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1197bf0e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1197bf11 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197bf14 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1197bf17 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1197bf1a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1197bf1d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197bf20 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1197bf23 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197bf25 jne 0x1197bf42 */
  if (!C.zf) goto L_1197bf42;
  /* 1197bf27 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1197bf2a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197bf2d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1197bf32 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1197bf34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197bf37 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1197bf3a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1197bf3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197bf3f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1197bf42:;
  /* 1197bf42 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1197bf45 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197bf48 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1197bf4d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1197bf4f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197bf52 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1197bf55 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1197bf5c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1197bf5e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197bf61 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1197bf64 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1197bf6b:;
  /* 1197bf6b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1197bf6e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197bf71 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1197bf73 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1197bf76 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197bf79 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197bf7c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 1197bf7f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197bf82 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1197bf84 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197bf87 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197bf8a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1197bf8c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197bf8f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197bf92 jne 0x1197c0f9 */
  if (!C.zf) goto L_1197c0f9;
  /* 1197bf98 cmp dword ptr [0x119a5200], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a5200))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197bf9f je 0x1197c0e8 */
  if (C.zf) goto L_1197c0e8;
  /* 1197bfa5 mov eax, dword ptr [0x119a51f8] */
  EAX = (r32((uint32_t)(0x119a51f8)));
  /* 1197bfaa shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1197bfad mov ecx, dword ptr [0x119a5200] */
  ECX = (r32((uint32_t)(0x119a5200)));
  /* 1197bfb3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1197bfb6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197bfb8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1197bfbb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1197bfc0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1197bfc5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197bfc8 push eax */
  push32((uint32_t)(EAX));
  /* 1197bfc9 call dword ptr [0x119a6358] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6358))), 0x1197bfcfu);
  /* 1197bfcf mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1197bfd4 mov ecx, dword ptr [0x119a51f8] */
  ECX = (r32((uint32_t)(0x119a51f8)));
  /* 1197bfda shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1197bfdc mov eax, dword ptr [0x119a5200] */
  EAX = (r32((uint32_t)(0x119a5200)));
  /* 1197bfe1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1197bfe4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1197bfe6 mov edx, dword ptr [0x119a5200] */
  EDX = (r32((uint32_t)(0x119a5200)));
  /* 1197bfec mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1197bfef mov eax, dword ptr [0x119a5200] */
  EAX = (r32((uint32_t)(0x119a5200)));
  /* 1197bff4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1197bff7 mov edx, dword ptr [0x119a51f8] */
  EDX = (r32((uint32_t)(0x119a51f8)));
  /* 1197bffd mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1197c008 mov eax, dword ptr [0x119a5200] */
  EAX = (r32((uint32_t)(0x119a5200)));
  /* 1197c00d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1197c010 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1197c013 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1197c016 mov eax, dword ptr [0x119a5200] */
  EAX = (r32((uint32_t)(0x119a5200)));
  /* 1197c01b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1197c01e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1197c021 mov edx, dword ptr [0x119a5200] */
  EDX = (r32((uint32_t)(0x119a5200)));
  /* 1197c027 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1197c02a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1197c02e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1197c030 jne 0x1197c046 */
  if (!C.zf) goto L_1197c046;
  /* 1197c032 mov edx, dword ptr [0x119a5200] */
  EDX = (r32((uint32_t)(0x119a5200)));
  /* 1197c038 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1197c03b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1197c03d mov ecx, dword ptr [0x119a5200] */
  ECX = (r32((uint32_t)(0x119a5200)));
  /* 1197c043 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1197c046:;
  /* 1197c046 mov edx, dword ptr [0x119a5200] */
  EDX = (r32((uint32_t)(0x119a5200)));
  /* 1197c04c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197c050 jne 0x1197c0e8 */
  if (!C.zf) goto L_1197c0e8;
  /* 1197c056 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1197c05b push 0 */
  push32((uint32_t)(0x0u));
  /* 1197c05d mov eax, dword ptr [0x119a5200] */
  EAX = (r32((uint32_t)(0x119a5200)));
  /* 1197c062 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1197c065 push ecx */
  push32((uint32_t)(ECX));
  /* 1197c066 call dword ptr [0x119a6358] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6358))), 0x1197c06cu);
  /* 1197c06c mov edx, dword ptr [0x119a5200] */
  EDX = (r32((uint32_t)(0x119a5200)));
  /* 1197c072 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1197c075 push eax */
  push32((uint32_t)(EAX));
  /* 1197c076 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197c078 mov ecx, dword ptr [0x119a520c] */
  ECX = (r32((uint32_t)(0x119a520c)));
  /* 1197c07e push ecx */
  push32((uint32_t)(ECX));
  /* 1197c07f call dword ptr [0x119a6368] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6368))), 0x1197c085u);
  /* 1197c085 mov edx, dword ptr [0x119a5204] */
  EDX = (r32((uint32_t)(0x119a5204)));
  /* 1197c08b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1197c08e mov eax, dword ptr [0x119a5208] */
  EAX = (r32((uint32_t)(0x119a5208)));
  /* 1197c093 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c095 mov ecx, dword ptr [0x119a5200] */
  ECX = (r32((uint32_t)(0x119a5200)));
  /* 1197c09b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c09e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197c0a0 push eax */
  push32((uint32_t)(EAX));
  /* 1197c0a1 mov edx, dword ptr [0x119a5200] */
  EDX = (r32((uint32_t)(0x119a5200)));
  /* 1197c0a7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c0aa push edx */
  push32((uint32_t)(EDX));
  /* 1197c0ab mov eax, dword ptr [0x119a5200] */
  EAX = (r32((uint32_t)(0x119a5200)));
  /* 1197c0b0 push eax */
  push32((uint32_t)(EAX));
  /* 1197c0b1 call 0x1197f660 */
  push32(0x1197c0b6u); f_1197f660();
  /* 1197c0b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c0b9 mov ecx, dword ptr [0x119a5204] */
  ECX = (r32((uint32_t)(0x119a5204)));
  /* 1197c0bf sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197c0c2 mov dword ptr [0x119a5204], ecx */
  w32((uint32_t)(0x119a5204), (ECX));
  /* 1197c0c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197c0cb cmp edx, dword ptr [0x119a5200] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x119a5200))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197c0d1 jbe 0x1197c0dc */
  if ((C.cf||C.zf)) goto L_1197c0dc;
  /* 1197c0d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197c0d6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197c0d9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1197c0dc:;
  /* 1197c0dc mov ecx, dword ptr [0x119a5208] */
  ECX = (r32((uint32_t)(0x119a5208)));
  /* 1197c0e2 mov dword ptr [0x119a51fc], ecx */
  w32((uint32_t)(0x119a51fc), (ECX));
L_1197c0e8:;
  /* 1197c0e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197c0eb mov dword ptr [0x119a5200], edx */
  w32((uint32_t)(0x119a5200), (EDX));
  /* 1197c0f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197c0f4 mov dword ptr [0x119a51f8], eax */
  w32((uint32_t)(0x119a51f8), (EAX));
L_1197c0f9:;
  /* 1197c0f9 mov esp, ebp */
  ESP = (EBP);
  /* 1197c0fb pop ebp */
  EBP = (pop32());
  /* 1197c0fc ret  */
  ESPCHK(0x1197bb30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c100 @ 0x1197c100 (1334 bytes, 427 insns) */
void f_1197c100(void) {
  FTRACE(0x1197c100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197c100 push ebp */
  push32((uint32_t)(EBP));
  /* 1197c101 mov ebp, esp */
  EBP = (ESP);
  /* 1197c103 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197c106 push esi */
  push32((uint32_t)(ESI));
  /* 1197c107 mov eax, dword ptr [0x119a5204] */
  EAX = (r32((uint32_t)(0x119a5204)));
  /* 1197c10c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1197c10f mov ecx, dword ptr [0x119a5208] */
  ECX = (r32((uint32_t)(0x119a5208)));
  /* 1197c115 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c117 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1197c11a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197c11d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c120 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1197c123 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1197c126 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1197c129 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1197c12c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197c12f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1197c132 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197c136 jge 0x1197c14c */
  if ((C.sf==C.of)) goto L_1197c14c;
  /* 1197c138 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1197c13b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197c13e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1197c140 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1197c143 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 1197c14a jmp 0x1197c161 */
  goto L_1197c161;
L_1197c14c:;
  /* 1197c14c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1197c153 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197c156 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197c159 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1197c15c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1197c15e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_1197c161:;
  /* 1197c161 mov ecx, dword ptr [0x119a51fc] */
  ECX = (r32((uint32_t)(0x119a51fc)));
  /* 1197c167 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1197c16a:;
  /* 1197c16a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197c16d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197c170 jae 0x1197c196 */
  if (!C.cf) goto L_1197c196;
  /* 1197c172 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197c175 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197c178 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 1197c17a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197c17d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1197c180 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 1197c183 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1197c185 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1197c187 je 0x1197c18b */
  if (C.zf) goto L_1197c18b;
  /* 1197c189 jmp 0x1197c196 */
  goto L_1197c196;
L_1197c18b:;
  /* 1197c18b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197c18e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c191 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1197c194 jmp 0x1197c16a */
  goto L_1197c16a;
L_1197c196:;
  /* 1197c196 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197c199 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197c19c jne 0x1197c27d */
  if (!C.zf) goto L_1197c27d;
  /* 1197c1a2 mov eax, dword ptr [0x119a5208] */
  EAX = (r32((uint32_t)(0x119a5208)));
  /* 1197c1a7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1197c1aa:;
  /* 1197c1aa mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197c1ad cmp ecx, dword ptr [0x119a51fc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x119a51fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197c1b3 jae 0x1197c1d9 */
  if (!C.cf) goto L_1197c1d9;
  /* 1197c1b5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197c1b8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197c1bb and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 1197c1bd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197c1c0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1197c1c3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 1197c1c6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1197c1c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197c1ca je 0x1197c1ce */
  if (C.zf) goto L_1197c1ce;
  /* 1197c1cc jmp 0x1197c1d9 */
  goto L_1197c1d9;
L_1197c1ce:;
  /* 1197c1ce mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197c1d1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c1d4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1197c1d7 jmp 0x1197c1aa */
  goto L_1197c1aa;
L_1197c1d9:;
  /* 1197c1d9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197c1dc cmp ecx, dword ptr [0x119a51fc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x119a51fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197c1e2 jne 0x1197c27d */
  if (!C.zf) goto L_1197c27d;
L_1197c1e8:;
  /* 1197c1e8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197c1eb cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197c1ee jae 0x1197c206 */
  if (!C.cf) goto L_1197c206;
  /* 1197c1f0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197c1f3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197c1f7 je 0x1197c1fb */
  if (C.zf) goto L_1197c1fb;
  /* 1197c1f9 jmp 0x1197c206 */
  goto L_1197c206;
L_1197c1fb:;
  /* 1197c1fb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197c1fe add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c201 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1197c204 jmp 0x1197c1e8 */
  goto L_1197c1e8;
L_1197c206:;
  /* 1197c206 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197c209 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197c20c jne 0x1197c257 */
  if (!C.zf) goto L_1197c257;
  /* 1197c20e mov eax, dword ptr [0x119a5208] */
  EAX = (r32((uint32_t)(0x119a5208)));
  /* 1197c213 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1197c216:;
  /* 1197c216 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197c219 cmp ecx, dword ptr [0x119a51fc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x119a51fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197c21f jae 0x1197c237 */
  if (!C.cf) goto L_1197c237;
  /* 1197c221 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197c224 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197c228 je 0x1197c22c */
  if (C.zf) goto L_1197c22c;
  /* 1197c22a jmp 0x1197c237 */
  goto L_1197c237;
L_1197c22c:;
  /* 1197c22c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197c22f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c232 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1197c235 jmp 0x1197c216 */
  goto L_1197c216;
L_1197c237:;
  /* 1197c237 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197c23a cmp ecx, dword ptr [0x119a51fc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x119a51fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197c240 jne 0x1197c257 */
  if (!C.zf) goto L_1197c257;
  /* 1197c242 call 0x1197c640 */
  push32(0x1197c247u); f_1197c640();
  /* 1197c247 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1197c24a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197c24e jne 0x1197c257 */
  if (!C.zf) goto L_1197c257;
  /* 1197c250 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197c252 jmp 0x1197c631 */
  goto L_1197c631;
L_1197c257:;
  /* 1197c257 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197c25a push edx */
  push32((uint32_t)(EDX));
  /* 1197c25b call 0x1197c750 */
  push32(0x1197c260u); f_1197c750();
  /* 1197c260 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c263 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197c266 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1197c269 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1197c26b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197c26e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1197c271 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197c274 jne 0x1197c27d */
  if (!C.zf) goto L_1197c27d;
  /* 1197c276 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197c278 jmp 0x1197c631 */
  goto L_1197c631;
L_1197c27d:;
  /* 1197c27d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197c280 mov dword ptr [0x119a51fc], edx */
  w32((uint32_t)(0x119a51fc), (EDX));
  /* 1197c286 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197c289 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1197c28c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 1197c28f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1197c292 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1197c294 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1197c297 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197c29b je 0x1197c2c0 */
  if (C.zf) goto L_1197c2c0;
  /* 1197c29d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197c2a0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1197c2a3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197c2a6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 1197c2aa mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197c2ad mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1197c2b0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1197c2b3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1197c2ba or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1197c2bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197c2be jne 0x1197c2f5 */
  if (!C.zf) goto L_1197c2f5;
L_1197c2c0:;
  /* 1197c2c0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_1197c2c7:;
  /* 1197c2c7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197c2ca mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1197c2cd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197c2d0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1197c2d4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197c2d7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1197c2da mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1197c2dd and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1197c2e4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1197c2e6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197c2e8 jne 0x1197c2f5 */
  if (!C.zf) goto L_1197c2f5;
  /* 1197c2ea mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197c2ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c2f0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1197c2f3 jmp 0x1197c2c7 */
  goto L_1197c2c7;
L_1197c2f5:;
  /* 1197c2f5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197c2f8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1197c2fe mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1197c301 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1197c308 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1197c30b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1197c312 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197c315 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1197c318 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197c31b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1197c31f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1197c322 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197c326 jne 0x1197c342 */
  if (!C.zf) goto L_1197c342;
  /* 1197c328 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 1197c32f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197c332 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1197c335 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1197c338 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 1197c33f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_1197c342:;
  /* 1197c342 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197c346 jl 0x1197c35b */
  if ((C.sf!=C.of)) goto L_1197c35b;
  /* 1197c348 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1197c34b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1197c34d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1197c350 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197c353 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c356 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1197c359 jmp 0x1197c342 */
  goto L_1197c342;
L_1197c35b:;
  /* 1197c35b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197c35e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197c361 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 1197c365 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1197c368 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197c36b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1197c36d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197c370 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1197c373 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197c376 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1197c379 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197c37c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1197c37f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197c383 jle 0x1197c38c */
  if ((C.zf||C.sf!=C.of)) goto L_1197c38c;
  /* 1197c385 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_1197c38c:;
  /* 1197c38c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1197c38f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197c392 je 0x1197c5b0 */
  if (C.zf) goto L_1197c5b0;
  /* 1197c398 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197c39b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197c39e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1197c3a1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197c3a4 jne 0x1197c47a */
  if (!C.zf) goto L_1197c47a;
  /* 1197c3aa cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197c3ae jge 0x1197c40f */
  if ((C.sf==C.of)) goto L_1197c40f;
  /* 1197c3b0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1197c3b5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197c3b8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1197c3ba not eax */
  EAX = (~(EAX));
  /* 1197c3bc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197c3bf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1197c3c2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1197c3c6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1197c3c8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197c3cb mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1197c3ce mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1197c3d2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1197c3d5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c3d8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1197c3db sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1197c3de mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1197c3e1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c3e4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1197c3e7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1197c3ea add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c3ed movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1197c3f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197c3f3 jne 0x1197c40d */
  if (!C.zf) goto L_1197c40d;
  /* 1197c3f5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1197c3fa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197c3fd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1197c3ff not eax */
  EAX = (~(EAX));
  /* 1197c401 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197c404 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1197c406 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1197c408 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197c40b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1197c40d:;
  /* 1197c40d jmp 0x1197c47a */
  goto L_1197c47a;
L_1197c40f:;
  /* 1197c40f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197c412 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197c415 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1197c41a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1197c41c not edx */
  EDX = (~(EDX));
  /* 1197c41e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197c421 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1197c424 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1197c42b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1197c42d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197c430 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1197c433 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1197c43a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1197c43d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c440 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1197c443 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1197c446 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1197c449 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c44c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1197c44f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1197c452 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c455 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1197c459 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1197c45b jne 0x1197c47a */
  if (!C.zf) goto L_1197c47a;
  /* 1197c45d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197c460 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197c463 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1197c468 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1197c46a not edx */
  EDX = (~(EDX));
  /* 1197c46c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197c46f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1197c472 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1197c474 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197c477 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1197c47a:;
  /* 1197c47a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197c47d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1197c480 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197c483 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1197c486 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1197c489 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197c48c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1197c48f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197c492 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1197c495 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1197c498 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197c49c je 0x1197c5b0 */
  if (C.zf) goto L_1197c5b0;
  /* 1197c4a2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1197c4a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197c4a8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1197c4ab mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1197c4ae mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197c4b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197c4b4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1197c4b7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1197c4ba mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197c4bd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197c4c0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1197c4c3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197c4c6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197c4c9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1197c4cc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197c4cf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1197c4d2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197c4d5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1197c4d8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197c4db mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197c4de mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1197c4e1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197c4e4 jne 0x1197c5b0 */
  if (!C.zf) goto L_1197c5b0;
  /* 1197c4ea cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197c4ee jge 0x1197c54a */
  if ((C.sf==C.of)) goto L_1197c54a;
  /* 1197c4f0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1197c4f3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c4f6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1197c4fa mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1197c4fd add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c500 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1197c503 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1197c505 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1197c508 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c50b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1197c50e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1197c510 jne 0x1197c528 */
  if (!C.zf) goto L_1197c528;
  /* 1197c512 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1197c517 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1197c51a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1197c51c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197c51f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1197c521 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1197c523 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197c526 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1197c528:;
  /* 1197c528 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1197c52d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1197c530 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1197c532 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197c535 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1197c538 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1197c53c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1197c53e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197c541 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1197c544 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1197c548 jmp 0x1197c5b0 */
  goto L_1197c5b0;
L_1197c54a:;
  /* 1197c54a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1197c54d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c550 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1197c554 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1197c557 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c55a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1197c55d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1197c55f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1197c562 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c565 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1197c568 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1197c56a jne 0x1197c587 */
  if (!C.zf) goto L_1197c587;
  /* 1197c56c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1197c56f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197c572 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1197c577 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1197c579 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197c57c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1197c57f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1197c581 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197c584 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1197c587:;
  /* 1197c587 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1197c58a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197c58d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1197c592 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1197c594 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197c597 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1197c59a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1197c5a1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1197c5a3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197c5a6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1197c5a9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1197c5b0:;
  /* 1197c5b0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197c5b4 je 0x1197c5ca */
  if (C.zf) goto L_1197c5ca;
  /* 1197c5b6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197c5b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197c5bc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1197c5be mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197c5c1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c5c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197c5c7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1197c5ca:;
  /* 1197c5ca mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197c5cd add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c5d0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1197c5d3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1197c5d6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c5d9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197c5dc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1197c5de mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1197c5e1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c5e4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197c5e7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c5ea mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1197c5ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197c5f0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1197c5f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197c5f5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1197c5f7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c5fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197c5fd mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1197c5ff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1197c601 jne 0x1197c623 */
  if (!C.zf) goto L_1197c623;
  /* 1197c603 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197c606 cmp eax, dword ptr [0x119a5200] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119a5200))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197c60c jne 0x1197c623 */
  if (!C.zf) goto L_1197c623;
  /* 1197c60e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197c611 cmp ecx, dword ptr [0x119a51f8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x119a51f8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197c617 jne 0x1197c623 */
  if (!C.zf) goto L_1197c623;
  /* 1197c619 mov dword ptr [0x119a5200], 0 */
  w32((uint32_t)(0x119a5200), (0x0u));
L_1197c623:;
  /* 1197c623 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1197c626 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197c629 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1197c62b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197c62e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1197c631:;
  /* 1197c631 pop esi */
  ESI = (pop32());
  /* 1197c632 mov esp, ebp */
  ESP = (EBP);
  /* 1197c634 pop ebp */
  EBP = (pop32());
  /* 1197c635 ret  */
  ESPCHK(0x1197c100u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c640 @ 0x1197c640 (271 bytes, 78 insns) */
void f_1197c640(void) {
  FTRACE(0x1197c640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197c640 push ebp */
  push32((uint32_t)(EBP));
  /* 1197c641 mov ebp, esp */
  EBP = (ESP);
  /* 1197c643 push ecx */
  push32((uint32_t)(ECX));
  /* 1197c644 mov eax, dword ptr [0x119a5204] */
  EAX = (r32((uint32_t)(0x119a5204)));
  /* 1197c649 cmp eax, dword ptr [0x119a51e8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119a51e8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197c64f jne 0x1197c69b */
  if (!C.zf) goto L_1197c69b;
  /* 1197c651 mov ecx, dword ptr [0x119a51e8] */
  ECX = (r32((uint32_t)(0x119a51e8)));
  /* 1197c657 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c65a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1197c65d push ecx */
  push32((uint32_t)(ECX));
  /* 1197c65e mov edx, dword ptr [0x119a5208] */
  EDX = (r32((uint32_t)(0x119a5208)));
  /* 1197c664 push edx */
  push32((uint32_t)(EDX));
  /* 1197c665 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197c667 mov eax, dword ptr [0x119a520c] */
  EAX = (r32((uint32_t)(0x119a520c)));
  /* 1197c66c push eax */
  push32((uint32_t)(EAX));
  /* 1197c66d call dword ptr [0x119a6344] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6344))), 0x1197c673u);
  /* 1197c673 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1197c676 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197c67a jne 0x1197c683 */
  if (!C.zf) goto L_1197c683;
  /* 1197c67c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197c67e jmp 0x1197c74b */
  goto L_1197c74b;
L_1197c683:;
  /* 1197c683 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197c686 mov dword ptr [0x119a5208], ecx */
  w32((uint32_t)(0x119a5208), (ECX));
  /* 1197c68c mov edx, dword ptr [0x119a51e8] */
  EDX = (r32((uint32_t)(0x119a51e8)));
  /* 1197c692 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c695 mov dword ptr [0x119a51e8], edx */
  w32((uint32_t)(0x119a51e8), (EDX));
L_1197c69b:;
  /* 1197c69b mov eax, dword ptr [0x119a5204] */
  EAX = (r32((uint32_t)(0x119a5204)));
  /* 1197c6a0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1197c6a3 mov ecx, dword ptr [0x119a5208] */
  ECX = (r32((uint32_t)(0x119a5208)));
  /* 1197c6a9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c6ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1197c6ae push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1197c6b3 push 8 */
  push32((uint32_t)(0x8u));
  /* 1197c6b5 mov edx, dword ptr [0x119a520c] */
  EDX = (r32((uint32_t)(0x119a520c)));
  /* 1197c6bb push edx */
  push32((uint32_t)(EDX));
  /* 1197c6bc call dword ptr [0x119a633c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a633c))), 0x1197c6c2u);
  /* 1197c6c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197c6c5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 1197c6c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197c6cb cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197c6cf jne 0x1197c6d5 */
  if (!C.zf) goto L_1197c6d5;
  /* 1197c6d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197c6d3 jmp 0x1197c74b */
  goto L_1197c74b;
L_1197c6d5:;
  /* 1197c6d5 push 4 */
  push32((uint32_t)(0x4u));
  /* 1197c6d7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1197c6dc push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1197c6e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197c6e3 call dword ptr [0x119a6334] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6334))), 0x1197c6e9u);
  /* 1197c6e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197c6ec mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1197c6ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197c6f2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197c6f6 jne 0x1197c712 */
  if (!C.zf) goto L_1197c712;
  /* 1197c6f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197c6fb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1197c6fe push ecx */
  push32((uint32_t)(ECX));
  /* 1197c6ff push 0 */
  push32((uint32_t)(0x0u));
  /* 1197c701 mov edx, dword ptr [0x119a520c] */
  EDX = (r32((uint32_t)(0x119a520c)));
  /* 1197c707 push edx */
  push32((uint32_t)(EDX));
  /* 1197c708 call dword ptr [0x119a6368] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6368))), 0x1197c70eu);
  /* 1197c70e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197c710 jmp 0x1197c74b */
  goto L_1197c74b;
L_1197c712:;
  /* 1197c712 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197c715 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1197c71b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197c71e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1197c725 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197c728 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1197c72f mov eax, dword ptr [0x119a5204] */
  EAX = (r32((uint32_t)(0x119a5204)));
  /* 1197c734 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c737 mov dword ptr [0x119a5204], eax */
  w32((uint32_t)(0x119a5204), (EAX));
  /* 1197c73c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197c73f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1197c742 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 1197c748 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1197c74b:;
  /* 1197c74b mov esp, ebp */
  ESP = (EBP);
  /* 1197c74d pop ebp */
  EBP = (pop32());
  /* 1197c74e ret  */
  ESPCHK(0x1197c640u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c750 @ 0x1197c750 (494 bytes, 149 insns) */
void f_1197c750(void) {
  FTRACE(0x1197c750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197c750 push ebp */
  push32((uint32_t)(EBP));
  /* 1197c751 mov ebp, esp */
  EBP = (ESP);
  /* 1197c753 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197c756 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197c759 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1197c75c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1197c75f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197c762 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1197c765 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1197c768 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_1197c76f:;
  /* 1197c76f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197c773 jl 0x1197c788 */
  if ((C.sf!=C.of)) goto L_1197c788;
  /* 1197c775 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197c778 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1197c77a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1197c77d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1197c780 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c783 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1197c786 jmp 0x1197c76f */
  goto L_1197c76f;
L_1197c788:;
  /* 1197c788 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1197c78b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1197c791 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1197c794 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1197c79b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1197c79e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1197c7a5 jmp 0x1197c7b0 */
  goto L_1197c7b0;
L_1197c7a7:;
  /* 1197c7a7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197c7aa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c7ad mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1197c7b0:;
  /* 1197c7b0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197c7b4 jge 0x1197c7d6 */
  if ((C.sf==C.of)) goto L_1197c7d6;
  /* 1197c7b6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197c7b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197c7bc lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 1197c7bf mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1197c7c2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197c7c5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197c7c8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1197c7cb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197c7ce mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197c7d1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1197c7d4 jmp 0x1197c7a7 */
  goto L_1197c7a7;
L_1197c7d6:;
  /* 1197c7d6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1197c7d9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1197c7dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197c7df mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1197c7e2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c7e4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1197c7e7 push 4 */
  push32((uint32_t)(0x4u));
  /* 1197c7e9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1197c7ee push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1197c7f3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197c7f6 push edx */
  push32((uint32_t)(EDX));
  /* 1197c7f7 call dword ptr [0x119a6334] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6334))), 0x1197c7fdu);
  /* 1197c7fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197c7ff jne 0x1197c809 */
  if (!C.zf) goto L_1197c809;
  /* 1197c801 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1197c804 jmp 0x1197c93a */
  goto L_1197c93a;
L_1197c809:;
  /* 1197c809 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197c80c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c811 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1197c814 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197c817 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1197c81a jmp 0x1197c828 */
  goto L_1197c828;
L_1197c81c:;
  /* 1197c81c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197c81f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c825 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1197c828:;
  /* 1197c828 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197c82b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197c82e ja 0x1197c88d */
  if ((!C.cf&&!C.zf)) goto L_1197c88d;
  /* 1197c830 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197c833 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 1197c83a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197c83d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 1197c847 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197c84a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c84d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1197c850 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197c853 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1197c859 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197c85c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c862 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197c865 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1197c868 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197c86b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197c871 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197c874 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1197c877 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197c87a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c87f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1197c882 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197c885 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1197c88b jmp 0x1197c81c */
  goto L_1197c81c;
L_1197c88d:;
  /* 1197c88d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197c890 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c896 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1197c899 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197c89c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c89f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1197c8a2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1197c8a5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1197c8a8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1197c8ab mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1197c8ae mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197c8b1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1197c8b4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1197c8b7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1197c8ba add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c8bd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1197c8c0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1197c8c3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1197c8c6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1197c8c9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1197c8cc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197c8cf mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1197c8d2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1197c8d5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1197c8d8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1197c8db mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 1197c8e3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1197c8e6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1197c8e9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 1197c8f4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1197c8f7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 1197c8fb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1197c8fe mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 1197c901 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1197c904 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1197c907 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 1197c90a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197c90c jne 0x1197c91d */
  if (!C.zf) goto L_1197c91d;
  /* 1197c90e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197c911 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1197c914 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1197c917 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197c91a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1197c91d:;
  /* 1197c91d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1197c922 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1197c925 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1197c927 not edx */
  EDX = (~(EDX));
  /* 1197c929 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197c92c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1197c92f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1197c931 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197c934 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1197c937 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_1197c93a:;
  /* 1197c93a mov esp, ebp */
  ESP = (EBP);
  /* 1197c93c pop ebp */
  EBP = (pop32());
  /* 1197c93d ret  */
  ESPCHK(0x1197c750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c940 @ 0x1197c940 (1515 bytes, 489 insns) */
void f_1197c940(void) {
  FTRACE(0x1197c940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197c940 push ebp */
  push32((uint32_t)(EBP));
  /* 1197c941 mov ebp, esp */
  EBP = (ESP);
  /* 1197c943 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197c946 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1197c949 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c94c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1197c94e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1197c951 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197c954 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1197c957 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1197c95a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197c95d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197c960 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197c963 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1197c966 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197c969 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1197c96c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1197c96f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197c972 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1197c978 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197c97b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1197c982 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1197c985 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197c988 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197c98b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1197c98e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1197c991 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1197c993 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197c996 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1197c999 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1197c99c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c99f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1197c9a2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1197c9a5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1197c9a7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1197c9aa mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1197c9ad cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197c9b0 jle 0x1197cc66 */
  if ((C.zf||C.sf!=C.of)) goto L_1197cc66;
  /* 1197c9b6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197c9b9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1197c9bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1197c9be jne 0x1197c9cb */
  if (!C.zf) goto L_1197c9cb;
  /* 1197c9c0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1197c9c3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197c9c6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197c9c9 jle 0x1197c9d2 */
  if ((C.zf||C.sf!=C.of)) goto L_1197c9d2;
L_1197c9cb:;
  /* 1197c9cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197c9cd jmp 0x1197cf27 */
  goto L_1197cf27;
L_1197c9d2:;
  /* 1197c9d2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197c9d5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1197c9d8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197c9db mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1197c9de cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197c9e2 jbe 0x1197c9eb */
  if ((C.cf||C.zf)) goto L_1197c9eb;
  /* 1197c9e4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1197c9eb:;
  /* 1197c9eb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1197c9ee mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1197c9f1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1197c9f4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197c9f7 jne 0x1197cacd */
  if (!C.zf) goto L_1197cacd;
  /* 1197c9fd cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197ca01 jae 0x1197ca62 */
  if (!C.cf) goto L_1197ca62;
  /* 1197ca03 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1197ca08 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197ca0b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1197ca0d not edx */
  EDX = (~(EDX));
  /* 1197ca0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197ca12 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197ca15 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1197ca19 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1197ca1b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197ca1e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197ca21 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1197ca25 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197ca28 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197ca2b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1197ca2e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1197ca31 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197ca34 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197ca37 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1197ca3a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197ca3d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197ca40 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1197ca44 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1197ca46 jne 0x1197ca60 */
  if (!C.zf) goto L_1197ca60;
  /* 1197ca48 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1197ca4d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197ca50 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1197ca52 not edx */
  EDX = (~(EDX));
  /* 1197ca54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197ca57 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1197ca59 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1197ca5b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197ca5e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1197ca60:;
  /* 1197ca60 jmp 0x1197cacd */
  goto L_1197cacd;
L_1197ca62:;
  /* 1197ca62 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197ca65 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197ca68 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1197ca6d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1197ca6f not eax */
  EAX = (~(EAX));
  /* 1197ca71 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197ca74 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197ca77 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1197ca7e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1197ca80 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197ca83 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197ca86 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1197ca8d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197ca90 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197ca93 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1197ca96 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1197ca99 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197ca9c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197ca9f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1197caa2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197caa5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197caa8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1197caac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197caae jne 0x1197cacd */
  if (!C.zf) goto L_1197cacd;
  /* 1197cab0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197cab3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197cab6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1197cabb shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1197cabd not eax */
  EAX = (~(EAX));
  /* 1197cabf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197cac2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1197cac5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1197cac7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197caca mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1197cacd:;
  /* 1197cacd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1197cad0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1197cad3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1197cad6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1197cad9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1197cadc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1197cadf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1197cae2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1197cae5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1197cae8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1197caeb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1197caee add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197caf1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197caf4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1197caf7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197cafb jle 0x1197cc47 */
  if ((C.zf||C.sf!=C.of)) goto L_1197cc47;
  /* 1197cb01 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1197cb04 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197cb07 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1197cb0a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197cb0d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1197cb10 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197cb13 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1197cb16 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197cb1a jbe 0x1197cb23 */
  if ((C.cf||C.zf)) goto L_1197cb23;
  /* 1197cb1c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1197cb23:;
  /* 1197cb23 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197cb26 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197cb29 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1197cb2c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1197cb2f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1197cb32 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197cb35 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1197cb38 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1197cb3b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1197cb3e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197cb41 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1197cb44 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197cb47 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1197cb4a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1197cb4d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1197cb50 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1197cb53 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1197cb56 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1197cb59 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1197cb5c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1197cb5f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1197cb62 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197cb65 jne 0x1197cc33 */
  if (!C.zf) goto L_1197cc33;
  /* 1197cb6b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197cb6f jae 0x1197cbcc */
  if (!C.cf) goto L_1197cbcc;
  /* 1197cb71 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197cb74 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197cb77 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1197cb7b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197cb7e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197cb81 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1197cb84 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1197cb87 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197cb8a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197cb8d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1197cb90 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197cb92 jne 0x1197cbaa */
  if (!C.zf) goto L_1197cbaa;
  /* 1197cb94 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1197cb99 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197cb9c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1197cb9e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197cba1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1197cba3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1197cba5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197cba8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1197cbaa:;
  /* 1197cbaa mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1197cbaf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197cbb2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1197cbb4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197cbb7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197cbba mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1197cbbe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1197cbc0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197cbc3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197cbc6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1197cbca jmp 0x1197cc33 */
  goto L_1197cc33;
L_1197cbcc:;
  /* 1197cbcc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197cbcf add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197cbd2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1197cbd6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197cbd9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197cbdc mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1197cbdf add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1197cbe2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197cbe5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197cbe8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1197cbeb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197cbed jne 0x1197cc0a */
  if (!C.zf) goto L_1197cc0a;
  /* 1197cbef mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197cbf2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197cbf5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1197cbfa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1197cbfc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197cbff mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1197cc02 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1197cc04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197cc07 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1197cc0a:;
  /* 1197cc0a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197cc0d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197cc10 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1197cc15 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1197cc17 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197cc1a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197cc1d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1197cc24 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1197cc26 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197cc29 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197cc2c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1197cc33:;
  /* 1197cc33 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1197cc36 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197cc39 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1197cc3b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1197cc3e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197cc41 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197cc44 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_1197cc47:;
  /* 1197cc47 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1197cc4a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197cc4d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1197cc50 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1197cc52 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1197cc55 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197cc58 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1197cc5b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197cc5e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1197cc61 jmp 0x1197cf22 */
  goto L_1197cf22;
L_1197cc66:;
  /* 1197cc66 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1197cc69 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197cc6c jge 0x1197cf22 */
  if ((C.sf==C.of)) goto L_1197cf22;
  /* 1197cc72 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1197cc75 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197cc78 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1197cc7b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1197cc7d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1197cc80 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197cc83 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1197cc86 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197cc89 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 1197cc8c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1197cc8f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197cc92 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1197cc95 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1197cc98 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197cc9b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1197cc9e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1197cca1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1197cca4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197cca7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1197ccaa cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197ccae jbe 0x1197ccb7 */
  if ((C.cf||C.zf)) goto L_1197ccb7;
  /* 1197ccb0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1197ccb7:;
  /* 1197ccb7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197ccba and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1197ccbd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197ccbf jne 0x1197ce00 */
  if (!C.zf) goto L_1197ce00;
  /* 1197ccc5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197ccc8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1197cccb sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197ccce mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1197ccd1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197ccd5 jbe 0x1197ccde */
  if ((C.cf||C.zf)) goto L_1197ccde;
  /* 1197ccd7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1197ccde:;
  /* 1197ccde mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1197cce1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1197cce4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1197cce7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197ccea jne 0x1197cdc0 */
  if (!C.zf) goto L_1197cdc0;
  /* 1197ccf0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197ccf4 jae 0x1197cd55 */
  if (!C.cf) goto L_1197cd55;
  /* 1197ccf6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1197ccfb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197ccfe shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1197cd00 not edx */
  EDX = (~(EDX));
  /* 1197cd02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197cd05 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197cd08 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1197cd0c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1197cd0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197cd11 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197cd14 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1197cd18 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197cd1b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197cd1e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1197cd21 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1197cd24 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197cd27 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197cd2a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1197cd2d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197cd30 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197cd33 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1197cd37 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1197cd39 jne 0x1197cd53 */
  if (!C.zf) goto L_1197cd53;
  /* 1197cd3b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1197cd40 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197cd43 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1197cd45 not edx */
  EDX = (~(EDX));
  /* 1197cd47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197cd4a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1197cd4c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1197cd4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197cd51 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1197cd53:;
  /* 1197cd53 jmp 0x1197cdc0 */
  goto L_1197cdc0;
L_1197cd55:;
  /* 1197cd55 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197cd58 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197cd5b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1197cd60 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1197cd62 not eax */
  EAX = (~(EAX));
  /* 1197cd64 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197cd67 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197cd6a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1197cd71 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1197cd73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197cd76 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197cd79 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1197cd80 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197cd83 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197cd86 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1197cd89 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1197cd8c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197cd8f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197cd92 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1197cd95 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197cd98 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197cd9b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1197cd9f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197cda1 jne 0x1197cdc0 */
  if (!C.zf) goto L_1197cdc0;
  /* 1197cda3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197cda6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197cda9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1197cdae shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1197cdb0 not eax */
  EAX = (~(EAX));
  /* 1197cdb2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197cdb5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1197cdb8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1197cdba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197cdbd mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1197cdc0:;
  /* 1197cdc0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1197cdc3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1197cdc6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1197cdc9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1197cdcc mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1197cdcf mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1197cdd2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1197cdd5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1197cdd8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1197cddb mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1197cdde mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1197cde1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197cde4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1197cde7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1197cdea sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1197cded sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197cdf0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1197cdf3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197cdf7 jbe 0x1197ce00 */
  if ((C.cf||C.zf)) goto L_1197ce00;
  /* 1197cdf9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1197ce00:;
  /* 1197ce00 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197ce03 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197ce06 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1197ce09 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1197ce0c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1197ce0f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197ce12 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1197ce15 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1197ce18 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1197ce1b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197ce1e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1197ce21 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197ce24 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1197ce27 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1197ce2a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1197ce2d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1197ce30 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1197ce33 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1197ce36 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1197ce39 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1197ce3c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1197ce3f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197ce42 jne 0x1197cf0e */
  if (!C.zf) goto L_1197cf0e;
  /* 1197ce48 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197ce4c jae 0x1197cea8 */
  if (!C.cf) goto L_1197cea8;
  /* 1197ce4e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197ce51 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197ce54 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1197ce58 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197ce5b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197ce5e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1197ce61 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1197ce63 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197ce66 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197ce69 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1197ce6c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1197ce6e jne 0x1197ce86 */
  if (!C.zf) goto L_1197ce86;
  /* 1197ce70 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1197ce75 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197ce78 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1197ce7a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197ce7d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1197ce7f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1197ce81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197ce84 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1197ce86:;
  /* 1197ce86 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1197ce8b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197ce8e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1197ce90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197ce93 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197ce96 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1197ce9a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1197ce9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197ce9f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197cea2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1197cea6 jmp 0x1197cf0e */
  goto L_1197cf0e;
L_1197cea8:;
  /* 1197cea8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197ceab add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197ceae movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1197ceb2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197ceb5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197ceb8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1197cebb add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1197cebd mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197cec0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197cec3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1197cec6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1197cec8 jne 0x1197cee5 */
  if (!C.zf) goto L_1197cee5;
  /* 1197ceca mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197cecd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197ced0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1197ced5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1197ced7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197ceda mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1197cedd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1197cedf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197cee2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1197cee5:;
  /* 1197cee5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197cee8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197ceeb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1197cef0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1197cef2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197cef5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197cef8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1197ceff or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1197cf01 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197cf04 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197cf07 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1197cf0e:;
  /* 1197cf0e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1197cf11 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1197cf14 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1197cf16 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1197cf19 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197cf1c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1197cf1f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1197cf22:;
  /* 1197cf22 mov eax, 1 */
  EAX = (0x1u);
L_1197cf27:;
  /* 1197cf27 mov esp, ebp */
  ESP = (EBP);
  /* 1197cf29 pop ebp */
  EBP = (pop32());
  /* 1197cf2a ret  */
  ESPCHK(0x1197c940u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf30 @ 0x1197cf30 (304 bytes, 79 insns) */
void f_1197cf30(void) {
  FTRACE(0x1197cf30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197cf30 push ebp */
  push32((uint32_t)(EBP));
  /* 1197cf31 mov ebp, esp */
  EBP = (ESP);
  /* 1197cf33 push ecx */
  push32((uint32_t)(ECX));
  /* 1197cf34 cmp dword ptr [0x119a5200], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a5200))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197cf3b je 0x1197d05c */
  if (C.zf) goto L_1197d05c;
  /* 1197cf41 mov eax, dword ptr [0x119a51f8] */
  EAX = (r32((uint32_t)(0x119a51f8)));
  /* 1197cf46 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1197cf49 mov ecx, dword ptr [0x119a5200] */
  ECX = (r32((uint32_t)(0x119a5200)));
  /* 1197cf4f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1197cf52 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197cf54 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1197cf57 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1197cf5c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1197cf61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197cf64 push eax */
  push32((uint32_t)(EAX));
  /* 1197cf65 call dword ptr [0x119a6358] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6358))), 0x1197cf6bu);
  /* 1197cf6b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1197cf70 mov ecx, dword ptr [0x119a51f8] */
  ECX = (r32((uint32_t)(0x119a51f8)));
  /* 1197cf76 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1197cf78 mov eax, dword ptr [0x119a5200] */
  EAX = (r32((uint32_t)(0x119a5200)));
  /* 1197cf7d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1197cf80 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1197cf82 mov edx, dword ptr [0x119a5200] */
  EDX = (r32((uint32_t)(0x119a5200)));
  /* 1197cf88 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1197cf8b mov eax, dword ptr [0x119a5200] */
  EAX = (r32((uint32_t)(0x119a5200)));
  /* 1197cf90 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1197cf93 mov edx, dword ptr [0x119a51f8] */
  EDX = (r32((uint32_t)(0x119a51f8)));
  /* 1197cf99 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1197cfa4 mov eax, dword ptr [0x119a5200] */
  EAX = (r32((uint32_t)(0x119a5200)));
  /* 1197cfa9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1197cfac mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1197cfaf sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1197cfb2 mov eax, dword ptr [0x119a5200] */
  EAX = (r32((uint32_t)(0x119a5200)));
  /* 1197cfb7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1197cfba mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1197cfbd mov edx, dword ptr [0x119a5200] */
  EDX = (r32((uint32_t)(0x119a5200)));
  /* 1197cfc3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1197cfc6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1197cfca test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1197cfcc jne 0x1197cfe2 */
  if (!C.zf) goto L_1197cfe2;
  /* 1197cfce mov edx, dword ptr [0x119a5200] */
  EDX = (r32((uint32_t)(0x119a5200)));
  /* 1197cfd4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1197cfd7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1197cfd9 mov ecx, dword ptr [0x119a5200] */
  ECX = (r32((uint32_t)(0x119a5200)));
  /* 1197cfdf mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1197cfe2:;
  /* 1197cfe2 mov edx, dword ptr [0x119a5200] */
  EDX = (r32((uint32_t)(0x119a5200)));
  /* 1197cfe8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197cfec jne 0x1197d052 */
  if (!C.zf) goto L_1197d052;
  /* 1197cfee cmp dword ptr [0x119a5204], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119a5204))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197cff5 jle 0x1197d052 */
  if ((C.zf||C.sf!=C.of)) goto L_1197d052;
  /* 1197cff7 mov eax, dword ptr [0x119a5200] */
  EAX = (r32((uint32_t)(0x119a5200)));
  /* 1197cffc mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1197cfff push ecx */
  push32((uint32_t)(ECX));
  /* 1197d000 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197d002 mov edx, dword ptr [0x119a520c] */
  EDX = (r32((uint32_t)(0x119a520c)));
  /* 1197d008 push edx */
  push32((uint32_t)(EDX));
  /* 1197d009 call dword ptr [0x119a6368] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6368))), 0x1197d00fu);
  /* 1197d00f mov eax, dword ptr [0x119a5204] */
  EAX = (r32((uint32_t)(0x119a5204)));
  /* 1197d014 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1197d017 mov ecx, dword ptr [0x119a5208] */
  ECX = (r32((uint32_t)(0x119a5208)));
  /* 1197d01d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197d01f mov edx, dword ptr [0x119a5200] */
  EDX = (r32((uint32_t)(0x119a5200)));
  /* 1197d025 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197d028 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197d02a push ecx */
  push32((uint32_t)(ECX));
  /* 1197d02b mov eax, dword ptr [0x119a5200] */
  EAX = (r32((uint32_t)(0x119a5200)));
  /* 1197d030 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197d033 push eax */
  push32((uint32_t)(EAX));
  /* 1197d034 mov ecx, dword ptr [0x119a5200] */
  ECX = (r32((uint32_t)(0x119a5200)));
  /* 1197d03a push ecx */
  push32((uint32_t)(ECX));
  /* 1197d03b call 0x1197f660 */
  push32(0x1197d040u); f_1197f660();
  /* 1197d040 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197d043 mov edx, dword ptr [0x119a5204] */
  EDX = (r32((uint32_t)(0x119a5204)));
  /* 1197d049 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197d04c mov dword ptr [0x119a5204], edx */
  w32((uint32_t)(0x119a5204), (EDX));
L_1197d052:;
  /* 1197d052 mov dword ptr [0x119a5200], 0 */
  w32((uint32_t)(0x119a5200), (0x0u));
L_1197d05c:;
  /* 1197d05c mov esp, ebp */
  ESP = (EBP);
  /* 1197d05e pop ebp */
  EBP = (pop32());
  /* 1197d05f ret  */
  ESPCHK(0x1197cf30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d060 @ 0x1197d060 (1565 bytes, 343 insns) */
void f_1197d060(void) {
  FTRACE(0x1197d060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197d060 push ebp */
  push32((uint32_t)(EBP));
  /* 1197d061 mov ebp, esp */
  EBP = (ESP);
  /* 1197d063 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197d069 mov eax, dword ptr [0x119a5204] */
  EAX = (r32((uint32_t)(0x119a5204)));
  /* 1197d06e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1197d071 push eax */
  push32((uint32_t)(EAX));
  /* 1197d072 mov ecx, dword ptr [0x119a5208] */
  ECX = (r32((uint32_t)(0x119a5208)));
  /* 1197d078 push ecx */
  push32((uint32_t)(ECX));
  /* 1197d079 call dword ptr [0x119a6384] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6384))), 0x1197d07fu);
  /* 1197d07f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197d081 je 0x1197d08b */
  if (C.zf) goto L_1197d08b;
  /* 1197d083 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1197d086 jmp 0x1197d679 */
  goto L_1197d679;
L_1197d08b:;
  /* 1197d08b mov edx, dword ptr [0x119a5208] */
  EDX = (r32((uint32_t)(0x119a5208)));
  /* 1197d091 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 1197d097 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 1197d0a1 jmp 0x1197d0b2 */
  goto L_1197d0b2;
L_1197d0a3:;
  /* 1197d0a3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 1197d0a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197d0ac mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_1197d0b2:;
  /* 1197d0b2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 1197d0b8 cmp ecx, dword ptr [0x119a5204] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x119a5204))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d0be jge 0x1197d677 */
  if ((C.sf==C.of)) goto L_1197d677;
  /* 1197d0c4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1197d0ca mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1197d0cd mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 1197d0d3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1197d0d8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1197d0de push ecx */
  push32((uint32_t)(ECX));
  /* 1197d0df call dword ptr [0x119a6384] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6384))), 0x1197d0e5u);
  /* 1197d0e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197d0e7 je 0x1197d0f3 */
  if (C.zf) goto L_1197d0f3;
  /* 1197d0e9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1197d0ee jmp 0x1197d679 */
  goto L_1197d679;
L_1197d0f3:;
  /* 1197d0f3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1197d0f9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1197d0fc mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 1197d102 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1197d108 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197d10e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1197d111 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1197d117 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1197d11a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1197d11d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 1197d127 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 1197d131 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1197d138 jmp 0x1197d143 */
  goto L_1197d143;
L_1197d13a:;
  /* 1197d13a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197d13d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197d140 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1197d143:;
  /* 1197d143 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d147 jge 0x1197d63b */
  if ((C.sf==C.of)) goto L_1197d63b;
  /* 1197d14d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 1197d157 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 1197d161 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 1197d16b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 1197d175 jmp 0x1197d186 */
  goto L_1197d186;
L_1197d177:;
  /* 1197d177 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1197d17d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197d180 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_1197d186:;
  /* 1197d186 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d18d jge 0x1197d1a2 */
  if ((C.sf==C.of)) goto L_1197d1a2;
  /* 1197d18f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1197d195 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 1197d1a0 jmp 0x1197d177 */
  goto L_1197d177;
L_1197d1a2:;
  /* 1197d1a2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d1a6 jl 0x1197d5dd */
  if ((C.sf!=C.of)) goto L_1197d5dd;
  /* 1197d1ac push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1197d1b1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 1197d1b7 push ecx */
  push32((uint32_t)(ECX));
  /* 1197d1b8 call dword ptr [0x119a6384] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6384))), 0x1197d1beu);
  /* 1197d1be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197d1c0 je 0x1197d1cc */
  if (C.zf) goto L_1197d1cc;
  /* 1197d1c2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 1197d1c7 jmp 0x1197d679 */
  goto L_1197d679;
L_1197d1cc:;
  /* 1197d1cc mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1197d1d2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1197d1d5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1197d1df jmp 0x1197d1f0 */
  goto L_1197d1f0;
L_1197d1e1:;
  /* 1197d1e1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 1197d1e7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197d1ea mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_1197d1f0:;
  /* 1197d1f0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d1f7 jge 0x1197d374 */
  if ((C.sf==C.of)) goto L_1197d374;
  /* 1197d1fd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197d200 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197d203 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 1197d209 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1197d20f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197d215 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 1197d21b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1197d221 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d225 jne 0x1197d232 */
  if (!C.zf) goto L_1197d232;
  /* 1197d227 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 1197d22d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d230 je 0x1197d23c */
  if (C.zf) goto L_1197d23c;
L_1197d232:;
  /* 1197d232 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 1197d237 jmp 0x1197d679 */
  goto L_1197d679;
L_1197d23c:;
  /* 1197d23c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1197d242 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1197d244 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1197d24a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 1197d250 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 1197d256 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 1197d25c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1197d25f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197d261 je 0x1197d299 */
  if (C.zf) goto L_1197d299;
  /* 1197d263 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1197d269 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197d26c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1197d272 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d27c jle 0x1197d288 */
  if ((C.zf||C.sf!=C.of)) goto L_1197d288;
  /* 1197d27e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 1197d283 jmp 0x1197d679 */
  goto L_1197d679;
L_1197d288:;
  /* 1197d288 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1197d28e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197d291 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 1197d297 jmp 0x1197d2db */
  goto L_1197d2db;
L_1197d299:;
  /* 1197d299 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1197d29f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1197d2a2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197d2a5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1197d2ab cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d2b2 jle 0x1197d2be */
  if ((C.zf||C.sf!=C.of)) goto L_1197d2be;
  /* 1197d2b4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1197d2be:;
  /* 1197d2be mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1197d2c4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1197d2cb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197d2ce mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1197d2d4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1197d2db:;
  /* 1197d2db cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d2e2 jl 0x1197d2fd */
  if ((C.sf!=C.of)) goto L_1197d2fd;
  /* 1197d2e4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1197d2ea and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1197d2ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197d2ef jne 0x1197d2fd */
  if (!C.zf) goto L_1197d2fd;
  /* 1197d2f1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d2fb jle 0x1197d307 */
  if ((C.zf||C.sf!=C.of)) goto L_1197d307;
L_1197d2fd:;
  /* 1197d2fd mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 1197d302 jmp 0x1197d679 */
  goto L_1197d679;
L_1197d307:;
  /* 1197d307 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1197d30d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197d313 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1197d316 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d31c je 0x1197d328 */
  if (C.zf) goto L_1197d328;
  /* 1197d31e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1197d323 jmp 0x1197d679 */
  goto L_1197d679;
L_1197d328:;
  /* 1197d328 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1197d32e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197d334 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1197d33a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1197d340 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d346 jb 0x1197d23c */
  if (C.cf) goto L_1197d23c;
  /* 1197d34c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1197d352 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d358 je 0x1197d364 */
  if (C.zf) goto L_1197d364;
  /* 1197d35a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1197d35f jmp 0x1197d679 */
  goto L_1197d679;
L_1197d364:;
  /* 1197d364 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197d367 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197d36c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1197d36f jmp 0x1197d1e1 */
  goto L_1197d1e1;
L_1197d374:;
  /* 1197d374 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197d377 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1197d379 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d37f je 0x1197d38b */
  if (C.zf) goto L_1197d38b;
  /* 1197d381 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 1197d386 jmp 0x1197d679 */
  goto L_1197d679;
L_1197d38b:;
  /* 1197d38b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197d38e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 1197d394 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1197d39b jmp 0x1197d3a6 */
  goto L_1197d3a6;
L_1197d39d:;
  /* 1197d39d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1197d3a0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197d3a3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1197d3a6:;
  /* 1197d3a6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d3aa jge 0x1197d5dd */
  if ((C.sf==C.of)) goto L_1197d5dd;
  /* 1197d3b0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1197d3ba mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1197d3c0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_1197d3c6:;
  /* 1197d3c6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1197d3cc mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1197d3cf mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 1197d3d5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1197d3db cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d3e1 je 0x1197d50a */
  if (C.zf) goto L_1197d50a;
  /* 1197d3e7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1197d3ea mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1197d3f0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d3f7 je 0x1197d50a */
  if (C.zf) goto L_1197d50a;
  /* 1197d3fd mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1197d403 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d409 jb 0x1197d41e */
  if (C.cf) goto L_1197d41e;
  /* 1197d40b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 1197d411 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197d416 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d41c jb 0x1197d428 */
  if (C.cf) goto L_1197d428;
L_1197d41e:;
  /* 1197d41e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 1197d423 jmp 0x1197d679 */
  goto L_1197d679;
L_1197d428:;
  /* 1197d428 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1197d42e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 1197d434 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1197d43a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 1197d440 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197d443 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1197d446 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197d449 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197d44e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_1197d454:;
  /* 1197d454 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197d457 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d45d je 0x1197d47e */
  if (C.zf) goto L_1197d47e;
  /* 1197d45f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197d462 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d468 jne 0x1197d46c */
  if (!C.zf) goto L_1197d46c;
  /* 1197d46a jmp 0x1197d47e */
  goto L_1197d47e;
L_1197d46c:;
  /* 1197d46c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197d46f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1197d471 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 1197d474 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197d477 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197d479 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1197d47c jmp 0x1197d454 */
  goto L_1197d454;
L_1197d47e:;
  /* 1197d47e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197d481 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d487 jne 0x1197d493 */
  if (!C.zf) goto L_1197d493;
  /* 1197d489 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1197d48e jmp 0x1197d679 */
  goto L_1197d679;
L_1197d493:;
  /* 1197d493 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1197d499 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1197d49b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1197d49e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197d4a1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1197d4a7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d4ae jle 0x1197d4ba */
  if ((C.zf||C.sf!=C.of)) goto L_1197d4ba;
  /* 1197d4b0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1197d4ba:;
  /* 1197d4ba mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1197d4c0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d4c3 je 0x1197d4cf */
  if (C.zf) goto L_1197d4cf;
  /* 1197d4c5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1197d4ca jmp 0x1197d679 */
  goto L_1197d679;
L_1197d4cf:;
  /* 1197d4cf mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1197d4d5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1197d4d8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d4de je 0x1197d4ea */
  if (C.zf) goto L_1197d4ea;
  /* 1197d4e0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 1197d4e5 jmp 0x1197d679 */
  goto L_1197d679;
L_1197d4ea:;
  /* 1197d4ea mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1197d4f0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1197d4f6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1197d4fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197d4ff mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 1197d505 jmp 0x1197d3c6 */
  goto L_1197d3c6;
L_1197d50a:;
  /* 1197d50a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d511 je 0x1197d581 */
  if (C.zf) goto L_1197d581;
  /* 1197d513 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d517 jge 0x1197d54b */
  if ((C.sf==C.of)) goto L_1197d54b;
  /* 1197d519 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1197d51e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1197d521 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1197d523 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1197d529 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1197d52b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 1197d531 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1197d536 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1197d539 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1197d53b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1197d541 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1197d543 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 1197d549 jmp 0x1197d581 */
  goto L_1197d581;
L_1197d54b:;
  /* 1197d54b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1197d54e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197d551 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1197d556 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1197d558 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1197d55e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1197d560 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 1197d566 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1197d569 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197d56c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1197d571 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1197d573 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 1197d579 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1197d57b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_1197d581:;
  /* 1197d581 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1197d587 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1197d58a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d590 jne 0x1197d5a4 */
  if (!C.zf) goto L_1197d5a4;
  /* 1197d592 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1197d595 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1197d59b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d5a2 je 0x1197d5ae */
  if (C.zf) goto L_1197d5ae;
L_1197d5a4:;
  /* 1197d5a4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 1197d5a9 jmp 0x1197d679 */
  goto L_1197d679;
L_1197d5ae:;
  /* 1197d5ae mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1197d5b4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1197d5b7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d5bd je 0x1197d5c9 */
  if (C.zf) goto L_1197d5c9;
  /* 1197d5bf mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 1197d5c4 jmp 0x1197d679 */
  goto L_1197d679;
L_1197d5c9:;
  /* 1197d5c9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1197d5cf add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197d5d2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 1197d5d8 jmp 0x1197d39d */
  goto L_1197d39d;
L_1197d5dd:;
  /* 1197d5dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197d5e0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1197d5e6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1197d5ec cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d5f0 jne 0x1197d60a */
  if (!C.zf) goto L_1197d60a;
  /* 1197d5f2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197d5f5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1197d5fb mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 1197d601 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d608 je 0x1197d611 */
  if (C.zf) goto L_1197d611;
L_1197d60a:;
  /* 1197d60a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1197d60f jmp 0x1197d679 */
  goto L_1197d679;
L_1197d611:;
  /* 1197d611 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1197d617 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197d61d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 1197d623 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197d626 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197d62b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1197d62e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197d631 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1197d633 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1197d636 jmp 0x1197d13a */
  goto L_1197d13a;
L_1197d63b:;
  /* 1197d63b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1197d641 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1197d647 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d649 jne 0x1197d65c */
  if (!C.zf) goto L_1197d65c;
  /* 1197d64b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1197d651 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 1197d657 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d65a je 0x1197d663 */
  if (C.zf) goto L_1197d663;
L_1197d65c:;
  /* 1197d65c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 1197d661 jmp 0x1197d679 */
  goto L_1197d679;
L_1197d663:;
  /* 1197d663 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1197d669 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197d66c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 1197d672 jmp 0x1197d0a3 */
  goto L_1197d0a3;
L_1197d677:;
  /* 1197d677 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1197d679:;
  /* 1197d679 mov esp, ebp */
  ESP = (EBP);
  /* 1197d67b pop ebp */
  EBP = (pop32());
  /* 1197d67c ret  */
  ESPCHK(0x1197d060u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d680 @ 0x1197d680 (250 bytes, 92 insns) */
void f_1197d680(void) {
  FTRACE(0x1197d680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197d680 push ebp */
  push32((uint32_t)(EBP));
  /* 1197d681 mov ebp, esp */
  EBP = (ESP);
  /* 1197d683 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197d686 push ebx */
  push32((uint32_t)(EBX));
  /* 1197d687 push esi */
  push32((uint32_t)(ESI));
  /* 1197d688 push edi */
  push32((uint32_t)(EDI));
  /* 1197d689 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1197d68c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1197d68f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1197d692 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1197d695:;
  /* 1197d695 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d699 jne 0x1197d6b9 */
  if (!C.zf) goto L_1197d6b9;
  /* 1197d69b push 0x1199fafc */
  push32((uint32_t)(0x1199fafcu));
  /* 1197d6a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197d6a2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1197d6a4 push 0x1199faf0 */
  push32((uint32_t)(0x1199faf0u));
  /* 1197d6a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1197d6ab call 0x11976830 */
  push32(0x1197d6b0u); f_11976830();
  /* 1197d6b0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197d6b3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d6b6 jne 0x1197d6b9 */
  if (!C.zf) goto L_1197d6b9;
  /* 1197d6b8 int3  */
  x86_unimpl("int3 @ 0x1197d6b8");
L_1197d6b9:;
  /* 1197d6b9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1197d6bb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197d6bd jne 0x1197d695 */
  if (!C.zf) goto L_1197d695;
L_1197d6bf:;
  /* 1197d6bf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d6c3 jne 0x1197d6e3 */
  if (!C.zf) goto L_1197d6e3;
  /* 1197d6c5 push 0x1199fae0 */
  push32((uint32_t)(0x1199fae0u));
  /* 1197d6ca push 0 */
  push32((uint32_t)(0x0u));
  /* 1197d6cc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1197d6ce push 0x1199faf0 */
  push32((uint32_t)(0x1199faf0u));
  /* 1197d6d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1197d6d5 call 0x11976830 */
  push32(0x1197d6dau); f_11976830();
  /* 1197d6da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197d6dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d6e0 jne 0x1197d6e3 */
  if (!C.zf) goto L_1197d6e3;
  /* 1197d6e2 int3  */
  x86_unimpl("int3 @ 0x1197d6e2");
L_1197d6e3:;
  /* 1197d6e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197d6e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197d6e7 jne 0x1197d6bf */
  if (!C.zf) goto L_1197d6bf;
  /* 1197d6e9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197d6ec mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 1197d6f3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197d6f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197d6f9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1197d6fc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197d6ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197d702 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1197d704 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197d707 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 1197d70e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1197d711 push ecx */
  push32((uint32_t)(ECX));
  /* 1197d712 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197d715 push edx */
  push32((uint32_t)(EDX));
  /* 1197d716 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197d719 push eax */
  push32((uint32_t)(EAX));
  /* 1197d71a call 0x1197e700 */
  push32(0x1197d71fu); f_1197e700();
  /* 1197d71f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197d722 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1197d725 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197d728 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1197d72b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197d72e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197d731 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1197d734 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197d737 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d73b jl 0x1197d75f */
  if ((C.sf!=C.of)) goto L_1197d75f;
  /* 1197d73d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197d740 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1197d742 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1197d745 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1197d747 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1197d74d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1197d750 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197d753 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1197d755 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197d758 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197d75b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1197d75d jmp 0x1197d770 */
  goto L_1197d770;
L_1197d75f:;
  /* 1197d75f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197d762 push edx */
  push32((uint32_t)(EDX));
  /* 1197d763 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197d765 call 0x1197e480 */
  push32(0x1197d76au); f_1197e480();
  /* 1197d76a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197d76d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1197d770:;
  /* 1197d770 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1197d773 pop edi */
  EDI = (pop32());
  /* 1197d774 pop esi */
  ESI = (pop32());
  /* 1197d775 pop ebx */
  EBX = (pop32());
  /* 1197d776 mov esp, ebp */
  ESP = (EBP);
  /* 1197d778 pop ebp */
  EBP = (pop32());
  /* 1197d779 ret  */
  ESPCHK(0x1197d680u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d780 @ 0x1197d780 (183 bytes, 58 insns) */
void f_1197d780(void) {
  FTRACE(0x1197d780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197d780 push ebp */
  push32((uint32_t)(EBP));
  /* 1197d781 mov ebp, esp */
  EBP = (ESP);
  /* 1197d783 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197d786 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197d789 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197d78c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d791 ja 0x1197d7aa */
  if ((!C.cf&&!C.zf)) goto L_1197d7aa;
  /* 1197d793 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197d796 mov edx, dword ptr [0x119a1c98] */
  EDX = (r32((uint32_t)(0x119a1c98)));
  /* 1197d79c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197d79e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1197d7a2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1197d7a5 jmp 0x1197d833 */
  goto L_1197d833;
L_1197d7aa:;
  /* 1197d7aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197d7ad sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1197d7b0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1197d7b6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1197d7bc mov edx, dword ptr [0x119a1c98] */
  EDX = (r32((uint32_t)(0x119a1c98)));
  /* 1197d7c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197d7c4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1197d7c8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1197d7cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197d7cf je 0x1197d7f3 */
  if (C.zf) goto L_1197d7f3;
  /* 1197d7d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197d7d4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1197d7d7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1197d7dd mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1197d7e0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 1197d7e3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 1197d7e6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1197d7ea mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 1197d7f1 jmp 0x1197d804 */
  goto L_1197d804;
L_1197d7f3:;
  /* 1197d7f3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1197d7f6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1197d7f9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1197d7fd mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_1197d804:;
  /* 1197d804 push 1 */
  push32((uint32_t)(0x1u));
  /* 1197d806 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197d808 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197d80a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1197d80d push ecx */
  push32((uint32_t)(ECX));
  /* 1197d80e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197d811 push edx */
  push32((uint32_t)(EDX));
  /* 1197d812 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1197d815 push eax */
  push32((uint32_t)(EAX));
  /* 1197d816 push 1 */
  push32((uint32_t)(0x1u));
  /* 1197d818 call 0x1197f9a0 */
  push32(0x1197d81du); f_1197f9a0();
  /* 1197d81d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197d820 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197d822 jne 0x1197d828 */
  if (!C.zf) goto L_1197d828;
  /* 1197d824 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197d826 jmp 0x1197d833 */
  goto L_1197d833;
L_1197d828:;
  /* 1197d828 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197d82b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1197d830 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_1197d833:;
  /* 1197d833 mov esp, ebp */
  ESP = (EBP);
  /* 1197d835 pop ebp */
  EBP = (pop32());
  /* 1197d836 ret  */
  ESPCHK(0x1197d780u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d840 @ 0x1197d840 (836 bytes, 238 insns) */
void f_1197d840(void) {
  FTRACE(0x1197d840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197d840 push ebp */
  push32((uint32_t)(EBP));
  /* 1197d841 mov ebp, esp */
  EBP = (ESP);
  /* 1197d843 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197d846 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1197d848 call 0x1197b170 */
  push32(0x1197d84du); f_1197b170();
  /* 1197d84d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197d850 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197d853 push eax */
  push32((uint32_t)(EAX));
  /* 1197d854 call 0x1197db90 */
  push32(0x1197d859u); f_1197db90();
  /* 1197d859 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197d85c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1197d85f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197d862 cmp ecx, dword ptr [0x119a4f44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x119a4f44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d868 jne 0x1197d87b */
  if (!C.zf) goto L_1197d87b;
  /* 1197d86a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1197d86c call 0x1197b210 */
  push32(0x1197d871u); f_1197b210();
  /* 1197d871 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197d874 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197d876 jmp 0x1197db80 */
  goto L_1197db80;
L_1197d87b:;
  /* 1197d87b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d87f jne 0x1197d89c */
  if (!C.zf) goto L_1197d89c;
  /* 1197d881 call 0x1197dc70 */
  push32(0x1197d886u); f_1197dc70();
  /* 1197d886 call 0x1197dcf0 */
  push32(0x1197d88bu); f_1197dcf0();
  /* 1197d88b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1197d88d call 0x1197b210 */
  push32(0x1197d892u); f_1197b210();
  /* 1197d892 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197d895 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197d897 jmp 0x1197db80 */
  goto L_1197db80;
L_1197d89c:;
  /* 1197d89c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1197d8a3 jmp 0x1197d8ae */
  goto L_1197d8ae;
L_1197d8a5:;
  /* 1197d8a5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197d8a8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197d8ab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1197d8ae:;
  /* 1197d8ae cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d8b2 jae 0x1197d9ff */
  if (!C.cf) goto L_1197d9ff;
  /* 1197d8b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197d8bb imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1197d8be mov ecx, dword ptr [eax + 0x119a1eb8] */
  ECX = (r32((uint32_t)(EAX + 0x119a1eb8)));
  /* 1197d8c4 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d8c7 jne 0x1197d9fa */
  if (!C.zf) goto L_1197d9fa;
  /* 1197d8cd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1197d8d4 jmp 0x1197d8df */
  goto L_1197d8df;
L_1197d8d6:;
  /* 1197d8d6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197d8d9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197d8dc mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1197d8df:;
  /* 1197d8df cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d8e6 jae 0x1197d8f4 */
  if (!C.cf) goto L_1197d8f4;
  /* 1197d8e8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197d8eb mov byte ptr [eax + 0x119a50e0], 0 */
  w8((uint32_t)(EAX + 0x119a50e0), (0x0u));
  /* 1197d8f2 jmp 0x1197d8d6 */
  goto L_1197d8d6;
L_1197d8f4:;
  /* 1197d8f4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1197d8fb jmp 0x1197d906 */
  goto L_1197d906;
L_1197d8fd:;
  /* 1197d8fd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197d900 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197d903 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1197d906:;
  /* 1197d906 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d90a jae 0x1197d987 */
  if (!C.cf) goto L_1197d987;
  /* 1197d90c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197d90f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1197d912 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197d915 lea ecx, [edx + eax*8 + 0x119a1ec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x119a1ec8));
  /* 1197d91c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1197d91f jmp 0x1197d92a */
  goto L_1197d92a;
L_1197d921:;
  /* 1197d921 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197d924 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197d927 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1197d92a:;
  /* 1197d92a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197d92d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1197d92f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1197d931 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1197d933 je 0x1197d982 */
  if (C.zf) goto L_1197d982;
  /* 1197d935 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197d938 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197d93a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1197d93d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197d93f je 0x1197d982 */
  if (C.zf) goto L_1197d982;
  /* 1197d941 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197d944 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1197d946 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1197d948 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1197d94b jmp 0x1197d956 */
  goto L_1197d956;
L_1197d94d:;
  /* 1197d94d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197d950 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197d953 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1197d956:;
  /* 1197d956 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197d959 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1197d95b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1197d95e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d961 ja 0x1197d980 */
  if ((!C.cf&&!C.zf)) goto L_1197d980;
  /* 1197d963 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197d966 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197d969 mov dl, byte ptr [eax + 0x119a50e1] */
  DL = (r8((uint32_t)(EAX + 0x119a50e1)));
  /* 1197d96f or dl, byte ptr [ecx + 0x119a1eb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x119a1eb0))); DL = (_r); fl_logic(_r,8); }
  /* 1197d975 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197d978 mov byte ptr [eax + 0x119a50e1], dl */
  w8((uint32_t)(EAX + 0x119a50e1), (DL));
  /* 1197d97e jmp 0x1197d94d */
  goto L_1197d94d;
L_1197d980:;
  /* 1197d980 jmp 0x1197d921 */
  goto L_1197d921;
L_1197d982:;
  /* 1197d982 jmp 0x1197d8fd */
  goto L_1197d8fd;
L_1197d987:;
  /* 1197d987 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197d98a mov dword ptr [0x119a4f44], ecx */
  w32((uint32_t)(0x119a4f44), (ECX));
  /* 1197d990 mov dword ptr [0x119a4fcc], 1 */
  w32((uint32_t)(0x119a4fcc), (0x1u));
  /* 1197d99a mov edx, dword ptr [0x119a4f44] */
  EDX = (r32((uint32_t)(0x119a4f44)));
  /* 1197d9a0 push edx */
  push32((uint32_t)(EDX));
  /* 1197d9a1 call 0x1197dbf0 */
  push32(0x1197d9a6u); f_1197dbf0();
  /* 1197d9a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197d9a9 mov dword ptr [0x119a51e4], eax */
  w32((uint32_t)(0x119a51e4), (EAX));
  /* 1197d9ae mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1197d9b5 jmp 0x1197d9c0 */
  goto L_1197d9c0;
L_1197d9b7:;
  /* 1197d9b7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197d9ba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197d9bd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1197d9c0:;
  /* 1197d9c0 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197d9c4 jae 0x1197d9e4 */
  if (!C.cf) goto L_1197d9e4;
  /* 1197d9c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197d9c9 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1197d9cc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197d9cf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197d9d2 mov cx, word ptr [ecx + eax*2 + 0x119a1ebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x119a1ebc)));
  /* 1197d9da mov word ptr [edx*2 + 0x119a4fc0], cx */
  w16((uint32_t)(EDX*2 + 0x119a4fc0), (CX));
  /* 1197d9e2 jmp 0x1197d9b7 */
  goto L_1197d9b7;
L_1197d9e4:;
  /* 1197d9e4 call 0x1197dcf0 */
  push32(0x1197d9e9u); f_1197dcf0();
  /* 1197d9e9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1197d9eb call 0x1197b210 */
  push32(0x1197d9f0u); f_1197b210();
  /* 1197d9f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197d9f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197d9f5 jmp 0x1197db80 */
  goto L_1197db80;
L_1197d9fa:;
  /* 1197d9fa jmp 0x1197d8a5 */
  goto L_1197d8a5;
L_1197d9ff:;
  /* 1197d9ff lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 1197da02 push edx */
  push32((uint32_t)(EDX));
  /* 1197da03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197da06 push eax */
  push32((uint32_t)(EAX));
  /* 1197da07 call dword ptr [0x119a6330] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6330))), 0x1197da0du);
  /* 1197da0d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197da10 jne 0x1197db52 */
  if (!C.zf) goto L_1197db52;
  /* 1197da16 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1197da1d jmp 0x1197da28 */
  goto L_1197da28;
L_1197da1f:;
  /* 1197da1f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197da22 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197da25 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1197da28:;
  /* 1197da28 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197da2f jae 0x1197da3d */
  if (!C.cf) goto L_1197da3d;
  /* 1197da31 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197da34 mov byte ptr [edx + 0x119a50e0], 0 */
  w8((uint32_t)(EDX + 0x119a50e0), (0x0u));
  /* 1197da3b jmp 0x1197da1f */
  goto L_1197da1f;
L_1197da3d:;
  /* 1197da3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197da40 mov dword ptr [0x119a4f44], eax */
  w32((uint32_t)(0x119a4f44), (EAX));
  /* 1197da45 mov dword ptr [0x119a51e4], 0 */
  w32((uint32_t)(0x119a51e4), (0x0u));
  /* 1197da4f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197da53 jbe 0x1197db0e */
  if ((C.cf||C.zf)) goto L_1197db0e;
  /* 1197da59 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 1197da5c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1197da5f jmp 0x1197da6a */
  goto L_1197da6a;
L_1197da61:;
  /* 1197da61 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1197da64 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197da67 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1197da6a:;
  /* 1197da6a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1197da6d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1197da6f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1197da71 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1197da73 je 0x1197dabc */
  if (C.zf) goto L_1197dabc;
  /* 1197da75 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1197da78 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197da7a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1197da7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197da7f je 0x1197dabc */
  if (C.zf) goto L_1197dabc;
  /* 1197da81 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1197da84 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1197da86 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1197da88 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1197da8b jmp 0x1197da96 */
  goto L_1197da96;
L_1197da8d:;
  /* 1197da8d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197da90 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197da93 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1197da96:;
  /* 1197da96 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1197da99 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1197da9b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1197da9e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197daa1 ja 0x1197daba */
  if ((!C.cf&&!C.zf)) goto L_1197daba;
  /* 1197daa3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197daa6 mov cl, byte ptr [eax + 0x119a50e1] */
  CL = (r8((uint32_t)(EAX + 0x119a50e1)));
  /* 1197daac or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1197daaf mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197dab2 mov byte ptr [edx + 0x119a50e1], cl */
  w8((uint32_t)(EDX + 0x119a50e1), (CL));
  /* 1197dab8 jmp 0x1197da8d */
  goto L_1197da8d;
L_1197daba:;
  /* 1197daba jmp 0x1197da61 */
  goto L_1197da61;
L_1197dabc:;
  /* 1197dabc mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1197dac3 jmp 0x1197dace */
  goto L_1197dace;
L_1197dac5:;
  /* 1197dac5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197dac8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197dacb mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1197dace:;
  /* 1197dace cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197dad5 jae 0x1197daee */
  if (!C.cf) goto L_1197daee;
  /* 1197dad7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197dada mov dl, byte ptr [ecx + 0x119a50e1] */
  DL = (r8((uint32_t)(ECX + 0x119a50e1)));
  /* 1197dae0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1197dae3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197dae6 mov byte ptr [eax + 0x119a50e1], dl */
  w8((uint32_t)(EAX + 0x119a50e1), (DL));
  /* 1197daec jmp 0x1197dac5 */
  goto L_1197dac5;
L_1197daee:;
  /* 1197daee mov ecx, dword ptr [0x119a4f44] */
  ECX = (r32((uint32_t)(0x119a4f44)));
  /* 1197daf4 push ecx */
  push32((uint32_t)(ECX));
  /* 1197daf5 call 0x1197dbf0 */
  push32(0x1197dafau); f_1197dbf0();
  /* 1197dafa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197dafd mov dword ptr [0x119a51e4], eax */
  w32((uint32_t)(0x119a51e4), (EAX));
  /* 1197db02 mov dword ptr [0x119a4fcc], 1 */
  w32((uint32_t)(0x119a4fcc), (0x1u));
  /* 1197db0c jmp 0x1197db18 */
  goto L_1197db18;
L_1197db0e:;
  /* 1197db0e mov dword ptr [0x119a4fcc], 0 */
  w32((uint32_t)(0x119a4fcc), (0x0u));
L_1197db18:;
  /* 1197db18 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1197db1f jmp 0x1197db2a */
  goto L_1197db2a;
L_1197db21:;
  /* 1197db21 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197db24 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197db27 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1197db2a:;
  /* 1197db2a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197db2e jae 0x1197db3f */
  if (!C.cf) goto L_1197db3f;
  /* 1197db30 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197db33 mov word ptr [eax*2 + 0x119a4fc0], 0 */
  w16((uint32_t)(EAX*2 + 0x119a4fc0), (0x0u));
  /* 1197db3d jmp 0x1197db21 */
  goto L_1197db21;
L_1197db3f:;
  /* 1197db3f call 0x1197dcf0 */
  push32(0x1197db44u); f_1197dcf0();
  /* 1197db44 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1197db46 call 0x1197b210 */
  push32(0x1197db4bu); f_1197b210();
  /* 1197db4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197db4e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197db50 jmp 0x1197db80 */
  goto L_1197db80;
L_1197db52:;
  /* 1197db52 cmp dword ptr [0x119a3a60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3a60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197db59 je 0x1197db73 */
  if (C.zf) goto L_1197db73;
  /* 1197db5b call 0x1197dc70 */
  push32(0x1197db60u); f_1197dc70();
  /* 1197db60 call 0x1197dcf0 */
  push32(0x1197db65u); f_1197dcf0();
  /* 1197db65 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1197db67 call 0x1197b210 */
  push32(0x1197db6cu); f_1197b210();
  /* 1197db6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197db6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197db71 jmp 0x1197db80 */
  goto L_1197db80;
L_1197db73:;
  /* 1197db73 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1197db75 call 0x1197b210 */
  push32(0x1197db7au); f_1197b210();
  /* 1197db7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197db7d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1197db80:;
  /* 1197db80 mov esp, ebp */
  ESP = (EBP);
  /* 1197db82 pop ebp */
  EBP = (pop32());
  /* 1197db83 ret  */
  ESPCHK(0x1197d840u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x1197db90 (89 bytes, 21 insns) */
void f_1197db90(void) {
  FTRACE(0x1197db90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197db90 push ebp */
  push32((uint32_t)(EBP));
  /* 1197db91 mov ebp, esp */
  EBP = (ESP);
  /* 1197db93 mov dword ptr [0x119a3a60], 0 */
  w32((uint32_t)(0x119a3a60), (0x0u));
  /* 1197db9d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197dba1 jne 0x1197dbb5 */
  if (!C.zf) goto L_1197dbb5;
  /* 1197dba3 mov dword ptr [0x119a3a60], 1 */
  w32((uint32_t)(0x119a3a60), (0x1u));
  /* 1197dbad call dword ptr [0x119a6328] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6328))), 0x1197dbb3u);
  /* 1197dbb3 jmp 0x1197dbe7 */
  goto L_1197dbe7;
L_1197dbb5:;
  /* 1197dbb5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197dbb9 jne 0x1197dbcd */
  if (!C.zf) goto L_1197dbcd;
  /* 1197dbbb mov dword ptr [0x119a3a60], 1 */
  w32((uint32_t)(0x119a3a60), (0x1u));
  /* 1197dbc5 call dword ptr [0x119a6338] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6338))), 0x1197dbcbu);
  /* 1197dbcb jmp 0x1197dbe7 */
  goto L_1197dbe7;
L_1197dbcd:;
  /* 1197dbcd cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197dbd1 jne 0x1197dbe4 */
  if (!C.zf) goto L_1197dbe4;
  /* 1197dbd3 mov dword ptr [0x119a3a60], 1 */
  w32((uint32_t)(0x119a3a60), (0x1u));
  /* 1197dbdd mov eax, dword ptr [0x119a3a80] */
  EAX = (r32((uint32_t)(0x119a3a80)));
  /* 1197dbe2 jmp 0x1197dbe7 */
  goto L_1197dbe7;
L_1197dbe4:;
  /* 1197dbe4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1197dbe7:;
  /* 1197dbe7 pop ebp */
  EBP = (pop32());
  /* 1197dbe8 ret  */
  ESPCHK(0x1197db90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dbf0 @ 0x1197dbf0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_1197dbf0(void) {
  FTRACE(0x1197dbf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197dbf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1197dbf1 mov ebp, esp */
  EBP = (ESP);
  /* 1197dbf3 push ecx */
  push32((uint32_t)(ECX));
  /* 1197dbf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197dbf7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1197dbfa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197dbfd sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197dc03 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1197dc06 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197dc0a ja 0x1197dc3a */
  if ((!C.cf&&!C.zf)) goto L_1197dc3a;
  /* 1197dc0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197dc0f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1197dc11 mov dl, byte ptr [eax + 0x1197dc54] */
  DL = (r8((uint32_t)(EAX + 0x1197dc54)));
  /* 1197dc17 jmp dword ptr [edx*4 + 0x1197dc40] */
  switch (EDX) {
    case 0: goto L_1197dc1e;
    case 1: goto L_1197dc25;
    case 2: goto L_1197dc2c;
    case 3: goto L_1197dc33;
    case 4: goto L_1197dc3a;
    default: x86_unimpl("switch@0x1197dc17 out of table"); return;
  }
L_1197dc1e:;
  /* 1197dc1e mov eax, 0x411 */
  EAX = (0x411u);
  /* 1197dc23 jmp 0x1197dc3c */
  goto L_1197dc3c;
L_1197dc25:;
  /* 1197dc25 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1197dc2a jmp 0x1197dc3c */
  goto L_1197dc3c;
L_1197dc2c:;
  /* 1197dc2c mov eax, 0x412 */
  EAX = (0x412u);
  /* 1197dc31 jmp 0x1197dc3c */
  goto L_1197dc3c;
L_1197dc33:;
  /* 1197dc33 mov eax, 0x404 */
  EAX = (0x404u);
  /* 1197dc38 jmp 0x1197dc3c */
  goto L_1197dc3c;
L_1197dc3a:;
  /* 1197dc3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1197dc3c:;
  /* 1197dc3c mov esp, ebp */
  ESP = (EBP);
  /* 1197dc3e pop ebp */
  EBP = (pop32());
  /* 1197dc3f ret  */
  ESPCHK(0x1197dbf0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x1197dc70 (116 bytes, 29 insns) */
void f_1197dc70(void) {
  FTRACE(0x1197dc70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197dc70 push ebp */
  push32((uint32_t)(EBP));
  /* 1197dc71 mov ebp, esp */
  EBP = (ESP);
  /* 1197dc73 push ecx */
  push32((uint32_t)(ECX));
  /* 1197dc74 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1197dc7b jmp 0x1197dc86 */
  goto L_1197dc86;
L_1197dc7d:;
  /* 1197dc7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197dc80 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197dc83 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1197dc86:;
  /* 1197dc86 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197dc8d jge 0x1197dc9b */
  if ((C.sf==C.of)) goto L_1197dc9b;
  /* 1197dc8f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197dc92 mov byte ptr [ecx + 0x119a50e0], 0 */
  w8((uint32_t)(ECX + 0x119a50e0), (0x0u));
  /* 1197dc99 jmp 0x1197dc7d */
  goto L_1197dc7d;
L_1197dc9b:;
  /* 1197dc9b mov dword ptr [0x119a4f44], 0 */
  w32((uint32_t)(0x119a4f44), (0x0u));
  /* 1197dca5 mov dword ptr [0x119a4fcc], 0 */
  w32((uint32_t)(0x119a4fcc), (0x0u));
  /* 1197dcaf mov dword ptr [0x119a51e4], 0 */
  w32((uint32_t)(0x119a51e4), (0x0u));
  /* 1197dcb9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1197dcc0 jmp 0x1197dccb */
  goto L_1197dccb;
L_1197dcc2:;
  /* 1197dcc2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197dcc5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197dcc8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1197dccb:;
  /* 1197dccb cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197dccf jge 0x1197dce0 */
  if ((C.sf==C.of)) goto L_1197dce0;
  /* 1197dcd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197dcd4 mov word ptr [eax*2 + 0x119a4fc0], 0 */
  w16((uint32_t)(EAX*2 + 0x119a4fc0), (0x0u));
  /* 1197dcde jmp 0x1197dcc2 */
  goto L_1197dcc2;
L_1197dce0:;
  /* 1197dce0 mov esp, ebp */
  ESP = (EBP);
  /* 1197dce2 pop ebp */
  EBP = (pop32());
  /* 1197dce3 ret  */
  ESPCHK(0x1197dc70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dcf0 @ 0x1197dcf0 (770 bytes, 175 insns) */
void f_1197dcf0(void) {
  FTRACE(0x1197dcf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197dcf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1197dcf1 mov ebp, esp */
  EBP = (ESP);
  /* 1197dcf3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197dcf9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1197dcff push eax */
  push32((uint32_t)(EAX));
  /* 1197dd00 mov ecx, dword ptr [0x119a4f44] */
  ECX = (r32((uint32_t)(0x119a4f44)));
  /* 1197dd06 push ecx */
  push32((uint32_t)(ECX));
  /* 1197dd07 call dword ptr [0x119a6330] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6330))), 0x1197dd0du);
  /* 1197dd0d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197dd10 jne 0x1197df29 */
  if (!C.zf) goto L_1197df29;
  /* 1197dd16 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1197dd20 jmp 0x1197dd31 */
  goto L_1197dd31;
L_1197dd22:;
  /* 1197dd22 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1197dd28 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197dd2b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1197dd31:;
  /* 1197dd31 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197dd3b jae 0x1197dd52 */
  if (!C.cf) goto L_1197dd52;
  /* 1197dd3d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1197dd43 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 1197dd49 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 1197dd50 jmp 0x1197dd22 */
  goto L_1197dd22;
L_1197dd52:;
  /* 1197dd52 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 1197dd59 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1197dd5f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1197dd62 jmp 0x1197dd6d */
  goto L_1197dd6d;
L_1197dd64:;
  /* 1197dd64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197dd67 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197dd6a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1197dd6d:;
  /* 1197dd6d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197dd70 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1197dd72 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1197dd74 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197dd76 je 0x1197ddb8 */
  if (C.zf) goto L_1197ddb8;
  /* 1197dd78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197dd7b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1197dd7d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1197dd7f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 1197dd85 jmp 0x1197dd96 */
  goto L_1197dd96;
L_1197dd87:;
  /* 1197dd87 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1197dd8d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197dd90 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1197dd96:;
  /* 1197dd96 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197dd99 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1197dd9b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1197dd9e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197dda4 ja 0x1197ddb6 */
  if ((!C.cf&&!C.zf)) goto L_1197ddb6;
  /* 1197dda6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1197ddac mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 1197ddb4 jmp 0x1197dd87 */
  goto L_1197dd87;
L_1197ddb6:;
  /* 1197ddb6 jmp 0x1197dd64 */
  goto L_1197dd64;
L_1197ddb8:;
  /* 1197ddb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197ddba mov eax, dword ptr [0x119a51e4] */
  EAX = (r32((uint32_t)(0x119a51e4)));
  /* 1197ddbf push eax */
  push32((uint32_t)(EAX));
  /* 1197ddc0 mov ecx, dword ptr [0x119a4f44] */
  ECX = (r32((uint32_t)(0x119a4f44)));
  /* 1197ddc6 push ecx */
  push32((uint32_t)(ECX));
  /* 1197ddc7 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1197ddcd push edx */
  push32((uint32_t)(EDX));
  /* 1197ddce push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1197ddd3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1197ddd9 push eax */
  push32((uint32_t)(EAX));
  /* 1197ddda push 1 */
  push32((uint32_t)(0x1u));
  /* 1197dddc call 0x1197f9a0 */
  push32(0x1197dde1u); f_1197f9a0();
  /* 1197dde1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197dde4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197dde6 mov ecx, dword ptr [0x119a4f44] */
  ECX = (r32((uint32_t)(0x119a4f44)));
  /* 1197ddec push ecx */
  push32((uint32_t)(ECX));
  /* 1197dded push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1197ddf2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1197ddf8 push edx */
  push32((uint32_t)(EDX));
  /* 1197ddf9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1197ddfe lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1197de04 push eax */
  push32((uint32_t)(EAX));
  /* 1197de05 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1197de0a mov ecx, dword ptr [0x119a51e4] */
  ECX = (r32((uint32_t)(0x119a51e4)));
  /* 1197de10 push ecx */
  push32((uint32_t)(ECX));
  /* 1197de11 call 0x1197fb60 */
  push32(0x1197de16u); f_1197fb60();
  /* 1197de16 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197de19 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197de1b mov edx, dword ptr [0x119a4f44] */
  EDX = (r32((uint32_t)(0x119a4f44)));
  /* 1197de21 push edx */
  push32((uint32_t)(EDX));
  /* 1197de22 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1197de27 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 1197de2d push eax */
  push32((uint32_t)(EAX));
  /* 1197de2e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1197de33 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 1197de39 push ecx */
  push32((uint32_t)(ECX));
  /* 1197de3a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1197de3f mov edx, dword ptr [0x119a51e4] */
  EDX = (r32((uint32_t)(0x119a51e4)));
  /* 1197de45 push edx */
  push32((uint32_t)(EDX));
  /* 1197de46 call 0x1197fb60 */
  push32(0x1197de4bu); f_1197fb60();
  /* 1197de4b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197de4e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1197de58 jmp 0x1197de69 */
  goto L_1197de69;
L_1197de5a:;
  /* 1197de5a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1197de60 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197de63 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1197de69:;
  /* 1197de69 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197de73 jae 0x1197df24 */
  if (!C.cf) goto L_1197df24;
  /* 1197de79 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1197de7f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1197de81 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 1197de89 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1197de8c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197de8e je 0x1197dec6 */
  if (C.zf) goto L_1197dec6;
  /* 1197de90 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1197de96 mov cl, byte ptr [eax + 0x119a50e1] */
  CL = (r8((uint32_t)(EAX + 0x119a50e1)));
  /* 1197de9c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1197de9f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1197dea5 mov byte ptr [edx + 0x119a50e1], cl */
  w8((uint32_t)(EDX + 0x119a50e1), (CL));
  /* 1197deab mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1197deb1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1197deb7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1197debe mov byte ptr [eax + 0x119a4fe0], dl */
  w8((uint32_t)(EAX + 0x119a4fe0), (DL));
  /* 1197dec4 jmp 0x1197df1f */
  goto L_1197df1f;
L_1197dec6:;
  /* 1197dec6 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1197decc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1197dece mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 1197ded6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1197ded9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1197dedb je 0x1197df12 */
  if (C.zf) goto L_1197df12;
  /* 1197dedd mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1197dee3 mov al, byte ptr [edx + 0x119a50e1] */
  AL = (r8((uint32_t)(EDX + 0x119a50e1)));
  /* 1197dee9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1197deeb mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1197def1 mov byte ptr [ecx + 0x119a50e1], al */
  w8((uint32_t)(ECX + 0x119a50e1), (AL));
  /* 1197def7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1197defd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1197df03 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 1197df0a mov byte ptr [edx + 0x119a4fe0], cl */
  w8((uint32_t)(EDX + 0x119a4fe0), (CL));
  /* 1197df10 jmp 0x1197df1f */
  goto L_1197df1f;
L_1197df12:;
  /* 1197df12 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1197df18 mov byte ptr [edx + 0x119a4fe0], 0 */
  w8((uint32_t)(EDX + 0x119a4fe0), (0x0u));
L_1197df1f:;
  /* 1197df1f jmp 0x1197de5a */
  goto L_1197de5a;
L_1197df24:;
  /* 1197df24 jmp 0x1197dfee */
  goto L_1197dfee;
L_1197df29:;
  /* 1197df29 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1197df33 jmp 0x1197df44 */
  goto L_1197df44;
L_1197df35:;
  /* 1197df35 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1197df3b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197df3e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1197df44:;
  /* 1197df44 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197df4e jae 0x1197dfee */
  if (!C.cf) goto L_1197dfee;
  /* 1197df54 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197df5b jb 0x1197df98 */
  if (C.cf) goto L_1197df98;
  /* 1197df5d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197df64 ja 0x1197df98 */
  if ((!C.cf&&!C.zf)) goto L_1197df98;
  /* 1197df66 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1197df6c mov dl, byte ptr [ecx + 0x119a50e1] */
  DL = (r8((uint32_t)(ECX + 0x119a50e1)));
  /* 1197df72 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1197df75 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1197df7b mov byte ptr [eax + 0x119a50e1], dl */
  w8((uint32_t)(EAX + 0x119a50e1), (DL));
  /* 1197df81 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1197df87 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197df8a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1197df90 mov byte ptr [edx + 0x119a4fe0], cl */
  w8((uint32_t)(EDX + 0x119a4fe0), (CL));
  /* 1197df96 jmp 0x1197dfe9 */
  goto L_1197dfe9;
L_1197df98:;
  /* 1197df98 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197df9f jb 0x1197dfdc */
  if (C.cf) goto L_1197dfdc;
  /* 1197dfa1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197dfa8 ja 0x1197dfdc */
  if ((!C.cf&&!C.zf)) goto L_1197dfdc;
  /* 1197dfaa mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1197dfb0 mov cl, byte ptr [eax + 0x119a50e1] */
  CL = (r8((uint32_t)(EAX + 0x119a50e1)));
  /* 1197dfb6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1197dfb9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1197dfbf mov byte ptr [edx + 0x119a50e1], cl */
  w8((uint32_t)(EDX + 0x119a50e1), (CL));
  /* 1197dfc5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1197dfcb sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197dfce mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1197dfd4 mov byte ptr [ecx + 0x119a4fe0], al */
  w8((uint32_t)(ECX + 0x119a4fe0), (AL));
  /* 1197dfda jmp 0x1197dfe9 */
  goto L_1197dfe9;
L_1197dfdc:;
  /* 1197dfdc mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1197dfe2 mov byte ptr [edx + 0x119a4fe0], 0 */
  w8((uint32_t)(EDX + 0x119a4fe0), (0x0u));
L_1197dfe9:;
  /* 1197dfe9 jmp 0x1197df35 */
  goto L_1197df35;
L_1197dfee:;
  /* 1197dfee mov esp, ebp */
  ESP = (EBP);
  /* 1197dff0 pop ebp */
  EBP = (pop32());
  /* 1197dff1 ret  */
  ESPCHK(0x1197dcf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e000 @ 0x1197e000 (23 bytes, 9 insns) */
void f_1197e000(void) {
  FTRACE(0x1197e000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197e000 push ebp */
  push32((uint32_t)(EBP));
  /* 1197e001 mov ebp, esp */
  EBP = (ESP);
  /* 1197e003 cmp dword ptr [0x119a4fcc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a4fcc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197e00a je 0x1197e013 */
  if (C.zf) goto L_1197e013;
  /* 1197e00c mov eax, dword ptr [0x119a4f44] */
  EAX = (r32((uint32_t)(0x119a4f44)));
  /* 1197e011 jmp 0x1197e015 */
  goto L_1197e015;
L_1197e013:;
  /* 1197e013 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1197e015:;
  /* 1197e015 pop ebp */
  EBP = (pop32());
  /* 1197e016 ret  */
  ESPCHK(0x1197e000u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e020 @ 0x1197e020 (34 bytes, 10 insns) */
void f_1197e020(void) {
  FTRACE(0x1197e020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197e020 push ebp */
  push32((uint32_t)(EBP));
  /* 1197e021 mov ebp, esp */
  EBP = (ESP);
  /* 1197e023 cmp dword ptr [0x119a5390], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a5390))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197e02a jne 0x1197e040 */
  if (!C.zf) goto L_1197e040;
  /* 1197e02c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1197e02e call 0x1197d840 */
  push32(0x1197e033u); f_1197d840();
  /* 1197e033 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197e036 mov dword ptr [0x119a5390], 1 */
  w32((uint32_t)(0x119a5390), (0x1u));
L_1197e040:;
  /* 1197e040 pop ebp */
  EBP = (pop32());
  /* 1197e041 ret  */
  ESPCHK(0x1197e020u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e050 @ 0x1197e050 (664 bytes, 265 insns) [15 switch table(s)] */
void f_1197e050(void) {
  FTRACE(0x1197e050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197e050 push ebp */
  push32((uint32_t)(EBP));
  /* 1197e051 mov ebp, esp */
  EBP = (ESP);
  /* 1197e053 push edi */
  push32((uint32_t)(EDI));
  /* 1197e054 push esi */
  push32((uint32_t)(ESI));
  /* 1197e055 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1197e058 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1197e05b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1197e05e mov eax, ecx */
  EAX = (ECX);
  /* 1197e060 mov edx, ecx */
  EDX = (ECX);
  /* 1197e062 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197e064 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197e066 jbe 0x1197e070 */
  if ((C.cf||C.zf)) goto L_1197e070;
  /* 1197e068 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197e06a jb 0x1197e1e8 */
  if (C.cf) goto L_1197e1e8;
L_1197e070:;
  /* 1197e070 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1197e076 jne 0x1197e08c */
  if (!C.zf) goto L_1197e08c;
  /* 1197e078 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1197e07b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1197e07e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197e081 jb 0x1197e0ac */
  if (C.cf) goto L_1197e0ac;
  /* 1197e083 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1197e085 jmp dword ptr [edx*4 + 0x1197e198] */
  switch (EDX) {
    case 0: goto L_1197e1a8;
    case 1: goto L_1197e1b0;
    case 2: goto L_1197e1bc;
    case 3: goto L_1197e1d0;
    default: x86_unimpl("switch@0x1197e085 out of table"); return;
  }
L_1197e08c:;
  /* 1197e08c mov eax, edi */
  EAX = (EDI);
  /* 1197e08e mov edx, 3 */
  EDX = (0x3u);
  /* 1197e093 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197e096 jb 0x1197e0a4 */
  if (C.cf) goto L_1197e0a4;
  /* 1197e098 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1197e09b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197e09d jmp dword ptr [eax*4 + 0x1197e0b0] */
  switch (EAX) {
    case 1: goto L_1197e0c0;
    case 2: goto L_1197e0ec;
    case 3: goto L_1197e110;
    default: x86_unimpl("switch@0x1197e09d out of table"); return;
  }
L_1197e0a4:;
  /* 1197e0a4 jmp dword ptr [ecx*4 + 0x1197e1a8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1197e1a8)))); return;
  /* 1197e0ab nop  */
  /* nop */
L_1197e0ac:;
  /* 1197e0ac jmp dword ptr [ecx*4 + 0x1197e12c] */
  switch (ECX) {
    case 0: goto L_1197e18f;
    case 1: goto L_1197e17c;
    case 2: goto L_1197e174;
    case 3: goto L_1197e16c;
    case 4: goto L_1197e164;
    case 5: goto L_1197e15c;
    case 6: goto L_1197e154;
    case 7: goto L_1197e14c;
    default: x86_unimpl("switch@0x1197e0ac out of table"); return;
  }
  /* 1197e0b3 nop  */
  /* nop */
L_1197e0c0:;
  /* 1197e0c0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1197e0c2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1197e0c4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1197e0c6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1197e0c9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1197e0cc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1197e0cf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1197e0d2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1197e0d5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1197e0d8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1197e0db cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197e0de jb 0x1197e0ac */
  if (C.cf) goto L_1197e0ac;
  /* 1197e0e0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1197e0e2 jmp dword ptr [edx*4 + 0x1197e198] */
  switch (EDX) {
    case 0: goto L_1197e1a8;
    case 1: goto L_1197e1b0;
    case 2: goto L_1197e1bc;
    case 3: goto L_1197e1d0;
    default: x86_unimpl("switch@0x1197e0e2 out of table"); return;
  }
  /* 1197e0e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1197e0ec:;
  /* 1197e0ec and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1197e0ee mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1197e0f0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1197e0f2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1197e0f5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1197e0f8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1197e0fb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1197e0fe add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1197e101 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197e104 jb 0x1197e0ac */
  if (C.cf) goto L_1197e0ac;
  /* 1197e106 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1197e108 jmp dword ptr [edx*4 + 0x1197e198] */
  switch (EDX) {
    case 0: goto L_1197e1a8;
    case 1: goto L_1197e1b0;
    case 2: goto L_1197e1bc;
    case 3: goto L_1197e1d0;
    default: x86_unimpl("switch@0x1197e108 out of table"); return;
  }
  /* 1197e10f nop  */
  /* nop */
L_1197e110:;
  /* 1197e110 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1197e112 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1197e114 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1197e116 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1197e117 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1197e11a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1197e11b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197e11e jb 0x1197e0ac */
  if (C.cf) goto L_1197e0ac;
  /* 1197e120 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1197e122 jmp dword ptr [edx*4 + 0x1197e198] */
  switch (EDX) {
    case 0: goto L_1197e1a8;
    case 1: goto L_1197e1b0;
    case 2: goto L_1197e1bc;
    case 3: goto L_1197e1d0;
    default: x86_unimpl("switch@0x1197e122 out of table"); return;
  }
  /* 1197e129 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1197e14c:;
  /* 1197e14c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1197e150 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1197e154:;
  /* 1197e154 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1197e158 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1197e15c:;
  /* 1197e15c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1197e160 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1197e164:;
  /* 1197e164 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1197e168 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1197e16c:;
  /* 1197e16c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1197e170 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1197e174:;
  /* 1197e174 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1197e178 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1197e17c:;
  /* 1197e17c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1197e180 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1197e184 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1197e18b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1197e18d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1197e18f:;
  /* 1197e18f jmp dword ptr [edx*4 + 0x1197e198] */
  switch (EDX) {
    case 0: goto L_1197e1a8;
    case 1: goto L_1197e1b0;
    case 2: goto L_1197e1bc;
    case 3: goto L_1197e1d0;
    default: x86_unimpl("switch@0x1197e18f out of table"); return;
  }
  /* 1197e196 mov edi, edi */
  EDI = (EDI);
L_1197e1a8:;
  /* 1197e1a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197e1ab pop esi */
  ESI = (pop32());
  /* 1197e1ac pop edi */
  EDI = (pop32());
  /* 1197e1ad leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1197e1ae ret  */
  ESPCHK(0x1197e050u, _esp0);
  ESP += 4; return;
  /* 1197e1af nop  */
  /* nop */
L_1197e1b0:;
  /* 1197e1b0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1197e1b2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1197e1b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197e1b7 pop esi */
  ESI = (pop32());
  /* 1197e1b8 pop edi */
  EDI = (pop32());
  /* 1197e1b9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1197e1ba ret  */
  ESPCHK(0x1197e050u, _esp0);
  ESP += 4; return;
  /* 1197e1bb nop  */
  /* nop */
L_1197e1bc:;
  /* 1197e1bc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1197e1be mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1197e1c0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1197e1c3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1197e1c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197e1c9 pop esi */
  ESI = (pop32());
  /* 1197e1ca pop edi */
  EDI = (pop32());
  /* 1197e1cb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1197e1cc ret  */
  ESPCHK(0x1197e050u, _esp0);
  ESP += 4; return;
  /* 1197e1cd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1197e1d0:;
  /* 1197e1d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1197e1d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1197e1d4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1197e1d7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1197e1da mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1197e1dd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1197e1e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197e1e3 pop esi */
  ESI = (pop32());
  /* 1197e1e4 pop edi */
  EDI = (pop32());
  /* 1197e1e5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1197e1e6 ret  */
  ESPCHK(0x1197e050u, _esp0);
  ESP += 4; return;
  /* 1197e1e7 nop  */
  /* nop */
L_1197e1e8:;
  /* 1197e1e8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1197e1ec lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1197e1f0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1197e1f6 jne 0x1197e21c */
  if (!C.zf) goto L_1197e21c;
  /* 1197e1f8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1197e1fb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1197e1fe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197e201 jb 0x1197e210 */
  if (C.cf) goto L_1197e210;
  /* 1197e203 std  */
  C.df=1;
  /* 1197e204 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1197e206 cld  */
  C.df=0;
  /* 1197e207 jmp dword ptr [edx*4 + 0x1197e330] */
  switch (EDX) {
    case 0: goto L_1197e340;
    case 1: goto L_1197e348;
    case 2: goto L_1197e358;
    case 3: goto L_1197e36c;
    default: x86_unimpl("switch@0x1197e207 out of table"); return;
  }
  /* 1197e20e mov edi, edi */
  EDI = (EDI);
L_1197e210:;
  /* 1197e210 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1197e212 jmp dword ptr [ecx*4 + 0x1197e2e0] */
  switch (ECX) {
    case 0: goto L_1197e327;
    default: x86_unimpl("switch@0x1197e212 out of table"); return;
  }
  /* 1197e219 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1197e21c:;
  /* 1197e21c mov eax, edi */
  EAX = (EDI);
  /* 1197e21e mov edx, 3 */
  EDX = (0x3u);
  /* 1197e223 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197e226 jb 0x1197e234 */
  if (C.cf) goto L_1197e234;
  /* 1197e228 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1197e22b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197e22d jmp dword ptr [eax*4 + 0x1197e238] */
  switch (EAX) {
    case 1: goto L_1197e248;
    case 2: goto L_1197e268;
    case 3: goto L_1197e290;
    default: x86_unimpl("switch@0x1197e22d out of table"); return;
  }
L_1197e234:;
  /* 1197e234 jmp dword ptr [ecx*4 + 0x1197e330] */
  switch (ECX) {
    case 0: goto L_1197e340;
    case 1: goto L_1197e348;
    case 2: goto L_1197e358;
    case 3: goto L_1197e36c;
    default: x86_unimpl("switch@0x1197e234 out of table"); return;
  }
  /* 1197e23b nop  */
  /* nop */
L_1197e248:;
  /* 1197e248 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1197e24b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1197e24d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1197e250 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1197e251 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1197e254 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1197e255 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197e258 jb 0x1197e210 */
  if (C.cf) goto L_1197e210;
  /* 1197e25a std  */
  C.df=1;
  /* 1197e25b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1197e25d cld  */
  C.df=0;
  /* 1197e25e jmp dword ptr [edx*4 + 0x1197e330] */
  switch (EDX) {
    case 0: goto L_1197e340;
    case 1: goto L_1197e348;
    case 2: goto L_1197e358;
    case 3: goto L_1197e36c;
    default: x86_unimpl("switch@0x1197e25e out of table"); return;
  }
  /* 1197e265 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1197e268:;
  /* 1197e268 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1197e26b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1197e26d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1197e270 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1197e273 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1197e276 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1197e279 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197e27c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197e27f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197e282 jb 0x1197e210 */
  if (C.cf) goto L_1197e210;
  /* 1197e284 std  */
  C.df=1;
  /* 1197e285 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1197e287 cld  */
  C.df=0;
  /* 1197e288 jmp dword ptr [edx*4 + 0x1197e330] */
  switch (EDX) {
    case 0: goto L_1197e340;
    case 1: goto L_1197e348;
    case 2: goto L_1197e358;
    case 3: goto L_1197e36c;
    default: x86_unimpl("switch@0x1197e288 out of table"); return;
  }
  /* 1197e28f nop  */
  /* nop */
L_1197e290:;
  /* 1197e290 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1197e293 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1197e295 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1197e298 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1197e29b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1197e29e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1197e2a1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1197e2a4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1197e2a7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197e2aa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197e2ad cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197e2b0 jb 0x1197e210 */
  if (C.cf) goto L_1197e210;
  /* 1197e2b6 std  */
  C.df=1;
  /* 1197e2b7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1197e2b9 cld  */
  C.df=0;
  /* 1197e2ba jmp dword ptr [edx*4 + 0x1197e330] */
  switch (EDX) {
    case 0: goto L_1197e340;
    case 1: goto L_1197e348;
    case 2: goto L_1197e358;
    case 3: goto L_1197e36c;
    default: x86_unimpl("switch@0x1197e2ba out of table"); return;
  }
  /* 1197e2c1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1197e2c4 in al, 0xe2 */
  x86_unimpl("in @ 0x1197e2c4");
  /* 1197e2c6 xchg edi, eax */
  { uint32_t _t=(EDI); EDI = (EAX); EAX = (_t); }
  /* 1197e2c7 adc esp, ebp */
  { uint32_t _a=(ESP),_b=(EBP),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197e2c9 loop 0x1197e262 */
  x86_unimpl("loop @ 0x1197e2c9");
  /* 1197e2cb adc esp, esi */
  { uint32_t _a=(ESP),_b=(ESI),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197e2cd loop 0x1197e266 */
  x86_unimpl("loop @ 0x1197e2cd");
  /* 1197e2cf adc esp, edi */
  { uint32_t _a=(ESP),_b=(EDI),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197e2d1 loop 0x1197e26a */
  x86_unimpl("loop @ 0x1197e2d1");
  /* 1197e2d3 adc dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a+_b+C.cf; w32((uint32_t)(EBX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1197e2d6 xchg edi, eax */
  { uint32_t _t=(EDI); EDI = (EAX); EAX = (_t); }
  /* 1197e2d7 adc dword ptr [ebx], ecx */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(EBX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1197e2da xchg edi, eax */
  { uint32_t _t=(EDI); EDI = (EAX); EAX = (_t); }
  /* 1197e2db adc dword ptr [ebx], edx */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EBX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1197e2de xchg edi, eax */
  { uint32_t _t=(EDI); EDI = (EAX); EAX = (_t); }
  /* 1197e2e4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1197e2e8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1197e2ec mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1197e2f0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1197e2f4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1197e2f8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1197e2fc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1197e300 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1197e304 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1197e308 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1197e30c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1197e310 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1197e314 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1197e318 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1197e31c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1197e323 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1197e325 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1197e327:;
  /* 1197e327 jmp dword ptr [edx*4 + 0x1197e330] */
  switch (EDX) {
    case 0: goto L_1197e340;
    case 1: goto L_1197e348;
    case 2: goto L_1197e358;
    case 3: goto L_1197e36c;
    default: x86_unimpl("switch@0x1197e327 out of table"); return;
  }
  /* 1197e32e mov edi, edi */
  EDI = (EDI);
L_1197e340:;
  /* 1197e340 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197e343 pop esi */
  ESI = (pop32());
  /* 1197e344 pop edi */
  EDI = (pop32());
  /* 1197e345 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1197e346 ret  */
  ESPCHK(0x1197e050u, _esp0);
  ESP += 4; return;
  /* 1197e347 nop  */
  /* nop */
L_1197e348:;
  /* 1197e348 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1197e34b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1197e34e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197e351 pop esi */
  ESI = (pop32());
  /* 1197e352 pop edi */
  EDI = (pop32());
  /* 1197e353 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1197e354 ret  */
  ESPCHK(0x1197e050u, _esp0);
  ESP += 4; return;
  /* 1197e355 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1197e358:;
  /* 1197e358 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1197e35b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1197e35e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1197e361 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1197e364 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197e367 pop esi */
  ESI = (pop32());
  /* 1197e368 pop edi */
  EDI = (pop32());
  /* 1197e369 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1197e36a ret  */
  ESPCHK(0x1197e050u, _esp0);
  ESP += 4; return;
  /* 1197e36b nop  */
  /* nop */
L_1197e36c:;
  /* 1197e36c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1197e36f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1197e372 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1197e375 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1197e378 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1197e37b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1197e37e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197e381 pop esi */
  ESI = (pop32());
  /* 1197e382 pop edi */
  EDI = (pop32());
  /* 1197e383 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1197e384 ret  */
  ESPCHK(0x1197e050u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x1197e390 (104 bytes, 43 insns) */
void f_1197e390(void) {
  FTRACE(0x1197e390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197e390 push ebx */
  push32((uint32_t)(EBX));
  /* 1197e391 push esi */
  push32((uint32_t)(ESI));
  /* 1197e392 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1197e396 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197e398 jne 0x1197e3b2 */
  if (!C.zf) goto L_1197e3b2;
  /* 1197e39a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1197e39e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1197e3a2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1197e3a4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1197e3a6 mov ebx, eax */
  EBX = (EAX);
  /* 1197e3a8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1197e3ac div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1197e3ae mov edx, ebx */
  EDX = (EBX);
  /* 1197e3b0 jmp 0x1197e3f3 */
  goto L_1197e3f3;
L_1197e3b2:;
  /* 1197e3b2 mov ecx, eax */
  ECX = (EAX);
  /* 1197e3b4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1197e3b8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1197e3bc mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1197e3c0:;
  /* 1197e3c0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1197e3c2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1197e3c4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1197e3c6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1197e3c8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1197e3ca jne 0x1197e3c0 */
  if (!C.zf) goto L_1197e3c0;
  /* 1197e3cc div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1197e3ce mov esi, eax */
  ESI = (EAX);
  /* 1197e3d0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1197e3d4 mov ecx, eax */
  ECX = (EAX);
  /* 1197e3d6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1197e3da mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1197e3dc add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197e3de jb 0x1197e3ee */
  if (C.cf) goto L_1197e3ee;
  /* 1197e3e0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197e3e4 ja 0x1197e3ee */
  if ((!C.cf&&!C.zf)) goto L_1197e3ee;
  /* 1197e3e6 jb 0x1197e3ef */
  if (C.cf) goto L_1197e3ef;
  /* 1197e3e8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197e3ec jbe 0x1197e3ef */
  if ((C.cf||C.zf)) goto L_1197e3ef;
L_1197e3ee:;
  /* 1197e3ee dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1197e3ef:;
  /* 1197e3ef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1197e3f1 mov eax, esi */
  EAX = (ESI);
L_1197e3f3:;
  /* 1197e3f3 pop esi */
  ESI = (pop32());
  /* 1197e3f4 pop ebx */
  EBX = (pop32());
  /* 1197e3f5 ret 0x10 */
  ESPCHK(0x1197e390u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x1197e400 (117 bytes, 44 insns) */
void f_1197e400(void) {
  FTRACE(0x1197e400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197e400 push ebx */
  push32((uint32_t)(EBX));
  /* 1197e401 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1197e405 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197e407 jne 0x1197e421 */
  if (!C.zf) goto L_1197e421;
  /* 1197e409 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1197e40d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1197e411 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1197e413 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1197e415 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1197e419 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1197e41b mov eax, edx */
  EAX = (EDX);
  /* 1197e41d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1197e41f jmp 0x1197e471 */
  goto L_1197e471;
L_1197e421:;
  /* 1197e421 mov ecx, eax */
  ECX = (EAX);
  /* 1197e423 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1197e427 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1197e42b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1197e42f:;
  /* 1197e42f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1197e431 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1197e433 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1197e435 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1197e437 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1197e439 jne 0x1197e42f */
  if (!C.zf) goto L_1197e42f;
  /* 1197e43b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1197e43d mov ecx, eax */
  ECX = (EAX);
  /* 1197e43f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1197e443 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1197e444 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1197e448 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197e44a jb 0x1197e45a */
  if (C.cf) goto L_1197e45a;
  /* 1197e44c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197e450 ja 0x1197e45a */
  if ((!C.cf&&!C.zf)) goto L_1197e45a;
  /* 1197e452 jb 0x1197e462 */
  if (C.cf) goto L_1197e462;
  /* 1197e454 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197e458 jbe 0x1197e462 */
  if ((C.cf||C.zf)) goto L_1197e462;
L_1197e45a:;
  /* 1197e45a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197e45e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1197e462:;
  /* 1197e462 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197e466 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197e46a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1197e46c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1197e46e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1197e471:;
  /* 1197e471 pop ebx */
  EBX = (pop32());
  /* 1197e472 ret 0x10 */
  ESPCHK(0x1197e400u, _esp0);
  ESP += 20; return;
}

/* FUN_1000e480 @ 0x1197e480 (628 bytes, 214 insns) */
void f_1197e480(void) {
  FTRACE(0x1197e480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197e480 push ebp */
  push32((uint32_t)(EBP));
  /* 1197e481 mov ebp, esp */
  EBP = (ESP);
  /* 1197e483 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197e486 push ebx */
  push32((uint32_t)(EBX));
  /* 1197e487 push esi */
  push32((uint32_t)(ESI));
  /* 1197e488 push edi */
  push32((uint32_t)(EDI));
L_1197e489:;
  /* 1197e489 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197e48d jne 0x1197e4ad */
  if (!C.zf) goto L_1197e4ad;
  /* 1197e48f push 0x1199fba8 */
  push32((uint32_t)(0x1199fba8u));
  /* 1197e494 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197e496 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1197e498 push 0x1199fb9c */
  push32((uint32_t)(0x1199fb9cu));
  /* 1197e49d push 2 */
  push32((uint32_t)(0x2u));
  /* 1197e49f call 0x11976830 */
  push32(0x1197e4a4u); f_11976830();
  /* 1197e4a4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197e4a7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197e4aa jne 0x1197e4ad */
  if (!C.zf) goto L_1197e4ad;
  /* 1197e4ac int3  */
  x86_unimpl("int3 @ 0x1197e4ac");
L_1197e4ad:;
  /* 1197e4ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197e4af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197e4b1 jne 0x1197e489 */
  if (!C.zf) goto L_1197e489;
  /* 1197e4b3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197e4b6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1197e4b9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197e4bc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1197e4bf mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1197e4c2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197e4c5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1197e4c8 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1197e4ce test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197e4d0 je 0x1197e4df */
  if (C.zf) goto L_1197e4df;
  /* 1197e4d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197e4d5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1197e4d8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1197e4db test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1197e4dd je 0x1197e4f5 */
  if (C.zf) goto L_1197e4f5;
L_1197e4df:;
  /* 1197e4df mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197e4e2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1197e4e5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1197e4e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197e4ea mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1197e4ed or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1197e4f0 jmp 0x1197e6ed */
  goto L_1197e6ed;
L_1197e4f5:;
  /* 1197e4f5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197e4f8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1197e4fb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1197e4fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197e500 je 0x1197e54c */
  if (C.zf) goto L_1197e54c;
  /* 1197e502 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197e505 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1197e50c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197e50f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1197e512 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1197e515 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197e517 je 0x1197e535 */
  if (C.zf) goto L_1197e535;
  /* 1197e519 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197e51c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197e51f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1197e522 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1197e524 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197e527 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1197e52a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1197e52d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197e530 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1197e533 jmp 0x1197e54c */
  goto L_1197e54c;
L_1197e535:;
  /* 1197e535 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197e538 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1197e53b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1197e53e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197e541 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1197e544 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1197e547 jmp 0x1197e6ed */
  goto L_1197e6ed;
L_1197e54c:;
  /* 1197e54c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197e54f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1197e552 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1197e555 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197e558 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1197e55b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197e55e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1197e561 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 1197e564 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197e567 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1197e56a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197e56d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1197e574 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1197e57b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197e57e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1197e581 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197e584 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1197e587 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1197e58d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1197e58f jne 0x1197e5bf */
  if (!C.zf) goto L_1197e5bf;
  /* 1197e591 cmp dword ptr [ebp - 8], 0x119a2140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x119a2140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197e598 je 0x1197e5a3 */
  if (C.zf) goto L_1197e5a3;
  /* 1197e59a cmp dword ptr [ebp - 8], 0x119a2160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x119a2160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197e5a1 jne 0x1197e5b3 */
  if (!C.zf) goto L_1197e5b3;
L_1197e5a3:;
  /* 1197e5a3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197e5a6 push edx */
  push32((uint32_t)(EDX));
  /* 1197e5a7 call 0x119803f0 */
  push32(0x1197e5acu); f_119803f0();
  /* 1197e5ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197e5af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197e5b1 jne 0x1197e5bf */
  if (!C.zf) goto L_1197e5bf;
L_1197e5b3:;
  /* 1197e5b3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197e5b6 push eax */
  push32((uint32_t)(EAX));
  /* 1197e5b7 call 0x11980320 */
  push32(0x1197e5bcu); f_11980320();
  /* 1197e5bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1197e5bf:;
  /* 1197e5bf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197e5c2 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1197e5c5 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1197e5cb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197e5cd je 0x1197e6ab */
  if (C.zf) goto L_1197e6ab;
L_1197e5d3:;
  /* 1197e5d3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197e5d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197e5d9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1197e5db sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197e5de test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197e5e0 jge 0x1197e603 */
  if ((C.sf==C.of)) goto L_1197e603;
  /* 1197e5e2 push 0x1199fb5c */
  push32((uint32_t)(0x1199fb5cu));
  /* 1197e5e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197e5e9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1197e5ee push 0x1199fb9c */
  push32((uint32_t)(0x1199fb9cu));
  /* 1197e5f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1197e5f5 call 0x11976830 */
  push32(0x1197e5fau); f_11976830();
  /* 1197e5fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197e5fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197e600 jne 0x1197e603 */
  if (!C.zf) goto L_1197e603;
  /* 1197e602 int3  */
  x86_unimpl("int3 @ 0x1197e602");
L_1197e603:;
  /* 1197e603 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197e605 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197e607 jne 0x1197e5d3 */
  if (!C.zf) goto L_1197e5d3;
  /* 1197e609 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197e60c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197e60f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1197e611 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197e614 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1197e617 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197e61a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1197e61d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197e620 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197e623 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1197e625 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197e628 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1197e62b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197e62e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197e631 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1197e634 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197e638 jle 0x1197e656 */
  if ((C.zf||C.sf!=C.of)) goto L_1197e656;
  /* 1197e63a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197e63d push ecx */
  push32((uint32_t)(ECX));
  /* 1197e63e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197e641 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1197e644 push eax */
  push32((uint32_t)(EAX));
  /* 1197e645 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197e648 push ecx */
  push32((uint32_t)(ECX));
  /* 1197e649 call 0x11980010 */
  push32(0x1197e64eu); f_11980010();
  /* 1197e64e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197e651 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1197e654 jmp 0x1197e69e */
  goto L_1197e69e;
L_1197e656:;
  /* 1197e656 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197e65a je 0x1197e679 */
  if (C.zf) goto L_1197e679;
  /* 1197e65c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197e65f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1197e662 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197e665 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1197e668 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1197e66b mov ecx, dword ptr [edx*4 + 0x119a5240] */
  ECX = (r32((uint32_t)(EDX*4 + 0x119a5240)));
  /* 1197e672 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197e674 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1197e677 jmp 0x1197e680 */
  goto L_1197e680;
L_1197e679:;
  /* 1197e679 mov dword ptr [ebp - 0x14], 0x119a1a60 */
  w32((uint32_t)(EBP + -0x14), (0x119a1a60u));
L_1197e680:;
  /* 1197e680 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1197e683 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 1197e687 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1197e68a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197e68c je 0x1197e69e */
  if (C.zf) goto L_1197e69e;
  /* 1197e68e push 2 */
  push32((uint32_t)(0x2u));
  /* 1197e690 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197e692 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197e695 push ecx */
  push32((uint32_t)(ECX));
  /* 1197e696 call 0x1197fec0 */
  push32(0x1197e69bu); f_1197fec0();
  /* 1197e69b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1197e69e:;
  /* 1197e69e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197e6a1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1197e6a4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1197e6a7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1197e6a9 jmp 0x1197e6c9 */
  goto L_1197e6c9;
L_1197e6ab:;
  /* 1197e6ab mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1197e6b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197e6b5 push edx */
  push32((uint32_t)(EDX));
  /* 1197e6b6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1197e6b9 push eax */
  push32((uint32_t)(EAX));
  /* 1197e6ba mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197e6bd push ecx */
  push32((uint32_t)(ECX));
  /* 1197e6be call 0x11980010 */
  push32(0x1197e6c3u); f_11980010();
  /* 1197e6c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197e6c6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1197e6c9:;
  /* 1197e6c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197e6cc cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197e6cf je 0x1197e6e5 */
  if (C.zf) goto L_1197e6e5;
  /* 1197e6d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197e6d4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1197e6d7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1197e6da mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197e6dd mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1197e6e0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1197e6e3 jmp 0x1197e6ed */
  goto L_1197e6ed;
L_1197e6e5:;
  /* 1197e6e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197e6e8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1197e6ed:;
  /* 1197e6ed pop edi */
  EDI = (pop32());
  /* 1197e6ee pop esi */
  ESI = (pop32());
  /* 1197e6ef pop ebx */
  EBX = (pop32());
  /* 1197e6f0 mov esp, ebp */
  ESP = (EBP);
  /* 1197e6f2 pop ebp */
  EBP = (pop32());
  /* 1197e6f3 ret  */
  ESPCHK(0x1197e480u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e700 @ 0x1197e700 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_1197e700(void) {
  FTRACE(0x1197e700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197e700 push ebp */
  push32((uint32_t)(EBP));
  /* 1197e701 mov ebp, esp */
  EBP = (ESP);
  /* 1197e703 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197e709 push ebx */
  push32((uint32_t)(EBX));
  /* 1197e70a push esi */
  push32((uint32_t)(ESI));
  /* 1197e70b push edi */
  push32((uint32_t)(EDI));
  /* 1197e70c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1197e713 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1197e71d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1197e724:;
  /* 1197e724 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197e727 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1197e729 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1197e72c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1197e730 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197e733 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197e736 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1197e739 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197e73b je 0x1197f317 */
  if (C.zf) goto L_1197f317;
  /* 1197e741 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197e748 jl 0x1197f317 */
  if ((C.sf!=C.of)) goto L_1197f317;
  /* 1197e74e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1197e752 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197e755 jl 0x1197e776 */
  if ((C.sf!=C.of)) goto L_1197e776;
  /* 1197e757 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1197e75b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197e75e jg 0x1197e776 */
  if ((!C.zf&&C.sf==C.of)) goto L_1197e776;
  /* 1197e760 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1197e764 movsx ecx, byte ptr [eax + 0x1199fb94] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x1199fb94))));
  /* 1197e76b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1197e76e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 1197e774 jmp 0x1197e780 */
  goto L_1197e780;
L_1197e776:;
  /* 1197e776 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_1197e780:;
  /* 1197e780 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 1197e786 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1197e789 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197e78c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197e78f movsx edx, byte ptr [ecx + eax*8 + 0x1199fbb4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x1199fbb4))));
  /* 1197e797 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1197e79a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1197e79d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1197e7a0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 1197e7a6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197e7ad ja 0x1197f312 */
  if ((!C.cf&&!C.zf)) goto L_1197f312;
  /* 1197e7b3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 1197e7b9 jmp dword ptr [ecx*4 + 0x1197f324] */
  switch (ECX) {
    case 0: goto L_1197e7c0;
    case 1: goto L_1197e85a;
    case 2: goto L_1197e89c;
    case 3: goto L_1197e90b;
    case 4: goto L_1197e963;
    case 5: goto L_1197e972;
    case 6: goto L_1197e9be;
    case 7: goto L_1197ea51;
    case 8: goto L_1197e8e8;
    case 9: goto L_1197e8f3;
    case 10: goto L_1197e8de;
    case 11: goto L_1197e8d3;
    case 12: goto L_1197e8fe;
    case 13: goto L_1197e906;
    default: x86_unimpl("switch@0x1197e7b9 out of table"); return;
  }
L_1197e7c0:;
  /* 1197e7c0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1197e7c7 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1197e7ca and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1197e7d0 mov eax, dword ptr [0x119a1c98] */
  EAX = (r32((uint32_t)(0x119a1c98)));
  /* 1197e7d5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1197e7d7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1197e7db and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1197e7e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1197e7e3 je 0x1197e83d */
  if (C.zf) goto L_1197e83d;
  /* 1197e7e5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1197e7eb push edx */
  push32((uint32_t)(EDX));
  /* 1197e7ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197e7ef push eax */
  push32((uint32_t)(EAX));
  /* 1197e7f0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1197e7f4 push ecx */
  push32((uint32_t)(ECX));
  /* 1197e7f5 call 0x1197f430 */
  push32(0x1197e7fau); f_1197f430();
  /* 1197e7fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197e7fd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197e800 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1197e802 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 1197e805 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197e808 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197e80b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1197e80e:;
  /* 1197e80e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1197e812 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197e814 jne 0x1197e837 */
  if (!C.zf) goto L_1197e837;
  /* 1197e816 push 0x1199fc34 */
  push32((uint32_t)(0x1199fc34u));
  /* 1197e81b push 0 */
  push32((uint32_t)(0x0u));
  /* 1197e81d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 1197e822 push 0x1199fc28 */
  push32((uint32_t)(0x1199fc28u));
  /* 1197e827 push 2 */
  push32((uint32_t)(0x2u));
  /* 1197e829 call 0x11976830 */
  push32(0x1197e82eu); f_11976830();
  /* 1197e82e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197e831 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197e834 jne 0x1197e837 */
  if (!C.zf) goto L_1197e837;
  /* 1197e836 int3  */
  x86_unimpl("int3 @ 0x1197e836");
L_1197e837:;
  /* 1197e837 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197e839 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197e83b jne 0x1197e80e */
  if (!C.zf) goto L_1197e80e;
L_1197e83d:;
  /* 1197e83d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1197e843 push ecx */
  push32((uint32_t)(ECX));
  /* 1197e844 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197e847 push edx */
  push32((uint32_t)(EDX));
  /* 1197e848 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1197e84c push eax */
  push32((uint32_t)(EAX));
  /* 1197e84d call 0x1197f430 */
  push32(0x1197e852u); f_1197f430();
  /* 1197e852 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197e855 jmp 0x1197f312 */
  goto L_1197f312;
L_1197e85a:;
  /* 1197e85a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1197e861 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197e864 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1197e86a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 1197e870 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 1197e876 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1197e87c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1197e87f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1197e886 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 1197e890 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1197e897 jmp 0x1197f312 */
  goto L_1197f312;
L_1197e89c:;
  /* 1197e89c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1197e8a0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 1197e8a6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1197e8ac sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197e8af mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 1197e8b5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197e8bc ja 0x1197e906 */
  if ((!C.cf&&!C.zf)) goto L_1197e906;
  /* 1197e8be mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 1197e8c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197e8c6 mov al, byte ptr [ecx + 0x1197f35c] */
  AL = (r8((uint32_t)(ECX + 0x1197f35c)));
  /* 1197e8cc jmp dword ptr [eax*4 + 0x1197f344] */
  switch (EAX) {
    case 0: goto L_1197e8e8;
    case 1: goto L_1197e8f3;
    case 2: goto L_1197e8de;
    case 3: goto L_1197e8d3;
    case 4: goto L_1197e8fe;
    case 5: goto L_1197e906;
    default: x86_unimpl("switch@0x1197e8cc out of table"); return;
  }
L_1197e8d3:;
  /* 1197e8d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197e8d6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1197e8d9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1197e8dc jmp 0x1197e906 */
  goto L_1197e906;
L_1197e8de:;
  /* 1197e8de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197e8e1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1197e8e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1197e8e6 jmp 0x1197e906 */
  goto L_1197e906;
L_1197e8e8:;
  /* 1197e8e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197e8eb or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1197e8ee mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1197e8f1 jmp 0x1197e906 */
  goto L_1197e906;
L_1197e8f3:;
  /* 1197e8f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197e8f6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 1197e8f9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1197e8fc jmp 0x1197e906 */
  goto L_1197e906;
L_1197e8fe:;
  /* 1197e8fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197e901 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1197e903 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1197e906:;
  /* 1197e906 jmp 0x1197f312 */
  goto L_1197f312;
L_1197e90b:;
  /* 1197e90b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1197e90f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197e912 jne 0x1197e947 */
  if (!C.zf) goto L_1197e947;
  /* 1197e914 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1197e917 push edx */
  push32((uint32_t)(EDX));
  /* 1197e918 call 0x1197f540 */
  push32(0x1197e91du); f_1197f540();
  /* 1197e91d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197e920 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 1197e926 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197e92d jge 0x1197e945 */
  if ((C.sf==C.of)) goto L_1197e945;
  /* 1197e92f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197e932 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1197e934 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1197e937 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1197e93d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1197e93f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1197e945:;
  /* 1197e945 jmp 0x1197e95e */
  goto L_1197e95e;
L_1197e947:;
  /* 1197e947 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1197e94d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1197e950 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1197e954 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 1197e958 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1197e95e:;
  /* 1197e95e jmp 0x1197f312 */
  goto L_1197f312;
L_1197e963:;
  /* 1197e963 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1197e96d jmp 0x1197f312 */
  goto L_1197f312;
L_1197e972:;
  /* 1197e972 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1197e976 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197e979 jne 0x1197e9a2 */
  if (!C.zf) goto L_1197e9a2;
  /* 1197e97b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1197e97e push eax */
  push32((uint32_t)(EAX));
  /* 1197e97f call 0x1197f540 */
  push32(0x1197e984u); f_1197f540();
  /* 1197e984 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197e987 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1197e98d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197e994 jge 0x1197e9a0 */
  if ((C.sf==C.of)) goto L_1197e9a0;
  /* 1197e996 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_1197e9a0:;
  /* 1197e9a0 jmp 0x1197e9b9 */
  goto L_1197e9b9;
L_1197e9a2:;
  /* 1197e9a2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 1197e9a8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1197e9ab movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1197e9af lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1197e9b3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_1197e9b9:;
  /* 1197e9b9 jmp 0x1197f312 */
  goto L_1197f312;
L_1197e9be:;
  /* 1197e9be movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1197e9c2 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 1197e9c8 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1197e9ce sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197e9d1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 1197e9d7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197e9de ja 0x1197ea4c */
  if ((!C.cf&&!C.zf)) goto L_1197ea4c;
  /* 1197e9e0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1197e9e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197e9e8 mov al, byte ptr [ecx + 0x1197f381] */
  AL = (r8((uint32_t)(ECX + 0x1197f381)));
  /* 1197e9ee jmp dword ptr [eax*4 + 0x1197f36d] */
  switch (EAX) {
    case 0: goto L_1197ea00;
    case 1: goto L_1197ea39;
    case 2: goto L_1197e9f5;
    case 3: goto L_1197ea43;
    case 4: goto L_1197ea4c;
    default: x86_unimpl("switch@0x1197e9ee out of table"); return;
  }
L_1197e9f5:;
  /* 1197e9f5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197e9f8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1197e9fb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1197e9fe jmp 0x1197ea4c */
  goto L_1197ea4c;
L_1197ea00:;
  /* 1197ea00 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197ea03 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1197ea06 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197ea09 jne 0x1197ea2b */
  if (!C.zf) goto L_1197ea2b;
  /* 1197ea0b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197ea0e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1197ea12 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197ea15 jne 0x1197ea2b */
  if (!C.zf) goto L_1197ea2b;
  /* 1197ea17 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197ea1a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197ea1d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1197ea20 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197ea23 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1197ea26 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1197ea29 jmp 0x1197ea37 */
  goto L_1197ea37;
L_1197ea2b:;
  /* 1197ea2b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1197ea32 jmp 0x1197e7c0 */
  goto L_1197e7c0;
L_1197ea37:;
  /* 1197ea37 jmp 0x1197ea4c */
  goto L_1197ea4c;
L_1197ea39:;
  /* 1197ea39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197ea3c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1197ea3e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1197ea41 jmp 0x1197ea4c */
  goto L_1197ea4c;
L_1197ea43:;
  /* 1197ea43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197ea46 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1197ea49 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1197ea4c:;
  /* 1197ea4c jmp 0x1197f312 */
  goto L_1197f312;
L_1197ea51:;
  /* 1197ea51 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1197ea55 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1197ea5b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1197ea61 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197ea64 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1197ea6a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197ea71 ja 0x1197f137 */
  if ((!C.cf&&!C.zf)) goto L_1197f137;
  /* 1197ea77 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1197ea7d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1197ea7f mov cl, byte ptr [edx + 0x1197f3ec] */
  CL = (r8((uint32_t)(EDX + 0x1197f3ec)));
  /* 1197ea85 jmp dword ptr [ecx*4 + 0x1197f3b0] */
  switch (ECX) {
    case 0: goto L_1197ea8c;
    case 1: goto L_1197ed20;
    case 2: goto L_1197ebb0;
    case 3: goto L_1197ee59;
    case 4: goto L_1197eb1b;
    case 5: goto L_1197eaa1;
    case 6: goto L_1197ee2b;
    case 7: goto L_1197ed30;
    case 8: goto L_1197ecd5;
    case 9: goto L_1197eea5;
    case 10: goto L_1197ee4f;
    case 11: goto L_1197ebc6;
    case 12: goto L_1197ee43;
    case 13: goto L_1197ee65;
    case 14: goto L_1197f137;
    default: x86_unimpl("switch@0x1197ea85 out of table"); return;
  }
L_1197ea8c:;
  /* 1197ea8c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197ea8f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 1197ea94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197ea96 jne 0x1197eaa1 */
  if (!C.zf) goto L_1197eaa1;
  /* 1197ea98 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197ea9b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1197ea9e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1197eaa1:;
  /* 1197eaa1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197eaa4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1197eaaa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197eaac je 0x1197eae7 */
  if (C.zf) goto L_1197eae7;
  /* 1197eaae lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1197eab1 push eax */
  push32((uint32_t)(EAX));
  /* 1197eab2 call 0x1197f580 */
  push32(0x1197eab7u); f_1197f580();
  /* 1197eab7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197eaba mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1197eabe mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1197eac2 push ecx */
  push32((uint32_t)(ECX));
  /* 1197eac3 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1197eac9 push edx */
  push32((uint32_t)(EDX));
  /* 1197eaca call 0x11980660 */
  push32(0x1197eacfu); f_11980660();
  /* 1197eacf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197ead2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1197ead5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197ead9 jge 0x1197eae5 */
  if ((C.sf==C.of)) goto L_1197eae5;
  /* 1197eadb mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_1197eae5:;
  /* 1197eae5 jmp 0x1197eb0d */
  goto L_1197eb0d;
L_1197eae7:;
  /* 1197eae7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1197eaea push eax */
  push32((uint32_t)(EAX));
  /* 1197eaeb call 0x1197f540 */
  push32(0x1197eaf0u); f_1197f540();
  /* 1197eaf0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197eaf3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1197eafa mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 1197eb00 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 1197eb06 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1197eb0d:;
  /* 1197eb0d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1197eb13 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1197eb16 jmp 0x1197f137 */
  goto L_1197f137;
L_1197eb1b:;
  /* 1197eb1b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1197eb1e push eax */
  push32((uint32_t)(EAX));
  /* 1197eb1f call 0x1197f540 */
  push32(0x1197eb24u); f_1197f540();
  /* 1197eb24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197eb27 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1197eb2d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197eb34 je 0x1197eb42 */
  if (C.zf) goto L_1197eb42;
  /* 1197eb36 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1197eb3c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197eb40 jne 0x1197eb5c */
  if (!C.zf) goto L_1197eb5c;
L_1197eb42:;
  /* 1197eb42 mov edx, dword ptr [0x119a1fb0] */
  EDX = (r32((uint32_t)(0x119a1fb0)));
  /* 1197eb48 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1197eb4b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197eb4e push eax */
  push32((uint32_t)(EAX));
  /* 1197eb4f call 0x1197a5a0 */
  push32(0x1197eb54u); f_1197a5a0();
  /* 1197eb54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197eb57 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1197eb5a jmp 0x1197ebab */
  goto L_1197ebab;
L_1197eb5c:;
  /* 1197eb5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197eb5f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 1197eb65 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1197eb67 je 0x1197eb8c */
  if (C.zf) goto L_1197eb8c;
  /* 1197eb69 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1197eb6f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1197eb72 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1197eb75 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1197eb7b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1197eb7e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1197eb80 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1197eb83 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1197eb8a jmp 0x1197ebab */
  goto L_1197ebab;
L_1197eb8c:;
  /* 1197eb8c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1197eb93 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1197eb99 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1197eb9c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1197eb9f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1197eba5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 1197eba8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1197ebab:;
  /* 1197ebab jmp 0x1197f137 */
  goto L_1197f137;
L_1197ebb0:;
  /* 1197ebb0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197ebb3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 1197ebb9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1197ebbb jne 0x1197ebc6 */
  if (!C.zf) goto L_1197ebc6;
  /* 1197ebbd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197ebc0 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1197ebc3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1197ebc6:;
  /* 1197ebc6 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197ebcd jne 0x1197ebdb */
  if (!C.zf) goto L_1197ebdb;
  /* 1197ebcf mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 1197ebd9 jmp 0x1197ebe7 */
  goto L_1197ebe7;
L_1197ebdb:;
  /* 1197ebdb mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1197ebe1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_1197ebe7:;
  /* 1197ebe7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1197ebed mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1197ebf3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1197ebf6 push edx */
  push32((uint32_t)(EDX));
  /* 1197ebf7 call 0x1197f540 */
  push32(0x1197ebfcu); f_1197f540();
  /* 1197ebfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197ebff mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1197ec02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197ec05 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1197ec0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197ec0c je 0x1197ec76 */
  if (C.zf) goto L_1197ec76;
  /* 1197ec0e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197ec12 jne 0x1197ec1d */
  if (!C.zf) goto L_1197ec1d;
  /* 1197ec14 mov ecx, dword ptr [0x119a1fb4] */
  ECX = (r32((uint32_t)(0x119a1fb4)));
  /* 1197ec1a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1197ec1d:;
  /* 1197ec1d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1197ec24 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197ec27 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1197ec2d:;
  /* 1197ec2d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1197ec33 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1197ec39 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197ec3c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1197ec42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197ec44 je 0x1197ec66 */
  if (C.zf) goto L_1197ec66;
  /* 1197ec46 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1197ec4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197ec4e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1197ec51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197ec53 je 0x1197ec66 */
  if (C.zf) goto L_1197ec66;
  /* 1197ec55 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1197ec5b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197ec5e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1197ec64 jmp 0x1197ec2d */
  goto L_1197ec2d;
L_1197ec66:;
  /* 1197ec66 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1197ec6c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197ec6f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1197ec71 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1197ec74 jmp 0x1197ecd0 */
  goto L_1197ecd0;
L_1197ec76:;
  /* 1197ec76 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197ec7a jne 0x1197ec84 */
  if (!C.zf) goto L_1197ec84;
  /* 1197ec7c mov eax, dword ptr [0x119a1fb0] */
  EAX = (r32((uint32_t)(0x119a1fb0)));
  /* 1197ec81 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1197ec84:;
  /* 1197ec84 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197ec87 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1197ec8d:;
  /* 1197ec8d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1197ec93 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1197ec99 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197ec9c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1197eca2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197eca4 je 0x1197ecc4 */
  if (C.zf) goto L_1197ecc4;
  /* 1197eca6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1197ecac movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1197ecaf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197ecb1 je 0x1197ecc4 */
  if (C.zf) goto L_1197ecc4;
  /* 1197ecb3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1197ecb9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197ecbc mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1197ecc2 jmp 0x1197ec8d */
  goto L_1197ec8d;
L_1197ecc4:;
  /* 1197ecc4 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1197ecca sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197eccd mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1197ecd0:;
  /* 1197ecd0 jmp 0x1197f137 */
  goto L_1197f137;
L_1197ecd5:;
  /* 1197ecd5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1197ecd8 push edx */
  push32((uint32_t)(EDX));
  /* 1197ecd9 call 0x1197f540 */
  push32(0x1197ecdeu); f_1197f540();
  /* 1197ecde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197ece1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1197ece7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197ecea and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1197eced test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197ecef je 0x1197ed03 */
  if (C.zf) goto L_1197ed03;
  /* 1197ecf1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1197ecf7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1197ecfe mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1197ed01 jmp 0x1197ed11 */
  goto L_1197ed11;
L_1197ed03:;
  /* 1197ed03 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1197ed09 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1197ed0f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1197ed11:;
  /* 1197ed11 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1197ed1b jmp 0x1197f137 */
  goto L_1197f137;
L_1197ed20:;
  /* 1197ed20 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1197ed27 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1197ed2a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1197ed2d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1197ed30:;
  /* 1197ed30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197ed33 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1197ed35 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1197ed38 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1197ed3e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1197ed41 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197ed48 jge 0x1197ed56 */
  if ((C.sf==C.of)) goto L_1197ed56;
  /* 1197ed4a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1197ed54 jmp 0x1197ed72 */
  goto L_1197ed72;
L_1197ed56:;
  /* 1197ed56 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197ed5d jne 0x1197ed72 */
  if (!C.zf) goto L_1197ed72;
  /* 1197ed5f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1197ed63 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197ed66 jne 0x1197ed72 */
  if (!C.zf) goto L_1197ed72;
  /* 1197ed68 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1197ed72:;
  /* 1197ed72 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1197ed75 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197ed78 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1197ed7b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1197ed7e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197ed81 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1197ed83 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1197ed86 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1197ed8c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1197ed92 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197ed95 push ecx */
  push32((uint32_t)(ECX));
  /* 1197ed96 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1197ed9c push edx */
  push32((uint32_t)(EDX));
  /* 1197ed9d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1197eda1 push eax */
  push32((uint32_t)(EAX));
  /* 1197eda2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197eda5 push ecx */
  push32((uint32_t)(ECX));
  /* 1197eda6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1197edac push edx */
  push32((uint32_t)(EDX));
  /* 1197edad call dword ptr [0x119a23a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a23a0))), 0x1197edb3u);
  /* 1197edb3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197edb6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197edb9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1197edbe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197edc0 je 0x1197edd8 */
  if (C.zf) goto L_1197edd8;
  /* 1197edc2 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197edc9 jne 0x1197edd8 */
  if (!C.zf) goto L_1197edd8;
  /* 1197edcb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197edce push ecx */
  push32((uint32_t)(ECX));
  /* 1197edcf call dword ptr [0x119a23ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a23ac))), 0x1197edd5u);
  /* 1197edd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1197edd8:;
  /* 1197edd8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1197eddc cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197eddf jne 0x1197edfa */
  if (!C.zf) goto L_1197edfa;
  /* 1197ede1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197ede4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1197ede9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197edeb jne 0x1197edfa */
  if (!C.zf) goto L_1197edfa;
  /* 1197eded mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197edf0 push ecx */
  push32((uint32_t)(ECX));
  /* 1197edf1 call dword ptr [0x119a23a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a23a4))), 0x1197edf7u);
  /* 1197edf7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1197edfa:;
  /* 1197edfa mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197edfd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1197ee00 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197ee03 jne 0x1197ee17 */
  if (!C.zf) goto L_1197ee17;
  /* 1197ee05 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197ee08 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1197ee0b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1197ee0e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197ee11 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197ee14 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1197ee17:;
  /* 1197ee17 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197ee1a push eax */
  push32((uint32_t)(EAX));
  /* 1197ee1b call 0x1197a5a0 */
  push32(0x1197ee20u); f_1197a5a0();
  /* 1197ee20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197ee23 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1197ee26 jmp 0x1197f137 */
  goto L_1197f137;
L_1197ee2b:;
  /* 1197ee2b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197ee2e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1197ee31 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1197ee34 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1197ee3e jmp 0x1197eec5 */
  goto L_1197eec5;
L_1197ee43:;
  /* 1197ee43 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1197ee4d jmp 0x1197eec5 */
  goto L_1197eec5;
L_1197ee4f:;
  /* 1197ee4f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1197ee59:;
  /* 1197ee59 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1197ee63 jmp 0x1197ee6f */
  goto L_1197ee6f;
L_1197ee65:;
  /* 1197ee65 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1197ee6f:;
  /* 1197ee6f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1197ee79 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197ee7c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1197ee82 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197ee84 je 0x1197eea3 */
  if (C.zf) goto L_1197eea3;
  /* 1197ee86 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1197ee8d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1197ee93 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197ee96 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1197ee9c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1197eea3:;
  /* 1197eea3 jmp 0x1197eec5 */
  goto L_1197eec5;
L_1197eea5:;
  /* 1197eea5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1197eeaf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197eeb2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1197eeb8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1197eeba je 0x1197eec5 */
  if (C.zf) goto L_1197eec5;
  /* 1197eebc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197eebf or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1197eec2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1197eec5:;
  /* 1197eec5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197eec8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1197eecd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197eecf je 0x1197eeee */
  if (C.zf) goto L_1197eeee;
  /* 1197eed1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1197eed4 push ecx */
  push32((uint32_t)(ECX));
  /* 1197eed5 call 0x1197f560 */
  push32(0x1197eedau); f_1197f560();
  /* 1197eeda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197eedd mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1197eee3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1197eee9 jmp 0x1197ef7f */
  goto L_1197ef7f;
L_1197eeee:;
  /* 1197eeee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197eef1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1197eef4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197eef6 je 0x1197ef40 */
  if (C.zf) goto L_1197ef40;
  /* 1197eef8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197eefb and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1197eefe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197ef00 je 0x1197ef20 */
  if (C.zf) goto L_1197ef20;
  /* 1197ef02 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1197ef05 push ecx */
  push32((uint32_t)(ECX));
  /* 1197ef06 call 0x1197f540 */
  push32(0x1197ef0bu); f_1197f540();
  /* 1197ef0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197ef0e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1197ef11 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1197ef12 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1197ef18 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1197ef1e jmp 0x1197ef3e */
  goto L_1197ef3e;
L_1197ef20:;
  /* 1197ef20 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1197ef23 push edx */
  push32((uint32_t)(EDX));
  /* 1197ef24 call 0x1197f540 */
  push32(0x1197ef29u); f_1197f540();
  /* 1197ef29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197ef2c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1197ef31 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1197ef32 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1197ef38 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1197ef3e:;
  /* 1197ef3e jmp 0x1197ef7f */
  goto L_1197ef7f;
L_1197ef40:;
  /* 1197ef40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197ef43 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1197ef46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197ef48 je 0x1197ef65 */
  if (C.zf) goto L_1197ef65;
  /* 1197ef4a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1197ef4d push ecx */
  push32((uint32_t)(ECX));
  /* 1197ef4e call 0x1197f540 */
  push32(0x1197ef53u); f_1197f540();
  /* 1197ef53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197ef56 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1197ef57 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1197ef5d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1197ef63 jmp 0x1197ef7f */
  goto L_1197ef7f;
L_1197ef65:;
  /* 1197ef65 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1197ef68 push edx */
  push32((uint32_t)(EDX));
  /* 1197ef69 call 0x1197f540 */
  push32(0x1197ef6eu); f_1197f540();
  /* 1197ef6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197ef71 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1197ef73 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1197ef79 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1197ef7f:;
  /* 1197ef7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197ef82 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1197ef85 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197ef87 je 0x1197efc7 */
  if (C.zf) goto L_1197efc7;
  /* 1197ef89 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197ef90 jg 0x1197efc7 */
  if ((!C.zf&&C.sf==C.of)) goto L_1197efc7;
  /* 1197ef92 jl 0x1197ef9d */
  if ((C.sf!=C.of)) goto L_1197ef9d;
  /* 1197ef94 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197ef9b jae 0x1197efc7 */
  if (!C.cf) goto L_1197efc7;
L_1197ef9d:;
  /* 1197ef9d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1197efa3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1197efa5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1197efab adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197efae neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1197efb0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1197efb6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1197efbc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197efbf or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1197efc2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1197efc5 jmp 0x1197efdf */
  goto L_1197efdf;
L_1197efc7:;
  /* 1197efc7 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1197efcd mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1197efd3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1197efd9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1197efdf:;
  /* 1197efdf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197efe2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1197efe8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197efea jne 0x1197f007 */
  if (!C.zf) goto L_1197f007;
  /* 1197efec mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1197eff2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1197eff8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1197effb mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1197f001 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1197f007:;
  /* 1197f007 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197f00e jge 0x1197f01c */
  if ((C.sf==C.of)) goto L_1197f01c;
  /* 1197f010 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1197f01a jmp 0x1197f025 */
  goto L_1197f025;
L_1197f01c:;
  /* 1197f01c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197f01f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1197f022 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1197f025:;
  /* 1197f025 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1197f02b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1197f031 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197f033 jne 0x1197f03c */
  if (!C.zf) goto L_1197f03c;
  /* 1197f035 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1197f03c:;
  /* 1197f03c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1197f03f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1197f042:;
  /* 1197f042 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1197f048 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1197f04e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197f051 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1197f057 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197f059 jg 0x1197f06f */
  if ((!C.zf&&C.sf==C.of)) goto L_1197f06f;
  /* 1197f05b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1197f061 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1197f067 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1197f069 je 0x1197f0f0 */
  if (C.zf) goto L_1197f0f0;
L_1197f06f:;
  /* 1197f06f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1197f075 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1197f076 push edx */
  push32((uint32_t)(EDX));
  /* 1197f077 push eax */
  push32((uint32_t)(EAX));
  /* 1197f078 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1197f07e push edx */
  push32((uint32_t)(EDX));
  /* 1197f07f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1197f085 push eax */
  push32((uint32_t)(EAX));
  /* 1197f086 call 0x1197e400 */
  push32(0x1197f08bu); f_1197e400();
  /* 1197f08b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197f08e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1197f094 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1197f09a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1197f09b push edx */
  push32((uint32_t)(EDX));
  /* 1197f09c push eax */
  push32((uint32_t)(EAX));
  /* 1197f09d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1197f0a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1197f0a4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1197f0aa push edx */
  push32((uint32_t)(EDX));
  /* 1197f0ab call 0x1197e390 */
  push32(0x1197f0b0u); f_1197e390();
  /* 1197f0b0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1197f0b6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1197f0bc cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197f0c3 jle 0x1197f0d7 */
  if ((C.zf||C.sf!=C.of)) goto L_1197f0d7;
  /* 1197f0c5 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1197f0cb add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197f0d1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1197f0d7:;
  /* 1197f0d7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197f0da mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1197f0e0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1197f0e2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197f0e5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197f0e8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1197f0eb jmp 0x1197f042 */
  goto L_1197f042;
L_1197f0f0:;
  /* 1197f0f0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1197f0f3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197f0f6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1197f0f9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197f0fc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197f0ff mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1197f102 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197f105 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1197f10a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197f10c je 0x1197f137 */
  if (C.zf) goto L_1197f137;
  /* 1197f10e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197f111 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1197f114 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197f117 jne 0x1197f11f */
  if (!C.zf) goto L_1197f11f;
  /* 1197f119 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197f11d jne 0x1197f137 */
  if (!C.zf) goto L_1197f137;
L_1197f11f:;
  /* 1197f11f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197f122 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197f125 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1197f128 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197f12b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1197f12e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197f131 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197f134 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1197f137:;
  /* 1197f137 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197f13e jne 0x1197f312 */
  if (!C.zf) goto L_1197f312;
  /* 1197f144 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197f147 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1197f14a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197f14c je 0x1197f19d */
  if (C.zf) goto L_1197f19d;
  /* 1197f14e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197f151 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1197f157 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1197f159 je 0x1197f16b */
  if (C.zf) goto L_1197f16b;
  /* 1197f15b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1197f162 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1197f169 jmp 0x1197f19d */
  goto L_1197f19d;
L_1197f16b:;
  /* 1197f16b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197f16e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1197f171 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197f173 je 0x1197f185 */
  if (C.zf) goto L_1197f185;
  /* 1197f175 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1197f17c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1197f183 jmp 0x1197f19d */
  goto L_1197f19d;
L_1197f185:;
  /* 1197f185 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197f188 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1197f18b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197f18d je 0x1197f19d */
  if (C.zf) goto L_1197f19d;
  /* 1197f18f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1197f196 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1197f19d:;
  /* 1197f19d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1197f1a3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197f1a6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197f1a9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1197f1af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197f1b2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1197f1b5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197f1b7 jne 0x1197f1d5 */
  if (!C.zf) goto L_1197f1d5;
  /* 1197f1b9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1197f1bf push eax */
  push32((uint32_t)(EAX));
  /* 1197f1c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197f1c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1197f1c4 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1197f1ca push edx */
  push32((uint32_t)(EDX));
  /* 1197f1cb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1197f1cd call 0x1197f4b0 */
  push32(0x1197f1d2u); f_1197f4b0();
  /* 1197f1d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1197f1d5:;
  /* 1197f1d5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1197f1db push eax */
  push32((uint32_t)(EAX));
  /* 1197f1dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197f1df push ecx */
  push32((uint32_t)(ECX));
  /* 1197f1e0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197f1e3 push edx */
  push32((uint32_t)(EDX));
  /* 1197f1e4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1197f1ea push eax */
  push32((uint32_t)(EAX));
  /* 1197f1eb call 0x1197f4f0 */
  push32(0x1197f1f0u); f_1197f4f0();
  /* 1197f1f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197f1f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197f1f6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1197f1f9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1197f1fb je 0x1197f223 */
  if (C.zf) goto L_1197f223;
  /* 1197f1fd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197f200 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1197f203 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197f205 jne 0x1197f223 */
  if (!C.zf) goto L_1197f223;
  /* 1197f207 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1197f20d push eax */
  push32((uint32_t)(EAX));
  /* 1197f20e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197f211 push ecx */
  push32((uint32_t)(ECX));
  /* 1197f212 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1197f218 push edx */
  push32((uint32_t)(EDX));
  /* 1197f219 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1197f21b call 0x1197f4b0 */
  push32(0x1197f220u); f_1197f4b0();
  /* 1197f220 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1197f223:;
  /* 1197f223 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197f227 je 0x1197f2d1 */
  if (C.zf) goto L_1197f2d1;
  /* 1197f22d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197f231 jle 0x1197f2d1 */
  if ((C.zf||C.sf!=C.of)) goto L_1197f2d1;
  /* 1197f237 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197f23a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1197f240 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197f243 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1197f249:;
  /* 1197f249 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1197f24f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1197f255 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197f258 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1197f25e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197f260 je 0x1197f2cf */
  if (C.zf) goto L_1197f2cf;
  /* 1197f262 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1197f268 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1197f26b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1197f272 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1197f279 push eax */
  push32((uint32_t)(EAX));
  /* 1197f27a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1197f280 push ecx */
  push32((uint32_t)(ECX));
  /* 1197f281 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1197f287 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197f28a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1197f290 call 0x11980660 */
  push32(0x1197f295u); f_11980660();
  /* 1197f295 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197f298 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1197f29e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197f2a5 jg 0x1197f2a9 */
  if ((!C.zf&&C.sf==C.of)) goto L_1197f2a9;
  /* 1197f2a7 jmp 0x1197f2cf */
  goto L_1197f2cf;
L_1197f2a9:;
  /* 1197f2a9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1197f2af push eax */
  push32((uint32_t)(EAX));
  /* 1197f2b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197f2b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1197f2b4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1197f2ba push edx */
  push32((uint32_t)(EDX));
  /* 1197f2bb lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1197f2c1 push eax */
  push32((uint32_t)(EAX));
  /* 1197f2c2 call 0x1197f4f0 */
  push32(0x1197f2c7u); f_1197f4f0();
  /* 1197f2c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197f2ca jmp 0x1197f249 */
  goto L_1197f249;
L_1197f2cf:;
  /* 1197f2cf jmp 0x1197f2ec */
  goto L_1197f2ec;
L_1197f2d1:;
  /* 1197f2d1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1197f2d7 push ecx */
  push32((uint32_t)(ECX));
  /* 1197f2d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197f2db push edx */
  push32((uint32_t)(EDX));
  /* 1197f2dc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197f2df push eax */
  push32((uint32_t)(EAX));
  /* 1197f2e0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197f2e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1197f2e4 call 0x1197f4f0 */
  push32(0x1197f2e9u); f_1197f4f0();
  /* 1197f2e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1197f2ec:;
  /* 1197f2ec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197f2ef and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1197f2f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197f2f4 je 0x1197f312 */
  if (C.zf) goto L_1197f312;
  /* 1197f2f6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1197f2fc push eax */
  push32((uint32_t)(EAX));
  /* 1197f2fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197f300 push ecx */
  push32((uint32_t)(ECX));
  /* 1197f301 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1197f307 push edx */
  push32((uint32_t)(EDX));
  /* 1197f308 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1197f30a call 0x1197f4b0 */
  push32(0x1197f30fu); f_1197f4b0();
  /* 1197f30f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1197f312:;
  /* 1197f312 jmp 0x1197e724 */
  goto L_1197e724;
L_1197f317:;
  /* 1197f317 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1197f31d pop edi */
  EDI = (pop32());
  /* 1197f31e pop esi */
  ESI = (pop32());
  /* 1197f31f pop ebx */
  EBX = (pop32());
  /* 1197f320 mov esp, ebp */
  ESP = (EBP);
  /* 1197f322 pop ebp */
  EBP = (pop32());
  /* 1197f323 ret  */
  ESPCHK(0x1197e700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f430 @ 0x1197f430 (119 bytes, 44 insns) */
void f_1197f430(void) {
  FTRACE(0x1197f430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197f430 push ebp */
  push32((uint32_t)(EBP));
  /* 1197f431 mov ebp, esp */
  EBP = (ESP);
  /* 1197f433 push ecx */
  push32((uint32_t)(ECX));
  /* 1197f434 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197f437 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1197f43a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197f43d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197f440 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1197f443 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197f446 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197f44a jl 0x1197f472 */
  if ((C.sf!=C.of)) goto L_1197f472;
  /* 1197f44c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197f44f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1197f451 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1197f454 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1197f456 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1197f45a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1197f460 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1197f463 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197f466 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1197f468 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197f46b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197f46e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1197f470 jmp 0x1197f485 */
  goto L_1197f485;
L_1197f472:;
  /* 1197f472 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197f475 push edx */
  push32((uint32_t)(EDX));
  /* 1197f476 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197f479 push eax */
  push32((uint32_t)(EAX));
  /* 1197f47a call 0x1197e480 */
  push32(0x1197f47fu); f_1197e480();
  /* 1197f47f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197f482 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1197f485:;
  /* 1197f485 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197f489 jne 0x1197f496 */
  if (!C.zf) goto L_1197f496;
  /* 1197f48b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1197f48e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1197f494 jmp 0x1197f4a3 */
  goto L_1197f4a3;
L_1197f496:;
  /* 1197f496 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1197f499 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1197f49b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197f49e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1197f4a1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1197f4a3:;
  /* 1197f4a3 mov esp, ebp */
  ESP = (EBP);
  /* 1197f4a5 pop ebp */
  EBP = (pop32());
  /* 1197f4a6 ret  */
  ESPCHK(0x1197f430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f4b0 @ 0x1197f4b0 (53 bytes, 23 insns) */
void f_1197f4b0(void) {
  FTRACE(0x1197f4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197f4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1197f4b1 mov ebp, esp */
  EBP = (ESP);
L_1197f4b3:;
  /* 1197f4b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197f4b6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197f4b9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197f4bc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1197f4bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197f4c1 jle 0x1197f4e3 */
  if ((C.zf||C.sf!=C.of)) goto L_1197f4e3;
  /* 1197f4c3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1197f4c6 push edx */
  push32((uint32_t)(EDX));
  /* 1197f4c7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1197f4ca push eax */
  push32((uint32_t)(EAX));
  /* 1197f4cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197f4ce push ecx */
  push32((uint32_t)(ECX));
  /* 1197f4cf call 0x1197f430 */
  push32(0x1197f4d4u); f_1197f430();
  /* 1197f4d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197f4d7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1197f4da cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197f4dd jne 0x1197f4e1 */
  if (!C.zf) goto L_1197f4e1;
  /* 1197f4df jmp 0x1197f4e3 */
  goto L_1197f4e3;
L_1197f4e1:;
  /* 1197f4e1 jmp 0x1197f4b3 */
  goto L_1197f4b3;
L_1197f4e3:;
  /* 1197f4e3 pop ebp */
  EBP = (pop32());
  /* 1197f4e4 ret  */
  ESPCHK(0x1197f4b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f4f0 @ 0x1197f4f0 (74 bytes, 31 insns) */
void f_1197f4f0(void) {
  FTRACE(0x1197f4f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197f4f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1197f4f1 mov ebp, esp */
  EBP = (ESP);
  /* 1197f4f3 push ecx */
  push32((uint32_t)(ECX));
L_1197f4f4:;
  /* 1197f4f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197f4f7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197f4fa sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197f4fd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1197f500 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197f502 jle 0x1197f536 */
  if ((C.zf||C.sf!=C.of)) goto L_1197f536;
  /* 1197f504 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1197f507 push edx */
  push32((uint32_t)(EDX));
  /* 1197f508 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1197f50b push eax */
  push32((uint32_t)(EAX));
  /* 1197f50c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197f50f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1197f512 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1197f515 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197f518 push eax */
  push32((uint32_t)(EAX));
  /* 1197f519 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197f51c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197f51f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1197f522 call 0x1197f430 */
  push32(0x1197f527u); f_1197f430();
  /* 1197f527 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197f52a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1197f52d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197f530 jne 0x1197f534 */
  if (!C.zf) goto L_1197f534;
  /* 1197f532 jmp 0x1197f536 */
  goto L_1197f536;
L_1197f534:;
  /* 1197f534 jmp 0x1197f4f4 */
  goto L_1197f4f4;
L_1197f536:;
  /* 1197f536 mov esp, ebp */
  ESP = (EBP);
  /* 1197f538 pop ebp */
  EBP = (pop32());
  /* 1197f539 ret  */
  ESPCHK(0x1197f4f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f540 @ 0x1197f540 (26 bytes, 12 insns) */
void f_1197f540(void) {
  FTRACE(0x1197f540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197f540 push ebp */
  push32((uint32_t)(EBP));
  /* 1197f541 mov ebp, esp */
  EBP = (ESP);
  /* 1197f543 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197f546 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1197f548 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197f54b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197f54e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1197f550 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197f553 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1197f555 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1197f558 pop ebp */
  EBP = (pop32());
  /* 1197f559 ret  */
  ESPCHK(0x1197f540u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f560 @ 0x1197f560 (31 bytes, 14 insns) */
void f_1197f560(void) {
  FTRACE(0x1197f560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197f560 push ebp */
  push32((uint32_t)(EBP));
  /* 1197f561 mov ebp, esp */
  EBP = (ESP);
  /* 1197f563 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197f566 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1197f568 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197f56b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197f56e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1197f570 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197f573 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1197f575 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197f578 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1197f57a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1197f57d pop ebp */
  EBP = (pop32());
  /* 1197f57e ret  */
  ESPCHK(0x1197f560u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f580 @ 0x1197f580 (27 bytes, 12 insns) */
void f_1197f580(void) {
  FTRACE(0x1197f580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197f580 push ebp */
  push32((uint32_t)(EBP));
  /* 1197f581 mov ebp, esp */
  EBP = (ESP);
  /* 1197f583 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197f586 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1197f588 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197f58b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197f58e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1197f590 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197f593 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1197f595 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1197f599 pop ebp */
  EBP = (pop32());
  /* 1197f59a ret  */
  ESPCHK(0x1197f580u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1197f5a0 (145 bytes, 42 insns) */
void f_1197f5a0(void) {
  FTRACE(0x1197f5a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197f5a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1197f5a1 mov ebp, esp */
  EBP = (ESP);
  /* 1197f5a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1197f5a4 call 0x1197f650 */
  push32(0x1197f5a9u); f_1197f650();
  /* 1197f5a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197f5ac mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1197f5ae mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1197f5b5 jmp 0x1197f5c0 */
  goto L_1197f5c0;
L_1197f5b7:;
  /* 1197f5b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197f5ba add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197f5bd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1197f5c0:;
  /* 1197f5c0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197f5c4 jae 0x1197f5ea */
  if (!C.cf) goto L_1197f5ea;
  /* 1197f5c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197f5c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197f5cc cmp ecx, dword ptr [eax*8 + 0x119a1fb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x119a1fb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197f5d3 jne 0x1197f5e8 */
  if (!C.zf) goto L_1197f5e8;
  /* 1197f5d5 call 0x1197f640 */
  push32(0x1197f5dau); f_1197f640();
  /* 1197f5da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197f5dd mov ecx, dword ptr [edx*8 + 0x119a1fbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x119a1fbc)));
  /* 1197f5e4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1197f5e6 jmp 0x1197f62d */
  goto L_1197f62d;
L_1197f5e8:;
  /* 1197f5e8 jmp 0x1197f5b7 */
  goto L_1197f5b7;
L_1197f5ea:;
  /* 1197f5ea cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197f5ee jb 0x1197f603 */
  if (C.cf) goto L_1197f603;
  /* 1197f5f0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197f5f4 ja 0x1197f603 */
  if ((!C.cf&&!C.zf)) goto L_1197f603;
  /* 1197f5f6 call 0x1197f640 */
  push32(0x1197f5fbu); f_1197f640();
  /* 1197f5fb mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1197f601 jmp 0x1197f62d */
  goto L_1197f62d;
L_1197f603:;
  /* 1197f603 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197f60a jb 0x1197f622 */
  if (C.cf) goto L_1197f622;
  /* 1197f60c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197f613 ja 0x1197f622 */
  if ((!C.cf&&!C.zf)) goto L_1197f622;
  /* 1197f615 call 0x1197f640 */
  push32(0x1197f61au); f_1197f640();
  /* 1197f61a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1197f620 jmp 0x1197f62d */
  goto L_1197f62d;
L_1197f622:;
  /* 1197f622 call 0x1197f640 */
  push32(0x1197f627u); f_1197f640();
  /* 1197f627 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1197f62d:;
  /* 1197f62d mov esp, ebp */
  ESP = (EBP);
  /* 1197f62f pop ebp */
  EBP = (pop32());
  /* 1197f630 ret  */
  ESPCHK(0x1197f5a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f640 @ 0x1197f640 (13 bytes, 6 insns) */
void f_1197f640(void) {
  FTRACE(0x1197f640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197f640 push ebp */
  push32((uint32_t)(EBP));
  /* 1197f641 mov ebp, esp */
  EBP = (ESP);
  /* 1197f643 call 0x119771b0 */
  push32(0x1197f648u); f_119771b0();
  /* 1197f648 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197f64b pop ebp */
  EBP = (pop32());
  /* 1197f64c ret  */
  ESPCHK(0x1197f640u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f650 @ 0x1197f650 (13 bytes, 6 insns) */
void f_1197f650(void) {
  FTRACE(0x1197f650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197f650 push ebp */
  push32((uint32_t)(EBP));
  /* 1197f651 mov ebp, esp */
  EBP = (ESP);
  /* 1197f653 call 0x119771b0 */
  push32(0x1197f658u); f_119771b0();
  /* 1197f658 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197f65b pop ebp */
  EBP = (pop32());
  /* 1197f65c ret  */
  ESPCHK(0x1197f650u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f660 @ 0x1197f660 (664 bytes, 267 insns) [15 switch table(s)] */
void f_1197f660(void) {
  FTRACE(0x1197f660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197f660 push ebp */
  push32((uint32_t)(EBP));
  /* 1197f661 mov ebp, esp */
  EBP = (ESP);
  /* 1197f663 push edi */
  push32((uint32_t)(EDI));
  /* 1197f664 push esi */
  push32((uint32_t)(ESI));
  /* 1197f665 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1197f668 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1197f66b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1197f66e mov eax, ecx */
  EAX = (ECX);
  /* 1197f670 mov edx, ecx */
  EDX = (ECX);
  /* 1197f672 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197f674 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197f676 jbe 0x1197f680 */
  if ((C.cf||C.zf)) goto L_1197f680;
  /* 1197f678 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197f67a jb 0x1197f7f8 */
  if (C.cf) goto L_1197f7f8;
L_1197f680:;
  /* 1197f680 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1197f686 jne 0x1197f69c */
  if (!C.zf) goto L_1197f69c;
  /* 1197f688 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1197f68b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1197f68e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197f691 jb 0x1197f6bc */
  if (C.cf) goto L_1197f6bc;
  /* 1197f693 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1197f695 jmp dword ptr [edx*4 + 0x1197f7a8] */
  switch (EDX) {
    case 0: goto L_1197f7b8;
    case 1: goto L_1197f7c0;
    case 2: goto L_1197f7cc;
    case 3: goto L_1197f7e0;
    default: x86_unimpl("switch@0x1197f695 out of table"); return;
  }
L_1197f69c:;
  /* 1197f69c mov eax, edi */
  EAX = (EDI);
  /* 1197f69e mov edx, 3 */
  EDX = (0x3u);
  /* 1197f6a3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197f6a6 jb 0x1197f6b4 */
  if (C.cf) goto L_1197f6b4;
  /* 1197f6a8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1197f6ab add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197f6ad jmp dword ptr [eax*4 + 0x1197f6c0] */
  switch (EAX) {
    case 1: goto L_1197f6d0;
    case 2: goto L_1197f6fc;
    case 3: goto L_1197f720;
    default: x86_unimpl("switch@0x1197f6ad out of table"); return;
  }
L_1197f6b4:;
  /* 1197f6b4 jmp dword ptr [ecx*4 + 0x1197f7b8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1197f7b8)))); return;
  /* 1197f6bb nop  */
  /* nop */
L_1197f6bc:;
  /* 1197f6bc jmp dword ptr [ecx*4 + 0x1197f73c] */
  switch (ECX) {
    case 0: goto L_1197f79f;
    case 1: goto L_1197f78c;
    case 2: goto L_1197f784;
    case 3: goto L_1197f77c;
    case 4: goto L_1197f774;
    case 5: goto L_1197f76c;
    case 6: goto L_1197f764;
    case 7: goto L_1197f75c;
    default: x86_unimpl("switch@0x1197f6bc out of table"); return;
  }
  /* 1197f6c3 nop  */
  /* nop */
L_1197f6d0:;
  /* 1197f6d0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1197f6d2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1197f6d4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1197f6d6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1197f6d9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1197f6dc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1197f6df shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1197f6e2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1197f6e5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1197f6e8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1197f6eb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197f6ee jb 0x1197f6bc */
  if (C.cf) goto L_1197f6bc;
  /* 1197f6f0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1197f6f2 jmp dword ptr [edx*4 + 0x1197f7a8] */
  switch (EDX) {
    case 0: goto L_1197f7b8;
    case 1: goto L_1197f7c0;
    case 2: goto L_1197f7cc;
    case 3: goto L_1197f7e0;
    default: x86_unimpl("switch@0x1197f6f2 out of table"); return;
  }
  /* 1197f6f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1197f6fc:;
  /* 1197f6fc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1197f6fe mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1197f700 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1197f702 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1197f705 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1197f708 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1197f70b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1197f70e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1197f711 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197f714 jb 0x1197f6bc */
  if (C.cf) goto L_1197f6bc;
  /* 1197f716 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1197f718 jmp dword ptr [edx*4 + 0x1197f7a8] */
  switch (EDX) {
    case 0: goto L_1197f7b8;
    case 1: goto L_1197f7c0;
    case 2: goto L_1197f7cc;
    case 3: goto L_1197f7e0;
    default: x86_unimpl("switch@0x1197f718 out of table"); return;
  }
  /* 1197f71f nop  */
  /* nop */
L_1197f720:;
  /* 1197f720 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1197f722 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1197f724 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1197f726 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1197f727 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1197f72a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1197f72b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197f72e jb 0x1197f6bc */
  if (C.cf) goto L_1197f6bc;
  /* 1197f730 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1197f732 jmp dword ptr [edx*4 + 0x1197f7a8] */
  switch (EDX) {
    case 0: goto L_1197f7b8;
    case 1: goto L_1197f7c0;
    case 2: goto L_1197f7cc;
    case 3: goto L_1197f7e0;
    default: x86_unimpl("switch@0x1197f732 out of table"); return;
  }
  /* 1197f739 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1197f75c:;
  /* 1197f75c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1197f760 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1197f764:;
  /* 1197f764 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1197f768 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1197f76c:;
  /* 1197f76c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1197f770 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1197f774:;
  /* 1197f774 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1197f778 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1197f77c:;
  /* 1197f77c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1197f780 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1197f784:;
  /* 1197f784 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1197f788 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1197f78c:;
  /* 1197f78c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1197f790 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1197f794 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1197f79b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1197f79d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1197f79f:;
  /* 1197f79f jmp dword ptr [edx*4 + 0x1197f7a8] */
  switch (EDX) {
    case 0: goto L_1197f7b8;
    case 1: goto L_1197f7c0;
    case 2: goto L_1197f7cc;
    case 3: goto L_1197f7e0;
    default: x86_unimpl("switch@0x1197f79f out of table"); return;
  }
  /* 1197f7a6 mov edi, edi */
  EDI = (EDI);
L_1197f7b8:;
  /* 1197f7b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197f7bb pop esi */
  ESI = (pop32());
  /* 1197f7bc pop edi */
  EDI = (pop32());
  /* 1197f7bd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1197f7be ret  */
  ESPCHK(0x1197f660u, _esp0);
  ESP += 4; return;
  /* 1197f7bf nop  */
  /* nop */
L_1197f7c0:;
  /* 1197f7c0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1197f7c2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1197f7c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197f7c7 pop esi */
  ESI = (pop32());
  /* 1197f7c8 pop edi */
  EDI = (pop32());
  /* 1197f7c9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1197f7ca ret  */
  ESPCHK(0x1197f660u, _esp0);
  ESP += 4; return;
  /* 1197f7cb nop  */
  /* nop */
L_1197f7cc:;
  /* 1197f7cc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1197f7ce mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1197f7d0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1197f7d3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1197f7d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197f7d9 pop esi */
  ESI = (pop32());
  /* 1197f7da pop edi */
  EDI = (pop32());
  /* 1197f7db leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1197f7dc ret  */
  ESPCHK(0x1197f660u, _esp0);
  ESP += 4; return;
  /* 1197f7dd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1197f7e0:;
  /* 1197f7e0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1197f7e2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1197f7e4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1197f7e7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1197f7ea mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1197f7ed mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1197f7f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197f7f3 pop esi */
  ESI = (pop32());
  /* 1197f7f4 pop edi */
  EDI = (pop32());
  /* 1197f7f5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1197f7f6 ret  */
  ESPCHK(0x1197f660u, _esp0);
  ESP += 4; return;
  /* 1197f7f7 nop  */
  /* nop */
L_1197f7f8:;
  /* 1197f7f8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1197f7fc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1197f800 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1197f806 jne 0x1197f82c */
  if (!C.zf) goto L_1197f82c;
  /* 1197f808 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1197f80b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1197f80e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197f811 jb 0x1197f820 */
  if (C.cf) goto L_1197f820;
  /* 1197f813 std  */
  C.df=1;
  /* 1197f814 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1197f816 cld  */
  C.df=0;
  /* 1197f817 jmp dword ptr [edx*4 + 0x1197f940] */
  switch (EDX) {
    case 0: goto L_1197f950;
    case 1: goto L_1197f958;
    case 2: goto L_1197f968;
    case 3: goto L_1197f97c;
    default: x86_unimpl("switch@0x1197f817 out of table"); return;
  }
  /* 1197f81e mov edi, edi */
  EDI = (EDI);
L_1197f820:;
  /* 1197f820 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1197f822 jmp dword ptr [ecx*4 + 0x1197f8f0] */
  switch (ECX) {
    case 0: goto L_1197f937;
    default: x86_unimpl("switch@0x1197f822 out of table"); return;
  }
  /* 1197f829 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1197f82c:;
  /* 1197f82c mov eax, edi */
  EAX = (EDI);
  /* 1197f82e mov edx, 3 */
  EDX = (0x3u);
  /* 1197f833 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197f836 jb 0x1197f844 */
  if (C.cf) goto L_1197f844;
  /* 1197f838 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1197f83b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197f83d jmp dword ptr [eax*4 + 0x1197f848] */
  switch (EAX) {
    case 1: goto L_1197f858;
    case 2: goto L_1197f878;
    case 3: goto L_1197f8a0;
    default: x86_unimpl("switch@0x1197f83d out of table"); return;
  }
L_1197f844:;
  /* 1197f844 jmp dword ptr [ecx*4 + 0x1197f940] */
  switch (ECX) {
    case 0: goto L_1197f950;
    case 1: goto L_1197f958;
    case 2: goto L_1197f968;
    case 3: goto L_1197f97c;
    default: x86_unimpl("switch@0x1197f844 out of table"); return;
  }
  /* 1197f84b nop  */
  /* nop */
L_1197f858:;
  /* 1197f858 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1197f85b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1197f85d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1197f860 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1197f861 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1197f864 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1197f865 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197f868 jb 0x1197f820 */
  if (C.cf) goto L_1197f820;
  /* 1197f86a std  */
  C.df=1;
  /* 1197f86b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1197f86d cld  */
  C.df=0;
  /* 1197f86e jmp dword ptr [edx*4 + 0x1197f940] */
  switch (EDX) {
    case 0: goto L_1197f950;
    case 1: goto L_1197f958;
    case 2: goto L_1197f968;
    case 3: goto L_1197f97c;
    default: x86_unimpl("switch@0x1197f86e out of table"); return;
  }
  /* 1197f875 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1197f878:;
  /* 1197f878 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1197f87b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1197f87d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1197f880 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1197f883 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1197f886 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1197f889 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197f88c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197f88f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197f892 jb 0x1197f820 */
  if (C.cf) goto L_1197f820;
  /* 1197f894 std  */
  C.df=1;
  /* 1197f895 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1197f897 cld  */
  C.df=0;
  /* 1197f898 jmp dword ptr [edx*4 + 0x1197f940] */
  switch (EDX) {
    case 0: goto L_1197f950;
    case 1: goto L_1197f958;
    case 2: goto L_1197f968;
    case 3: goto L_1197f97c;
    default: x86_unimpl("switch@0x1197f898 out of table"); return;
  }
  /* 1197f89f nop  */
  /* nop */
L_1197f8a0:;
  /* 1197f8a0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1197f8a3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1197f8a5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1197f8a8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1197f8ab mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1197f8ae mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1197f8b1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1197f8b4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1197f8b7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197f8ba sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197f8bd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197f8c0 jb 0x1197f820 */
  if (C.cf) goto L_1197f820;
  /* 1197f8c6 std  */
  C.df=1;
  /* 1197f8c7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1197f8c9 cld  */
  C.df=0;
  /* 1197f8ca jmp dword ptr [edx*4 + 0x1197f940] */
  switch (EDX) {
    case 0: goto L_1197f950;
    case 1: goto L_1197f958;
    case 2: goto L_1197f968;
    case 3: goto L_1197f97c;
    default: x86_unimpl("switch@0x1197f8ca out of table"); return;
  }
  /* 1197f8d1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1197f8d4 hlt  */
  x86_unimpl("hlt @ 0x1197f8d4");
  /* 1197f8d5 clc  */
  x86_unimpl("clc @ 0x1197f8d5");
  /* 1197f8d6 xchg edi, eax */
  { uint32_t _t=(EDI); EDI = (EAX); EAX = (_t); }
  /* 1197f8d7 adc esp, edi */
  { uint32_t _a=(ESP),_b=(EDI),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197f8d9 clc  */
  x86_unimpl("clc @ 0x1197f8d9");
  /* 1197f8da xchg edi, eax */
  { uint32_t _t=(EDI); EDI = (EAX); EAX = (_t); }
  /* 1197f8db adc dword ptr [ecx + edi*8], eax */
  { uint32_t _a=(r32((uint32_t)(ECX + EDI*8))),_b=(EAX),_r=_a+_b+C.cf; w32((uint32_t)(ECX + EDI*8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1197f8de xchg edi, eax */
  { uint32_t _t=(EDI); EDI = (EAX); EAX = (_t); }
  /* 1197f8df adc dword ptr [ecx + edi*8], ecx */
  { uint32_t _a=(r32((uint32_t)(ECX + EDI*8))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(ECX + EDI*8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1197f8e2 xchg edi, eax */
  { uint32_t _t=(EDI); EDI = (EAX); EAX = (_t); }
  /* 1197f8e3 adc dword ptr [ecx + edi*8], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + EDI*8))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(ECX + EDI*8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1197f8e6 xchg edi, eax */
  { uint32_t _t=(EDI); EDI = (EAX); EAX = (_t); }
  /* 1197f8e7 adc dword ptr [ecx + edi*8], ebx */
  { uint32_t _a=(r32((uint32_t)(ECX + EDI*8))),_b=(EBX),_r=_a+_b+C.cf; w32((uint32_t)(ECX + EDI*8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1197f8ea xchg edi, eax */
  { uint32_t _t=(EDI); EDI = (EAX); EAX = (_t); }
  /* 1197f8eb adc dword ptr [ecx + edi*8], esp */
  { uint32_t _a=(r32((uint32_t)(ECX + EDI*8))),_b=(ESP),_r=_a+_b+C.cf; w32((uint32_t)(ECX + EDI*8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1197f8ee xchg edi, eax */
  { uint32_t _t=(EDI); EDI = (EAX); EAX = (_t); }
  /* 1197f8f4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1197f8f8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1197f8fc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1197f900 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1197f904 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1197f908 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1197f90c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1197f910 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1197f914 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1197f918 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1197f91c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1197f920 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1197f924 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1197f928 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1197f92c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1197f933 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1197f935 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1197f937:;
  /* 1197f937 jmp dword ptr [edx*4 + 0x1197f940] */
  switch (EDX) {
    case 0: goto L_1197f950;
    case 1: goto L_1197f958;
    case 2: goto L_1197f968;
    case 3: goto L_1197f97c;
    default: x86_unimpl("switch@0x1197f937 out of table"); return;
  }
  /* 1197f93e mov edi, edi */
  EDI = (EDI);
L_1197f950:;
  /* 1197f950 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197f953 pop esi */
  ESI = (pop32());
  /* 1197f954 pop edi */
  EDI = (pop32());
  /* 1197f955 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1197f956 ret  */
  ESPCHK(0x1197f660u, _esp0);
  ESP += 4; return;
  /* 1197f957 nop  */
  /* nop */
L_1197f958:;
  /* 1197f958 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1197f95b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1197f95e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197f961 pop esi */
  ESI = (pop32());
  /* 1197f962 pop edi */
  EDI = (pop32());
  /* 1197f963 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1197f964 ret  */
  ESPCHK(0x1197f660u, _esp0);
  ESP += 4; return;
  /* 1197f965 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1197f968:;
  /* 1197f968 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1197f96b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1197f96e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1197f971 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1197f974 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197f977 pop esi */
  ESI = (pop32());
  /* 1197f978 pop edi */
  EDI = (pop32());
  /* 1197f979 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1197f97a ret  */
  ESPCHK(0x1197f660u, _esp0);
  ESP += 4; return;
  /* 1197f97b nop  */
  /* nop */
L_1197f97c:;
  /* 1197f97c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1197f97f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1197f982 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1197f985 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1197f988 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1197f98b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1197f98e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197f991 pop esi */
  ESI = (pop32());
  /* 1197f992 pop edi */
  EDI = (pop32());
  /* 1197f993 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1197f994 ret  */
  ESPCHK(0x1197f660u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f9a0 @ 0x1197f9a0 (421 bytes, 148 insns) */
void f_1197f9a0(void) {
  FTRACE(0x1197f9a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197f9a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1197f9a1 mov ebp, esp */
  EBP = (ESP);
  /* 1197f9a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1197f9a5 push 0x1199fc50 */
  push32((uint32_t)(0x1199fc50u));
  /* 1197f9aa push 0x11980878 */
  push32((uint32_t)(0x11980878u));
  /* 1197f9af mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1197f9b5 push eax */
  push32((uint32_t)(EAX));
  /* 1197f9b6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1197f9bd add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197f9c0 push ebx */
  push32((uint32_t)(EBX));
  /* 1197f9c1 push esi */
  push32((uint32_t)(ESI));
  /* 1197f9c2 push edi */
  push32((uint32_t)(EDI));
  /* 1197f9c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1197f9c6 cmp dword ptr [0x119a3a64], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3a64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197f9cd jne 0x1197fa1e */
  if (!C.zf) goto L_1197fa1e;
  /* 1197f9cf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1197f9d2 push eax */
  push32((uint32_t)(EAX));
  /* 1197f9d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1197f9d5 push 0x1199fc48 */
  push32((uint32_t)(0x1199fc48u));
  /* 1197f9da push 1 */
  push32((uint32_t)(0x1u));
  /* 1197f9dc call dword ptr [0x119a631c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a631c))), 0x1197f9e2u);
  /* 1197f9e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197f9e4 je 0x1197f9f2 */
  if (C.zf) goto L_1197f9f2;
  /* 1197f9e6 mov dword ptr [0x119a3a64], 1 */
  w32((uint32_t)(0x119a3a64), (0x1u));
  /* 1197f9f0 jmp 0x1197fa1e */
  goto L_1197fa1e;
L_1197f9f2:;
  /* 1197f9f2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1197f9f5 push ecx */
  push32((uint32_t)(ECX));
  /* 1197f9f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1197f9f8 push 0x1199fc44 */
  push32((uint32_t)(0x1199fc44u));
  /* 1197f9fd push 1 */
  push32((uint32_t)(0x1u));
  /* 1197f9ff push 0 */
  push32((uint32_t)(0x0u));
  /* 1197fa01 call dword ptr [0x119a632c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a632c))), 0x1197fa07u);
  /* 1197fa07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197fa09 je 0x1197fa17 */
  if (C.zf) goto L_1197fa17;
  /* 1197fa0b mov dword ptr [0x119a3a64], 2 */
  w32((uint32_t)(0x119a3a64), (0x2u));
  /* 1197fa15 jmp 0x1197fa1e */
  goto L_1197fa1e;
L_1197fa17:;
  /* 1197fa17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197fa19 jmp 0x1197fb48 */
  goto L_1197fb48;
L_1197fa1e:;
  /* 1197fa1e cmp dword ptr [0x119a3a64], 2 */
  { uint32_t _a=(r32((uint32_t)(0x119a3a64))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197fa25 jne 0x1197fa55 */
  if (!C.zf) goto L_1197fa55;
  /* 1197fa27 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197fa2b jne 0x1197fa36 */
  if (!C.zf) goto L_1197fa36;
  /* 1197fa2d mov edx, dword ptr [0x119a3a70] */
  EDX = (r32((uint32_t)(0x119a3a70)));
  /* 1197fa33 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1197fa36:;
  /* 1197fa36 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1197fa39 push eax */
  push32((uint32_t)(EAX));
  /* 1197fa3a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1197fa3d push ecx */
  push32((uint32_t)(ECX));
  /* 1197fa3e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197fa41 push edx */
  push32((uint32_t)(EDX));
  /* 1197fa42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197fa45 push eax */
  push32((uint32_t)(EAX));
  /* 1197fa46 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1197fa49 push ecx */
  push32((uint32_t)(ECX));
  /* 1197fa4a call dword ptr [0x119a632c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a632c))), 0x1197fa50u);
  /* 1197fa50 jmp 0x1197fb48 */
  goto L_1197fb48;
L_1197fa55:;
  /* 1197fa55 cmp dword ptr [0x119a3a64], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119a3a64))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197fa5c jne 0x1197fb46 */
  if (!C.zf) goto L_1197fb46;
  /* 1197fa62 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197fa66 jne 0x1197fa71 */
  if (!C.zf) goto L_1197fa71;
  /* 1197fa68 mov edx, dword ptr [0x119a3a80] */
  EDX = (r32((uint32_t)(0x119a3a80)));
  /* 1197fa6e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1197fa71:;
  /* 1197fa71 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197fa73 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197fa75 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1197fa78 push eax */
  push32((uint32_t)(EAX));
  /* 1197fa79 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197fa7c push ecx */
  push32((uint32_t)(ECX));
  /* 1197fa7d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1197fa80 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1197fa82 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197fa84 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1197fa87 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197fa8a push edx */
  push32((uint32_t)(EDX));
  /* 1197fa8b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1197fa8e push eax */
  push32((uint32_t)(EAX));
  /* 1197fa8f call dword ptr [0x119a6324] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6324))), 0x1197fa95u);
  /* 1197fa95 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1197fa98 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197fa9c jne 0x1197faa5 */
  if (!C.zf) goto L_1197faa5;
  /* 1197fa9e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197faa0 jmp 0x1197fb48 */
  goto L_1197fb48;
L_1197faa5:;
  /* 1197faa5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1197faac mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197faaf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1197fab1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197fab4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1197fab6 call 0x1197a910 */
  push32(0x1197fabbu); f_1197a910();
  /* 1197fabb mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1197fabe mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1197fac1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1197fac4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1197fac7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197faca shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1197facc push edx */
  push32((uint32_t)(EDX));
  /* 1197facd push 0 */
  push32((uint32_t)(0x0u));
  /* 1197facf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197fad2 push eax */
  push32((uint32_t)(EAX));
  /* 1197fad3 call 0x1197b4e0 */
  push32(0x1197fad8u); f_1197b4e0();
  /* 1197fad8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197fadb mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1197fae2 jmp 0x1197fafb */
  goto L_1197fafb;
  /* 1197fae4 mov eax, 1 */
  EAX = (0x1u);
  /* 1197fae9 ret  */
  ESPCHK(0x1197f9a0u, _esp0);
  ESP += 4; return;
  /* 1197faea mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1197faed mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1197faf4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1197fafb:;
  /* 1197fafb cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197faff jne 0x1197fb05 */
  if (!C.zf) goto L_1197fb05;
  /* 1197fb01 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197fb03 jmp 0x1197fb48 */
  goto L_1197fb48;
L_1197fb05:;
  /* 1197fb05 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197fb08 push ecx */
  push32((uint32_t)(ECX));
  /* 1197fb09 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197fb0c push edx */
  push32((uint32_t)(EDX));
  /* 1197fb0d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1197fb10 push eax */
  push32((uint32_t)(EAX));
  /* 1197fb11 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197fb14 push ecx */
  push32((uint32_t)(ECX));
  /* 1197fb15 push 1 */
  push32((uint32_t)(0x1u));
  /* 1197fb17 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1197fb1a push edx */
  push32((uint32_t)(EDX));
  /* 1197fb1b call dword ptr [0x119a6324] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6324))), 0x1197fb21u);
  /* 1197fb21 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1197fb24 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197fb28 jne 0x1197fb2e */
  if (!C.zf) goto L_1197fb2e;
  /* 1197fb2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197fb2c jmp 0x1197fb48 */
  goto L_1197fb48;
L_1197fb2e:;
  /* 1197fb2e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1197fb31 push eax */
  push32((uint32_t)(EAX));
  /* 1197fb32 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1197fb35 push ecx */
  push32((uint32_t)(ECX));
  /* 1197fb36 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197fb39 push edx */
  push32((uint32_t)(EDX));
  /* 1197fb3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197fb3d push eax */
  push32((uint32_t)(EAX));
  /* 1197fb3e call dword ptr [0x119a631c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a631c))), 0x1197fb44u);
  /* 1197fb44 jmp 0x1197fb48 */
  goto L_1197fb48;
L_1197fb46:;
  /* 1197fb46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1197fb48:;
  /* 1197fb48 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1197fb4b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197fb4e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1197fb55 pop edi */
  EDI = (pop32());
  /* 1197fb56 pop esi */
  ESI = (pop32());
  /* 1197fb57 pop ebx */
  EBX = (pop32());
  /* 1197fb58 mov esp, ebp */
  ESP = (EBP);
  /* 1197fb5a pop ebp */
  EBP = (pop32());
  /* 1197fb5b ret  */
  ESPCHK(0x1197f9a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb60 @ 0x1197fb60 (727 bytes, 263 insns) */
void f_1197fb60(void) {
  FTRACE(0x1197fb60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197fb60 push ebp */
  push32((uint32_t)(EBP));
  /* 1197fb61 mov ebp, esp */
  EBP = (ESP);
  /* 1197fb63 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1197fb65 push 0x1199fc60 */
  push32((uint32_t)(0x1199fc60u));
  /* 1197fb6a push 0x11980878 */
  push32((uint32_t)(0x11980878u));
  /* 1197fb6f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1197fb75 push eax */
  push32((uint32_t)(EAX));
  /* 1197fb76 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1197fb7d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197fb80 push ebx */
  push32((uint32_t)(EBX));
  /* 1197fb81 push esi */
  push32((uint32_t)(ESI));
  /* 1197fb82 push edi */
  push32((uint32_t)(EDI));
  /* 1197fb83 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1197fb86 cmp dword ptr [0x119a3a88], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3a88))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197fb8d jne 0x1197fbe6 */
  if (!C.zf) goto L_1197fbe6;
  /* 1197fb8f push 0 */
  push32((uint32_t)(0x0u));
  /* 1197fb91 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197fb93 push 1 */
  push32((uint32_t)(0x1u));
  /* 1197fb95 push 0x1199fc48 */
  push32((uint32_t)(0x1199fc48u));
  /* 1197fb9a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1197fb9f push 0 */
  push32((uint32_t)(0x0u));
  /* 1197fba1 call dword ptr [0x119a6320] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6320))), 0x1197fba7u);
  /* 1197fba7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197fba9 je 0x1197fbb7 */
  if (C.zf) goto L_1197fbb7;
  /* 1197fbab mov dword ptr [0x119a3a88], 1 */
  w32((uint32_t)(0x119a3a88), (0x1u));
  /* 1197fbb5 jmp 0x1197fbe6 */
  goto L_1197fbe6;
L_1197fbb7:;
  /* 1197fbb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197fbb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197fbbb push 1 */
  push32((uint32_t)(0x1u));
  /* 1197fbbd push 0x1199fc44 */
  push32((uint32_t)(0x1199fc44u));
  /* 1197fbc2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1197fbc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197fbc9 call dword ptr [0x119a6318] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6318))), 0x1197fbcfu);
  /* 1197fbcf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197fbd1 je 0x1197fbdf */
  if (C.zf) goto L_1197fbdf;
  /* 1197fbd3 mov dword ptr [0x119a3a88], 2 */
  w32((uint32_t)(0x119a3a88), (0x2u));
  /* 1197fbdd jmp 0x1197fbe6 */
  goto L_1197fbe6;
L_1197fbdf:;
  /* 1197fbdf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197fbe1 jmp 0x1197fe51 */
  goto L_1197fe51;
L_1197fbe6:;
  /* 1197fbe6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197fbea jle 0x1197fbff */
  if ((C.zf||C.sf!=C.of)) goto L_1197fbff;
  /* 1197fbec mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1197fbef push eax */
  push32((uint32_t)(EAX));
  /* 1197fbf0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1197fbf3 push ecx */
  push32((uint32_t)(ECX));
  /* 1197fbf4 call 0x1197fe70 */
  push32(0x1197fbf9u); f_1197fe70();
  /* 1197fbf9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197fbfc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1197fbff:;
  /* 1197fbff cmp dword ptr [0x119a3a88], 2 */
  { uint32_t _a=(r32((uint32_t)(0x119a3a88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197fc06 jne 0x1197fc2b */
  if (!C.zf) goto L_1197fc2b;
  /* 1197fc08 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1197fc0b push edx */
  push32((uint32_t)(EDX));
  /* 1197fc0c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1197fc0f push eax */
  push32((uint32_t)(EAX));
  /* 1197fc10 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1197fc13 push ecx */
  push32((uint32_t)(ECX));
  /* 1197fc14 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1197fc17 push edx */
  push32((uint32_t)(EDX));
  /* 1197fc18 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197fc1b push eax */
  push32((uint32_t)(EAX));
  /* 1197fc1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197fc1f push ecx */
  push32((uint32_t)(ECX));
  /* 1197fc20 call dword ptr [0x119a6318] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6318))), 0x1197fc26u);
  /* 1197fc26 jmp 0x1197fe51 */
  goto L_1197fe51;
L_1197fc2b:;
  /* 1197fc2b cmp dword ptr [0x119a3a88], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119a3a88))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197fc32 jne 0x1197fe4f */
  if (!C.zf) goto L_1197fe4f;
  /* 1197fc38 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197fc3c jne 0x1197fc47 */
  if (!C.zf) goto L_1197fc47;
  /* 1197fc3e mov edx, dword ptr [0x119a3a80] */
  EDX = (r32((uint32_t)(0x119a3a80)));
  /* 1197fc44 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1197fc47:;
  /* 1197fc47 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197fc49 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197fc4b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1197fc4e push eax */
  push32((uint32_t)(EAX));
  /* 1197fc4f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1197fc52 push ecx */
  push32((uint32_t)(ECX));
  /* 1197fc53 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1197fc56 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1197fc58 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197fc5a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1197fc5d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197fc60 push edx */
  push32((uint32_t)(EDX));
  /* 1197fc61 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1197fc64 push eax */
  push32((uint32_t)(EAX));
  /* 1197fc65 call dword ptr [0x119a6324] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6324))), 0x1197fc6bu);
  /* 1197fc6b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1197fc6e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197fc72 jne 0x1197fc7b */
  if (!C.zf) goto L_1197fc7b;
  /* 1197fc74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197fc76 jmp 0x1197fe51 */
  goto L_1197fe51;
L_1197fc7b:;
  /* 1197fc7b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1197fc82 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1197fc85 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1197fc87 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197fc8a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1197fc8c call 0x1197a910 */
  push32(0x1197fc91u); f_1197a910();
  /* 1197fc91 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 1197fc94 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1197fc97 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1197fc9a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1197fc9d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1197fca4 jmp 0x1197fcbd */
  goto L_1197fcbd;
  /* 1197fca6 mov eax, 1 */
  EAX = (0x1u);
  /* 1197fcab ret  */
  ESPCHK(0x1197fb60u, _esp0);
  ESP += 4; return;
  /* 1197fcac mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1197fcaf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1197fcb6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1197fcbd:;
  /* 1197fcbd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197fcc1 jne 0x1197fcca */
  if (!C.zf) goto L_1197fcca;
  /* 1197fcc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197fcc5 jmp 0x1197fe51 */
  goto L_1197fe51;
L_1197fcca:;
  /* 1197fcca mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1197fccd push edx */
  push32((uint32_t)(EDX));
  /* 1197fcce mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197fcd1 push eax */
  push32((uint32_t)(EAX));
  /* 1197fcd2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1197fcd5 push ecx */
  push32((uint32_t)(ECX));
  /* 1197fcd6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1197fcd9 push edx */
  push32((uint32_t)(EDX));
  /* 1197fcda push 1 */
  push32((uint32_t)(0x1u));
  /* 1197fcdc mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1197fcdf push eax */
  push32((uint32_t)(EAX));
  /* 1197fce0 call dword ptr [0x119a6324] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6324))), 0x1197fce6u);
  /* 1197fce6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197fce8 jne 0x1197fcf1 */
  if (!C.zf) goto L_1197fcf1;
  /* 1197fcea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197fcec jmp 0x1197fe51 */
  goto L_1197fe51;
L_1197fcf1:;
  /* 1197fcf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197fcf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197fcf5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1197fcf8 push ecx */
  push32((uint32_t)(ECX));
  /* 1197fcf9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197fcfc push edx */
  push32((uint32_t)(EDX));
  /* 1197fcfd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197fd00 push eax */
  push32((uint32_t)(EAX));
  /* 1197fd01 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197fd04 push ecx */
  push32((uint32_t)(ECX));
  /* 1197fd05 call dword ptr [0x119a6320] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6320))), 0x1197fd0bu);
  /* 1197fd0b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1197fd0e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197fd12 jne 0x1197fd1b */
  if (!C.zf) goto L_1197fd1b;
  /* 1197fd14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197fd16 jmp 0x1197fe51 */
  goto L_1197fe51;
L_1197fd1b:;
  /* 1197fd1b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197fd1e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 1197fd24 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197fd26 je 0x1197fd6b */
  if (C.zf) goto L_1197fd6b;
  /* 1197fd28 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197fd2c je 0x1197fd66 */
  if (C.zf) goto L_1197fd66;
  /* 1197fd2e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1197fd31 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197fd34 jle 0x1197fd3d */
  if ((C.zf||C.sf!=C.of)) goto L_1197fd3d;
  /* 1197fd36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197fd38 jmp 0x1197fe51 */
  goto L_1197fe51;
L_1197fd3d:;
  /* 1197fd3d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1197fd40 push ecx */
  push32((uint32_t)(ECX));
  /* 1197fd41 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1197fd44 push edx */
  push32((uint32_t)(EDX));
  /* 1197fd45 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1197fd48 push eax */
  push32((uint32_t)(EAX));
  /* 1197fd49 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197fd4c push ecx */
  push32((uint32_t)(ECX));
  /* 1197fd4d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197fd50 push edx */
  push32((uint32_t)(EDX));
  /* 1197fd51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197fd54 push eax */
  push32((uint32_t)(EAX));
  /* 1197fd55 call dword ptr [0x119a6320] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6320))), 0x1197fd5bu);
  /* 1197fd5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197fd5d jne 0x1197fd66 */
  if (!C.zf) goto L_1197fd66;
  /* 1197fd5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197fd61 jmp 0x1197fe51 */
  goto L_1197fe51;
L_1197fd66:;
  /* 1197fd66 jmp 0x1197fe4a */
  goto L_1197fe4a;
L_1197fd6b:;
  /* 1197fd6b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1197fd6e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1197fd71 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1197fd78 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1197fd7b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1197fd7d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197fd80 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1197fd82 call 0x1197a910 */
  push32(0x1197fd87u); f_1197a910();
  /* 1197fd87 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1197fd8a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1197fd8d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1197fd90 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1197fd93 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1197fd9a jmp 0x1197fdb3 */
  goto L_1197fdb3;
  /* 1197fd9c mov eax, 1 */
  EAX = (0x1u);
  /* 1197fda1 ret  */
  ESPCHK(0x1197fb60u, _esp0);
  ESP += 4; return;
  /* 1197fda2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1197fda5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1197fdac mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1197fdb3:;
  /* 1197fdb3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197fdb7 jne 0x1197fdc0 */
  if (!C.zf) goto L_1197fdc0;
  /* 1197fdb9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197fdbb jmp 0x1197fe51 */
  goto L_1197fe51;
L_1197fdc0:;
  /* 1197fdc0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1197fdc3 push eax */
  push32((uint32_t)(EAX));
  /* 1197fdc4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197fdc7 push ecx */
  push32((uint32_t)(ECX));
  /* 1197fdc8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1197fdcb push edx */
  push32((uint32_t)(EDX));
  /* 1197fdcc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1197fdcf push eax */
  push32((uint32_t)(EAX));
  /* 1197fdd0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197fdd3 push ecx */
  push32((uint32_t)(ECX));
  /* 1197fdd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197fdd7 push edx */
  push32((uint32_t)(EDX));
  /* 1197fdd8 call dword ptr [0x119a6320] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6320))), 0x1197fddeu);
  /* 1197fdde test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1197fde0 jne 0x1197fde6 */
  if (!C.zf) goto L_1197fde6;
  /* 1197fde2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197fde4 jmp 0x1197fe51 */
  goto L_1197fe51;
L_1197fde6:;
  /* 1197fde6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197fdea jne 0x1197fe1a */
  if (!C.zf) goto L_1197fe1a;
  /* 1197fdec push 0 */
  push32((uint32_t)(0x0u));
  /* 1197fdee push 0 */
  push32((uint32_t)(0x0u));
  /* 1197fdf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197fdf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197fdf4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1197fdf7 push eax */
  push32((uint32_t)(EAX));
  /* 1197fdf8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197fdfb push ecx */
  push32((uint32_t)(ECX));
  /* 1197fdfc push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1197fe01 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1197fe04 push edx */
  push32((uint32_t)(EDX));
  /* 1197fe05 call dword ptr [0x119a6370] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6370))), 0x1197fe0bu);
  /* 1197fe0b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1197fe0e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197fe12 jne 0x1197fe18 */
  if (!C.zf) goto L_1197fe18;
  /* 1197fe14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197fe16 jmp 0x1197fe51 */
  goto L_1197fe51;
L_1197fe18:;
  /* 1197fe18 jmp 0x1197fe4a */
  goto L_1197fe4a;
L_1197fe1a:;
  /* 1197fe1a push 0 */
  push32((uint32_t)(0x0u));
  /* 1197fe1c push 0 */
  push32((uint32_t)(0x0u));
  /* 1197fe1e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1197fe21 push eax */
  push32((uint32_t)(EAX));
  /* 1197fe22 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1197fe25 push ecx */
  push32((uint32_t)(ECX));
  /* 1197fe26 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1197fe29 push edx */
  push32((uint32_t)(EDX));
  /* 1197fe2a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1197fe2d push eax */
  push32((uint32_t)(EAX));
  /* 1197fe2e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1197fe33 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1197fe36 push ecx */
  push32((uint32_t)(ECX));
  /* 1197fe37 call dword ptr [0x119a6370] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6370))), 0x1197fe3du);
  /* 1197fe3d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1197fe40 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197fe44 jne 0x1197fe4a */
  if (!C.zf) goto L_1197fe4a;
  /* 1197fe46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1197fe48 jmp 0x1197fe51 */
  goto L_1197fe51;
L_1197fe4a:;
  /* 1197fe4a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1197fe4d jmp 0x1197fe51 */
  goto L_1197fe51;
L_1197fe4f:;
  /* 1197fe4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1197fe51:;
  /* 1197fe51 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1197fe54 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1197fe57 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1197fe5e pop edi */
  EDI = (pop32());
  /* 1197fe5f pop esi */
  ESI = (pop32());
  /* 1197fe60 pop ebx */
  EBX = (pop32());
  /* 1197fe61 mov esp, ebp */
  ESP = (EBP);
  /* 1197fe63 pop ebp */
  EBP = (pop32());
  /* 1197fe64 ret  */
  ESPCHK(0x1197fb60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe70 @ 0x1197fe70 (80 bytes, 32 insns) */
void f_1197fe70(void) {
  FTRACE(0x1197fe70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197fe70 push ebp */
  push32((uint32_t)(EBP));
  /* 1197fe71 mov ebp, esp */
  EBP = (ESP);
  /* 1197fe73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197fe76 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197fe79 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1197fe7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197fe7f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1197fe82:;
  /* 1197fe82 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197fe85 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1197fe88 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197fe8b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1197fe8e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197fe90 je 0x1197fea7 */
  if (C.zf) goto L_1197fea7;
  /* 1197fe92 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197fe95 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1197fe98 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197fe9a je 0x1197fea7 */
  if (C.zf) goto L_1197fea7;
  /* 1197fe9c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197fe9f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1197fea2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1197fea5 jmp 0x1197fe82 */
  goto L_1197fe82;
L_1197fea7:;
  /* 1197fea7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197feaa movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1197fead test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1197feaf jne 0x1197feb9 */
  if (!C.zf) goto L_1197feb9;
  /* 1197feb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197feb4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197feb7 jmp 0x1197febc */
  goto L_1197febc;
L_1197feb9:;
  /* 1197feb9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1197febc:;
  /* 1197febc mov esp, ebp */
  ESP = (EBP);
  /* 1197febe pop ebp */
  EBP = (pop32());
  /* 1197febf ret  */
  ESPCHK(0x1197fe70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fec0 @ 0x1197fec0 (130 bytes, 43 insns) */
void f_1197fec0(void) {
  FTRACE(0x1197fec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197fec0 push ebp */
  push32((uint32_t)(EBP));
  /* 1197fec1 mov ebp, esp */
  EBP = (ESP);
  /* 1197fec3 push ecx */
  push32((uint32_t)(ECX));
  /* 1197fec4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197fec7 cmp eax, dword ptr [0x119a537c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119a537c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197fecd jae 0x1197fef1 */
  if (!C.cf) goto L_1197fef1;
  /* 1197fecf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197fed2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1197fed5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197fed8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1197fedb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1197fede mov eax, dword ptr [ecx*4 + 0x119a5240] */
  EAX = (r32((uint32_t)(ECX*4 + 0x119a5240)));
  /* 1197fee5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1197feea and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1197feed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1197feef jne 0x1197ff0c */
  if (!C.zf) goto L_1197ff0c;
L_1197fef1:;
  /* 1197fef1 call 0x1197f640 */
  push32(0x1197fef6u); f_1197f640();
  /* 1197fef6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1197fefc call 0x1197f650 */
  push32(0x1197ff01u); f_1197f650();
  /* 1197ff01 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1197ff07 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1197ff0a jmp 0x1197ff3e */
  goto L_1197ff3e;
L_1197ff0c:;
  /* 1197ff0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197ff0f push edx */
  push32((uint32_t)(EDX));
  /* 1197ff10 call 0x11980e60 */
  push32(0x1197ff15u); f_11980e60();
  /* 1197ff15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197ff18 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1197ff1b push eax */
  push32((uint32_t)(EAX));
  /* 1197ff1c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197ff1f push ecx */
  push32((uint32_t)(ECX));
  /* 1197ff20 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197ff23 push edx */
  push32((uint32_t)(EDX));
  /* 1197ff24 call 0x1197ff50 */
  push32(0x1197ff29u); f_1197ff50();
  /* 1197ff29 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197ff2c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1197ff2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197ff32 push eax */
  push32((uint32_t)(EAX));
  /* 1197ff33 call 0x11980ef0 */
  push32(0x1197ff38u); f_11980ef0();
  /* 1197ff38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197ff3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1197ff3e:;
  /* 1197ff3e mov esp, ebp */
  ESP = (EBP);
  /* 1197ff40 pop ebp */
  EBP = (pop32());
  /* 1197ff41 ret  */
  ESPCHK(0x1197fec0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff50 @ 0x1197ff50 (178 bytes, 56 insns) */
void f_1197ff50(void) {
  FTRACE(0x1197ff50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1197ff50 push ebp */
  push32((uint32_t)(EBP));
  /* 1197ff51 mov ebp, esp */
  EBP = (ESP);
  /* 1197ff53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1197ff56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197ff59 push eax */
  push32((uint32_t)(EAX));
  /* 1197ff5a call 0x11980ce0 */
  push32(0x1197ff5fu); f_11980ce0();
  /* 1197ff5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197ff62 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1197ff65 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197ff69 jne 0x1197ff7e */
  if (!C.zf) goto L_1197ff7e;
  /* 1197ff6b call 0x1197f640 */
  push32(0x1197ff70u); f_1197f640();
  /* 1197ff70 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1197ff76 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1197ff79 jmp 0x1197fffe */
  goto L_1197fffe;
L_1197ff7e:;
  /* 1197ff7e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1197ff81 push ecx */
  push32((uint32_t)(ECX));
  /* 1197ff82 push 0 */
  push32((uint32_t)(0x0u));
  /* 1197ff84 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1197ff87 push edx */
  push32((uint32_t)(EDX));
  /* 1197ff88 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1197ff8b push eax */
  push32((uint32_t)(EAX));
  /* 1197ff8c call dword ptr [0x119a6310] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6310))), 0x1197ff92u);
  /* 1197ff92 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1197ff95 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197ff99 jne 0x1197ffa6 */
  if (!C.zf) goto L_1197ffa6;
  /* 1197ff9b call dword ptr [0x119a63d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63d8))), 0x1197ffa1u);
  /* 1197ffa1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1197ffa4 jmp 0x1197ffad */
  goto L_1197ffad;
L_1197ffa6:;
  /* 1197ffa6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1197ffad:;
  /* 1197ffad cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1197ffb1 je 0x1197ffc4 */
  if (C.zf) goto L_1197ffc4;
  /* 1197ffb3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1197ffb6 push ecx */
  push32((uint32_t)(ECX));
  /* 1197ffb7 call 0x1197f5a0 */
  push32(0x1197ffbcu); f_1197f5a0();
  /* 1197ffbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1197ffbf or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1197ffc2 jmp 0x1197fffe */
  goto L_1197fffe;
L_1197ffc4:;
  /* 1197ffc4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197ffc7 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1197ffca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197ffcd and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1197ffd0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1197ffd3 mov ecx, dword ptr [edx*4 + 0x119a5240] */
  ECX = (r32((uint32_t)(EDX*4 + 0x119a5240)));
  /* 1197ffda mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1197ffde and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 1197ffe1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197ffe4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1197ffe7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1197ffea and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1197ffed imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1197fff0 mov eax, dword ptr [eax*4 + 0x119a5240] */
  EAX = (r32((uint32_t)(EAX*4 + 0x119a5240)));
  /* 1197fff7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1197fffb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1197fffe:;
  /* 1197fffe mov esp, ebp */
  ESP = (EBP);
  /* 11980000 pop ebp */
  EBP = (pop32());
  /* 11980001 ret  */
  ESPCHK(0x1197ff50u, _esp0);
  ESP += 4; return;
}

/* FUN_10010010 @ 0x11980010 (130 bytes, 43 insns) */
void f_11980010(void) {
  FTRACE(0x11980010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11980010 push ebp */
  push32((uint32_t)(EBP));
  /* 11980011 mov ebp, esp */
  EBP = (ESP);
  /* 11980013 push ecx */
  push32((uint32_t)(ECX));
  /* 11980014 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11980017 cmp eax, dword ptr [0x119a537c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119a537c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198001d jae 0x11980041 */
  if (!C.cf) goto L_11980041;
  /* 1198001f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11980022 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11980025 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11980028 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1198002b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1198002e mov eax, dword ptr [ecx*4 + 0x119a5240] */
  EAX = (r32((uint32_t)(ECX*4 + 0x119a5240)));
  /* 11980035 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1198003a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1198003d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1198003f jne 0x1198005c */
  if (!C.zf) goto L_1198005c;
L_11980041:;
  /* 11980041 call 0x1197f640 */
  push32(0x11980046u); f_1197f640();
  /* 11980046 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1198004c call 0x1197f650 */
  push32(0x11980051u); f_1197f650();
  /* 11980051 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11980057 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1198005a jmp 0x1198008e */
  goto L_1198008e;
L_1198005c:;
  /* 1198005c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198005f push edx */
  push32((uint32_t)(EDX));
  /* 11980060 call 0x11980e60 */
  push32(0x11980065u); f_11980e60();
  /* 11980065 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11980068 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1198006b push eax */
  push32((uint32_t)(EAX));
  /* 1198006c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1198006f push ecx */
  push32((uint32_t)(ECX));
  /* 11980070 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11980073 push edx */
  push32((uint32_t)(EDX));
  /* 11980074 call 0x119800a0 */
  push32(0x11980079u); f_119800a0();
  /* 11980079 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198007c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1198007f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11980082 push eax */
  push32((uint32_t)(EAX));
  /* 11980083 call 0x11980ef0 */
  push32(0x11980088u); f_11980ef0();
  /* 11980088 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198008b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1198008e:;
  /* 1198008e mov esp, ebp */
  ESP = (EBP);
  /* 11980090 pop ebp */
  EBP = (pop32());
  /* 11980091 ret  */
  ESPCHK(0x11980010u, _esp0);
  ESP += 4; return;
}

/* FUN_100100a0 @ 0x119800a0 (627 bytes, 182 insns) */
void f_119800a0(void) {
  FTRACE(0x119800a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119800a0 push ebp */
  push32((uint32_t)(EBP));
  /* 119800a1 mov ebp, esp */
  EBP = (ESP);
  /* 119800a3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119800a9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 119800b0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119800b3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 119800b9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119800bd jne 0x119800c6 */
  if (!C.zf) goto L_119800c6;
  /* 119800bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119800c1 jmp 0x1198030f */
  goto L_1198030f;
L_119800c6:;
  /* 119800c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119800c9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 119800cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119800cf and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 119800d2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119800d5 mov eax, dword ptr [ecx*4 + 0x119a5240] */
  EAX = (r32((uint32_t)(ECX*4 + 0x119a5240)));
  /* 119800dc movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 119800e1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 119800e4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119800e6 je 0x119800f8 */
  if (C.zf) goto L_119800f8;
  /* 119800e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 119800ea push 0 */
  push32((uint32_t)(0x0u));
  /* 119800ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119800ef push edx */
  push32((uint32_t)(EDX));
  /* 119800f0 call 0x1197ff50 */
  push32(0x119800f5u); f_1197ff50();
  /* 119800f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119800f8:;
  /* 119800f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119800fb sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 119800fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11980101 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11980104 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11980107 mov edx, dword ptr [eax*4 + 0x119a5240] */
  EDX = (r32((uint32_t)(EAX*4 + 0x119a5240)));
  /* 1198010e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11980113 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11980118 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1198011a je 0x1198022c */
  if (C.zf) goto L_1198022c;
  /* 11980120 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11980123 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11980126 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1198012d:;
  /* 1198012d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11980130 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11980133 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980136 jae 0x1198022a */
  if (!C.cf) goto L_1198022a;
  /* 1198013c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11980142 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11980145:;
  /* 11980145 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11980148 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1198014e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11980150 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980156 jge 0x119801b7 */
  if ((C.sf==C.of)) goto L_119801b7;
  /* 11980158 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1198015b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1198015e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980161 jae 0x119801b7 */
  if (!C.cf) goto L_119801b7;
  /* 11980163 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11980166 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11980168 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1198016e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11980171 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11980174 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11980177 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1198017e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980181 jne 0x119801a1 */
  if (!C.zf) goto L_119801a1;
  /* 11980183 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 11980189 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198018c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 11980192 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11980195 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 11980198 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1198019b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198019e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_119801a1:;
  /* 119801a1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119801a4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 119801aa mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 119801ac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119801af add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119801b2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119801b5 jmp 0x11980145 */
  goto L_11980145;
L_119801b7:;
  /* 119801b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 119801b9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 119801bf push edx */
  push32((uint32_t)(EDX));
  /* 119801c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119801c3 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 119801c9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119801cb push eax */
  push32((uint32_t)(EAX));
  /* 119801cc lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 119801d2 push edx */
  push32((uint32_t)(EDX));
  /* 119801d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119801d6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 119801d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119801dc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 119801df imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119801e2 mov edx, dword ptr [eax*4 + 0x119a5240] */
  EDX = (r32((uint32_t)(EAX*4 + 0x119a5240)));
  /* 119801e9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 119801ec push eax */
  push32((uint32_t)(EAX));
  /* 119801ed call dword ptr [0x119a6398] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6398))), 0x119801f3u);
  /* 119801f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119801f5 je 0x1198021a */
  if (C.zf) goto L_1198021a;
  /* 119801f7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119801fa add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11980200 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11980203 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11980206 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1198020c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1198020e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980214 jge 0x11980218 */
  if ((C.sf==C.of)) goto L_11980218;
  /* 11980216 jmp 0x1198022a */
  goto L_1198022a;
L_11980218:;
  /* 11980218 jmp 0x11980225 */
  goto L_11980225;
L_1198021a:;
  /* 1198021a call dword ptr [0x119a63d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63d8))), 0x11980220u);
  /* 11980220 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11980223 jmp 0x1198022a */
  goto L_1198022a;
L_11980225:;
  /* 11980225 jmp 0x1198012d */
  goto L_1198012d;
L_1198022a:;
  /* 1198022a jmp 0x1198027c */
  goto L_1198027c;
L_1198022c:;
  /* 1198022c push 0 */
  push32((uint32_t)(0x0u));
  /* 1198022e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 11980234 push ecx */
  push32((uint32_t)(ECX));
  /* 11980235 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11980238 push edx */
  push32((uint32_t)(EDX));
  /* 11980239 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1198023c push eax */
  push32((uint32_t)(EAX));
  /* 1198023d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11980240 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11980243 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11980246 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11980249 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1198024c mov eax, dword ptr [ecx*4 + 0x119a5240] */
  EAX = (r32((uint32_t)(ECX*4 + 0x119a5240)));
  /* 11980253 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 11980256 push ecx */
  push32((uint32_t)(ECX));
  /* 11980257 call dword ptr [0x119a6398] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6398))), 0x1198025du);
  /* 1198025d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1198025f je 0x11980273 */
  if (C.zf) goto L_11980273;
  /* 11980261 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11980268 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1198026e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11980271 jmp 0x1198027c */
  goto L_1198027c;
L_11980273:;
  /* 11980273 call dword ptr [0x119a63d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63d8))), 0x11980279u);
  /* 11980279 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1198027c:;
  /* 1198027c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980280 jne 0x11980306 */
  if (!C.zf) goto L_11980306;
  /* 11980286 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198028a je 0x119802ba */
  if (C.zf) goto L_119802ba;
  /* 1198028c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980290 jne 0x119802a9 */
  if (!C.zf) goto L_119802a9;
  /* 11980292 call 0x1197f640 */
  push32(0x11980297u); f_1197f640();
  /* 11980297 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1198029d call 0x1197f650 */
  push32(0x119802a2u); f_1197f650();
  /* 119802a2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119802a5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 119802a7 jmp 0x119802b5 */
  goto L_119802b5;
L_119802a9:;
  /* 119802a9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119802ac push edx */
  push32((uint32_t)(EDX));
  /* 119802ad call 0x1197f5a0 */
  push32(0x119802b2u); f_1197f5a0();
  /* 119802b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119802b5:;
  /* 119802b5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119802b8 jmp 0x1198030f */
  goto L_1198030f;
L_119802ba:;
  /* 119802ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119802bd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 119802c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119802c3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 119802c6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119802c9 mov edx, dword ptr [eax*4 + 0x119a5240] */
  EDX = (r32((uint32_t)(EAX*4 + 0x119a5240)));
  /* 119802d0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 119802d5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 119802d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119802da je 0x119802eb */
  if (C.zf) goto L_119802eb;
  /* 119802dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119802df movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 119802e2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119802e5 jne 0x119802eb */
  if (!C.zf) goto L_119802eb;
  /* 119802e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119802e9 jmp 0x1198030f */
  goto L_1198030f;
L_119802eb:;
  /* 119802eb call 0x1197f640 */
  push32(0x119802f0u); f_1197f640();
  /* 119802f0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 119802f6 call 0x1197f650 */
  push32(0x119802fbu); f_1197f650();
  /* 119802fb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11980301 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11980304 jmp 0x1198030f */
  goto L_1198030f;
L_11980306:;
  /* 11980306 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11980309 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1198030f:;
  /* 1198030f mov esp, ebp */
  ESP = (EBP);
  /* 11980311 pop ebp */
  EBP = (pop32());
  /* 11980312 ret  */
  ESPCHK(0x119800a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010320 @ 0x11980320 (199 bytes, 68 insns) */
void f_11980320(void) {
  FTRACE(0x11980320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11980320 push ebp */
  push32((uint32_t)(EBP));
  /* 11980321 mov ebp, esp */
  EBP = (ESP);
  /* 11980323 push ecx */
  push32((uint32_t)(ECX));
  /* 11980324 push ebx */
  push32((uint32_t)(EBX));
  /* 11980325 push esi */
  push32((uint32_t)(ESI));
  /* 11980326 push edi */
  push32((uint32_t)(EDI));
L_11980327:;
  /* 11980327 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198032b jne 0x1198034b */
  if (!C.zf) goto L_1198034b;
  /* 1198032d push 0x1199fba8 */
  push32((uint32_t)(0x1199fba8u));
  /* 11980332 push 0 */
  push32((uint32_t)(0x0u));
  /* 11980334 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 11980336 push 0x1199fc78 */
  push32((uint32_t)(0x1199fc78u));
  /* 1198033b push 2 */
  push32((uint32_t)(0x2u));
  /* 1198033d call 0x11976830 */
  push32(0x11980342u); f_11976830();
  /* 11980342 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11980345 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980348 jne 0x1198034b */
  if (!C.zf) goto L_1198034b;
  /* 1198034a int3  */
  x86_unimpl("int3 @ 0x1198034a");
L_1198034b:;
  /* 1198034b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1198034d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1198034f jne 0x11980327 */
  if (!C.zf) goto L_11980327;
  /* 11980351 mov ecx, dword ptr [0x119a3a8c] */
  ECX = (r32((uint32_t)(0x119a3a8c)));
  /* 11980357 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198035a mov dword ptr [0x119a3a8c], ecx */
  w32((uint32_t)(0x119a3a8c), (ECX));
  /* 11980360 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11980363 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11980366 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 11980368 push 0x1199fc78 */
  push32((uint32_t)(0x1199fc78u));
  /* 1198036d push 2 */
  push32((uint32_t)(0x2u));
  /* 1198036f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11980374 call 0x11977770 */
  push32(0x11980379u); f_11977770();
  /* 11980379 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198037c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1198037f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11980382 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11980385 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980389 je 0x119803a6 */
  if (C.zf) goto L_119803a6;
  /* 1198038b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1198038e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11980391 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11980394 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11980397 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1198039a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1198039d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 119803a4 jmp 0x119803cb */
  goto L_119803cb;
L_119803a6:;
  /* 119803a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119803a9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 119803ac or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 119803af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119803b2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 119803b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119803b8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119803bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119803be mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 119803c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119803c4 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_119803cb:;
  /* 119803cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119803ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119803d1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 119803d4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 119803d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119803d9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 119803e0 pop edi */
  EDI = (pop32());
  /* 119803e1 pop esi */
  ESI = (pop32());
  /* 119803e2 pop ebx */
  EBX = (pop32());
  /* 119803e3 mov esp, ebp */
  ESP = (EBP);
  /* 119803e5 pop ebp */
  EBP = (pop32());
  /* 119803e6 ret  */
  ESPCHK(0x11980320u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x119803f0 (50 bytes, 17 insns) */
void f_119803f0(void) {
  FTRACE(0x119803f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119803f0 push ebp */
  push32((uint32_t)(EBP));
  /* 119803f1 mov ebp, esp */
  EBP = (ESP);
  /* 119803f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119803f6 cmp eax, dword ptr [0x119a537c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119a537c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119803fc jb 0x11980402 */
  if (C.cf) goto L_11980402;
  /* 119803fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11980400 jmp 0x11980420 */
  goto L_11980420;
L_11980402:;
  /* 11980402 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11980405 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11980408 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198040b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1198040e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11980411 mov eax, dword ptr [ecx*4 + 0x119a5240] */
  EAX = (r32((uint32_t)(ECX*4 + 0x119a5240)));
  /* 11980418 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1198041d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_11980420:;
  /* 11980420 pop ebp */
  EBP = (pop32());
  /* 11980421 ret  */
  ESPCHK(0x119803f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010430 @ 0x11980430 (300 bytes, 80 insns) */
void f_11980430(void) {
  FTRACE(0x11980430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11980430 push ebp */
  push32((uint32_t)(EBP));
  /* 11980431 mov ebp, esp */
  EBP = (ESP);
  /* 11980433 push ecx */
  push32((uint32_t)(ECX));
  /* 11980434 cmp dword ptr [0x119a4f40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a4f40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198043b jne 0x11980449 */
  if (!C.zf) goto L_11980449;
  /* 1198043d mov dword ptr [0x119a4f40], 0x200 */
  w32((uint32_t)(0x119a4f40), (0x200u));
  /* 11980447 jmp 0x1198045c */
  goto L_1198045c;
L_11980449:;
  /* 11980449 cmp dword ptr [0x119a4f40], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x119a4f40))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980450 jge 0x1198045c */
  if ((C.sf==C.of)) goto L_1198045c;
  /* 11980452 mov dword ptr [0x119a4f40], 0x14 */
  w32((uint32_t)(0x119a4f40), (0x14u));
L_1198045c:;
  /* 1198045c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 11980461 push 0x1199fc84 */
  push32((uint32_t)(0x1199fc84u));
  /* 11980466 push 2 */
  push32((uint32_t)(0x2u));
  /* 11980468 push 4 */
  push32((uint32_t)(0x4u));
  /* 1198046a mov eax, dword ptr [0x119a4f40] */
  EAX = (r32((uint32_t)(0x119a4f40)));
  /* 1198046f push eax */
  push32((uint32_t)(EAX));
  /* 11980470 call 0x11977b80 */
  push32(0x11980475u); f_11977b80();
  /* 11980475 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11980478 mov dword ptr [0x119a3c00], eax */
  w32((uint32_t)(0x119a3c00), (EAX));
  /* 1198047d cmp dword ptr [0x119a3c00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3c00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980484 jne 0x119804c5 */
  if (!C.zf) goto L_119804c5;
  /* 11980486 mov dword ptr [0x119a4f40], 0x14 */
  w32((uint32_t)(0x119a4f40), (0x14u));
  /* 11980490 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 11980495 push 0x1199fc84 */
  push32((uint32_t)(0x1199fc84u));
  /* 1198049a push 2 */
  push32((uint32_t)(0x2u));
  /* 1198049c push 4 */
  push32((uint32_t)(0x4u));
  /* 1198049e mov ecx, dword ptr [0x119a4f40] */
  ECX = (r32((uint32_t)(0x119a4f40)));
  /* 119804a4 push ecx */
  push32((uint32_t)(ECX));
  /* 119804a5 call 0x11977b80 */
  push32(0x119804aau); f_11977b80();
  /* 119804aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119804ad mov dword ptr [0x119a3c00], eax */
  w32((uint32_t)(0x119a3c00), (EAX));
  /* 119804b2 cmp dword ptr [0x119a3c00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3c00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119804b9 jne 0x119804c5 */
  if (!C.zf) goto L_119804c5;
  /* 119804bb push 0x1a */
  push32((uint32_t)(0x1au));
  /* 119804bd call 0x119766e0 */
  push32(0x119804c2u); f_119766e0();
  /* 119804c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119804c5:;
  /* 119804c5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119804cc jmp 0x119804d7 */
  goto L_119804d7;
L_119804ce:;
  /* 119804ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119804d1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119804d4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_119804d7:;
  /* 119804d7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119804db jge 0x119804f6 */
  if ((C.sf==C.of)) goto L_119804f6;
  /* 119804dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119804e0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 119804e3 add eax, 0x119a2120 */
  { uint32_t _a=(EAX),_b=(0x119a2120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119804e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119804eb mov edx, dword ptr [0x119a3c00] */
  EDX = (r32((uint32_t)(0x119a3c00)));
  /* 119804f1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 119804f4 jmp 0x119804ce */
  goto L_119804ce;
L_119804f6:;
  /* 119804f6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119804fd jmp 0x11980508 */
  goto L_11980508;
L_119804ff:;
  /* 119804ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11980502 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11980505 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11980508:;
  /* 11980508 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198050c jge 0x11980558 */
  if ((C.sf==C.of)) goto L_11980558;
  /* 1198050e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11980511 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11980514 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11980517 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1198051a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1198051d mov eax, dword ptr [ecx*4 + 0x119a5240] */
  EAX = (r32((uint32_t)(ECX*4 + 0x119a5240)));
  /* 11980524 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980528 je 0x11980546 */
  if (C.zf) goto L_11980546;
  /* 1198052a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1198052d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11980530 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11980533 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11980536 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11980539 mov eax, dword ptr [ecx*4 + 0x119a5240] */
  EAX = (r32((uint32_t)(ECX*4 + 0x119a5240)));
  /* 11980540 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980544 jne 0x11980556 */
  if (!C.zf) goto L_11980556;
L_11980546:;
  /* 11980546 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11980549 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1198054c mov dword ptr [ecx + 0x119a2130], 0xffffffff */
  w32((uint32_t)(ECX + 0x119a2130), (0xffffffffu));
L_11980556:;
  /* 11980556 jmp 0x119804ff */
  goto L_119804ff;
L_11980558:;
  /* 11980558 mov esp, ebp */
  ESP = (EBP);
  /* 1198055a pop ebp */
  EBP = (pop32());
  /* 1198055b ret  */
  ESPCHK(0x11980430u, _esp0);
  ESP += 4; return;
}

/* FUN_10010560 @ 0x11980560 (26 bytes, 9 insns) */
void f_11980560(void) {
  FTRACE(0x11980560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11980560 push ebp */
  push32((uint32_t)(EBP));
  /* 11980561 mov ebp, esp */
  EBP = (ESP);
  /* 11980563 call 0x11981160 */
  push32(0x11980568u); f_11981160();
  /* 11980568 movsx eax, byte ptr [0x119a38a4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x119a38a4))));
  /* 1198056f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11980571 je 0x11980578 */
  if (C.zf) goto L_11980578;
  /* 11980573 call 0x11980f20 */
  push32(0x11980578u); f_11980f20();
L_11980578:;
  /* 11980578 pop ebp */
  EBP = (pop32());
  /* 11980579 ret  */
  ESPCHK(0x11980560u, _esp0);
  ESP += 4; return;
}

/* FUN_10010580 @ 0x11980580 (61 bytes, 20 insns) */
void f_11980580(void) {
  FTRACE(0x11980580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11980580 push ebp */
  push32((uint32_t)(EBP));
  /* 11980581 mov ebp, esp */
  EBP = (ESP);
  /* 11980583 cmp dword ptr [ebp + 8], 0x119a2120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x119a2120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198058a jb 0x119805ae */
  if (C.cf) goto L_119805ae;
  /* 1198058c cmp dword ptr [ebp + 8], 0x119a2380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x119a2380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980593 ja 0x119805ae */
  if ((!C.cf&&!C.zf)) goto L_119805ae;
  /* 11980595 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11980598 sub eax, 0x119a2120 */
  { uint32_t _a=(EAX),_b=(0x119a2120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1198059d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 119805a0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119805a3 push eax */
  push32((uint32_t)(EAX));
  /* 119805a4 call 0x1197b170 */
  push32(0x119805a9u); f_1197b170();
  /* 119805a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119805ac jmp 0x119805bb */
  goto L_119805bb;
L_119805ae:;
  /* 119805ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119805b1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119805b4 push ecx */
  push32((uint32_t)(ECX));
  /* 119805b5 call dword ptr [0x119a634c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a634c))), 0x119805bbu);
L_119805bb:;
  /* 119805bb pop ebp */
  EBP = (pop32());
  /* 119805bc ret  */
  ESPCHK(0x11980580u, _esp0);
  ESP += 4; return;
}

/* FUN_100105c0 @ 0x119805c0 (41 bytes, 16 insns) */
void f_119805c0(void) {
  FTRACE(0x119805c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119805c0 push ebp */
  push32((uint32_t)(EBP));
  /* 119805c1 mov ebp, esp */
  EBP = (ESP);
  /* 119805c3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119805c7 jge 0x119805da */
  if ((C.sf==C.of)) goto L_119805da;
  /* 119805c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119805cc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119805cf push eax */
  push32((uint32_t)(EAX));
  /* 119805d0 call 0x1197b170 */
  push32(0x119805d5u); f_1197b170();
  /* 119805d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119805d8 jmp 0x119805e7 */
  goto L_119805e7;
L_119805da:;
  /* 119805da mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119805dd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119805e0 push ecx */
  push32((uint32_t)(ECX));
  /* 119805e1 call dword ptr [0x119a634c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a634c))), 0x119805e7u);
L_119805e7:;
  /* 119805e7 pop ebp */
  EBP = (pop32());
  /* 119805e8 ret  */
  ESPCHK(0x119805c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100105f0 @ 0x119805f0 (61 bytes, 20 insns) */
void f_119805f0(void) {
  FTRACE(0x119805f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119805f0 push ebp */
  push32((uint32_t)(EBP));
  /* 119805f1 mov ebp, esp */
  EBP = (ESP);
  /* 119805f3 cmp dword ptr [ebp + 8], 0x119a2120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x119a2120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119805fa jb 0x1198061e */
  if (C.cf) goto L_1198061e;
  /* 119805fc cmp dword ptr [ebp + 8], 0x119a2380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x119a2380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980603 ja 0x1198061e */
  if ((!C.cf&&!C.zf)) goto L_1198061e;
  /* 11980605 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11980608 sub eax, 0x119a2120 */
  { uint32_t _a=(EAX),_b=(0x119a2120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1198060d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11980610 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11980613 push eax */
  push32((uint32_t)(EAX));
  /* 11980614 call 0x1197b210 */
  push32(0x11980619u); f_1197b210();
  /* 11980619 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198061c jmp 0x1198062b */
  goto L_1198062b;
L_1198061e:;
  /* 1198061e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11980621 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11980624 push ecx */
  push32((uint32_t)(ECX));
  /* 11980625 call dword ptr [0x119a6348] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6348))), 0x1198062bu);
L_1198062b:;
  /* 1198062b pop ebp */
  EBP = (pop32());
  /* 1198062c ret  */
  ESPCHK(0x119805f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010630 @ 0x11980630 (41 bytes, 16 insns) */
void f_11980630(void) {
  FTRACE(0x11980630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11980630 push ebp */
  push32((uint32_t)(EBP));
  /* 11980631 mov ebp, esp */
  EBP = (ESP);
  /* 11980633 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980637 jge 0x1198064a */
  if ((C.sf==C.of)) goto L_1198064a;
  /* 11980639 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198063c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198063f push eax */
  push32((uint32_t)(EAX));
  /* 11980640 call 0x1197b210 */
  push32(0x11980645u); f_1197b210();
  /* 11980645 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11980648 jmp 0x11980657 */
  goto L_11980657;
L_1198064a:;
  /* 1198064a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1198064d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11980650 push ecx */
  push32((uint32_t)(ECX));
  /* 11980651 call dword ptr [0x119a6348] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6348))), 0x11980657u);
L_11980657:;
  /* 11980657 pop ebp */
  EBP = (pop32());
  /* 11980658 ret  */
  ESPCHK(0x11980630u, _esp0);
  ESP += 4; return;
}

/* FUN_10010660 @ 0x11980660 (119 bytes, 34 insns) */
void f_11980660(void) {
  FTRACE(0x11980660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11980660 push ebp */
  push32((uint32_t)(EBP));
  /* 11980661 mov ebp, esp */
  EBP = (ESP);
  /* 11980663 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11980666 push 0x119a3bfc */
  push32((uint32_t)(0x119a3bfcu));
  /* 1198066b call dword ptr [0x119a63ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63ac))), 0x11980671u);
  /* 11980671 cmp dword ptr [0x119a3bec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3bec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980678 je 0x11980698 */
  if (C.zf) goto L_11980698;
  /* 1198067a push 0x119a3bfc */
  push32((uint32_t)(0x119a3bfcu));
  /* 1198067f call dword ptr [0x119a639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a639c))), 0x11980685u);
  /* 11980685 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11980687 call 0x1197b170 */
  push32(0x1198068cu); f_1197b170();
  /* 1198068c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198068f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11980696 jmp 0x1198069f */
  goto L_1198069f;
L_11980698:;
  /* 11980698 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1198069f:;
  /* 1198069f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 119806a3 push eax */
  push32((uint32_t)(EAX));
  /* 119806a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119806a7 push ecx */
  push32((uint32_t)(ECX));
  /* 119806a8 call 0x119806e0 */
  push32(0x119806adu); f_119806e0();
  /* 119806ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119806b0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119806b3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119806b7 je 0x119806c5 */
  if (C.zf) goto L_119806c5;
  /* 119806b9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 119806bb call 0x1197b210 */
  push32(0x119806c0u); f_1197b210();
  /* 119806c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119806c3 jmp 0x119806d0 */
  goto L_119806d0;
L_119806c5:;
  /* 119806c5 push 0x119a3bfc */
  push32((uint32_t)(0x119a3bfcu));
  /* 119806ca call dword ptr [0x119a639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a639c))), 0x119806d0u);
L_119806d0:;
  /* 119806d0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119806d3 mov esp, ebp */
  ESP = (EBP);
  /* 119806d5 pop ebp */
  EBP = (pop32());
  /* 119806d6 ret  */
  ESPCHK(0x11980660u, _esp0);
  ESP += 4; return;
}

/* FUN_100106e0 @ 0x119806e0 (160 bytes, 50 insns) */
void f_119806e0(void) {
  FTRACE(0x119806e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119806e0 push ebp */
  push32((uint32_t)(EBP));
  /* 119806e1 mov ebp, esp */
  EBP = (ESP);
  /* 119806e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119806e6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119806ea jne 0x119806f3 */
  if (!C.zf) goto L_119806f3;
  /* 119806ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119806ee jmp 0x1198077c */
  goto L_1198077c;
L_119806f3:;
  /* 119806f3 cmp dword ptr [0x119a3a70], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3a70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119806fa jne 0x1198072a */
  if (!C.zf) goto L_1198072a;
  /* 119806fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119806ff and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11980704 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980709 jle 0x1198071b */
  if ((C.zf||C.sf!=C.of)) goto L_1198071b;
  /* 1198070b call 0x1197f640 */
  push32(0x11980710u); f_1197f640();
  /* 11980710 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 11980716 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11980719 jmp 0x1198077c */
  goto L_1198077c;
L_1198071b:;
  /* 1198071b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198071e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 11980721 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11980723 mov eax, 1 */
  EAX = (0x1u);
  /* 11980728 jmp 0x1198077c */
  goto L_1198077c;
L_1198072a:;
  /* 1198072a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11980731 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11980734 push eax */
  push32((uint32_t)(EAX));
  /* 11980735 push 0 */
  push32((uint32_t)(0x0u));
  /* 11980737 mov ecx, dword ptr [0x119a1ea4] */
  ECX = (r32((uint32_t)(0x119a1ea4)));
  /* 1198073d push ecx */
  push32((uint32_t)(ECX));
  /* 1198073e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11980741 push edx */
  push32((uint32_t)(EDX));
  /* 11980742 push 1 */
  push32((uint32_t)(0x1u));
  /* 11980744 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 11980747 push eax */
  push32((uint32_t)(EAX));
  /* 11980748 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1198074d mov ecx, dword ptr [0x119a3a80] */
  ECX = (r32((uint32_t)(0x119a3a80)));
  /* 11980753 push ecx */
  push32((uint32_t)(ECX));
  /* 11980754 call dword ptr [0x119a6370] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6370))), 0x1198075au);
  /* 1198075a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1198075d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980761 je 0x11980769 */
  if (C.zf) goto L_11980769;
  /* 11980763 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980767 je 0x11980779 */
  if (C.zf) goto L_11980779;
L_11980769:;
  /* 11980769 call 0x1197f640 */
  push32(0x1198076eu); f_1197f640();
  /* 1198076e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 11980774 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11980777 jmp 0x1198077c */
  goto L_1198077c;
L_11980779:;
  /* 11980779 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1198077c:;
  /* 1198077c mov esp, ebp */
  ESP = (EBP);
  /* 1198077e pop ebp */
  EBP = (pop32());
  /* 1198077f ret  */
  ESPCHK(0x119806e0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11980780 (32 bytes, 18 insns) */
void f_11980780(void) {
  FTRACE(0x11980780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11980780 push ebp */
  push32((uint32_t)(EBP));
  /* 11980781 mov ebp, esp */
  EBP = (ESP);
  /* 11980783 push ebx */
  push32((uint32_t)(EBX));
  /* 11980784 push esi */
  push32((uint32_t)(ESI));
  /* 11980785 push edi */
  push32((uint32_t)(EDI));
  /* 11980786 push ebp */
  push32((uint32_t)(EBP));
  /* 11980787 push 0 */
  push32((uint32_t)(0x0u));
  /* 11980789 push 0 */
  push32((uint32_t)(0x0u));
  /* 1198078b push 0x11980798 */
  push32((uint32_t)(0x11980798u));
  /* 11980790 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11980793 call 0x11987ecc */
  push32(0x11980798u); f_11987ecc();
  /* 11980798 pop ebp */
  EBP = (pop32());
  /* 11980799 pop edi */
  EDI = (pop32());
  /* 1198079a pop esi */
  ESI = (pop32());
  /* 1198079b pop ebx */
  EBX = (pop32());
  /* 1198079c mov esp, ebp */
  ESP = (EBP);
  /* 1198079e pop ebp */
  EBP = (pop32());
  /* 1198079f ret  */
  ESPCHK(0x11980780u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x119807c2 (104 bytes, 33 insns) */
void f_119807c2(void) {
  FTRACE(0x119807c2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119807c2 push ebx */
  push32((uint32_t)(EBX));
  /* 119807c3 push esi */
  push32((uint32_t)(ESI));
  /* 119807c4 push edi */
  push32((uint32_t)(EDI));
  /* 119807c5 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 119807c9 push eax */
  push32((uint32_t)(EAX));
  /* 119807ca push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 119807cc push 0x119807a0 */
  push32((uint32_t)(0x119807a0u));
  /* 119807d1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 119807d8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_119807df:;
  /* 119807df mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 119807e3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 119807e6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 119807e9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119807ec je 0x1198081c */
  if (C.zf) goto L_1198081c;
  /* 119807ee cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119807f2 je 0x1198081c */
  if (C.zf) goto L_1198081c;
  /* 119807f4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 119807f7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 119807fa mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 119807fe mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11980801 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980806 jne 0x1198081a */
  if (!C.zf) goto L_1198081a;
  /* 11980808 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1198080d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11980811 call 0x11980856 */
  push32(0x11980816u); f_11980856();
  /* 11980816 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1198081au);
L_1198081a:;
  /* 1198081a jmp 0x119807df */
  goto L_119807df;
L_1198081c:;
  /* 1198081c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11980823 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11980826 pop edi */
  EDI = (pop32());
  /* 11980827 pop esi */
  ESI = (pop32());
  /* 11980828 pop ebx */
  EBX = (pop32());
  /* 11980829 ret  */
  ESPCHK(0x119807c2u, _esp0);
  ESP += 4; return;
}

/* FUN_10010856 @ 0x11980856 (24 bytes, 10 insns) */
void f_11980856(void) {
  FTRACE(0x11980856u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11980856 push ebx */
  push32((uint32_t)(EBX));
  /* 11980857 push ecx */
  push32((uint32_t)(ECX));
  /* 11980858 mov ebx, 0x119a23b8 */
  EBX = (0x119a23b8u);
  /* 1198085d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11980860 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11980863 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11980866 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11980869 pop ecx */
  ECX = (pop32());
  /* 1198086a pop ebx */
  EBX = (pop32());
  /* 1198086b ret 4 */
  ESPCHK(0x11980856u, _esp0);
  ESP += 8; return;
}

/* FUN_10010935 @ 0x11980935 (27 bytes, 11 insns) */
void f_11980935(void) {
  FTRACE(0x11980935u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11980935 push ebp */
  push32((uint32_t)(EBP));
  /* 11980936 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1198093a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1198093c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1198093f push eax */
  push32((uint32_t)(EAX));
  /* 11980940 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11980943 push eax */
  push32((uint32_t)(EAX));
  /* 11980944 call 0x119807c2 */
  push32(0x11980949u); f_119807c2();
  /* 11980949 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198094c pop ebp */
  EBP = (pop32());
  /* 1198094d ret 4 */
  ESPCHK(0x11980935u, _esp0);
  ESP += 8; return;
}

/* FUN_10010950 @ 0x11980950 (482 bytes, 138 insns) */
void f_11980950(void) {
  FTRACE(0x11980950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11980950 push ebp */
  push32((uint32_t)(EBP));
  /* 11980951 mov ebp, esp */
  EBP = (ESP);
  /* 11980953 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11980956 push esi */
  push32((uint32_t)(ESI));
  /* 11980957 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 1198095e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11980960 call 0x1197b170 */
  push32(0x11980965u); f_1197b170();
  /* 11980965 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11980968 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1198096f jmp 0x1198097a */
  goto L_1198097a;
L_11980971:;
  /* 11980971 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11980974 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11980977 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1198097a:;
  /* 1198097a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198097e jge 0x11980b20 */
  if ((C.sf==C.of)) goto L_11980b20;
  /* 11980984 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11980987 cmp dword ptr [ecx*4 + 0x119a5240], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x119a5240))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198098f je 0x11980a86 */
  if (C.zf) goto L_11980a86;
  /* 11980995 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11980998 mov eax, dword ptr [edx*4 + 0x119a5240] */
  EAX = (r32((uint32_t)(EDX*4 + 0x119a5240)));
  /* 1198099f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119809a2 jmp 0x119809ad */
  goto L_119809ad;
L_119809a4:;
  /* 119809a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119809a7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119809aa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_119809ad:;
  /* 119809ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119809b0 mov eax, dword ptr [edx*4 + 0x119a5240] */
  EAX = (r32((uint32_t)(EDX*4 + 0x119a5240)));
  /* 119809b7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119809bc cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119809bf jae 0x11980a76 */
  if (!C.cf) goto L_11980a76;
  /* 119809c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119809c8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 119809cc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 119809cf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119809d1 jne 0x11980a71 */
  if (!C.zf) goto L_11980a71;
  /* 119809d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119809da cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119809de jne 0x11980a19 */
  if (!C.zf) goto L_11980a19;
  /* 119809e0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 119809e2 call 0x1197b170 */
  push32(0x119809e7u); f_1197b170();
  /* 119809e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119809ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119809ed cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119809f1 jne 0x11980a0f */
  if (!C.zf) goto L_11980a0f;
  /* 119809f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119809f6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119809f9 push edx */
  push32((uint32_t)(EDX));
  /* 119809fa call dword ptr [0x119a635c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a635c))), 0x11980a00u);
  /* 11980a00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11980a03 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11980a06 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11980a09 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11980a0c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11980a0f:;
  /* 11980a0f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11980a11 call 0x1197b210 */
  push32(0x11980a16u); f_1197b210();
  /* 11980a16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11980a19:;
  /* 11980a19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11980a1c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11980a1f push eax */
  push32((uint32_t)(EAX));
  /* 11980a20 call dword ptr [0x119a634c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a634c))), 0x11980a26u);
  /* 11980a26 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11980a29 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11980a2d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11980a30 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11980a32 je 0x11980a46 */
  if (C.zf) goto L_11980a46;
  /* 11980a34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11980a37 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11980a3a push eax */
  push32((uint32_t)(EAX));
  /* 11980a3b call dword ptr [0x119a6348] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6348))), 0x11980a41u);
  /* 11980a41 jmp 0x119809a4 */
  goto L_119809a4;
L_11980a46:;
  /* 11980a46 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11980a49 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11980a4f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11980a52 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11980a55 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11980a58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11980a5b sub eax, dword ptr [edx*4 + 0x119a5240] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x119a5240))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11980a62 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11980a63 mov esi, 0x24 */
  ESI = (0x24u);
  /* 11980a68 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11980a6a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11980a6c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11980a6f jmp 0x11980a76 */
  goto L_11980a76;
L_11980a71:;
  /* 11980a71 jmp 0x119809a4 */
  goto L_119809a4;
L_11980a76:;
  /* 11980a76 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980a7a je 0x11980a81 */
  if (C.zf) goto L_11980a81;
  /* 11980a7c jmp 0x11980b20 */
  goto L_11980b20;
L_11980a81:;
  /* 11980a81 jmp 0x11980b1b */
  goto L_11980b1b;
L_11980a86:;
  /* 11980a86 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 11980a88 push 0x1199fc8c */
  push32((uint32_t)(0x1199fc8cu));
  /* 11980a8d push 2 */
  push32((uint32_t)(0x2u));
  /* 11980a8f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11980a94 call 0x11977770 */
  push32(0x11980a99u); f_11977770();
  /* 11980a99 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11980a9c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11980a9f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980aa3 je 0x11980b19 */
  if (C.zf) goto L_11980b19;
  /* 11980aa5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11980aa8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11980aab mov dword ptr [eax*4 + 0x119a5240], ecx */
  w32((uint32_t)(EAX*4 + 0x119a5240), (ECX));
  /* 11980ab2 mov edx, dword ptr [0x119a537c] */
  EDX = (r32((uint32_t)(0x119a537c)));
  /* 11980ab8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11980abb mov dword ptr [0x119a537c], edx */
  w32((uint32_t)(0x119a537c), (EDX));
  /* 11980ac1 jmp 0x11980acc */
  goto L_11980acc;
L_11980ac3:;
  /* 11980ac3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11980ac6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11980ac9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11980acc:;
  /* 11980acc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11980acf mov edx, dword ptr [ecx*4 + 0x119a5240] */
  EDX = (r32((uint32_t)(ECX*4 + 0x119a5240)));
  /* 11980ad6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11980adc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980adf jae 0x11980b04 */
  if (!C.cf) goto L_11980b04;
  /* 11980ae1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11980ae4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11980ae8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11980aeb mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11980af1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11980af4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11980af8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11980afb mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11980b02 jmp 0x11980ac3 */
  goto L_11980ac3;
L_11980b04:;
  /* 11980b04 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11980b07 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11980b0a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11980b0d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11980b10 push edx */
  push32((uint32_t)(EDX));
  /* 11980b11 call 0x11980e60 */
  push32(0x11980b16u); f_11980e60();
  /* 11980b16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11980b19:;
  /* 11980b19 jmp 0x11980b20 */
  goto L_11980b20;
L_11980b1b:;
  /* 11980b1b jmp 0x11980971 */
  goto L_11980971;
L_11980b20:;
  /* 11980b20 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11980b22 call 0x1197b210 */
  push32(0x11980b27u); f_1197b210();
  /* 11980b27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11980b2a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11980b2d pop esi */
  ESI = (pop32());
  /* 11980b2e mov esp, ebp */
  ESP = (EBP);
  /* 11980b30 pop ebp */
  EBP = (pop32());
  /* 11980b31 ret  */
  ESPCHK(0x11980950u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x11980b40 (183 bytes, 57 insns) */
void f_11980b40(void) {
  FTRACE(0x11980b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11980b40 push ebp */
  push32((uint32_t)(EBP));
  /* 11980b41 mov ebp, esp */
  EBP = (ESP);
  /* 11980b43 push ecx */
  push32((uint32_t)(ECX));
  /* 11980b44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11980b47 cmp eax, dword ptr [0x119a537c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119a537c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980b4d jae 0x11980bda */
  if (!C.cf) goto L_11980bda;
  /* 11980b53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11980b56 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11980b59 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11980b5c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11980b5f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11980b62 mov eax, dword ptr [ecx*4 + 0x119a5240] */
  EAX = (r32((uint32_t)(ECX*4 + 0x119a5240)));
  /* 11980b69 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980b6d jne 0x11980bda */
  if (!C.zf) goto L_11980bda;
  /* 11980b6f cmp dword ptr [0x119a3864], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119a3864))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980b76 jne 0x11980bba */
  if (!C.zf) goto L_11980bba;
  /* 11980b78 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11980b7b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11980b7e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980b82 je 0x11980b92 */
  if (C.zf) goto L_11980b92;
  /* 11980b84 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980b88 je 0x11980ba0 */
  if (C.zf) goto L_11980ba0;
  /* 11980b8a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980b8e je 0x11980bae */
  if (C.zf) goto L_11980bae;
  /* 11980b90 jmp 0x11980bba */
  goto L_11980bba;
L_11980b92:;
  /* 11980b92 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11980b95 push edx */
  push32((uint32_t)(EDX));
  /* 11980b96 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11980b98 call dword ptr [0x119a6314] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6314))), 0x11980b9eu);
  /* 11980b9e jmp 0x11980bba */
  goto L_11980bba;
L_11980ba0:;
  /* 11980ba0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11980ba3 push eax */
  push32((uint32_t)(EAX));
  /* 11980ba4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11980ba6 call dword ptr [0x119a6314] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6314))), 0x11980bacu);
  /* 11980bac jmp 0x11980bba */
  goto L_11980bba;
L_11980bae:;
  /* 11980bae mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11980bb1 push ecx */
  push32((uint32_t)(ECX));
  /* 11980bb2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11980bb4 call dword ptr [0x119a6314] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6314))), 0x11980bbau);
L_11980bba:;
  /* 11980bba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11980bbd sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11980bc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11980bc3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11980bc6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11980bc9 mov ecx, dword ptr [edx*4 + 0x119a5240] */
  ECX = (r32((uint32_t)(EDX*4 + 0x119a5240)));
  /* 11980bd0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11980bd3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 11980bd6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11980bd8 jmp 0x11980bf3 */
  goto L_11980bf3;
L_11980bda:;
  /* 11980bda call 0x1197f640 */
  push32(0x11980bdfu); f_1197f640();
  /* 11980bdf mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11980be5 call 0x1197f650 */
  push32(0x11980beau); f_1197f650();
  /* 11980bea mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11980bf0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11980bf3:;
  /* 11980bf3 mov esp, ebp */
  ESP = (EBP);
  /* 11980bf5 pop ebp */
  EBP = (pop32());
  /* 11980bf6 ret  */
  ESPCHK(0x11980b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c00 @ 0x11980c00 (216 bytes, 63 insns) */
void f_11980c00(void) {
  FTRACE(0x11980c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11980c00 push ebp */
  push32((uint32_t)(EBP));
  /* 11980c01 mov ebp, esp */
  EBP = (ESP);
  /* 11980c03 push ecx */
  push32((uint32_t)(ECX));
  /* 11980c04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11980c07 cmp eax, dword ptr [0x119a537c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119a537c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980c0d jae 0x11980cbb */
  if (!C.cf) goto L_11980cbb;
  /* 11980c13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11980c16 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11980c19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11980c1c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11980c1f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11980c22 mov eax, dword ptr [ecx*4 + 0x119a5240] */
  EAX = (r32((uint32_t)(ECX*4 + 0x119a5240)));
  /* 11980c29 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11980c2e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11980c31 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11980c33 je 0x11980cbb */
  if (C.zf) goto L_11980cbb;
  /* 11980c39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11980c3c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11980c3f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11980c42 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11980c45 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11980c48 mov ecx, dword ptr [edx*4 + 0x119a5240] */
  ECX = (r32((uint32_t)(EDX*4 + 0x119a5240)));
  /* 11980c4f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980c53 je 0x11980cbb */
  if (C.zf) goto L_11980cbb;
  /* 11980c55 cmp dword ptr [0x119a3864], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119a3864))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980c5c jne 0x11980c9a */
  if (!C.zf) goto L_11980c9a;
  /* 11980c5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11980c61 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11980c64 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980c68 je 0x11980c78 */
  if (C.zf) goto L_11980c78;
  /* 11980c6a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980c6e je 0x11980c84 */
  if (C.zf) goto L_11980c84;
  /* 11980c70 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980c74 je 0x11980c90 */
  if (C.zf) goto L_11980c90;
  /* 11980c76 jmp 0x11980c9a */
  goto L_11980c9a;
L_11980c78:;
  /* 11980c78 push 0 */
  push32((uint32_t)(0x0u));
  /* 11980c7a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11980c7c call dword ptr [0x119a6314] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6314))), 0x11980c82u);
  /* 11980c82 jmp 0x11980c9a */
  goto L_11980c9a;
L_11980c84:;
  /* 11980c84 push 0 */
  push32((uint32_t)(0x0u));
  /* 11980c86 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11980c88 call dword ptr [0x119a6314] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6314))), 0x11980c8eu);
  /* 11980c8e jmp 0x11980c9a */
  goto L_11980c9a;
L_11980c90:;
  /* 11980c90 push 0 */
  push32((uint32_t)(0x0u));
  /* 11980c92 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11980c94 call dword ptr [0x119a6314] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6314))), 0x11980c9au);
L_11980c9a:;
  /* 11980c9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11980c9d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11980ca0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11980ca3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11980ca6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11980ca9 mov edx, dword ptr [eax*4 + 0x119a5240] */
  EDX = (r32((uint32_t)(EAX*4 + 0x119a5240)));
  /* 11980cb0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 11980cb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11980cb9 jmp 0x11980cd4 */
  goto L_11980cd4;
L_11980cbb:;
  /* 11980cbb call 0x1197f640 */
  push32(0x11980cc0u); f_1197f640();
  /* 11980cc0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11980cc6 call 0x1197f650 */
  push32(0x11980ccbu); f_1197f650();
  /* 11980ccb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11980cd1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11980cd4:;
  /* 11980cd4 mov esp, ebp */
  ESP = (EBP);
  /* 11980cd6 pop ebp */
  EBP = (pop32());
  /* 11980cd7 ret  */
  ESPCHK(0x11980c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ce0 @ 0x11980ce0 (102 bytes, 30 insns) */
void f_11980ce0(void) {
  FTRACE(0x11980ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11980ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11980ce1 mov ebp, esp */
  EBP = (ESP);
  /* 11980ce3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11980ce6 cmp eax, dword ptr [0x119a537c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119a537c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980cec jae 0x11980d2b */
  if (!C.cf) goto L_11980d2b;
  /* 11980cee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11980cf1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11980cf4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11980cf7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11980cfa imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11980cfd mov eax, dword ptr [ecx*4 + 0x119a5240] */
  EAX = (r32((uint32_t)(ECX*4 + 0x119a5240)));
  /* 11980d04 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11980d09 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11980d0c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11980d0e je 0x11980d2b */
  if (C.zf) goto L_11980d2b;
  /* 11980d10 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11980d13 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11980d16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11980d19 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11980d1c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11980d1f mov ecx, dword ptr [edx*4 + 0x119a5240] */
  ECX = (r32((uint32_t)(EDX*4 + 0x119a5240)));
  /* 11980d26 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 11980d29 jmp 0x11980d44 */
  goto L_11980d44;
L_11980d2b:;
  /* 11980d2b call 0x1197f640 */
  push32(0x11980d30u); f_1197f640();
  /* 11980d30 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11980d36 call 0x1197f650 */
  push32(0x11980d3bu); f_1197f650();
  /* 11980d3b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11980d41 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11980d44:;
  /* 11980d44 pop ebp */
  EBP = (pop32());
  /* 11980d45 ret  */
  ESPCHK(0x11980ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010d50 @ 0x11980d50 (260 bytes, 83 insns) */
void f_11980d50(void) {
  FTRACE(0x11980d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11980d50 push ebp */
  push32((uint32_t)(EBP));
  /* 11980d51 mov ebp, esp */
  EBP = (ESP);
  /* 11980d53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11980d56 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 11980d5a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11980d5d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11980d60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11980d62 je 0x11980d6d */
  if (C.zf) goto L_11980d6d;
  /* 11980d64 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 11980d67 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11980d6a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_11980d6d:;
  /* 11980d6d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11980d70 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 11980d76 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11980d78 je 0x11980d82 */
  if (C.zf) goto L_11980d82;
  /* 11980d7a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11980d7d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 11980d7f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_11980d82:;
  /* 11980d82 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11980d85 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 11980d8b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11980d8d je 0x11980d98 */
  if (C.zf) goto L_11980d98;
  /* 11980d8f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11980d92 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 11980d95 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_11980d98:;
  /* 11980d98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11980d9b push eax */
  push32((uint32_t)(EAX));
  /* 11980d9c call dword ptr [0x119a63e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63e4))), 0x11980da2u);
  /* 11980da2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11980da5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980da9 jne 0x11980dc2 */
  if (!C.zf) goto L_11980dc2;
  /* 11980dab call dword ptr [0x119a63d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63d8))), 0x11980db1u);
  /* 11980db1 push eax */
  push32((uint32_t)(EAX));
  /* 11980db2 call 0x1197f5a0 */
  push32(0x11980db7u); f_1197f5a0();
  /* 11980db7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11980dba or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11980dbd jmp 0x11980e50 */
  goto L_11980e50;
L_11980dc2:;
  /* 11980dc2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980dc6 jne 0x11980dd3 */
  if (!C.zf) goto L_11980dd3;
  /* 11980dc8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 11980dcb or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 11980dce mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 11980dd1 jmp 0x11980de2 */
  goto L_11980de2;
L_11980dd3:;
  /* 11980dd3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980dd7 jne 0x11980de2 */
  if (!C.zf) goto L_11980de2;
  /* 11980dd9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11980ddc or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 11980ddf mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_11980de2:;
  /* 11980de2 call 0x11980950 */
  push32(0x11980de7u); f_11980950();
  /* 11980de7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11980dea cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980dee jne 0x11980e0b */
  if (!C.zf) goto L_11980e0b;
  /* 11980df0 call 0x1197f640 */
  push32(0x11980df5u); f_1197f640();
  /* 11980df5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 11980dfb call 0x1197f650 */
  push32(0x11980e00u); f_1197f650();
  /* 11980e00 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11980e06 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11980e09 jmp 0x11980e50 */
  goto L_11980e50;
L_11980e0b:;
  /* 11980e0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11980e0e push eax */
  push32((uint32_t)(EAX));
  /* 11980e0f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11980e12 push ecx */
  push32((uint32_t)(ECX));
  /* 11980e13 call 0x11980b40 */
  push32(0x11980e18u); f_11980b40();
  /* 11980e18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11980e1b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11980e1e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 11980e21 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 11980e24 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11980e27 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11980e2a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11980e2d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11980e30 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11980e33 mov edx, dword ptr [eax*4 + 0x119a5240] */
  EDX = (r32((uint32_t)(EAX*4 + 0x119a5240)));
  /* 11980e3a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11980e3d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 11980e41 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11980e44 push ecx */
  push32((uint32_t)(ECX));
  /* 11980e45 call 0x11980ef0 */
  push32(0x11980e4au); f_11980ef0();
  /* 11980e4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11980e4d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11980e50:;
  /* 11980e50 mov esp, ebp */
  ESP = (EBP);
  /* 11980e52 pop ebp */
  EBP = (pop32());
  /* 11980e53 ret  */
  ESPCHK(0x11980d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10010e60 @ 0x11980e60 (134 bytes, 44 insns) */
void f_11980e60(void) {
  FTRACE(0x11980e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11980e60 push ebp */
  push32((uint32_t)(EBP));
  /* 11980e61 mov ebp, esp */
  EBP = (ESP);
  /* 11980e63 push ecx */
  push32((uint32_t)(ECX));
  /* 11980e64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11980e67 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11980e6a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11980e6d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11980e70 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11980e73 mov edx, dword ptr [eax*4 + 0x119a5240] */
  EDX = (r32((uint32_t)(EAX*4 + 0x119a5240)));
  /* 11980e7a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11980e7c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11980e7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11980e82 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980e86 jne 0x11980ec1 */
  if (!C.zf) goto L_11980ec1;
  /* 11980e88 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11980e8a call 0x1197b170 */
  push32(0x11980e8fu); f_1197b170();
  /* 11980e8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11980e92 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11980e95 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980e99 jne 0x11980eb7 */
  if (!C.zf) goto L_11980eb7;
  /* 11980e9b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11980e9e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11980ea1 push edx */
  push32((uint32_t)(EDX));
  /* 11980ea2 call dword ptr [0x119a635c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a635c))), 0x11980ea8u);
  /* 11980ea8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11980eab mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11980eae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11980eb1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11980eb4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11980eb7:;
  /* 11980eb7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11980eb9 call 0x1197b210 */
  push32(0x11980ebeu); f_1197b210();
  /* 11980ebe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11980ec1:;
  /* 11980ec1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11980ec4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11980ec7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11980eca and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11980ecd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11980ed0 mov edx, dword ptr [eax*4 + 0x119a5240] */
  EDX = (r32((uint32_t)(EAX*4 + 0x119a5240)));
  /* 11980ed7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 11980edb push eax */
  push32((uint32_t)(EAX));
  /* 11980edc call dword ptr [0x119a634c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a634c))), 0x11980ee2u);
  /* 11980ee2 mov esp, ebp */
  ESP = (EBP);
  /* 11980ee4 pop ebp */
  EBP = (pop32());
  /* 11980ee5 ret  */
  ESPCHK(0x11980e60u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x11980ef0 (38 bytes, 13 insns) */
void f_11980ef0(void) {
  FTRACE(0x11980ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11980ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 11980ef1 mov ebp, esp */
  EBP = (ESP);
  /* 11980ef3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11980ef6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11980ef9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11980efc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11980eff imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11980f02 mov edx, dword ptr [eax*4 + 0x119a5240] */
  EDX = (r32((uint32_t)(EAX*4 + 0x119a5240)));
  /* 11980f09 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 11980f0d push eax */
  push32((uint32_t)(EAX));
  /* 11980f0e call dword ptr [0x119a6348] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6348))), 0x11980f14u);
  /* 11980f14 pop ebp */
  EBP = (pop32());
  /* 11980f15 ret  */
  ESPCHK(0x11980ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f20 @ 0x11980f20 (218 bytes, 63 insns) */
void f_11980f20(void) {
  FTRACE(0x11980f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11980f20 push ebp */
  push32((uint32_t)(EBP));
  /* 11980f21 mov ebp, esp */
  EBP = (ESP);
  /* 11980f23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11980f26 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11980f2d push 2 */
  push32((uint32_t)(0x2u));
  /* 11980f2f call 0x1197b170 */
  push32(0x11980f34u); f_1197b170();
  /* 11980f34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11980f37 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 11980f3e jmp 0x11980f49 */
  goto L_11980f49;
L_11980f40:;
  /* 11980f40 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11980f43 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11980f46 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11980f49:;
  /* 11980f49 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11980f4c cmp ecx, dword ptr [0x119a4f40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x119a4f40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980f52 jge 0x11980fe9 */
  if ((C.sf==C.of)) goto L_11980fe9;
  /* 11980f58 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11980f5b mov eax, dword ptr [0x119a3c00] */
  EAX = (r32((uint32_t)(0x119a3c00)));
  /* 11980f60 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980f64 je 0x11980fe4 */
  if (C.zf) goto L_11980fe4;
  /* 11980f66 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11980f69 mov edx, dword ptr [0x119a3c00] */
  EDX = (r32((uint32_t)(0x119a3c00)));
  /* 11980f6f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11980f72 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11980f75 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 11980f7b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11980f7d je 0x11980fa1 */
  if (C.zf) goto L_11980fa1;
  /* 11980f7f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11980f82 mov eax, dword ptr [0x119a3c00] */
  EAX = (r32((uint32_t)(0x119a3c00)));
  /* 11980f87 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11980f8a push ecx */
  push32((uint32_t)(ECX));
  /* 11980f8b call 0x11981d10 */
  push32(0x11980f90u); f_11981d10();
  /* 11980f90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11980f93 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980f96 je 0x11980fa1 */
  if (C.zf) goto L_11980fa1;
  /* 11980f98 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11980f9b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11980f9e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11980fa1:;
  /* 11980fa1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11980fa5 jl 0x11980fe4 */
  if ((C.sf!=C.of)) goto L_11980fe4;
  /* 11980fa7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11980faa mov ecx, dword ptr [0x119a3c00] */
  ECX = (r32((uint32_t)(0x119a3c00)));
  /* 11980fb0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11980fb3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11980fb6 push edx */
  push32((uint32_t)(EDX));
  /* 11980fb7 call dword ptr [0x119a63b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63b8))), 0x11980fbdu);
  /* 11980fbd push 2 */
  push32((uint32_t)(0x2u));
  /* 11980fbf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11980fc2 mov ecx, dword ptr [0x119a3c00] */
  ECX = (r32((uint32_t)(0x119a3c00)));
  /* 11980fc8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11980fcb push edx */
  push32((uint32_t)(EDX));
  /* 11980fcc call 0x11978200 */
  push32(0x11980fd1u); f_11978200();
  /* 11980fd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11980fd4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11980fd7 mov ecx, dword ptr [0x119a3c00] */
  ECX = (r32((uint32_t)(0x119a3c00)));
  /* 11980fdd mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_11980fe4:;
  /* 11980fe4 jmp 0x11980f40 */
  goto L_11980f40;
L_11980fe9:;
  /* 11980fe9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11980feb call 0x1197b210 */
  push32(0x11980ff0u); f_1197b210();
  /* 11980ff0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11980ff3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11980ff6 mov esp, ebp */
  ESP = (EBP);
  /* 11980ff8 pop ebp */
  EBP = (pop32());
  /* 11980ff9 ret  */
  ESPCHK(0x11980f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10011000 @ 0x11981000 (68 bytes, 26 insns) */
void f_11981000(void) {
  FTRACE(0x11981000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11981000 push ebp */
  push32((uint32_t)(EBP));
  /* 11981001 mov ebp, esp */
  EBP = (ESP);
  /* 11981003 push ecx */
  push32((uint32_t)(ECX));
  /* 11981004 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11981008 jne 0x11981016 */
  if (!C.zf) goto L_11981016;
  /* 1198100a push 0 */
  push32((uint32_t)(0x0u));
  /* 1198100c call 0x11981170 */
  push32(0x11981011u); f_11981170();
  /* 11981011 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11981014 jmp 0x11981040 */
  goto L_11981040;
L_11981016:;
  /* 11981016 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11981019 push eax */
  push32((uint32_t)(EAX));
  /* 1198101a call 0x11980580 */
  push32(0x1198101fu); f_11980580();
  /* 1198101f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11981022 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11981025 push ecx */
  push32((uint32_t)(ECX));
  /* 11981026 call 0x11981050 */
  push32(0x1198102bu); f_11981050();
  /* 1198102b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198102e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11981031 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11981034 push edx */
  push32((uint32_t)(EDX));
  /* 11981035 call 0x119805f0 */
  push32(0x1198103au); f_119805f0();
  /* 1198103a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198103d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11981040:;
  /* 11981040 mov esp, ebp */
  ESP = (EBP);
  /* 11981042 pop ebp */
  EBP = (pop32());
  /* 11981043 ret  */
  ESPCHK(0x11981000u, _esp0);
  ESP += 4; return;
}

/* FUN_10011050 @ 0x11981050 (65 bytes, 26 insns) */
void f_11981050(void) {
  FTRACE(0x11981050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11981050 push ebp */
  push32((uint32_t)(EBP));
  /* 11981051 mov ebp, esp */
  EBP = (ESP);
  /* 11981053 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11981056 push eax */
  push32((uint32_t)(EAX));
  /* 11981057 call 0x119810a0 */
  push32(0x1198105cu); f_119810a0();
  /* 1198105c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198105f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11981061 je 0x11981068 */
  if (C.zf) goto L_11981068;
  /* 11981063 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11981066 jmp 0x1198108f */
  goto L_1198108f;
L_11981068:;
  /* 11981068 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198106b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1198106e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 11981074 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11981076 je 0x1198108d */
  if (C.zf) goto L_1198108d;
  /* 11981078 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198107b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1198107e push ecx */
  push32((uint32_t)(ECX));
  /* 1198107f call 0x11981e60 */
  push32(0x11981084u); f_11981e60();
  /* 11981084 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11981087 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11981089 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1198108b jmp 0x1198108f */
  goto L_1198108f;
L_1198108d:;
  /* 1198108d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1198108f:;
  /* 1198108f pop ebp */
  EBP = (pop32());
  /* 11981090 ret  */
  ESPCHK(0x11981050u, _esp0);
  ESP += 4; return;
}

/* FUN_100110a0 @ 0x119810a0 (183 bytes, 62 insns) */
void f_119810a0(void) {
  FTRACE(0x119810a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119810a0 push ebp */
  push32((uint32_t)(EBP));
  /* 119810a1 mov ebp, esp */
  EBP = (ESP);
  /* 119810a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119810a6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119810ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119810b0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119810b3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119810b6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 119810b9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 119810bc cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119810bf jne 0x1198113b */
  if (!C.zf) goto L_1198113b;
  /* 119810c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119810c4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 119810c7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 119810cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119810cf je 0x1198113b */
  if (C.zf) goto L_1198113b;
  /* 119810d1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119810d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119810d7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 119810d9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119810dc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119810df cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119810e3 jle 0x1198113b */
  if ((C.zf||C.sf!=C.of)) goto L_1198113b;
  /* 119810e5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119810e8 push edx */
  push32((uint32_t)(EDX));
  /* 119810e9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119810ec mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 119810ef push ecx */
  push32((uint32_t)(ECX));
  /* 119810f0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119810f3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 119810f6 push eax */
  push32((uint32_t)(EAX));
  /* 119810f7 call 0x11980010 */
  push32(0x119810fcu); f_11980010();
  /* 119810fc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119810ff cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11981102 jne 0x11981125 */
  if (!C.zf) goto L_11981125;
  /* 11981104 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11981107 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1198110a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 11981110 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11981112 je 0x11981123 */
  if (C.zf) goto L_11981123;
  /* 11981114 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11981117 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1198111a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1198111d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11981120 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_11981123:;
  /* 11981123 jmp 0x1198113b */
  goto L_1198113b;
L_11981125:;
  /* 11981125 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11981128 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1198112b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1198112e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11981131 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11981134 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1198113b:;
  /* 1198113b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1198113e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11981141 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11981144 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11981146 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11981149 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11981150 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11981153 mov esp, ebp */
  ESP = (EBP);
  /* 11981155 pop ebp */
  EBP = (pop32());
  /* 11981156 ret  */
  ESPCHK(0x119810a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011160 @ 0x11981160 (15 bytes, 7 insns) */
void f_11981160(void) {
  FTRACE(0x11981160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11981160 push ebp */
  push32((uint32_t)(EBP));
  /* 11981161 mov ebp, esp */
  EBP = (ESP);
  /* 11981163 push 1 */
  push32((uint32_t)(0x1u));
  /* 11981165 call 0x11981170 */
  push32(0x1198116au); f_11981170();
  /* 1198116a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198116d pop ebp */
  EBP = (pop32());
  /* 1198116e ret  */
  ESPCHK(0x11981160u, _esp0);
  ESP += 4; return;
}

/* FUN_10011170 @ 0x11981170 (319 bytes, 94 insns) */
void f_11981170(void) {
  FTRACE(0x11981170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11981170 push ebp */
  push32((uint32_t)(EBP));
  /* 11981171 mov ebp, esp */
  EBP = (ESP);
  /* 11981173 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11981176 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1198117d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11981184 push 2 */
  push32((uint32_t)(0x2u));
  /* 11981186 call 0x1197b170 */
  push32(0x1198118bu); f_1197b170();
  /* 1198118b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198118e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11981195 jmp 0x119811a0 */
  goto L_119811a0;
L_11981197:;
  /* 11981197 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1198119a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198119d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_119811a0:;
  /* 119811a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119811a3 cmp ecx, dword ptr [0x119a4f40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x119a4f40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119811a9 jge 0x11981293 */
  if ((C.sf==C.of)) goto L_11981293;
  /* 119811af mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119811b2 mov eax, dword ptr [0x119a3c00] */
  EAX = (r32((uint32_t)(0x119a3c00)));
  /* 119811b7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119811bb je 0x1198128e */
  if (C.zf) goto L_1198128e;
  /* 119811c1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119811c4 mov edx, dword ptr [0x119a3c00] */
  EDX = (r32((uint32_t)(0x119a3c00)));
  /* 119811ca mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 119811cd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 119811d0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 119811d6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119811d8 je 0x1198128e */
  if (C.zf) goto L_1198128e;
  /* 119811de mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119811e1 mov eax, dword ptr [0x119a3c00] */
  EAX = (r32((uint32_t)(0x119a3c00)));
  /* 119811e6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 119811e9 push ecx */
  push32((uint32_t)(ECX));
  /* 119811ea mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119811ed push edx */
  push32((uint32_t)(EDX));
  /* 119811ee call 0x119805c0 */
  push32(0x119811f3u); f_119805c0();
  /* 119811f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119811f6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119811f9 mov ecx, dword ptr [0x119a3c00] */
  ECX = (r32((uint32_t)(0x119a3c00)));
  /* 119811ff mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11981202 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11981205 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1198120a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1198120c je 0x11981275 */
  if (C.zf) goto L_11981275;
  /* 1198120e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11981212 jne 0x11981239 */
  if (!C.zf) goto L_11981239;
  /* 11981214 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11981217 mov edx, dword ptr [0x119a3c00] */
  EDX = (r32((uint32_t)(0x119a3c00)));
  /* 1198121d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11981220 push eax */
  push32((uint32_t)(EAX));
  /* 11981221 call 0x11981050 */
  push32(0x11981226u); f_11981050();
  /* 11981226 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11981229 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198122c je 0x11981237 */
  if (C.zf) goto L_11981237;
  /* 1198122e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11981231 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11981234 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11981237:;
  /* 11981237 jmp 0x11981275 */
  goto L_11981275;
L_11981239:;
  /* 11981239 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198123d jne 0x11981275 */
  if (!C.zf) goto L_11981275;
  /* 1198123f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11981242 mov eax, dword ptr [0x119a3c00] */
  EAX = (r32((uint32_t)(0x119a3c00)));
  /* 11981247 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1198124a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1198124d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11981250 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11981252 je 0x11981275 */
  if (C.zf) goto L_11981275;
  /* 11981254 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11981257 mov ecx, dword ptr [0x119a3c00] */
  ECX = (r32((uint32_t)(0x119a3c00)));
  /* 1198125d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11981260 push edx */
  push32((uint32_t)(EDX));
  /* 11981261 call 0x11981050 */
  push32(0x11981266u); f_11981050();
  /* 11981266 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11981269 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198126c jne 0x11981275 */
  if (!C.zf) goto L_11981275;
  /* 1198126e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_11981275:;
  /* 11981275 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11981278 mov ecx, dword ptr [0x119a3c00] */
  ECX = (r32((uint32_t)(0x119a3c00)));
  /* 1198127e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11981281 push edx */
  push32((uint32_t)(EDX));
  /* 11981282 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11981285 push eax */
  push32((uint32_t)(EAX));
  /* 11981286 call 0x11980630 */
  push32(0x1198128bu); f_11980630();
  /* 1198128b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1198128e:;
  /* 1198128e jmp 0x11981197 */
  goto L_11981197;
L_11981293:;
  /* 11981293 push 2 */
  push32((uint32_t)(0x2u));
  /* 11981295 call 0x1197b210 */
  push32(0x1198129au); f_1197b210();
  /* 1198129a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198129d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119812a1 jne 0x119812a8 */
  if (!C.zf) goto L_119812a8;
  /* 119812a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119812a6 jmp 0x119812ab */
  goto L_119812ab;
L_119812a8:;
  /* 119812a8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_119812ab:;
  /* 119812ab mov esp, ebp */
  ESP = (EBP);
  /* 119812ad pop ebp */
  EBP = (pop32());
  /* 119812ae ret  */
  ESPCHK(0x11981170u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x119812b0 (15 bytes, 7 insns) */
void f_119812b0(void) {
  FTRACE(0x119812b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119812b0 push ebp */
  push32((uint32_t)(EBP));
  /* 119812b1 mov ebp, esp */
  EBP = (ESP);
  /* 119812b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 119812b5 call 0x119766e0 */
  push32(0x119812bau); f_119766e0();
  /* 119812ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119812bd pop ebp */
  EBP = (pop32());
  /* 119812be ret  */
  ESPCHK(0x119812b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100112c0 @ 0x119812c0 (1007 bytes, 269 insns) */
void f_119812c0(void) {
  FTRACE(0x119812c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119812c0 push ebp */
  push32((uint32_t)(EBP));
  /* 119812c1 mov ebp, esp */
  EBP = (ESP);
  /* 119812c3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119812c9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119812cd jl 0x119812d5 */
  if ((C.sf!=C.of)) goto L_119812d5;
  /* 119812cf cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119812d3 jle 0x119812dc */
  if ((C.zf||C.sf!=C.of)) goto L_119812dc;
L_119812d5:;
  /* 119812d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119812d7 jmp 0x119816ab */
  goto L_119816ab;
L_119812dc:;
  /* 119812dc push 0x13 */
  push32((uint32_t)(0x13u));
  /* 119812de call 0x1197b170 */
  push32(0x119812e3u); f_1197b170();
  /* 119812e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119812e6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 119812ed mov eax, dword ptr [0x119a3bec] */
  EAX = (r32((uint32_t)(0x119a3bec)));
  /* 119812f2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119812f5 mov dword ptr [0x119a3bec], eax */
  w32((uint32_t)(0x119a3bec), (EAX));
L_119812fa:;
  /* 119812fa cmp dword ptr [0x119a3bfc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3bfc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11981301 je 0x1198130d */
  if (C.zf) goto L_1198130d;
  /* 11981303 push 1 */
  push32((uint32_t)(0x1u));
  /* 11981305 call dword ptr [0x119a6304] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6304))), 0x1198130bu);
  /* 1198130b jmp 0x119812fa */
  goto L_119812fa;
L_1198130d:;
  /* 1198130d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11981311 je 0x11981351 */
  if (C.zf) goto L_11981351;
  /* 11981313 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11981317 je 0x11981331 */
  if (C.zf) goto L_11981331;
  /* 11981319 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1198131c push ecx */
  push32((uint32_t)(ECX));
  /* 1198131d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11981320 push edx */
  push32((uint32_t)(EDX));
  /* 11981321 call 0x119816b0 */
  push32(0x11981326u); f_119816b0();
  /* 11981326 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11981329 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1198132f jmp 0x11981343 */
  goto L_11981343;
L_11981331:;
  /* 11981331 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11981334 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11981337 mov ecx, dword ptr [eax + 0x119a24dc] */
  ECX = (r32((uint32_t)(EAX + 0x119a24dc)));
  /* 1198133d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_11981343:;
  /* 11981343 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 11981349 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1198134c jmp 0x1198168b */
  goto L_1198168b;
L_11981351:;
  /* 11981351 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 11981358 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1198135f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11981363 je 0x11981683 */
  if (C.zf) goto L_11981683;
  /* 11981369 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1198136c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1198136f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11981372 jne 0x11981594 */
  if (!C.zf) goto L_11981594;
  /* 11981378 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1198137b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1198137f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11981382 jne 0x11981594 */
  if (!C.zf) goto L_11981594;
  /* 11981388 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1198138b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1198138f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11981392 jne 0x11981594 */
  if (!C.zf) goto L_11981594;
  /* 11981398 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1198139b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_119813a1:;
  /* 119813a1 push 0x1199fcdc */
  push32((uint32_t)(0x1199fcdcu));
  /* 119813a6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 119813ac push ecx */
  push32((uint32_t)(ECX));
  /* 119813ad call 0x11983510 */
  push32(0x119813b2u); f_11983510();
  /* 119813b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119813b5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 119813bb cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119813c2 je 0x119813ed */
  if (C.zf) goto L_119813ed;
  /* 119813c4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 119813ca sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119813d0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 119813d6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119813dd je 0x119813ed */
  if (C.zf) goto L_119813ed;
  /* 119813df mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 119813e5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119813e8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119813eb jne 0x11981413 */
  if (!C.zf) goto L_11981413;
L_119813ed:;
  /* 119813ed cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119813f1 je 0x1198140c */
  if (C.zf) goto L_1198140c;
  /* 119813f3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 119813f5 call 0x1197b210 */
  push32(0x119813fau); f_1197b210();
  /* 119813fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119813fd mov edx, dword ptr [0x119a3bec] */
  EDX = (r32((uint32_t)(0x119a3bec)));
  /* 11981403 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11981406 mov dword ptr [0x119a3bec], edx */
  w32((uint32_t)(0x119a3bec), (EDX));
L_1198140c:;
  /* 1198140c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1198140e jmp 0x119816ab */
  goto L_119816ab;
L_11981413:;
  /* 11981413 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1198141a jmp 0x11981425 */
  goto L_11981425;
L_1198141c:;
  /* 1198141c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1198141f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11981422 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11981425:;
  /* 11981425 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11981429 jg 0x11981473 */
  if ((!C.zf&&C.sf==C.of)) goto L_11981473;
  /* 1198142b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11981431 push ecx */
  push32((uint32_t)(ECX));
  /* 11981432 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11981438 push edx */
  push32((uint32_t)(EDX));
  /* 11981439 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1198143c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1198143f mov ecx, dword ptr [eax + 0x119a24d8] */
  ECX = (r32((uint32_t)(EAX + 0x119a24d8)));
  /* 11981445 push ecx */
  push32((uint32_t)(ECX));
  /* 11981446 call 0x119834d0 */
  push32(0x1198144bu); f_119834d0();
  /* 1198144b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198144e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11981450 jne 0x11981471 */
  if (!C.zf) goto L_11981471;
  /* 11981452 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11981455 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11981458 mov eax, dword ptr [edx + 0x119a24d8] */
  EAX = (r32((uint32_t)(EDX + 0x119a24d8)));
  /* 1198145e push eax */
  push32((uint32_t)(EAX));
  /* 1198145f call 0x1197a5a0 */
  push32(0x11981464u); f_1197a5a0();
  /* 11981464 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11981467 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198146d jne 0x11981471 */
  if (!C.zf) goto L_11981471;
  /* 1198146f jmp 0x11981473 */
  goto L_11981473;
L_11981471:;
  /* 11981471 jmp 0x1198141c */
  goto L_1198141c;
L_11981473:;
  /* 11981473 push 0x1199fcd8 */
  push32((uint32_t)(0x1199fcd8u));
  /* 11981478 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1198147e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11981481 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 11981487 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1198148d push edx */
  push32((uint32_t)(EDX));
  /* 1198148e call 0x11983490 */
  push32(0x11981493u); f_11983490();
  /* 11981493 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11981496 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1198149c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119814a3 jne 0x119814d9 */
  if (!C.zf) goto L_119814d9;
  /* 119814a5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 119814ab movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119814ae cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119814b1 je 0x119814d9 */
  if (C.zf) goto L_119814d9;
  /* 119814b3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119814b7 je 0x119814d2 */
  if (C.zf) goto L_119814d2;
  /* 119814b9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 119814bb call 0x1197b210 */
  push32(0x119814c0u); f_1197b210();
  /* 119814c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119814c3 mov edx, dword ptr [0x119a3bec] */
  EDX = (r32((uint32_t)(0x119a3bec)));
  /* 119814c9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119814cc mov dword ptr [0x119a3bec], edx */
  w32((uint32_t)(0x119a3bec), (EDX));
L_119814d2:;
  /* 119814d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119814d4 jmp 0x119816ab */
  goto L_119816ab;
L_119814d9:;
  /* 119814d9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119814dd jg 0x1198152a */
  if ((!C.zf&&C.sf==C.of)) goto L_1198152a;
  /* 119814df mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 119814e5 push eax */
  push32((uint32_t)(EAX));
  /* 119814e6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 119814ec push ecx */
  push32((uint32_t)(ECX));
  /* 119814ed lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 119814f3 push edx */
  push32((uint32_t)(EDX));
  /* 119814f4 call 0x1197af90 */
  push32(0x119814f9u); f_1197af90();
  /* 119814f9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119814fc mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11981502 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1198150a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 11981510 push ecx */
  push32((uint32_t)(ECX));
  /* 11981511 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11981514 push edx */
  push32((uint32_t)(EDX));
  /* 11981515 call 0x119816b0 */
  push32(0x1198151au); f_119816b0();
  /* 1198151a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198151d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1198151f je 0x1198152a */
  if (C.zf) goto L_1198152a;
  /* 11981521 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11981524 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11981527 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1198152a:;
  /* 1198152a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11981530 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11981536 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1198153c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11981542 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11981545 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11981547 je 0x11981558 */
  if (C.zf) goto L_11981558;
  /* 11981549 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1198154f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11981552 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_11981558:;
  /* 11981558 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1198155e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11981561 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11981563 jne 0x119813a1 */
  if (!C.zf) goto L_119813a1;
  /* 11981569 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198156d je 0x1198157c */
  if (C.zf) goto L_1198157c;
  /* 1198156f call 0x11981850 */
  push32(0x11981574u); f_11981850();
  /* 11981574 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 1198157a jmp 0x11981586 */
  goto L_11981586;
L_1198157c:;
  /* 1198157c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_11981586:;
  /* 11981586 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 1198158c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1198158f jmp 0x11981681 */
  goto L_11981681;
L_11981594:;
  /* 11981594 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11981597 push edx */
  push32((uint32_t)(EDX));
  /* 11981598 push 0 */
  push32((uint32_t)(0x0u));
  /* 1198159a push 0 */
  push32((uint32_t)(0x0u));
  /* 1198159c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 119815a2 push eax */
  push32((uint32_t)(EAX));
  /* 119815a3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119815a6 push ecx */
  push32((uint32_t)(ECX));
  /* 119815a7 call 0x11981950 */
  push32(0x119815acu); f_11981950();
  /* 119815ac add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119815af mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119815b2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119815b6 je 0x11981681 */
  if (C.zf) goto L_11981681;
  /* 119815bc mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 119815c3 jmp 0x119815ce */
  goto L_119815ce;
L_119815c5:;
  /* 119815c5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119815c8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119815cb mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_119815ce:;
  /* 119815ce cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119815d2 jg 0x11981630 */
  if ((!C.zf&&C.sf==C.of)) goto L_11981630;
  /* 119815d4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119815d8 je 0x1198162e */
  if (C.zf) goto L_1198162e;
  /* 119815da mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119815dd imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119815e0 mov ecx, dword ptr [eax + 0x119a24dc] */
  ECX = (r32((uint32_t)(EAX + 0x119a24dc)));
  /* 119815e6 push ecx */
  push32((uint32_t)(ECX));
  /* 119815e7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 119815ed push edx */
  push32((uint32_t)(EDX));
  /* 119815ee call 0x11983400 */
  push32(0x119815f3u); f_11983400();
  /* 119815f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119815f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119815f8 je 0x11981625 */
  if (C.zf) goto L_11981625;
  /* 119815fa lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11981600 push eax */
  push32((uint32_t)(EAX));
  /* 11981601 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11981604 push ecx */
  push32((uint32_t)(ECX));
  /* 11981605 call 0x119816b0 */
  push32(0x1198160au); f_119816b0();
  /* 1198160a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198160d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1198160f je 0x1198161c */
  if (C.zf) goto L_1198161c;
  /* 11981611 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11981614 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11981617 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1198161a jmp 0x11981623 */
  goto L_11981623;
L_1198161c:;
  /* 1198161c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11981623:;
  /* 11981623 jmp 0x1198162e */
  goto L_1198162e;
L_11981625:;
  /* 11981625 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11981628 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198162b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1198162e:;
  /* 1198162e jmp 0x119815c5 */
  goto L_119815c5;
L_11981630:;
  /* 11981630 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11981634 je 0x1198165b */
  if (C.zf) goto L_1198165b;
  /* 11981636 call 0x11981850 */
  push32(0x1198163bu); f_11981850();
  /* 1198163b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1198163e push 2 */
  push32((uint32_t)(0x2u));
  /* 11981640 mov ecx, dword ptr [0x119a24dc] */
  ECX = (r32((uint32_t)(0x119a24dc)));
  /* 11981646 push ecx */
  push32((uint32_t)(ECX));
  /* 11981647 call 0x11978200 */
  push32(0x1198164cu); f_11978200();
  /* 1198164c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198164f mov dword ptr [0x119a24dc], 0 */
  w32((uint32_t)(0x119a24dc), (0x0u));
  /* 11981659 jmp 0x11981681 */
  goto L_11981681;
L_1198165b:;
  /* 1198165b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198165f je 0x1198166e */
  if (C.zf) goto L_1198166e;
  /* 11981661 call 0x11981850 */
  push32(0x11981666u); f_11981850();
  /* 11981666 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1198166c jmp 0x11981678 */
  goto L_11981678;
L_1198166e:;
  /* 1198166e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_11981678:;
  /* 11981678 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 1198167e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11981681:;
  /* 11981681 jmp 0x1198168b */
  goto L_1198168b;
L_11981683:;
  /* 11981683 call 0x11981850 */
  push32(0x11981688u); f_11981850();
  /* 11981688 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1198168b:;
  /* 1198168b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198168f je 0x119816a8 */
  if (C.zf) goto L_119816a8;
  /* 11981691 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11981693 call 0x1197b210 */
  push32(0x11981698u); f_1197b210();
  /* 11981698 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198169b mov eax, dword ptr [0x119a3bec] */
  EAX = (r32((uint32_t)(0x119a3bec)));
  /* 119816a0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119816a3 mov dword ptr [0x119a3bec], eax */
  w32((uint32_t)(0x119a3bec), (EAX));
L_119816a8:;
  /* 119816a8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_119816ab:;
  /* 119816ab mov esp, ebp */
  ESP = (EBP);
  /* 119816ad pop ebp */
  EBP = (pop32());
  /* 119816ae ret  */
  ESPCHK(0x119812c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100116b0 @ 0x119816b0 (403 bytes, 117 insns) */
void f_119816b0(void) {
  FTRACE(0x119816b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119816b0 push ebp */
  push32((uint32_t)(EBP));
  /* 119816b1 mov ebp, esp */
  EBP = (ESP);
  /* 119816b3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119816b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119816bc push eax */
  push32((uint32_t)(EAX));
  /* 119816bd lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 119816c3 push ecx */
  push32((uint32_t)(ECX));
  /* 119816c4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 119816ca push edx */
  push32((uint32_t)(EDX));
  /* 119816cb lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 119816d1 push eax */
  push32((uint32_t)(EAX));
  /* 119816d2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119816d5 push ecx */
  push32((uint32_t)(ECX));
  /* 119816d6 call 0x11981950 */
  push32(0x119816dbu); f_11981950();
  /* 119816db add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119816de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119816e0 jne 0x119816e9 */
  if (!C.zf) goto L_119816e9;
  /* 119816e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119816e4 jmp 0x1198183f */
  goto L_1198183f;
L_119816e9:;
  /* 119816e9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 119816ee push 0x1199fce0 */
  push32((uint32_t)(0x1199fce0u));
  /* 119816f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 119816f5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 119816fb push edx */
  push32((uint32_t)(EDX));
  /* 119816fc call 0x1197a5a0 */
  push32(0x11981701u); f_1197a5a0();
  /* 11981701 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11981704 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11981707 push eax */
  push32((uint32_t)(EAX));
  /* 11981708 call 0x11977770 */
  push32(0x1198170du); f_11977770();
  /* 1198170d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11981710 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11981713 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11981717 jne 0x11981720 */
  if (!C.zf) goto L_11981720;
  /* 11981719 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1198171b jmp 0x1198183f */
  goto L_1198183f;
L_11981720:;
  /* 11981720 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11981723 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11981726 mov ecx, dword ptr [eax + 0x119a24dc] */
  ECX = (r32((uint32_t)(EAX + 0x119a24dc)));
  /* 1198172c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1198172f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11981732 mov eax, dword ptr [edx*4 + 0x119a3a68] */
  EAX = (r32((uint32_t)(EDX*4 + 0x119a3a68)));
  /* 11981739 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1198173c push 6 */
  push32((uint32_t)(0x6u));
  /* 1198173e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11981741 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11981744 add ecx, 0x119a3ab8 */
  { uint32_t _a=(ECX),_b=(0x119a3ab8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198174a push ecx */
  push32((uint32_t)(ECX));
  /* 1198174b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1198174e push edx */
  push32((uint32_t)(EDX));
  /* 1198174f call 0x1197e050 */
  push32(0x11981754u); f_1197e050();
  /* 11981754 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11981757 mov eax, dword ptr [0x119a3a80] */
  EAX = (r32((uint32_t)(0x119a3a80)));
  /* 1198175c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1198175f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 11981765 push ecx */
  push32((uint32_t)(ECX));
  /* 11981766 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11981769 push edx */
  push32((uint32_t)(EDX));
  /* 1198176a call 0x1197a720 */
  push32(0x1198176fu); f_1197a720();
  /* 1198176f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11981772 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11981775 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11981778 mov dword ptr [ecx + 0x119a24dc], eax */
  w32((uint32_t)(ECX + 0x119a24dc), (EAX));
  /* 1198177e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 11981784 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1198178a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198178d mov dword ptr [eax*4 + 0x119a3a68], edx */
  w32((uint32_t)(EAX*4 + 0x119a3a68), (EDX));
  /* 11981794 push 6 */
  push32((uint32_t)(0x6u));
  /* 11981796 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 1198179c push ecx */
  push32((uint32_t)(ECX));
  /* 1198179d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119817a0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119817a3 add edx, 0x119a3ab8 */
  { uint32_t _a=(EDX),_b=(0x119a3ab8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119817a9 push edx */
  push32((uint32_t)(EDX));
  /* 119817aa call 0x1197e050 */
  push32(0x119817afu); f_1197e050();
  /* 119817af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119817b2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119817b6 jne 0x119817c3 */
  if (!C.zf) goto L_119817c3;
  /* 119817b8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 119817be mov dword ptr [0x119a3a80], eax */
  w32((uint32_t)(0x119a3a80), (EAX));
L_119817c3:;
  /* 119817c3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119817c7 jne 0x119817d5 */
  if (!C.zf) goto L_119817d5;
  /* 119817c9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 119817cf mov dword ptr [0x119a3a84], ecx */
  w32((uint32_t)(0x119a3a84), (ECX));
L_119817d5:;
  /* 119817d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119817d8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119817db call dword ptr [edx + 0x119a24e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x119a24e0))), 0x119817e1u);
  /* 119817e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119817e3 je 0x1198181c */
  if (C.zf) goto L_1198181c;
  /* 119817e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119817e8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119817eb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119817ee mov dword ptr [eax + 0x119a24dc], ecx */
  w32((uint32_t)(EAX + 0x119a24dc), (ECX));
  /* 119817f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 119817f6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119817f9 push edx */
  push32((uint32_t)(EDX));
  /* 119817fa call 0x11978200 */
  push32(0x119817ffu); f_11978200();
  /* 119817ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11981802 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11981805 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11981808 mov dword ptr [eax*4 + 0x119a3a68], ecx */
  w32((uint32_t)(EAX*4 + 0x119a3a68), (ECX));
  /* 1198180f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11981812 mov dword ptr [0x119a3a80], edx */
  w32((uint32_t)(0x119a3a80), (EDX));
  /* 11981818 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1198181a jmp 0x1198183f */
  goto L_1198183f;
L_1198181c:;
  /* 1198181c cmp dword ptr [ebp - 0xc], 0x119a23c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x119a23c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11981823 je 0x11981833 */
  if (C.zf) goto L_11981833;
  /* 11981825 push 2 */
  push32((uint32_t)(0x2u));
  /* 11981827 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1198182a push eax */
  push32((uint32_t)(EAX));
  /* 1198182b call 0x11978200 */
  push32(0x11981830u); f_11978200();
  /* 11981830 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11981833:;
  /* 11981833 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11981836 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11981839 mov eax, dword ptr [ecx + 0x119a24dc] */
  EAX = (r32((uint32_t)(ECX + 0x119a24dc)));
L_1198183f:;
  /* 1198183f mov esp, ebp */
  ESP = (EBP);
  /* 11981841 pop ebp */
  EBP = (pop32());
  /* 11981842 ret  */
  ESPCHK(0x119816b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011850 @ 0x11981850 (256 bytes, 72 insns) */
void f_11981850(void) {
  FTRACE(0x11981850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11981850 push ebp */
  push32((uint32_t)(EBP));
  /* 11981851 mov ebp, esp */
  EBP = (ESP);
  /* 11981853 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11981856 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1198185d cmp dword ptr [0x119a24dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a24dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11981864 jne 0x11981884 */
  if (!C.zf) goto L_11981884;
  /* 11981866 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1198186b push 0x1199fce0 */
  push32((uint32_t)(0x1199fce0u));
  /* 11981870 push 2 */
  push32((uint32_t)(0x2u));
  /* 11981872 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 11981877 call 0x11977770 */
  push32(0x1198187cu); f_11977770();
  /* 1198187c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198187f mov dword ptr [0x119a24dc], eax */
  w32((uint32_t)(0x119a24dc), (EAX));
L_11981884:;
  /* 11981884 mov eax, dword ptr [0x119a24dc] */
  EAX = (r32((uint32_t)(0x119a24dc)));
  /* 11981889 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1198188c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11981893 jmp 0x1198189e */
  goto L_1198189e;
L_11981895:;
  /* 11981895 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11981898 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198189b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1198189e:;
  /* 1198189e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119818a1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119818a4 mov eax, dword ptr [edx + 0x119a24dc] */
  EAX = (r32((uint32_t)(EDX + 0x119a24dc)));
  /* 119818aa push eax */
  push32((uint32_t)(EAX));
  /* 119818ab push 0x1199fcec */
  push32((uint32_t)(0x1199fcecu));
  /* 119818b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119818b3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119818b6 mov edx, dword ptr [ecx + 0x119a24d8] */
  EDX = (r32((uint32_t)(ECX + 0x119a24d8)));
  /* 119818bc push edx */
  push32((uint32_t)(EDX));
  /* 119818bd push 3 */
  push32((uint32_t)(0x3u));
  /* 119818bf mov eax, dword ptr [0x119a24dc] */
  EAX = (r32((uint32_t)(0x119a24dc)));
  /* 119818c4 push eax */
  push32((uint32_t)(EAX));
  /* 119818c5 call 0x11981af0 */
  push32(0x119818cau); f_11981af0();
  /* 119818ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119818cd cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119818d1 jge 0x11981919 */
  if ((C.sf==C.of)) goto L_11981919;
  /* 119818d3 push 0x1199fcd8 */
  push32((uint32_t)(0x1199fcd8u));
  /* 119818d8 mov ecx, dword ptr [0x119a24dc] */
  ECX = (r32((uint32_t)(0x119a24dc)));
  /* 119818de push ecx */
  push32((uint32_t)(ECX));
  /* 119818df call 0x1197a730 */
  push32(0x119818e4u); f_1197a730();
  /* 119818e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119818e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119818ea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119818ed imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119818f0 mov eax, dword ptr [edx + 0x119a24dc] */
  EAX = (r32((uint32_t)(EDX + 0x119a24dc)));
  /* 119818f6 push eax */
  push32((uint32_t)(EAX));
  /* 119818f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119818fa imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119818fd mov edx, dword ptr [ecx + 0x119a24dc] */
  EDX = (r32((uint32_t)(ECX + 0x119a24dc)));
  /* 11981903 push edx */
  push32((uint32_t)(EDX));
  /* 11981904 call 0x11983400 */
  push32(0x11981909u); f_11983400();
  /* 11981909 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198190c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1198190e je 0x11981917 */
  if (C.zf) goto L_11981917;
  /* 11981910 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11981917:;
  /* 11981917 jmp 0x11981947 */
  goto L_11981947;
L_11981919:;
  /* 11981919 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198191d jne 0x11981926 */
  if (!C.zf) goto L_11981926;
  /* 1198191f mov eax, dword ptr [0x119a24dc] */
  EAX = (r32((uint32_t)(0x119a24dc)));
  /* 11981924 jmp 0x1198194c */
  goto L_1198194c;
L_11981926:;
  /* 11981926 push 2 */
  push32((uint32_t)(0x2u));
  /* 11981928 mov eax, dword ptr [0x119a24dc] */
  EAX = (r32((uint32_t)(0x119a24dc)));
  /* 1198192d push eax */
  push32((uint32_t)(EAX));
  /* 1198192e call 0x11978200 */
  push32(0x11981933u); f_11978200();
  /* 11981933 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11981936 mov dword ptr [0x119a24dc], 0 */
  w32((uint32_t)(0x119a24dc), (0x0u));
  /* 11981940 mov eax, dword ptr [0x119a24f4] */
  EAX = (r32((uint32_t)(0x119a24f4)));
  /* 11981945 jmp 0x1198194c */
  goto L_1198194c;
L_11981947:;
  /* 11981947 jmp 0x11981895 */
  goto L_11981895;
L_1198194c:;
  /* 1198194c mov esp, ebp */
  ESP = (EBP);
  /* 1198194e pop ebp */
  EBP = (pop32());
  /* 1198194f ret  */
  ESPCHK(0x11981850u, _esp0);
  ESP += 4; return;
}

/* FUN_10011950 @ 0x11981950 (388 bytes, 115 insns) */
void f_11981950(void) {
  FTRACE(0x11981950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11981950 push ebp */
  push32((uint32_t)(EBP));
  /* 11981951 mov ebp, esp */
  EBP = (ESP);
  /* 11981953 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11981959 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198195d jne 0x11981966 */
  if (!C.zf) goto L_11981966;
  /* 1198195f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11981961 jmp 0x11981ad0 */
  goto L_11981ad0;
L_11981966:;
  /* 11981966 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11981969 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1198196c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198196f jne 0x119819c0 */
  if (!C.zf) goto L_119819c0;
  /* 11981971 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11981974 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11981978 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1198197a jne 0x119819c0 */
  if (!C.zf) goto L_119819c0;
  /* 1198197c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1198197f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 11981982 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11981985 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 11981989 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198198d je 0x119819a9 */
  if (C.zf) goto L_119819a9;
  /* 1198198f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11981992 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 11981997 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1198199a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 119819a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119819a3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_119819a9:;
  /* 119819a9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119819ad je 0x119819b8 */
  if (C.zf) goto L_119819b8;
  /* 119819af mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119819b2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_119819b8:;
  /* 119819b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119819bb jmp 0x11981ad0 */
  goto L_11981ad0;
L_119819c0:;
  /* 119819c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119819c3 push ecx */
  push32((uint32_t)(ECX));
  /* 119819c4 push 0x119a2450 */
  push32((uint32_t)(0x119a2450u));
  /* 119819c9 call 0x11983400 */
  push32(0x119819ceu); f_11983400();
  /* 119819ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119819d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119819d3 je 0x11981a88 */
  if (C.zf) goto L_11981a88;
  /* 119819d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119819dc push edx */
  push32((uint32_t)(EDX));
  /* 119819dd push 0x119a23cc */
  push32((uint32_t)(0x119a23ccu));
  /* 119819e2 call 0x11983400 */
  push32(0x119819e7u); f_11983400();
  /* 119819e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119819ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119819ec je 0x11981a88 */
  if (C.zf) goto L_11981a88;
  /* 119819f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119819f5 push eax */
  push32((uint32_t)(EAX));
  /* 119819f6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 119819fc push ecx */
  push32((uint32_t)(ECX));
  /* 119819fd call 0x11981b40 */
  push32(0x11981a02u); f_11981b40();
  /* 11981a02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11981a05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11981a07 je 0x11981a10 */
  if (C.zf) goto L_11981a10;
  /* 11981a09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11981a0b jmp 0x11981ad0 */
  goto L_11981ad0;
L_11981a10:;
  /* 11981a10 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 11981a16 push edx */
  push32((uint32_t)(EDX));
  /* 11981a17 push 0x119a3a90 */
  push32((uint32_t)(0x119a3a90u));
  /* 11981a1c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 11981a22 push eax */
  push32((uint32_t)(EAX));
  /* 11981a23 call 0x11983550 */
  push32(0x11981a28u); f_11983550();
  /* 11981a28 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11981a2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11981a2d jne 0x11981a36 */
  if (!C.zf) goto L_11981a36;
  /* 11981a2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11981a31 jmp 0x11981ad0 */
  goto L_11981ad0;
L_11981a36:;
  /* 11981a36 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11981a38 mov cx, word ptr [0x119a3a94] */
  CX = (r16((uint32_t)(0x119a3a94)));
  /* 11981a3f mov dword ptr [0x119a3a98], ecx */
  w32((uint32_t)(0x119a3a98), (ECX));
  /* 11981a45 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 11981a4b push edx */
  push32((uint32_t)(EDX));
  /* 11981a4c push 0x119a2450 */
  push32((uint32_t)(0x119a2450u));
  /* 11981a51 call 0x11981ca0 */
  push32(0x11981a56u); f_11981ca0();
  /* 11981a56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11981a59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11981a5c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11981a5f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11981a61 je 0x11981a76 */
  if (C.zf) goto L_11981a76;
  /* 11981a63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11981a66 push edx */
  push32((uint32_t)(EDX));
  /* 11981a67 push 0x119a23cc */
  push32((uint32_t)(0x119a23ccu));
  /* 11981a6c call 0x1197a720 */
  push32(0x11981a71u); f_1197a720();
  /* 11981a71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11981a74 jmp 0x11981a88 */
  goto L_11981a88;
L_11981a76:;
  /* 11981a76 push 0x119a2450 */
  push32((uint32_t)(0x119a2450u));
  /* 11981a7b push 0x119a23cc */
  push32((uint32_t)(0x119a23ccu));
  /* 11981a80 call 0x1197a720 */
  push32(0x11981a85u); f_1197a720();
  /* 11981a85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11981a88:;
  /* 11981a88 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11981a8c je 0x11981aa1 */
  if (C.zf) goto L_11981aa1;
  /* 11981a8e push 6 */
  push32((uint32_t)(0x6u));
  /* 11981a90 push 0x119a3a90 */
  push32((uint32_t)(0x119a3a90u));
  /* 11981a95 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11981a98 push eax */
  push32((uint32_t)(EAX));
  /* 11981a99 call 0x1197e050 */
  push32(0x11981a9eu); f_1197e050();
  /* 11981a9e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11981aa1:;
  /* 11981aa1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11981aa5 je 0x11981aba */
  if (C.zf) goto L_11981aba;
  /* 11981aa7 push 4 */
  push32((uint32_t)(0x4u));
  /* 11981aa9 push 0x119a3a98 */
  push32((uint32_t)(0x119a3a98u));
  /* 11981aae mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11981ab1 push ecx */
  push32((uint32_t)(ECX));
  /* 11981ab2 call 0x1197e050 */
  push32(0x11981ab7u); f_1197e050();
  /* 11981ab7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11981aba:;
  /* 11981aba push 0x119a2450 */
  push32((uint32_t)(0x119a2450u));
  /* 11981abf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11981ac2 push edx */
  push32((uint32_t)(EDX));
  /* 11981ac3 call 0x1197a720 */
  push32(0x11981ac8u); f_1197a720();
  /* 11981ac8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11981acb mov eax, 0x119a2450 */
  EAX = (0x119a2450u);
L_11981ad0:;
  /* 11981ad0 mov esp, ebp */
  ESP = (EBP);
  /* 11981ad2 pop ebp */
  EBP = (pop32());
  /* 11981ad3 ret  */
  ESPCHK(0x11981950u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ae0 @ 0x11981ae0 (7 bytes, 5 insns) */
void f_11981ae0(void) {
  FTRACE(0x11981ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11981ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 11981ae1 mov ebp, esp */
  EBP = (ESP);
  /* 11981ae3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11981ae5 pop ebp */
  EBP = (pop32());
  /* 11981ae6 ret  */
  ESPCHK(0x11981ae0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x11981af0 (79 bytes, 28 insns) */
void f_11981af0(void) {
  FTRACE(0x11981af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11981af0 push ebp */
  push32((uint32_t)(EBP));
  /* 11981af1 mov ebp, esp */
  EBP = (ESP);
  /* 11981af3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11981af6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11981af9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11981afc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11981b03 jmp 0x11981b0e */
  goto L_11981b0e;
L_11981b05:;
  /* 11981b05 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11981b08 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11981b0b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11981b0e:;
  /* 11981b0e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11981b11 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11981b14 jge 0x11981b34 */
  if ((C.sf==C.of)) goto L_11981b34;
  /* 11981b16 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11981b19 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11981b1c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11981b1f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11981b22 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11981b25 push edx */
  push32((uint32_t)(EDX));
  /* 11981b26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11981b29 push eax */
  push32((uint32_t)(EAX));
  /* 11981b2a call 0x1197a730 */
  push32(0x11981b2fu); f_1197a730();
  /* 11981b2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11981b32 jmp 0x11981b05 */
  goto L_11981b05;
L_11981b34:;
  /* 11981b34 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11981b3b mov esp, ebp */
  ESP = (EBP);
  /* 11981b3d pop ebp */
  EBP = (pop32());
  /* 11981b3e ret  */
  ESPCHK(0x11981af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b40 @ 0x11981b40 (349 bytes, 122 insns) */
void f_11981b40(void) {
  FTRACE(0x11981b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11981b40 push ebp */
  push32((uint32_t)(EBP));
  /* 11981b41 mov ebp, esp */
  EBP = (ESP);
  /* 11981b43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11981b46 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 11981b4b push 0 */
  push32((uint32_t)(0x0u));
  /* 11981b4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11981b50 push eax */
  push32((uint32_t)(EAX));
  /* 11981b51 call 0x1197b4e0 */
  push32(0x11981b56u); f_1197b4e0();
  /* 11981b56 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11981b59 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11981b5c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11981b5f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11981b61 jne 0x11981b6a */
  if (!C.zf) goto L_11981b6a;
  /* 11981b63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11981b65 jmp 0x11981c99 */
  goto L_11981c99;
L_11981b6a:;
  /* 11981b6a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11981b6d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11981b70 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11981b73 jne 0x11981ba0 */
  if (!C.zf) goto L_11981ba0;
  /* 11981b75 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11981b78 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11981b7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11981b7e je 0x11981ba0 */
  if (C.zf) goto L_11981ba0;
  /* 11981b80 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11981b83 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11981b86 push ecx */
  push32((uint32_t)(ECX));
  /* 11981b87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11981b8a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11981b90 push edx */
  push32((uint32_t)(EDX));
  /* 11981b91 call 0x1197a720 */
  push32(0x11981b96u); f_1197a720();
  /* 11981b96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11981b99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11981b9b jmp 0x11981c99 */
  goto L_11981c99;
L_11981ba0:;
  /* 11981ba0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11981ba7 jmp 0x11981bb2 */
  goto L_11981bb2;
L_11981ba9:;
  /* 11981ba9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11981bac add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11981baf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11981bb2:;
  /* 11981bb2 push 0x1199fcf0 */
  push32((uint32_t)(0x1199fcf0u));
  /* 11981bb7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11981bba push ecx */
  push32((uint32_t)(ECX));
  /* 11981bbb call 0x11983490 */
  push32(0x11981bc0u); f_11983490();
  /* 11981bc0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11981bc3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11981bc6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11981bca jne 0x11981bd4 */
  if (!C.zf) goto L_11981bd4;
  /* 11981bcc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11981bcf jmp 0x11981c99 */
  goto L_11981c99;
L_11981bd4:;
  /* 11981bd4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11981bd7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11981bda mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11981bdc mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11981bdf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11981be3 jne 0x11981c0a */
  if (!C.zf) goto L_11981c0a;
  /* 11981be5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11981be9 jge 0x11981c0a */
  if ((C.sf==C.of)) goto L_11981c0a;
  /* 11981beb movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11981bef cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11981bf2 je 0x11981c0a */
  if (C.zf) goto L_11981c0a;
  /* 11981bf4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11981bf7 push edx */
  push32((uint32_t)(EDX));
  /* 11981bf8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11981bfb push eax */
  push32((uint32_t)(EAX));
  /* 11981bfc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11981bff push ecx */
  push32((uint32_t)(ECX));
  /* 11981c00 call 0x1197af90 */
  push32(0x11981c05u); f_1197af90();
  /* 11981c05 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11981c08 jmp 0x11981c70 */
  goto L_11981c70;
L_11981c0a:;
  /* 11981c0a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11981c0e jne 0x11981c38 */
  if (!C.zf) goto L_11981c38;
  /* 11981c10 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11981c14 jge 0x11981c38 */
  if ((C.sf==C.of)) goto L_11981c38;
  /* 11981c16 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11981c1a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11981c1d je 0x11981c38 */
  if (C.zf) goto L_11981c38;
  /* 11981c1f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11981c22 push eax */
  push32((uint32_t)(EAX));
  /* 11981c23 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11981c26 push ecx */
  push32((uint32_t)(ECX));
  /* 11981c27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11981c2a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11981c2d push edx */
  push32((uint32_t)(EDX));
  /* 11981c2e call 0x1197af90 */
  push32(0x11981c33u); f_1197af90();
  /* 11981c33 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11981c36 jmp 0x11981c70 */
  goto L_11981c70;
L_11981c38:;
  /* 11981c38 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11981c3c jne 0x11981c6b */
  if (!C.zf) goto L_11981c6b;
  /* 11981c3e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11981c42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11981c44 je 0x11981c4f */
  if (C.zf) goto L_11981c4f;
  /* 11981c46 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11981c4a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11981c4d jne 0x11981c6b */
  if (!C.zf) goto L_11981c6b;
L_11981c4f:;
  /* 11981c4f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11981c52 push edx */
  push32((uint32_t)(EDX));
  /* 11981c53 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11981c56 push eax */
  push32((uint32_t)(EAX));
  /* 11981c57 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11981c5a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11981c60 push ecx */
  push32((uint32_t)(ECX));
  /* 11981c61 call 0x1197af90 */
  push32(0x11981c66u); f_1197af90();
  /* 11981c66 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11981c69 jmp 0x11981c70 */
  goto L_11981c70;
L_11981c6b:;
  /* 11981c6b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11981c6e jmp 0x11981c99 */
  goto L_11981c99;
L_11981c70:;
  /* 11981c70 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11981c74 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11981c77 jne 0x11981c7b */
  if (!C.zf) goto L_11981c7b;
  /* 11981c79 jmp 0x11981c97 */
  goto L_11981c97;
L_11981c7b:;
  /* 11981c7b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11981c7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11981c81 jne 0x11981c85 */
  if (!C.zf) goto L_11981c85;
  /* 11981c83 jmp 0x11981c97 */
  goto L_11981c97;
L_11981c85:;
  /* 11981c85 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11981c88 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11981c8b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 11981c8f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11981c92 jmp 0x11981ba9 */
  goto L_11981ba9;
L_11981c97:;
  /* 11981c97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11981c99:;
  /* 11981c99 mov esp, ebp */
  ESP = (EBP);
  /* 11981c9b pop ebp */
  EBP = (pop32());
  /* 11981c9c ret  */
  ESPCHK(0x11981b40u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x11981ca0 (101 bytes, 36 insns) */
void f_11981ca0(void) {
  FTRACE(0x11981ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11981ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 11981ca1 mov ebp, esp */
  EBP = (ESP);
  /* 11981ca3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11981ca6 push eax */
  push32((uint32_t)(EAX));
  /* 11981ca7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11981caa push ecx */
  push32((uint32_t)(ECX));
  /* 11981cab call 0x1197a720 */
  push32(0x11981cb0u); f_1197a720();
  /* 11981cb0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11981cb3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11981cb6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 11981cba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11981cbc je 0x11981cd8 */
  if (C.zf) goto L_11981cd8;
  /* 11981cbe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11981cc1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11981cc4 push ecx */
  push32((uint32_t)(ECX));
  /* 11981cc5 push 0x1199fcf8 */
  push32((uint32_t)(0x1199fcf8u));
  /* 11981cca push 2 */
  push32((uint32_t)(0x2u));
  /* 11981ccc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11981ccf push edx */
  push32((uint32_t)(EDX));
  /* 11981cd0 call 0x11981af0 */
  push32(0x11981cd5u); f_11981af0();
  /* 11981cd5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11981cd8:;
  /* 11981cd8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11981cdb movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 11981ce2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11981ce4 je 0x11981d03 */
  if (C.zf) goto L_11981d03;
  /* 11981ce6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11981ce9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11981cef push edx */
  push32((uint32_t)(EDX));
  /* 11981cf0 push 0x1199fcf4 */
  push32((uint32_t)(0x1199fcf4u));
  /* 11981cf5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11981cf7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11981cfa push eax */
  push32((uint32_t)(EAX));
  /* 11981cfb call 0x11981af0 */
  push32(0x11981d00u); f_11981af0();
  /* 11981d00 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11981d03:;
  /* 11981d03 pop ebp */
  EBP = (pop32());
  /* 11981d04 ret  */
  ESPCHK(0x11981ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d10 @ 0x11981d10 (130 bytes, 50 insns) */
void f_11981d10(void) {
  FTRACE(0x11981d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11981d10 push ebp */
  push32((uint32_t)(EBP));
  /* 11981d11 mov ebp, esp */
  EBP = (ESP);
  /* 11981d13 push ecx */
  push32((uint32_t)(ECX));
  /* 11981d14 push ebx */
  push32((uint32_t)(EBX));
  /* 11981d15 push esi */
  push32((uint32_t)(ESI));
  /* 11981d16 push edi */
  push32((uint32_t)(EDI));
  /* 11981d17 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11981d1e:;
  /* 11981d1e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11981d22 jne 0x11981d42 */
  if (!C.zf) goto L_11981d42;
  /* 11981d24 push 0x1199fd08 */
  push32((uint32_t)(0x1199fd08u));
  /* 11981d29 push 0 */
  push32((uint32_t)(0x0u));
  /* 11981d2b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11981d2d push 0x1199fcfc */
  push32((uint32_t)(0x1199fcfcu));
  /* 11981d32 push 2 */
  push32((uint32_t)(0x2u));
  /* 11981d34 call 0x11976830 */
  push32(0x11981d39u); f_11976830();
  /* 11981d39 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11981d3c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11981d3f jne 0x11981d42 */
  if (!C.zf) goto L_11981d42;
  /* 11981d41 int3  */
  x86_unimpl("int3 @ 0x11981d41");
L_11981d42:;
  /* 11981d42 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11981d44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11981d46 jne 0x11981d1e */
  if (!C.zf) goto L_11981d1e;
  /* 11981d48 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11981d4b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11981d4e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 11981d51 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11981d53 je 0x11981d61 */
  if (C.zf) goto L_11981d61;
  /* 11981d55 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11981d58 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11981d5f jmp 0x11981d88 */
  goto L_11981d88;
L_11981d61:;
  /* 11981d61 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11981d64 push ecx */
  push32((uint32_t)(ECX));
  /* 11981d65 call 0x11980580 */
  push32(0x11981d6au); f_11980580();
  /* 11981d6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11981d6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11981d70 push edx */
  push32((uint32_t)(EDX));
  /* 11981d71 call 0x11981da0 */
  push32(0x11981d76u); f_11981da0();
  /* 11981d76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11981d79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11981d7c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11981d7f push eax */
  push32((uint32_t)(EAX));
  /* 11981d80 call 0x119805f0 */
  push32(0x11981d85u); f_119805f0();
  /* 11981d85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11981d88:;
  /* 11981d88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11981d8b pop edi */
  EDI = (pop32());
  /* 11981d8c pop esi */
  ESI = (pop32());
  /* 11981d8d pop ebx */
  EBX = (pop32());
  /* 11981d8e mov esp, ebp */
  ESP = (EBP);
  /* 11981d90 pop ebp */
  EBP = (pop32());
  /* 11981d91 ret  */
  ESPCHK(0x11981d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10011da0 @ 0x11981da0 (190 bytes, 67 insns) */
void f_11981da0(void) {
  FTRACE(0x11981da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11981da0 push ebp */
  push32((uint32_t)(EBP));
  /* 11981da1 mov ebp, esp */
  EBP = (ESP);
  /* 11981da3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11981da6 push ebx */
  push32((uint32_t)(EBX));
  /* 11981da7 push esi */
  push32((uint32_t)(ESI));
  /* 11981da8 push edi */
  push32((uint32_t)(EDI));
  /* 11981da9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11981db0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11981db3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11981db6:;
  /* 11981db6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11981dba jne 0x11981dda */
  if (!C.zf) goto L_11981dda;
  /* 11981dbc push 0x1199fba8 */
  push32((uint32_t)(0x1199fba8u));
  /* 11981dc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11981dc3 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 11981dc5 push 0x1199fcfc */
  push32((uint32_t)(0x1199fcfcu));
  /* 11981dca push 2 */
  push32((uint32_t)(0x2u));
  /* 11981dcc call 0x11976830 */
  push32(0x11981dd1u); f_11976830();
  /* 11981dd1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11981dd4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11981dd7 jne 0x11981dda */
  if (!C.zf) goto L_11981dda;
  /* 11981dd9 int3  */
  x86_unimpl("int3 @ 0x11981dd9");
L_11981dda:;
  /* 11981dda xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11981ddc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11981dde jne 0x11981db6 */
  if (!C.zf) goto L_11981db6;
  /* 11981de0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11981de3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11981de6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 11981deb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11981ded je 0x11981e4a */
  if (C.zf) goto L_11981e4a;
  /* 11981def mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11981df2 push ecx */
  push32((uint32_t)(ECX));
  /* 11981df3 call 0x119810a0 */
  push32(0x11981df8u); f_119810a0();
  /* 11981df8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11981dfb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11981dfe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11981e01 push edx */
  push32((uint32_t)(EDX));
  /* 11981e02 call 0x11984420 */
  push32(0x11981e07u); f_11984420();
  /* 11981e07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11981e0a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11981e0d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11981e10 push ecx */
  push32((uint32_t)(ECX));
  /* 11981e11 call 0x119842f0 */
  push32(0x11981e16u); f_119842f0();
  /* 11981e16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11981e19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11981e1b jge 0x11981e26 */
  if ((C.sf==C.of)) goto L_11981e26;
  /* 11981e1d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11981e24 jmp 0x11981e4a */
  goto L_11981e4a;
L_11981e26:;
  /* 11981e26 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11981e29 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11981e2d je 0x11981e4a */
  if (C.zf) goto L_11981e4a;
  /* 11981e2f push 2 */
  push32((uint32_t)(0x2u));
  /* 11981e31 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11981e34 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11981e37 push ecx */
  push32((uint32_t)(ECX));
  /* 11981e38 call 0x11978200 */
  push32(0x11981e3du); f_11978200();
  /* 11981e3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11981e40 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11981e43 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_11981e4a:;
  /* 11981e4a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11981e4d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11981e54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11981e57 pop edi */
  EDI = (pop32());
  /* 11981e58 pop esi */
  ESI = (pop32());
  /* 11981e59 pop ebx */
  EBX = (pop32());
  /* 11981e5a mov esp, ebp */
  ESP = (EBP);
  /* 11981e5c pop ebp */
  EBP = (pop32());
  /* 11981e5d ret  */
  ESPCHK(0x11981da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e60 @ 0x11981e60 (210 bytes, 63 insns) */
void f_11981e60(void) {
  FTRACE(0x11981e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11981e60 push ebp */
  push32((uint32_t)(EBP));
  /* 11981e61 mov ebp, esp */
  EBP = (ESP);
  /* 11981e63 push ecx */
  push32((uint32_t)(ECX));
  /* 11981e64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11981e67 cmp eax, dword ptr [0x119a537c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119a537c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11981e6d jae 0x11981e91 */
  if (!C.cf) goto L_11981e91;
  /* 11981e6f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11981e72 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11981e75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11981e78 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11981e7b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11981e7e mov eax, dword ptr [ecx*4 + 0x119a5240] */
  EAX = (r32((uint32_t)(ECX*4 + 0x119a5240)));
  /* 11981e85 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11981e8a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11981e8d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11981e8f jne 0x11981ea4 */
  if (!C.zf) goto L_11981ea4;
L_11981e91:;
  /* 11981e91 call 0x1197f640 */
  push32(0x11981e96u); f_1197f640();
  /* 11981e96 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11981e9c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11981e9f jmp 0x11981f2e */
  goto L_11981f2e;
L_11981ea4:;
  /* 11981ea4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11981ea7 push edx */
  push32((uint32_t)(EDX));
  /* 11981ea8 call 0x11980e60 */
  push32(0x11981eadu); f_11980e60();
  /* 11981ead add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11981eb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11981eb3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11981eb6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11981eb9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11981ebc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11981ebf mov edx, dword ptr [eax*4 + 0x119a5240] */
  EDX = (r32((uint32_t)(EAX*4 + 0x119a5240)));
  /* 11981ec6 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11981ecb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11981ece test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11981ed0 je 0x11981f0d */
  if (C.zf) goto L_11981f0d;
  /* 11981ed2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11981ed5 push ecx */
  push32((uint32_t)(ECX));
  /* 11981ed6 call 0x11980ce0 */
  push32(0x11981edbu); f_11980ce0();
  /* 11981edb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11981ede push eax */
  push32((uint32_t)(EAX));
  /* 11981edf call dword ptr [0x119a6300] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6300))), 0x11981ee5u);
  /* 11981ee5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11981ee7 jne 0x11981ef4 */
  if (!C.zf) goto L_11981ef4;
  /* 11981ee9 call dword ptr [0x119a63d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63d8))), 0x11981eefu);
  /* 11981eef mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11981ef2 jmp 0x11981efb */
  goto L_11981efb;
L_11981ef4:;
  /* 11981ef4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11981efb:;
  /* 11981efb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11981eff jne 0x11981f03 */
  if (!C.zf) goto L_11981f03;
  /* 11981f01 jmp 0x11981f1f */
  goto L_11981f1f;
L_11981f03:;
  /* 11981f03 call 0x1197f650 */
  push32(0x11981f08u); f_1197f650();
  /* 11981f08 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11981f0b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11981f0d:;
  /* 11981f0d call 0x1197f640 */
  push32(0x11981f12u); f_1197f640();
  /* 11981f12 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11981f18 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11981f1f:;
  /* 11981f1f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11981f22 push eax */
  push32((uint32_t)(EAX));
  /* 11981f23 call 0x11980ef0 */
  push32(0x11981f28u); f_11980ef0();
  /* 11981f28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11981f2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11981f2e:;
  /* 11981f2e mov esp, ebp */
  ESP = (EBP);
  /* 11981f30 pop ebp */
  EBP = (pop32());
  /* 11981f31 ret  */
  ESPCHK(0x11981e60u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x11981f40 (219 bytes, 64 insns) */
void f_11981f40(void) {
  FTRACE(0x11981f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11981f40 push ebp */
  push32((uint32_t)(EBP));
  /* 11981f41 mov ebp, esp */
  EBP = (ESP);
  /* 11981f43 push ecx */
  push32((uint32_t)(ECX));
  /* 11981f44 cmp dword ptr [0x119a3a7c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3a7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11981f4b je 0x11981fe1 */
  if (C.zf) goto L_11981fe1;
  /* 11981f51 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11981f53 push 0x1199fd18 */
  push32((uint32_t)(0x1199fd18u));
  /* 11981f58 push 2 */
  push32((uint32_t)(0x2u));
  /* 11981f5a push 0xac */
  push32((uint32_t)(0xacu));
  /* 11981f5f push 1 */
  push32((uint32_t)(0x1u));
  /* 11981f61 call 0x11977b80 */
  push32(0x11981f66u); f_11977b80();
  /* 11981f66 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11981f69 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11981f6c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11981f70 jne 0x11981f7c */
  if (!C.zf) goto L_11981f7c;
  /* 11981f72 mov eax, 1 */
  EAX = (0x1u);
  /* 11981f77 jmp 0x11982017 */
  goto L_11982017;
L_11981f7c:;
  /* 11981f7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11981f7f push eax */
  push32((uint32_t)(EAX));
  /* 11981f80 call 0x11982020 */
  push32(0x11981f85u); f_11982020();
  /* 11981f85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11981f88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11981f8a je 0x11981fad */
  if (C.zf) goto L_11981fad;
  /* 11981f8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11981f8f push ecx */
  push32((uint32_t)(ECX));
  /* 11981f90 call 0x119825b0 */
  push32(0x11981f95u); f_119825b0();
  /* 11981f95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11981f98 push 2 */
  push32((uint32_t)(0x2u));
  /* 11981f9a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11981f9d push edx */
  push32((uint32_t)(EDX));
  /* 11981f9e call 0x11978200 */
  push32(0x11981fa3u); f_11978200();
  /* 11981fa3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11981fa6 mov eax, 1 */
  EAX = (0x1u);
  /* 11981fab jmp 0x11982017 */
  goto L_11982017;
L_11981fad:;
  /* 11981fad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11981fb0 mov dword ptr [0x119a2c98], eax */
  w32((uint32_t)(0x119a2c98), (EAX));
  /* 11981fb5 mov ecx, dword ptr [0x119a3a9c] */
  ECX = (r32((uint32_t)(0x119a3a9c)));
  /* 11981fbb push ecx */
  push32((uint32_t)(ECX));
  /* 11981fbc call 0x119825b0 */
  push32(0x11981fc1u); f_119825b0();
  /* 11981fc1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11981fc4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11981fc6 mov edx, dword ptr [0x119a3a9c] */
  EDX = (r32((uint32_t)(0x119a3a9c)));
  /* 11981fcc push edx */
  push32((uint32_t)(EDX));
  /* 11981fcd call 0x11978200 */
  push32(0x11981fd2u); f_11978200();
  /* 11981fd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11981fd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11981fd8 mov dword ptr [0x119a3a9c], eax */
  w32((uint32_t)(0x119a3a9c), (EAX));
  /* 11981fdd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11981fdf jmp 0x11982017 */
  goto L_11982017;
L_11981fe1:;
  /* 11981fe1 mov dword ptr [0x119a2c98], 0x119a2ca0 */
  w32((uint32_t)(0x119a2c98), (0x119a2ca0u));
  /* 11981feb mov ecx, dword ptr [0x119a3a9c] */
  ECX = (r32((uint32_t)(0x119a3a9c)));
  /* 11981ff1 push ecx */
  push32((uint32_t)(ECX));
  /* 11981ff2 call 0x119825b0 */
  push32(0x11981ff7u); f_119825b0();
  /* 11981ff7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11981ffa push 2 */
  push32((uint32_t)(0x2u));
  /* 11981ffc mov edx, dword ptr [0x119a3a9c] */
  EDX = (r32((uint32_t)(0x119a3a9c)));
  /* 11982002 push edx */
  push32((uint32_t)(EDX));
  /* 11982003 call 0x11978200 */
  push32(0x11982008u); f_11978200();
  /* 11982008 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198200b mov dword ptr [0x119a3a9c], 0 */
  w32((uint32_t)(0x119a3a9c), (0x0u));
  /* 11982015 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11982017:;
  /* 11982017 mov esp, ebp */
  ESP = (EBP);
  /* 11982019 pop ebp */
  EBP = (pop32());
  /* 1198201a ret  */
  ESPCHK(0x11981f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10012020 @ 0x11982020 (1423 bytes, 533 insns) */
void f_11982020(void) {
  FTRACE(0x11982020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11982020 push ebp */
  push32((uint32_t)(EBP));
  /* 11982021 mov ebp, esp */
  EBP = (ESP);
  /* 11982023 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11982026 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1198202d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1198202f mov ax, word ptr [0x119a3ad6] */
  AX = (r16((uint32_t)(0x119a3ad6)));
  /* 11982035 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11982038 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1198203a mov cx, word ptr [0x119a3ad8] */
  CX = (r16((uint32_t)(0x119a3ad8)));
  /* 11982041 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11982044 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11982048 jne 0x11982052 */
  if (!C.zf) goto L_11982052;
  /* 1198204a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1198204d jmp 0x119825ab */
  goto L_119825ab;
L_11982052:;
  /* 11982052 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982055 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11982058 push edx */
  push32((uint32_t)(EDX));
  /* 11982059 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 1198205b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1198205e push eax */
  push32((uint32_t)(EAX));
  /* 1198205f push 1 */
  push32((uint32_t)(0x1u));
  /* 11982061 call 0x11985930 */
  push32(0x11982066u); f_11985930();
  /* 11982066 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982069 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1198206c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1198206e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11982071 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982074 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11982077 push edx */
  push32((uint32_t)(EDX));
  /* 11982078 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1198207a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1198207d push eax */
  push32((uint32_t)(EAX));
  /* 1198207e push 1 */
  push32((uint32_t)(0x1u));
  /* 11982080 call 0x11985930 */
  push32(0x11982085u); f_11985930();
  /* 11982085 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982088 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1198208b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1198208d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11982090 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982093 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11982096 push edx */
  push32((uint32_t)(EDX));
  /* 11982097 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 11982099 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1198209c push eax */
  push32((uint32_t)(EAX));
  /* 1198209d push 1 */
  push32((uint32_t)(0x1u));
  /* 1198209f call 0x11985930 */
  push32(0x119820a4u); f_11985930();
  /* 119820a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119820a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119820aa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119820ac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119820af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119820b2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119820b5 push edx */
  push32((uint32_t)(EDX));
  /* 119820b6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 119820b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119820bb push eax */
  push32((uint32_t)(EAX));
  /* 119820bc push 1 */
  push32((uint32_t)(0x1u));
  /* 119820be call 0x11985930 */
  push32(0x119820c3u); f_11985930();
  /* 119820c3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119820c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119820c9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119820cb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119820ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119820d1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119820d4 push edx */
  push32((uint32_t)(EDX));
  /* 119820d5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 119820d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119820da push eax */
  push32((uint32_t)(EAX));
  /* 119820db push 1 */
  push32((uint32_t)(0x1u));
  /* 119820dd call 0x11985930 */
  push32(0x119820e2u); f_11985930();
  /* 119820e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119820e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119820e8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119820ea mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119820ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119820f0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119820f3 push edx */
  push32((uint32_t)(EDX));
  /* 119820f4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 119820f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119820f9 push eax */
  push32((uint32_t)(EAX));
  /* 119820fa push 1 */
  push32((uint32_t)(0x1u));
  /* 119820fc call 0x11985930 */
  push32(0x11982101u); f_11985930();
  /* 11982101 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982104 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11982107 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11982109 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1198210c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198210f push edx */
  push32((uint32_t)(EDX));
  /* 11982110 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 11982112 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11982115 push eax */
  push32((uint32_t)(EAX));
  /* 11982116 push 1 */
  push32((uint32_t)(0x1u));
  /* 11982118 call 0x11985930 */
  push32(0x1198211du); f_11985930();
  /* 1198211d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982120 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11982123 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11982125 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11982128 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198212b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198212e push edx */
  push32((uint32_t)(EDX));
  /* 1198212f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 11982131 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11982134 push eax */
  push32((uint32_t)(EAX));
  /* 11982135 push 1 */
  push32((uint32_t)(0x1u));
  /* 11982137 call 0x11985930 */
  push32(0x1198213cu); f_11985930();
  /* 1198213c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198213f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11982142 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11982144 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11982147 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198214a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198214d push edx */
  push32((uint32_t)(EDX));
  /* 1198214e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 11982150 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11982153 push eax */
  push32((uint32_t)(EAX));
  /* 11982154 push 1 */
  push32((uint32_t)(0x1u));
  /* 11982156 call 0x11985930 */
  push32(0x1198215bu); f_11985930();
  /* 1198215b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198215e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11982161 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11982163 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11982166 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982169 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198216c push edx */
  push32((uint32_t)(EDX));
  /* 1198216d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1198216f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11982172 push eax */
  push32((uint32_t)(EAX));
  /* 11982173 push 1 */
  push32((uint32_t)(0x1u));
  /* 11982175 call 0x11985930 */
  push32(0x1198217au); f_11985930();
  /* 1198217a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198217d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11982180 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11982182 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11982185 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982188 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198218b push edx */
  push32((uint32_t)(EDX));
  /* 1198218c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1198218e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11982191 push eax */
  push32((uint32_t)(EAX));
  /* 11982192 push 1 */
  push32((uint32_t)(0x1u));
  /* 11982194 call 0x11985930 */
  push32(0x11982199u); f_11985930();
  /* 11982199 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198219c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1198219f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119821a1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119821a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119821a7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119821aa push edx */
  push32((uint32_t)(EDX));
  /* 119821ab push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 119821ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119821b0 push eax */
  push32((uint32_t)(EAX));
  /* 119821b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 119821b3 call 0x11985930 */
  push32(0x119821b8u); f_11985930();
  /* 119821b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119821bb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119821be or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119821c0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119821c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119821c6 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119821c9 push edx */
  push32((uint32_t)(EDX));
  /* 119821ca push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 119821cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119821cf push eax */
  push32((uint32_t)(EAX));
  /* 119821d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 119821d2 call 0x11985930 */
  push32(0x119821d7u); f_11985930();
  /* 119821d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119821da mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119821dd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119821df mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119821e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119821e5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119821e8 push edx */
  push32((uint32_t)(EDX));
  /* 119821e9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 119821eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119821ee push eax */
  push32((uint32_t)(EAX));
  /* 119821ef push 1 */
  push32((uint32_t)(0x1u));
  /* 119821f1 call 0x11985930 */
  push32(0x119821f6u); f_11985930();
  /* 119821f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119821f9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119821fc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119821fe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11982201 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982204 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11982207 push edx */
  push32((uint32_t)(EDX));
  /* 11982208 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1198220a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1198220d push eax */
  push32((uint32_t)(EAX));
  /* 1198220e push 1 */
  push32((uint32_t)(0x1u));
  /* 11982210 call 0x11985930 */
  push32(0x11982215u); f_11985930();
  /* 11982215 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982218 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1198221b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1198221d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11982220 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982223 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11982226 push edx */
  push32((uint32_t)(EDX));
  /* 11982227 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11982229 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1198222c push eax */
  push32((uint32_t)(EAX));
  /* 1198222d push 1 */
  push32((uint32_t)(0x1u));
  /* 1198222f call 0x11985930 */
  push32(0x11982234u); f_11985930();
  /* 11982234 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982237 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1198223a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1198223c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1198223f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982242 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11982245 push edx */
  push32((uint32_t)(EDX));
  /* 11982246 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11982248 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1198224b push eax */
  push32((uint32_t)(EAX));
  /* 1198224c push 1 */
  push32((uint32_t)(0x1u));
  /* 1198224e call 0x11985930 */
  push32(0x11982253u); f_11985930();
  /* 11982253 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982256 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11982259 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1198225b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1198225e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982261 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11982264 push edx */
  push32((uint32_t)(EDX));
  /* 11982265 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11982267 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1198226a push eax */
  push32((uint32_t)(EAX));
  /* 1198226b push 1 */
  push32((uint32_t)(0x1u));
  /* 1198226d call 0x11985930 */
  push32(0x11982272u); f_11985930();
  /* 11982272 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982275 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11982278 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1198227a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1198227d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982280 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11982283 push edx */
  push32((uint32_t)(EDX));
  /* 11982284 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11982286 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11982289 push eax */
  push32((uint32_t)(EAX));
  /* 1198228a push 1 */
  push32((uint32_t)(0x1u));
  /* 1198228c call 0x11985930 */
  push32(0x11982291u); f_11985930();
  /* 11982291 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982294 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11982297 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11982299 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1198229c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198229f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119822a2 push edx */
  push32((uint32_t)(EDX));
  /* 119822a3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 119822a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119822a8 push eax */
  push32((uint32_t)(EAX));
  /* 119822a9 push 1 */
  push32((uint32_t)(0x1u));
  /* 119822ab call 0x11985930 */
  push32(0x119822b0u); f_11985930();
  /* 119822b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119822b3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119822b6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119822b8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119822bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119822be add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119822c1 push edx */
  push32((uint32_t)(EDX));
  /* 119822c2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 119822c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119822c7 push eax */
  push32((uint32_t)(EAX));
  /* 119822c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 119822ca call 0x11985930 */
  push32(0x119822cfu); f_11985930();
  /* 119822cf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119822d2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119822d5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119822d7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119822da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119822dd add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119822e0 push edx */
  push32((uint32_t)(EDX));
  /* 119822e1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 119822e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119822e6 push eax */
  push32((uint32_t)(EAX));
  /* 119822e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 119822e9 call 0x11985930 */
  push32(0x119822eeu); f_11985930();
  /* 119822ee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119822f1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119822f4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119822f6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119822f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119822fc add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119822ff push edx */
  push32((uint32_t)(EDX));
  /* 11982300 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 11982302 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11982305 push eax */
  push32((uint32_t)(EAX));
  /* 11982306 push 1 */
  push32((uint32_t)(0x1u));
  /* 11982308 call 0x11985930 */
  push32(0x1198230du); f_11985930();
  /* 1198230d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982310 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11982313 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11982315 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11982318 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198231b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198231e push edx */
  push32((uint32_t)(EDX));
  /* 1198231f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11982321 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11982324 push eax */
  push32((uint32_t)(EAX));
  /* 11982325 push 1 */
  push32((uint32_t)(0x1u));
  /* 11982327 call 0x11985930 */
  push32(0x1198232cu); f_11985930();
  /* 1198232c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198232f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11982332 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11982334 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11982337 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198233a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198233d push edx */
  push32((uint32_t)(EDX));
  /* 1198233e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 11982340 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11982343 push eax */
  push32((uint32_t)(EAX));
  /* 11982344 push 1 */
  push32((uint32_t)(0x1u));
  /* 11982346 call 0x11985930 */
  push32(0x1198234bu); f_11985930();
  /* 1198234b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198234e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11982351 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11982353 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11982356 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982359 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198235c push edx */
  push32((uint32_t)(EDX));
  /* 1198235d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 1198235f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11982362 push eax */
  push32((uint32_t)(EAX));
  /* 11982363 push 1 */
  push32((uint32_t)(0x1u));
  /* 11982365 call 0x11985930 */
  push32(0x1198236au); f_11985930();
  /* 1198236a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198236d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11982370 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11982372 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11982375 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982378 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198237b push edx */
  push32((uint32_t)(EDX));
  /* 1198237c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1198237e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11982381 push eax */
  push32((uint32_t)(EAX));
  /* 11982382 push 1 */
  push32((uint32_t)(0x1u));
  /* 11982384 call 0x11985930 */
  push32(0x11982389u); f_11985930();
  /* 11982389 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198238c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1198238f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11982391 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11982394 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982397 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198239a push edx */
  push32((uint32_t)(EDX));
  /* 1198239b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1198239d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119823a0 push eax */
  push32((uint32_t)(EAX));
  /* 119823a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 119823a3 call 0x11985930 */
  push32(0x119823a8u); f_11985930();
  /* 119823a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119823ab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119823ae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119823b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119823b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119823b6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119823b9 push edx */
  push32((uint32_t)(EDX));
  /* 119823ba push 0x3a */
  push32((uint32_t)(0x3au));
  /* 119823bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119823bf push eax */
  push32((uint32_t)(EAX));
  /* 119823c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 119823c2 call 0x11985930 */
  push32(0x119823c7u); f_11985930();
  /* 119823c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119823ca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119823cd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119823cf mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119823d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119823d5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119823d8 push edx */
  push32((uint32_t)(EDX));
  /* 119823d9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 119823db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119823de push eax */
  push32((uint32_t)(EAX));
  /* 119823df push 1 */
  push32((uint32_t)(0x1u));
  /* 119823e1 call 0x11985930 */
  push32(0x119823e6u); f_11985930();
  /* 119823e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119823e9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119823ec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119823ee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119823f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119823f4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119823f7 push edx */
  push32((uint32_t)(EDX));
  /* 119823f8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 119823fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119823fd push eax */
  push32((uint32_t)(EAX));
  /* 119823fe push 1 */
  push32((uint32_t)(0x1u));
  /* 11982400 call 0x11985930 */
  push32(0x11982405u); f_11985930();
  /* 11982405 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982408 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1198240b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1198240d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11982410 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982413 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11982416 push edx */
  push32((uint32_t)(EDX));
  /* 11982417 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11982419 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1198241c push eax */
  push32((uint32_t)(EAX));
  /* 1198241d push 1 */
  push32((uint32_t)(0x1u));
  /* 1198241f call 0x11985930 */
  push32(0x11982424u); f_11985930();
  /* 11982424 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982427 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1198242a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1198242c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1198242f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982432 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11982438 push edx */
  push32((uint32_t)(EDX));
  /* 11982439 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 1198243b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1198243e push eax */
  push32((uint32_t)(EAX));
  /* 1198243f push 1 */
  push32((uint32_t)(0x1u));
  /* 11982441 call 0x11985930 */
  push32(0x11982446u); f_11985930();
  /* 11982446 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982449 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1198244c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1198244e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11982451 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982454 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198245a push edx */
  push32((uint32_t)(EDX));
  /* 1198245b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1198245d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11982460 push eax */
  push32((uint32_t)(EAX));
  /* 11982461 push 1 */
  push32((uint32_t)(0x1u));
  /* 11982463 call 0x11985930 */
  push32(0x11982468u); f_11985930();
  /* 11982468 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198246b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1198246e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11982470 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11982473 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982476 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198247c push edx */
  push32((uint32_t)(EDX));
  /* 1198247d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1198247f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11982482 push eax */
  push32((uint32_t)(EAX));
  /* 11982483 push 1 */
  push32((uint32_t)(0x1u));
  /* 11982485 call 0x11985930 */
  push32(0x1198248au); f_11985930();
  /* 1198248a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198248d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11982490 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11982492 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11982495 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982498 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198249e push edx */
  push32((uint32_t)(EDX));
  /* 1198249f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 119824a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119824a4 push eax */
  push32((uint32_t)(EAX));
  /* 119824a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 119824a7 call 0x11985930 */
  push32(0x119824acu); f_11985930();
  /* 119824ac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119824af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119824b2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119824b4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119824b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119824ba add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119824c0 push edx */
  push32((uint32_t)(EDX));
  /* 119824c1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 119824c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119824c6 push eax */
  push32((uint32_t)(EAX));
  /* 119824c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 119824c9 call 0x11985930 */
  push32(0x119824ceu); f_11985930();
  /* 119824ce add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119824d1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119824d4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119824d6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119824d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119824dc add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119824e2 push edx */
  push32((uint32_t)(EDX));
  /* 119824e3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 119824e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119824e8 push eax */
  push32((uint32_t)(EAX));
  /* 119824e9 push 1 */
  push32((uint32_t)(0x1u));
  /* 119824eb call 0x11985930 */
  push32(0x119824f0u); f_11985930();
  /* 119824f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119824f3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119824f6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119824f8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119824fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119824fe add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11982504 push edx */
  push32((uint32_t)(EDX));
  /* 11982505 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 11982507 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1198250a push eax */
  push32((uint32_t)(EAX));
  /* 1198250b push 1 */
  push32((uint32_t)(0x1u));
  /* 1198250d call 0x11985930 */
  push32(0x11982512u); f_11985930();
  /* 11982512 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982515 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11982518 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1198251a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1198251d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982520 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11982526 push edx */
  push32((uint32_t)(EDX));
  /* 11982527 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 11982529 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1198252c push eax */
  push32((uint32_t)(EAX));
  /* 1198252d push 1 */
  push32((uint32_t)(0x1u));
  /* 1198252f call 0x11985930 */
  push32(0x11982534u); f_11985930();
  /* 11982534 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982537 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1198253a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1198253c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1198253f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982542 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11982548 push edx */
  push32((uint32_t)(EDX));
  /* 11982549 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1198254b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1198254e push eax */
  push32((uint32_t)(EAX));
  /* 1198254f push 1 */
  push32((uint32_t)(0x1u));
  /* 11982551 call 0x11985930 */
  push32(0x11982556u); f_11985930();
  /* 11982556 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982559 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1198255c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1198255e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11982561 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982564 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198256a push edx */
  push32((uint32_t)(EDX));
  /* 1198256b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1198256d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11982570 push eax */
  push32((uint32_t)(EAX));
  /* 11982571 push 1 */
  push32((uint32_t)(0x1u));
  /* 11982573 call 0x11985930 */
  push32(0x11982578u); f_11985930();
  /* 11982578 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198257b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1198257e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11982580 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11982583 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982586 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198258c push edx */
  push32((uint32_t)(EDX));
  /* 1198258d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 11982592 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11982595 push eax */
  push32((uint32_t)(EAX));
  /* 11982596 push 1 */
  push32((uint32_t)(0x1u));
  /* 11982598 call 0x11985930 */
  push32(0x1198259du); f_11985930();
  /* 1198259d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119825a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119825a3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119825a5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119825a8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_119825ab:;
  /* 119825ab mov esp, ebp */
  ESP = (EBP);
  /* 119825ad pop ebp */
  EBP = (pop32());
  /* 119825ae ret  */
  ESPCHK(0x11982020u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x119825b0 (779 bytes, 265 insns) */
void f_119825b0(void) {
  FTRACE(0x119825b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119825b0 push ebp */
  push32((uint32_t)(EBP));
  /* 119825b1 mov ebp, esp */
  EBP = (ESP);
  /* 119825b3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119825b7 jne 0x119825be */
  if (!C.zf) goto L_119825be;
  /* 119825b9 jmp 0x119828b9 */
  goto L_119828b9;
L_119825be:;
  /* 119825be push 2 */
  push32((uint32_t)(0x2u));
  /* 119825c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119825c3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 119825c6 push ecx */
  push32((uint32_t)(ECX));
  /* 119825c7 call 0x11978200 */
  push32(0x119825ccu); f_11978200();
  /* 119825cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119825cf push 2 */
  push32((uint32_t)(0x2u));
  /* 119825d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119825d4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 119825d7 push eax */
  push32((uint32_t)(EAX));
  /* 119825d8 call 0x11978200 */
  push32(0x119825ddu); f_11978200();
  /* 119825dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119825e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 119825e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119825e5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 119825e8 push edx */
  push32((uint32_t)(EDX));
  /* 119825e9 call 0x11978200 */
  push32(0x119825eeu); f_11978200();
  /* 119825ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119825f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 119825f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119825f6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 119825f9 push ecx */
  push32((uint32_t)(ECX));
  /* 119825fa call 0x11978200 */
  push32(0x119825ffu); f_11978200();
  /* 119825ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982602 push 2 */
  push32((uint32_t)(0x2u));
  /* 11982604 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982607 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1198260a push eax */
  push32((uint32_t)(EAX));
  /* 1198260b call 0x11978200 */
  push32(0x11982610u); f_11978200();
  /* 11982610 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982613 push 2 */
  push32((uint32_t)(0x2u));
  /* 11982615 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982618 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1198261b push edx */
  push32((uint32_t)(EDX));
  /* 1198261c call 0x11978200 */
  push32(0x11982621u); f_11978200();
  /* 11982621 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982624 push 2 */
  push32((uint32_t)(0x2u));
  /* 11982626 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982629 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1198262b push ecx */
  push32((uint32_t)(ECX));
  /* 1198262c call 0x11978200 */
  push32(0x11982631u); f_11978200();
  /* 11982631 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982634 push 2 */
  push32((uint32_t)(0x2u));
  /* 11982636 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982639 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1198263c push eax */
  push32((uint32_t)(EAX));
  /* 1198263d call 0x11978200 */
  push32(0x11982642u); f_11978200();
  /* 11982642 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982645 push 2 */
  push32((uint32_t)(0x2u));
  /* 11982647 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198264a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1198264d push edx */
  push32((uint32_t)(EDX));
  /* 1198264e call 0x11978200 */
  push32(0x11982653u); f_11978200();
  /* 11982653 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982656 push 2 */
  push32((uint32_t)(0x2u));
  /* 11982658 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198265b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 1198265e push ecx */
  push32((uint32_t)(ECX));
  /* 1198265f call 0x11978200 */
  push32(0x11982664u); f_11978200();
  /* 11982664 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982667 push 2 */
  push32((uint32_t)(0x2u));
  /* 11982669 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198266c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 1198266f push eax */
  push32((uint32_t)(EAX));
  /* 11982670 call 0x11978200 */
  push32(0x11982675u); f_11978200();
  /* 11982675 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982678 push 2 */
  push32((uint32_t)(0x2u));
  /* 1198267a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198267d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 11982680 push edx */
  push32((uint32_t)(EDX));
  /* 11982681 call 0x11978200 */
  push32(0x11982686u); f_11978200();
  /* 11982686 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982689 push 2 */
  push32((uint32_t)(0x2u));
  /* 1198268b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198268e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 11982691 push ecx */
  push32((uint32_t)(ECX));
  /* 11982692 call 0x11978200 */
  push32(0x11982697u); f_11978200();
  /* 11982697 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198269a push 2 */
  push32((uint32_t)(0x2u));
  /* 1198269c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198269f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 119826a2 push eax */
  push32((uint32_t)(EAX));
  /* 119826a3 call 0x11978200 */
  push32(0x119826a8u); f_11978200();
  /* 119826a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119826ab push 2 */
  push32((uint32_t)(0x2u));
  /* 119826ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119826b0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 119826b3 push edx */
  push32((uint32_t)(EDX));
  /* 119826b4 call 0x11978200 */
  push32(0x119826b9u); f_11978200();
  /* 119826b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119826bc push 2 */
  push32((uint32_t)(0x2u));
  /* 119826be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119826c1 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 119826c4 push ecx */
  push32((uint32_t)(ECX));
  /* 119826c5 call 0x11978200 */
  push32(0x119826cau); f_11978200();
  /* 119826ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119826cd push 2 */
  push32((uint32_t)(0x2u));
  /* 119826cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119826d2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 119826d5 push eax */
  push32((uint32_t)(EAX));
  /* 119826d6 call 0x11978200 */
  push32(0x119826dbu); f_11978200();
  /* 119826db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119826de push 2 */
  push32((uint32_t)(0x2u));
  /* 119826e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119826e3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 119826e6 push edx */
  push32((uint32_t)(EDX));
  /* 119826e7 call 0x11978200 */
  push32(0x119826ecu); f_11978200();
  /* 119826ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119826ef push 2 */
  push32((uint32_t)(0x2u));
  /* 119826f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119826f4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 119826f7 push ecx */
  push32((uint32_t)(ECX));
  /* 119826f8 call 0x11978200 */
  push32(0x119826fdu); f_11978200();
  /* 119826fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982700 push 2 */
  push32((uint32_t)(0x2u));
  /* 11982702 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982705 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 11982708 push eax */
  push32((uint32_t)(EAX));
  /* 11982709 call 0x11978200 */
  push32(0x1198270eu); f_11978200();
  /* 1198270e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982711 push 2 */
  push32((uint32_t)(0x2u));
  /* 11982713 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982716 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11982719 push edx */
  push32((uint32_t)(EDX));
  /* 1198271a call 0x11978200 */
  push32(0x1198271fu); f_11978200();
  /* 1198271f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982722 push 2 */
  push32((uint32_t)(0x2u));
  /* 11982724 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982727 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1198272a push ecx */
  push32((uint32_t)(ECX));
  /* 1198272b call 0x11978200 */
  push32(0x11982730u); f_11978200();
  /* 11982730 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982733 push 2 */
  push32((uint32_t)(0x2u));
  /* 11982735 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982738 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 1198273b push eax */
  push32((uint32_t)(EAX));
  /* 1198273c call 0x11978200 */
  push32(0x11982741u); f_11978200();
  /* 11982741 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982744 push 2 */
  push32((uint32_t)(0x2u));
  /* 11982746 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982749 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 1198274c push edx */
  push32((uint32_t)(EDX));
  /* 1198274d call 0x11978200 */
  push32(0x11982752u); f_11978200();
  /* 11982752 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982755 push 2 */
  push32((uint32_t)(0x2u));
  /* 11982757 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198275a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 1198275d push ecx */
  push32((uint32_t)(ECX));
  /* 1198275e call 0x11978200 */
  push32(0x11982763u); f_11978200();
  /* 11982763 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982766 push 2 */
  push32((uint32_t)(0x2u));
  /* 11982768 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198276b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 1198276e push eax */
  push32((uint32_t)(EAX));
  /* 1198276f call 0x11978200 */
  push32(0x11982774u); f_11978200();
  /* 11982774 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982777 push 2 */
  push32((uint32_t)(0x2u));
  /* 11982779 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198277c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 1198277f push edx */
  push32((uint32_t)(EDX));
  /* 11982780 call 0x11978200 */
  push32(0x11982785u); f_11978200();
  /* 11982785 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982788 push 2 */
  push32((uint32_t)(0x2u));
  /* 1198278a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198278d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 11982790 push ecx */
  push32((uint32_t)(ECX));
  /* 11982791 call 0x11978200 */
  push32(0x11982796u); f_11978200();
  /* 11982796 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982799 push 2 */
  push32((uint32_t)(0x2u));
  /* 1198279b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198279e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 119827a1 push eax */
  push32((uint32_t)(EAX));
  /* 119827a2 call 0x11978200 */
  push32(0x119827a7u); f_11978200();
  /* 119827a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119827aa push 2 */
  push32((uint32_t)(0x2u));
  /* 119827ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119827af mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 119827b2 push edx */
  push32((uint32_t)(EDX));
  /* 119827b3 call 0x11978200 */
  push32(0x119827b8u); f_11978200();
  /* 119827b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119827bb push 2 */
  push32((uint32_t)(0x2u));
  /* 119827bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119827c0 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 119827c3 push ecx */
  push32((uint32_t)(ECX));
  /* 119827c4 call 0x11978200 */
  push32(0x119827c9u); f_11978200();
  /* 119827c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119827cc push 2 */
  push32((uint32_t)(0x2u));
  /* 119827ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119827d1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 119827d4 push eax */
  push32((uint32_t)(EAX));
  /* 119827d5 call 0x11978200 */
  push32(0x119827dau); f_11978200();
  /* 119827da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119827dd push 2 */
  push32((uint32_t)(0x2u));
  /* 119827df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119827e2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 119827e8 push edx */
  push32((uint32_t)(EDX));
  /* 119827e9 call 0x11978200 */
  push32(0x119827eeu); f_11978200();
  /* 119827ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119827f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 119827f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119827f6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 119827fc push ecx */
  push32((uint32_t)(ECX));
  /* 119827fd call 0x11978200 */
  push32(0x11982802u); f_11978200();
  /* 11982802 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982805 push 2 */
  push32((uint32_t)(0x2u));
  /* 11982807 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198280a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 11982810 push eax */
  push32((uint32_t)(EAX));
  /* 11982811 call 0x11978200 */
  push32(0x11982816u); f_11978200();
  /* 11982816 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982819 push 2 */
  push32((uint32_t)(0x2u));
  /* 1198281b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198281e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 11982824 push edx */
  push32((uint32_t)(EDX));
  /* 11982825 call 0x11978200 */
  push32(0x1198282au); f_11978200();
  /* 1198282a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198282d push 2 */
  push32((uint32_t)(0x2u));
  /* 1198282f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982832 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 11982838 push ecx */
  push32((uint32_t)(ECX));
  /* 11982839 call 0x11978200 */
  push32(0x1198283eu); f_11978200();
  /* 1198283e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982841 push 2 */
  push32((uint32_t)(0x2u));
  /* 11982843 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982846 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 1198284c push eax */
  push32((uint32_t)(EAX));
  /* 1198284d call 0x11978200 */
  push32(0x11982852u); f_11978200();
  /* 11982852 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982855 push 2 */
  push32((uint32_t)(0x2u));
  /* 11982857 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198285a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 11982860 push edx */
  push32((uint32_t)(EDX));
  /* 11982861 call 0x11978200 */
  push32(0x11982866u); f_11978200();
  /* 11982866 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982869 push 2 */
  push32((uint32_t)(0x2u));
  /* 1198286b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198286e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11982874 push ecx */
  push32((uint32_t)(ECX));
  /* 11982875 call 0x11978200 */
  push32(0x1198287au); f_11978200();
  /* 1198287a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198287d push 2 */
  push32((uint32_t)(0x2u));
  /* 1198287f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982882 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11982888 push eax */
  push32((uint32_t)(EAX));
  /* 11982889 call 0x11978200 */
  push32(0x1198288eu); f_11978200();
  /* 1198288e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982891 push 2 */
  push32((uint32_t)(0x2u));
  /* 11982893 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982896 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 1198289c push edx */
  push32((uint32_t)(EDX));
  /* 1198289d call 0x11978200 */
  push32(0x119828a2u); f_11978200();
  /* 119828a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119828a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 119828a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119828aa mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 119828b0 push ecx */
  push32((uint32_t)(ECX));
  /* 119828b1 call 0x11978200 */
  push32(0x119828b6u); f_11978200();
  /* 119828b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119828b9:;
  /* 119828b9 pop ebp */
  EBP = (pop32());
  /* 119828ba ret  */
  ESPCHK(0x119825b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100128c0 @ 0x119828c0 (678 bytes, 180 insns) */
void f_119828c0(void) {
  FTRACE(0x119828c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119828c0 push ebp */
  push32((uint32_t)(EBP));
  /* 119828c1 mov ebp, esp */
  EBP = (ESP);
  /* 119828c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119828c6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 119828cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119828cf mov ax, word ptr [0x119a3ad2] */
  AX = (r16((uint32_t)(0x119a3ad2)));
  /* 119828d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119828d8 cmp dword ptr [0x119a3a78], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3a78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119828df je 0x11982a3a */
  if (C.zf) goto L_11982a3a;
  /* 119828e5 push 0x119a3aa0 */
  push32((uint32_t)(0x119a3aa0u));
  /* 119828ea push 0xe */
  push32((uint32_t)(0xeu));
  /* 119828ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119828ef push ecx */
  push32((uint32_t)(ECX));
  /* 119828f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 119828f2 call 0x11985930 */
  push32(0x119828f7u); f_11985930();
  /* 119828f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119828fa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119828fd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 119828ff mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11982902 push 0x119a3aa4 */
  push32((uint32_t)(0x119a3aa4u));
  /* 11982907 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11982909 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1198290c push eax */
  push32((uint32_t)(EAX));
  /* 1198290d push 1 */
  push32((uint32_t)(0x1u));
  /* 1198290f call 0x11985930 */
  push32(0x11982914u); f_11985930();
  /* 11982914 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982917 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1198291a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1198291c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1198291f push 0x119a3aa8 */
  push32((uint32_t)(0x119a3aa8u));
  /* 11982924 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11982926 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11982929 push edx */
  push32((uint32_t)(EDX));
  /* 1198292a push 1 */
  push32((uint32_t)(0x1u));
  /* 1198292c call 0x11985930 */
  push32(0x11982931u); f_11985930();
  /* 11982931 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982934 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11982937 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11982939 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1198293c mov edx, dword ptr [0x119a3aa8] */
  EDX = (r32((uint32_t)(0x119a3aa8)));
  /* 11982942 push edx */
  push32((uint32_t)(EDX));
  /* 11982943 call 0x11982b70 */
  push32(0x11982948u); f_11982b70();
  /* 11982948 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198294b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198294f je 0x119829a9 */
  if (C.zf) goto L_119829a9;
  /* 11982951 push 2 */
  push32((uint32_t)(0x2u));
  /* 11982953 mov eax, dword ptr [0x119a3aa0] */
  EAX = (r32((uint32_t)(0x119a3aa0)));
  /* 11982958 push eax */
  push32((uint32_t)(EAX));
  /* 11982959 call 0x11978200 */
  push32(0x1198295eu); f_11978200();
  /* 1198295e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982961 push 2 */
  push32((uint32_t)(0x2u));
  /* 11982963 mov ecx, dword ptr [0x119a3aa4] */
  ECX = (r32((uint32_t)(0x119a3aa4)));
  /* 11982969 push ecx */
  push32((uint32_t)(ECX));
  /* 1198296a call 0x11978200 */
  push32(0x1198296fu); f_11978200();
  /* 1198296f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982972 push 2 */
  push32((uint32_t)(0x2u));
  /* 11982974 mov edx, dword ptr [0x119a3aa8] */
  EDX = (r32((uint32_t)(0x119a3aa8)));
  /* 1198297a push edx */
  push32((uint32_t)(EDX));
  /* 1198297b call 0x11978200 */
  push32(0x11982980u); f_11978200();
  /* 11982980 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982983 mov dword ptr [0x119a3aa0], 0 */
  w32((uint32_t)(0x119a3aa0), (0x0u));
  /* 1198298d mov dword ptr [0x119a3aa4], 0 */
  w32((uint32_t)(0x119a3aa4), (0x0u));
  /* 11982997 mov dword ptr [0x119a3aa8], 0 */
  w32((uint32_t)(0x119a3aa8), (0x0u));
  /* 119829a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119829a4 jmp 0x11982b62 */
  goto L_11982b62;
L_119829a9:;
  /* 119829a9 mov eax, dword ptr [0x119a2d88] */
  EAX = (r32((uint32_t)(0x119a2d88)));
  /* 119829ae cmp dword ptr [eax], 0x119a2d50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x119a2d50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119829b4 je 0x119829f0 */
  if (C.zf) goto L_119829f0;
  /* 119829b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 119829b8 mov ecx, dword ptr [0x119a2d88] */
  ECX = (r32((uint32_t)(0x119a2d88)));
  /* 119829be mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119829c0 push edx */
  push32((uint32_t)(EDX));
  /* 119829c1 call 0x11978200 */
  push32(0x119829c6u); f_11978200();
  /* 119829c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119829c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 119829cb mov eax, dword ptr [0x119a2d88] */
  EAX = (r32((uint32_t)(0x119a2d88)));
  /* 119829d0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 119829d3 push ecx */
  push32((uint32_t)(ECX));
  /* 119829d4 call 0x11978200 */
  push32(0x119829d9u); f_11978200();
  /* 119829d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119829dc push 2 */
  push32((uint32_t)(0x2u));
  /* 119829de mov edx, dword ptr [0x119a2d88] */
  EDX = (r32((uint32_t)(0x119a2d88)));
  /* 119829e4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 119829e7 push eax */
  push32((uint32_t)(EAX));
  /* 119829e8 call 0x11978200 */
  push32(0x119829edu); f_11978200();
  /* 119829ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119829f0:;
  /* 119829f0 mov ecx, dword ptr [0x119a2d88] */
  ECX = (r32((uint32_t)(0x119a2d88)));
  /* 119829f6 mov edx, dword ptr [0x119a3aa0] */
  EDX = (r32((uint32_t)(0x119a3aa0)));
  /* 119829fc mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 119829fe mov eax, dword ptr [0x119a2d88] */
  EAX = (r32((uint32_t)(0x119a2d88)));
  /* 11982a03 mov ecx, dword ptr [0x119a3aa4] */
  ECX = (r32((uint32_t)(0x119a3aa4)));
  /* 11982a09 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11982a0c mov edx, dword ptr [0x119a2d88] */
  EDX = (r32((uint32_t)(0x119a2d88)));
  /* 11982a12 mov eax, dword ptr [0x119a3aa8] */
  EAX = (r32((uint32_t)(0x119a3aa8)));
  /* 11982a17 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11982a1a mov ecx, dword ptr [0x119a2d88] */
  ECX = (r32((uint32_t)(0x119a2d88)));
  /* 11982a20 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11982a22 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11982a24 mov byte ptr [0x119a1ea8], al */
  w8((uint32_t)(0x119a1ea8), (AL));
  /* 11982a29 mov dword ptr [0x119a1eac], 1 */
  w32((uint32_t)(0x119a1eac), (0x1u));
  /* 11982a33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11982a35 jmp 0x11982b62 */
  goto L_11982b62;
L_11982a3a:;
  /* 11982a3a push 2 */
  push32((uint32_t)(0x2u));
  /* 11982a3c mov ecx, dword ptr [0x119a3aa0] */
  ECX = (r32((uint32_t)(0x119a3aa0)));
  /* 11982a42 push ecx */
  push32((uint32_t)(ECX));
  /* 11982a43 call 0x11978200 */
  push32(0x11982a48u); f_11978200();
  /* 11982a48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982a4b push 2 */
  push32((uint32_t)(0x2u));
  /* 11982a4d mov edx, dword ptr [0x119a3aa4] */
  EDX = (r32((uint32_t)(0x119a3aa4)));
  /* 11982a53 push edx */
  push32((uint32_t)(EDX));
  /* 11982a54 call 0x11978200 */
  push32(0x11982a59u); f_11978200();
  /* 11982a59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982a5c push 2 */
  push32((uint32_t)(0x2u));
  /* 11982a5e mov eax, dword ptr [0x119a3aa8] */
  EAX = (r32((uint32_t)(0x119a3aa8)));
  /* 11982a63 push eax */
  push32((uint32_t)(EAX));
  /* 11982a64 call 0x11978200 */
  push32(0x11982a69u); f_11978200();
  /* 11982a69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982a6c mov dword ptr [0x119a3aa0], 0 */
  w32((uint32_t)(0x119a3aa0), (0x0u));
  /* 11982a76 mov dword ptr [0x119a3aa4], 0 */
  w32((uint32_t)(0x119a3aa4), (0x0u));
  /* 11982a80 mov dword ptr [0x119a3aa8], 0 */
  w32((uint32_t)(0x119a3aa8), (0x0u));
  /* 11982a8a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 11982a8f push 0x1199fd24 */
  push32((uint32_t)(0x1199fd24u));
  /* 11982a94 push 2 */
  push32((uint32_t)(0x2u));
  /* 11982a96 push 2 */
  push32((uint32_t)(0x2u));
  /* 11982a98 call 0x11977770 */
  push32(0x11982a9du); f_11977770();
  /* 11982a9d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982aa0 mov ecx, dword ptr [0x119a2d88] */
  ECX = (r32((uint32_t)(0x119a2d88)));
  /* 11982aa6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11982aa8 mov edx, dword ptr [0x119a2d88] */
  EDX = (r32((uint32_t)(0x119a2d88)));
  /* 11982aae cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11982ab1 jne 0x11982abb */
  if (!C.zf) goto L_11982abb;
  /* 11982ab3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11982ab6 jmp 0x11982b62 */
  goto L_11982b62;
L_11982abb:;
  /* 11982abb push 0x1199fcf4 */
  push32((uint32_t)(0x1199fcf4u));
  /* 11982ac0 mov eax, dword ptr [0x119a2d88] */
  EAX = (r32((uint32_t)(0x119a2d88)));
  /* 11982ac5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11982ac7 push ecx */
  push32((uint32_t)(ECX));
  /* 11982ac8 call 0x1197a720 */
  push32(0x11982acdu); f_1197a720();
  /* 11982acd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982ad0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 11982ad5 push 0x1199fd24 */
  push32((uint32_t)(0x1199fd24u));
  /* 11982ada push 2 */
  push32((uint32_t)(0x2u));
  /* 11982adc push 2 */
  push32((uint32_t)(0x2u));
  /* 11982ade call 0x11977770 */
  push32(0x11982ae3u); f_11977770();
  /* 11982ae3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982ae6 mov edx, dword ptr [0x119a2d88] */
  EDX = (r32((uint32_t)(0x119a2d88)));
  /* 11982aec mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11982aef mov eax, dword ptr [0x119a2d88] */
  EAX = (r32((uint32_t)(0x119a2d88)));
  /* 11982af4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11982af8 jne 0x11982aff */
  if (!C.zf) goto L_11982aff;
  /* 11982afa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11982afd jmp 0x11982b62 */
  goto L_11982b62;
L_11982aff:;
  /* 11982aff mov ecx, dword ptr [0x119a2d88] */
  ECX = (r32((uint32_t)(0x119a2d88)));
  /* 11982b05 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11982b08 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11982b0b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 11982b10 push 0x1199fd24 */
  push32((uint32_t)(0x1199fd24u));
  /* 11982b15 push 2 */
  push32((uint32_t)(0x2u));
  /* 11982b17 push 2 */
  push32((uint32_t)(0x2u));
  /* 11982b19 call 0x11977770 */
  push32(0x11982b1eu); f_11977770();
  /* 11982b1e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982b21 mov ecx, dword ptr [0x119a2d88] */
  ECX = (r32((uint32_t)(0x119a2d88)));
  /* 11982b27 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11982b2a mov edx, dword ptr [0x119a2d88] */
  EDX = (r32((uint32_t)(0x119a2d88)));
  /* 11982b30 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11982b34 jne 0x11982b3b */
  if (!C.zf) goto L_11982b3b;
  /* 11982b36 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11982b39 jmp 0x11982b62 */
  goto L_11982b62;
L_11982b3b:;
  /* 11982b3b mov eax, dword ptr [0x119a2d88] */
  EAX = (r32((uint32_t)(0x119a2d88)));
  /* 11982b40 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11982b43 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11982b46 mov edx, dword ptr [0x119a2d88] */
  EDX = (r32((uint32_t)(0x119a2d88)));
  /* 11982b4c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11982b4e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11982b50 mov byte ptr [0x119a1ea8], cl */
  w8((uint32_t)(0x119a1ea8), (CL));
  /* 11982b56 mov dword ptr [0x119a1eac], 1 */
  w32((uint32_t)(0x119a1eac), (0x1u));
  /* 11982b60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11982b62:;
  /* 11982b62 mov esp, ebp */
  ESP = (EBP);
  /* 11982b64 pop ebp */
  EBP = (pop32());
  /* 11982b65 ret  */
  ESPCHK(0x119828c0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11982b70 (125 bytes, 49 insns) */
void f_11982b70(void) {
  FTRACE(0x11982b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11982b70 push ebp */
  push32((uint32_t)(EBP));
  /* 11982b71 mov ebp, esp */
  EBP = (ESP);
  /* 11982b73 push ecx */
  push32((uint32_t)(ECX));
L_11982b74:;
  /* 11982b74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982b77 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11982b7a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11982b7c je 0x11982be9 */
  if (C.zf) goto L_11982be9;
  /* 11982b7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982b81 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11982b84 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11982b87 jl 0x11982bad */
  if ((C.sf!=C.of)) goto L_11982bad;
  /* 11982b89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982b8c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11982b8f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11982b92 jg 0x11982bad */
  if ((!C.zf&&C.sf==C.of)) goto L_11982bad;
  /* 11982b94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982b97 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11982b9a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11982b9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982ba0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11982ba2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982ba5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11982ba8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11982bab jmp 0x11982be7 */
  goto L_11982be7;
L_11982bad:;
  /* 11982bad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982bb0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11982bb3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11982bb6 jne 0x11982bde */
  if (!C.zf) goto L_11982bde;
  /* 11982bb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982bbb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11982bbe:;
  /* 11982bbe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11982bc1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11982bc4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11982bc7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11982bc9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11982bcc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11982bcf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11982bd2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11982bd5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11982bd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11982bda jne 0x11982bbe */
  if (!C.zf) goto L_11982bbe;
  /* 11982bdc jmp 0x11982be7 */
  goto L_11982be7;
L_11982bde:;
  /* 11982bde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982be1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11982be4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11982be7:;
  /* 11982be7 jmp 0x11982b74 */
  goto L_11982b74;
L_11982be9:;
  /* 11982be9 mov esp, ebp */
  ESP = (EBP);
  /* 11982beb pop ebp */
  EBP = (pop32());
  /* 11982bec ret  */
  ESPCHK(0x11982b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10012bf0 @ 0x11982bf0 (304 bytes, 85 insns) */
void f_11982bf0(void) {
  FTRACE(0x11982bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11982bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11982bf1 mov ebp, esp */
  EBP = (ESP);
  /* 11982bf3 push ecx */
  push32((uint32_t)(ECX));
  /* 11982bf4 cmp dword ptr [0x119a3a74], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3a74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11982bfb je 0x11982cbc */
  if (C.zf) goto L_11982cbc;
  /* 11982c01 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11982c03 push 0x1199fd30 */
  push32((uint32_t)(0x1199fd30u));
  /* 11982c08 push 2 */
  push32((uint32_t)(0x2u));
  /* 11982c0a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11982c0c push 1 */
  push32((uint32_t)(0x1u));
  /* 11982c0e call 0x11977b80 */
  push32(0x11982c13u); f_11977b80();
  /* 11982c13 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982c16 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11982c19 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11982c1d jne 0x11982c29 */
  if (!C.zf) goto L_11982c29;
  /* 11982c1f mov eax, 1 */
  EAX = (0x1u);
  /* 11982c24 jmp 0x11982d1c */
  goto L_11982d1c;
L_11982c29:;
  /* 11982c29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11982c2c push eax */
  push32((uint32_t)(EAX));
  /* 11982c2d call 0x11982d20 */
  push32(0x11982c32u); f_11982d20();
  /* 11982c32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982c35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11982c37 je 0x11982c5d */
  if (C.zf) goto L_11982c5d;
  /* 11982c39 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11982c3c push ecx */
  push32((uint32_t)(ECX));
  /* 11982c3d call 0x11982fb0 */
  push32(0x11982c42u); f_11982fb0();
  /* 11982c42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982c45 push 2 */
  push32((uint32_t)(0x2u));
  /* 11982c47 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11982c4a push edx */
  push32((uint32_t)(EDX));
  /* 11982c4b call 0x11978200 */
  push32(0x11982c50u); f_11978200();
  /* 11982c50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982c53 mov eax, 1 */
  EAX = (0x1u);
  /* 11982c58 jmp 0x11982d1c */
  goto L_11982d1c;
L_11982c5d:;
  /* 11982c5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11982c60 mov ecx, dword ptr [0x119a2d88] */
  ECX = (r32((uint32_t)(0x119a2d88)));
  /* 11982c66 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11982c68 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11982c6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11982c6d mov ecx, dword ptr [0x119a2d88] */
  ECX = (r32((uint32_t)(0x119a2d88)));
  /* 11982c73 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11982c76 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11982c79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11982c7c mov ecx, dword ptr [0x119a2d88] */
  ECX = (r32((uint32_t)(0x119a2d88)));
  /* 11982c82 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11982c85 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11982c88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11982c8b mov dword ptr [0x119a2d88], eax */
  w32((uint32_t)(0x119a2d88), (EAX));
  /* 11982c90 mov ecx, dword ptr [0x119a3aac] */
  ECX = (r32((uint32_t)(0x119a3aac)));
  /* 11982c96 push ecx */
  push32((uint32_t)(ECX));
  /* 11982c97 call 0x11982fb0 */
  push32(0x11982c9cu); f_11982fb0();
  /* 11982c9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982c9f push 2 */
  push32((uint32_t)(0x2u));
  /* 11982ca1 mov edx, dword ptr [0x119a3aac] */
  EDX = (r32((uint32_t)(0x119a3aac)));
  /* 11982ca7 push edx */
  push32((uint32_t)(EDX));
  /* 11982ca8 call 0x11978200 */
  push32(0x11982cadu); f_11978200();
  /* 11982cad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982cb0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11982cb3 mov dword ptr [0x119a3aac], eax */
  w32((uint32_t)(0x119a3aac), (EAX));
  /* 11982cb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11982cba jmp 0x11982d1c */
  goto L_11982d1c;
L_11982cbc:;
  /* 11982cbc mov ecx, dword ptr [0x119a2d88] */
  ECX = (r32((uint32_t)(0x119a2d88)));
  /* 11982cc2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11982cc4 mov dword ptr [0x119a2d58], edx */
  w32((uint32_t)(0x119a2d58), (EDX));
  /* 11982cca mov eax, dword ptr [0x119a2d88] */
  EAX = (r32((uint32_t)(0x119a2d88)));
  /* 11982ccf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11982cd2 mov dword ptr [0x119a2d5c], ecx */
  w32((uint32_t)(0x119a2d5c), (ECX));
  /* 11982cd8 mov edx, dword ptr [0x119a2d88] */
  EDX = (r32((uint32_t)(0x119a2d88)));
  /* 11982cde mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11982ce1 mov dword ptr [0x119a2d60], eax */
  w32((uint32_t)(0x119a2d60), (EAX));
  /* 11982ce6 mov dword ptr [0x119a2d88], 0x119a2d58 */
  w32((uint32_t)(0x119a2d88), (0x119a2d58u));
  /* 11982cf0 mov ecx, dword ptr [0x119a3aac] */
  ECX = (r32((uint32_t)(0x119a3aac)));
  /* 11982cf6 push ecx */
  push32((uint32_t)(ECX));
  /* 11982cf7 call 0x11982fb0 */
  push32(0x11982cfcu); f_11982fb0();
  /* 11982cfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982cff push 2 */
  push32((uint32_t)(0x2u));
  /* 11982d01 mov edx, dword ptr [0x119a3aac] */
  EDX = (r32((uint32_t)(0x119a3aac)));
  /* 11982d07 push edx */
  push32((uint32_t)(EDX));
  /* 11982d08 call 0x11978200 */
  push32(0x11982d0du); f_11978200();
  /* 11982d0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982d10 mov dword ptr [0x119a3aac], 0 */
  w32((uint32_t)(0x119a3aac), (0x0u));
  /* 11982d1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11982d1c:;
  /* 11982d1c mov esp, ebp */
  ESP = (EBP);
  /* 11982d1e pop ebp */
  EBP = (pop32());
  /* 11982d1f ret  */
  ESPCHK(0x11982bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d20 @ 0x11982d20 (525 bytes, 200 insns) */
void f_11982d20(void) {
  FTRACE(0x11982d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11982d20 push ebp */
  push32((uint32_t)(EBP));
  /* 11982d21 mov ebp, esp */
  EBP = (ESP);
  /* 11982d23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11982d26 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11982d2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11982d2f mov ax, word ptr [0x119a3acc] */
  AX = (r16((uint32_t)(0x119a3acc)));
  /* 11982d35 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11982d38 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11982d3c jne 0x11982d46 */
  if (!C.zf) goto L_11982d46;
  /* 11982d3e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11982d41 jmp 0x11982f29 */
  goto L_11982f29;
L_11982d46:;
  /* 11982d46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982d49 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11982d4c push ecx */
  push32((uint32_t)(ECX));
  /* 11982d4d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11982d4f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11982d52 push edx */
  push32((uint32_t)(EDX));
  /* 11982d53 push 1 */
  push32((uint32_t)(0x1u));
  /* 11982d55 call 0x11985930 */
  push32(0x11982d5au); f_11985930();
  /* 11982d5a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982d5d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11982d60 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11982d62 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11982d65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982d68 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11982d6b push edx */
  push32((uint32_t)(EDX));
  /* 11982d6c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11982d6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11982d71 push eax */
  push32((uint32_t)(EAX));
  /* 11982d72 push 1 */
  push32((uint32_t)(0x1u));
  /* 11982d74 call 0x11985930 */
  push32(0x11982d79u); f_11985930();
  /* 11982d79 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982d7c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11982d7f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11982d81 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11982d84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982d87 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11982d8a push edx */
  push32((uint32_t)(EDX));
  /* 11982d8b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11982d8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11982d90 push eax */
  push32((uint32_t)(EAX));
  /* 11982d91 push 1 */
  push32((uint32_t)(0x1u));
  /* 11982d93 call 0x11985930 */
  push32(0x11982d98u); f_11985930();
  /* 11982d98 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982d9b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11982d9e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11982da0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11982da3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982da6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11982da9 push edx */
  push32((uint32_t)(EDX));
  /* 11982daa push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11982dac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11982daf push eax */
  push32((uint32_t)(EAX));
  /* 11982db0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11982db2 call 0x11985930 */
  push32(0x11982db7u); f_11985930();
  /* 11982db7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982dba mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11982dbd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11982dbf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11982dc2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982dc5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11982dc8 push edx */
  push32((uint32_t)(EDX));
  /* 11982dc9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11982dcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11982dce push eax */
  push32((uint32_t)(EAX));
  /* 11982dcf push 1 */
  push32((uint32_t)(0x1u));
  /* 11982dd1 call 0x11985930 */
  push32(0x11982dd6u); f_11985930();
  /* 11982dd6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982dd9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11982ddc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11982dde mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11982de1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982de4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11982de7 push eax */
  push32((uint32_t)(EAX));
  /* 11982de8 call 0x11982f30 */
  push32(0x11982dedu); f_11982f30();
  /* 11982ded add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982df0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982df3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11982df6 push ecx */
  push32((uint32_t)(ECX));
  /* 11982df7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 11982df9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11982dfc push edx */
  push32((uint32_t)(EDX));
  /* 11982dfd push 1 */
  push32((uint32_t)(0x1u));
  /* 11982dff call 0x11985930 */
  push32(0x11982e04u); f_11985930();
  /* 11982e04 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982e07 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11982e0a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11982e0c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11982e0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982e12 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11982e15 push edx */
  push32((uint32_t)(EDX));
  /* 11982e16 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 11982e18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11982e1b push eax */
  push32((uint32_t)(EAX));
  /* 11982e1c push 1 */
  push32((uint32_t)(0x1u));
  /* 11982e1e call 0x11985930 */
  push32(0x11982e23u); f_11985930();
  /* 11982e23 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982e26 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11982e29 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11982e2b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11982e2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982e31 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11982e34 push edx */
  push32((uint32_t)(EDX));
  /* 11982e35 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11982e37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11982e3a push eax */
  push32((uint32_t)(EAX));
  /* 11982e3b push 0 */
  push32((uint32_t)(0x0u));
  /* 11982e3d call 0x11985930 */
  push32(0x11982e42u); f_11985930();
  /* 11982e42 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982e45 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11982e48 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11982e4a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11982e4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982e50 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11982e53 push edx */
  push32((uint32_t)(EDX));
  /* 11982e54 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11982e56 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11982e59 push eax */
  push32((uint32_t)(EAX));
  /* 11982e5a push 0 */
  push32((uint32_t)(0x0u));
  /* 11982e5c call 0x11985930 */
  push32(0x11982e61u); f_11985930();
  /* 11982e61 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982e64 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11982e67 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11982e69 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11982e6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982e6f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11982e72 push edx */
  push32((uint32_t)(EDX));
  /* 11982e73 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 11982e75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11982e78 push eax */
  push32((uint32_t)(EAX));
  /* 11982e79 push 0 */
  push32((uint32_t)(0x0u));
  /* 11982e7b call 0x11985930 */
  push32(0x11982e80u); f_11985930();
  /* 11982e80 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982e83 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11982e86 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11982e88 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11982e8b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982e8e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11982e91 push edx */
  push32((uint32_t)(EDX));
  /* 11982e92 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 11982e94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11982e97 push eax */
  push32((uint32_t)(EAX));
  /* 11982e98 push 0 */
  push32((uint32_t)(0x0u));
  /* 11982e9a call 0x11985930 */
  push32(0x11982e9fu); f_11985930();
  /* 11982e9f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982ea2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11982ea5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11982ea7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11982eaa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982ead add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11982eb0 push edx */
  push32((uint32_t)(EDX));
  /* 11982eb1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 11982eb3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11982eb6 push eax */
  push32((uint32_t)(EAX));
  /* 11982eb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11982eb9 call 0x11985930 */
  push32(0x11982ebeu); f_11985930();
  /* 11982ebe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982ec1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11982ec4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11982ec6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11982ec9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982ecc add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11982ecf push edx */
  push32((uint32_t)(EDX));
  /* 11982ed0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 11982ed2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11982ed5 push eax */
  push32((uint32_t)(EAX));
  /* 11982ed6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11982ed8 call 0x11985930 */
  push32(0x11982eddu); f_11985930();
  /* 11982edd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982ee0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11982ee3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11982ee5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11982ee8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982eeb add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11982eee push edx */
  push32((uint32_t)(EDX));
  /* 11982eef push 0x52 */
  push32((uint32_t)(0x52u));
  /* 11982ef1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11982ef4 push eax */
  push32((uint32_t)(EAX));
  /* 11982ef5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11982ef7 call 0x11985930 */
  push32(0x11982efcu); f_11985930();
  /* 11982efc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982eff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11982f02 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11982f04 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11982f07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982f0a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11982f0d push edx */
  push32((uint32_t)(EDX));
  /* 11982f0e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 11982f10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11982f13 push eax */
  push32((uint32_t)(EAX));
  /* 11982f14 push 0 */
  push32((uint32_t)(0x0u));
  /* 11982f16 call 0x11985930 */
  push32(0x11982f1bu); f_11985930();
  /* 11982f1b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982f1e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11982f21 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11982f23 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11982f26 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11982f29:;
  /* 11982f29 mov esp, ebp */
  ESP = (EBP);
  /* 11982f2b pop ebp */
  EBP = (pop32());
  /* 11982f2c ret  */
  ESPCHK(0x11982d20u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11982f30 (125 bytes, 49 insns) */
void f_11982f30(void) {
  FTRACE(0x11982f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11982f30 push ebp */
  push32((uint32_t)(EBP));
  /* 11982f31 mov ebp, esp */
  EBP = (ESP);
  /* 11982f33 push ecx */
  push32((uint32_t)(ECX));
L_11982f34:;
  /* 11982f34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982f37 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11982f3a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11982f3c je 0x11982fa9 */
  if (C.zf) goto L_11982fa9;
  /* 11982f3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982f41 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11982f44 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11982f47 jl 0x11982f6d */
  if ((C.sf!=C.of)) goto L_11982f6d;
  /* 11982f49 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982f4c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11982f4f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11982f52 jg 0x11982f6d */
  if ((!C.zf&&C.sf==C.of)) goto L_11982f6d;
  /* 11982f54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982f57 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11982f5a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11982f5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982f60 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11982f62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982f65 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11982f68 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11982f6b jmp 0x11982fa7 */
  goto L_11982fa7;
L_11982f6d:;
  /* 11982f6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982f70 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11982f73 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11982f76 jne 0x11982f9e */
  if (!C.zf) goto L_11982f9e;
  /* 11982f78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982f7b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11982f7e:;
  /* 11982f7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11982f81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11982f84 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11982f87 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11982f89 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11982f8c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11982f8f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11982f92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11982f95 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11982f98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11982f9a jne 0x11982f7e */
  if (!C.zf) goto L_11982f7e;
  /* 11982f9c jmp 0x11982fa7 */
  goto L_11982fa7;
L_11982f9e:;
  /* 11982f9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982fa1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11982fa4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11982fa7:;
  /* 11982fa7 jmp 0x11982f34 */
  goto L_11982f34;
L_11982fa9:;
  /* 11982fa9 mov esp, ebp */
  ESP = (EBP);
  /* 11982fab pop ebp */
  EBP = (pop32());
  /* 11982fac ret  */
  ESPCHK(0x11982f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10012fb0 @ 0x11982fb0 (147 bytes, 52 insns) */
void f_11982fb0(void) {
  FTRACE(0x11982fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11982fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11982fb1 mov ebp, esp */
  EBP = (ESP);
  /* 11982fb3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11982fb7 jne 0x11982fbe */
  if (!C.zf) goto L_11982fbe;
  /* 11982fb9 jmp 0x11983041 */
  goto L_11983041;
L_11982fbe:;
  /* 11982fbe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982fc1 cmp dword ptr [eax + 0xc], 0x119a3b08 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x119a3b08u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11982fc8 je 0x11983041 */
  if (C.zf) goto L_11983041;
  /* 11982fca push 2 */
  push32((uint32_t)(0x2u));
  /* 11982fcc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982fcf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11982fd2 push edx */
  push32((uint32_t)(EDX));
  /* 11982fd3 call 0x11978200 */
  push32(0x11982fd8u); f_11978200();
  /* 11982fd8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982fdb push 2 */
  push32((uint32_t)(0x2u));
  /* 11982fdd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982fe0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11982fe3 push ecx */
  push32((uint32_t)(ECX));
  /* 11982fe4 call 0x11978200 */
  push32(0x11982fe9u); f_11978200();
  /* 11982fe9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982fec push 2 */
  push32((uint32_t)(0x2u));
  /* 11982fee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11982ff1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11982ff4 push eax */
  push32((uint32_t)(EAX));
  /* 11982ff5 call 0x11978200 */
  push32(0x11982ffau); f_11978200();
  /* 11982ffa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11982ffd push 2 */
  push32((uint32_t)(0x2u));
  /* 11982fff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11983002 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11983005 push edx */
  push32((uint32_t)(EDX));
  /* 11983006 call 0x11978200 */
  push32(0x1198300bu); f_11978200();
  /* 1198300b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198300e push 2 */
  push32((uint32_t)(0x2u));
  /* 11983010 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11983013 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11983016 push ecx */
  push32((uint32_t)(ECX));
  /* 11983017 call 0x11978200 */
  push32(0x1198301cu); f_11978200();
  /* 1198301c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198301f push 2 */
  push32((uint32_t)(0x2u));
  /* 11983021 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11983024 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11983027 push eax */
  push32((uint32_t)(EAX));
  /* 11983028 call 0x11978200 */
  push32(0x1198302du); f_11978200();
  /* 1198302d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11983030 push 2 */
  push32((uint32_t)(0x2u));
  /* 11983032 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11983035 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 11983038 push edx */
  push32((uint32_t)(EDX));
  /* 11983039 call 0x11978200 */
  push32(0x1198303eu); f_11978200();
  /* 1198303e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11983041:;
  /* 11983041 pop ebp */
  EBP = (pop32());
  /* 11983042 ret  */
  ESPCHK(0x11982fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013050 @ 0x11983050 (928 bytes, 284 insns) */
void f_11983050(void) {
  FTRACE(0x11983050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11983050 push ebp */
  push32((uint32_t)(EBP));
  /* 11983051 mov ebp, esp */
  EBP = (ESP);
  /* 11983053 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11983056 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 1198305d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11983064 cmp dword ptr [0x119a3a70], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3a70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198306b je 0x119833a1 */
  if (C.zf) goto L_119833a1;
  /* 11983071 cmp dword ptr [0x119a3a80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3a80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11983078 jne 0x119830a0 */
  if (!C.zf) goto L_119830a0;
  /* 1198307a push 0x119a3a80 */
  push32((uint32_t)(0x119a3a80u));
  /* 1198307f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11983084 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11983086 mov ax, word ptr [0x119a3ac4] */
  AX = (r16((uint32_t)(0x119a3ac4)));
  /* 1198308c push eax */
  push32((uint32_t)(EAX));
  /* 1198308d push 0 */
  push32((uint32_t)(0x0u));
  /* 1198308f call 0x11985930 */
  push32(0x11983094u); f_11985930();
  /* 11983094 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11983097 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11983099 je 0x119830a0 */
  if (C.zf) goto L_119830a0;
  /* 1198309b jmp 0x11983362 */
  goto L_11983362;
L_119830a0:;
  /* 119830a0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 119830a2 push 0x1199fd3c */
  push32((uint32_t)(0x1199fd3cu));
  /* 119830a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 119830a9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 119830ae call 0x11977770 */
  push32(0x119830b3u); f_11977770();
  /* 119830b3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119830b6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 119830b9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 119830bb push 0x1199fd3c */
  push32((uint32_t)(0x1199fd3cu));
  /* 119830c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 119830c2 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 119830c7 call 0x11977770 */
  push32(0x119830ccu); f_11977770();
  /* 119830cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119830cf mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 119830d2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 119830d4 push 0x1199fd3c */
  push32((uint32_t)(0x1199fd3cu));
  /* 119830d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 119830db push 0x101 */
  push32((uint32_t)(0x101u));
  /* 119830e0 call 0x11977770 */
  push32(0x119830e5u); f_11977770();
  /* 119830e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119830e8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 119830eb push 0x62 */
  push32((uint32_t)(0x62u));
  /* 119830ed push 0x1199fd3c */
  push32((uint32_t)(0x1199fd3cu));
  /* 119830f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 119830f4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 119830f9 call 0x11977770 */
  push32(0x119830feu); f_11977770();
  /* 119830fe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11983101 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11983104 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11983108 je 0x1198311c */
  if (C.zf) goto L_1198311c;
  /* 1198310a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198310e je 0x1198311c */
  if (C.zf) goto L_1198311c;
  /* 11983110 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11983114 je 0x1198311c */
  if (C.zf) goto L_1198311c;
  /* 11983116 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198311a jne 0x11983121 */
  if (!C.zf) goto L_11983121;
L_1198311c:;
  /* 1198311c jmp 0x11983362 */
  goto L_11983362;
L_11983121:;
  /* 11983121 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11983124 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11983127 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1198312e jmp 0x11983139 */
  goto L_11983139;
L_11983130:;
  /* 11983130 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11983133 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11983136 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11983139:;
  /* 11983139 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11983140 jge 0x11983155 */
  if ((C.sf==C.of)) goto L_11983155;
  /* 11983142 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11983145 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 11983148 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1198314a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1198314d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11983150 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11983153 jmp 0x11983130 */
  goto L_11983130;
L_11983155:;
  /* 11983155 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11983158 push eax */
  push32((uint32_t)(EAX));
  /* 11983159 mov ecx, dword ptr [0x119a3a80] */
  ECX = (r32((uint32_t)(0x119a3a80)));
  /* 1198315f push ecx */
  push32((uint32_t)(ECX));
  /* 11983160 call dword ptr [0x119a6330] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6330))), 0x11983166u);
  /* 11983166 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11983168 jne 0x1198316f */
  if (!C.zf) goto L_1198316f;
  /* 1198316a jmp 0x11983362 */
  goto L_11983362;
L_1198316f:;
  /* 1198316f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11983173 jbe 0x1198317a */
  if ((C.cf||C.zf)) goto L_1198317a;
  /* 11983175 jmp 0x11983362 */
  goto L_11983362;
L_1198317a:;
  /* 1198317a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1198317d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11983183 mov dword ptr [0x119a1ea4], edx */
  w32((uint32_t)(0x119a1ea4), (EDX));
  /* 11983189 cmp dword ptr [0x119a1ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119a1ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11983190 jle 0x119831e9 */
  if ((C.zf||C.sf!=C.of)) goto L_119831e9;
  /* 11983192 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 11983195 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11983198 jmp 0x119831a3 */
  goto L_119831a3;
L_1198319a:;
  /* 1198319a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1198319d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119831a0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_119831a3:;
  /* 119831a3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 119831a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119831a8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119831aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119831ac je 0x119831e9 */
  if (C.zf) goto L_119831e9;
  /* 119831ae mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119831b1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119831b3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 119831b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119831b8 je 0x119831e9 */
  if (C.zf) goto L_119831e9;
  /* 119831ba mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119831bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119831bf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 119831c1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 119831c4 jmp 0x119831cf */
  goto L_119831cf;
L_119831c6:;
  /* 119831c6 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 119831c9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119831cc mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_119831cf:;
  /* 119831cf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119831d2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119831d4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 119831d7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119831da jg 0x119831e7 */
  if ((!C.zf&&C.sf==C.of)) goto L_119831e7;
  /* 119831dc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119831df add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119831e2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 119831e5 jmp 0x119831c6 */
  goto L_119831c6;
L_119831e7:;
  /* 119831e7 jmp 0x1198319a */
  goto L_1198319a;
L_119831e9:;
  /* 119831e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 119831eb push 0 */
  push32((uint32_t)(0x0u));
  /* 119831ed push 0 */
  push32((uint32_t)(0x0u));
  /* 119831ef mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 119831f2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119831f5 push eax */
  push32((uint32_t)(EAX));
  /* 119831f6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 119831fb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119831fe push ecx */
  push32((uint32_t)(ECX));
  /* 119831ff push 1 */
  push32((uint32_t)(0x1u));
  /* 11983201 call 0x1197f9a0 */
  push32(0x11983206u); f_1197f9a0();
  /* 11983206 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11983209 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1198320b jne 0x11983212 */
  if (!C.zf) goto L_11983212;
  /* 1198320d jmp 0x11983362 */
  goto L_11983362;
L_11983212:;
  /* 11983212 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11983215 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 1198321a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1198321d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11983220 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11983227 jmp 0x11983232 */
  goto L_11983232;
L_11983229:;
  /* 11983229 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1198322c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198322f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11983232:;
  /* 11983232 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11983239 jge 0x11983250 */
  if ((C.sf==C.of)) goto L_11983250;
  /* 1198323b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1198323e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 11983242 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11983245 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11983248 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198324b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1198324e jmp 0x11983229 */
  goto L_11983229;
L_11983250:;
  /* 11983250 push 0 */
  push32((uint32_t)(0x0u));
  /* 11983252 push 0 */
  push32((uint32_t)(0x0u));
  /* 11983254 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11983257 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198325a push edx */
  push32((uint32_t)(EDX));
  /* 1198325b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11983260 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11983263 push eax */
  push32((uint32_t)(EAX));
  /* 11983264 push 1 */
  push32((uint32_t)(0x1u));
  /* 11983266 call 0x11985bd0 */
  push32(0x1198326bu); f_11985bd0();
  /* 1198326b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198326e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11983270 jne 0x11983277 */
  if (!C.zf) goto L_11983277;
  /* 11983272 jmp 0x11983362 */
  goto L_11983362;
L_11983277:;
  /* 11983277 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1198327a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 1198327f cmp dword ptr [0x119a1ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119a1ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11983286 jle 0x119832e3 */
  if ((C.zf||C.sf!=C.of)) goto L_119832e3;
  /* 11983288 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 1198328b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1198328e jmp 0x11983299 */
  goto L_11983299;
L_11983290:;
  /* 11983290 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11983293 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11983296 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11983299:;
  /* 11983299 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1198329c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1198329e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 119832a0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119832a2 je 0x119832e3 */
  if (C.zf) goto L_119832e3;
  /* 119832a4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119832a7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119832a9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 119832ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119832ae je 0x119832e3 */
  if (C.zf) goto L_119832e3;
  /* 119832b0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 119832b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119832b5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119832b7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 119832ba jmp 0x119832c5 */
  goto L_119832c5;
L_119832bc:;
  /* 119832bc mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 119832bf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119832c2 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_119832c5:;
  /* 119832c5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 119832c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119832ca mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 119832cd cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119832d0 jg 0x119832e1 */
  if ((!C.zf&&C.sf==C.of)) goto L_119832e1;
  /* 119832d2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 119832d5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 119832d8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 119832df jmp 0x119832bc */
  goto L_119832bc;
L_119832e1:;
  /* 119832e1 jmp 0x11983290 */
  goto L_11983290;
L_119832e3:;
  /* 119832e3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 119832e6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119832e9 mov dword ptr [0x119a1c98], eax */
  w32((uint32_t)(0x119a1c98), (EAX));
  /* 119832ee mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119832f1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119832f4 mov dword ptr [0x119a1c9c], ecx */
  w32((uint32_t)(0x119a1c9c), (ECX));
  /* 119832fa cmp dword ptr [0x119a3ab0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3ab0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11983301 je 0x11983314 */
  if (C.zf) goto L_11983314;
  /* 11983303 push 2 */
  push32((uint32_t)(0x2u));
  /* 11983305 mov edx, dword ptr [0x119a3ab0] */
  EDX = (r32((uint32_t)(0x119a3ab0)));
  /* 1198330b push edx */
  push32((uint32_t)(EDX));
  /* 1198330c call 0x11978200 */
  push32(0x11983311u); f_11978200();
  /* 11983311 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11983314:;
  /* 11983314 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11983317 mov dword ptr [0x119a3ab0], eax */
  w32((uint32_t)(0x119a3ab0), (EAX));
  /* 1198331c cmp dword ptr [0x119a3ab4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3ab4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11983323 je 0x11983336 */
  if (C.zf) goto L_11983336;
  /* 11983325 push 2 */
  push32((uint32_t)(0x2u));
  /* 11983327 mov ecx, dword ptr [0x119a3ab4] */
  ECX = (r32((uint32_t)(0x119a3ab4)));
  /* 1198332d push ecx */
  push32((uint32_t)(ECX));
  /* 1198332e call 0x11978200 */
  push32(0x11983333u); f_11978200();
  /* 11983333 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11983336:;
  /* 11983336 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11983339 mov dword ptr [0x119a3ab4], edx */
  w32((uint32_t)(0x119a3ab4), (EDX));
  /* 1198333f push 2 */
  push32((uint32_t)(0x2u));
  /* 11983341 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11983344 push eax */
  push32((uint32_t)(EAX));
  /* 11983345 call 0x11978200 */
  push32(0x1198334au); f_11978200();
  /* 1198334a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198334d push 2 */
  push32((uint32_t)(0x2u));
  /* 1198334f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11983352 push ecx */
  push32((uint32_t)(ECX));
  /* 11983353 call 0x11978200 */
  push32(0x11983358u); f_11978200();
  /* 11983358 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198335b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1198335d jmp 0x119833ec */
  goto L_119833ec;
L_11983362:;
  /* 11983362 push 2 */
  push32((uint32_t)(0x2u));
  /* 11983364 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11983367 push edx */
  push32((uint32_t)(EDX));
  /* 11983368 call 0x11978200 */
  push32(0x1198336du); f_11978200();
  /* 1198336d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11983370 push 2 */
  push32((uint32_t)(0x2u));
  /* 11983372 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11983375 push eax */
  push32((uint32_t)(EAX));
  /* 11983376 call 0x11978200 */
  push32(0x1198337bu); f_11978200();
  /* 1198337b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198337e push 2 */
  push32((uint32_t)(0x2u));
  /* 11983380 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11983383 push ecx */
  push32((uint32_t)(ECX));
  /* 11983384 call 0x11978200 */
  push32(0x11983389u); f_11978200();
  /* 11983389 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198338c push 2 */
  push32((uint32_t)(0x2u));
  /* 1198338e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11983391 push edx */
  push32((uint32_t)(EDX));
  /* 11983392 call 0x11978200 */
  push32(0x11983397u); f_11978200();
  /* 11983397 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198339a mov eax, 1 */
  EAX = (0x1u);
  /* 1198339f jmp 0x119833ec */
  goto L_119833ec;
L_119833a1:;
  /* 119833a1 mov dword ptr [0x119a1c98], 0x119a1ca2 */
  w32((uint32_t)(0x119a1c98), (0x119a1ca2u));
  /* 119833ab mov dword ptr [0x119a1c9c], 0x119a1ca2 */
  w32((uint32_t)(0x119a1c9c), (0x119a1ca2u));
  /* 119833b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 119833b7 mov eax, dword ptr [0x119a3ab0] */
  EAX = (r32((uint32_t)(0x119a3ab0)));
  /* 119833bc push eax */
  push32((uint32_t)(EAX));
  /* 119833bd call 0x11978200 */
  push32(0x119833c2u); f_11978200();
  /* 119833c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119833c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 119833c7 mov ecx, dword ptr [0x119a3ab4] */
  ECX = (r32((uint32_t)(0x119a3ab4)));
  /* 119833cd push ecx */
  push32((uint32_t)(ECX));
  /* 119833ce call 0x11978200 */
  push32(0x119833d3u); f_11978200();
  /* 119833d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119833d6 mov dword ptr [0x119a3ab0], 0 */
  w32((uint32_t)(0x119a3ab0), (0x0u));
  /* 119833e0 mov dword ptr [0x119a3ab4], 0 */
  w32((uint32_t)(0x119a3ab4), (0x0u));
  /* 119833ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119833ec:;
  /* 119833ec mov esp, ebp */
  ESP = (EBP);
  /* 119833ee pop ebp */
  EBP = (pop32());
  /* 119833ef ret  */
  ESPCHK(0x11983050u, _esp0);
  ESP += 4; return;
}

/* FUN_100133f0 @ 0x119833f0 (7 bytes, 5 insns) */
void f_119833f0(void) {
  FTRACE(0x119833f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119833f0 push ebp */
  push32((uint32_t)(EBP));
  /* 119833f1 mov ebp, esp */
  EBP = (ESP);
  /* 119833f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119833f5 pop ebp */
  EBP = (pop32());
  /* 119833f6 ret  */
  ESPCHK(0x119833f0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x11983400 (129 bytes, 56 insns) */
void f_11983400(void) {
  FTRACE(0x11983400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11983400 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11983404 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11983408 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1198340e jne 0x1198344c */
  if (!C.zf) goto L_1198344c;
L_11983410:;
  /* 11983410 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11983412 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11983414 jne 0x11983444 */
  if (!C.zf) goto L_11983444;
  /* 11983416 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11983418 je 0x11983440 */
  if (C.zf) goto L_11983440;
  /* 1198341a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1198341d jne 0x11983444 */
  if (!C.zf) goto L_11983444;
  /* 1198341f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11983421 je 0x11983440 */
  if (C.zf) goto L_11983440;
  /* 11983423 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11983426 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11983429 jne 0x11983444 */
  if (!C.zf) goto L_11983444;
  /* 1198342b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1198342d je 0x11983440 */
  if (C.zf) goto L_11983440;
  /* 1198342f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11983432 jne 0x11983444 */
  if (!C.zf) goto L_11983444;
  /* 11983434 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11983437 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198343a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1198343c jne 0x11983410 */
  if (!C.zf) goto L_11983410;
  /* 1198343e mov edi, edi */
  EDI = (EDI);
L_11983440:;
  /* 11983440 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11983442 ret  */
  ESPCHK(0x11983400u, _esp0);
  ESP += 4; return;
  /* 11983443 nop  */
  /* nop */
L_11983444:;
  /* 11983444 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11983446 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11983448 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11983449 ret  */
  ESPCHK(0x11983400u, _esp0);
  ESP += 4; return;
  /* 1198344a mov edi, edi */
  EDI = (EDI);
L_1198344c:;
  /* 1198344c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 11983452 je 0x11983468 */
  if (C.zf) goto L_11983468;
  /* 11983454 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11983456 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11983457 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11983459 jne 0x11983444 */
  if (!C.zf) goto L_11983444;
  /* 1198345b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1198345c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1198345e je 0x11983440 */
  if (C.zf) goto L_11983440;
  /* 11983460 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 11983466 je 0x11983410 */
  if (C.zf) goto L_11983410;
L_11983468:;
  /* 11983468 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1198346b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198346e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11983470 jne 0x11983444 */
  if (!C.zf) goto L_11983444;
  /* 11983472 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11983474 je 0x11983440 */
  if (C.zf) goto L_11983440;
  /* 11983476 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11983479 jne 0x11983444 */
  if (!C.zf) goto L_11983444;
  /* 1198347b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1198347d je 0x11983440 */
  if (C.zf) goto L_11983440;
  /* 1198347f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11983482 jmp 0x11983410 */
  goto L_11983410;
}

/* FUN_10013490 @ 0x11983490 (62 bytes, 35 insns) */
void f_11983490(void) {
  FTRACE(0x11983490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11983490 push ebp */
  push32((uint32_t)(EBP));
  /* 11983491 mov ebp, esp */
  EBP = (ESP);
  /* 11983493 push esi */
  push32((uint32_t)(ESI));
  /* 11983494 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11983496 push eax */
  push32((uint32_t)(EAX));
  /* 11983497 push eax */
  push32((uint32_t)(EAX));
  /* 11983498 push eax */
  push32((uint32_t)(EAX));
  /* 11983499 push eax */
  push32((uint32_t)(EAX));
  /* 1198349a push eax */
  push32((uint32_t)(EAX));
  /* 1198349b push eax */
  push32((uint32_t)(EAX));
  /* 1198349c push eax */
  push32((uint32_t)(EAX));
  /* 1198349d push eax */
  push32((uint32_t)(EAX));
  /* 1198349e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119834a1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_119834a4:;
  /* 119834a4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119834a6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 119834a8 je 0x119834b1 */
  if (C.zf) goto L_119834b1;
  /* 119834aa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 119834ab bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x119834ab");
  /* 119834af jmp 0x119834a4 */
  goto L_119834a4;
L_119834b1:;
  /* 119834b1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 119834b4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 119834b7 nop  */
  /* nop */
L_119834b8:;
  /* 119834b8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 119834b9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 119834bb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 119834bd je 0x119834c6 */
  if (C.zf) goto L_119834c6;
  /* 119834bf inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 119834c0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x119834c0");
  /* 119834c4 jae 0x119834b8 */
  if (!C.cf) goto L_119834b8;
L_119834c6:;
  /* 119834c6 mov eax, ecx */
  EAX = (ECX);
  /* 119834c8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119834cb pop esi */
  ESI = (pop32());
  /* 119834cc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119834cd ret  */
  ESPCHK(0x11983490u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x119834d0 (56 bytes, 31 insns) */
void f_119834d0(void) {
  FTRACE(0x119834d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119834d0 push ebp */
  push32((uint32_t)(EBP));
  /* 119834d1 mov ebp, esp */
  EBP = (ESP);
  /* 119834d3 push edi */
  push32((uint32_t)(EDI));
  /* 119834d4 push esi */
  push32((uint32_t)(ESI));
  /* 119834d5 push ebx */
  push32((uint32_t)(EBX));
  /* 119834d6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119834d9 jecxz 0x11983501 */
  x86_unimpl("jecxz @ 0x119834d9");
  /* 119834db mov ebx, ecx */
  EBX = (ECX);
  /* 119834dd mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 119834e0 mov esi, edi */
  ESI = (EDI);
  /* 119834e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119834e4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 119834e6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 119834e8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119834ea mov edi, esi */
  EDI = (ESI);
  /* 119834ec mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 119834ef repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 119834f1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 119834f4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119834f6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119834f9 ja 0x119834ff */
  if ((!C.cf&&!C.zf)) goto L_119834ff;
  /* 119834fb je 0x11983501 */
  if (C.zf) goto L_11983501;
  /* 119834fd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 119834fe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_119834ff:;
  /* 119834ff not ecx */
  ECX = (~(ECX));
L_11983501:;
  /* 11983501 mov eax, ecx */
  EAX = (ECX);
  /* 11983503 pop ebx */
  EBX = (pop32());
  /* 11983504 pop esi */
  ESI = (pop32());
  /* 11983505 pop edi */
  EDI = (pop32());
  /* 11983506 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11983507 ret  */
  ESPCHK(0x119834d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013510 @ 0x11983510 (58 bytes, 32 insns) */
void f_11983510(void) {
  FTRACE(0x11983510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11983510 push ebp */
  push32((uint32_t)(EBP));
  /* 11983511 mov ebp, esp */
  EBP = (ESP);
  /* 11983513 push esi */
  push32((uint32_t)(ESI));
  /* 11983514 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11983516 push eax */
  push32((uint32_t)(EAX));
  /* 11983517 push eax */
  push32((uint32_t)(EAX));
  /* 11983518 push eax */
  push32((uint32_t)(EAX));
  /* 11983519 push eax */
  push32((uint32_t)(EAX));
  /* 1198351a push eax */
  push32((uint32_t)(EAX));
  /* 1198351b push eax */
  push32((uint32_t)(EAX));
  /* 1198351c push eax */
  push32((uint32_t)(EAX));
  /* 1198351d push eax */
  push32((uint32_t)(EAX));
  /* 1198351e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11983521 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11983524:;
  /* 11983524 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11983526 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11983528 je 0x11983531 */
  if (C.zf) goto L_11983531;
  /* 1198352a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1198352b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1198352b");
  /* 1198352f jmp 0x11983524 */
  goto L_11983524;
L_11983531:;
  /* 11983531 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_11983534:;
  /* 11983534 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11983536 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11983538 je 0x11983544 */
  if (C.zf) goto L_11983544;
  /* 1198353a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1198353b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1198353b");
  /* 1198353f jae 0x11983534 */
  if (!C.cf) goto L_11983534;
  /* 11983541 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_11983544:;
  /* 11983544 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11983547 pop esi */
  ESI = (pop32());
  /* 11983548 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11983549 ret  */
  ESPCHK(0x11983510u, _esp0);
  ESP += 4; return;
}

/* FUN_10013550 @ 0x11983550 (512 bytes, 147 insns) */
void f_11983550(void) {
  FTRACE(0x11983550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11983550 push ebp */
  push32((uint32_t)(EBP));
  /* 11983551 mov ebp, esp */
  EBP = (ESP);
  /* 11983553 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11983556 cmp dword ptr [0x119a3afc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3afc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198355d jne 0x11983582 */
  if (!C.zf) goto L_11983582;
  /* 1198355f call 0x11984020 */
  push32(0x11983564u); f_11984020();
  /* 11983564 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11983566 je 0x11983572 */
  if (C.zf) goto L_11983572;
  /* 11983568 mov eax, dword ptr [0x119a62f4] */
  EAX = (r32((uint32_t)(0x119a62f4)));
  /* 1198356d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11983570 jmp 0x11983579 */
  goto L_11983579;
L_11983572:;
  /* 11983572 mov dword ptr [ebp - 8], 0x11984070 */
  w32((uint32_t)(EBP + -0x8), (0x11984070u));
L_11983579:;
  /* 11983579 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1198357c mov dword ptr [0x119a3afc], ecx */
  w32((uint32_t)(0x119a3afc), (ECX));
L_11983582:;
  /* 11983582 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11983586 jne 0x11983592 */
  if (!C.zf) goto L_11983592;
  /* 11983588 call 0x11983e70 */
  push32(0x1198358du); f_11983e70();
  /* 1198358d jmp 0x1198365e */
  goto L_1198365e;
L_11983592:;
  /* 11983592 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11983595 mov dword ptr [0x119a3aec], edx */
  w32((uint32_t)(0x119a3aec), (EDX));
  /* 1198359b cmp dword ptr [0x119a3aec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3aec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119835a2 je 0x119835c4 */
  if (C.zf) goto L_119835c4;
  /* 119835a4 mov eax, dword ptr [0x119a3aec] */
  EAX = (r32((uint32_t)(0x119a3aec)));
  /* 119835a9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119835ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119835ae je 0x119835c4 */
  if (C.zf) goto L_119835c4;
  /* 119835b0 push 0x119a3aec */
  push32((uint32_t)(0x119a3aecu));
  /* 119835b5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 119835b7 push 0x119a2a90 */
  push32((uint32_t)(0x119a2a90u));
  /* 119835bc call 0x11983750 */
  push32(0x119835c1u); f_11983750();
  /* 119835c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119835c4:;
  /* 119835c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119835c7 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119835ca mov dword ptr [0x119a3af0], edx */
  w32((uint32_t)(0x119a3af0), (EDX));
  /* 119835d0 cmp dword ptr [0x119a3af0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3af0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119835d7 je 0x119835f9 */
  if (C.zf) goto L_119835f9;
  /* 119835d9 mov eax, dword ptr [0x119a3af0] */
  EAX = (r32((uint32_t)(0x119a3af0)));
  /* 119835de movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119835e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119835e3 je 0x119835f9 */
  if (C.zf) goto L_119835f9;
  /* 119835e5 push 0x119a3af0 */
  push32((uint32_t)(0x119a3af0u));
  /* 119835ea push 0x16 */
  push32((uint32_t)(0x16u));
  /* 119835ec push 0x119a29d8 */
  push32((uint32_t)(0x119a29d8u));
  /* 119835f1 call 0x11983750 */
  push32(0x119835f6u); f_11983750();
  /* 119835f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119835f9:;
  /* 119835f9 mov dword ptr [0x119a3af4], 0 */
  w32((uint32_t)(0x119a3af4), (0x0u));
  /* 11983603 cmp dword ptr [0x119a3aec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3aec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198360a je 0x1198363d */
  if (C.zf) goto L_1198363d;
  /* 1198360c mov edx, dword ptr [0x119a3aec] */
  EDX = (r32((uint32_t)(0x119a3aec)));
  /* 11983612 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11983615 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11983617 je 0x1198363d */
  if (C.zf) goto L_1198363d;
  /* 11983619 cmp dword ptr [0x119a3af0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3af0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11983620 je 0x11983636 */
  if (C.zf) goto L_11983636;
  /* 11983622 mov ecx, dword ptr [0x119a3af0] */
  ECX = (r32((uint32_t)(0x119a3af0)));
  /* 11983628 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1198362b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1198362d je 0x11983636 */
  if (C.zf) goto L_11983636;
  /* 1198362f call 0x119837e0 */
  push32(0x11983634u); f_119837e0();
  /* 11983634 jmp 0x1198363b */
  goto L_1198363b;
L_11983636:;
  /* 11983636 call 0x11983bd0 */
  push32(0x1198363bu); f_11983bd0();
L_1198363b:;
  /* 1198363b jmp 0x1198365e */
  goto L_1198365e;
L_1198363d:;
  /* 1198363d cmp dword ptr [0x119a3af0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3af0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11983644 je 0x11983659 */
  if (C.zf) goto L_11983659;
  /* 11983646 mov eax, dword ptr [0x119a3af0] */
  EAX = (r32((uint32_t)(0x119a3af0)));
  /* 1198364b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1198364e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11983650 je 0x11983659 */
  if (C.zf) goto L_11983659;
  /* 11983652 call 0x11983d70 */
  push32(0x11983657u); f_11983d70();
  /* 11983657 jmp 0x1198365e */
  goto L_1198365e;
L_11983659:;
  /* 11983659 call 0x11983e70 */
  push32(0x1198365eu); f_11983e70();
L_1198365e:;
  /* 1198365e cmp dword ptr [0x119a3af4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3af4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11983665 jne 0x1198366e */
  if (!C.zf) goto L_1198366e;
  /* 11983667 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11983669 jmp 0x1198374c */
  goto L_1198374c;
L_1198366e:;
  /* 1198366e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11983671 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11983677 push edx */
  push32((uint32_t)(EDX));
  /* 11983678 call 0x11983ea0 */
  push32(0x1198367du); f_11983ea0();
  /* 1198367d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11983680 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11983683 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11983687 je 0x1198369c */
  if (C.zf) goto L_1198369c;
  /* 11983689 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1198368c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11983691 push eax */
  push32((uint32_t)(EAX));
  /* 11983692 call dword ptr [0x119a62f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a62f8))), 0x11983698u);
  /* 11983698 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1198369a jne 0x119836a3 */
  if (!C.zf) goto L_119836a3;
L_1198369c:;
  /* 1198369c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1198369e jmp 0x1198374c */
  goto L_1198374c;
L_119836a3:;
  /* 119836a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 119836a5 mov ecx, dword ptr [0x119a3adc] */
  ECX = (r32((uint32_t)(0x119a3adc)));
  /* 119836ab push ecx */
  push32((uint32_t)(ECX));
  /* 119836ac call dword ptr [0x119a6308] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a6308))), 0x119836b2u);
  /* 119836b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119836b4 jne 0x119836bd */
  if (!C.zf) goto L_119836bd;
  /* 119836b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119836b8 jmp 0x1198374c */
  goto L_1198374c;
L_119836bd:;
  /* 119836bd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119836c1 je 0x119836e8 */
  if (C.zf) goto L_119836e8;
  /* 119836c3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119836c6 mov ax, word ptr [0x119a3adc] */
  AX = (r16((uint32_t)(0x119a3adc)));
  /* 119836cc mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 119836cf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119836d2 mov dx, word ptr [0x119a3af8] */
  DX = (r16((uint32_t)(0x119a3af8)));
  /* 119836d9 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 119836dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119836e0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 119836e4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_119836e8:;
  /* 119836e8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119836ec je 0x11983747 */
  if (C.zf) goto L_11983747;
  /* 119836ee push 0x40 */
  push32((uint32_t)(0x40u));
  /* 119836f0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119836f3 push edx */
  push32((uint32_t)(EDX));
  /* 119836f4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 119836f9 mov eax, dword ptr [0x119a3adc] */
  EAX = (r32((uint32_t)(0x119a3adc)));
  /* 119836fe push eax */
  push32((uint32_t)(EAX));
  /* 119836ff call dword ptr [0x119a3afc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a3afc))), 0x11983705u);
  /* 11983705 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11983707 jne 0x1198370d */
  if (!C.zf) goto L_1198370d;
  /* 11983709 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1198370b jmp 0x1198374c */
  goto L_1198374c;
L_1198370d:;
  /* 1198370d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1198370f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11983712 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11983715 push ecx */
  push32((uint32_t)(ECX));
  /* 11983716 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 1198371b mov edx, dword ptr [0x119a3af8] */
  EDX = (r32((uint32_t)(0x119a3af8)));
  /* 11983721 push edx */
  push32((uint32_t)(EDX));
  /* 11983722 call dword ptr [0x119a3afc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a3afc))), 0x11983728u);
  /* 11983728 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1198372a jne 0x11983730 */
  if (!C.zf) goto L_11983730;
  /* 1198372c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1198372e jmp 0x1198374c */
  goto L_1198374c;
L_11983730:;
  /* 11983730 push 0xa */
  push32((uint32_t)(0xau));
  /* 11983732 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11983735 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198373a push eax */
  push32((uint32_t)(EAX));
  /* 1198373b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1198373e push ecx */
  push32((uint32_t)(ECX));
  /* 1198373f call 0x1197a2b0 */
  push32(0x11983744u); f_1197a2b0();
  /* 11983744 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11983747:;
  /* 11983747 mov eax, 1 */
  EAX = (0x1u);
L_1198374c:;
  /* 1198374c mov esp, ebp */
  ESP = (EBP);
  /* 1198374e pop ebp */
  EBP = (pop32());
  /* 1198374f ret  */
  ESPCHK(0x11983550u, _esp0);
  ESP += 4; return;
}

/* FUN_10013750 @ 0x11983750 (130 bytes, 47 insns) */
void f_11983750(void) {
  FTRACE(0x11983750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11983750 push ebp */
  push32((uint32_t)(EBP));
  /* 11983751 mov ebp, esp */
  EBP = (ESP);
  /* 11983753 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11983756 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1198375d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11983764:;
  /* 11983764 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11983767 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198376a jg 0x119837ce */
  if ((!C.zf&&C.sf==C.of)) goto L_119837ce;
  /* 1198376c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11983770 je 0x119837ce */
  if (C.zf) goto L_119837ce;
  /* 11983772 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11983775 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11983778 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11983779 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1198377b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1198377d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11983780 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11983783 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11983786 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 11983789 push eax */
  push32((uint32_t)(EAX));
  /* 1198378a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1198378d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1198378f push edx */
  push32((uint32_t)(EDX));
  /* 11983790 call 0x11985e40 */
  push32(0x11983795u); f_11985e40();
  /* 11983795 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11983798 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1198379b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198379f jne 0x119837b2 */
  if (!C.zf) goto L_119837b2;
  /* 119837a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119837a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119837a7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 119837ab mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119837ae mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 119837b0 jmp 0x119837cc */
  goto L_119837cc;
L_119837b2:;
  /* 119837b2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119837b6 jge 0x119837c3 */
  if ((C.sf==C.of)) goto L_119837c3;
  /* 119837b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119837bb sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119837be mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 119837c1 jmp 0x119837cc */
  goto L_119837cc;
L_119837c3:;
  /* 119837c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119837c6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119837c9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_119837cc:;
  /* 119837cc jmp 0x11983764 */
  goto L_11983764;
L_119837ce:;
  /* 119837ce mov esp, ebp */
  ESP = (EBP);
  /* 119837d0 pop ebp */
  EBP = (pop32());
  /* 119837d1 ret  */
  ESPCHK(0x11983750u, _esp0);
  ESP += 4; return;
}

/* FUN_100137e0 @ 0x119837e0 (186 bytes, 50 insns) */
void f_119837e0(void) {
  FTRACE(0x119837e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119837e0 push ebp */
  push32((uint32_t)(EBP));
  /* 119837e1 mov ebp, esp */
  EBP = (ESP);
  /* 119837e3 push ecx */
  push32((uint32_t)(ECX));
  /* 119837e4 mov eax, dword ptr [0x119a3aec] */
  EAX = (r32((uint32_t)(0x119a3aec)));
  /* 119837e9 push eax */
  push32((uint32_t)(EAX));
  /* 119837ea call 0x1197a5a0 */
  push32(0x119837efu); f_1197a5a0();
  /* 119837ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119837f2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119837f4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119837f7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 119837fa mov dword ptr [0x119a3ae8], ecx */
  w32((uint32_t)(0x119a3ae8), (ECX));
  /* 11983800 mov edx, dword ptr [0x119a3af0] */
  EDX = (r32((uint32_t)(0x119a3af0)));
  /* 11983806 push edx */
  push32((uint32_t)(EDX));
  /* 11983807 call 0x1197a5a0 */
  push32(0x1198380cu); f_1197a5a0();
  /* 1198380c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198380f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11983811 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11983814 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11983817 mov dword ptr [0x119a3ae0], ecx */
  w32((uint32_t)(0x119a3ae0), (ECX));
  /* 1198381d mov dword ptr [0x119a3adc], 0 */
  w32((uint32_t)(0x119a3adc), (0x0u));
  /* 11983827 cmp dword ptr [0x119a3ae8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3ae8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198382e je 0x11983839 */
  if (C.zf) goto L_11983839;
  /* 11983830 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11983837 jmp 0x1198384b */
  goto L_1198384b;
L_11983839:;
  /* 11983839 mov edx, dword ptr [0x119a3aec] */
  EDX = (r32((uint32_t)(0x119a3aec)));
  /* 1198383f push edx */
  push32((uint32_t)(EDX));
  /* 11983840 call 0x11984280 */
  push32(0x11983845u); f_11984280();
  /* 11983845 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11983848 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1198384b:;
  /* 1198384b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1198384e mov dword ptr [0x119a3ae4], eax */
  w32((uint32_t)(0x119a3ae4), (EAX));
  /* 11983853 push 1 */
  push32((uint32_t)(0x1u));
  /* 11983855 push 0x119838a0 */
  push32((uint32_t)(0x119838a0u));
  /* 1198385a call dword ptr [0x119a62fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a62fc))), 0x11983860u);
  /* 11983860 mov ecx, dword ptr [0x119a3af4] */
  ECX = (r32((uint32_t)(0x119a3af4)));
  /* 11983866 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1198386c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1198386e je 0x1198388c */
  if (C.zf) goto L_1198388c;
  /* 11983870 mov edx, dword ptr [0x119a3af4] */
  EDX = (r32((uint32_t)(0x119a3af4)));
  /* 11983876 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 1198387c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1198387e je 0x1198388c */
  if (C.zf) goto L_1198388c;
  /* 11983880 mov eax, dword ptr [0x119a3af4] */
  EAX = (r32((uint32_t)(0x119a3af4)));
  /* 11983885 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 11983888 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1198388a jne 0x11983896 */
  if (!C.zf) goto L_11983896;
L_1198388c:;
  /* 1198388c mov dword ptr [0x119a3af4], 0 */
  w32((uint32_t)(0x119a3af4), (0x0u));
L_11983896:;
  /* 11983896 mov esp, ebp */
  ESP = (EBP);
  /* 11983898 pop ebp */
  EBP = (pop32());
  /* 11983899 ret  */
  ESPCHK(0x119837e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100138a0 @ 0x119838a0 (804 bytes, 220 insns) */
void f_119838a0(void) {
  FTRACE(0x119838a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119838a0 push ebp */
  push32((uint32_t)(EBP));
  /* 119838a1 mov ebp, esp */
  EBP = (ESP);
  /* 119838a3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119838a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119838a9 push eax */
  push32((uint32_t)(EAX));
  /* 119838aa call 0x11984200 */
  push32(0x119838afu); f_11984200();
  /* 119838af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119838b2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 119838b5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 119838b7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 119838ba push ecx */
  push32((uint32_t)(ECX));
  /* 119838bb mov edx, dword ptr [0x119a3ae0] */
  EDX = (r32((uint32_t)(0x119a3ae0)));
  /* 119838c1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 119838c3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119838c5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 119838cb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119838d1 push edx */
  push32((uint32_t)(EDX));
  /* 119838d2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 119838d5 push eax */
  push32((uint32_t)(EAX));
  /* 119838d6 call dword ptr [0x119a3afc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a3afc))), 0x119838dcu);
  /* 119838dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119838de jne 0x119838f4 */
  if (!C.zf) goto L_119838f4;
  /* 119838e0 mov dword ptr [0x119a3af4], 0 */
  w32((uint32_t)(0x119a3af4), (0x0u));
  /* 119838ea mov eax, 1 */
  EAX = (0x1u);
  /* 119838ef jmp 0x11983bbe */
  goto L_11983bbe;
L_119838f4:;
  /* 119838f4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 119838f7 push ecx */
  push32((uint32_t)(ECX));
  /* 119838f8 mov edx, dword ptr [0x119a3af0] */
  EDX = (r32((uint32_t)(0x119a3af0)));
  /* 119838fe push edx */
  push32((uint32_t)(EDX));
  /* 119838ff call 0x11985e40 */
  push32(0x11983904u); f_11985e40();
  /* 11983904 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11983907 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11983909 jne 0x11983a2f */
  if (!C.zf) goto L_11983a2f;
  /* 1198390f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11983911 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11983914 push eax */
  push32((uint32_t)(EAX));
  /* 11983915 mov ecx, dword ptr [0x119a3ae8] */
  ECX = (r32((uint32_t)(0x119a3ae8)));
  /* 1198391b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1198391d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1198391f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 11983925 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198392b push ecx */
  push32((uint32_t)(ECX));
  /* 1198392c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1198392f push edx */
  push32((uint32_t)(EDX));
  /* 11983930 call dword ptr [0x119a3afc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a3afc))), 0x11983936u);
  /* 11983936 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11983938 jne 0x1198394e */
  if (!C.zf) goto L_1198394e;
  /* 1198393a mov dword ptr [0x119a3af4], 0 */
  w32((uint32_t)(0x119a3af4), (0x0u));
  /* 11983944 mov eax, 1 */
  EAX = (0x1u);
  /* 11983949 jmp 0x11983bbe */
  goto L_11983bbe;
L_1198394e:;
  /* 1198394e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11983951 push eax */
  push32((uint32_t)(EAX));
  /* 11983952 mov ecx, dword ptr [0x119a3aec] */
  ECX = (r32((uint32_t)(0x119a3aec)));
  /* 11983958 push ecx */
  push32((uint32_t)(ECX));
  /* 11983959 call 0x11985e40 */
  push32(0x1198395eu); f_11985e40();
  /* 1198395e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11983961 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11983963 jne 0x11983990 */
  if (!C.zf) goto L_11983990;
  /* 11983965 mov edx, dword ptr [0x119a3af4] */
  EDX = (r32((uint32_t)(0x119a3af4)));
  /* 1198396b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 11983971 mov dword ptr [0x119a3af4], edx */
  w32((uint32_t)(0x119a3af4), (EDX));
  /* 11983977 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1198397a mov dword ptr [0x119a3af8], eax */
  w32((uint32_t)(0x119a3af8), (EAX));
  /* 1198397f mov ecx, dword ptr [0x119a3af8] */
  ECX = (r32((uint32_t)(0x119a3af8)));
  /* 11983985 mov dword ptr [0x119a3adc], ecx */
  w32((uint32_t)(0x119a3adc), (ECX));
  /* 1198398b jmp 0x11983a2f */
  goto L_11983a2f;
L_11983990:;
  /* 11983990 mov edx, dword ptr [0x119a3af4] */
  EDX = (r32((uint32_t)(0x119a3af4)));
  /* 11983996 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11983999 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1198399b jne 0x11983a2f */
  if (!C.zf) goto L_11983a2f;
  /* 119839a1 cmp dword ptr [0x119a3ae4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3ae4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119839a8 je 0x119839fd */
  if (C.zf) goto L_119839fd;
  /* 119839aa mov eax, dword ptr [0x119a3ae4] */
  EAX = (r32((uint32_t)(0x119a3ae4)));
  /* 119839af push eax */
  push32((uint32_t)(EAX));
  /* 119839b0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 119839b3 push ecx */
  push32((uint32_t)(ECX));
  /* 119839b4 mov edx, dword ptr [0x119a3aec] */
  EDX = (r32((uint32_t)(0x119a3aec)));
  /* 119839ba push edx */
  push32((uint32_t)(EDX));
  /* 119839bb call 0x11985f10 */
  push32(0x119839c0u); f_11985f10();
  /* 119839c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119839c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119839c5 jne 0x119839fd */
  if (!C.zf) goto L_119839fd;
  /* 119839c7 mov eax, dword ptr [0x119a3af4] */
  EAX = (r32((uint32_t)(0x119a3af4)));
  /* 119839cc or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 119839ce mov dword ptr [0x119a3af4], eax */
  w32((uint32_t)(0x119a3af4), (EAX));
  /* 119839d3 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 119839d6 mov dword ptr [0x119a3af8], ecx */
  w32((uint32_t)(0x119a3af8), (ECX));
  /* 119839dc mov edx, dword ptr [0x119a3aec] */
  EDX = (r32((uint32_t)(0x119a3aec)));
  /* 119839e2 push edx */
  push32((uint32_t)(EDX));
  /* 119839e3 call 0x1197a5a0 */
  push32(0x119839e8u); f_1197a5a0();
  /* 119839e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119839eb cmp eax, dword ptr [0x119a3ae4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119a3ae4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119839f1 jne 0x119839fb */
  if (!C.zf) goto L_119839fb;
  /* 119839f3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 119839f6 mov dword ptr [0x119a3adc], eax */
  w32((uint32_t)(0x119a3adc), (EAX));
L_119839fb:;
  /* 119839fb jmp 0x11983a2f */
  goto L_11983a2f;
L_119839fd:;
  /* 119839fd mov ecx, dword ptr [0x119a3af4] */
  ECX = (r32((uint32_t)(0x119a3af4)));
  /* 11983a03 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11983a06 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11983a08 jne 0x11983a2f */
  if (!C.zf) goto L_11983a2f;
  /* 11983a0a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11983a0d push edx */
  push32((uint32_t)(EDX));
  /* 11983a0e call 0x11983f40 */
  push32(0x11983a13u); f_11983f40();
  /* 11983a13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11983a16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11983a18 je 0x11983a2f */
  if (C.zf) goto L_11983a2f;
  /* 11983a1a mov eax, dword ptr [0x119a3af4] */
  EAX = (r32((uint32_t)(0x119a3af4)));
  /* 11983a1f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11983a21 mov dword ptr [0x119a3af4], eax */
  w32((uint32_t)(0x119a3af4), (EAX));
  /* 11983a26 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11983a29 mov dword ptr [0x119a3af8], ecx */
  w32((uint32_t)(0x119a3af8), (ECX));
L_11983a2f:;
  /* 11983a2f mov edx, dword ptr [0x119a3af4] */
  EDX = (r32((uint32_t)(0x119a3af4)));
  /* 11983a35 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 11983a3b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11983a41 je 0x11983bb1 */
  if (C.zf) goto L_11983bb1;
  /* 11983a47 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11983a49 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11983a4c push eax */
  push32((uint32_t)(EAX));
  /* 11983a4d mov ecx, dword ptr [0x119a3ae8] */
  ECX = (r32((uint32_t)(0x119a3ae8)));
  /* 11983a53 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11983a55 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11983a57 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 11983a5d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11983a63 push ecx */
  push32((uint32_t)(ECX));
  /* 11983a64 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11983a67 push edx */
  push32((uint32_t)(EDX));
  /* 11983a68 call dword ptr [0x119a3afc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a3afc))), 0x11983a6eu);
  /* 11983a6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11983a70 jne 0x11983a86 */
  if (!C.zf) goto L_11983a86;
  /* 11983a72 mov dword ptr [0x119a3af4], 0 */
  w32((uint32_t)(0x119a3af4), (0x0u));
  /* 11983a7c mov eax, 1 */
  EAX = (0x1u);
  /* 11983a81 jmp 0x11983bbe */
  goto L_11983bbe;
L_11983a86:;
  /* 11983a86 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11983a89 push eax */
  push32((uint32_t)(EAX));
  /* 11983a8a mov ecx, dword ptr [0x119a3aec] */
  ECX = (r32((uint32_t)(0x119a3aec)));
  /* 11983a90 push ecx */
  push32((uint32_t)(ECX));
  /* 11983a91 call 0x11985e40 */
  push32(0x11983a96u); f_11985e40();
  /* 11983a96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11983a99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11983a9b jne 0x11983b50 */
  if (!C.zf) goto L_11983b50;
  /* 11983aa1 mov edx, dword ptr [0x119a3af4] */
  EDX = (r32((uint32_t)(0x119a3af4)));
  /* 11983aa7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11983aaa mov dword ptr [0x119a3af4], edx */
  w32((uint32_t)(0x119a3af4), (EDX));
  /* 11983ab0 cmp dword ptr [0x119a3ae8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3ae8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11983ab7 je 0x11983ada */
  if (C.zf) goto L_11983ada;
  /* 11983ab9 mov eax, dword ptr [0x119a3af4] */
  EAX = (r32((uint32_t)(0x119a3af4)));
  /* 11983abe or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11983ac1 mov dword ptr [0x119a3af4], eax */
  w32((uint32_t)(0x119a3af4), (EAX));
  /* 11983ac6 cmp dword ptr [0x119a3adc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3adc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11983acd jne 0x11983ad8 */
  if (!C.zf) goto L_11983ad8;
  /* 11983acf mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11983ad2 mov dword ptr [0x119a3adc], ecx */
  w32((uint32_t)(0x119a3adc), (ECX));
L_11983ad8:;
  /* 11983ad8 jmp 0x11983b4e */
  goto L_11983b4e;
L_11983ada:;
  /* 11983ada cmp dword ptr [0x119a3ae4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3ae4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11983ae1 je 0x11983b2f */
  if (C.zf) goto L_11983b2f;
  /* 11983ae3 mov edx, dword ptr [0x119a3aec] */
  EDX = (r32((uint32_t)(0x119a3aec)));
  /* 11983ae9 push edx */
  push32((uint32_t)(EDX));
  /* 11983aea call 0x1197a5a0 */
  push32(0x11983aefu); f_1197a5a0();
  /* 11983aef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11983af2 cmp eax, dword ptr [0x119a3ae4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119a3ae4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11983af8 jne 0x11983b2f */
  if (!C.zf) goto L_11983b2f;
  /* 11983afa push 1 */
  push32((uint32_t)(0x1u));
  /* 11983afc mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11983aff push eax */
  push32((uint32_t)(EAX));
  /* 11983b00 call 0x11983f90 */
  push32(0x11983b05u); f_11983f90();
  /* 11983b05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11983b08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11983b0a je 0x11983b2d */
  if (C.zf) goto L_11983b2d;
  /* 11983b0c mov ecx, dword ptr [0x119a3af4] */
  ECX = (r32((uint32_t)(0x119a3af4)));
  /* 11983b12 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11983b15 mov dword ptr [0x119a3af4], ecx */
  w32((uint32_t)(0x119a3af4), (ECX));
  /* 11983b1b cmp dword ptr [0x119a3adc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3adc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11983b22 jne 0x11983b2d */
  if (!C.zf) goto L_11983b2d;
  /* 11983b24 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11983b27 mov dword ptr [0x119a3adc], edx */
  w32((uint32_t)(0x119a3adc), (EDX));
L_11983b2d:;
  /* 11983b2d jmp 0x11983b4e */
  goto L_11983b4e;
L_11983b2f:;
  /* 11983b2f mov eax, dword ptr [0x119a3af4] */
  EAX = (r32((uint32_t)(0x119a3af4)));
  /* 11983b34 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11983b37 mov dword ptr [0x119a3af4], eax */
  w32((uint32_t)(0x119a3af4), (EAX));
  /* 11983b3c cmp dword ptr [0x119a3adc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3adc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11983b43 jne 0x11983b4e */
  if (!C.zf) goto L_11983b4e;
  /* 11983b45 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11983b48 mov dword ptr [0x119a3adc], ecx */
  w32((uint32_t)(0x119a3adc), (ECX));
L_11983b4e:;
  /* 11983b4e jmp 0x11983bb1 */
  goto L_11983bb1;
L_11983b50:;
  /* 11983b50 cmp dword ptr [0x119a3ae8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3ae8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11983b57 jne 0x11983bb1 */
  if (!C.zf) goto L_11983bb1;
  /* 11983b59 cmp dword ptr [0x119a3ae4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3ae4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11983b60 je 0x11983bb1 */
  if (C.zf) goto L_11983bb1;
  /* 11983b62 mov edx, dword ptr [0x119a3ae4] */
  EDX = (r32((uint32_t)(0x119a3ae4)));
  /* 11983b68 push edx */
  push32((uint32_t)(EDX));
  /* 11983b69 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11983b6c push eax */
  push32((uint32_t)(EAX));
  /* 11983b6d mov ecx, dword ptr [0x119a3aec] */
  ECX = (r32((uint32_t)(0x119a3aec)));
  /* 11983b73 push ecx */
  push32((uint32_t)(ECX));
  /* 11983b74 call 0x11985f10 */
  push32(0x11983b79u); f_11985f10();
  /* 11983b79 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11983b7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11983b7e jne 0x11983bb1 */
  if (!C.zf) goto L_11983bb1;
  /* 11983b80 push 0 */
  push32((uint32_t)(0x0u));
  /* 11983b82 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11983b85 push edx */
  push32((uint32_t)(EDX));
  /* 11983b86 call 0x11983f90 */
  push32(0x11983b8bu); f_11983f90();
  /* 11983b8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11983b8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11983b90 je 0x11983bb1 */
  if (C.zf) goto L_11983bb1;
  /* 11983b92 mov eax, dword ptr [0x119a3af4] */
  EAX = (r32((uint32_t)(0x119a3af4)));
  /* 11983b97 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11983b9a mov dword ptr [0x119a3af4], eax */
  w32((uint32_t)(0x119a3af4), (EAX));
  /* 11983b9f cmp dword ptr [0x119a3adc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3adc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11983ba6 jne 0x11983bb1 */
  if (!C.zf) goto L_11983bb1;
  /* 11983ba8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11983bab mov dword ptr [0x119a3adc], ecx */
  w32((uint32_t)(0x119a3adc), (ECX));
L_11983bb1:;
  /* 11983bb1 mov eax, dword ptr [0x119a3af4] */
  EAX = (r32((uint32_t)(0x119a3af4)));
  /* 11983bb6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11983bb9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11983bbb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11983bbd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11983bbe:;
  /* 11983bbe mov esp, ebp */
  ESP = (EBP);
  /* 11983bc0 pop ebp */
  EBP = (pop32());
  /* 11983bc1 ret 4 */
  ESPCHK(0x119838a0u, _esp0);
  ESP += 8; return;
}

/* FUN_10013bd0 @ 0x11983bd0 (116 bytes, 33 insns) */
void f_11983bd0(void) {
  FTRACE(0x11983bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11983bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11983bd1 mov ebp, esp */
  EBP = (ESP);
  /* 11983bd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11983bd4 mov eax, dword ptr [0x119a3aec] */
  EAX = (r32((uint32_t)(0x119a3aec)));
  /* 11983bd9 push eax */
  push32((uint32_t)(EAX));
  /* 11983bda call 0x1197a5a0 */
  push32(0x11983bdfu); f_1197a5a0();
  /* 11983bdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11983be2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11983be4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11983be7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11983bea mov dword ptr [0x119a3ae8], ecx */
  w32((uint32_t)(0x119a3ae8), (ECX));
  /* 11983bf0 cmp dword ptr [0x119a3ae8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3ae8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11983bf7 je 0x11983c02 */
  if (C.zf) goto L_11983c02;
  /* 11983bf9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11983c00 jmp 0x11983c14 */
  goto L_11983c14;
L_11983c02:;
  /* 11983c02 mov edx, dword ptr [0x119a3aec] */
  EDX = (r32((uint32_t)(0x119a3aec)));
  /* 11983c08 push edx */
  push32((uint32_t)(EDX));
  /* 11983c09 call 0x11984280 */
  push32(0x11983c0eu); f_11984280();
  /* 11983c0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11983c11 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11983c14:;
  /* 11983c14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11983c17 mov dword ptr [0x119a3ae4], eax */
  w32((uint32_t)(0x119a3ae4), (EAX));
  /* 11983c1c push 1 */
  push32((uint32_t)(0x1u));
  /* 11983c1e push 0x11983c50 */
  push32((uint32_t)(0x11983c50u));
  /* 11983c23 call dword ptr [0x119a62fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a62fc))), 0x11983c29u);
  /* 11983c29 mov ecx, dword ptr [0x119a3af4] */
  ECX = (r32((uint32_t)(0x119a3af4)));
  /* 11983c2f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11983c32 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11983c34 jne 0x11983c40 */
  if (!C.zf) goto L_11983c40;
  /* 11983c36 mov dword ptr [0x119a3af4], 0 */
  w32((uint32_t)(0x119a3af4), (0x0u));
L_11983c40:;
  /* 11983c40 mov esp, ebp */
  ESP = (EBP);
  /* 11983c42 pop ebp */
  EBP = (pop32());
  /* 11983c43 ret  */
  ESPCHK(0x11983bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013c50 @ 0x11983c50 (287 bytes, 86 insns) */
void f_11983c50(void) {
  FTRACE(0x11983c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11983c50 push ebp */
  push32((uint32_t)(EBP));
  /* 11983c51 mov ebp, esp */
  EBP = (ESP);
  /* 11983c53 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11983c56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11983c59 push eax */
  push32((uint32_t)(EAX));
  /* 11983c5a call 0x11984200 */
  push32(0x11983c5fu); f_11984200();
  /* 11983c5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11983c62 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11983c65 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11983c67 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11983c6a push ecx */
  push32((uint32_t)(ECX));
  /* 11983c6b mov edx, dword ptr [0x119a3ae8] */
  EDX = (r32((uint32_t)(0x119a3ae8)));
  /* 11983c71 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11983c73 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11983c75 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 11983c7b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11983c81 push edx */
  push32((uint32_t)(EDX));
  /* 11983c82 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11983c85 push eax */
  push32((uint32_t)(EAX));
  /* 11983c86 call dword ptr [0x119a3afc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a3afc))), 0x11983c8cu);
  /* 11983c8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11983c8e jne 0x11983ca4 */
  if (!C.zf) goto L_11983ca4;
  /* 11983c90 mov dword ptr [0x119a3af4], 0 */
  w32((uint32_t)(0x119a3af4), (0x0u));
  /* 11983c9a mov eax, 1 */
  EAX = (0x1u);
  /* 11983c9f jmp 0x11983d69 */
  goto L_11983d69;
L_11983ca4:;
  /* 11983ca4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11983ca7 push ecx */
  push32((uint32_t)(ECX));
  /* 11983ca8 mov edx, dword ptr [0x119a3aec] */
  EDX = (r32((uint32_t)(0x119a3aec)));
  /* 11983cae push edx */
  push32((uint32_t)(EDX));
  /* 11983caf call 0x11985e40 */
  push32(0x11983cb4u); f_11985e40();
  /* 11983cb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11983cb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11983cb9 jne 0x11983cf9 */
  if (!C.zf) goto L_11983cf9;
  /* 11983cbb cmp dword ptr [0x119a3ae8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3ae8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11983cc2 jne 0x11983cd6 */
  if (!C.zf) goto L_11983cd6;
  /* 11983cc4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11983cc6 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11983cc9 push eax */
  push32((uint32_t)(EAX));
  /* 11983cca call 0x11983f90 */
  push32(0x11983ccfu); f_11983f90();
  /* 11983ccf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11983cd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11983cd4 je 0x11983cf7 */
  if (C.zf) goto L_11983cf7;
L_11983cd6:;
  /* 11983cd6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11983cd9 mov dword ptr [0x119a3af8], ecx */
  w32((uint32_t)(0x119a3af8), (ECX));
  /* 11983cdf mov edx, dword ptr [0x119a3af8] */
  EDX = (r32((uint32_t)(0x119a3af8)));
  /* 11983ce5 mov dword ptr [0x119a3adc], edx */
  w32((uint32_t)(0x119a3adc), (EDX));
  /* 11983ceb mov eax, dword ptr [0x119a3af4] */
  EAX = (r32((uint32_t)(0x119a3af4)));
  /* 11983cf0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11983cf2 mov dword ptr [0x119a3af4], eax */
  w32((uint32_t)(0x119a3af4), (EAX));
L_11983cf7:;
  /* 11983cf7 jmp 0x11983d5c */
  goto L_11983d5c;
L_11983cf9:;
  /* 11983cf9 cmp dword ptr [0x119a3ae8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3ae8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11983d00 jne 0x11983d5c */
  if (!C.zf) goto L_11983d5c;
  /* 11983d02 cmp dword ptr [0x119a3ae4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119a3ae4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11983d09 je 0x11983d5c */
  if (C.zf) goto L_11983d5c;
  /* 11983d0b mov ecx, dword ptr [0x119a3ae4] */
  ECX = (r32((uint32_t)(0x119a3ae4)));
  /* 11983d11 push ecx */
  push32((uint32_t)(ECX));
  /* 11983d12 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 11983d15 push edx */
  push32((uint32_t)(EDX));
  /* 11983d16 mov eax, dword ptr [0x119a3aec] */
  EAX = (r32((uint32_t)(0x119a3aec)));
  /* 11983d1b push eax */
  push32((uint32_t)(EAX));
  /* 11983d1c call 0x11985f10 */
  push32(0x11983d21u); f_11985f10();
  /* 11983d21 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11983d24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11983d26 jne 0x11983d5c */
  if (!C.zf) goto L_11983d5c;
  /* 11983d28 push 0 */
  push32((uint32_t)(0x0u));
  /* 11983d2a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11983d2d push ecx */
  push32((uint32_t)(ECX));
  /* 11983d2e call 0x11983f90 */
  push32(0x11983d33u); f_11983f90();
  /* 11983d33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11983d36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11983d38 je 0x11983d5c */
  if (C.zf) goto L_11983d5c;
  /* 11983d3a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11983d3d mov dword ptr [0x119a3af8], edx */
  w32((uint32_t)(0x119a3af8), (EDX));
  /* 11983d43 mov eax, dword ptr [0x119a3af8] */
  EAX = (r32((uint32_t)(0x119a3af8)));
  /* 11983d48 mov dword ptr [0x119a3adc], eax */
  w32((uint32_t)(0x119a3adc), (EAX));
  /* 11983d4d mov ecx, dword ptr [0x119a3af4] */
  ECX = (r32((uint32_t)(0x119a3af4)));
  /* 11983d53 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11983d56 mov dword ptr [0x119a3af4], ecx */
  w32((uint32_t)(0x119a3af4), (ECX));
L_11983d5c:;
  /* 11983d5c mov eax, dword ptr [0x119a3af4] */
  EAX = (r32((uint32_t)(0x119a3af4)));
  /* 11983d61 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11983d64 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11983d66 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11983d68 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11983d69:;
  /* 11983d69 mov esp, ebp */
  ESP = (EBP);
  /* 11983d6b pop ebp */
  EBP = (pop32());
  /* 11983d6c ret 4 */
  ESPCHK(0x11983c50u, _esp0);
  ESP += 8; return;
}

/* FUN_10013d70 @ 0x11983d70 (69 bytes, 20 insns) */
void f_11983d70(void) {
  FTRACE(0x11983d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11983d70 push ebp */
  push32((uint32_t)(EBP));
  /* 11983d71 mov ebp, esp */
  EBP = (ESP);
  /* 11983d73 mov eax, dword ptr [0x119a3af0] */
  EAX = (r32((uint32_t)(0x119a3af0)));
  /* 11983d78 push eax */
  push32((uint32_t)(EAX));
  /* 11983d79 call 0x1197a5a0 */
  push32(0x11983d7eu); f_1197a5a0();
  /* 11983d7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11983d81 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11983d83 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11983d86 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11983d89 mov dword ptr [0x119a3ae0], ecx */
  w32((uint32_t)(0x119a3ae0), (ECX));
  /* 11983d8f push 1 */
  push32((uint32_t)(0x1u));
  /* 11983d91 push 0x11983dc0 */
  push32((uint32_t)(0x11983dc0u));
  /* 11983d96 call dword ptr [0x119a62fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a62fc))), 0x11983d9cu);
  /* 11983d9c mov edx, dword ptr [0x119a3af4] */
  EDX = (r32((uint32_t)(0x119a3af4)));
  /* 11983da2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11983da5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11983da7 jne 0x11983db3 */
  if (!C.zf) goto L_11983db3;
  /* 11983da9 mov dword ptr [0x119a3af4], 0 */
  w32((uint32_t)(0x119a3af4), (0x0u));
L_11983db3:;
  /* 11983db3 pop ebp */
  EBP = (pop32());
  /* 11983db4 ret  */
  ESPCHK(0x11983d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10013dc0 @ 0x11983dc0 (172 bytes, 54 insns) */
void f_11983dc0(void) {
  FTRACE(0x11983dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11983dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11983dc1 mov ebp, esp */
  EBP = (ESP);
  /* 11983dc3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11983dc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11983dc9 push eax */
  push32((uint32_t)(EAX));
  /* 11983dca call 0x11984200 */
  push32(0x11983dcfu); f_11984200();
  /* 11983dcf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11983dd2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11983dd5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11983dd7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11983dda push ecx */
  push32((uint32_t)(ECX));
  /* 11983ddb mov edx, dword ptr [0x119a3ae0] */
  EDX = (r32((uint32_t)(0x119a3ae0)));
  /* 11983de1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11983de3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11983de5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 11983deb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11983df1 push edx */
  push32((uint32_t)(EDX));
  /* 11983df2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11983df5 push eax */
  push32((uint32_t)(EAX));
  /* 11983df6 call dword ptr [0x119a3afc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a3afc))), 0x11983dfcu);
  /* 11983dfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11983dfe jne 0x11983e11 */
  if (!C.zf) goto L_11983e11;
  /* 11983e00 mov dword ptr [0x119a3af4], 0 */
  w32((uint32_t)(0x119a3af4), (0x0u));
  /* 11983e0a mov eax, 1 */
  EAX = (0x1u);
  /* 11983e0f jmp 0x11983e66 */
  goto L_11983e66;
L_11983e11:;
  /* 11983e11 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11983e14 push ecx */
  push32((uint32_t)(ECX));
  /* 11983e15 mov edx, dword ptr [0x119a3af0] */
  EDX = (r32((uint32_t)(0x119a3af0)));
  /* 11983e1b push edx */
  push32((uint32_t)(EDX));
  /* 11983e1c call 0x11985e40 */
  push32(0x11983e21u); f_11985e40();
  /* 11983e21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11983e24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11983e26 jne 0x11983e59 */
  if (!C.zf) goto L_11983e59;
  /* 11983e28 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11983e2b push eax */
  push32((uint32_t)(EAX));
  /* 11983e2c call 0x11983f40 */
  push32(0x11983e31u); f_11983f40();
  /* 11983e31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11983e34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11983e36 je 0x11983e59 */
  if (C.zf) goto L_11983e59;
  /* 11983e38 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11983e3b mov dword ptr [0x119a3af8], ecx */
  w32((uint32_t)(0x119a3af8), (ECX));
  /* 11983e41 mov edx, dword ptr [0x119a3af8] */
  EDX = (r32((uint32_t)(0x119a3af8)));
  /* 11983e47 mov dword ptr [0x119a3adc], edx */
  w32((uint32_t)(0x119a3adc), (EDX));
  /* 11983e4d mov eax, dword ptr [0x119a3af4] */
  EAX = (r32((uint32_t)(0x119a3af4)));
  /* 11983e52 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11983e54 mov dword ptr [0x119a3af4], eax */
  w32((uint32_t)(0x119a3af4), (EAX));
L_11983e59:;
  /* 11983e59 mov eax, dword ptr [0x119a3af4] */
  EAX = (r32((uint32_t)(0x119a3af4)));
  /* 11983e5e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11983e61 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11983e63 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11983e65 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11983e66:;
  /* 11983e66 mov esp, ebp */
  ESP = (EBP);
  /* 11983e68 pop ebp */
  EBP = (pop32());
  /* 11983e69 ret 4 */
  ESPCHK(0x11983dc0u, _esp0);
  ESP += 8; return;
}

/* FUN_10013e70 @ 0x11983e70 (43 bytes, 11 insns) */
void f_11983e70(void) {
  FTRACE(0x11983e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11983e70 push ebp */
  push32((uint32_t)(EBP));
  /* 11983e71 mov ebp, esp */
  EBP = (ESP);
  /* 11983e73 mov eax, dword ptr [0x119a3af4] */
  EAX = (r32((uint32_t)(0x119a3af4)));
  /* 11983e78 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 11983e7d mov dword ptr [0x119a3af4], eax */
  w32((uint32_t)(0x119a3af4), (EAX));
  /* 11983e82 call dword ptr [0x119a62ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a62ec))), 0x11983e88u);
  /* 11983e88 mov dword ptr [0x119a3af8], eax */
  w32((uint32_t)(0x119a3af8), (EAX));
  /* 11983e8d mov ecx, dword ptr [0x119a3af8] */
  ECX = (r32((uint32_t)(0x119a3af8)));
  /* 11983e93 mov dword ptr [0x119a3adc], ecx */
  w32((uint32_t)(0x119a3adc), (ECX));
  /* 11983e99 pop ebp */
  EBP = (pop32());
  /* 11983e9a ret  */
  ESPCHK(0x11983e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ea0 @ 0x11983ea0 (155 bytes, 57 insns) */
void f_11983ea0(void) {
  FTRACE(0x11983ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11983ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 11983ea1 mov ebp, esp */
  EBP = (ESP);
  /* 11983ea3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11983ea6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11983eaa je 0x11983ecb */
  if (C.zf) goto L_11983ecb;
  /* 11983eac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11983eaf movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11983eb2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11983eb4 je 0x11983ecb */
  if (C.zf) goto L_11983ecb;
  /* 11983eb6 push 0x119a03cc */
  push32((uint32_t)(0x119a03ccu));
  /* 11983ebb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11983ebe push edx */
  push32((uint32_t)(EDX));
  /* 11983ebf call 0x11983400 */
  push32(0x11983ec4u); f_11983400();
  /* 11983ec4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11983ec7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11983ec9 jne 0x11983ef3 */
  if (!C.zf) goto L_11983ef3;
L_11983ecb:;
  /* 11983ecb push 8 */
  push32((uint32_t)(0x8u));
  /* 11983ecd lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11983ed0 push eax */
  push32((uint32_t)(EAX));
  /* 11983ed1 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11983ed6 mov ecx, dword ptr [0x119a3af8] */
  ECX = (r32((uint32_t)(0x119a3af8)));
  /* 11983edc push ecx */
  push32((uint32_t)(ECX));
  /* 11983edd call dword ptr [0x119a3afc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a3afc))), 0x11983ee3u);
  /* 11983ee3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11983ee5 jne 0x11983eeb */
  if (!C.zf) goto L_11983eeb;
  /* 11983ee7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11983ee9 jmp 0x11983f37 */
  goto L_11983f37;
L_11983eeb:;
  /* 11983eeb lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 11983eee mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11983ef1 jmp 0x11983f2b */
  goto L_11983f2b;
L_11983ef3:;
  /* 11983ef3 push 0x119a03c8 */
  push32((uint32_t)(0x119a03c8u));
  /* 11983ef8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11983efb push eax */
  push32((uint32_t)(EAX));
  /* 11983efc call 0x11983400 */
  push32(0x11983f01u); f_11983400();
  /* 11983f01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11983f04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11983f06 jne 0x11983f2b */
  if (!C.zf) goto L_11983f2b;
  /* 11983f08 push 8 */
  push32((uint32_t)(0x8u));
  /* 11983f0a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11983f0d push ecx */
  push32((uint32_t)(ECX));
  /* 11983f0e push 0xb */
  push32((uint32_t)(0xbu));
  /* 11983f10 mov edx, dword ptr [0x119a3af8] */
  EDX = (r32((uint32_t)(0x119a3af8)));
  /* 11983f16 push edx */
  push32((uint32_t)(EDX));
  /* 11983f17 call dword ptr [0x119a3afc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a3afc))), 0x11983f1du);
  /* 11983f1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11983f1f jne 0x11983f25 */
  if (!C.zf) goto L_11983f25;
  /* 11983f21 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11983f23 jmp 0x11983f37 */
  goto L_11983f37;
L_11983f25:;
  /* 11983f25 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11983f28 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11983f2b:;
  /* 11983f2b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11983f2e push ecx */
  push32((uint32_t)(ECX));
  /* 11983f2f call 0x11986020 */
  push32(0x11983f34u); f_11986020();
  /* 11983f34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11983f37:;
  /* 11983f37 mov esp, ebp */
  ESP = (EBP);
  /* 11983f39 pop ebp */
  EBP = (pop32());
  /* 11983f3a ret  */
  ESPCHK(0x11983ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013f40 @ 0x11983f40 (79 bytes, 26 insns) */
void f_11983f40(void) {
  FTRACE(0x11983f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11983f40 push ebp */
  push32((uint32_t)(EBP));
  /* 11983f41 mov ebp, esp */
  EBP = (ESP);
  /* 11983f43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11983f46 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 11983f4a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11983f4e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11983f55 jmp 0x11983f60 */
  goto L_11983f60;
L_11983f57:;
  /* 11983f57 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11983f5a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11983f5d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11983f60:;
  /* 11983f60 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11983f64 jae 0x11983f86 */
  if (!C.cf) goto L_11983f86;
  /* 11983f66 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11983f69 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11983f6f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11983f72 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11983f74 mov cx, word ptr [eax*2 + 0x119a29c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x119a29c4)));
  /* 11983f7c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11983f7e jne 0x11983f84 */
  if (!C.zf) goto L_11983f84;
  /* 11983f80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11983f82 jmp 0x11983f8b */
  goto L_11983f8b;
L_11983f84:;
  /* 11983f84 jmp 0x11983f57 */
  goto L_11983f57;
L_11983f86:;
  /* 11983f86 mov eax, 1 */
  EAX = (0x1u);
L_11983f8b:;
  /* 11983f8b mov esp, ebp */
  ESP = (EBP);
  /* 11983f8d pop ebp */
  EBP = (pop32());
  /* 11983f8e ret  */
  ESPCHK(0x11983f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10013f90 @ 0x11983f90 (135 bytes, 48 insns) */
void f_11983f90(void) {
  FTRACE(0x11983f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11983f90 push ebp */
  push32((uint32_t)(EBP));
  /* 11983f91 mov ebp, esp */
  EBP = (ESP);
  /* 11983f93 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11983f96 push esi */
  push32((uint32_t)(ESI));
  /* 11983f97 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11983f9a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11983f9f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 11983fa4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11983fa9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 11983fac and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11983fb1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11983fb4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11983fb6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 11983fb9 push ecx */
  push32((uint32_t)(ECX));
  /* 11983fba push 1 */
  push32((uint32_t)(0x1u));
  /* 11983fbc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11983fbf push edx */
  push32((uint32_t)(EDX));
  /* 11983fc0 call dword ptr [0x119a3afc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a3afc))), 0x11983fc6u);
  /* 11983fc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11983fc8 jne 0x11983fce */
  if (!C.zf) goto L_11983fce;
  /* 11983fca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11983fcc jmp 0x11984012 */
  goto L_11984012;
L_11983fce:;
  /* 11983fce lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 11983fd1 push eax */
  push32((uint32_t)(EAX));
  /* 11983fd2 call 0x11984200 */
  push32(0x11983fd7u); f_11984200();
  /* 11983fd7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11983fda cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11983fdd je 0x1198400d */
  if (C.zf) goto L_1198400d;
  /* 11983fdf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11983fe3 je 0x1198400d */
  if (C.zf) goto L_1198400d;
  /* 11983fe5 mov ecx, dword ptr [0x119a3aec] */
  ECX = (r32((uint32_t)(0x119a3aec)));
  /* 11983feb push ecx */
  push32((uint32_t)(ECX));
  /* 11983fec call 0x11984280 */
  push32(0x11983ff1u); f_11984280();
  /* 11983ff1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11983ff4 mov esi, eax */
  ESI = (EAX);
  /* 11983ff6 mov edx, dword ptr [0x119a3aec] */
  EDX = (r32((uint32_t)(0x119a3aec)));
  /* 11983ffc push edx */
  push32((uint32_t)(EDX));
  /* 11983ffd call 0x1197a5a0 */
  push32(0x11984002u); f_1197a5a0();
  /* 11984002 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984005 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11984007 jne 0x1198400d */
  if (!C.zf) goto L_1198400d;
  /* 11984009 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1198400b jmp 0x11984012 */
  goto L_11984012;
L_1198400d:;
  /* 1198400d mov eax, 1 */
  EAX = (0x1u);
L_11984012:;
  /* 11984012 pop esi */
  ESI = (pop32());
  /* 11984013 mov esp, ebp */
  ESP = (EBP);
  /* 11984015 pop ebp */
  EBP = (pop32());
  /* 11984016 ret  */
  ESPCHK(0x11983f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10014020 @ 0x11984020 (77 bytes, 18 insns) */
void f_11984020(void) {
  FTRACE(0x11984020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11984020 push ebp */
  push32((uint32_t)(EBP));
  /* 11984021 mov ebp, esp */
  EBP = (ESP);
  /* 11984023 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11984029 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 11984033 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 11984039 push eax */
  push32((uint32_t)(EAX));
  /* 1198403a call dword ptr [0x119a62e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a62e8))), 0x11984040u);
  /* 11984040 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11984042 je 0x11984059 */
  if (C.zf) goto L_11984059;
  /* 11984044 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198404b jne 0x11984059 */
  if (!C.zf) goto L_11984059;
  /* 1198404d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 11984057 jmp 0x11984063 */
  goto L_11984063;
L_11984059:;
  /* 11984059 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_11984063:;
  /* 11984063 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11984069 mov esp, ebp */
  ESP = (EBP);
  /* 1198406b pop ebp */
  EBP = (pop32());
  /* 1198406c ret  */
  ESPCHK(0x11984020u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x11984070 (388 bytes, 118 insns) */
void f_11984070(void) {
  FTRACE(0x11984070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11984070 push ebp */
  push32((uint32_t)(EBP));
  /* 11984071 mov ebp, esp */
  EBP = (ESP);
  /* 11984073 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11984076 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1198407d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 11984084 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1198408b:;
  /* 1198408b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1198408e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11984091 jg 0x119841d8 */
  if ((!C.zf&&C.sf==C.of)) goto L_119841d8;
  /* 11984097 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1198409a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198409d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1198409e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119840a0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 119840a2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119840a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119840a8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119840ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119840ae cmp edx, dword ptr [ecx + 0x119a2520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x119a2520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119840b4 jne 0x119841ae */
  if (!C.zf) goto L_119841ae;
  /* 119840ba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119840bd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 119840c0 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119840c4 ja 0x119840e7 */
  if ((!C.cf&&!C.zf)) goto L_119840e7;
  /* 119840c6 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119840ca je 0x11984159 */
  if (C.zf) goto L_11984159;
  /* 119840d0 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119840d4 je 0x11984104 */
  if (C.zf) goto L_11984104;
  /* 119840d6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119840da je 0x11984126 */
  if (C.zf) goto L_11984126;
  /* 119840dc cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119840e0 je 0x11984148 */
  if (C.zf) goto L_11984148;
  /* 119840e2 jmp 0x11984178 */
  goto L_11984178;
L_119840e7:;
  /* 119840e7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119840ee je 0x11984115 */
  if (C.zf) goto L_11984115;
  /* 119840f0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119840f7 je 0x11984137 */
  if (C.zf) goto L_11984137;
  /* 119840f9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11984100 je 0x1198416a */
  if (C.zf) goto L_1198416a;
  /* 11984102 jmp 0x11984178 */
  goto L_11984178;
L_11984104:;
  /* 11984104 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11984107 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1198410a add ecx, 0x119a2524 */
  { uint32_t _a=(ECX),_b=(0x119a2524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11984110 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11984113 jmp 0x11984178 */
  goto L_11984178;
L_11984115:;
  /* 11984115 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11984118 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1198411b mov eax, dword ptr [edx + 0x119a252c] */
  EAX = (r32((uint32_t)(EDX + 0x119a252c)));
  /* 11984121 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11984124 jmp 0x11984178 */
  goto L_11984178;
L_11984126:;
  /* 11984126 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11984129 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1198412c add ecx, 0x119a2530 */
  { uint32_t _a=(ECX),_b=(0x119a2530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11984132 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11984135 jmp 0x11984178 */
  goto L_11984178;
L_11984137:;
  /* 11984137 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1198413a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1198413d mov eax, dword ptr [edx + 0x119a2534] */
  EAX = (r32((uint32_t)(EDX + 0x119a2534)));
  /* 11984143 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11984146 jmp 0x11984178 */
  goto L_11984178;
L_11984148:;
  /* 11984148 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1198414b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1198414e add ecx, 0x119a2538 */
  { uint32_t _a=(ECX),_b=(0x119a2538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11984154 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11984157 jmp 0x11984178 */
  goto L_11984178;
L_11984159:;
  /* 11984159 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1198415c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1198415f add edx, 0x119a253c */
  { uint32_t _a=(EDX),_b=(0x119a253cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11984165 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11984168 jmp 0x11984178 */
  goto L_11984178;
L_1198416a:;
  /* 1198416a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1198416d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11984170 add eax, 0x119a2544 */
  { uint32_t _a=(EAX),_b=(0x119a2544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11984175 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11984178:;
  /* 11984178 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198417c je 0x11984184 */
  if (C.zf) goto L_11984184;
  /* 1198417e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11984182 jge 0x11984186 */
  if ((C.sf==C.of)) goto L_11984186;
L_11984184:;
  /* 11984184 jmp 0x119841d8 */
  goto L_119841d8;
L_11984186:;
  /* 11984186 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11984189 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1198418c push ecx */
  push32((uint32_t)(ECX));
  /* 1198418d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11984190 push edx */
  push32((uint32_t)(EDX));
  /* 11984191 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11984194 push eax */
  push32((uint32_t)(EAX));
  /* 11984195 call 0x1197af90 */
  push32(0x1198419au); f_1197af90();
  /* 1198419a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198419d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119841a0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119841a3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 119841a7 mov eax, 1 */
  EAX = (0x1u);
  /* 119841ac jmp 0x119841ee */
  goto L_119841ee;
L_119841ae:;
  /* 119841ae mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119841b1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119841b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119841b7 cmp eax, dword ptr [edx + 0x119a2520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x119a2520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119841bd jae 0x119841ca */
  if (!C.cf) goto L_119841ca;
  /* 119841bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119841c2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119841c5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119841c8 jmp 0x119841d3 */
  goto L_119841d3;
L_119841ca:;
  /* 119841ca mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119841cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119841d0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_119841d3:;
  /* 119841d3 jmp 0x1198408b */
  goto L_1198408b;
L_119841d8:;
  /* 119841d8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119841db push eax */
  push32((uint32_t)(EAX));
  /* 119841dc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119841df push ecx */
  push32((uint32_t)(ECX));
  /* 119841e0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119841e3 push edx */
  push32((uint32_t)(EDX));
  /* 119841e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119841e7 push eax */
  push32((uint32_t)(EAX));
  /* 119841e8 call dword ptr [0x119a62f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a62f4))), 0x119841eeu);
L_119841ee:;
  /* 119841ee mov esp, ebp */
  ESP = (EBP);
  /* 119841f0 pop ebp */
  EBP = (pop32());
  /* 119841f1 ret 0x10 */
  ESPCHK(0x11984070u, _esp0);
  ESP += 20; return;
}

/* FUN_10014200 @ 0x11984200 (118 bytes, 42 insns) */
void f_11984200(void) {
  FTRACE(0x11984200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11984200 push ebp */
  push32((uint32_t)(EBP));
  /* 11984201 mov ebp, esp */
  EBP = (ESP);
  /* 11984203 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11984206 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1198420d:;
  /* 1198420d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11984210 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11984212 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11984215 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11984219 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198421c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198421f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11984222 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11984224 je 0x1198426f */
  if (C.zf) goto L_1198426f;
  /* 11984226 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1198422a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198422d jl 0x11984242 */
  if ((C.sf!=C.of)) goto L_11984242;
  /* 1198422f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11984233 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11984236 jg 0x11984242 */
  if ((!C.zf&&C.sf==C.of)) goto L_11984242;
  /* 11984238 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1198423b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1198423d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11984240 jmp 0x1198425c */
  goto L_1198425c;
L_11984242:;
  /* 11984242 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11984246 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11984249 jl 0x1198425c */
  if ((C.sf!=C.of)) goto L_1198425c;
  /* 1198424b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1198424f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11984252 jg 0x1198425c */
  if ((!C.zf&&C.sf==C.of)) goto L_1198425c;
  /* 11984254 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11984257 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11984259 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_1198425c:;
  /* 1198425c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1198425f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11984262 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11984266 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1198426a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1198426d jmp 0x1198420d */
  goto L_1198420d;
L_1198426f:;
  /* 1198426f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11984272 mov esp, ebp */
  ESP = (EBP);
  /* 11984274 pop ebp */
  EBP = (pop32());
  /* 11984275 ret  */
  ESPCHK(0x11984200u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x11984280 (101 bytes, 36 insns) */
void f_11984280(void) {
  FTRACE(0x11984280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11984280 push ebp */
  push32((uint32_t)(EBP));
  /* 11984281 mov ebp, esp */
  EBP = (ESP);
  /* 11984283 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11984286 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1198428d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11984290 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11984292 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11984295 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11984298 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198429b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_1198429e:;
  /* 1198429e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 119842a2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119842a5 jl 0x119842b0 */
  if ((C.sf!=C.of)) goto L_119842b0;
  /* 119842a7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 119842ab cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119842ae jle 0x119842c2 */
  if ((C.zf||C.sf!=C.of)) goto L_119842c2;
L_119842b0:;
  /* 119842b0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 119842b4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119842b7 jl 0x119842de */
  if ((C.sf!=C.of)) goto L_119842de;
  /* 119842b9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 119842bd cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119842c0 jg 0x119842de */
  if ((!C.zf&&C.sf==C.of)) goto L_119842de;
L_119842c2:;
  /* 119842c2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119842c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119842c8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119842cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119842ce mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119842d0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 119842d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119842d6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119842d9 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 119842dc jmp 0x1198429e */
  goto L_1198429e;
L_119842de:;
  /* 119842de mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119842e1 mov esp, ebp */
  ESP = (EBP);
  /* 119842e3 pop ebp */
  EBP = (pop32());
  /* 119842e4 ret  */
  ESPCHK(0x11984280u, _esp0);
  ESP += 4; return;
}

/* FUN_100142f0 @ 0x119842f0 (122 bytes, 39 insns) */
void f_119842f0(void) {
  FTRACE(0x119842f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119842f0 push ebp */
  push32((uint32_t)(EBP));
  /* 119842f1 mov ebp, esp */
  EBP = (ESP);
  /* 119842f3 push ecx */
  push32((uint32_t)(ECX));
  /* 119842f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119842f7 cmp eax, dword ptr [0x119a537c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119a537c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119842fd jae 0x11984321 */
  if (!C.cf) goto L_11984321;
  /* 119842ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11984302 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11984305 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11984308 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1198430b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1198430e mov eax, dword ptr [ecx*4 + 0x119a5240] */
  EAX = (r32((uint32_t)(ECX*4 + 0x119a5240)));
  /* 11984315 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1198431a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1198431d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1198431f jne 0x1198433c */
  if (!C.zf) goto L_1198433c;
L_11984321:;
  /* 11984321 call 0x1197f640 */
  push32(0x11984326u); f_1197f640();
  /* 11984326 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1198432c call 0x1197f650 */
  push32(0x11984331u); f_1197f650();
  /* 11984331 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11984337 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1198433a jmp 0x11984366 */
  goto L_11984366;
L_1198433c:;
  /* 1198433c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198433f push edx */
  push32((uint32_t)(EDX));
  /* 11984340 call 0x11980e60 */
  push32(0x11984345u); f_11980e60();
  /* 11984345 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984348 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198434b push eax */
  push32((uint32_t)(EAX));
  /* 1198434c call 0x11984370 */
  push32(0x11984351u); f_11984370();
  /* 11984351 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984354 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11984357 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198435a push ecx */
  push32((uint32_t)(ECX));
  /* 1198435b call 0x11980ef0 */
  push32(0x11984360u); f_11980ef0();
  /* 11984360 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984363 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11984366:;
  /* 11984366 mov esp, ebp */
  ESP = (EBP);
  /* 11984368 pop ebp */
  EBP = (pop32());
  /* 11984369 ret  */
  ESPCHK(0x119842f0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x11984370 (170 bytes, 59 insns) */
void f_11984370(void) {
  FTRACE(0x11984370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11984370 push ebp */
  push32((uint32_t)(EBP));
  /* 11984371 mov ebp, esp */
  EBP = (ESP);
  /* 11984373 push ecx */
  push32((uint32_t)(ECX));
  /* 11984374 push esi */
  push32((uint32_t)(ESI));
  /* 11984375 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11984378 push eax */
  push32((uint32_t)(EAX));
  /* 11984379 call 0x11980ce0 */
  push32(0x1198437eu); f_11980ce0();
  /* 1198437e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984381 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11984384 je 0x119843c3 */
  if (C.zf) goto L_119843c3;
  /* 11984386 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198438a je 0x11984392 */
  if (C.zf) goto L_11984392;
  /* 1198438c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11984390 jne 0x119843ac */
  if (!C.zf) goto L_119843ac;
L_11984392:;
  /* 11984392 push 1 */
  push32((uint32_t)(0x1u));
  /* 11984394 call 0x11980ce0 */
  push32(0x11984399u); f_11980ce0();
  /* 11984399 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198439c mov esi, eax */
  ESI = (EAX);
  /* 1198439e push 2 */
  push32((uint32_t)(0x2u));
  /* 119843a0 call 0x11980ce0 */
  push32(0x119843a5u); f_11980ce0();
  /* 119843a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119843a8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119843aa je 0x119843c3 */
  if (C.zf) goto L_119843c3;
L_119843ac:;
  /* 119843ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119843af push ecx */
  push32((uint32_t)(ECX));
  /* 119843b0 call 0x11980ce0 */
  push32(0x119843b5u); f_11980ce0();
  /* 119843b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119843b8 push eax */
  push32((uint32_t)(EAX));
  /* 119843b9 call dword ptr [0x119a62f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a62f0))), 0x119843bfu);
  /* 119843bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119843c1 je 0x119843cc */
  if (C.zf) goto L_119843cc;
L_119843c3:;
  /* 119843c3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119843ca jmp 0x119843d5 */
  goto L_119843d5;
L_119843cc:;
  /* 119843cc call dword ptr [0x119a63d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119a63d8))), 0x119843d2u);
  /* 119843d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119843d5:;
  /* 119843d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119843d8 push edx */
  push32((uint32_t)(EDX));
  /* 119843d9 call 0x11980c00 */
  push32(0x119843deu); f_11980c00();
  /* 119843de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119843e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119843e4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 119843e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119843ea and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 119843ed imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119843f0 mov edx, dword ptr [eax*4 + 0x119a5240] */
  EDX = (r32((uint32_t)(EAX*4 + 0x119a5240)));
  /* 119843f7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 119843fc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11984400 je 0x11984413 */
  if (C.zf) goto L_11984413;
  /* 11984402 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11984405 push eax */
  push32((uint32_t)(EAX));
  /* 11984406 call 0x1197f5a0 */
  push32(0x1198440bu); f_1197f5a0();
  /* 1198440b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198440e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11984411 jmp 0x11984415 */
  goto L_11984415;
L_11984413:;
  /* 11984413 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11984415:;
  /* 11984415 pop esi */
  ESI = (pop32());
  /* 11984416 mov esp, ebp */
  ESP = (EBP);
  /* 11984418 pop ebp */
  EBP = (pop32());
  /* 11984419 ret  */
  ESPCHK(0x11984370u, _esp0);
  ESP += 4; return;
}

/* FUN_10014420 @ 0x11984420 (146 bytes, 52 insns) */
void f_11984420(void) {
  FTRACE(0x11984420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11984420 push ebp */
  push32((uint32_t)(EBP));
  /* 11984421 mov ebp, esp */
  EBP = (ESP);
  /* 11984423 push ebx */
  push32((uint32_t)(EBX));
  /* 11984424 push esi */
  push32((uint32_t)(ESI));
  /* 11984425 push edi */
  push32((uint32_t)(EDI));
L_11984426:;
  /* 11984426 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198442a jne 0x1198444a */
  if (!C.zf) goto L_1198444a;
  /* 1198442c push 0x1199fd08 */
  push32((uint32_t)(0x1199fd08u));
  /* 11984431 push 0 */
  push32((uint32_t)(0x0u));
  /* 11984433 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11984435 push 0x119a03d0 */
  push32((uint32_t)(0x119a03d0u));
  /* 1198443a push 2 */
  push32((uint32_t)(0x2u));
  /* 1198443c call 0x11976830 */
  push32(0x11984441u); f_11976830();
  /* 11984441 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984444 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11984447 jne 0x1198444a */
  if (!C.zf) goto L_1198444a;
  /* 11984449 int3  */
  x86_unimpl("int3 @ 0x11984449");
L_1198444a:;
  /* 1198444a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1198444c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1198444e jne 0x11984426 */
  if (!C.zf) goto L_11984426;
  /* 11984450 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11984453 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11984456 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 1198445c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1198445e je 0x119844ad */
  if (C.zf) goto L_119844ad;
  /* 11984460 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11984463 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11984466 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11984469 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1198446b je 0x119844ad */
  if (C.zf) goto L_119844ad;
  /* 1198446d push 2 */
  push32((uint32_t)(0x2u));
  /* 1198446f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11984472 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11984475 push eax */
  push32((uint32_t)(EAX));
  /* 11984476 call 0x11978200 */
  push32(0x1198447bu); f_11978200();
  /* 1198447b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198447e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11984481 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11984484 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 1198448a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198448d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11984490 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11984493 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11984499 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1198449c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 119844a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119844a6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_119844ad:;
  /* 119844ad pop edi */
  EDI = (pop32());
  /* 119844ae pop esi */
  ESI = (pop32());
  /* 119844af pop ebx */
  EBX = (pop32());
  /* 119844b0 pop ebp */
  EBP = (pop32());
  /* 119844b1 ret  */
  ESPCHK(0x11984420u, _esp0);
  ESP += 4; return;
}

/* FUN_100144c0 @ 0x119844c0 (289 bytes, 97 insns) */
void f_119844c0(void) {
  FTRACE(0x119844c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119844c0 push ebp */
  push32((uint32_t)(EBP));
  /* 119844c1 mov ebp, esp */
  EBP = (ESP);
  /* 119844c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119844c6 push esi */
  push32((uint32_t)(ESI));
  /* 119844c7 mov eax, dword ptr [0x119a2c98] */
  EAX = (r32((uint32_t)(0x119a2c98)));
  /* 119844cc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119844cf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 119844d6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 119844dd jmp 0x119844e8 */
  goto L_119844e8;
L_119844df:;
  /* 119844df mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119844e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119844e5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_119844e8:;
  /* 119844e8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119844ec jae 0x11984521 */
  if (!C.cf) goto L_11984521;
  /* 119844ee mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119844f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119844f4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 119844f7 push ecx */
  push32((uint32_t)(ECX));
  /* 119844f8 call 0x1197a5a0 */
  push32(0x119844fdu); f_1197a5a0();
  /* 119844fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984500 mov esi, eax */
  ESI = (EAX);
  /* 11984502 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11984505 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11984508 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1198450c push ecx */
  push32((uint32_t)(ECX));
  /* 1198450d call 0x1197a5a0 */
  push32(0x11984512u); f_1197a5a0();
  /* 11984512 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984515 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11984518 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1198451c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1198451f jmp 0x119844df */
  goto L_119844df;
L_11984521:;
  /* 11984521 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11984524 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11984527 push eax */
  push32((uint32_t)(EAX));
  /* 11984528 call 0x11977750 */
  push32(0x1198452du); f_11977750();
  /* 1198452d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984530 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11984533 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11984537 je 0x119845d9 */
  if (C.zf) goto L_119845d9;
  /* 1198453d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11984540 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11984543 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1198454a jmp 0x11984555 */
  goto L_11984555;
L_1198454c:;
  /* 1198454c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1198454f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11984552 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11984555:;
  /* 11984555 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11984559 jae 0x119845ca */
  if (!C.cf) goto L_119845ca;
  /* 1198455b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1198455e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11984561 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11984564 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11984567 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1198456a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1198456d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11984570 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11984573 push ecx */
  push32((uint32_t)(ECX));
  /* 11984574 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11984577 push edx */
  push32((uint32_t)(EDX));
  /* 11984578 call 0x1197a720 */
  push32(0x1198457du); f_1197a720();
  /* 1198457d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984580 push eax */
  push32((uint32_t)(EAX));
  /* 11984581 call 0x1197a5a0 */
  push32(0x11984586u); f_1197a5a0();
  /* 11984586 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984589 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1198458c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198458e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11984591 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11984594 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11984597 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1198459a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198459d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 119845a0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119845a3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119845a6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 119845aa push eax */
  push32((uint32_t)(EAX));
  /* 119845ab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119845ae push ecx */
  push32((uint32_t)(ECX));
  /* 119845af call 0x1197a720 */
  push32(0x119845b4u); f_1197a720();
  /* 119845b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119845b7 push eax */
  push32((uint32_t)(EAX));
  /* 119845b8 call 0x1197a5a0 */
  push32(0x119845bdu); f_1197a5a0();
  /* 119845bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119845c0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119845c3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119845c5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 119845c8 jmp 0x1198454c */
  goto L_1198454c;
L_119845ca:;
  /* 119845ca mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 119845cd mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 119845d0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119845d3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119845d6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_119845d9:;
  /* 119845d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119845dc pop esi */
  ESI = (pop32());
  /* 119845dd mov esp, ebp */
  ESP = (EBP);
  /* 119845df pop ebp */
  EBP = (pop32());
  /* 119845e0 ret  */
  ESPCHK(0x119844c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100145f0 @ 0x119845f0 (291 bytes, 97 insns) */
void f_119845f0(void) {
  FTRACE(0x119845f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119845f0 push ebp */
  push32((uint32_t)(EBP));
  /* 119845f1 mov ebp, esp */
  EBP = (ESP);
  /* 119845f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119845f6 push esi */
  push32((uint32_t)(ESI));
  /* 119845f7 mov eax, dword ptr [0x119a2c98] */
  EAX = (r32((uint32_t)(0x119a2c98)));
  /* 119845fc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119845ff mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11984606 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1198460d jmp 0x11984618 */
  goto L_11984618;
L_1198460f:;
  /* 1198460f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11984612 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11984615 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11984618:;
  /* 11984618 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198461c jae 0x11984652 */
  if (!C.cf) goto L_11984652;
  /* 1198461e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11984621 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11984624 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11984628 push ecx */
  push32((uint32_t)(ECX));
  /* 11984629 call 0x1197a5a0 */
  push32(0x1198462eu); f_1197a5a0();
  /* 1198462e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984631 mov esi, eax */
  ESI = (EAX);
  /* 11984633 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11984636 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11984639 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 1198463d push ecx */
  push32((uint32_t)(ECX));
  /* 1198463e call 0x1197a5a0 */
  push32(0x11984643u); f_1197a5a0();
  /* 11984643 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984646 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11984649 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1198464d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11984650 jmp 0x1198460f */
  goto L_1198460f;
L_11984652:;
  /* 11984652 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11984655 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11984658 push eax */
  push32((uint32_t)(EAX));
  /* 11984659 call 0x11977750 */
  push32(0x1198465eu); f_11977750();
  /* 1198465e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984661 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11984664 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11984668 je 0x1198470b */
  if (C.zf) goto L_1198470b;
  /* 1198466e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11984671 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11984674 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1198467b jmp 0x11984686 */
  goto L_11984686;
L_1198467d:;
  /* 1198467d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11984680 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11984683 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11984686:;
  /* 11984686 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198468a jae 0x119846fc */
  if (!C.cf) goto L_119846fc;
  /* 1198468c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1198468f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11984692 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11984695 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11984698 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1198469b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1198469e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119846a1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 119846a5 push ecx */
  push32((uint32_t)(ECX));
  /* 119846a6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119846a9 push edx */
  push32((uint32_t)(EDX));
  /* 119846aa call 0x1197a720 */
  push32(0x119846afu); f_1197a720();
  /* 119846af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119846b2 push eax */
  push32((uint32_t)(EAX));
  /* 119846b3 call 0x1197a5a0 */
  push32(0x119846b8u); f_1197a5a0();
  /* 119846b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119846bb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119846be add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119846c0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 119846c3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119846c6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 119846c9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 119846cc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119846cf mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 119846d2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119846d5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119846d8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 119846dc push eax */
  push32((uint32_t)(EAX));
  /* 119846dd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119846e0 push ecx */
  push32((uint32_t)(ECX));
  /* 119846e1 call 0x1197a720 */
  push32(0x119846e6u); f_1197a720();
  /* 119846e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119846e9 push eax */
  push32((uint32_t)(EAX));
  /* 119846ea call 0x1197a5a0 */
  push32(0x119846efu); f_1197a5a0();
  /* 119846ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119846f2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119846f5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119846f7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 119846fa jmp 0x1198467d */
  goto L_1198467d;
L_119846fc:;
  /* 119846fc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 119846ff mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11984702 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11984705 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11984708 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1198470b:;
  /* 1198470b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1198470e pop esi */
  ESI = (pop32());
  /* 1198470f mov esp, ebp */
  ESP = (EBP);
  /* 11984711 pop ebp */
  EBP = (pop32());
  /* 11984712 ret  */
  ESPCHK(0x119845f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014720 @ 0x11984720 (878 bytes, 273 insns) */
void f_11984720(void) {
  FTRACE(0x11984720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11984720 push ebp */
  push32((uint32_t)(EBP));
  /* 11984721 mov ebp, esp */
  EBP = (ESP);
  /* 11984723 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11984726 push esi */
  push32((uint32_t)(ESI));
  /* 11984727 mov eax, dword ptr [0x119a2c98] */
  EAX = (r32((uint32_t)(0x119a2c98)));
  /* 1198472c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1198472f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11984736 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1198473d jmp 0x11984748 */
  goto L_11984748;
L_1198473f:;
  /* 1198473f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11984742 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11984745 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11984748:;
  /* 11984748 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1198474c jae 0x11984781 */
  if (!C.cf) goto L_11984781;
  /* 1198474e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11984751 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11984754 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11984757 push ecx */
  push32((uint32_t)(ECX));
  /* 11984758 call 0x1197a5a0 */
  push32(0x1198475du); f_1197a5a0();
  /* 1198475d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984760 mov esi, eax */
  ESI = (EAX);
  /* 11984762 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11984765 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11984768 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1198476c push ecx */
  push32((uint32_t)(ECX));
  /* 1198476d call 0x1197a5a0 */
  push32(0x11984772u); f_1197a5a0();
  /* 11984772 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984775 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11984778 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1198477c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1198477f jmp 0x1198473f */
  goto L_1198473f;
L_11984781:;
  /* 11984781 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11984788 jmp 0x11984793 */
  goto L_11984793;
L_1198478a:;
  /* 1198478a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1198478d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11984790 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11984793:;
  /* 11984793 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11984797 jae 0x119847cd */
  if (!C.cf) goto L_119847cd;
  /* 11984799 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1198479c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1198479f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 119847a3 push eax */
  push32((uint32_t)(EAX));
  /* 119847a4 call 0x1197a5a0 */
  push32(0x119847a9u); f_1197a5a0();
  /* 119847a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119847ac mov esi, eax */
  ESI = (EAX);
  /* 119847ae mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119847b1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119847b4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 119847b8 push eax */
  push32((uint32_t)(EAX));
  /* 119847b9 call 0x1197a5a0 */
  push32(0x119847beu); f_1197a5a0();
  /* 119847be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119847c1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119847c4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 119847c8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119847cb jmp 0x1198478a */
  goto L_1198478a;
L_119847cd:;
  /* 119847cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119847d0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 119847d6 push eax */
  push32((uint32_t)(EAX));
  /* 119847d7 call 0x1197a5a0 */
  push32(0x119847dcu); f_1197a5a0();
  /* 119847dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119847df mov esi, eax */
  ESI = (EAX);
  /* 119847e1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119847e4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 119847ea push edx */
  push32((uint32_t)(EDX));
  /* 119847eb call 0x1197a5a0 */
  push32(0x119847f0u); f_1197a5a0();
  /* 119847f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119847f3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119847f6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 119847fa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119847fd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11984800 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11984806 push edx */
  push32((uint32_t)(EDX));
  /* 11984807 call 0x1197a5a0 */
  push32(0x1198480cu); f_1197a5a0();
  /* 1198480c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198480f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11984812 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11984816 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11984819 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1198481c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 11984822 push ecx */
  push32((uint32_t)(ECX));
  /* 11984823 call 0x1197a5a0 */
  push32(0x11984828u); f_1197a5a0();
  /* 11984828 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198482b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1198482e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11984832 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11984835 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11984838 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1198483e push edx */
  push32((uint32_t)(EDX));
  /* 1198483f call 0x1197a5a0 */
  push32(0x11984844u); f_1197a5a0();
  /* 11984844 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984847 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1198484a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1198484e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11984851 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11984854 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11984859 push eax */
  push32((uint32_t)(EAX));
  /* 1198485a call 0x11977750 */
  push32(0x1198485fu); f_11977750();
  /* 1198485f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984862 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11984865 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11984869 je 0x11984a86 */
  if (C.zf) goto L_11984a86;
  /* 1198486f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11984872 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11984875 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11984878 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198487e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11984881 push 0xac */
  push32((uint32_t)(0xacu));
  /* 11984886 mov eax, dword ptr [0x119a2c98] */
  EAX = (r32((uint32_t)(0x119a2c98)));
  /* 1198488b push eax */
  push32((uint32_t)(EAX));
  /* 1198488c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1198488f push ecx */
  push32((uint32_t)(ECX));
  /* 11984890 call 0x1197e050 */
  push32(0x11984895u); f_1197e050();
  /* 11984895 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984898 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1198489f jmp 0x119848aa */
  goto L_119848aa;
L_119848a1:;
  /* 119848a1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119848a4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119848a7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_119848aa:;
  /* 119848aa cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119848ae jae 0x1198491e */
  if (!C.cf) goto L_1198491e;
  /* 119848b0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119848b3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119848b6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119848b9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 119848bc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119848bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119848c2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 119848c5 push edx */
  push32((uint32_t)(EDX));
  /* 119848c6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 119848c9 push eax */
  push32((uint32_t)(EAX));
  /* 119848ca call 0x1197a720 */
  push32(0x119848cfu); f_1197a720();
  /* 119848cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119848d2 push eax */
  push32((uint32_t)(EAX));
  /* 119848d3 call 0x1197a5a0 */
  push32(0x119848d8u); f_1197a5a0();
  /* 119848d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119848db mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119848de lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 119848e2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 119848e5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119848e8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119848eb mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119848ee mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 119848f2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119848f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119848f8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 119848fc push edx */
  push32((uint32_t)(EDX));
  /* 119848fd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11984900 push eax */
  push32((uint32_t)(EAX));
  /* 11984901 call 0x1197a720 */
  push32(0x11984906u); f_1197a720();
  /* 11984906 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984909 push eax */
  push32((uint32_t)(EAX));
  /* 1198490a call 0x1197a5a0 */
  push32(0x1198490fu); f_1197a5a0();
  /* 1198490f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984912 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11984915 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11984919 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1198491c jmp 0x119848a1 */
  goto L_119848a1;
L_1198491e:;
  /* 1198491e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11984925 jmp 0x11984930 */
  goto L_11984930;
L_11984927:;
  /* 11984927 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1198492a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1198492d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11984930:;
  /* 11984930 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11984934 jae 0x119849a6 */
  if (!C.cf) goto L_119849a6;
  /* 11984936 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11984939 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1198493c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1198493f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 11984943 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11984946 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11984949 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1198494d push eax */
  push32((uint32_t)(EAX));
  /* 1198494e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11984951 push ecx */
  push32((uint32_t)(ECX));
  /* 11984952 call 0x1197a720 */
  push32(0x11984957u); f_1197a720();
  /* 11984957 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198495a push eax */
  push32((uint32_t)(EAX));
  /* 1198495b call 0x1197a5a0 */
  push32(0x11984960u); f_1197a5a0();
  /* 11984960 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984963 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11984966 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1198496a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1198496d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11984970 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11984973 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11984976 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 1198497a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1198497d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11984980 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11984984 push eax */
  push32((uint32_t)(EAX));
  /* 11984985 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11984988 push ecx */
  push32((uint32_t)(ECX));
  /* 11984989 call 0x1197a720 */
  push32(0x1198498eu); f_1197a720();
  /* 1198498e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984991 push eax */
  push32((uint32_t)(EAX));
  /* 11984992 call 0x1197a5a0 */
  push32(0x11984997u); f_1197a5a0();
  /* 11984997 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1198499a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1198499d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 119849a1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 119849a4 jmp 0x11984927 */
  goto L_11984927;
L_119849a6:;
  /* 119849a6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119849a9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119849ac mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 119849b2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119849b5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 119849bb push ecx */
  push32((uint32_t)(ECX));
  /* 119849bc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119849bf push edx */
  push32((uint32_t)(EDX));
  /* 119849c0 call 0x1197a720 */
  push32(0x119849c5u); f_1197a720();
  /* 119849c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119849c8 push eax */
  push32((uint32_t)(EAX));
  /* 119849c9 call 0x1197a5a0 */
  push32(0x119849ceu); f_1197a5a0();
  /* 119849ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119849d1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119849d4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 119849d8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 119849db mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119849de mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119849e1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 119849e7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119849ea mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 119849f0 push eax */
  push32((uint32_t)(EAX));
  /* 119849f1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119849f4 push ecx */
  push32((uint32_t)(ECX));
  /* 119849f5 call 0x1197a720 */
  push32(0x119849fau); f_1197a720();
  /* 119849fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119849fd push eax */
  push32((uint32_t)(EAX));
  /* 119849fe call 0x1197a5a0 */
  push32(0x11984a03u); f_1197a5a0();
  /* 11984a03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984a06 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11984a09 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11984a0d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11984a10 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11984a13 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11984a16 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 11984a1c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11984a1f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 11984a25 push ecx */
  push32((uint32_t)(ECX));
  /* 11984a26 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11984a29 push edx */
  push32((uint32_t)(EDX));
  /* 11984a2a call 0x1197a720 */
  push32(0x11984a2fu); f_1197a720();
  /* 11984a2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984a32 push eax */
  push32((uint32_t)(EAX));
  /* 11984a33 call 0x1197a5a0 */
  push32(0x11984a38u); f_1197a5a0();
  /* 11984a38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984a3b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11984a3e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11984a42 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11984a45 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11984a48 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11984a4b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 11984a51 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11984a54 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 11984a5a push eax */
  push32((uint32_t)(EAX));
  /* 11984a5b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11984a5e push ecx */
  push32((uint32_t)(ECX));
  /* 11984a5f call 0x1197a720 */
  push32(0x11984a64u); f_1197a720();
  /* 11984a64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984a67 push eax */
  push32((uint32_t)(EAX));
  /* 11984a68 call 0x1197a5a0 */
  push32(0x11984a6du); f_1197a5a0();
  /* 11984a6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984a70 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11984a73 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11984a77 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11984a7a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11984a7d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11984a80 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_11984a86:;
  /* 11984a86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11984a89 pop esi */
  ESI = (pop32());
  /* 11984a8a mov esp, ebp */
  ESP = (EBP);
  /* 11984a8c pop ebp */
  EBP = (pop32());
  /* 11984a8d ret  */
  ESPCHK(0x11984720u, _esp0);
  ESP += 4; return;
}

/* FUN_10014a90 @ 0x11984a90 (31 bytes, 15 insns) */
void f_11984a90(void) {
  FTRACE(0x11984a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11984a90 push ebp */
  push32((uint32_t)(EBP));
  /* 11984a91 mov ebp, esp */
  EBP = (ESP);
  /* 11984a93 push 0 */
  push32((uint32_t)(0x0u));
  /* 11984a95 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11984a98 push eax */
  push32((uint32_t)(EAX));
  /* 11984a99 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11984a9c push ecx */
  push32((uint32_t)(ECX));
  /* 11984a9d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11984aa0 push edx */
  push32((uint32_t)(EDX));
  /* 11984aa1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11984aa4 push eax */
  push32((uint32_t)(EAX));
  /* 11984aa5 call 0x11984ab0 */
  push32(0x11984aaau); f_11984ab0();
  /* 11984aaa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11984aad pop ebp */
  EBP = (pop32());
  /* 11984aae ret  */
  ESPCHK(0x11984a90u, _esp0);
  ESP += 4; return;
}

